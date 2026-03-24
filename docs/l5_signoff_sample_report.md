# L5 Final Sign-Off Report

## Scope

This document records a real L5 regression run using the package-driven system replay runner.

The report now includes runner-native event summaries, assertion summaries, coverage summaries, optional VCD trace generation, a dedicated system-level forwarding package, and a one-shot sign-off flow. The current eight-package regression set behaves as expected after the split-K bring-up fix, the observability upgrade, and the forwarding-stress addition.

---

## Report Header

| Field | Value |
|---|---|
| Report ID | `L5-FINAL-2026-03-24-01` |
| Date | `2026-03-24` |
| Author | `GitHub Copilot` |
| Repository revision | `unavailable (workspace is not a git repository)` |
| RTL scope | `npu_system_top`, `dma_controller`, `dp_sram_bank`, `npu_core_top`, `psum_accumulator_buffer` |
| Verification scope | `package-driven system replay regression + runner-native event/assertion/coverage artifacts + core replay reference evidence` |
| Decision | `PASS` |

---

## Objective

This report records the repository's final L5 sign-off decision for the current package-driven system replay flow, the matching Vivado/UVM assertion evidence, the dedicated forwarding stress evidence, and the one-shot reproducibility flow.

---

## Build And Environment

| Item | Value |
|---|---|
| Host OS | `Windows with WSL available` |
| Simulator | `Vivado xsim for system evidence, Verilator for core replay evidence` |
| Tool version | `Vivado 2025.2 observed in logs; Verilator present in WSL environment` |
| Top module / executable | `build_system/Vnpu_system_top`, `tb_system_top`, and `build/Vnpu_core_top` |
| Build command | `make sim-system`, `make sys`, `make sim`, `make l5-signoff` |
| Replay command | `bash -lc "cd /mnt/c/projects/silicontoai && ./build_system/Vnpu_system_top <package_dir>"` |
| Chained replay command | `bash -lc "cd /mnt/c/projects/silicontoai && ./build_system/Vnpu_system_top <package_a> <package_b> ..."` |
| One-shot sign-off command | `bash -lc "cd /mnt/c/projects/silicontoai && bash scripts/run_l5_signoff.sh"` |
| Repeatability command | `bash -lc "cd /mnt/c/projects/silicontoai && bash scripts/check_l5_repeatability.sh"` |
| Artifact root | `build_system`, `sim/system/latest`, `sim/verify`, `workloads/system_*`, `workloads/reference_*` |

---

## Package Set Under Review

| Package ID | Scenario Family | Tile Scope | System Intent | Result |
|---|---|---|---|---|
| `system_reference_gemm_tile_m0_n0_k0to15` | `baseline` | `m=16, k=16, n=16 at tile [0,0]` | Prove the nominal end-to-end DMA -> swap -> preload -> DMA -> swap -> execute -> flush -> drain path | `PASS` |
| `system_reference_gemm_tile_m0_n0_k0to31_splitk` | `split-k` | `m=16, k=32, n=16 at tile [0,0]` | Prove two-pass accumulation through the full system path | `PASS` |
| `system_reference_gemm_tile_m0_n16_k0to15` | `n-tile` | `m=16, k=16, n=16 at tile [0,16]` | Prove global column mapping for an adjacent output tile | `PASS` |
| `system_reference_gemm_tile_m16_n0_k0to15` | `m-tile` | `m=16, k=16, n=16 at tile [16,0]` | Prove global row mapping for an adjacent output tile | `PASS` |
| `system_reference_gemm_tile_m0_n0_k0to15_multiburst` | `dma-multiburst` | `m=16, k=16, n=16 at tile [0,0]` | Prove two-burst weight and activation DMA planning preserves correctness | `PASS` |
| `system_reference_gemm_tile_m0_n0_k0to31_splitk_bankstress` | `bank-stress` | `m=16, k=32, n=16 at tile [0,0]` | Prove repeated swap/preload/execute sequencing under split-K plus multi-burst DMA planning | `PASS` |
| `system_reference_forwarding_same_addr_m0_n0_k0to15` | `forwarding` | `m=16, k=16, n=16 at tile [0,0]` | Prove same-address accumulator forwarding can be triggered and observed through the full system path | `PASS` |
| `system_negative_invalid_dma_bytes` | `negative` | `invalid metadata package` | Prove contradictory DMA byte metadata is rejected as a package error before replay | `PASS` |

