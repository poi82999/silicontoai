---
name: context-router
description: Route SiliconToAI study, debugging, and implementation requests to the smallest relevant project context. Use before reading broad repo context, especially for RTL, UVM/testbench, L6 compiler, FPGA, host, or study-roadmap questions where unrelated project parts must be excluded to save tokens.
---

# Context Router

Use this skill before broad exploration. The rule is strict: for a request about one part, load only that part's domain knowledge and directly related project files.

## Workflow

1. Classify the request into one primary part.
2. Load only the allowed context for that part.
3. Do not read denied parts unless the user asks for cross-part integration or the current part cannot be understood without a boundary file.
4. Prefer `rg -n` hits, file headings, and short line ranges before full files.
5. State the selected part when it affects the answer.

Run the helper when classification is not obvious:

```powershell
python .agents/skills/context-router/scripts/context_router.py --query "<request>"
```

## Parts

| Part | Use for | Allowed context | Default denied context |
|---|---|---|---|
| `rtl-core` | MAC PE, systolic array, NPU core datapath | `rtl/core/**`, `rtl/include/**`, `docs/study_guide/01_rtl_include/**`, `docs/study_guide/02_rtl_core/**` | `l6/**`, `host/**`, `rtl/fpga/**`, unrelated `tb/**` |
| `rtl-memory` | SRAM bank, accumulator, memory timing | `rtl/memory/**`, `rtl/include/**`, `docs/study_guide/04_rtl_memory/**` | `l6/**`, `host/**`, `rtl/fpga/**`, unrelated core files |
| `rtl-system` | DMA, AXI-Lite, system top | `rtl/system/**`, `rtl/include/**`, relevant `rtl/core/*top*`, `docs/study_guide/05_rtl_system/**` | `l6/**` except replay boundary, `rtl/fpga/**` |
| `tb-verification` | UVM, assertions, directed TB, Verilator replay | `tb/**`, `docs/study_guide/07_tb/**`, DUT files directly instantiated by the TB | `l6/**` except replay package boundary, unrelated RTL internals |
| `l6-toolchain` | IR, fusion, lowering, scheduler, quantize, compiler tests | `l6/src/l6_toolchain/**`, `l6/tests/**`, `docs/study_guide/08_l6_toolchain/**` | `rtl/**` except hardware contract docs, `tb/**`, `host/**` |
| `fpga` | Vivado, PYNQ, Arty A7, bitstream, wrapper | `rtl/fpga/**`, `vivado/**` summaries, `docs/study_guide/06_rtl_fpga/**`, `.agents/skills/fpga-build/SKILL.md` | `l6/**`, deep `tb/**` |
| `host` | DMA driver, mock allocator, replay package host side | `host/**`, `docs/study_guide/09_host/**`, boundary `rtl/system/dma_controller.sv` only if needed | deep `rtl/core/**`, `l6/**` unless replay format is asked |
| `study-roadmap` | learning roadmap, textbooks, lectures, study material management | `docs/study_guide/README.md`, `docs/study_guide/자료_수집_관리_계획.md`, roadmap docs, selected external links | source code unless user asks to connect concept to code |

## Boundary Escalation

Escalate across parts only for these cases:

- Interface/package dependency: include `rtl/include/**`.
- Top-level integration: include only the immediate parent or child top module.
- Replay boundary: include `l6` replay bridge or `host` replay package only when the request mentions replay/workload/system verification.
- Verification boundary: include DUT file(s) directly bound or instantiated by a test.

When escalating, load the boundary file only, not the whole neighboring part.

## Token Budget

- Study explanation: 1 roadmap/study-guide section + 1-2 code files max.
- Code explanation: 1 domain guide + 1-3 source files max.
- Debugging: failing log excerpt + 1 test file + 1-3 DUT files max.
- Implementation: directly edited files + local tests/workflow only.

If more context seems necessary, explain why before reading it.
