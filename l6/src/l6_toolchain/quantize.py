"""
Quantization methods for NPU workload preparation.

Converts FP32 weights/activations to INT8 using three complementary techniques:

1. **Per-tensor symmetric** (baseline)
   scale = max(|W|) / 127, uniform across all channels.

2. **Per-channel symmetric** (improved accuracy)
   One scale per output-channel axis — each channel's INT8 range is fully utilised.
   Enabled by passing ``axis=`` to :func:`quantize_tensor`.

3. **SmoothQuant** (activation outlier migration)
   Shifts large-magnitude patterns from activations to weights offline:
     W' = W * diag(s),  X' = X * diag(1/s)   where s = max(|X|)^α · max(|W|)^(1-α)
   Result: balanced per-channel magnitudes → both tensors quantize cleanly.
   Hardware sees only INT8 inputs with no changes to the MAC path.

4. **GPTQ** (Hessian-guided weight correction)
   Updates weight rows to minimise the second-order reconstruction error:
     min_Ŵ  (W - Ŵ)ᵀ H (W - Ŵ)   s.t. Ŵ ∈ INT8 grid
   Approximated column-wise (lazy-batch) with a diagonal Hessian proxy.
   Purely compile-time; the corrected INT8 weights are dropped into the workload
   package with zero runtime overhead.

The NPU hardware contract:
  - Weight/activation dtype:   signed INT8   (range [-128, 127])
  - Accumulator dtype:         signed INT32
  - Zero-point:                always 0  (symmetric only)
  - MAC path:                  unchanged — all three methods are offline transforms
"""
from __future__ import annotations

from dataclasses import dataclass, field
from typing import Sequence

import numpy as np


@dataclass(frozen=True)
class QuantizeResult:
    """Result of quantizing a single tensor."""

    quantized: np.ndarray
    """INT8 quantized tensor with the same spatial shape as the input."""

    scale: float
    """Per-tensor scale.  For per-channel mode this is the *mean* channel scale
    (kept for backward-compat); use ``scales_per_channel`` for per-channel values."""

    original_dtype: str
    """String representation of the original float dtype (e.g. 'float32')."""

    max_abs_error: float
    """Max absolute quantization error |x - x_hat|."""

    mean_abs_error: float
    """Mean absolute quantization error across all elements."""

    scales_per_channel: np.ndarray | None = None
    """Shape ``(C,)`` float64 array of per-channel scales, or ``None`` for per-tensor."""

    axis: int | None = None
    """The channel axis used for per-channel quantization, or ``None``."""

    @property
    def zero_point(self) -> int:
        """Always 0 for symmetric quantization."""
        return 0

    @property
    def is_per_channel(self) -> bool:
        """True when per-channel scales are available."""
        return self.scales_per_channel is not None


def quantize_tensor(
    tensor: np.ndarray,
    *,
    saturate: bool = True,
    axis: int | None = None,
) -> QuantizeResult:
    """Quantize a float tensor to signed INT8.

    Parameters
    ----------
    tensor:
        Input float array (any shape). Must be float32, float64, or float16.
    saturate:
        If True (default), values beyond INT8 range are clamped to [-128, 127].
    axis:
        If given, per-channel quantization is applied along this axis.
        Each slice along *axis* gets its own scale factor.
        ``axis=0`` is typical for Linear weight (out_features axis).
        ``axis=0`` for Conv2d weight (out_channels axis).
        If ``None`` (default), per-tensor quantization is used.

    Returns
    -------
    QuantizeResult with INT8 tensor and metadata.

    Raises
    ------
    TypeError:
        If ``tensor`` is not a floating-point array.
    ValueError:
        If ``tensor`` has zero elements, or *axis* is out of range.
    """
    tensor = np.asarray(tensor)
    if not np.issubdtype(tensor.dtype, np.floating):
        raise TypeError(
            f"quantize_tensor expects a floating-point array, got {tensor.dtype}."
        )
    if tensor.size == 0:
        raise ValueError("quantize_tensor: tensor must have at least one element.")

    original_dtype = str(tensor.dtype)

    if axis is None:
        return _quantize_per_tensor(tensor, saturate=saturate, original_dtype=original_dtype)
    return _quantize_per_channel(tensor, axis=axis, saturate=saturate, original_dtype=original_dtype)


