# 11. `dp_sram_bank.sv` — Dual-Port SRAM Bank

> **파일 위치**: `rtl/memory/dp_sram_bank.sv`
> **역할**: DMA 쓰기(Port A) + Core 읽기(Port B)를 동시 지원하는 BRAM
> **선수 지식**: [01_npu_def_pkg.md](../01_rtl_include/01_npu_def_pkg.md)
> **공장 비유**: 창고 1동 — DMA 지게차가 한쪽 문으로 짐을 넣고, Core가 다른 문으로 꺼냄

---

## 전체 코드 (26줄 — 프로젝트에서 가장 짧은 RTL)

```systemverilog
module dp_sram_bank #(
    parameter ADDR_WIDTH = 10,
    parameter DATA_WIDTH = 128       // 16 × 8bit = 128bit
)(
    input  logic                  clk,

    // Port A: DMA Write
    input  logic                  wen,
    input  logic [ADDR_WIDTH-1:0] waddr,
    input  logic [DATA_WIDTH-1:0] wdata,

    // Port B: NPU Read
    input  logic                  ren,
    input  logic [ADDR_WIDTH-1:0] raddr,
    output logic [DATA_WIDTH-1:0] rdata
);
    (* ram_style = "block" *) logic [DATA_WIDTH-1:0] mem [0:(1<<ADDR_WIDTH)-1];

    always_ff @(posedge clk) begin
        if (wen) mem[waddr] <= wdata;          // 쓰기
        if (ren) rdata <= mem[raddr];           // 읽기 (1 cycle latency)
    end
endmodule
```

---

## 줄 단위 해설

### 파라미터
- `ADDR_WIDTH = 10`: 2^10 = **1024 entries** (기본값)
- `DATA_WIDTH = 128`: entry당 128비트 = 16 lane × 8비트(INT8) 또는 8 lane × 16비트(FP16)

### BRAM 추론
```systemverilog
(* ram_style = "block" *) logic [...] mem [...];
```
- `(* ram_style = "block" *)`: **Vivado 합성 지시자**
  - 이 메모리를 FPGA의 Block RAM (BRAM) 으로 합성하라는 힌트
  - BRAM: FPGA에 내장된 고속 메모리 블록 (Arty A7: 50개 × 36Kbit)
  - 없으면 LUT(조합논리)로 만들어져서 면적 낭비

### 동시 읽기/쓰기
```systemverilog
always_ff @(posedge clk) begin
    if (wen) mem[waddr] <= wdata;    // Port A: 쓰기
    if (ren) rdata <= mem[raddr];    // Port B: 읽기
end
```
- **같은 `always_ff` 블록** 안에서 독립적으로 동작
- 같은 주소에 동시 읽기/쓰기? → Ping-pong으로 방지 (다른 bank 사용)
- `rdata`는 **1 cycle 지연** (synchronous read) — BRAM이면 반드시 이렇게

### Ping-Pong 운영

```
Phase 0: DMA → Bank 0,1 (쓰기)  |  Core ← Bank 2,3 (읽기)
           bank_swap
Phase 1: DMA → Bank 2,3 (쓰기)  |  Core ← Bank 0,1 (읽기)
           bank_swap
Phase 2: (반복)
```

4개 bank의 이유:
- Weight용 2개 (ping-pong)
- Activation용 2개 (ping-pong)

---

## 메모리 용량 계산

| 설정 | 값 |
|------|-----|
| Bank 1개 | 1024 × 128bit = 16KB |
| Bank 4개 | 64KB |
| MEM_ADDR_WIDTH=9 (실제 사용) | 512 × 128bit = 8KB/bank |

---

## 연습 문제

1. `(* ram_style = "block" *)`을 제거하면 어떤 일이 벌어지는가?
2. `rdata`가 1 cycle 후에 나오는 이유는?
3. Ping-pong 없이 단일 bank를 쓰면 어떤 문제가 생기는가?

<details>
<summary>정답 보기</summary>

1. Vivado가 distributed RAM (LUT) 또는 BRAM을 자동 선택. 크기가 크면 LUT를 대량 소모하여 timing 실패 가능
2. BRAM은 물리적으로 synchronous read만 지원 (주소→출력이 1 clock 필요). 이것은 FPGA BRAM의 하드웨어 제약
3. DMA 쓰기와 Core 읽기가 같은 bank에서 동시에 발생하면 데이터 무결성 문제 (write-read collision)

</details>

---

## 다음 파일

→ [12. psum_accumulator_buffer.sv — Psum 누산 버퍼](12_psum_accumulator_buffer.md)
