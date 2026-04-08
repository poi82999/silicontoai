---
description: Full verification flow after RTL changes — system sim, UVM, Verilator replay, coverage
---

# Full Verification Flow

Run this workflow after making RTL or testbench changes to verify everything still works.

// turbo-all

## Steps

1. Run System Directed Test (Vivado xsim)
```bat
cd c:\projects\silicontoai\scripts
run_sys.bat
```
**Check**: `sim/system/latest/sim.log` contains `[PERFECT MATCH]`

2. Run UVM Smoke Test
```bat
cd c:\projects\silicontoai\scripts
run_uvm.bat npu_smoke_test
```
**Check**: Output contains `UVM_ERROR : 0`

3. Run UVM Full Regression
```bat
cd c:\projects\silicontoai\scripts
run_uvm.bat
```
**Check**: Output contains `UVM_ERROR : 0` for both basic and stress tests

4. Build Verilator Core (if RTL changed)
```bash
cd c:\projects\silicontoai
make build-core
```

5. Run Verilator Core Replay
```bash
make sim
```
**Check**: `ALL PASS`

6. Build Verilator System (if RTL changed)
```bash
make build-system
```

7. Run Verilator System Replay
```bash
make sim-system
```
**Check**: `ALL PASS`

8. Merge UVM Coverage
```bat
cd c:\projects\silicontoai\scripts
merge_uvm_cov.bat
```

9. Generate Verification Summary
```bash
make verify
```
**Check**: `sim/verify/assertion_cov_summary.txt` shows all passing

10. (Optional) Run L5 Sign-off
```bash
make l5-signoff
```
**Check**: `SIGN-OFF: PASS`