def _quantize_per_tensor(
    tensor: np.ndarray,
    *,
    saturate: bool,
    original_dtype: str,
) -> QuantizeResult:
    max_abs = float(np.max(np.abs(tensor)))
    if max_abs == 0.0:
        scale = 1.0
    else:
        scale = max_abs / 127.0

    q_float = tensor / scale
    q_rounded = np.round(q_float)

    if saturate:
        q_int8 = np.clip(q_rounded, -128, 127).astype(np.int8)
    else:
        q_int8 = q_rounded.astype(np.int8)

    reconstructed = q_int8.astype(np.float64) * scale
    original_f64 = tensor.astype(np.float64)
    abs_err = np.abs(original_f64 - reconstructed)

    return QuantizeResult(
        quantized=q_int8,
        scale=scale,
        original_dtype=original_dtype,
        max_abs_error=float(np.max(abs_err)),
        mean_abs_error=float(np.mean(abs_err)),
        scales_per_channel=None,
        axis=None,
    )


def _quantize_per_channel(
    tensor: np.ndarray,
    *,
    axis: int,
    saturate: bool,
    original_dtype: str,
) -> QuantizeResult:
    ndim = tensor.ndim
    if axis < -ndim or axis >= ndim:
        raise ValueError(
            f"quantize_tensor: axis={axis} out of range for tensor with {ndim} dimensions."
        )
    # Normalise negative axis
    axis = axis % ndim

    n_channels = tensor.shape[axis]
    # Move channel axis to front for uniform slicing
    tensor_moved = np.moveaxis(tensor, axis, 0)  # (C, ...)
    flat = tensor_moved.reshape(n_channels, -1)   # (C, K) — each row is one channel

    scales = np.where(
        np.max(np.abs(flat), axis=1) == 0.0,
        1.0,
        np.max(np.abs(flat), axis=1) / 127.0,
    ).astype(np.float64)  # (C,)

    # Broadcast scales for division: (C, 1)
    scales_bc = scales[:, np.newaxis]
    q_float = flat / scales_bc
    q_rounded = np.round(q_float)

    if saturate:
        q_int8_flat = np.clip(q_rounded, -128, 127).astype(np.int8)
    else:
        q_int8_flat = q_rounded.astype(np.int8)

    # Reshape back to original tensor shape (channel axis at front), then restore axis position
    q_int8_moved = q_int8_flat.reshape(tensor_moved.shape)
    q_int8 = np.moveaxis(q_int8_moved, 0, axis)

    # Reconstruction error
    reconstructed_flat = q_int8_flat.astype(np.float64) * scales_bc
    original_flat = flat.astype(np.float64)
    abs_err = np.abs(original_flat - reconstructed_flat)

    mean_scale = float(np.mean(scales))

    return QuantizeResult(
        quantized=q_int8,
        scale=mean_scale,
        original_dtype=original_dtype,
        max_abs_error=float(np.max(abs_err)),
        mean_abs_error=float(np.mean(abs_err)),
        scales_per_channel=scales,
        axis=axis,
    )


def dequantize_tensor(
    quantized: np.ndarray,
    scale: float | np.ndarray,
    *,
    axis: int | None = None,
) -> np.ndarray:
    """Reconstruct a float32 tensor from INT8 quantized values.

    Parameters
    ----------
    quantized:
        INT8 array produced by :func:`quantize_tensor`.
    scale:
        Scalar scale (per-tensor) or 1-D array of per-channel scales.
    axis:
        Channel axis corresponding to the scale array.  Required when
        *scale* is an ndarray; ignored for scalar scale.

    Returns
    -------
    float32 array with the same shape as *quantized*.
    """
    quantized = np.asarray(quantized)
    if quantized.dtype != np.int8:
        quantized = quantized.astype(np.int8)

    scale_arr = np.asarray(scale)
    if scale_arr.ndim == 0:
        # Scalar — per-tensor
        return quantized.astype(np.float32) * np.float32(scale_arr)

    # Per-channel
    if axis is None:
        raise ValueError(
            "dequantize_tensor: axis is required when scale is a 1-D array."
        )
    ndim = quantized.ndim
    axis = axis % ndim
    # Broadcast: reshape scales to (1, ..., C, ..., 1) matching quantized shape
    shape = [1] * ndim
    shape[axis] = -1
    return (quantized.astype(np.float32)) * scale_arr.reshape(shape).astype(np.float32)


