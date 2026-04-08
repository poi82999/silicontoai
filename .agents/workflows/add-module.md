---
description: How to add a new RTL module to the NPU project
---

# Add New RTL Module

Follow this workflow when adding a new SystemVerilog module to the project.

## Steps

1. **Read the RTL coding guide** — Review `.agents/skills/rtl-coding-guide/SKILL.md` for naming and style conventions.

2. **Create the module file** at `rtl/<module_name>.sv`:
   - One module per file
   - Follow port ordering: clk → rst_n → control inputs → data inputs → data outputs → status
   - Include `` `timescale 1ns / 1ps`` at the top
   - Use `logic` types, `always_ff` for sequential, `always_comb` for combinational
   - Instance prefix: `u_<name>`

3. **Integrate into parent module**:
   - Add instance to the instantiating module (e.g., `npu_core_top.sv` or `npu_system_top.sv`)
   - Use named port connections (`.port(signal)`)
   - Add internal wire declarations where needed

4. **Update simulation file lists** (if needed):
   - `scripts/run_sys.bat` — add `xvlog` line for new file
   - `scripts/run_uvm.bat` — add `xvlog` line if used in UVM TB
   - `scripts/Makefile` — add to Verilator source list

5. **Add Verilator lint pragmas** if needed:
   ```systemverilog
   /* verilator lint_off UNUSEDSIGNAL */
   logic unused_signal;
   /* verilator lint_on UNUSEDSIGNAL */
   ```

6. **Run System Simulation** to verify integration:
   ```bat
   cd c:\projects\silicontoai\scripts
   run_sys.bat
   ```
   Check for `[PERFECT MATCH]` in output.

7. **Run UVM Smoke Test** (if module affects core datapath):
   ```bat
   run_uvm.bat npu_smoke_test
   ```

8. **Update documentation**:
   - `README.md` — add to directory structure if user-facing
   - `docs/architecture_report.md` — add to hierarchy diagram
   - `docs/current_status_report.md` — note in weekly log

9. **Update concat script** (if needed):
   - `tools/concat.py` will auto-discover files in `rtl/`, but verify