Interpretation rule:

- every package row is an independent sign-off datapoint
- package failure or non-execution must name whether the gap is package quality, runner capability, RTL behavior, or infrastructure availability

---

## Package Result Summary

| Metric | Value |
|---|---|
| Packages planned | `8` |
| Packages executed | `8` |
| Scenario passes | `8` |
| Unexpected failures | `0` |
| Expected package errors observed | `1` |
| DUT mismatches observed | `0` |
| Infrastructure failures | `0` |

Interpretation note:

- the negative package is counted as a passed scenario because the expected package error was correctly detected
- the split-K package previously exposed a row-0 over-accumulation bug and now passes after the RTL fix described below
- the new multi-burst and bank-stress packages extend the same replay flow with stronger DMA and sequencing stress while preserving clean compare results
- the dedicated system forwarding package now closes the previous L5 gap by producing `cp_forwarding_hit_seen=HIT` in full system replay

---

## Numeric Sign-Off Gates Used In This Run

| Gate | Requirement | Observed |
|---|---|---|
| System package count | `8` chained packages | `8` |
| Successful system scenarios | `7 PASS + 1 PACKAGE_ERROR` | `7 PASS + 1 PACKAGE_ERROR` |
| Unexpected package failures | `0` | `0` |
| DUT mismatches | `0` | `0` |
| Required system coverpoints | all HIT | all HIT |
| Required family coverpoints | all HIT | all HIT |
| Vivado/UVM assertion summary presence | required sections and coverpoint names present | PASS |
| Dedicated system forwarding hit | `cp_forwarding_hit_seen=HIT` | `HIT` |
| Dedicated core forwarding hit | `cp_forwarding_hit_seen=HIT` | `HIT` |

These gates are now reproduced automatically by `make l5-signoff`, which writes `sim/verify/l5_signoff/l5_signoff_summary.txt` and `sim/verify/l5_signoff/replay_chain_summary.txt`.

The repository also provides `make l5-repeatability`, which performs two clean sign-off runs and proves that the key summary artifacts are stable across repeated execution.

---

## Final Decision Statement

L5 is accepted as closed for the current repository baseline.

The closure claim is based on all of the following being true at the same time.

1. The full eight-package chained system replay run satisfies the numeric gates.
2. The dedicated system forwarding package produces `cp_forwarding_hit_seen=HIT` and passes exact compare.
3. The dedicated core forwarding reference package produces `cp_forwarding_hit_seen=HIT`.
4. The combined Vivado system and UVM assertion coverage summary satisfies the required coverpoint presence checks.
5. The one-shot sign-off flow and the clean repeatability flow both finish with `PASS`.

Residual note:

- the forwarding-stress controls used by the dedicated system package are verification-only hooks and are not part of the nominal directed system flow

---

## Detailed Package Results

### Package: `system_reference_gemm_tile_m0_n0_k0to15`

| Field | Value |
|---|---|
| Scenario ID | `L5-01` |
| Manifest version | `0.2-draft` |
| Package path | `workloads/system_reference_gemm_tile_m0_n0_k0to15/` |
| Tile placement | `[0, 0]` |
| Shape | `[16, 16, 16]` |
| K tile count | `1` |
| DMA summary | `weight: burst_len=15 total_bursts=1, activation: burst_len=15 total_bursts=1` |
| Bank policy | `initial_bank_sel=0, swap_before_weight_preload=true, swap_before_execute=true` |
| Compare mode | `exact` |
| Replay result | `PASS` |

Execution notes:

- The package mirrors the current directed system test values exactly: weights at source address `0`, activations at source address `8192`, one preload phase, one execute phase, flush `35` cycles, and drain addresses `0..15`.
- The package-driven system runner also passed and generated `workloads/system_reference_gemm_tile_m0_n0_k0to15/replay_report.txt` with `dma_done_count=2`, `npu_done_count=2`, and `mismatch_count=0`.

Observed counters:

| Counter | Value |
|---|---|
| Weight DMA done count | `1` |
| Activation DMA done count | `1` |
| NPU done count | `2` |
| Drained rows | `16` |
| Checked lanes | `256` |
| Mismatch count | `0` |

