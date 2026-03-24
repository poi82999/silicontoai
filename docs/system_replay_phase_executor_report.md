# System Replay Phase Executor Design

## Scope

This document defines the recommended phase executor architecture for a future L5 system replay runner.

The goal is narrow.

- consume one system replay package
- derive a legal system-level phase plan
- execute that phase plan against `npu_system_top`
- collect outputs and status events
- classify pass, mismatch, or infrastructure failure

This document is not the package schema itself.
It is the execution design that consumes the package schema.

---

## Why A Phase Executor Is Needed

Core replay is simple because it drives a small set of DUT pins directly.

System replay is more constrained.
The runner must respect phase ordering that the hardware contract already requires.

Examples:

- weight DMA must complete before weight preload starts
- bank swap must occur before the newly written bank becomes the NPU read bank
- execute must not start until activation DMA has completed
- drain must occur only after the execute phase and flush interval have completed

That means a system replay runner should not be coded as one long ad hoc script.
It should have a typed phase executor that converts manifest metadata into a deterministic sequence of legal steps.

---

## Executor Inputs

The phase executor should receive four inputs.

1. Parsed package manifest
2. Parsed payload files
3. A DUT adapter for `npu_system_top`
4. Runtime options such as verbosity or mismatch limit

The executor should not parse JSON itself.
Parsing and schema validation should already have happened before phase execution begins.

---

## Executor Outputs

The phase executor should produce three classes of output.

### 1. Runtime events

- phase start
- phase end
- observed done event
- drain sample collected

### 2. Summary counters

- number of DMA launches
- number of DMA done events
- number of NPU launches
- number of NPU done events
- drained row count
- checked lane count

### 3. Final classification

- PASS
- DUT_MISMATCH
- PACKAGE_ERROR
- DRIVER_ERROR
- INFRA_ERROR

---

## Recommended Executor Pipeline

The executor should be structured as six stages.

1. Validate package execution intent.
2. Build a normalized phase plan.
3. Execute phases against the DUT.
4. Collect status and drain results.
5. Compare against golden data.
6. Emit a structured report.

This separation matters because many replay failures are not arithmetic mismatches.

---

## Stage 1: Validate Package Execution Intent

Before any DUT activity, validate the execution-specific fields.

Required checks:

1. `system.memory.*` addresses and byte counts exist.
2. `system.dma.*` burst fields can legally transfer the declared bytes.
3. `execution.k_tile_count` is compatible with payload row counts.
4. `system.execution.flush_cycles` is present and non-negative.
5. `system.execution.phase_sequence` or `system.execution.passes` is present.
6. `system.execution.expected_dma_done_count` and `expected_npu_done_count` are coherent with the phase plan.
7. `system.banks.initial_bank_sel` is known.

If any of these fail, the executor must stop with `PACKAGE_ERROR`.

---

## Stage 2: Build A Normalized Phase Plan

The executor should convert manifest metadata into an internal phase list.

Recommended internal phase kinds:

- `reset`
- `dma_weights`
- `dma_activations`
- `wait_dma_done`
- `swap_banks`
- `preload_weights`
- `wait_npu_done`
- `ack_npu_done`
- `execute`
- `flush`
- `drain`
- `compare`

This internal phase list should be explicit, even if the manifest stores a more compact description.

---

## Stage 3: Execute Phases Against The DUT

The DUT-facing executor should operate on one phase at a time and return a typed phase result.

### Reset

- drive reset low
- clear MMIO control inputs
- wait a fixed reset interval
- release reset

### DMA Weights

- drive `mmio_dma_target = 1`
- drive the declared weight source address
- drive the declared burst length and total bursts
- pulse `mmio_start_dma`

### DMA Activations

- drive `mmio_dma_target = 0`
- drive the declared activation source address
- drive the declared burst length and total bursts
- pulse `mmio_start_dma`

### Wait DMA Done

- wait for one legal `mmio_dma_done` completion event
- classify timeout as `DRIVER_ERROR` or `DUT_MISMATCH` according to timeout policy

### Swap Banks

- pulse `mmio_swap_banks`
- update the executor's shadow bank state

### Preload Weights

- drive `mmio_npu_mode = 1`
- pulse `mmio_start_npu`

### Execute

- drive `mmio_npu_mode = 0`
- drive `mmio_npu_seq_len`
- drive `mmio_npu_acc_clear` according to pass policy
- pulse `mmio_start_npu`

### Wait NPU Done

- wait for one legal `mmio_npu_done` completion event

### Ack NPU Done

- pulse `mmio_clear_done`

### Flush

- wait the number of cycles declared by `system.execution.flush_cycles`

### Drain

- for each address in `execution.drain_addresses`, pulse `drain_re`, wait one documented latency cycle, and sample `psum_drain_out`

### Compare

- map drained rows and lanes to global coordinates
- compare against golden vectors

