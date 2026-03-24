# Debugging Report

## Scope

This document is the triage guide for common failure patterns in the repository.

Use it when the design or testbench is failing and you need a fast path from symptom to likely root cause.

---

## First Triage Rule

Before analyzing a failure, identify which layer is failing.

1. Verilator core simulation
2. directed system simulation
3. UVM randomized simulation
4. assertion coverage or merged coverage flow

Many apparent RTL bugs are actually verification-timing or artifact-path issues.

---

## Symptom-To-Root-Cause Guide

### Symptom: Wrong result only on repeated writes to the same accumulation address

Likely area:

- accumulator forwarding

Inspect first:

- `rtl/psum_accumulator_buffer.sv`
- `tb/npu_uvm_pkg.sv`

Why this is tricky:

- the array may look correct
- only consecutive same-address operations expose the issue
- failures can look like scoreboard timing mistakes if you inspect only final data

### Symptom: Drain output is stale, unknown, or one step behind

Likely area:

- accumulator drain readout timing

Inspect first:

- `rtl/psum_accumulator_buffer.sv`
- `tb/tb_top.sv`
- `tb/npu_uvm_pkg.sv`

### Symptom: UVM `SCB_FAIL` but directed system flow looks healthy

Likely area:

- driver/monitor/scoreboard timing alignment

Inspect first:

- `tb/npu_uvm_pkg.sv`
- `tb/tb_top.sv`

Why this is tricky:

- DUT waveforms can look correct while the monitor samples the wrong cycle
- random stimulus can make the issue look nondeterministic

### Symptom: Wrong phase executes at the system level

Likely area:

- top-level mode decode

Inspect first:

- `rtl/npu_system_top.sv`

### Symptom: DMA appears logically correct but AXI behavior is malformed

Likely area:

- bus-width-dependent beat-size logic

Inspect first:

- `rtl/dma_controller.sv`

### Symptom: Assertions pass but coverage does not reflect expected intent

Likely area:

- coverage collector hookup or report path assumptions

Inspect first:

- `tb/assertions/npu_assert_coverage.sv`
- `scripts/run_sys.sh`
- `scripts/run_uvm.sh`
- `scripts/merge_uvm_cov.sh`

---

## Artifact-First Debugging Strategy

Always start from the latest relevant artifact.

### For system failures

Inspect:

- `sim/system/latest/sim.log`
- `sim/system/latest/assertion_cov_summary.txt`
- `sim/system/latest/tb_system_top.wdb`

### For UVM failures

Inspect:

- `sim/uvm/latest_run.txt`
- `sim/uvm/latest_sim_log.txt`
- `sim/uvm/latest_assert_cov_summary.txt`

Then move into the actual run directory named in `latest_run.txt`.

### For aggregate verification failures

Inspect:

- `sim/verify/core.log`
- `sim/verify/system.log`
- `sim/verify/uvm.log`
- `sim/verify/assertion_cov_summary.txt`

### For merged coverage issues

Inspect:

- `sim/uvm/merged_cov.log`
- `sim/uvm/merged_assertion_cov_summary.txt`

Do not start from the legacy flat `sim/` logs if the structured directories exist.

---

## Debugging Order

Use this order unless there is a clear reason not to.

1. identify failing layer
2. inspect latest generated artifact
3. locate first failing assertion, scoreboard marker, or coverage mismatch
4. map symptom to module using the table above
5. only then inspect RTL or testbench internals

This avoids spending time inside the wrong block.

---

## When To Suspect The Testbench Instead Of RTL

Suspect the testbench first when:

- directed system test passes but UVM fails
- failures are random-seed-sensitive without a clear RTL pattern
- scoreboard mismatches are off by one cycle
- DUT waveforms appear stable but monitor observations do not

Suspect RTL first when:

- repeated same-address accumulation is wrong
- drain data itself is unstable
- both directed and randomized flows fail in similar ways
- assertion failures point at the same DUT invariant repeatedly

---

## What To Update When A New Bug Class Is Found

If a new non-obvious failure pattern is discovered, update this file with:

1. symptom summary
2. likely root-cause area
3. first files to inspect
4. why the issue is easy to misdiagnose

That keeps future AI and human debugging much faster.