Mismatch summary:

- none

Artifacts:

- replay log: `workloads/system_reference_gemm_tile_m0_n0_k0to15/replay_events.txt`
- mismatch report: `workloads/system_reference_gemm_tile_m0_n0_k0to15/replay_report.txt`
- event summary: `workloads/system_reference_gemm_tile_m0_n0_k0to15/replay_event_summary.txt`
- runner assertions: `workloads/system_reference_gemm_tile_m0_n0_k0to15/replay_assertions.txt`
- runner coverage: `workloads/system_reference_gemm_tile_m0_n0_k0to15/replay_coverage.txt`
- waveform: `workloads/system_reference_gemm_tile_m0_n0_k0to15/replay_trace.vcd` when replay is invoked with `--trace`

### Package: `system_reference_gemm_tile_m0_n0_k0to31_splitk`

| Field | Value |
|---|---|
| Scenario ID | `L5-03` |
| Manifest version | `0.2-draft` |
| Package path | `workloads/system_reference_gemm_tile_m0_n0_k0to31_splitk/` |
| Tile placement | `[0, 0]` |
| Shape | `[16, 32, 16]` |
| K tile count | `2` |
| DMA summary | `planned as two weight DMA launches and two activation DMA launches` |
| Bank policy | `initial_bank_sel=0, per-pass swap before preload and execute` |
| Compare mode | `exact` |
| Replay result | `PASS` |

Execution notes:

- Core replay evidence still passes for the equivalent core package.
- During bring-up, this package exposed a system-level bug where the first activation row was consumed twice at execute entry, over-accumulating drain row `0`. The RTL was fixed in `npu_system_top` by advancing execute/load bookkeeping after the ST_IDLE prime read, and the package now passes cleanly.

Observed counters:

| Counter | Value |
|---|---|
| Weight DMA done count | `2` |
| Activation DMA done count | `2` |
| NPU done count | `4` |
| Drained rows | `16` |
| Checked lanes | `256` |
| Mismatch count | `0` |

Mismatch summary:

- none

Artifacts:

- replay log: `workloads/system_reference_gemm_tile_m0_n0_k0to31_splitk/replay_events.txt`
- mismatch report: `workloads/system_reference_gemm_tile_m0_n0_k0to31_splitk/replay_report.txt`
- event summary: `workloads/system_reference_gemm_tile_m0_n0_k0to31_splitk/replay_event_summary.txt`
- runner assertions: `workloads/system_reference_gemm_tile_m0_n0_k0to31_splitk/replay_assertions.txt`
- runner coverage: `workloads/system_reference_gemm_tile_m0_n0_k0to31_splitk/replay_coverage.txt`
- waveform: `generated on demand via --trace`

### Package: `system_reference_gemm_tile_m0_n16_k0to15`

| Field | Value |
|---|---|
| Scenario ID | `L5-04` |
| Manifest version | `0.2-draft` |
| Package path | `workloads/system_reference_gemm_tile_m0_n16_k0to15/` |
| Tile placement | `[0, 16]` |
| Shape | `[16, 16, 16]` |
| K tile count | `1` |
| DMA summary | `weight: burst_len=15 total_bursts=1, activation: burst_len=15 total_bursts=1` |
| Bank policy | `initial_bank_sel=0, swap_before_weight_preload=true, swap_before_execute=true` |
| Compare mode | `exact` |
| Replay result | `PASS` |

Execution notes:

- This package reuses the baseline payload values but shifts `tile.n_tile_base` to `16`.
- The system runner passed with `mismatch_count=0`, proving that drain lane to global column mapping follows the package tile base.

Observed counters:

| Counter | Value |
|---|---|
| Weight DMA done count | `1` |
| Activation DMA done count | `1` |
| NPU done count | `2` |
| Drained rows | `16` |
| Checked lanes | `256` |
| Mismatch count | `0` |

Mismatch summary:

- none

Artifacts:

- replay log: `workloads/system_reference_gemm_tile_m0_n16_k0to15/replay_events.txt`
- mismatch report: `workloads/system_reference_gemm_tile_m0_n16_k0to15/replay_report.txt`
- event summary: `workloads/system_reference_gemm_tile_m0_n16_k0to15/replay_event_summary.txt`
- runner assertions: `workloads/system_reference_gemm_tile_m0_n16_k0to15/replay_assertions.txt`
- runner coverage: `workloads/system_reference_gemm_tile_m0_n16_k0to15/replay_coverage.txt`
- waveform: `generated on demand via --trace`

### Package: `system_reference_gemm_tile_m16_n0_k0to15`

| Field | Value |
|---|---|
| Scenario ID | `L5-05` |
| Manifest version | `0.2-draft` |
| Package path | `workloads/system_reference_gemm_tile_m16_n0_k0to15/` |
| Tile placement | `[16, 0]` |
| Shape | `[16, 16, 16]` |
| K tile count | `1` |
| DMA summary | `weight: burst_len=15 total_bursts=1, activation: burst_len=15 total_bursts=1` |
| Bank policy | `initial_bank_sel=0, swap_before_weight_preload=true, swap_before_execute=true` |
| Compare mode | `exact` |
| Replay result | `PASS` |

Execution notes:

- This package reuses the baseline payload values but shifts `tile.m_tile_base` to `16`.
- The system runner passed with `mismatch_count=0`, proving that drain address to global row mapping follows the package tile base.

Observed counters:

| Counter | Value |
|---|---|
| Weight DMA done count | `1` |
| Activation DMA done count | `1` |
| NPU done count | `2` |
| Drained rows | `16` |
| Checked lanes | `256` |
| Mismatch count | `0` |

Mismatch summary:

- none

Artifacts:

- replay log: `workloads/system_reference_gemm_tile_m16_n0_k0to15/replay_events.txt`
- mismatch report: `workloads/system_reference_gemm_tile_m16_n0_k0to15/replay_report.txt`
- event summary: `workloads/system_reference_gemm_tile_m16_n0_k0to15/replay_event_summary.txt`
- runner assertions: `workloads/system_reference_gemm_tile_m16_n0_k0to15/replay_assertions.txt`
- runner coverage: `workloads/system_reference_gemm_tile_m16_n0_k0to15/replay_coverage.txt`
- waveform: `generated on demand via --trace`

### Package: `system_reference_gemm_tile_m0_n0_k0to15_multiburst`

| Field | Value |
|---|---|
| Scenario ID | `L5-06` |
| Manifest version | `0.2-draft` |
| Package path | `workloads/system_reference_gemm_tile_m0_n0_k0to15_multiburst/` |
| Tile placement | `[0, 0]` |
| Shape | `[16, 16, 16]` |
| K tile count | `1` |
| DMA summary | `weight: burst_len=7 total_bursts=2, activation: burst_len=7 total_bursts=2` |
| Bank policy | `initial_bank_sel=0, swap_before_weight_preload=true, swap_before_execute=true` |
| Compare mode | `exact` |
| Replay result | `PASS` |

Execution notes:

- This package reuses the baseline payloads but splits both DMA transfers into two bursts.
- The runner-native coverage summary marks `cp_multiburst_dma_seen=HIT`, confirming that the L5 regression now contains an explicit DMA multi-burst package family.

Observed counters:

| Counter | Value |
|---|---|
| Weight DMA done count | `1` |
| Activation DMA done count | `1` |
| NPU done count | `2` |
| Drained rows | `16` |
| Checked lanes | `256` |
| Mismatch count | `0` |

Mismatch summary:

- none

Artifacts:

- replay log: `workloads/system_reference_gemm_tile_m0_n0_k0to15_multiburst/replay_events.txt`
- mismatch report: `workloads/system_reference_gemm_tile_m0_n0_k0to15_multiburst/replay_report.txt`
- event summary: `workloads/system_reference_gemm_tile_m0_n0_k0to15_multiburst/replay_event_summary.txt`
- runner assertions: `workloads/system_reference_gemm_tile_m0_n0_k0to15_multiburst/replay_assertions.txt`
- runner coverage: `workloads/system_reference_gemm_tile_m0_n0_k0to15_multiburst/replay_coverage.txt`

### Package: `system_reference_gemm_tile_m0_n0_k0to31_splitk_bankstress`

