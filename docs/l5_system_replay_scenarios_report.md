# L5 System Replay Scenarios

## Scope

This document organizes L5 validation as a package-driven scenario matrix.

The intent is to make one rule explicit.

- one replay package is the smallest system-level execution unit
- one L5 regression is a controlled set of replay packages
- one sign-off decision is based on package coverage, not on one ad hoc directed run

This document does not redefine the L0 contract or the L2 manifest schema.
It defines how package families should be selected and evaluated at L5.

---

## Why L5 Is Different From L4

L4 proves that a workload package can drive `npu_core_top` correctly when activations and weights are injected directly at the core interface.

L5 must prove the full system path.

That means each package must now validate all of the following together.

- host-visible MMIO sequencing
- DMA fetch from external memory
- ping-pong SRAM write/read placement
- bank swap timing
- NPU preload phase
- NPU execute phase
- flush and done/ack behavior
- drain and global output comparison

At L5, a package is therefore not just a tensor payload bundle.
It is a replayable system transaction plan.

---

## Package Roles At L5

Each L5 package should answer five questions.

1. Which logical tile is being computed?
2. Where do its activation and weight payloads live in system memory?
3. How should DMA move them into SRAM?
4. Which bank swaps and NPU phases must occur, and in what order?
5. Which drained outputs and status signals define pass or fail?

The package remains manifest-first.
The only difference is that L5 consumes both the existing replay fields and the `system.*` extension fields.

---

## Recommended L5 Scenario Matrix

| Scenario ID | Package Archetype | Primary Goal | Required Package Traits | Expected System Sequence | Pass Criteria | Main Failure Class Caught |
|---|---|---|---|---|---|---|
| L5-01 | Single-tile smoke | Prove baseline end-to-end path works once | `k_tile_count=1`, `tile_cols=16`, one weight DMA, one activation DMA | DMA weights -> swap -> preload -> DMA activations -> swap -> execute -> flush -> drain | All drained vectors match golden, DMA done observed once per transfer, NPU done observed once per phase | gross wiring errors, wrong MMIO order, wrong bank routing |
| L5-02 | Single-tile bank-swap sanity | Prove bank ownership changes are correct across phases | same payload shape as L5-01, explicit `system.banks.*` metadata | start with known bank select, verify write bank differs from read bank before each swap | no read-from-write-bank corruption, output still matches golden | inverted bank mux, stale bank select, swap timing bugs |
| L5-03 | Split-K accumulation | Prove two or more K passes accumulate correctly through system path | `k_tile_count>1`, `acc_clear_policy=first_pass_overwrite` | weight DMA/preload + activation execute repeated per K pass with accumulate on later passes | final drained vectors match full-K golden, first pass overwrites, later passes accumulate | bad `acc_clear` policy, missing second preload, accumulation loss |
| L5-04 | N-tile pair | Prove adjacent 16-column output tiles can be replayed as separate packages | two packages with identical `m_tile_base`, different `n_tile_base` | replay package A then package B without changing checker rules | both packages pass and global column mapping remains correct | lane-to-column mapping errors, wrong tile base handling |
| L5-05 | M-tile continuation | Prove output rows beyond the first 16 are mapped and drained correctly | package with `m_tile_base>0` | standard system flow with drain rows offset into global tensor | all drained rows compare against shifted global coordinates | row-base mapping errors, wrong drain address interpretation |
| L5-06 | DMA multi-burst stress | Prove DMA planning metadata and SRAM addressing remain correct beyond one simple burst | payload bytes exceed one convenient contiguous setup, `system.dma.*` spans multiple bursts | one or more multi-burst weight and/or activation fetches before compute | all transfers complete, no missing rows, output matches golden | DMA address increment bugs, burst accounting bugs |
| L5-07 | Multi-package chain | Prove package-to-package handoff does not leave stale sticky state | at least two valid packages executed back-to-back | package A full flow, clear/ack, package B full flow | both packages pass, no false early done, no stale accumulator state | sticky done handling bugs, incomplete clear, stale state leakage |
| L5-08 | Negative package validation | Prove malformed system metadata is rejected before blaming DUT | illegal source address, illegal burst count, or contradictory bank policy | loader rejects package before replay or phase launch | classified as package error, not DUT mismatch | weak package validation, confusing triage |

---

## First Repository Package Plan

The first repository-hosted L5 package set should grow in this order.

| Order | Package ID | Purpose | Status |
|---|---|---|---|
| 1 | `system_reference_gemm_tile_m0_n0_k0to15` | Baseline end-to-end smoke aligned with the current directed system test | draft in repository |
| 2 | `system_reference_gemm_tile_m0_n0_k0to31_splitk` | Split-K end-to-end accumulation through DMA and bank swaps | draft in repository |
| 3 | `system_reference_gemm_tile_m0_n16_k0to15` | N-tile neighbor to prove global column mapping across packages | draft in repository |
| 4 | `system_reference_gemm_tile_m16_n0_k0to15` | M-tile continuation to prove row-base mapping | draft in repository |
| 5 | `system_reference_gemm_tile_m0_n0_k0to15_multiburst` | Single-pass DMA multi-burst stress package | draft in repository |
| 6 | `system_reference_gemm_tile_m0_n0_k0to31_splitk_bankstress` | Split-K plus repeated swap/bank stress package | draft in repository |
| 7 | `system_reference_forwarding_same_addr_m0_n0_k0to15` | Verification-only same-address forwarding stress through the full DMA -> bank -> execute path | draft in repository |

The first sign-off attempt does not need all possible package shapes.
It does need at least one package from each failure class family.

---

## Minimum L5 Sign-Off Package Set

The minimum credible L5 sign-off set should include at least these package families.

