---
name: fpga-build
description: FPGA synthesis and implementation workflow for Vivado targeting Arty A7, Zynq, and PYNQ platforms
---

# FPGA Build Guide

This skill covers Vivado synthesis and implementation for all three FPGA targets.

---

## Target Boards

| Target | FPGA | Top Module | Use Case |
|---|---|---|---|
| Arty A7-35T | xc7a35t | `fpga_core_bringup_top` | Core-only standalone test |
| Zynq Z-7020 | xc7z020 | `fpga_system_bringup_top` | Full system with ILA debug |
| PYNQ-Z2 | xc7z020 | `fpga_pynq_top` | PS7 → AXI-Lite → NPU overlay |

---

## 1. Prerequisites

- Vivado 2020.2+ installed (Design Suite or WebPack)
- Board files installed for target board
- On Windows: use Vivado TCL console or batch mode

---

## 2. Vivado TCL Scripts

Located in `vivado/`:

| Script | Target |
|---|---|
| `build_core_arty.tcl` | Arty A7-35T core bringup |
| `build_system_zynq.tcl` | Zynq system with ILA |
| `build_pynq_overlay.tcl` | PYNQ overlay |

### Running a build
```tcl
# From Vivado TCL console:
cd c:/projects/silicontoai/vivado
source build_system_zynq.tcl
```

Or batch mode:
```bat
vivado -mode batch -source vivado/build_system_zynq.tcl
```

---

## 3. Build Outputs

### Arty A7 Core
- Bitstream: `vivado/build_core_arty/npu_core.bit`
- Utilization: Check `vivado/build_core_arty/reports/utilization.rpt`

### Zynq System
- Bitstream: `vivado/build_system_zynq/npu_system.bit`
- ILA probes: 14 signals, depth 1024
- Debug signals: `(* mark_debug = "true" *)` annotated in RTL

### PYNQ Overlay
- Bitstream: `vivado/build_pynq/npu_pynq.bit`
- Hardware handoff: `vivado/build_pynq/npu_pynq.hwh`
- Both `.bit` and `.hwh` needed for PYNQ overlay loading

---

## 4. FPGA Top Module Descriptions

### fpga_core_bringup_top (Arty A7)
- **Inputs**: `board_clk`, `rst_btn_n`, `start_btn`
- **Outputs**: `alive_led`, `done_led`, `debug_led[3:0]`
- Self-contained test: PRELOAD → EXECUTE → FLUSH → DRAIN → CHECK
- Expected result: `result_match_latched = 1` (LED on)
- Test: Weight=1 × Act=[0..15] → golden = 120 per column

### fpga_system_bringup_top (Zynq)
- Full AXI-Lite path: Self-Test FSM → MMIO Bridge → NPU System → Local BRAM
- 16-state FSM orchestrates: DMA weight → swap → preload → DMA act → swap → execute → drain → check
- AXI-Lite write/read drivers included
- `(* mark_debug *)` on key signals for ILA probing

### fpga_pynq_top (PYNQ-Z2)
- PS7 ARM Cortex-A9 → AXI-Lite slave → Register map → NPU system
- Register map at 0x00-0x7C (see header comment in `fpga_pynq_top.sv`)
- Drain capture with 2-cycle pipeline for BRAM latency
- LED: heartbeat, dma_done, npu_done, drain_valid
- Local test BRAM (512 × 128b) with initialized weight/activation data

---

## 5. Register Map (PYNQ)

| Offset | Name | Access | Description |
|---|---|---|---|
| 0x00 | CTRL | W1S | `[0]start_dma [1]start_npu [2]swap [3]clear_done` |
| 0x04 | STATUS | RO | `[0]dma_done [1]npu_done` |
| 0x08 | DMA_CFG | RW | `[0]target [4]mode [5]acc_clear` |
| 0x0C | SRC_LO | RW | `src_addr[31:0]` |
| 0x10 | SRC_HI | RW | `src_addr[63:32]` |
| 0x14 | BURST | RW | `[7:0]burst_len [23:8]total_bursts` |
| 0x18 | SEQ | RW | `[15:0]npu_seq_len` |
| 0x1C | ACC_TEST | RW | Override/one-shot controls |
| 0x20 | DRAIN_CMD | W | `[4:0]row` → triggers drain |
| 0x24 | DRAIN_STS | RO | `[0]drain_valid` |
| 0x40-0x7C | PSUM[0-15] | RO | Captured drain output |

---

## 6. PYNQ Host Notebook

```python
from pynq import Overlay

overlay = Overlay("npu_pynq.bit")
npu = overlay.npu_system

# Write DMA config
npu.write(0x08, 0x31)  # target=weight, mode=preload, acc_clear
npu.write(0x0C, 0x0000)  # src_addr_lo
npu.write(0x14, (1 << 8) | 15)  # total_bursts=1, burst_len=15

# Start DMA
npu.write(0x00, 0x01)

# Poll until done
while not (npu.read(0x04) & 0x1):
    pass
```

See: `host/pynq_npu_demo.ipynb` for complete demo.

---

## 7. Interpreting Results

### Utilization Report
Key resources to monitor:
- **LUT**: Systolic array MAC logic
- **BRAM**: SRAM banks + accumulator buffer
- **DSP**: MAC PE multiply-accumulate (256 DSP slices ideal)
- **FF**: Pipeline registers

### Timing Report
- Check **WNS (Worst Negative Slack)**: Must be ≥ 0 ns
- Check **WHS (Worst Hold Slack)**: Must be ≥ 0 ns
- Critical path usually through systolic array or accumulator