@dataclass(frozen=True)
class LayerQuantizeResult:
    """Quantization result for a single Linear/Conv layer."""

    weight: QuantizeResult
    """Quantized weight tensor."""

    bias: np.ndarray | None
    """Bias vector (float32, kept in float for accumulation), or None."""

    weight_scale: float
    """Convenience alias for weight.scale."""


def quantize_linear_layer(
    weight: np.ndarray,
    bias: np.ndarray | None = None,
    *,
    per_channel: bool = True,
) -> LayerQuantizeResult:
    """Quantize a nn.Linear weight matrix to INT8.

    Parameters
    ----------
    weight:
        Float weight tensor, shape (out_features, in_features) as stored by
        PyTorch (transposed relative to the GEMM K×N convention).
    bias:
        Optional float bias vector, shape (out_features,).  Kept in float32
        because the hardware accumulates to INT32 before adding bias.
    per_channel:
        If True (default), use per-output-channel quantization (``axis=0``).
        Set to False to fall back to per-tensor quantization.

    Returns
    -------
    LayerQuantizeResult
    """
    weight = np.asarray(weight, dtype=np.float32)
    q_weight = quantize_tensor(weight, axis=0 if per_channel else None)

    bias_f32: np.ndarray | None = None
    if bias is not None:
        bias_f32 = np.asarray(bias, dtype=np.float32)

    return LayerQuantizeResult(
        weight=q_weight,
        bias=bias_f32,
        weight_scale=q_weight.scale,
    )


def quantize_conv2d_layer(
    weight: np.ndarray,
    bias: np.ndarray | None = None,
    *,
    per_channel: bool = True,
) -> LayerQuantizeResult:
    """Quantize a nn.Conv2d weight tensor to INT8.

    Parameters
    ----------
    weight:
        Float weight tensor, shape (out_channels, in_channels, kH, kW).
    bias:
        Optional float bias vector, shape (out_channels,).
    per_channel:
        If True (default), use per-output-channel quantization (``axis=0``).
        Set to False to fall back to per-tensor quantization.

    Returns
    -------
    LayerQuantizeResult
    """
    weight = np.asarray(weight, dtype=np.float32)
    q_weight = quantize_tensor(weight, axis=0 if per_channel else None)

    bias_f32: np.ndarray | None = None
    if bias is not None:
        bias_f32 = np.asarray(bias, dtype=np.float32)

    return LayerQuantizeResult(
        weight=q_weight,
        bias=bias_f32,
        weight_scale=q_weight.scale,
    )


def check_quantization_error(
    original: np.ndarray,
    scale: float,
    *,
    rtol: float = 0.05,
) -> bool:
    """Return True if the quantization error is within acceptable tolerance.

    The check passes when  mean_abs_error / max(|original|) <= rtol.
    For all-zero tensors the check always passes.

    Parameters
    ----------
    original:
        Original float array.
    scale:
        Scale factor used during quantization.
    rtol:
        Relative tolerance (default 5%).
    """
    original = np.asarray(original, dtype=np.float64)
    max_abs = float(np.max(np.abs(original)))
    if max_abs == 0.0:
        return True

    q_int8 = np.clip(np.round(original / scale), -128, 127).astype(np.int8)
    reconstructed = q_int8.astype(np.float64) * scale
    mean_err = float(np.mean(np.abs(original - reconstructed)))

    return (mean_err / max_abs) <= rtol


def quantize_activation(
    activation: np.ndarray,
) -> QuantizeResult:
    """Quantize an activation tensor to signed INT8.

    Convenience wrapper around :func:`quantize_tensor` for activation inputs.
    Activations use the same symmetric per-tensor scheme as weights.
    """
    return quantize_tensor(np.asarray(activation, dtype=np.float32))


# ---------------------------------------------------------------------------
# SmoothQuant
# ---------------------------------------------------------------------------

