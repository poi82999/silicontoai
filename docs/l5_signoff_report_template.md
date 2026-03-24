# L5 Sign-Off Report Template

## Scope

This document is a draft template for L5 sign-off reporting.

Its purpose is to make the sign-off decision package-driven, repeatable, and reviewable.
The template assumes L5 is evaluating full system replay rather than core-only replay.

---

## Report Header

| Field | Value |
|---|---|
| Report ID | `[fill]` |
| Date | `[fill]` |
| Author | `[fill]` |
| Repository revision | `[fill]` |
| RTL scope | `[fill]` |
| Verification scope | `[fill]` |
| Decision | `[PASS / CONDITIONAL PASS / FAIL]` |

---

## Objective

State what this L5 sign-off attempt is claiming.

Example:

> This report evaluates whether the current `npu_system_top` implementation satisfies the package-driven L5 replay criteria for the targeted workload set, with correct DMA, bank-swap, preload, execute, flush, drain, and compare behavior.

---

## Build And Environment

| Item | Value |
|---|---|
| Host OS | `[fill]` |
| Simulator | `[fill]` |
| Tool version | `[fill]` |
| Top module / executable | `[fill]` |
| Build command | `[fill]` |
| Replay command | `[fill]` |
| Artifact root | `[fill]` |

---

## Package Set Under Review

| Package ID | Scenario Family | Tile Scope | System Intent | Result |
|---|---|---|---|---|
| `[fill]` | `[baseline / split-k / n-tile / m-tile / stress / negative]` | `[m,n,k scope]` | `[what path this package is proving]` | `[PASS / FAIL / NOT RUN]` |
| `[fill]` | `[fill]` | `[fill]` | `[fill]` | `[fill]` |
| `[fill]` | `[fill]` | `[fill]` | `[fill]` | `[fill]` |

Interpretation rule:

- every package row is an independent sign-off datapoint
- package failure must name whether the issue is a package error, replay-driver error, DUT mismatch, or infrastructure issue

---

## Package Result Summary

| Metric | Value |
|---|---|
| Packages planned | `[fill]` |
| Packages executed | `[fill]` |
| Packages passed | `[fill]` |
| Packages failed | `[fill]` |
| Package errors | `[fill]` |
| DUT mismatches | `[fill]` |
| Infrastructure failures | `[fill]` |

---

## Detailed Package Results

Repeat this section once per package.

### Package: `[package_id]`

| Field | Value |
|---|---|
| Scenario ID | `[fill]` |
| Manifest version | `[fill]` |
| Package path | `[fill]` |
| Tile placement | `[m_tile_base, n_tile_base]` |
| Shape | `[m, k, n]` |
| K tile count | `[fill]` |
| DMA summary | `[weight bursts / activation bursts]` |
| Bank policy | `[initial_bank_sel, swap rules]` |
| Compare mode | `[exact / tolerance]` |
| Replay result | `[PASS / FAIL]` |

Execution notes:

- `[fill]`
- `[fill]`

Observed counters:

| Counter | Value |
|---|---|
| Weight DMA done count | `[fill]` |
| Activation DMA done count | `[fill]` |
| NPU done count | `[fill]` |
| Drained rows | `[fill]` |
| Checked lanes | `[fill]` |
| Mismatch count | `[fill]` |

Mismatch summary:

- `[none or fill]`

Artifacts:

- replay log: `[fill]`
- mismatch report: `[fill]`
- waveform: `[fill]`

---

## Assertion And Coverage Summary

| Category | Result | Notes |
|---|---|---|
| System assertions | `[fill]` | `[fill]` |
| DMA-related assertions | `[fill]` | `[fill]` |
| Bank-swap assertions | `[fill]` | `[fill]` |
| Accumulator/drain assertions | `[fill]` | `[fill]` |
| Functional coverage | `[fill]` | `[fill]` |

Required interpretation:

- a package replay PASS is not sufficient if required assertions fail
- coverage holes that invalidate the claim must be called out explicitly

---

## Failure Triage Summary

| Failure ID | Package ID | Classification | Root Cause Summary | Owner | Status |
|---|---|---|---|---|---|
| `[fill]` | `[fill]` | `[package / driver / RTL / infra]` | `[fill]` | `[fill]` | `[open / fixed / waived]` |
| `[fill]` | `[fill]` | `[fill]` | `[fill]` | `[fill]` | `[fill]` |

Classification rule:

- package error: malformed or contradictory package metadata
- driver error: replay infrastructure bug
- RTL issue: hardware behavior violates package contract
- infrastructure issue: simulator/tool/environment problem prevented a valid run

---

## Waiver Register

| Waiver ID | Scope | Reason | Risk | Approval |
|---|---|---|---|---|
| `[fill or none]` | `[fill]` | `[fill]` | `[fill]` | `[fill]` |

No waiver should be implied.
If a gap exists but is accepted temporarily, record it here.

---

## Sign-Off Checklist

Mark each item explicitly.

| Item | Status | Notes |
|---|---|---|
| All mandatory package families executed | `[yes / no]` | `[fill]` |
| Baseline single-tile package passed | `[yes / no]` | `[fill]` |
| Split-K package passed | `[yes / no]` | `[fill]` |
| Global row/column mapping package(s) passed | `[yes / no]` | `[fill]` |
| Negative package validation behaved correctly | `[yes / no]` | `[fill]` |
| No blocking RTL mismatches remain | `[yes / no]` | `[fill]` |
| Required assertions passed | `[yes / no]` | `[fill]` |
| Coverage is acceptable for the claim | `[yes / no]` | `[fill]` |
| Artifact locations are recorded | `[yes / no]` | `[fill]` |

---

## Final Decision

Decision statement:

> `[fill]`

Recommended next action:

1. `[fill]`
2. `[fill]`
3. `[fill]`