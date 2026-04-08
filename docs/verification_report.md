# Verification Report

## Scope

This document explains how the repository is verified, which files implement the verification strategy, which commands to run, and where the resulting artifacts are stored.

---

## Verification Layers

The project uses multiple verification layers with different purposes.

### 1. Verilator Core-Level Simulation

Purpose:

- fast compute-path sanity check
- useful before heavier Vivado simulation

Primary files:

- `scripts/Makefile`
- `tb/main.cpp`
- `host/npu_dma_controller.h`
- `host/mock_allocator.h`

Command:

- `make sim`

### 2. Directed System Simulation

Purpose:

- validate full integrated system behavior
- exercise DMA + SRAM + top-level FSM + core path together

Primary files:

- `tb/tb_system_top.sv`
- `rtl/npu_system_top.sv`
- `scripts/run_sys.sh`
- `scripts/run_sys.bat`

Command:

- `make sys`

Expected success marker:

- `[PERFECT MATCH] All columns computed exactly 1200!`

### 3. UVM Randomized Core Verification

Purpose:

- stress accumulation, drain, and corner behavior under randomized scenarios

Primary files:

- `tb/tb_top.sv`
- `tb/npu_if.sv`
- `tb/npu_uvm_pkg.sv`
- `scripts/run_uvm.sh`
- `scripts/run_uvm.bat`

Commands:

- `make uvm-smoke`
- `make uvm-basic`
- `make uvm-stress`
- `make uvm`
- `bash scripts/run_uvm.sh npu_smoke_test int8`
- `bash scripts/run_uvm.sh npu_fp16_mode_smoke_test fp16`

Expected success marker:

- `SCB_PASS`
- `UVM_ERROR :    0`
- `INT8_COV` summary log (scoreboard report phase)

INT8 coverage notes:

- `tb/npu_uvm_pkg.sv` scoreboard now tracks INT8-mode functional points (`cg_int8_mode`)
- smoke/basic/stress run 종료 시 `int8_mode_coverage`와 extreme/sign-combo hit 상태를 로그로 출력

Mode-aware UVM smoke gate policy:

- INT8 gate: `npu_smoke_test` (scoreboard exact compare)
- FP16 gate: `npu_fp16_mode_smoke_test` (FP16xFP16->FP32 numeric compare gate, abs/rel tolerance)
- `tb/tb_top.sv`는 `UVM_DATA_MODE_FP16` define 유무에 따라 DUT `DATA_MODE`를 분기

---

## Verification Intent Encoded In The Environment

These are not accidental implementation details.

### UVM Timing Alignment

The UVM environment is tuned so that:

- the driver updates signals in a race-safe phase
- the monitor samples slightly after the main edge
- drain requests behave as one-cycle events with spacing

If those assumptions are broken, the scoreboard may fail even when the DUT logic is correct.

### Assertions And Coverage Split

Relevant files:

- `tb/assertions/npu_assertions.sv`
- `tb/assertions/system_assert_bind.sv`
- `tb/assertions/core_assert_bind.sv`
- `tb/assertions/npu_assert_coverage.sv`

Intent:

- assertions are separated from RTL through bind modules
- xsim-friendly coverage collection is done through standalone coverage collectors

This separation exists because the simulator flow is better behaved with external coverage collection than with direct `cover property` usage in the current setup.

---

## Main Verification Commands

### Core And System

- `make sim`
- `make sys`
- `make verify-fast`
- `bash scripts/verify.sh fast --data-mode int8`
- `bash scripts/verify.sh full --data-mode fp16 --smoke`

### UVM

- `make uvm-smoke`
- `make uvm-basic`
- `make uvm-stress`
- `make uvm`

### Coverage And Cleanup

- `make uvm-merge-cov`
- `make verify`
- `make clean-artifacts`

### L5 Sign-Off Automation

- `make l5-signoff`
- `make l5-repeatability`

Intent:

- `make l5-signoff` runs the full Vivado system + UVM verification summary flow and the package-driven chained L5 replay flow together
- `make l5-repeatability` performs two clean sign-off runs and checks that the key summary artifacts match exactly

Current L5 baseline (streamlined DMA-execute):

- System chain package set: 11 packages
- Expected chain result:
  - `packages_total=11`
  - `packages_passed=10`
  - `packages_with_expected_package_error=1`
  - `packages_failed=0`
- Expected negative package behavior:
  - `system_negative_invalid_dma_bytes` must be reported as `PACKAGE_ERROR`

---

## Artifact Layout

### `sim/system/`

Contains directed system simulation outputs.

- `latest/`
  - current compile/elaborate/sim logs
  - current assertion coverage summary
  - current WDB

- `coverage/`
  - system coverage DB and text report

### `sim/uvm/`

Contains UVM outputs.

- `runs/<snapshot>/`
  - per-run compile/elaborate/sim/coverage logs
  - per-run assertion summary
  - per-run WDB

- `latest_run.txt`
- `latest_sim_log.txt`
- `latest_cov_report.txt`
- `latest_assert_cov_summary.txt`
  - pointers to the latest run outputs

- `coverage/merged/`
  - merged coverage DB/report

Run retention:

- old run directories are automatically pruned
- default retention is 8 runs
- override with `UVM_MAX_RUNS=<N>`

### `sim/verify/`

Contains aggregated verification outputs.

- `core.log`
- `system.log`
- `uvm_smoke.log`
- `uvm.log`
- `assertion_cov_index.txt`
- `assertion_cov_summary.txt`
- `l5_signoff/`
  - one-shot L5 sign-off summary
  - chained replay summary
  - copied Vivado/UVM assertion coverage summary
  - canonical baseline files:
    - `replay_chain_summary.txt`
    - `l5_signoff_summary.txt`
- `l5_repeatability/`
  - two clean sign-off runs and comparison summary

---

## Verification-Only Hook Policy

The repository now contains a small verification-only control path in `npu_system_top` for the dedicated system forwarding scenario.

Policy:

- the hooks exist only to create same-address forwarding stress in package-driven system replay
- the directed Vivado system test ties all verification-only hook inputs to `0`
- the hooks are activated only through explicit `system.execution.verification_*` manifest fields in the system replay runner
- no sign-off claim may rely on those hooks being active in the normal directed Vivado path

Forwarding scenario note:

- `system_reference_forwarding_same_addr_m0_n0_k0to15` is maintained as a dedicated system replay stress package
- this package is part of the 11-package sign-off chain and must remain PASS while still hitting `cp_forwarding_hit_seen=HIT`

---

## Recommended Verification Reading Order

If debugging verification intent, read in this order.

1. `tb/tb_system_top.sv`
2. `tb/tb_top.sv`
3. `tb/npu_uvm_pkg.sv`
4. `tb/assertions/npu_assertions.sv`
5. `tb/assertions/npu_assert_coverage.sv`
6. `scripts/run_sys.sh`
7. `scripts/run_uvm.sh`
8. `scripts/verify.sh`

---

## What To Update When Verification Changes

If you modify any of the following, update this document.

- testbench structure
- scoreboard timing model
- assertion organization
- coverage generation flow
- artifact layout
- top-level verification commands

For the actual maintenance checklist/template, use [docs/report_update_checklist.md](./report_update_checklist.md).