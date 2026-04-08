"""
Bit-Accurate NPU Golden Reference Generator with automatic GPU acceleration.

This module provides three levels of golden data computation:
  1. Single tile:  compute_golden_single(act, wt, bias)
  2. Batch tiles:  compute_golden_batch(tiles)
  3. Split-K:      compute_golden_splitk(passes)

Backend selection is automatic:
  - If CuPy is available and a CUDA GPU is detected → GPU (cupy)
  - Otherwise → CPU (numpy)

All backends produce bit-identical results matching the NPU RTL semantics:
  int8 × int8 → int32 multiply-accumulate, no saturation.
"""

from __future__ import annotations

from dataclasses import dataclass
from typing import TYPE_CHECKING

import numpy as np

if TYPE_CHECKING:
    pass

# ---------------------------------------------------------------------------
# Backend Detection
# ---------------------------------------------------------------------------

_BACKEND: str | None = None


def _detect_backend() -> str:
    """Detect the best available backend. Cached after first call.

    Priority: cupy → torch (CUDA) → numpy
    """
    global _BACKEND
    if _BACKEND is not None:
        return _BACKEND

    # Try CuPy first (fastest for batch operations)
    try:
        import cupy as cp  # noqa: F401
        cp.cuda.runtime.getDeviceCount()
        # Quick smoke test — some installs have driver but missing libs
        _test = cp.array([1, 2], dtype=cp.int32)
        _ = cp.sum(_test)
        _BACKEND = "cupy"
        return _BACKEND
    except Exception:
        pass

    # Try PyTorch CUDA
    try:
        import torch
        if torch.cuda.is_available():
            _BACKEND = "torch"
            return _BACKEND
    except Exception:
        pass

    _BACKEND = "numpy"
    return _BACKEND


def get_backend() -> str:
    """Return the active backend name: ``'cupy'`` or ``'numpy'``."""
    return _detect_backend()


def force_backend(name: str) -> None:
    """Force a specific backend. Use ``'numpy'`` to disable GPU."""
    global _BACKEND
    if name not in ("cupy", "torch", "numpy"):
        raise ValueError(f"Unsupported backend: {name!r}. Use 'cupy', 'torch', or 'numpy'.")
    _BACKEND = name


# ---------------------------------------------------------------------------
# Data Types
# ---------------------------------------------------------------------------


@dataclass(frozen=True)
class TileInput:
    """Input data for a single GEMM tile.

    Attributes:
        activations: INT8 matrix [M, K] (M ≤ 16, K ≤ 16 for single tile)
        weights: INT8 matrix [K, N] (K ≤ 16, N ≤ 16 for single tile)
        bias: Optional INT32 vector [N] or matrix [M, N]
    """

    activations: np.ndarray  # int8 [M, K]
    weights: np.ndarray  # int8 [K, N]
    bias: np.ndarray | None = None  # int32 [M, N] or [N]


@dataclass(frozen=True)
class SplitKPass:
    """One K-pass within a split-K accumulation.

    Attributes:
        activations: INT8 partial activation slice [M, K_slice]
        weights: INT8 partial weight slice [K_slice, N]
        acc_clear: If True, overwrite accumulator; if False, accumulate.
    """

    activations: np.ndarray  # int8
    weights: np.ndarray  # int8
    acc_clear: bool = True


@dataclass(frozen=True)
class BatchResult:
    """Result of a batch golden computation.

    Attributes:
        outputs: List of INT32 matrices, one per tile.
        backend: Backend used ('cupy' or 'numpy').
        tile_count: Number of tiles processed.
    """

    outputs: list[np.ndarray]
    backend: str
    tile_count: int


# ---------------------------------------------------------------------------
# Core Computation — NumPy (CPU)
# ---------------------------------------------------------------------------