| Family | Why It Must Exist | Minimum Count |
|---|---|---|
| Baseline single-tile package | proves the nominal system path | 1 |
| Split-K package | proves system-level accumulation semantics | 1 |
| N-tile neighbor package | proves global column placement across packages | 1 |
| M-tile continuation package | proves global row placement across packages | 1 |
| Same-address forwarding package | proves the system path can trigger and observe accumulator forwarding behavior | 1 |
| Negative package | proves validation and triage quality | 1 |

That yields a minimum of six packages for a meaningful first L5 sign-off sweep.

The current repository-hosted regression set has already grown beyond that minimum by adding explicit DMA multi-burst and bank-stress families.

---

## Numeric Sign-Off Gates

The current repository can treat L5 as closed only when all of the following gates are satisfied in one chained replay run.

1. Exactly eight repository-hosted system packages are included in the sign-off chain.
2. Seven packages must finish with `PASS` and one negative package must finish with `PACKAGE_ERROR`.
3. `packages_failed` must remain `0` in `replay_chain_summary.txt`.
4. `DUT mismatches observed` must remain `0` across all sign-off packages.
5. Runner-native assertion checks must report zero failures for every non-negative package.
6. The chained replay aggregate coverage must hit all of these system coverpoints:
	- `cp_dma_start_seen`
	- `cp_dma_done_seen`
	- `cp_weight_load_mode_start_seen`
	- `cp_execute_mode_start_seen`
	- `cp_forwarding_hit_seen`
	- `cp_drain_request_seen`
7. The chained replay aggregate coverage must also hit the package-family coverpoints:
	- `cp_split_k_seen`
	- `cp_multiburst_dma_seen`
	- `cp_n_tile_seen`
	- `cp_m_tile_seen`
	- `cp_negative_validation_seen`
8. The dedicated system forwarding package must locally report `cp_forwarding_hit_seen=HIT`.
9. The dedicated core forwarding reference package must also report `cp_forwarding_hit_seen=HIT` as supporting evidence for the accumulator hazard path.
10. `scripts/verify.sh full` must complete successfully and produce a combined assertion coverage summary containing both the system and UVM sections.
11. The combined assertion coverage summary must include the system coverpoints `cp_dma_start_seen`, `cp_dma_done_seen`, `cp_weight_load_mode_start_seen`, `cp_execute_mode_start_seen`, `cp_forwarding_hit_seen`, and `cp_drain_request_seen`.
12. The combined assertion coverage summary must include the UVM core coverpoints `cp_forwarding_hit_seen` and `cp_drain_request_seen`.

Interpretation note:

- in the directed Vivado system path, `cp_forwarding_hit_seen` is allowed to remain unhit because the verification-only forwarding hooks are tied off there by policy
- the required forwarding hit evidence comes from the dedicated system replay forwarding package and the dedicated core forwarding reference package

---

## Verification-Only Hook Acceptance Rule

The system forwarding package uses a verification-only accumulator-address override and one-shot `acc_clear` mode.

That is acceptable for L5 sign-off only under these conditions.

1. The hooks remain disabled in the directed Vivado system test.
2. The hooks are enabled only through explicit manifest metadata in package-driven system replay.
3. Sign-off documentation clearly labels them as verification-only controls.
4. Normal baseline, split-K, N-tile, M-tile, multi-burst, bank-stress, and negative packages continue to pass without the hooks.

---

## One-Shot Sign-Off Flow

The repository now provides a one-shot L5 entry point.

```bash
make l5-signoff
```

This flow performs the following steps.

1. Builds the system replay runner.
2. Executes the eight-package chained system regression.
3. Writes `sim/verify/l5_signoff/replay_chain_summary.txt`.
4. Builds the core replay runner.
5. Executes `workloads/reference_acc_forwarding_same_addr_core` as forwarding reference evidence.
6. Writes `sim/verify/l5_signoff/l5_signoff_summary.txt` with a final PASS or FAIL decision.

---

## Package Review Checklist

Before a package is admitted to the L5 regression set, verify the following.

1. `manifest.json` is internally consistent.
2. `system.memory.*` byte counts match the payload file contents.
3. `system.dma.*` burst planning can legally fetch the declared bytes.
4. `system.banks.*` policy is compatible with the intended phase ordering.
5. `execution.k_tile_count` matches the payload grouping.
6. `tile.m_tile_base` and `tile.n_tile_base` reconstruct the expected global coordinates.
7. Golden data covers every drained lane the package claims to check.
8. The package has a short `README.md` explaining what system property it is meant to catch.

---

## Recommended Execution Order

The recommended first L5 regression order is:

1. L5-01 baseline smoke
2. L5-02 bank-swap sanity
3. L5-03 split-K accumulation
4. L5-04 N-tile pair
5. L5-05 M-tile continuation
6. L5-07 multi-package chain
7. L5-06 DMA multi-burst stress
8. L5-08 negative package validation

This order is deliberate.

- start with the smallest end-to-end path
- add accumulation only after the nominal path passes
- add coordinate expansion only after accumulation is stable
- add stress and negative tests last, once triage is trustworthy

---

## Exit Criteria For L5 Scenario Readiness

L5 scenario planning should be treated as materially ready when all of the following are true.

1. Each required scenario family has at least one package definition.
2. Each package definition declares enough `system.*` metadata to drive MMIO, DMA, bank swap, and compare sequencing.
3. Each package family has a clearly stated failure class.
4. The sign-off report template can record package-level pass or fail results without custom per-package wording.
5. The package set is small enough to run repeatedly, but broad enough to isolate system-path regressions.

If these conditions are met, L5 can move from planning into actual system replay implementation.