# L7 Environment Setup

## Scope

This document defines the minimum host setup needed before starting L7 FPGA implementation work.

Current repo status:

- Vivado simulation flow exists.
- Verilator replay flow exists through WSL.
- No board-specific XDC/Tcl implementation assets are committed yet.

That means L7 should start with environment closure first, then board/part selection, then synthesis and timing.

---

## Required Host Capabilities

### 1. Windows-side Vivado tools

Required for the existing xsim-based system and UVM flows:

- `xvlog`
- `xelab`
- `xsim`
- `xcrg`

Recommended install:

- AMD Vivado 2025.2 if possible, because current scripts and reports were observed around that version.

The Windows batch scripts now support two setup modes:

1. `VIVADO_SETTINGS64` environment variable points to `settings64.bat`
2. Auto-detect from common install paths such as:
   - `C:\AMDDesignTools\2025.2\Vivado\settings64.bat`
   - `C:\AMD\Vivado\2025.2\settings64.bat`
   - `C:\Xilinx\Vivado\2025.2\settings64.bat`

Recommended persistent environment variable:

```powershell
[System.Environment]::SetEnvironmentVariable(
    "VIVADO_SETTINGS64",
    "C:\AMDDesignTools\2025.2\Vivado\settings64.bat",
    "User"
)
```

Open a new terminal after setting it.

### 2. WSL-side build tools

Required for Verilator-backed replay and Linux-side native builds:

- `bash`
- `make`
- `g++`
- `verilator`

Recommended baseline inside WSL Ubuntu:

```bash
sudo apt update
sudo apt install -y build-essential verilator make
```

### 3. Python toolchain

Not strictly required for bare Vivado synthesis, but required if L7 bring-up will keep using L6 package generation, replay bridge, or workload regeneration.

Recommended workspace environment:

- `.venv312`
- Python 3.12

Install path:

```powershell
c:/projects/silicontoai/.venv312/Scripts/python.exe -m pip install -e .[dev] torch
```

---

## Repo Validation

Run the new environment check first:

```powershell
powershell -ExecutionPolicy Bypass -File scripts/check_l7_env.ps1
```

What this verifies:

- Vivado tool visibility or `settings64.bat` discovery
- WSL presence
- WSL `make`, `g++`, `verilator`
- optional Python 3.12 workspace venv
- presence of repo-side `*.xdc` and `*.tcl` implementation assets

The checker excludes generated artifact trees such as `sim/`, `build/`, and `build_system/` so that temporary `xsim_script.tcl` files do not get mistaken for real L7 implementation inputs.

Expected current state for this repository:

- Vivado may be missing until installed/configured
- WSL may already exist
- `*.xdc` and `*.tcl` are expected to be missing because L7 implementation assets are not committed yet

---

## Existing Script Behavior

The following Windows scripts no longer require a hardcoded Vivado path:

- `scripts/run_sys.bat`
- `scripts/run_uvm.bat`
- `scripts/merge_uvm_cov.bat`
- `scripts/debug_run.bat`

They now call `scripts/setup_vivado_env.bat`, which:

- uses `VIVADO_SETTINGS64` first
- otherwise checks whether Vivado tools are already on `PATH`
- otherwise tries common install paths

---

## L7 Bring-up Prerequisites Not Yet in Repo

Before actual FPGA implementation, this repo still needs board-specific assets.

Required next artifacts:

1. Board or device decision
2. Part name, package, speed grade
3. Top-level FPGA wrapper if the current sim top is not directly synthesize-ready for board IO
4. XDC constraints for clock, reset, IO, and optionally debug probes
5. Tcl or Make-based synthesis/implementation entry flow
6. Output directory convention for reports and bitstreams

Without these, environment setup can be complete but L7 synthesis cannot be considered started.

---

## Recommended L7 Startup Order

1. Make `check_l7_env.ps1` pass for Vivado and WSL tools.
2. Confirm `scripts/run_sys.bat` and `make sim-system` still pass after tool setup.
3. Choose target board and exact FPGA part.
4. Add first `constraints/*.xdc` and `fpga/*.tcl` or equivalent non-project flow.
5. Produce the first synthesis report before touching timing closure work.

---

## Suggested Success Criteria

Environment setup for L7 is complete when all of the following are true:

- `scripts/check_l7_env.ps1` reports Vivado simulation ready = `True`
- `scripts/check_l7_env.ps1` reports WSL build ready = `True`
- `scripts/run_sys.bat` executes successfully
- `make sim-system` executes successfully via WSL
- target FPGA part and board are fixed
- first XDC and build Tcl are committed

At that point, the next milestone is no longer environment setup but first synthesis/utilization/timing evidence.