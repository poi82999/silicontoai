# 20. `npu_if.sv` — UVM Virtual Interface

> **파일 위치**: `tb/npu_if.sv` (23줄)
> **역할**: UVM driver/monitor가 DUT 신호에 접근하는 **공유 interface 묶음**
> **선수 지식**: [01_npu_def_pkg.md](../01_rtl_include/01_npu_def_pkg.md), SystemVerilog `interface` 개념
> **공장 비유**: 작업 검수용 **계측기 패널** — 라인의 모든 핵심 신호를 한 곳에서 보고 제어

---

## 이 파일이 중요한 이유

UVM 검증환경의 모든 component가 이 interface를 통해 DUT와 통신합니다. driver는 신호를 쓰고, monitor는 읽고, scoreboard는 비교합니다. **interface가 잘못 정의되면 검증 자체가 깨집니다**.

---

## 전체 코드

```systemverilog
`ifndef NPU_IF_SV
`define NPU_IF_SV

import npu_def_pkg::*;

interface npu_if(input logic clk, input logic rst_n);
    // Main SRAM Interface
    logic [NPU_ROWS-1:0][NPU_ACT_WIDTH-1:0] sram_act_in;        // [L8]
    logic [NPU_COLS-1:0][NPU_WT_WIDTH-1:0]  sram_weight_in;     // [L9]
    logic [NPU_ROWS-1:0]                    weight_load_en;     // [L10]

    // Accumulator Control
    logic                                   acc_valid;          // [L13]
    logic                                   acc_clear;          // [L14]
    logic [MEM_ADDR_WIDTH-1:0]              acc_addr;           // [L15]

    // Drain to Output SRAM
    logic                                   drain_re;           // [L18]
    logic [MEM_ADDR_WIDTH-1:0]              drain_addr;         // [L19]
    logic [NPU_COLS-1:0][NPU_PSUM_WIDTH-1:0] psum_drain_out;    // [L20]
endinterface

`endif
```

---

## 신호 그룹별 분석

### 1. SRAM 입력 (L8-10)

```systemverilog
logic [NPU_ROWS-1:0][NPU_ACT_WIDTH-1:0] sram_act_in;     // 16 × 16-bit activation
logic [NPU_COLS-1:0][NPU_WT_WIDTH-1:0]  sram_weight_in;  // 16 × 16-bit weight
logic [NPU_ROWS-1:0]                    weight_load_en;  // 16-bit weight load enable
```

**`[NPU_ROWS-1:0][NPU_ACT_WIDTH-1:0]`** = `[15:0][15:0]` = "16개의 16-bit 값" = unpacked의 packed array.

→ Systolic array의 **가장 왼쪽 열** (16개 row)에 한 번에 입력. 매 사이클마다 한 column씩.

**`weight_load_en[i]`**: row i의 PE에 weight를 latch할지. `weight_load_en[15:0] = 16'hFFFF`이면 모든 PE에 동시 로드.

### 2. Accumulator Control (L13-15)

```systemverilog
logic                       acc_valid;   // 누산 결과를 accumulator에 쓰기
logic                       acc_clear;   // 누산기를 0으로 초기화 (split-K 첫 패스)
logic [MEM_ADDR_WIDTH-1:0]  acc_addr;    // 누산기 BRAM 주소 (m index)
```

**Split-K 동작**:
- `acc_clear=1`: 새 (m, n) 블록 첫 K-패스 — 누산기 0 초기화 후 partial 누산
- `acc_clear=0`: 후속 K-패스 — 기존 값에 partial 더함

### 3. Drain Interface (L18-20)

```systemverilog
logic                                       drain_re;        // read enable
logic [MEM_ADDR_WIDTH-1:0]                  drain_addr;      // 어느 row를 읽을지
logic [NPU_COLS-1:0][NPU_PSUM_WIDTH-1:0]    psum_drain_out;  // 16 × 32-bit 결과
```

**`drain_re=1`**일 때 `drain_addr`이 가리키는 행의 16개 column 값(INT32 누산결과)을 `psum_drain_out`으로 출력.

---

## UVM에서 사용 패턴

### Driver

```systemverilog
class npu_driver extends uvm_driver #(npu_seq_item);
    virtual npu_if vif;

    task drive_item(npu_seq_item item);
        @(posedge vif.clk);
        vif.sram_act_in    <= item.act_data;
        vif.sram_weight_in <= item.weight_data;
        vif.weight_load_en <= item.load_en;
        vif.acc_valid      <= item.acc_valid;
        // ...
    endtask
endclass
```

### Monitor

```systemverilog
class npu_monitor extends uvm_monitor;
    virtual npu_if vif;

    task collect_outputs();
        forever begin
            @(posedge vif.clk);
            if (vif.drain_re) begin
                // 출력 캡처해서 scoreboard로 보냄
                ap.write(npu_seq_item::with_drain(vif.psum_drain_out));
            end
        end
    endtask
endclass
```

→ driver와 monitor가 **같은 interface 인스턴스**를 사용 → 신호 공유.

---

## `npu_def_pkg`와의 연결

```systemverilog
import npu_def_pkg::*;
```

→ `NPU_ROWS=16, NPU_COLS=16, NPU_ACT_WIDTH=16, NPU_WT_WIDTH=16, NPU_PSUM_WIDTH=32, MEM_ADDR_WIDTH` 등을 사용.

→ RTL과 TB가 **같은 상수**를 공유 → 폭 mismatch 방지.

---

## `tb_top.sv`에서의 인스턴스화

```systemverilog
// tb_top.sv 안에서
npu_if vif(clk, rst_n);

npu_core_top dut(
    .clk(vif.clk),
    .rst_n(vif.rst_n),
    .sram_act_in_i(vif.sram_act_in),
    .sram_weight_in_i(vif.sram_weight_in),
    // ...
    .psum_drain_out_o(vif.psum_drain_out)
);

// UVM config_db로 driver/monitor에 vif 전달
uvm_config_db#(virtual npu_if)::set(null, "uvm_test_top.*", "vif", vif);
```

→ **한 vif 인스턴스**가 DUT 모든 신호와 UVM 모든 component를 동시에 연결.

---

## 핵심 개념 정리

| 개념 | 의미 |
|---|---|
| **SystemVerilog interface** | 신호 묶음 + clk/rst 인자. `bundle of signals`. |
| **Virtual interface** | UVM class가 잡는 interface 핸들 (config_db 통해 전달) |
| **Packed array `[N-1:0][W-1:0]`** | N개의 W-bit 값 (한 cycle에 같이 driven) |
| **Driver vs Monitor 공유** | 같은 vif 인스턴스를 read/write 양쪽이 사용 |

---

## 연습 문제

1. `sram_act_in[3]`은 어떤 의미? (`NPU_ROWS=16` 기준)
2. `psum_drain_out[NPU_COLS-1:0][NPU_PSUM_WIDTH-1:0]`이 한 사이클에 driven하는 총 비트 수는?
3. driver와 monitor가 같은 vif를 잡으면 race condition 위험 없을까? (힌트: clocking block, `<=` 사용 시점)
4. `weight_load_en` 폭이 `NPU_ROWS`인 이유는?

---

## 다음 파일로 넘어가기

→ [21_tb_system_top.md](21_tb_system_top.md): `tb_system_top.sv` — Directed test의 시스템 레벨 진입점