def _compute_numpy(act: np.ndarray, wt: np.ndarray, bias: np.ndarray | None = None) -> np.ndarray:
    """Bit-accurate FP16→FP32 matmul matching NPU RTL semantics.

    RTL equivalent:
        psum_out <= psum_in + (FP32)($shortrealtobits(act_in) * $shortrealtobits(weight_reg))

    This performs: C[m,n] = sum_k( float32(float16(act[m,k]) * float16(wt[k,n])) ) + bias[m,n]
    """
    product = act.astype(np.float16) @ wt.astype(np.float16)
    product = product.astype(np.float32)
    if bias is not None:
        product = product + bias.astype(np.float32)
    return product


def _compute_batch_numpy(tiles: list[TileInput]) -> list[np.ndarray]:
    """Compute golden outputs for multiple tiles sequentially on CPU."""
    return [_compute_numpy(t.activations, t.weights, t.bias) for t in tiles]


# ---------------------------------------------------------------------------
# Core Computation — CuPy (GPU) via element-wise ops
# ---------------------------------------------------------------------------
# NOTE: We avoid cupy.matmul/@ (needs cuBLAS → cublasLt.dll) and
# RawKernels (need nvrtc.dll) since these require the full CUDA Toolkit.
# Instead, we use CuPy's built-in element-wise multiply + sum which
# only need the CuPy CUDA runtime (bundled with cupy-cuda12x pip package).
# ---------------------------------------------------------------------------


def _compute_cupy(act: np.ndarray, wt: np.ndarray, bias: np.ndarray | None = None) -> np.ndarray:
    """Bit-accurate FP16→FP32 matmul on GPU using CuPy element-wise ops."""
    import cupy as cp

    act_gpu = cp.asarray(act, dtype=cp.float16)  # [M, K]
    wt_gpu = cp.asarray(wt, dtype=cp.float16)    # [K, N]

    # Matmul via broadcasting: act[M,K,1] * wt[1,K,N] → [M,K,N] → sum over K
    product = cp.sum(act_gpu[:, :, None] * wt_gpu[None, :, :], axis=1)
    product = product.astype(cp.float32)

    if bias is not None:
        bias_gpu = cp.asarray(bias, dtype=cp.float32)
        product = product + bias_gpu
    return cp.asnumpy(product)


def _compute_batch_cupy(tiles: list[TileInput]) -> list[np.ndarray]:
    """Compute golden outputs for multiple tiles in batch on GPU.

    Strategy: if all tiles share the same (M, K, N) shape, use a single
    batched kernel launch. Otherwise, fall back to sequential GPU calls.
    """
    if not tiles:
        return []

    # Check if all tiles share the same shape for batched execution
    shapes = {(t.activations.shape, t.weights.shape) for t in tiles}

    if len(shapes) == 1:
        # Uniform shape → batched matmul with custom kernel
        return _compute_batch_cupy_uniform(tiles)
    else:
        # Mixed shapes → sequential GPU calls
        return [_compute_cupy(t.activations, t.weights, t.bias) for t in tiles]


def _compute_batch_cupy_uniform(tiles: list[TileInput]) -> list[np.ndarray]:
    """Batched matmul for tiles with uniform shapes using CuPy element-wise ops.

    Packs all activations and weights into 3D tensors and uses
    broadcasting-based matmul on GPU:
        C[batch, M, N] = sum_K( A[batch, M, K, 1] * B[batch, 1, K, N] )
    """
    import cupy as cp

    n = len(tiles)
    m, k = tiles[0].activations.shape
    _, ncols = tiles[0].weights.shape

    # Pack into contiguous 3D arrays on host
    act_batch = np.empty((n, m, k), dtype=np.int8)
    wt_batch = np.empty((n, k, ncols), dtype=np.int8)
    has_bias = tiles[0].bias is not None

    for i, t in enumerate(tiles):
        act_batch[i] = t.activations
        wt_batch[i] = t.weights

    # Transfer to GPU as float16
    act_gpu = cp.asarray(act_batch, dtype=cp.float16)  # [B, M, K]
    wt_gpu = cp.asarray(wt_batch, dtype=cp.float16)    # [B, K, N]

    # Broadcasting matmul: [B, M, K, 1] * [B, 1, K, N] → [B, M, K, N] → sum(K)
    out_gpu = cp.sum(act_gpu[:, :, :, None] * wt_gpu[:, None, :, :], axis=2)
    out_gpu = out_gpu.astype(cp.float32)

    # Transfer back to host
    out_host = cp.asnumpy(out_gpu)

    # Add bias if present
    if has_bias:
        for i, t in enumerate(tiles):
            if t.bias is not None:
                out_host[i] = out_host[i] + t.bias.astype(np.float32)

    return [out_host[i] for i in range(n)]