@dataclass(frozen=True)
class SmoothQuantResult:
    """Result of the SmoothQuant offline weight/activation scale migration.

    After applying :func:`smooth_quant` the caller should quantize
    ``smoothed_weight`` and ``smoothed_activation`` independently with either
    per-tensor or per-channel quantization.  The hardware MAC path is
    unchanged — only the float pre-processing differs.
    """

    smoothed_weight: np.ndarray
    """float32 weight after migration: W' = W * diag(s)."""

    smoothed_activation: np.ndarray
    """float32 activation reference after migration: X' = X / s (broadcasted
    along the in-channel axis).  For a calibration-stats-only workflow this is
    the *per-channel max absolute value* after division, not a full activation
    tensor."""

    scale_vector: np.ndarray
    """Shape ``(in_features,)`` float64 migration scales
    ``s_j = max|X_j|^alpha * max|W_j|^(1-alpha)``."""

    alpha: float
    """Migration strength in [0, 1].  alpha=0 → all scaling onto weights;
    alpha=1 → all scaling onto activations."""


def smooth_quant(
    weight: np.ndarray,
    activation_stats: np.ndarray,
    *,
    alpha: float = 0.5,
) -> SmoothQuantResult:
    """Apply the SmoothQuant offline scale-migration transform.

    Migrates large-magnitude outliers from activations to weights so that
    both tensors have balanced per-channel magnitudes and quantize cleanly
    to INT8 without losing accuracy.

    The migration formula for in-channel *j* is::

        s_j = max(|X_j|) ** alpha * max(|W_j|) ** (1 - alpha)
        W'[:, j] = W[:, j] * s_j          # weight absorbs s
        X'[:, j] = X[:, j] / s_j          # activation loses s  (net: X'W' = XW)

    Parameters
    ----------
    weight:
        Float weight tensor.  Shape ``(out_features, in_features)`` for Linear
        layers, or ``(out_channels, in_channels, kH, kW)`` for Conv2d.
        The *in-channel* axis is always ``axis=1`` (index 1 after the output
        channel).
    activation_stats:
        Per-in-channel max absolute activation values gathered from a
        calibration dataset.  Shape ``(in_features,)`` (or ``(in_channels,)``
        for conv weights).  Must be positive-valued.
    alpha:
        Migration strength in [0, 1].  Default 0.5 gives equal contribution
        from activations and weights (recommended by the SmoothQuant paper).

    Returns
    -------
    SmoothQuantResult

    Raises
    ------
    ValueError:
        If *weight* has fewer than 2 dimensions, *activation_stats* has the
        wrong shape, or *alpha* is outside [0, 1].
    """
    weight = np.asarray(weight, dtype=np.float32)
    activation_stats = np.asarray(activation_stats, dtype=np.float64)

    if weight.ndim < 2:
        raise ValueError(
            f"smooth_quant: weight must have at least 2 dimensions, got {weight.ndim}."
        )
    if not (0.0 <= alpha <= 1.0):
        raise ValueError(f"smooth_quant: alpha must be in [0, 1], got {alpha}.")

    in_channels = weight.shape[1]
    if activation_stats.shape != (in_channels,):
        raise ValueError(
            f"smooth_quant: activation_stats must have shape ({in_channels},), "
            f"got {activation_stats.shape}."
        )

    # Per-in-channel max abs for weight: collapse all axes except axis=1
    # For Linear: shape (out, in) → max over axis 0
    # For Conv:   shape (out, in, kH, kW) → max over axes (0, 2, 3, ...)
    axes_except_1 = tuple(i for i in range(weight.ndim) if i != 1)
    w_stats = np.max(np.abs(weight.astype(np.float64)), axis=axes_except_1)  # (in_channels,)

    # Avoid zero division: if a channel is all-zero, set scale to 1
    x_clamped = np.where(activation_stats <= 0.0, 1.0, activation_stats)
    w_clamped = np.where(w_stats <= 0.0, 1.0, w_stats)

    scale_vector = (x_clamped ** alpha) * (w_clamped ** (1.0 - alpha))  # (in_channels,)

    # Apply migration: W' = W * s, broadcast s along in-channel axis (axis=1)
    # Build broadcast shape: (1, in_channels, 1, 1, ...) to match weight dims
    bc_shape = [1] * weight.ndim
    bc_shape[1] = in_channels
    s_bc = scale_vector.reshape(bc_shape).astype(np.float32)
    smoothed_weight = weight * s_bc  # (out, in, ...) * (1, in, ...) → (out, in, ...)

    # X' = X_stats / s  (per-channel, same shape as activation_stats)
    smoothed_activation = (activation_stats / scale_vector).astype(np.float32)

    return SmoothQuantResult(
        smoothed_weight=smoothed_weight,
        smoothed_activation=smoothed_activation,
        scale_vector=scale_vector,
        alpha=alpha,
    )