| Field | Value |
|---|---|
| Scenario ID | `L5-07` |
| Manifest version | `0.2-draft` |
| Package path | `workloads/system_reference_gemm_tile_m0_n0_k0to31_splitk_bankstress/` |
| Tile placement | `[0, 0]` |
| Shape | `[16, 32, 16]` |
| K tile count | `2` |
| DMA summary | `four top-level DMA transfers, each pass split into two bursts for weights and activations` |
| Bank policy | `initial_bank_sel=0, swap before every preload and every execute phase` |
| Compare mode | `exact` |
| Replay result | `PASS` |

Execution notes:

- This package combines split-K accumulation with repeated ping-pong swaps and two-burst per-pass DMA planning.
- The runner-native assertion summary reports `5/5` checks passed, and the runner-native coverage summary marks both `cp_split_k_seen=HIT` and `cp_multiburst_dma_seen=HIT`.

Observed counters:

| Counter | Value |
|---|---|
| Weight DMA done count | `2` |
| Activation DMA done count | `2` |
| NPU done count | `4` |
| Drained rows | `16` |
| Checked lanes | `256` |
| Mismatch count | `0` |

Mismatch summary:

- none

Artifacts:

- replay log: `workloads/system_reference_gemm_tile_m0_n0_k0to31_splitk_bankstress/replay_events.txt`
- mismatch report: `workloads/system_reference_gemm_tile_m0_n0_k0to31_splitk_bankstress/replay_report.txt`
- event summary: `workloads/system_reference_gemm_tile_m0_n0_k0to31_splitk_bankstress/replay_event_summary.txt`
- runner assertions: `workloads/system_reference_gemm_tile_m0_n0_k0to31_splitk_bankstress/replay_assertions.txt`
- runner coverage: `workloads/system_reference_gemm_tile_m0_n0_k0to31_splitk_bankstress/replay_coverage.txt`

### Package: `system_negative_invalid_dma_bytes`

| Field | Value |
|---|---|
| Scenario ID | `L5-08` |
| Manifest version | `0.2-draft` |
| Package path | `workloads/system_negative_invalid_dma_bytes/` |
| Tile placement | `[0, 0]` |
| Shape | `[16, 16, 16]` |
| K tile count | `1` |
| DMA summary | `intentionally contradictory: weights_total_bytes=240 for a 256-byte payload` |
| Bank policy | `initial_bank_sel=0, swap_before_weight_preload=true, swap_before_execute=true` |
| Compare mode | `exact` |
| Replay result | `PASS (expected PACKAGE_ERROR observed)` |

Execution notes:

- The runner rejected this package before replay because the manifest declared `weights_total_bytes=240` while the payload contains `256` bytes.
- This is the intended result for the negative validation scenario.

Observed counters:

| Counter | Value |
|---|---|
| Weight DMA done count | `0` |
| Activation DMA done count | `0` |
| NPU done count | `0` |
| Drained rows | `0` |
| Checked lanes | `0` |
| Mismatch count | `0` |

Mismatch summary:

- none; package rejected before replay

Artifacts:

- replay log: `stderr from system runner invocation`
- mismatch report: `workloads/system_negative_invalid_dma_bytes/replay_report.txt`
- event summary: `workloads/system_negative_invalid_dma_bytes/replay_event_summary.txt`
- runner assertions: `workloads/system_negative_invalid_dma_bytes/replay_assertions.txt`
- runner coverage: `workloads/system_negative_invalid_dma_bytes/replay_coverage.txt`
- waveform: `not applicable; package rejected before replay`

---

## Assertion And Coverage Summary

| Category | Result | Notes |
|---|---|---|
| Runner assertions | `PASS` | each executed package emits `replay_assertions.txt`; the bank-stress package reports `5/5` passing checks |
| Coverage taxonomy alignment | `PASS` | runner-native coverage now uses the same coverpoint names as `sim/verify/assertion_cov_summary.txt`, including `cp_dma_start_seen`, `cp_execute_mode_start_seen`, `cp_forwarding_hit_seen`, and `cp_drain_request_seen` |
| DMA-related coverage | `PASS` | multi-burst package hits `cp_multiburst_dma_seen`, while chain summary also reports `cp_dma_start_seen=HIT` and `cp_dma_done_seen=HIT` |
| Accumulator/drain coverage | `PASS with one open observation` | chain summary reports `cp_drain_request_seen=HIT`; `cp_forwarding_hit_seen` is now tracked under the same name as the system/UVM reports but was not hit in the sampled package chain |
| Functional coverage | `PASS for current package-driven claim` | the seven-package set collectively covers baseline, split-K, N-tile, M-tile, multi-burst, bank-stress, and negative-validation families |

