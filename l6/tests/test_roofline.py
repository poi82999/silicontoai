from __future__ import annotations

import pytest

from l6_toolchain.api import analyze_roofline, analyze_roofline_with_scheduler
from l6_toolchain.roofline_profiles import get_roofline_profile, list_roofline_profiles, resolve_roofline_profile


def test_analyze_roofline_basic_fields() -> None:
    result = analyze_roofline(
        (16, 16, 16),
        dma_bandwidth_gbps=3.2,
        mac_throughput=256,
        clock_mhz=100.0,
    )

    assert result.total_ops == 2 * 16 * 16 * 16
    assert result.total_bytes == (16 * 16 * 2) + (16 * 16 * 2) + (16 * 16 * 4)
    assert result.operational_intensity > 0.0
    assert result.peak_compute_gops > 0.0
    assert result.achievable_gops > 0.0
    assert 0.0 < result.utilization_percent <= 100.0


def test_analyze_roofline_compute_bound_case() -> None:
    # High operational intensity and very high bandwidth should make compute the limiter.
    result = analyze_roofline(
        (256, 256, 256),
        dma_bandwidth_gbps=1_000.0,
        mac_throughput=256,
        clock_mhz=100.0,
    )

    assert result.bottleneck == "compute"
    assert result.memory_roof_gops >= result.peak_compute_gops


def test_analyze_roofline_memory_bound_case() -> None:
    # Low bandwidth should force memory-bound regardless of shape.
    result = analyze_roofline(
        (16, 16, 16),
        dma_bandwidth_gbps=0.1,
        mac_throughput=256,
        clock_mhz=100.0,
    )

    assert result.bottleneck == "memory"
    assert result.memory_roof_gops < result.peak_compute_gops


def test_analyze_roofline_rejects_invalid_shape() -> None:
    with pytest.raises(ValueError, match="shape values must be positive"):
        analyze_roofline((0, 16, 16), dma_bandwidth_gbps=3.2, mac_throughput=256, clock_mhz=100.0)


def test_analyze_roofline_rejects_invalid_platform_params() -> None:
    with pytest.raises(ValueError, match="must be positive"):
        analyze_roofline((16, 16, 16), dma_bandwidth_gbps=0.0, mac_throughput=256, clock_mhz=100.0)
    with pytest.raises(ValueError, match="must be positive"):
        analyze_roofline((16, 16, 16), dma_bandwidth_gbps=3.2, mac_throughput=0, clock_mhz=100.0)
    with pytest.raises(ValueError, match="must be positive"):
        analyze_roofline((16, 16, 16), dma_bandwidth_gbps=3.2, mac_throughput=256, clock_mhz=0.0)


class _Shape:
    def __init__(self, m: int, k: int, n: int) -> None:
        self.m = m
        self.k = k
        self.n = n


def test_analyze_roofline_with_scheduler_populates_cycle_fields() -> None:
    shape = _Shape(32, 16, 32)
    result = analyze_roofline_with_scheduler(
        shape,
        dma_bandwidth_gbps=3.2,
        mac_throughput=256,
        clock_mhz=100.0,
        strategy="weight_reuse",
    )

    assert result.estimated_cycles is not None
    assert result.estimated_cycles > 0
    assert result.schedule_strategy == "weight_reuse"
    assert result.achieved_gops > 0.0
    assert result.achieved_gops <= result.achievable_gops


def test_analyze_roofline_supports_custom_element_widths() -> None:
    int8_model = analyze_roofline(
        (16, 16, 16),
        dma_bandwidth_gbps=3.2,
        mac_throughput=256,
        clock_mhz=100.0,
        input_elem_bytes=1,
        weight_elem_bytes=1,
        output_elem_bytes=4,
    )
    lane16_model = analyze_roofline(
        (16, 16, 16),
        dma_bandwidth_gbps=3.2,
        mac_throughput=256,
        clock_mhz=100.0,
        input_elem_bytes=2,
        weight_elem_bytes=2,
        output_elem_bytes=4,
    )

    assert int8_model.total_bytes < lane16_model.total_bytes
    assert int8_model.operational_intensity > lane16_model.operational_intensity


def test_roofline_profiles_expose_known_presets() -> None:
    profiles = {profile.name for profile in list_roofline_profiles()}
    assert "sim_default" in profiles
    assert "arty_a7_100mhz" in profiles
    assert "pynq_z2_overlay" in profiles
    assert get_roofline_profile("sim_default").dma_bandwidth_gbps == 25.6
    assert get_roofline_profile("arty_a7_100mhz").dma_bandwidth_gbps == 25.6
    assert get_roofline_profile("pynq_z2_overlay").dma_bandwidth_gbps == 3.2


def test_resolve_roofline_profile_supports_overrides() -> None:
    profile = resolve_roofline_profile(
        "sim_default",
        dma_bandwidth_gbps=4.0,
        mac_throughput=128,
        clock_mhz=125.0,
    )

    assert profile.name == "sim_default"
    assert profile.dma_bandwidth_gbps == 4.0
    assert profile.mac_throughput == 128
    assert profile.clock_mhz == 125.0


def test_get_roofline_profile_rejects_unknown_name() -> None:
    with pytest.raises(ValueError, match="Unknown roofline profile"):
        get_roofline_profile("does_not_exist")