---

## Stage 4: Collect Status And Events

The executor should collect event records instead of relying only on console text.

Recommended event fields:

- timestamp or cycle
- phase name
- event kind
- relevant address or pass index
- observed signal value
- free-text note

Examples:

- DMA launch event with source address and transfer size
- DMA done event with phase tag
- NPU done event with mode tag
- drain sample event with row address and first/last lane values

These events become the evidence trail for sign-off reports.

---

## Stage 5: Compare And Classify

Comparison must happen after all requested drain rows are collected.

Recommended classification rules:

- package schema contradiction: `PACKAGE_ERROR`
- missing required simulator artifact or timeout waiting for DUT: `INFRA_ERROR` or `DRIVER_ERROR`
- legal replay sequence with wrong observed output: `DUT_MISMATCH`
- no mismatches and no infrastructure issue: `PASS`

The comparator must produce mismatch records that include:

- package id
- pass or phase context if relevant
- drain address
- lane index
- global row
- global column
- expected value
- observed value

---

## Stage 6: Report Emission

The executor should emit both a machine-friendly and human-friendly result.

Recommended artifacts:

- `replay_report.txt`
- `replay_events.json`
- `mismatches.json` when mismatches exist

The text report should be sufficient for a quick review.
The structured event file should support later sign-off report generation.

---

## Baseline Phase Plan Example

For `system_reference_gemm_tile_m0_n0_k0to15`, the normalized phase plan should look like this.

1. `reset`
2. `dma_weights`
3. `wait_dma_done`
4. `swap_banks`
5. `preload_weights`
6. `wait_npu_done`
7. `ack_npu_done`
8. `dma_activations`
9. `wait_dma_done`
10. `swap_banks`
11. `execute`
12. `wait_npu_done`
13. `ack_npu_done`
14. `flush`
15. `drain`
16. `compare`

This mirrors the existing directed system test sequence, but now under package control.

---

## Split-K Phase Plan Example

For `system_reference_gemm_tile_m0_n0_k0to31_splitk`, the executor should expand the package into a repeated per-pass phase plan.

1. `reset`
2. pass 0: `dma_weights`
3. pass 0: `wait_dma_done`
4. pass 0: `swap_banks`
5. pass 0: `preload_weights`
6. pass 0: `wait_npu_done`
7. pass 0: `ack_npu_done`
8. pass 0: `dma_activations`
9. pass 0: `wait_dma_done`
10. pass 0: `swap_banks`
11. pass 0: `execute` with overwrite semantics
12. pass 0: `wait_npu_done`
13. pass 0: `ack_npu_done`
14. pass 1: `dma_weights`
15. pass 1: `wait_dma_done`
16. pass 1: `swap_banks`
17. pass 1: `preload_weights`
18. pass 1: `wait_npu_done`
19. pass 1: `ack_npu_done`
20. pass 1: `dma_activations`
21. pass 1: `wait_dma_done`
22. pass 1: `swap_banks`
23. pass 1: `execute` with accumulate semantics
24. pass 1: `wait_npu_done`
25. pass 1: `ack_npu_done`
26. `flush`
27. `drain`
28. `compare`

The executor should derive overwrite versus accumulate policy from the pass index and `execution.acc_clear_policy`.

---

## Suggested Internal Data Model

The phase executor will be easier to test if it uses a typed internal model.

Recommended structures:

- `PackageContext`
- `PassPlan`
- `PhaseStep`
- `EventRecord`
- `DrainSample`
- `ReplaySummary`

At minimum, `PassPlan` should contain:

- `pass_index`
- `weights_src_addr`
- `activations_src_addr`
- `weight_burst_len`
- `weight_total_bursts`
- `activation_burst_len`
- `activation_total_bursts`
- `acc_clear`

That allows split-K and future non-uniform pass shapes to be represented without special-case code.

---

## Timeout And Error Policy

The executor should make timeout behavior explicit.

Recommended minimum policy:

- DMA done timeout -> `DRIVER_ERROR`
- NPU done timeout -> `DRIVER_ERROR`
- drain sample timeout or X contamination -> `DUT_MISMATCH`
- missing payload file -> `PACKAGE_ERROR`
- missing simulator artifact or simulator launch failure -> `INFRA_ERROR`

Do not collapse all failures into mismatch text.
That destroys sign-off usefulness.

---

## Minimum Exit Criteria For Implementation Readiness

The phase executor design should be considered ready to implement when the following are true.

1. The baseline package can be expanded into a deterministic phase list without hidden assumptions.
2. The split-K package can be expanded into repeated pass plans without ad hoc logic.
3. Counter collection for DMA done, NPU done, drained rows, and checked lanes is defined.
4. Error classes are stable enough to feed the L5 sign-off report template.
5. Required output artifacts are defined.

If those conditions hold, the next step is not more documentation.
It is implementing the system replay runner.