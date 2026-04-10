from __future__ import annotations

from dataclasses import dataclass
from typing import Literal

from .lowering import SupportsLinearShape, plan_linear_tiles
from .scheduler import estimate_schedule_cost, reorder_tiles


@dataclass(frozen=True)
class RooflineResult:
    """Roofline analysis summary for a GEMM workload."""

    m: int
    k: int
    n: int
    total_ops: int
    total_bytes: int
    operational_intensity: float
    peak_compute_gops: float
    peak_bandwidth_gbps: float
    memory_roof_gops: float
    achievable_gops: float
    achieved_gops: float
    utilization_percent: float
    bottleneck: Literal["compute", "memory"]
    estimated_cycles: int | None = None
    schedule_strategy: str = "weight_reuse"


def _validate_shape(shape: tuple[int, int, int]) -> tuple[int, int, int]:
    m, k, n = shape
    if m <= 0 or k <= 0 or n <= 0:
        raise ValueError("shape values must be positive integers: (m, k, n)")
    return int(m), int(k), int(n)


def _compute_workload_ops(m: int, k: int, n: int) -> int:
    # One MAC is counted as 2 ops (multiply + add).
    return 2 * m * k * n


def _compute_workload_bytes(
    m: int,
    k: int,
    n: int,
    *,
    input_elem_bytes: int,
    weight_elem_bytes: int,
    output_elem_bytes: int,
) -> int:
    if input_elem_bytes <= 0 or weight_elem_bytes <= 0 or output_elem_bytes <= 0:
        raise ValueError("Element byte sizes must be positive.")
    input_bytes = m * k * input_elem_bytes
    weight_bytes = k * n * weight_elem_bytes
    output_bytes = m * n * output_elem_bytes
    return input_bytes + weight_bytes + output_bytes


def analyze_roofline(
    shape: tuple[int, int, int],
    *,
    dma_bandwidth_gbps: float,
    mac_throughput: int,
    clock_mhz: float,
    input_elem_bytes: int = 2,
    weight_elem_bytes: int = 2,
    output_elem_bytes: int = 4,
) -> RooflineResult:
    """Compute roofline limits for a GEMM shape.

    Args:
        shape: GEMM logical shape as (M, K, N)
        dma_bandwidth_gbps: Effective DMA bandwidth in Gbit/s
        mac_throughput: Number of MACs per cycle
        clock_mhz: Core clock in MHz
        input_elem_bytes: Activation storage width in bytes
        weight_elem_bytes: Weight storage width in bytes
        output_elem_bytes: Output/accumulator width in bytes
    """
    if dma_bandwidth_gbps <= 0 or mac_throughput <= 0 or clock_mhz <= 0:
        raise ValueError("dma_bandwidth_gbps, mac_throughput, and clock_mhz must be positive.")

    m, k, n = _validate_shape(shape)

    total_ops = _compute_workload_ops(m, k, n)
    total_bytes = _compute_workload_bytes(
        m,
        k,
        n,
        input_elem_bytes=input_elem_bytes,
        weight_elem_bytes=weight_elem_bytes,
        output_elem_bytes=output_elem_bytes,
    )

    operational_intensity = total_ops / float(total_bytes)

    peak_compute_ops_per_sec = float(mac_throughput) * 2.0 * float(clock_mhz) * 1e6
    peak_bandwidth_bytes_per_sec = float(dma_bandwidth_gbps) * 1e9 / 8.0

    peak_compute_gops = peak_compute_ops_per_sec / 1e9
    peak_bandwidth_gbps_out = float(dma_bandwidth_gbps)
    memory_roof_gops = (operational_intensity * peak_bandwidth_bytes_per_sec) / 1e9

    achievable_gops = min(peak_compute_gops, memory_roof_gops)
    bottleneck: Literal["compute", "memory"] = "compute" if peak_compute_gops <= memory_roof_gops else "memory"

    return RooflineResult(
        m=m,
        k=k,
        n=n,
        total_ops=total_ops,
        total_bytes=total_bytes,
        operational_intensity=operational_intensity,
        peak_compute_gops=peak_compute_gops,
        peak_bandwidth_gbps=peak_bandwidth_gbps_out,
        memory_roof_gops=memory_roof_gops,
        achievable_gops=achievable_gops,
        achieved_gops=achievable_gops,
        utilization_percent=(achievable_gops / peak_compute_gops) * 100.0,
        bottleneck=bottleneck,
    )


def analyze_roofline_with_scheduler(
    shape: SupportsLinearShape,
    *,
    dma_bandwidth_gbps: float,
    mac_throughput: int,
    clock_mhz: float,
    strategy: str = "weight_reuse",
) -> RooflineResult:
    """Run roofline analysis and estimate achieved throughput from scheduler cycles."""
    tiles = plan_linear_tiles(shape)
    ordered = reorder_tiles(tiles, strategy=strategy)
    summary = estimate_schedule_cost(ordered, strategy=strategy)

    m = int(shape.m)
    k = int(shape.k)
    n = int(shape.n)
    base = analyze_roofline(
        (m, k, n),
        dma_bandwidth_gbps=dma_bandwidth_gbps,
        mac_throughput=mac_throughput,
        clock_mhz=clock_mhz,
    )

    estimated_cycles = max(1, int(summary.total_cycles))
    achieved_gops = base.total_ops / (estimated_cycles / (clock_mhz * 1e6)) / 1e9
    achieved_gops = min(achieved_gops, base.achievable_gops)

    return RooflineResult(
        m=base.m,
        k=base.k,
        n=base.n,
        total_ops=base.total_ops,
        total_bytes=base.total_bytes,
        operational_intensity=base.operational_intensity,
        peak_compute_gops=base.peak_compute_gops,
        peak_bandwidth_gbps=base.peak_bandwidth_gbps,
        memory_roof_gops=base.memory_roof_gops,
        achievable_gops=base.achievable_gops,
        achieved_gops=achieved_gops,
        utilization_percent=(achieved_gops / base.peak_compute_gops) * 100.0,
        bottleneck=base.bottleneck,
        estimated_cycles=estimated_cycles,
        schedule_strategy=strategy,
    )


__all__ = ["RooflineResult", "analyze_roofline", "analyze_roofline_with_scheduler"]