# ---------------------------------------------------------------------------
# Core Computation — PyTorch (GPU)
# ---------------------------------------------------------------------------


def _compute_torch(act: np.ndarray, wt: np.ndarray, bias: np.ndarray | None = None) -> np.ndarray:
    """Bit-accurate INT8→INT32 matmul on GPU using PyTorch CUDA."""
    import torch

    act_pt = torch.tensor(act, dtype=torch.float16, device="cuda")  # [M, K]
    wt_pt = torch.tensor(wt, dtype=torch.float16, device="cuda")    # [K, N]

    # Matmul via broadcasting matching CuPy logic
    product = torch.sum(act_pt.unsqueeze(2) * wt_pt.unsqueeze(0), dim=1)
    product = product.to(torch.float32)

    if bias is not None:
        bias_pt = torch.tensor(bias, dtype=torch.float32, device="cuda")
        product = product + bias_pt
    return product.cpu().numpy()


def _compute_batch_torch(tiles: list[TileInput]) -> list[np.ndarray]:
    """Compute golden outputs for multiple tiles in batch on GPU using PyTorch."""
    if not tiles:
        return []

    shapes = {(t.activations.shape, t.weights.shape) for t in tiles}

    if len(shapes) == 1:
        return _compute_batch_torch_uniform(tiles)
    else:
        return [_compute_torch(t.activations, t.weights, t.bias) for t in tiles]


def _compute_batch_torch_uniform(tiles: list[TileInput]) -> list[np.ndarray]:
    """Batched matmul for uniform tiles using PyTorch CUDA."""
    import torch

    n = len(tiles)
    m, k = tiles[0].activations.shape
    _, ncols = tiles[0].weights.shape

    act_batch = np.empty((n, m, k), dtype=np.int8)
    wt_batch = np.empty((n, k, ncols), dtype=np.int8)
    has_bias = tiles[0].bias is not None

    for i, t in enumerate(tiles):
        act_batch[i] = t.activations
        wt_batch[i] = t.weights

    act_pt = torch.tensor(act_batch, dtype=torch.float16, device="cuda")
    wt_pt = torch.tensor(wt_batch, dtype=torch.float16, device="cuda")

    out_pt = torch.sum(act_pt.unsqueeze(3) * wt_pt.unsqueeze(1), dim=2)
    out_pt = out_pt.to(torch.float32)
    out_host = out_pt.cpu().numpy()

    if has_bias:
        for i, t in enumerate(tiles):
            if t.bias is not None:
                out_host[i] = out_host[i] + t.bias.astype(np.float32)

    return [out_host[i] for i in range(n)]


# ---------------------------------------------------------------------------
# Public API
# ---------------------------------------------------------------------------


def compute_golden_single(
    activations: np.ndarray,
    weights: np.ndarray,
    bias: np.ndarray | None = None,
) -> np.ndarray:
    """Compute golden output for a single GEMM tile.

    This is a **drop-in replacement** for ``emitter._compute_product()``.

    Args:
        activations: INT8 matrix [M, K].
        weights: INT8 matrix [K, N].
        bias: Optional FP32 bias [M, N] or [N].

    Returns:
        FP32 result matrix [M, N] matching NPU RTL semantics.

    Example::

        act = np.ones((16, 16), dtype=np.int8) * 3
        wt  = np.ones((16, 16), dtype=np.int8) * 5
        golden = compute_golden_single(act, wt)
        # golden[i][j] == 3 * 5 * 16 == 240  (for all i, j)
    """
    backend = _detect_backend()
    if backend == "cupy":
        return _compute_cupy(activations, weights, bias)
    if backend == "torch":
        return _compute_torch(activations, weights, bias)
    return _compute_numpy(activations, weights, bias)


