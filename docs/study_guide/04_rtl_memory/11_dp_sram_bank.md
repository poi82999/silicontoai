# 11. `dp_sram_bank.sv` — Dual-Port SRAM Bank

> **파일 위치**: `rtl/memory/dp_sram_bank.sv`
> **역할**: DMA 쓰기(Port A) + Core 읽기(Port B)를 동시 지원하는 BRAM
> **선수 지식**: [01_npu_def_pkg.md](../01_rtl_include/01_npu_def_pkg.md)
> **공장 비유**: 창고 1동 — DMA 지게차가 한쪽 문으로 짐을 넣고, Core가 다른 문으로 꺼냄

---

## 📚 학술적 배경: 메모리 계층과 ping-pong 버퍼링

### 1. 왜 SRAM인가? — Memory Hierarchy 관점 (P&H Ch.5)

> Patterson, D., Hennessy, J. — *Computer Organization and Design*, Ch.5 "Large and Fast: Exploiting Memory Hierarchy".

ML 가속기에서 데이터 이동 비용은 PE 연산 비용보다 훨씬 큽니다 (Sze Ch.4):

| 위치 | 1 word read 에너지 (45nm) | 상대 비용 |
|---|---|---|
| Register File | ~1 pJ | 1× |
| **SRAM (이 bank)** | ~5 pJ | 5× |
| DRAM (LPDDR4) | ~640 pJ | **640×** |
| 그리고 1 INT8 MAC | ~0.2 pJ | (참고) |

→ **DRAM read 1번 = INT8 MAC 3,200번**. 따라서 DMA로 한 번 가져온 데이터를 **on-chip SRAM에 머물게** 하고 PE가 최대한 재사용하는 것이 핵심. 이 SRAM bank가 그 "머무는 장소".

### 2. Double Buffering의 학술적 뿌리

Double buffering(=ping-pong)은 1960년대 vector machine (Cray-1, CDC Star-100)에서 시작된 기법입니다. 핵심 아이디어:

> **두 개의 동일한 buffer를 번갈아 사용해서 producer와 consumer가 동시에 동작하게 한다.**

- Buffer A: DMA가 다음 tile을 채우는 중
- Buffer B: PE가 현재 tile을 소비 중
- Tile 경계에서 swap → DMA 대기 시간을 PE 연산 시간에 **숨김** (latency hiding)

이 프로젝트의 4개 bank = 2 (weight ping-pong) × 2 (activation ping-pong). 만약 ping-pong이 없었다면, 매 tile마다 PE가 DMA 완료를 기다려야 함 → utilization < 50% 가능.

📖 참고: H&P Appendix C.5 (Pipeline의 데이터 hazard와 stall 회피), [`l6/src/l6_toolchain/cycle_sim.py`](../../../l6/src/l6_toolchain/cycle_sim.py)에서 ping-pong이 cycle을 어떻게 절약하는지 시뮬레이션 가능.

### 3. Dual-port SRAM의 하드웨어 제약

Xilinx 7-series BRAM은 36Kbit 블록이며 **물리적으로 2 port**를 지원합니다 (port A, port B 각각 read/write 가능). 이 SRAM bank가 그것을 그대로 사용. ASIC에서는 dual-port SRAM이 single-port 대비 약 **1.4배 면적**이지만, ping-pong을 single-port로 흉내내려면 시간 분할(time-multiplexing) 필요 → 사실상 throughput 절반. 그래서 hardware 설계자는 거의 항상 dual-port 선택.

📖 참고: Weste & Harris *CMOS VLSI Design* Ch.12 "Memory" (Phase 6 자료).

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

## 🔬 전문가 관점: 64KB는 충분한가?

### Working set 분석

ResNet-18의 한 conv layer (3×3, 64in→64out, 56×56 feature map):
- Weight: 64 × 64 × 9 × 1B = 36 KB ✅ (한 bank에 들어감)
- Input activation: 56 × 56 × 64 × 1B = 196 KB ❌ (4 bank 합쳐도 부족)

→ Activation은 **tile 단위로 나눠서** SRAM에 올림. 이것이 [`l6/src/l6_toolchain/lowering.py`](../../../l6/src/l6_toolchain/lowering.py)의 tiling 알고리즘이 하는 일.

### 산업계 비교

| 칩 | 온칩 SRAM | 비고 |
|---|---|---|
| 이 프로젝트 | 64 KB (FPGA BRAM) | PYNQ-Z2 자원 한계 |
| Google TPU v1 | 24 MB UB + 4 MB AB | datacenter, 무거운 모델 |
| Apple Neural Engine (M1) | ~10 MB | edge AI |
| Tesla FSD chip | 32 MB SRAM | autonomy |
| Cerebras WSE-2 | **40 GB on-wafer SRAM** | 극단적 사례 |

> **💡 SRAM 크기 → 모델 크기 영향**
>
> 이 프로젝트가 실제로 BERT-Tiny(~14MB) 같은 큰 모델을 돌리려면 **SRAM 부족** → DMA round-trip이 잦아짐 → utilization 하락. 그래서 [`l6/src/l6_toolchain/memory_planner.py`](../../../l6/src/l6_toolchain/memory_planner.py)가 **tensor lifetime 분석 + in-place 재사용**을 통해 SRAM 사용량을 줄임. 이것이 작은 칩으로 큰 모델을 돌리는 컴파일러의 핵심 가치.

---

## 📖 더 깊이 공부하기

| 깊이 | 자료 | 어느 부분 |
|---|---|---|
| 🟢 입문 | P&H Ch.5 (Phase 1) | SRAM vs DRAM 트레이드오프, locality |
| 🟢 입문 | CMU 15-213 Cache Lab (Phase 1) | 메모리 계층의 직접 측정 |
| 🟡 중급 | Sze 교과서 Ch.4 (Phase 3) | Memory hierarchy energy table |
| 🟡 중급 | H&P Appendix C.5 — pipeline hazard avoidance | ping-pong = spatial hazard avoidance |
| 🔴 심화 | Weste & Harris Ch.12 (Phase 6) | Dual-port SRAM 회로 설계 |
| 🔴 심화 | TPU 논문 §3 — UB(Unified Buffer) 구조 | 24MB SRAM의 산업적 결정 근거 |

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
