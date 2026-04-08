"""
CUDA-accelerated Bit-Accurate NPU Golden Reference Generator.

This package provides GPU-accelerated golden data generation for the
silicontoai NPU project's 16×16 Weight-Stationary Systolic Array.

Arithmetic semantics:
  - Input:        Signed INT8 (-128 to 127)
  - Accumulation: Signed INT32
  - No saturation, no truncation
  - Matches RTL:  psum_out <= psum_in + $signed(act_in) * $signed(weight_reg)

Usage:
    from cuda.golden_accel import compute_golden_single, compute_golden_batch
"""

from .golden_accel import (
    compute_golden_batch,
    compute_golden_single,
    compute_golden_splitk,
    get_backend,
)

__all__ = [
    "compute_golden_batch",
    "compute_golden_single",
    "compute_golden_splitk",
    "get_backend",
]
