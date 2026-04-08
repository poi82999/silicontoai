---
name: verification-debug
description: Systematic debugging guide for NPU simulation failures including UVM, directed tests, and replay mismatches
---

# Verification Debug Guide

When a simulation fails, follow this guide to systematically find and fix the root cause.

---

## Decision Tree: Which Simulation Failed?

```
Failure Type
├── System Directed Test (run_sys.bat) → Section 1
├── UVM Test (run_uvm.bat) → Section 2
├── Verilator Core Replay → Section 3
├── Verilator System Replay → Section 4
└── DMA never completes → Section 5
```

---

## 1. System Directed Test Failure

### Symptom: `[FAIL] Mismatch at col X: Expected 1200, Got <value>`

**Step 1**: Check which columns fail
- All 16 fail with same wrong value → Global issue (pipeline latency, FSM bug)
- Only some columns fail → Skew/deskew alignment issue or PE-specific bug
- Value is `0` → Data never reached accumulator (DMA or bank_sel issue)
- Value is partially correct → Accumulator `acc_clear` or `acc_addr` timing issue

**Step 2**: Check FSM transitions in debug log
```
[DBG @<time>] state=<N> exec_cnt=<M> sram_ren=<B> valid_q=<B> flush_cnt=<K>
```
- Verify `state` transitions: expect IDLE(0) → LOAD_WT(1) → LOAD_WT_WAIT(2) → DONE(5) → ... → EXEC_ACT(3) → FLUSH(4) → DONE(5)
- Check `exec_cnt` reaches `mmio_npu_seq_len - 1`
- Check `flush_cnt` reaches 34

**Step 3**: Check `[SCB_PASS]` messages from npu_core_top
```
[SCB_PASS] [NPU CORE] Bottom Valid Output: Addr=<A>, Data0=<V>, Data15=<V>
```
- If these never appear → accumulator valid signal never asserted
- If values look wrong → check weight preload or activation data

### Symptom: Simulation hangs (no `$finish`)

- FSM stuck in `ST_FLUSH` → `flush_cnt` not reaching 34 (check counter increment)
- FSM stuck in `ST_DONE` → `mmio_clear_done` never pulsed
- DMA never completes → See Section 5

---

## 2. UVM Test Failure

### Symptom: `SCB_FAIL: Mismatch at Col X | Addr=Y | Expected: E, Actual: A`

**Step 1**: Identify the failing test
- `npu_smoke_test` fail → Boundary address bug
- `npu_stress_test` fail → RAW hazard forwarding issue
- `npu_basic_test` fail → General accumulation bug

**Step 2**: Common causes

| Symptom | Likely Cause |
|---|---|
| All columns wrong by same ratio | Pipeline latency mismatch in testbench (should be 31+1=32 cycles) |
| Only addr=0 or addr=511 wrong | Edge-case in accumulator BRAM addressing |
| Stress test fail, basic passes | RAW forwarding logic in `psum_accumulator_buffer` broken |
| Values doubled/tripled | `acc_clear` not applied — data accumulated instead of overwritten |
| Values half expected | `acc_clear` applied when it shouldn't be |

**Step 3**: Verify scoreboard reference model alignment
- Scoreboard pipeline delay is count-based (not cycle-based)
- Sequences must include `repeat(35) send_idle_cycle()` between acc and drain
- If sequences are modified, verify flush gap is maintained

---

## 3. Verilator Core Replay Failure

### Symptom: `MISMATCH at Col X | Tile ... | Expected: E, Got: A`

**Step 1**: Check the workload package
```
workloads/<package>/manifest.json    # tile config
workloads/<package>/weight.bin       # weight data
workloads/<package>/act.bin          # activation data
workloads/<package>/golden.bin       # expected output
```

**Step 2**: Verify golden correctness
- Golden is computed by L6 toolchain or manually
- Re-generate golden: `python l6/regenerate_fixed_replay_assets.py`
- Compare: manually compute `sum(act[row] * weight[row][col])` for a cell

**Step 3**: Check accumulator forwarding
- For `reference_acc_forwarding_same_addr_core`: all tiles use same `acc_addr`
- First tile has `acc_clear=1`, subsequent have `acc_clear=0`
- If forwarding bypass fails, later tiles read stale BRAM value

---

## 4. Verilator System Replay Failure

Same as Core Replay, plus additional system-level issues:

**Additional checks:**
- DMA burst alignment: `burst_len` and `total_bursts` must cover all data
- Bank swap timing: ensure `mmio_swap_banks` pulse between DMA and NPU phases
- Address mapping: byte address → beat address conversion (`addr[12:4]` for 128-bit)

**For Split-K failures:**
- First K-pass must have `acc_clear=1`, subsequent passes `acc_clear=0`
- If values are only from last pass, `acc_clear` is wrong
- If values are doubled, `acc_clear` should have been set but wasn't

---

## 5. DMA Never Completes

### Symptom: `wait(mmio_dma_done)` hangs

**Check 1**: AXI handshake
- Is `arvalid` asserted? If not → DMA FSM never entered `busy` state
- Is `arready` responding? If not → AXI slave not accepting requests
- Is `rvalid` coming back? If not → AXI slave not returning data

**Check 2**: Burst config
- `total_bursts == 0` → DMA finishes immediately (check mmio_total_bursts)
- `burst_len` mismatch with AXI slave → `rlast` timing wrong

**Check 3**: Outstanding tracking
```
outstanding_cnt = outstanding_cnt + ar_fire - r_last_fire
```
- If outstanding hits MAX_OUTSTANDING (8), DMA stalls until responses come

---

## 6. Pipeline Latency Patterns

Understanding the 31-cycle pipeline is critical for debugging:

```
Input (act_in, weight) at cycle T
  → Systolic Array skew: +0 to +15 cycles (row-dependent)
  → MAC computation: +1 cycle
  → Deskew pipeline: +0 to +15 cycles (column-dependent)
  → All columns aligned at: T + 31 cycles
  → Accumulator control delayed by 31-cycle pipeline in npu_core_top
  → Accumulator BRAM write-back: +1 cycle
Total: input at T → accumulator updated at T + 32
```

**Common latency mistakes:**
- Off-by-one in `acc_valid_pipe` width (should be `[30:0]`, 31 stages)
- Flush count not accounting for accumulator write-back (should be ≥34)
- SRAM read latency (1 cycle) not accounted in read mux path

---

## 7. RAW Forwarding Debug

The accumulator has a Read-After-Write hazard bypass:

```systemverilog
assign forward_en = acc_valid_q && last_write_valid && (acc_addr_q == last_write_addr);
```

**If forwarding fails (stress test mismatch):**
1. Check `forward_en` assertion timing in waveform
2. Verify `last_write_data` is updated **after** `acc_write_data` computation
3. Verify `last_write_addr` matches current `acc_addr_q`
4. Confirm bypass MUX: `acc_rd_data = forward_en ? last_write_data : bram_rd_data`

**If forwarding causes corruption:**
- `last_write_valid` must clear on non-accumulation cycles
- `forward_en` only valid when both sides are valid
