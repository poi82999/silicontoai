---
name: run-simulation
description: How to compile and run all simulation flows for the NPU project (Vivado xsim, Verilator, UVM)
---

# Simulation Execution Guide

This skill covers every simulation flow in the NPU project. Use it after making RTL or testbench changes to verify correctness.

---

## Quick Reference

| Simulation | Command | Expected Pass Marker | Log Location |
|---|---|---|---|
| System Directed (Vivado) | `scripts\run_sys.bat` | `[PERFECT MATCH]` | `sim/system/latest/sim.log` |
| UVM Full (Vivado) | `scripts\run_uvm.bat` | `UVM_ERROR : 0` | `sim/uvm/runs/<snapshot>/sim.log` |
| UVM Smoke | `scripts\run_uvm.bat npu_smoke_test` | `UVM_ERROR : 0` | same |
| UVM Basic | `scripts\run_uvm.bat npu_basic_test` | `UVM_ERROR : 0` | same |
| UVM Stress | `scripts\run_uvm.bat npu_stress_test` | `UVM_ERROR : 0` | same |
| Verilator Core | `make sim` (from root) | `ALL PASS` | terminal stdout |
| Verilator System | `make sim-system` | `ALL PASS` | terminal stdout |
| L5 Sign-off | `make l5-signoff` | `SIGN-OFF: PASS` | `build/l5_repeatability/` |
| Coverage Merge | `scripts\merge_uvm_cov.bat` | (no error) | `sim/uvm/coverage/merged/` |
| Verify Fast | `make verify-fast` | summary in file | `sim/verify/assertion_cov_summary.txt` |
| Verify Full | `make verify` | summary in file | `sim/verify/assertion_cov_summary.txt` |

---

## 1. Vivado System-Level Simulation (Primary)

This is the **most important** simulation — ensures the full system integration works.

### Prerequisites
- Vivado installed and on PATH (verify: `xvlog --version`)
- On Windows: run from `cmd.exe` or PowerShell inside `scripts/` directory

### Execution (Windows)
```bat
cd c:\projects\silicontoai\scripts
run_sys.bat
```

### Execution (Linux/WSL)
```bash
cd /path/to/silicontoai
make sys
# or directly:
bash scripts/run_sys.sh
```

### Expected Result
Log file: `sim/system/latest/sim.log`

**PASS indicators:**
```
[SUCCESS] Weight DMA Downloaded
[SUCCESS] NPU Weight Loaded into PEs
[SUCCESS] Activation DMA Downloaded
[SUCCESS] NPU Array Execution and 35-Cycle Flush Completed
[PERFECT MATCH] All columns computed exactly 1200!
SYSTEM INTEGRATION VERIFICATION ZERO-DEFECT
```

**FAIL indicators:**
```
[FAIL] Mismatch at col X: Expected 1200, Got <value>
```

### What it tests
- DMA → SRAM write path
- Ping-Pong bank swap
- Weight preload into systolic array PEs
- Activation feed → 31-cycle pipeline → accumulator write-back
- 35-cycle flush
- Drain readout and value comparison
- Test data: Weight=10 × Act=[0..15] → Expected psum = sum(lane × 10) = 1200 per column

---

## 2. UVM Random Verification

Tests the NPU Core (without DMA/SRAM system) with constrained-random stimuli.

### Execution
```bat
cd c:\projects\silicontoai\scripts
run_uvm.bat                    :: Full regression (basic + stress)
run_uvm.bat npu_smoke_test     :: Boundary values only
run_uvm.bat npu_basic_test     :: Random accumulation + drain
run_uvm.bat npu_stress_test    :: Same-address back-to-back (RAW forwarding)
```

### Expected Result
```
UVM_ERROR :    0
UVM_FATAL :    0
```

And for each drain:
```
SCB_PASS: Drain Data MATCHED at Addr <N>
```

**FAIL indicator:**
```
SCB_FAIL: Mismatch at Col X | Addr=Y | Expected: ..., Actual: ...
```

### UVM Test Descriptions
| Test | Scenario | Key Verification |
|---|---|---|
| `npu_smoke_test` | addr 0/1/510/511 with acc_clear=1 | Boundary address correctness |
| `npu_basic_test` | 20 random acc + 35 flush + 10 drain | General accumulation |
| `npu_stress_test` | Same addr ×4 (clear + 3 accumulate) ×10 | RAW hazard forwarding |
| `npu_test` | basic + stress combined | Full regression |

