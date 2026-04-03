# L7 Pre-Board Bring-Up Results

**Date:** 2026-04-03  
**Vivado:** 2025.2 ML Edition (Win64)  
**Status:** Bitstream generated — pre-board milestone complete

---

## Target Configuration

| Item | Value |
|---|---|
| Board | Digilent Arty A7-35T |
| Part | xc7a35ticsg324-1L |
| Speed Grade | -1L (industrial) |
| Clock | 100 MHz (10 ns period) |
| I/O Standard | LVCMOS33 |
| Top Module | `fpga_core_bringup_top` |

## Files

| Role | Path |
|---|---|
| FPGA wrapper | `rtl/fpga_core_bringup_top.sv` |
| XDC constraints | `vivado/fpga_core_bringup_top.xdc` |
| Vivado project | `vivado/silicontoai_l7_bringup/silicontoai_l7_bringup.xpr` |
| Bitstream | `vivado/silicontoai_l7_bringup/silicontoai_l7_bringup.runs/impl_1/fpga_core_bringup_top.bit` |

## Timing Summary (Post-Route)

| Metric | Value | Status |
|---|---|---|
| WNS (Setup) | **+2.627 ns** | PASS |
| TNS | 0.000 ns | PASS |
| WHS (Hold) | +0.023 ns | PASS |
| THS | 0.000 ns | PASS |
| WPWS (Pulse Width) | +4.020 ns | PASS |
| Failing Endpoints | 0 | PASS |
| Max achievable Fmax | ~135 MHz (= 1/(10 − 2.627) ns) | — |

**All user-specified timing constraints are met.**

## Utilization Summary (Post-Place)

| Resource | Used | Available | Util% |
|---|---|---|---|
| Slice LUTs | 1,066 | 20,800 | 5.13% |
| Slice Registers | 1,686 | 41,600 | 4.05% |
| Slices | 612 | 8,150 | 7.51% |
| Block RAM Tiles | 4.5 | 50 | 9.00% |
| DSP48E1 | 0 | 90 | 0.00% |
| Bonded IOB | 9 | 210 | 4.29% |
| BUFG | 1 | 32 | 3.13% |

**Headroom:** 전체 자원 사용률 10% 미만. Arty A7-35T에서도 현재 NPU core + wrapper는 여유롭게 수용됨.

## Power Estimate (Post-Route)

| Component | Power (W) |
|---|---|
| Dynamic | 0.048 |
| Device Static | 0.062 |
| **Total On-Chip** | **0.110** |
| Junction Temp | 25.5°C |

## DRC & Warnings

| Category | Count | Notes |
|---|---|---|
| Post-Route DRC violations | **0** | Clean |
| SYNTH-6 (RAM timing) | 5 | BRAM inference optimization hint — acceptable |
| TIMING-18 (missing I/O delay) | 8 | 2 inputs + 6 outputs without `set_input_delay`/`set_output_delay` — LED/button only, acceptable for bring-up |

## Key Design Decisions Made During Bring-Up

1. **Sync reset adoption:** FPGA BRAM address drivers require synchronous reset. Converted async reset (`negedge rst_n`) to sync reset in:
   - `rtl/fpga_core_bringup_top.sv` (3 always_ff blocks)
   - `rtl/npu_core_top.sv` (acc_addr_pipe pipeline)
   - `rtl/psum_accumulator_buffer.sv` (pipeline alignment block)
   - Other PE/systolic modules still use async reset (not on BRAM paths, DRC clean)

2. **exec_row_idx part-select fix:** Original `exec_row_idx[8:0]` was out of range for a 5-bit signal. Fixed by removing explicit part-select.

3. **CFGBVS configuration:** Added `CFGBVS VCCO` + `CONFIG_VOLTAGE 3.3` per Arty A7 requirement.

## Pin Assignments

| Signal | Pin | Function |
|---|---|---|
| `board_clk` | E3 | 100 MHz oscillator |
| `rst_btn_n` | C2 | Active-low reset button |
| `start_btn` | D9 | BTN0 (active-high) |
| `alive_led` | H5 | LD4 — heartbeat blink |
| `done_led` | J5 | LD5 — sequence complete |
| `debug_led[0]` | T9 | LD6 |
| `debug_led[1]` | T10 | LD7 |
| `debug_led[2]` | E1 | RGB LD0 Red |
| `debug_led[3]` | F6 | RGB LD0 Green |

## Limitations & Future Work

- **No physical board:** 현재 Arty A7 보드 없이 가상 타겟으로만 진행. 실보드 테스트 미완료.
- **Arty A7-35T is a learning target:** 실제 배포/연구용으로는 Zynq-7000, Kintex-7, 또는 Zynq UltraScale+ 급으로 retarget 필요.
- **DSP unused:** 현재 MAC은 LUT+CARRY로 합성됨. DSP48E1 inference 최적화 여지 있음.
- **No ILA:** 디버그 관측을 위한 ILA (Integrated Logic Analyzer) 미삽입.
- **Wrapper is minimal:** npu_core_top 레벨만 감싼 상태. npu_system_top 전체 bring-up은 별도 단계.
