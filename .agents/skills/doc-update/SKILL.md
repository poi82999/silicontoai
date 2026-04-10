---
name: doc-update
description: Checklist for keeping project documentation in sync after RTL or verification changes
---

# Documentation Update Guide

After making changes to RTL, testbenches, or verification infrastructure, update the relevant documentation to keep everything in sync.

---

## Quick Decision Matrix

| Change Type | Documents to Update |
|---|---|
| New RTL module | `architecture_report.md`, `README.md` (if user-facing), `current_status_report.md` |
| RTL port/interface change | `functional_contract_report.md`, `architecture_report.md` |
| FSM state change | `functional_contract_report.md`, `verification_report.md` |
| Pipeline latency change | `functional_contract_report.md`, `architecture_report.md`, `README.md` |
| New testbench | `verification_report.md`, `README.md` |
| New workload package | `l5_system_replay_scenarios_report.md`, `workload_package_report.md` |
| UVM test addition | `verification_report.md` |
| Assertion addition | `verification_report.md` |
| L6 compiler change | `l6/README.md`, `current_status_report.md` |
| FPGA build change | `l7_environment_setup.md`, `l7_preboard_bringup_results.md` |
| Bug fix | `debugging_report.md` (add to known patterns), `current_status_report.md` |
| Script/Makefile change | `README.md` (if commands change), `verification_report.md` |

---

## Document Locations

```
docs/
├── ai_analysis_report.md            # Analysis entry point (rarely changes)
├── architecture_report.md           # RTL hierarchy, data flow
├── current_status_report.md         # Phase progress, weekly log
├── functional_contract_report.md    # I/O contracts, timing rules
├── verification_report.md           # Verification structure, commands
├── debugging_report.md              # Debug patterns
├── workload_package_report.md       # Package schema docs
├── l5_system_replay_scenarios_report.md  # Replay scenario table
├── l5_signoff_report.md             # L5 sign-off evidence
├── core_replay_loader_report.md     # Core replay design
├── system_replay_phase_executor_report.md  # System replay design
├── l6_arithmetic_semantics_report.md # L6 arithmetic policy
├── l6_signed_int8_design.md         # Signed-int8 design & checklist
├── l6_roofline_manifest_schema.md   # Roofline schema contract
├── l7_environment_setup.md          # FPGA environment
├── l7_preboard_bringup_results.md   # FPGA results
├── report_update_checklist.md       # Original checklist
└── factory_analogy_architecture.md  # Architecture analogy
```

---

## Update Rules

### Rule 1: current_status_report.md — Always Update
After ANY significant change, add an entry to the Weekly Update Log section:
```markdown
**[YYYY.MM.DD update]**
- Status: 🟢 정상 진행
- One-line summary: <what changed>

Completed since the previous snapshot:
- [x] <item 1>
- [x] <item 2>
```

### Rule 2: README.md — User-Facing Changes Only
Update when:
- New simulation commands or Makefile targets
- Directory structure changes
- Design spec changes (MAC count, pipeline depth, etc.)

### Rule 3: architecture_report.md — Structural Changes
Update when:
- New module added to hierarchy
- Module interface (ports) changed
- Data flow paths changed

### Rule 4: functional_contract_report.md — Behavioral Contract Changes
Update when:
- Timing semantics change (pipeline depth, latency)
- Phase ordering rules change
- DMA/accumulator/drain behavior changes
- Legal/illegal sequence definitions change

### Rule 5: verification_report.md — Test Infrastructure Changes
Update when:
- New test added (UVM, directed, replay)
- Coverage targets change
- Assertion definitions change
- Simulation command changes

---

## Validation Checklist

After updating docs, verify:
- [ ] No broken internal links between documents
- [ ] Version numbers/dates are current
- [ ] Mermaid diagrams still accurate
- [ ] Command examples still work
- [ ] Progress percentages reflect actual state