---

## 3. UVM Coverage Merge

After multiple UVM runs, merge assertion coverage:

```bat
cd c:\projects\silicontoai\scripts
merge_uvm_cov.bat
```

Output: `sim/uvm/coverage/merged/report_uvm_assert_merged/`

Summary: `sim/uvm/merged_assertion_cov_summary.txt`

---

## 4. Verilator Core Replay

Tests npu_core_top with package-driven test vectors.

### Build
```bash
make build-core    # builds to build/Vnpu_core_top
```

### Run default
```bash
make sim
```

### Run specific package
```bash
./build/Vnpu_core_top workloads/reference_gemm_tile_m0_n0_k0to15
./build/Vnpu_core_top workloads/reference_acc_forwarding_same_addr_core
```

### Expected Result
```
[PASS] ... ALL columns match golden
```

---

## 5. Verilator System Replay

Tests npu_system_top with full DMA/SRAM/Core path using workload packages.

### Build
```bash
make build-system    # builds to build_system/Vnpu_system_top
```

### Run default (all packages)
```bash
make sim-system
```

### Run specific package
```bash
make sim-system SYSTEM_PACKAGE=../workloads/system_reference_gemm_tile_m0_n0_k0to15
```

### Available Test Packages
| Package | Tests |
|---|---|
| `system_reference_gemm_tile_m0_n0_k0to15` | Basic 16×16 GEMM tile |
| `system_reference_gemm_tile_m0_n0_k0to31_splitk` | Split-K (K=32, 2 passes) |
| `system_reference_gemm_tile_m0_n0_k0to31_splitk_bankstress` | Split-K with bank stress |
| `system_reference_gemm_tile_m0_n16_k0to15` | N-offset tile |
| `system_reference_gemm_tile_m16_n0_k0to15` | M-offset tile |
| `system_reference_gemm_tile_m0_n0_k0to15_multiburst` | Multi-burst DMA |
| `system_reference_forwarding_same_addr_m0_n0_k0to15` | RAW forwarding stress |
| `system_l6_bridge_smoke` | L6 compiler output smoke |
| `system_l6_bridge_program_chain` | L6 multi-step chain |
| `system_l6_bridge_program_chain_signed_edge` | Signed edge cases |
| `system_l6_bridge_program_chain_splitk_tail` | Split-K tail tiles |
| `system_negative_invalid_dma_bytes` | Negative/error test |

---

## 6. L5 Sign-off

One-shot command running 8-package chained system replay + forwarding + numeric gate:

```bash
make l5-signoff
```

Output: `build/l5_repeatability/run1/l5_signoff_summary.txt`

### Repeatability Check
```bash
make l5-repeatability
```
Runs sign-off twice and compares outputs for deterministic behavior.

---

## 7. One-Step Verify

### Fast (Core + System only):
```bash
make verify-fast
```

### Full (Core + System + UVM):
```bash
make verify
```

Output: `sim/verify/assertion_cov_summary.txt`

---

## 8. Clean Up

```bash
make clean              # Build artifacts
make clean-artifacts    # Simulation outputs
```

---

## Recommended Verification Order After RTL Change

1. **`run_sys.bat`** — System directed test (fastest, catches integration bugs)
2. **`run_uvm.bat npu_smoke_test`** — Quick UVM boundary check
3. **`run_uvm.bat`** — Full UVM regression
4. **`make sim`** — Verilator core replay
5. **`make sim-system`** — Verilator system replay (all packages)
6. **`make l5-signoff`** — Full sign-off (before committing)

If step 1 fails, fix RTL first — do not proceed to further tests.

---

## Troubleshooting

| Symptom | Likely Cause | Fix |
|---|---|---|
| `xvlog: command not found` | Vivado not on PATH | Run `scripts/setup_vivado_env.bat` or source Vivado settings |
| `PERFECT MATCH` missing but no `[FAIL]` | Simulation didn't reach drain phase | Check FSM stuck in FLUSH or DONE state |
| `SCB_FAIL` in UVM | Scoreboard mismatch | Check pipeline latency (31 cycles) alignment |
| Verilator build error | RTL syntax | Run `xvlog` first to get better error messages |
| `dma_done` never asserts | DMA burst config wrong | Check `burst_len` and `total_bursts` values |
