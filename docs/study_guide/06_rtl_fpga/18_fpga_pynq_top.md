# 18. `fpga_pynq_top.sv` — PYNQ-Z2 Overlay (PS7 ARM 연동)

> **파일 위치**: `rtl/fpga/fpga_pynq_top.sv` (502줄)
> **역할**: PYNQ-Z2의 PS7 ARM CPU에서 NPU를 제어. AXI-Lite slave + local BRAM
> **선수 지식**: [17_fpga_system_bringup_top.md](17_fpga_system_bringup_top.md), AXI4-Lite, Zynq PS-PL 아키텍처
> **공장 비유**: 본사 컴퓨터(ARM)에서 라인을 원격 제어 — 작업 명령을 register write로, 결과를 register read로

---

## 이 파일이 중요한 이유

bringup module들은 **자율 동작** (FSM이 직접 트리거). 이 파일은 **소프트웨어 제어** — Python (PYNQ Jupyter)에서 register write로 NPU를 운영. 실제 데모/배포 형태입니다.

---

## 큰 그림

```
PS7 ARM (Python: pynq.Overlay)
       │
       │ AXI-Lite write/read
       ▼
M_AXI_GP0 (32-bit @ 100 MHz)
       │
       ▼ (Vivado Interconnect)
fpga_pynq_top (이 파일)
       │
       ├── AXI-Lite slave (register file)
       ├── Local BRAM (test data)
       └── npu_system_top
              ├── dma_controller (BRAM 읽기)
              ├── dp_sram_bank ×4
              └── npu_core_top
```

---

## Register Map (L11-26)

```
0x00 CTRL      (W1S)  [0]start_dma [1]start_npu [2]swap_banks [3]clear_done
0x04 STATUS    (RO)   [0]dma_done  [1]npu_done
0x08 DMA_CFG   (RW)   [0]dma_target [4]npu_mode [5]acc_clear
0x0C SRC_LO    (RW)   src_addr[31:0]
0x10 SRC_HI    (RW)   src_addr[63:32]
0x14 BURST     (RW)   [7:0]burst_len [23:8]total_bursts
0x18 SEQ       (RW)   [15:0]npu_seq_len
0x1C ACC_TEST  (RW)   verification hook (override addr)
0x20 DRAIN_CMD (W)    [4:0]row → trigger drain
0x24 DRAIN_STS (RO)   [0]drain_valid
0x40 PSUM_0    (RO)   psum_drain_out[0]
0x44 PSUM_1    (RO)
...
0x7C PSUM_15   (RO)
```

**Total: 128 byte = 7-bit address**.

→ `axi_lite_mmio_bridge.sv`와 비슷한 형태지만, 여기서는 **PSUM_0~15 readback**까지 추가되어 ARM이 결과를 직접 읽을 수 있음.

---

## AXI-Lite Slave Interface

### Write 채널 (L42-52)

```systemverilog
input  logic [6:0]  s_axi_awaddr;
input  logic        s_axi_awvalid;
output logic        s_axi_awready;
input  logic [31:0] s_axi_wdata;
input  logic [3:0]  s_axi_wstrb;
input  logic        s_axi_wvalid;
output logic        s_axi_wready;
output logic [1:0]  s_axi_bresp;       // OKAY / SLVERR
output logic        s_axi_bvalid;
input  logic        s_axi_bready;
```

→ AXI4-Lite write 5채널 (AW, W, B). 표준 handshake.

### Read 채널

```systemverilog
input  logic [6:0]  s_axi_araddr;
input  logic        s_axi_arvalid;
output logic        s_axi_arready;
output logic [31:0] s_axi_rdata;
output logic [1:0]  s_axi_rresp;
output logic        s_axi_rvalid;
input  logic        s_axi_rready;
```

→ AXI4-Lite read 3채널 (AR, R).

---

## W1S (Write-1-to-Set) 패턴

```systemverilog
// CTRL register는 write-only, write 1 → 한 cycle pulse
always_ff @(posedge clk) begin
    start_dma <= 0;     // 기본 0
    if (write_en && addr == CTRL_OFFSET) begin
        if (wdata[0]) start_dma <= 1;     // 1 cycle pulse
        if (wdata[1]) start_npu <= 1;
        if (wdata[2]) swap_banks <= 1;
    end
end
```

