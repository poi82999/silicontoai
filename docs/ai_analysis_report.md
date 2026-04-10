# AI Analysis Index

## Purpose

This file is the analysis entry point for AI/code agents.

Use it as an index, not as the only report.
Detailed analysis is split into architecture, verification, and debugging documents so they can be maintained independently as the project evolves.

---

## Recommended Reading Order

1. [README.md](../README.md)
2. [docs/ai_analysis_report.md](./ai_analysis_report.md)
3. [docs/functional_contract_report.md](./functional_contract_report.md)
4. [docs/workload_package_report.md](./workload_package_report.md)
5. [docs/core_replay_loader_report.md](./core_replay_loader_report.md)
6. [docs/l5_system_replay_scenarios_report.md](./l5_system_replay_scenarios_report.md)
7. [docs/l5_signoff_report.md](./l5_signoff_report.md)
8. [docs/system_replay_phase_executor_report.md](./system_replay_phase_executor_report.md)
9. [docs/architecture_report.md](./architecture_report.md)
10. [docs/verification_report.md](./verification_report.md)
11. [docs/debugging_report.md](./debugging_report.md)
12. [docs/report_update_checklist.md](./report_update_checklist.md)
13. [docs/factory_analogy_architecture.md](./factory_analogy_architecture.md)
14. [docs/m5_end_to_end_compiler_design.md](./m5_end_to_end_compiler_design.md)
15. `l6/README.md`
16. `l6/src/l6_toolchain/api.py`
17. `rtl/npu_system_top.sv`
18. `rtl/npu_core_top.sv`
19. `tb/npu_uvm_pkg.sv`

---

## Document Map

- [docs/functional_contract_report.md](./functional_contract_report.md)
  - System/core I/O semantics, phase contract, accumulator/drain rules, timing contract, and sign-off interpretation.

- [docs/workload_package_report.md](./workload_package_report.md)
  - L2 workload package concept, manifest responsibilities, required fields, and replay-oriented package examples.

- [docs/core_replay_loader_report.md](./core_replay_loader_report.md)
  - L4 core replay loader responsibilities, execution sequence, mapping rules, and mismatch reporting behavior.

- [docs/l5_system_replay_scenarios_report.md](./l5_system_replay_scenarios_report.md)
  - L5 package family matrix, required scenario coverage, execution order, and scenario exit criteria.

- [docs/l5_signoff_report.md](./l5_signoff_report.md)
  - Final L5 sign-off report with 8-package regression evidence, assertion summaries, and closure decision.

- [docs/system_replay_phase_executor_report.md](./system_replay_phase_executor_report.md)
  - System replay runner architecture, normalized phase plan, pass expansion rules, and error classification.

- [docs/architecture_report.md](./architecture_report.md)
  - Module roles, dataflow, timing model, design invariants, and Mermaid connectivity diagram.

- [docs/verification_report.md](./verification_report.md)
  - Directed test flow, UVM structure, assertions, coverage flow, commands, and artifact locations.

- [docs/debugging_report.md](./debugging_report.md)
  - Historically tricky bug classes, symptom-to-file triage, and recommended debugging sequence.

- [docs/report_update_checklist.md](./report_update_checklist.md)
  - Checklist and template to keep these reports synchronized when RTL/test flow changes.

- [docs/factory_analogy_architecture.md](./factory_analogy_architecture.md)
  - Full hardware/software stack mapped to a factory pipeline analogy. Covers RTL signals, Python classes, constants, verification flows, and the end-to-end tile production cycle.

- [docs/m5_end_to_end_compiler_design.md](./m5_end_to_end_compiler_design.md)
  - M5 compiler design note. Covers the 4-layer pipeline (import, plan, materialize, report), existing baseline, problem statement, and proposed architecture.

---

## Project In One Line

This repository implements a 16x16 weight-stationary systolic-array NPU in SystemVerilog, with AXI read DMA, ping-pong SRAM staging, psum accumulation, and directed/UVM-based verification.

---

## AI Handoff Checklist

Before you report conclusions about this repository, verify the following.

- Did you distinguish top-level system behavior from core-only behavior?
- Did you account for the 31-cycle datapath timing assumption?
- Did you inspect accumulator forwarding before blaming array arithmetic?
- Did you check current artifacts under `sim/system`, `sim/uvm`, and `sim/verify` rather than stale flat-layout logs?
- Did you read the matching report section for architecture, verification, and debugging before proposing changes?

If all answers are yes, your analysis is likely aligned with the current repository structure.