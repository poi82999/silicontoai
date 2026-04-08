"""
Custom CUDA kernels for NPU-faithful golden reference generation.

These kernels exactly replicate the NPU's 16×16 Weight-Stationary Systolic
Array arithmetic at the bit level using CuPy RawKernels.

Kernel semantics:
    psum[row][col] += int32(act[row][k]) * int32(wt[k][col])
    — No saturation, no truncation, no rounding.
    — Signed INT8 inputs, signed INT32 accumulation.
    — Matches RTL: psum_out <= psum_in + $signed(act_in) * $signed(weight_reg)
"""

from __future__ import annotations

import numpy as np

# ---------------------------------------------------------------------------
# Raw CUDA Kernel Source
# ---------------------------------------------------------------------------

_NPU_MATMUL_KERNEL_SRC = r"""
extern "C" __global__
void npu_golden_matmul(
    const signed char* __restrict__ act,
    const signed char* __restrict__ wt,
    int*               __restrict__ out,
    int M, int K, int N
) {
    // Each thread computes one output element C[row, col]
    int col = blockIdx.x * blockDim.x + threadIdx.x;
    int row = blockIdx.y * blockDim.y + threadIdx.y;

    if (row < M && col < N) {
        int acc = 0;
        for (int k = 0; k < K; k++) {
            // Signed int8 -> signed int32 multiply-accumulate
            // Exactly matches RTL: $signed(act_in) * $signed(weight_reg)
            acc += (int)act[row * K + k] * (int)wt[k * N + col];
        }
        out[row * N + col] = acc;
    }
}
"""

_NPU_BATCH_MATMUL_KERNEL_SRC = r"""
extern "C" __global__
void npu_golden_batch_matmul(
    const signed char* __restrict__ act,
    const signed char* __restrict__ wt,
    int*               __restrict__ out,
    int batch_count, int M, int K, int N
) {
    // Grid: (ceil(N/BX), ceil(M/BY), batch_count)
    int col   = blockIdx.x * blockDim.x + threadIdx.x;
    int row   = blockIdx.y * blockDim.y + threadIdx.y;
    int batch = blockIdx.z;

    if (batch < batch_count && row < M && col < N) {
        const signed char* a = act + batch * M * K;
        const signed char* w = wt  + batch * K * N;
        int* c               = out + batch * M * N;

        int acc = 0;
        for (int k = 0; k < K; k++) {
            acc += (int)a[row * K + k] * (int)w[k * N + col];
        }
        c[row * N + col] = acc;
    }
}
"""

_NPU_SPLITK_ACCUMULATE_KERNEL_SRC = r"""
extern "C" __global__
void npu_golden_splitk_accumulate(
    const int* __restrict__ partial,
    int*       __restrict__ accum,
    int num_elements,
    int acc_clear
) {
    int idx = blockIdx.x * blockDim.x + threadIdx.x;
    if (idx < num_elements) {
        if (acc_clear) {
            accum[idx] = partial[idx];
        } else {
            accum[idx] += partial[idx];
        }
    }
}
"""


# ---------------------------------------------------------------------------
# Kernel Wrappers
# ---------------------------------------------------------------------------

_compiled_kernels: dict[str, object] = {}


def _get_kernel(name: str) -> object:
    """Compile and cache a CuPy RawKernel."""
    if name in _compiled_kernels:
        return _compiled_kernels[name]

    import cupy as cp

    sources = {
        "npu_golden_matmul": _NPU_MATMUL_KERNEL_SRC,
        "npu_golden_batch_matmul": _NPU_BATCH_MATMUL_KERNEL_SRC,
        "npu_golden_splitk_accumulate": _NPU_SPLITK_ACCUMULATE_KERNEL_SRC,
    }

    if name not in sources:
        raise ValueError(f"Unknown kernel: {name}")

    kernel = cp.RawKernel(sources[name], name)
    _compiled_kernels[name] = kernel
    return kernel


def compute_matmul_rawkernel(
    act: np.ndarray,
    wt: np.ndarray,
) -> np.ndarray:
    """Single tile matmul using custom CUDA kernel.

    Exactly replicates NPU RTL signed INT8 MAC semantics.
    """
    import cupy as cp

    m, k = act.shape
    _, n = wt.shape

    act_gpu = cp.asarray(act, dtype=cp.int8)
    wt_gpu = cp.asarray(wt, dtype=cp.int8)
    out_gpu = cp.empty((m, n), dtype=cp.int32)

    kernel = _get_kernel("npu_golden_matmul")

    block = (min(16, n), min(16, m), 1)
    grid = ((n + block[0] - 1) // block[0], (m + block[1] - 1) // block[1], 1)

    kernel(grid, block, (act_gpu, wt_gpu, out_gpu, np.int32(m), np.int32(k), np.int32(n)))

    return cp.asnumpy(out_gpu)


def compute_batch_matmul_rawkernel(
    act_batch: np.ndarray,
    wt_batch: np.ndarray,
) -> np.ndarray:
    """Batched matmul using custom CUDA kernel.

    Args:
        act_batch: INT8 [batch, M, K]
        wt_batch: INT8 [batch, K, N]

    Returns:
        INT32 [batch, M, N]
    """
    import cupy as cp

    batch_count, m, k = act_batch.shape
    _, _, n = wt_batch.shape

    act_gpu = cp.asarray(act_batch.astype(np.int8))
    wt_gpu = cp.asarray(wt_batch.astype(np.int8))
    out_gpu = cp.empty((batch_count, m, n), dtype=cp.int32)

    kernel = _get_kernel("npu_golden_batch_matmul")

    block = (min(16, n), min(16, m), 1)
    grid = (
        (n + block[0] - 1) // block[0],
        (m + block[1] - 1) // block[1],
        batch_count,
    )

    kernel(
        grid,
        block,
        (act_gpu, wt_gpu, out_gpu, np.int32(batch_count), np.int32(m), np.int32(k), np.int32(n)),
    )

    return cp.asnumpy(out_gpu)


def accumulate_splitk_rawkernel(
    partial: np.ndarray,
    accum: np.ndarray,
    acc_clear: bool,
) -> np.ndarray:
    """Accumulate a partial sum into the accumulator using GPU kernel.

    Args:
        partial: INT32 partial result [M, N] from one K-pass.
        accum: INT32 accumulator [M, N] (modified in place on GPU).
        acc_clear: If True, overwrite. If False, add.

    Returns:
        Updated INT32 accumulator [M, N].
    """
    import cupy as cp

    num_elements = partial.size

    partial_gpu = cp.asarray(partial.ravel(), dtype=cp.int32)
    accum_gpu = cp.asarray(accum.ravel(), dtype=cp.int32)

    kernel = _get_kernel("npu_golden_splitk_accumulate")

    block = (256,)
    grid = ((num_elements + block[0] - 1) // block[0],)

    kernel(grid, block, (partial_gpu, accum_gpu, np.int32(num_elements), np.int32(1 if acc_clear else 0)))

    return cp.asnumpy(accum_gpu).reshape(partial.shape)
