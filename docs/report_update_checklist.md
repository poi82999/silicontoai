# Report Update Checklist And Template

## Purpose

Use this file whenever RTL, verification flow, or artifact layout changes.

The goal is to keep the analysis documents synchronized with the actual repository behavior.

---

## When An Update Is Required

Update the reports if any of the following changed.

- module responsibilities changed
- top-level dataflow changed
- timing assumptions changed
- control/state-machine behavior changed
- assertion structure changed
- UVM or directed test intent changed
- coverage flow changed
- artifact locations changed
- recommended debug sequence changed

If the change is purely local refactoring with no behavior or workflow impact, a report update may not be required.

---

## Mandatory Checklist For RTL Or Flow Changes

Before finishing the work, confirm each item.

- Did you update [docs/architecture_report.md](./architecture_report.md) if module roles, dataflow, timing, or invariants changed?
- Did you update [docs/verification_report.md](./verification_report.md) if tests, assertions, commands, or artifacts changed?
- Did you update [docs/debugging_report.md](./debugging_report.md) if the change introduced a new bug pattern or changed triage guidance?
- Did you update [docs/ai_analysis_report.md](./ai_analysis_report.md) if document structure or reading order changed?
- Did you update [README.md](../README.md) if user-facing commands, document entry points, or layout changed?
- If module connectivity changed, did you update the Mermaid diagram in [docs/architecture_report.md](./architecture_report.md)?

---

## Minimal Update Template

Copy this section into your task notes or PR description when the change is substantial.

```text
Report Update Summary

1. Change summary
- What changed in RTL, verification, or scripts?

2. Impacted modules/files
- List the main RTL/TB/script files touched.

3. Architecture impact
- Did dataflow, module role, timing, or interface assumptions change?
- If yes, which section of architecture_report.md was updated?

4. Verification impact
- Did test intent, assertions, coverage, commands, or artifact paths change?
- If yes, which section of verification_report.md was updated?

5. Debugging impact
- Does this create or remove a known tricky failure mode?
- If yes, which section of debugging_report.md was updated?

6. Mermaid impact
- Did module connectivity or control ownership change?
- If yes, was the Mermaid diagram updated?

7. Validation
- Which commands were run to confirm the documented behavior?
```

---

## Quick Heuristic

Use this shortcut:

- changed RTL structure: update architecture doc
- changed tests/assertions/scripts: update verification doc
- fixed a subtle bug or found a new failure pattern: update debugging doc
- changed how readers should enter the doc set: update analysis index

If more than one of those is true, update more than one document.