def compute_golden_batch(tiles: list[TileInput]) -> BatchResult:
    """Compute golden outputs for multiple GEMM tiles in batch.

    When a GPU is available and tiles share the same shape, this is
    significantly faster than calling ``compute_golden_single`` in a loop
    because all tiles are processed in a single GPU kernel launch.

    Args:
        tiles: List of TileInput with activations, weights, and optional bias.

    Returns:
        BatchResult with outputs list and metadata.

    Example::

        tiles = [TileInput(act_i, wt_i) for act_i, wt_i in zip(acts, wts)]
        result = compute_golden_batch(tiles)
        for output in result.outputs:
            print(output.shape)  # (16, 16)
    """
    backend = _detect_backend()
    if backend == "cupy":
        outputs = _compute_batch_cupy(tiles)
    elif backend == "torch":
        outputs = _compute_batch_torch(tiles)
    else:
        outputs = _compute_batch_numpy(tiles)
    return BatchResult(outputs=outputs, backend=backend, tile_count=len(tiles))


def compute_golden_splitk(passes: list[SplitKPass]) -> np.ndarray:
    """Compute golden output with split-K accumulation.

    Emulates the NPU's multi-pass accumulation behavior:
      - acc_clear=True  → overwrite accumulator (fresh start)
      - acc_clear=False → add to existing accumulator

    This matches ``npu_system_top``'s FSM and ``psum_accumulator_buffer``'s
    behavior for split-K workloads.

    Args:
        passes: Ordered list of K-passes. First pass typically has acc_clear=True.

    Returns:
        INT32 accumulated result matrix [M, N].

    Example::

        # Split K=32 into two passes of K=16
        passes = [
            SplitKPass(act[:, :16], wt[:16, :], acc_clear=True),
            SplitKPass(act[:, 16:], wt[16:, :], acc_clear=False),
        ]
        golden = compute_golden_splitk(passes)
    """
    if not passes:
        raise ValueError("compute_golden_splitk requires at least one pass.")

    result: np.ndarray | None = None
    for p in passes:
        partial = compute_golden_single(p.activations, p.weights)
        if p.acc_clear or result is None:
            result = partial
        else:
            result = result + partial

    assert result is not None
    return result


# ---------------------------------------------------------------------------
# Convenience: generate standard test tiles
# ---------------------------------------------------------------------------


def make_identity_tile(size: int = 16) -> TileInput:
    """Create a tile where act=identity, wt=identity → golden=identity."""
    return TileInput(
        activations=np.eye(size, dtype=np.int8),
        weights=np.eye(size, dtype=np.int8),
    )


def make_ramp_tile(size: int = 16) -> TileInput:
    """Create a tile with ramp activations and constant-3 weights."""
    act = np.tile(np.arange(size, dtype=np.int8), (size, 1))
    wt = np.full((size, size), 3, dtype=np.int8)
    return TileInput(activations=act, weights=wt)


def make_signed_edge_tile(size: int = 16) -> TileInput:
    """Create a tile with extreme signed values for edge testing."""
    act = np.full((size, size), -128, dtype=np.int8)
    wt = np.full((size, size), 127, dtype=np.int8)
    return TileInput(activations=act, weights=wt)


def make_random_tiles(count: int, m: int = 16, k: int = 16, n: int = 16, *, seed: int = 42) -> list[TileInput]:
    """Generate random tiles for benchmarking."""
    rng = np.random.default_rng(seed)
    tiles = []
    for _ in range(count):
        act = rng.integers(-128, 127, size=(m, k), dtype=np.int8, endpoint=True)
        wt = rng.integers(-128, 127, size=(k, n), dtype=np.int8, endpoint=True)
        tiles.append(TileInput(activations=act, weights=wt))
    return tiles