**의미**: register write는 atomic이지만, 여러 비트를 따로 조작하지 않고 한 단어로 묶어 관리. 사용자 코드:
```python
ol.npu_pl.write(0x00, 0x1)   # start_dma만 펄스
ol.npu_pl.write(0x00, 0x4)   # swap_banks만 펄스
```

---

## Drain Readback Path

```systemverilog
// DRAIN_CMD write → drain 1 cycle 트리거 → 2 clk 후 PSUM_0~15 캡처
always_ff @(posedge clk) begin
    if (write_en && addr == DRAIN_CMD) begin
        drain_re <= 1;
        drain_addr <= wdata[4:0];
    end else begin
        drain_re <= 0;
    end

    // 2 cycle 후 결과 캡처
    if (drain_re_d1) begin
        for (int i = 0; i < 16; i++) begin
            psum_capture[i] <= core_psum_drain_out[i];
        end
        drain_valid_reg <= 1;
    end
end

// READ 시 PSUM_0~15 register에 캡처값 반환
always_comb begin
    case (addr[6:2])
        7'h10: rdata = psum_capture[0];
        7'h11: rdata = psum_capture[1];
        ...
        7'h1F: rdata = psum_capture[15];
        default: rdata = 32'h0;
    endcase
end
```

**핵심**: PSUM은 16개 × 32-bit = 512-bit 한꺼번에 못 읽음 → 16 register로 분할 → ARM이 16 read.

---

## Python (PYNQ) 사용 예시

```python
from pynq import Overlay
ol = Overlay("npu_overlay.bit")

# 가중치 DMA 시작
ol.npu_pl.write(0x0C, 0x80000000 & 0xFFFFFFFF)   # SRC_LO
ol.npu_pl.write(0x10, 0x80000000 >> 32)           # SRC_HI
ol.npu_pl.write(0x14, (15 << 8) | 4)              # BURST
ol.npu_pl.write(0x08, 0x01)                        # DMA_CFG: target=weight
ol.npu_pl.write(0x00, 0x01)                        # CTRL: start_dma

# DMA 끝까지 polling
while not (ol.npu_pl.read(0x04) & 0x01): pass

# Bank swap
ol.npu_pl.write(0x00, 0x04)

# ... activation DMA, preload, execute
# ...

# Drain 결과 읽기
ol.npu_pl.write(0x20, 0x00)   # DRAIN_CMD: row 0
while not (ol.npu_pl.read(0x24) & 0x01): pass
psum = [ol.npu_pl.read(0x40 + i*4) for i in range(16)]
print(psum)
```

→ `host/pynq_npu_demo.ipynb`에서 이 패턴.

---

## fpga_pynq_top_wrapper.v (다음 가이드)

Vivado IP Integrator는 **`.v` (Verilog)** 만 받음. `.sv`는 packaging 필요.
→ thin Verilog wrapper로 SV module을 감쌈. (다음 파일)

---

## 핵심 개념 정리

| 개념 | 의미 |
|---|---|
| **AXI-Lite slave** | 단순한 32-bit register access protocol |
| **PS7 → PL** | Zynq ARM이 fabric 제어 (M_AXI_GP0) |
| **Register map** | 7-bit addr → 0x00..0x7C |
| **W1S pulse** | write 1 → 1 cycle pulse |
| **PSUM 16 register split** | 512-bit을 16 × 32-bit로 분할 readback |

---

## 연습 문제

1. 32-bit data로 64-bit src_addr을 어떻게 전달? (SRC_LO + SRC_HI 2회)
2. PSUM_0~15 16번 read 사이에 다른 drain command가 들어오면? (race)
3. AXI-Lite와 AXI4 차이는? burst 지원?
4. PYNQ에서 DMA src 주소를 그냥 Python list 주소로 쓸 수 있을까? (xlnk 필요)

---

## 다음 파일로 넘어가기

→ [19_fpga_pynq_top_wrapper.md](19_fpga_pynq_top_wrapper.md): Verilog wrapper (Vivado IP Integrator 호환)
