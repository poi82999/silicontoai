# L6 Roofline Manifest Schema

## Purpose

This document fixes the contract for roofline metadata emitted by the L6 compiler.

Consumers that must follow this schema:

- inspector helpers and CLI output
- CI checks that validate compiler artifacts
- downstream tools that summarize compile results

The contract is intentionally narrow: consumers should depend only on the fields documented here.

---

## Scope

Roofline metadata may appear in two places.

1. `compile_manifest.json`
2. per-step `program_package/steps/step_XXX_<name>/manifest.json`

The root compile manifest carries the resolved profile/config and a step summary.
The per-step manifest carries the same step-local roofline payload under the `compiler` block.

---

## Root Compile Manifest

Path:

- `<compile_output_dir>/compile_manifest.json`

Relevant fields:

```json
{
  "manifest_version": "0.1",
  "package_id": "example",
  "entry": "compile_program",
  "roofline_config": {
    "profile": "sim_default",
    "description": "Simulation baseline from rtl/include/npu_def_pkg.sv: EXT_AXI_DATA_WIDTH=256 at a 100 MHz proxy clock, yielding 25.6 Gbit/s.",
    "dma_bandwidth_gbps": 25.6,
    "mac_throughput": 256,
    "clock_mhz": 100.0
  },
  "steps": [
    {
      "step_id": 0,
      "name": "fc0",
      "lowered_kind": "gemm",
      "roofline": {
        "profile": "sim_default",
        "m": 16,
        "k": 16,
        "n": 16,
        "total_ops": 8192,
        "total_bytes": 2048,
        "operational_intensity": 4.0,
        "peak_compute_gops": 51.2,
        "peak_bandwidth_gbps": 25.6,
        "memory_roof_gops": 12.8,
        "achievable_gops": 12.8,
        "achieved_gops": 12.8,
        "utilization_percent": 25.0,
        "bottleneck": "memory",
        "estimated_cycles": 64,
        "schedule_strategy": "weight_reuse"
      }
    }
  ]
}
```

### `roofline_config` fields

| Field | Type | Meaning |
|---|---|---|
| `profile` | string | Resolved preset name used for roofline analysis |
| `description` | string | Human-readable rationale for the preset |
| `dma_bandwidth_gbps` | number | Effective data-movement bandwidth in Gbit/s |
| `mac_throughput` | integer | MACs per cycle |
| `clock_mhz` | number | Effective clock in MHz |

### `steps[].roofline` fields

| Field | Type | Meaning |
|---|---|---|
| `profile` | string | Preset name after resolution |
| `m`, `k`, `n` | integer | Logical GEMM shape |
| `total_ops` | integer | Total operation count where one MAC counts as 2 ops |
| `total_bytes` | integer | Total modeled bytes for activations, weights, and outputs |
| `operational_intensity` | number | `total_ops / total_bytes` |
| `peak_compute_gops` | number | Compute ceiling in GOPS |
| `peak_bandwidth_gbps` | number | Effective bandwidth in Gbit/s |
| `memory_roof_gops` | number | Bandwidth-derived performance ceiling |
| `achievable_gops` | number | `min(peak_compute_gops, memory_roof_gops)` |
| `achieved_gops` | number | Scheduler-coupled achieved estimate |
| `utilization_percent` | number | `achieved_gops / peak_compute_gops * 100` |
| `bottleneck` | string | `compute` or `memory` |
| `estimated_cycles` | integer or null | Scheduler-estimated cycle count |
| `schedule_strategy` | string | Schedule strategy used for the estimate |

---

## Step Manifest Contract

Path:

- `<compile_output_dir>/program_package/steps/step_XXX_<name>/manifest.json`

Relevant block:

```json
{
  "op_type": "program_step",
  "step_id": 0,
  "name": "fc0",
  "compiler": {
    "schedule_strategy": "weight_reuse",
    "estimated_cycles": 64,
    "estimated_dma_cycles": 32,
    "tile_count": 1,
    "replay_package_count": 1,
    "memory_fits": true,
    "roofline": {
      "profile": "sim_default",
      "m": 16,
      "k": 16,
      "n": 16,
      "total_ops": 8192,
      "total_bytes": 2048,
      "operational_intensity": 4.0,
      "peak_compute_gops": 51.2,
      "peak_bandwidth_gbps": 25.6,
      "memory_roof_gops": 12.8,
      "achievable_gops": 12.8,
      "achieved_gops": 12.8,
      "utilization_percent": 25.0,
      "bottleneck": "memory",
      "estimated_cycles": 64,
      "schedule_strategy": "weight_reuse"
    }
  }
}
```

Rule:

- `compiler.roofline` must match the corresponding `compile_manifest.json -> steps[].roofline` payload for the same step.
- consumers should treat `compiler.roofline` as the per-step source of truth when inspecting a `program_package` in isolation.

---

## Emission Rules

- If `include_roofline_in_manifest=False`, neither `roofline_config` nor any `roofline` block should be emitted.
- If `include_roofline_in_manifest=True`, the compiler must emit:
  - root `roofline_config`
  - `compile_manifest.json -> steps[].roofline` for compute steps
  - `program_step manifest -> compiler.roofline` for compute steps
- Non-compute steps must not emit a `roofline` block.

---

## Current Preset Basis

### `sim_default`

- Clock basis: 100 MHz proxy
- Throughput basis: `NPU_ROWS=16`, `NPU_COLS=16` from `rtl/include/npu_def_pkg.sv`
- Bandwidth basis: `EXT_AXI_DATA_WIDTH=256` from `rtl/include/npu_def_pkg.sv` so $256 \times 100\text{ MHz} = 25.6\text{ Gbit/s}$

### `arty_a7_100mhz`

- Clock basis: `create_clock -period 10.000` in `vivado/fpga_core_bringup_top.xdc`
- Timing evidence: `docs/l7_preboard_bringup_results.md` shows WNS `+2.627 ns` at 100 MHz
- Bandwidth basis: current RTL external AXI proxy from `EXT_AXI_DATA_WIDTH=256`

### `pynq_z2_overlay`

- Clock basis: `CONFIG.PCW_FPGA0_PERIPHERAL_FREQMHZ {100}` in `vivado/build_pynq_overlay.tcl`
- Interface basis: current overlay connects `ps7/M_AXI_GP0` to `npu_pl/s_axi`
- Effective bandwidth basis: current active path is treated as a 32-bit control-plane proxy, so $32 \times 100\text{ MHz} = 3.2\text{ Gbit/s}$

---

## Consumer Guidance

- Inspector text output should prefer `compile_manifest.json` when available.
- Package-only inspection should read `compiler.roofline` from step manifests.
- CI schema checks should validate presence/absence rules and field names, not exact floating-point formatting.