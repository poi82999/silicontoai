from __future__ import annotations

from dataclasses import dataclass


@dataclass(frozen=True)
class RooflineProfile:
    """Platform preset for roofline analysis inputs."""

    name: str
    description: str
    dma_bandwidth_gbps: float
    mac_throughput: int
    clock_mhz: float


_PROFILES: dict[str, RooflineProfile] = {
    "sim_default": RooflineProfile(
        name="sim_default",
        description=(
            "Simulation baseline from rtl/include/npu_def_pkg.sv: "
            "EXT_AXI_DATA_WIDTH=256 at a 100 MHz proxy clock, yielding 25.6 Gbit/s."
        ),
        dma_bandwidth_gbps=25.6,
        mac_throughput=256,
        clock_mhz=100.0,
    ),
    "arty_a7_100mhz": RooflineProfile(
        name="arty_a7_100mhz",
        description=(
            "Arty A7 pre-board baseline: 100 MHz from vivado/fpga_core_bringup_top.xdc "
            "and docs/l7_preboard_bringup_results.md; bandwidth uses the current 256-bit RTL external AXI proxy."
        ),
        dma_bandwidth_gbps=25.6,
        mac_throughput=256,
        clock_mhz=100.0,
    ),
    "zynq_system_100mhz": RooflineProfile(
        name="zynq_system_100mhz",
        description=(
            "Zynq system baseline: current RTL/system replay model with EXT_AXI_DATA_WIDTH=256 at 100 MHz."
        ),
        dma_bandwidth_gbps=25.6,
        mac_throughput=256,
        clock_mhz=100.0,
    ),
    "pynq_z2_overlay": RooflineProfile(
        name="pynq_z2_overlay",
        description=(
            "PYNQ-Z2 overlay baseline: current Vivado overlay uses PS7 M_AXI_GP0 to npu_pl/s_axi at 100 MHz; "
            "treat the active path as a 32-bit control-plane proxy, yielding 3.2 Gbit/s."
        ),
        dma_bandwidth_gbps=3.2,
        mac_throughput=256,
        clock_mhz=100.0,
    ),
}


def list_roofline_profiles() -> tuple[RooflineProfile, ...]:
    return tuple(_PROFILES.values())


def get_roofline_profile(name: str) -> RooflineProfile:
    try:
        return _PROFILES[name]
    except KeyError as exc:
        valid = ", ".join(sorted(_PROFILES))
        raise ValueError(f"Unknown roofline profile '{name}'. Valid profiles: {valid}") from exc


def resolve_roofline_profile(
    profile_name: str,
    *,
    dma_bandwidth_gbps: float | None = None,
    mac_throughput: int | None = None,
    clock_mhz: float | None = None,
) -> RooflineProfile:
    base = get_roofline_profile(profile_name)
    return RooflineProfile(
        name=base.name,
        description=base.description,
        dma_bandwidth_gbps=base.dma_bandwidth_gbps if dma_bandwidth_gbps is None else dma_bandwidth_gbps,
        mac_throughput=base.mac_throughput if mac_throughput is None else mac_throughput,
        clock_mhz=base.clock_mhz if clock_mhz is None else clock_mhz,
    )


__all__ = [
    "RooflineProfile",
    "get_roofline_profile",
    "list_roofline_profiles",
    "resolve_roofline_profile",
]