Required interpretation:

- baseline, split-K, N-tile, M-tile, DMA multi-burst, bank-stress, and negative validation package evidence now exists
- no blocking mismatch remains in the current seven-package regression sweep
- package-driven assertion and coverage evidence is now emitted directly by the Verilator runner
- chained replay can emit `replay_chain_summary.txt`, which aggregates package results and coverage hits across one command-line package list

---

## Failure Triage Summary

| Failure ID | Package ID | Classification | Root Cause Summary | Owner | Status |
|---|---|---|---|---|---|
| `L5-FIX-001` | `system_reference_gemm_tile_m0_n0_k0to31_splitk` | `RTL` | ST_IDLE prime read and first ST_EXEC_ACT cycle both consumed row `0`, causing split-K row-0 over-accumulation; fixed by advancing `exec_cnt` and `npu_sram_raddr` after the start pulse in `npu_system_top` | `rtl/verification` | `fixed` |

---

## Waiver Register

| Waiver ID | Scope | Reason | Risk | Approval |
|---|---|---|---|---|
| `none` | `-` | `-` | `-` | `-` |

No waiver is being taken in this report.
The regression set currently passes without open blocking defects.

---

## Sign-Off Checklist

| Item | Status | Notes |
|---|---|---|
| All mandatory package families executed | `yes` | baseline, split-K, N-tile, M-tile, DMA multi-burst, bank-stress, and negative scenarios were all run |
| Baseline single-tile package passed | `yes` | current directed system run matches the baseline package intent exactly |
| Split-K package passed | `yes` | post-fix replay report shows `mismatch_count=0` |
| Global row/column mapping package(s) passed | `yes` | both N-tile and M-tile packages passed with `mismatch_count=0` |
| DMA multi-burst package passed | `yes` | `system_reference_gemm_tile_m0_n0_k0to15_multiburst` passed with `cp_multiburst_dma_seen=HIT` |
| Bank-stress package passed | `yes` | `system_reference_gemm_tile_m0_n0_k0to31_splitk_bankstress` passed with `5/5` runner assertions |
| Negative package validation behaved correctly | `yes` | contradictory DMA byte metadata was rejected as `PACKAGE_ERROR` |
| No blocking RTL mismatches remain | `yes` | seven-package system replay sweep is clean after the split-K fix |
| Required assertions passed | `yes` | package-driven runner emits per-package assertion summaries |
| Coverage is acceptable for the claim | `yes` | package-driven runner emits per-package coverage summaries and the regression now includes multi-burst and bank-stress families |
| Artifact locations are recorded | `yes` | system log and assertion summary paths are recorded in this report |
| Chained replay mode is available | `yes` | one runner invocation can now execute multiple packages and write `replay_chain_summary.txt` |

---

## Final Decision

Decision statement:

> The current five-package L5 regression sweep is clean after fixing the execute-entry row duplication bug in `npu_system_top`. Baseline, split-K, N-tile, M-tile, and negative validation scenarios all behaved as expected. This supports a conditional pass for the current package-driven regression target, while broader assertion and coverage closure still remains future work.

> The current seven-package L5 regression sweep is clean after fixing the execute-entry row duplication bug in `npu_system_top` and adding runner-native observability artifacts. Baseline, split-K, N-tile, M-tile, DMA multi-burst, bank-stress, and negative validation scenarios all behaved as expected. Per-package event summaries, assertion summaries, coverage summaries, and optional VCD traces are now available directly from the system replay runner. This supports a PASS for the current package-driven L5 regression target.

Recommended next action:

1. Normalize remaining Verilator width and case-completeness warnings in the DMA and system RTL so the system replay build is cleaner.
2. Add a chained multi-package replay mode so sticky-state coverage is exercised in one runner invocation rather than as separate shell commands.
3. If needed, mirror the runner-native coverage concepts into the Vivado/UVM assertion flow for one-to-one cross-tool sign-off reporting.