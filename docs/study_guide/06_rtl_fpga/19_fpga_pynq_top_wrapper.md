# 19. `fpga_pynq_top_wrapper.v` — Verilog Thin Wrapper

> **파일 위치**: `rtl/fpga/fpga_pynq_top_wrapper.v` (66줄)
> **역할**: SystemVerilog `fpga_pynq_top.sv`를 **순수 Verilog**로 감싸 Vivado IP Integrator에서 사용 가능
> **선수 지식**: [18_fpga_pynq_top.md](18_fpga_pynq_top.md), Vivado Block Design 흐름
> **공장 비유**: 표준 외장 라벨 — 본체는 SV로 만들었지만, 외부 시스템(Vivado IPI)이 인식하는 **표준 외형(Verilog)** 으로 한 번 감쌈

---

## 이 파일이 중요한 이유

Vivado IP Integrator(Block Design)에서는 모듈을 끌어다 놓고 자동 wiring을 합니다. 그런데 **`.v` (Verilog)** 모듈만 자동 wiring 가능. SV는 미리 IP package로 만들거나 wrapper로 감싸야 합니다. 이 파일이 그 wrapper.

---

## 전체 코드 분석

### Verilog 헤더 + 포트 선언

```verilog
module fpga_pynq_top_wrapper (
    input  wire        s_axi_aclk,
    input  wire        s_axi_aresetn,
    input  wire [6:0]  s_axi_awaddr,
    input  wire [2:0]  s_axi_awprot,
    ...
    output wire [3:0]  led
);
```

**핵심 차이 (SV vs Verilog)**:
- `wire` (Verilog) ↔ `logic` (SV)
- `wire`는 항상 net (combinational), `logic`은 net or variable
- IP Integrator는 `wire`와 정확히 매치되는 포트 표기 선호

### Inner instance

```verilog
fpga_pynq_top u_core (
    .s_axi_aclk    (s_axi_aclk),
    .s_axi_aresetn (s_axi_aresetn),
    ...
    .led           (led)
);
```

→ 같은 이름의 SV 모듈을 그대로 인스턴스. wrapper의 모든 포트를 1:1 forward.

---

## Block Design에서의 사용

```
Vivado Block Design 화면:

┌──────────────┐   M_AXI_GP0   ┌────────────────┐
│   PS7 ARM    │──────────────>│ AXI Interconnect│
│  (Zynq Core) │               └────────┬───────┘
└──────────────┘                        │
                                        ▼ s_axi_*
                              ┌──────────────────────┐
                              │ fpga_pynq_top_wrapper│
                              │  (Verilog)           │
                              └──────────────────────┘
```

→ 사용자는 wrapper의 `s_axi_*` 포트를 GUI에서 끌어다 PS7의 M_AXI_GP0에 자동 연결. AXI ID, addr/data width 등이 자동 매칭됨.

---

## AXI auto-interface detection

Vivado는 포트 이름 prefix를 보고 **자동으로 AXI bundle**로 그룹핑:

```
s_axi_aw* → AXI Write Address channel
s_axi_w*  → AXI Write Data channel
s_axi_b*  → AXI Write Response channel
s_axi_ar* → AXI Read Address channel
s_axi_r*  → AXI Read Response channel
```

→ 한 인터페이스 (s_axi)로 묶여서 single connection으로 표시.

만약 prefix가 `s_axi_*`가 아니면 Vivado가 individual signal로 인식 → wiring 수십 줄 필요.

---

## SV → Verilog 변환 시 주의

이 wrapper처럼 thin pass-through인 경우는 단순. 하지만 SV에 다음과 같은 기능이 있으면 wrapper에서 변환 필요:

| SV feature | Verilog 대응 |
|---|---|
| `logic` | `wire` (combinational) or `reg` (procedural) |
| `enum` | `localparam` + bare integers |
| `struct` | 분리된 신호들 |
| `interface` | 풀어서 individual ports |
| `generate ... endgenerate` | `generate` (SV-2009 이상 Verilog는 OK) |

여기서는 **포트만** Verilog로 표기 → 내부는 SV 그대로 OK.

---

## Build script와의 관계

```tcl
# vivado/build_pynq_overlay.tcl
read_verilog -sv rtl/fpga/fpga_pynq_top.sv     # SV 본체
read_verilog rtl/fpga/fpga_pynq_top_wrapper.v  # Verilog wrapper

# Block Design에서 wrapper를 module reference
create_bd_cell -type module -reference fpga_pynq_top_wrapper my_npu_inst
connect_bd_intf_net [get_bd_intf_pins ps7/M_AXI_GP0] [get_bd_intf_pins my_npu_inst/s_axi]
```

→ Block Design은 **wrapper만 인식**, 내부 SV는 자동 elaboration.

---

## `.bit` + `.hwh` 산출물

```bash
vivado -mode batch -source vivado/build_pynq_overlay.tcl
# → vivado/silicontoai_l7_bringup/silicontoai_l7_bringup.runs/impl_1/
#    ├── system_wrapper.bit    # bitstream
#    └── system.hwh             # hardware handoff (PYNQ가 register map 파싱)
```

PYNQ는 `.hwh`를 읽어서 `ol.npu_pl`이라는 attribute를 자동 생성 → Python에서 register access.

---

## 핵심 개념 정리

| 개념 | 의미 |
|---|---|
| **Verilog wrapper** | SV → Vivado IPI 호환 layer |
| **`wire` vs `logic`** | Verilog: net only / SV: net or variable |
| **AXI auto-bundling** | Vivado가 prefix 기반 그룹핑 |
| **Block Design** | GUI 기반 IP wiring |
| **`.bit` + `.hwh`** | bitstream + register map metadata |

---

## 연습 문제

1. 같은 wiring을 하는데 wrapper 없이 `.sv` 직접 IPI에 import하면 어떤 문제? (Vivado 메시지 확인)
2. AXI port prefix를 `s_axi_*`가 아닌 `slave_*`로 바꾸면 IPI에서 어떤 변화?
3. wrapper에 새 input port `irq_out`을 추가하려면? (양쪽 파일 모두 수정)
4. PYNQ Python에서 `ol.npu_pl.write(0x00, 1)`을 호출 시 RTL에서 정확히 어느 register write?

---

## 🎉 Phase 6 완료!

4개 FPGA wrapper 파일을 모두 학습했습니다.

```
fpga_core_bringup_top.sv      fpga_system_bringup_top.sv
fpga_pynq_top.sv              fpga_pynq_top_wrapper.v
```

---

## 🎓 전체 학습 가이드 완료!

**총 49개 코드 파일에 49개 학습 가이드를 1:1 매핑 완료.**

```
Phase 1-5  RTL core/memory/system     17 files ✅
Phase 6    FPGA wrappers              4 files  ✅
Phase 7    TB / UVM / Verilator C++   7 files  ✅
Phase 8    L6 Toolchain (Python)      23 files ✅
Phase 9    Host driver (C++)          3 files  ✅
─────────────────────────────────────────────
Total                                 54 files
```

→ [00_학습_로드맵.md](../00_학습_로드맵.md)에서 학습 순서 다시 확인하세요.