# ---------------------------------------------------------------------------
# GPTQ
# ---------------------------------------------------------------------------

@dataclass(frozen=True)
class GPTQResult:
    """Result of GPTQ Hessian-guided column-wise weight quantization.

    The quantized weight uses *per-row* (per-output-channel) scales so the
    hardware `scale` register receives one entry per output neuron — identical
    to the per-channel quantization scheme already supported by the NPU.
    """

    quantized_weight: np.ndarray
    """INT8 quantized weight, shape ``(out_features, in_features)``."""

    scales: np.ndarray
    """float64 per-row scale array, shape ``(out_features,)``."""

    correction_mse: float
    """Mean squared error between the original float weight and the INT8
    reconstruction *after* error propagation.  Lower is better."""


def gptq_quantize_weight(
    weight: np.ndarray,
    hessian_diag: np.ndarray | None = None,
    *,
    blocksize: int = 128,
) -> GPTQResult:
    """Quantize a weight matrix with GPTQ-style column-wise error propagation.

    Minimises the Hessian-weighted reconstruction error::

        E = (W - Q)^T H (W - Q)

    by processing columns left-to-right within fixed-size blocks and
    redistributing the quantization error of each column to future columns
    inside the same block.  Uses a diagonal Hessian approximation which is
    inexpensive to obtain from calibration activations.

    When ``hessian_diag`` is ``None`` (uniform importance), setting
    ``blocksize=1`` recovers exact per-channel quantization with ``axis=0``.

    Parameters
    ----------
    weight:
        Float weight matrix, shape ``(out_features, in_features)``.
        Must be 2-D (flatten Conv2d weights before calling if needed).
    hessian_diag:
        Diagonal of the input-activation Hessian, shape ``(in_features,)``.
        Approximated as ``diag(2 * X^T X / N)`` over a calibration dataset.
        If ``None``, a uniform vector of ones is used (no importance weighting).
    blocksize:
        Number of input columns processed per block.  Larger blocks expose
        more error-propagation opportunities.  Default 128.

    Returns
    -------
    GPTQResult

    Raises
    ------
    ValueError:
        If *weight* is not 2-D or *hessian_diag* has the wrong shape.
    """
    weight = np.asarray(weight, dtype=np.float32)
    if weight.ndim != 2:
        raise ValueError(
            f"gptq_quantize_weight expects a 2-D weight matrix, got shape {weight.shape}."
        )

    out_features, in_features = weight.shape

    if hessian_diag is None:
        h = np.ones(in_features, dtype=np.float64)
    else:
        h = np.asarray(hessian_diag, dtype=np.float64)
        if h.shape != (in_features,):
            raise ValueError(
                f"hessian_diag must have shape ({in_features},), got {h.shape}."
            )
        # Regularise to avoid numerical instability
        h = np.where(h < 1e-10, 1e-10, h)

    # Per-row (out-channel) scale derived from the *original* weight max abs
    max_abs = np.max(np.abs(weight), axis=1).astype(np.float64)  # (out,)
    scales = np.where(max_abs == 0.0, 1.0, max_abs / 127.0)      # (out,)

    # Working copy for in-place error propagation
    W = weight.astype(np.float64).copy()
    Q = np.zeros((out_features, in_features), dtype=np.int8)

    for col_start in range(0, in_features, blocksize):
        col_end = min(col_start + blocksize, in_features)

        for j in range(col_start, col_end):
            # Quantize current column using fixed per-row scales
            q_col = np.clip(np.round(W[:, j] / scales), -128, 127).astype(np.int8)
            Q[:, j] = q_col

            # Propagate quantization error to remaining columns in this block
            if j + 1 < col_end:
                err = (W[:, j] - q_col.astype(np.float64) * scales) / h[j]
                W[:, j + 1 : col_end] -= np.outer(err, h[j + 1 : col_end])

    # Final reconstruction error (after propagation)
    reconstructed = Q.astype(np.float64) * scales[:, np.newaxis]
    correction_mse = float(np.mean((weight.astype(np.float64) - reconstructed) ** 2))

    return GPTQResult(
        quantized_weight=Q,
        scales=scales,
        correction_mse=correction_mse,
    )
