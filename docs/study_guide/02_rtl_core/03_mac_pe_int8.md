# 03. `mac_pe_int8.sv` — INT8 MAC Processing Element

> **파일 위치**: `rtl/core/mac_pe_int8.sv`
> **역할**: Systolic Array의 최소 연산 단위. signed INT8 × INT8 → INT32 MAC 수행
> **선수 지식**: [01_npu_def_pkg.md](../01_rtl_include/01_npu_def_pkg.md), `always_ff`, signed 연산
> **공장 비유**: 작업자 1명 — 금형(weight)을 장착하고, 재료(activation)가 올 때마다 곱해서 누적

---

## 이 파일이 중요한 이유

이 파일은 NPU의 **가장 기본 단위**입니다. 256개의 이 PE가 격자로 연결되어 systolic array를 구성합니다.
이 파일 하나를 완전히 이해하면, systolic array의 절반은 이해한 것입니다.

---

## 전체 코드 (74줄)

```systemverilog
`timescale 1ns / 1ps                                              // [L1]

// =========================================================================
// MAC PE — Signed INT8 Multiply + INT32 Accumulate                // [L3-24: 주석 블록]
// =========================================================================
// (주석 생략 — 아래 해설에서 상세 설명)

module mac_pe_int8 (                                               // [L26]
    input  logic        clk,                                       // [L27]
    input  logic        rst_n,                                     // [L28]

    // Weight Load
    input  logic        weight_load_en,                            // [L31]
    input  logic [15:0] weight_in,                                 // [L32]

    // Datapath
    input  logic [15:0] act_in,                                    // [L35]
    input  logic [31:0] psum_in,                                   // [L36]

    // Forwarding
    output logic [15:0] act_out,                                   // [L39]
    output logic [31:0] psum_out                                   // [L40]
);
    // Weight register (only lower 8 bits are meaningful)
    logic [7:0] weight_reg;                                        // [L43]

    // Combinational signed INT8 multiply → INT32 product
    logic signed [31:0] int32_product;                             // [L46]
    assign int32_product = $signed(act_in[7:0]) * $signed(weight_reg); // [L47]

    // Combinational INT32 accumulate
    logic signed [31:0] int32_mac_result;                          // [L50]
    assign int32_mac_result = $signed(psum_in) + int32_product;    // [L51]

    // Registered output (1-cycle latency, synchronous reset)
    always_ff @(posedge clk) begin                                 // [L54]
        if (!rst_n) begin                                          // [L55]
            weight_reg <= '0;                                      // [L56]
            act_out    <= '0;                                      // [L57]
            psum_out   <= '0;                                      // [L58]
        end else begin                                             // [L59]
            // Weight Stationary: latch weight on load enable
            if (weight_load_en) begin                              // [L61]
                weight_reg <= weight_in[7:0];                      // [L62]
            end

            // Activation forwarding (right-ward)
            act_out <= act_in;                                     // [L66]

            // INT8 MAC: multiply-accumulate registered output
            psum_out <= int32_mac_result;                          // [L69]
        end
    end
endmodule                                                          // [L72]
```

---

## 포트 분석

### 입력 포트
```
        ┌──────────────┐
 clk ──→│              │
 rst_n──→│              │
        │              │
 weight_load_en──→│    │    (로드 활성화 신호)
 weight_in[15:0]──→│   │    ([7:0]만 사용)
        │              │
 act_in[15:0] ──→│     │──→ act_out[15:0]     (왼→오 흐름)
        │              │
 psum_in[31:0]──→│     │──→ psum_out[31:0]    (위→아래 흐름)
        └──────────────┘
```

| 포트 | 폭 | 방향 | 의미 |
|------|-----|------|------|
| `clk` | 1 | in | 클럭. 모든 레지스터가 이 rising edge에 갱신 |
| `rst_n` | 1 | in | Active-low 동기 리셋. 0이면 모든 레지스터 초기화 |
| `weight_load_en` | 1 | in | 1일 때 weight_in을 weight_reg에 저장 |
| `weight_in` | 16 | in | Weight 값 (하위 8비트만 INT8로 사용) |
| `act_in` | 16 | in | Activation 값 (하위 8비트만 INT8로 사용) |
| `psum_in` | 32 | in | 위쪽 PE에서 내려온 partial sum |
| `act_out` | 16 | out | act_in을 1 cycle 지연하여 오른쪽 PE로 전달 |
| `psum_out` | 32 | out | MAC 결과를 1 cycle 지연하여 아래쪽 PE로 전달 |

---

## 줄 단위 해설

### [L43] Weight Register
```systemverilog
logic [7:0] weight_reg;
```
- 8비트 레지스터. weight_in[15:0] 중 **하위 8비트만** 저장
- **Weight-Stationary의 핵심**: 이 레지스터에 weight를 한번 로드하면, 여러 activation이 지나가는 동안 **고정**
- 공장 비유: 금형을 한번 끼우면 작업물이 바뀌어도 금형은 그대로

### [L46-47] 곱셈 (Combinational)
```systemverilog
logic signed [31:0] int32_product;
assign int32_product = $signed(act_in[7:0]) * $signed(weight_reg);
```
- **`$signed()`**: unsigned 비트 벡터를 signed로 해석하는 SystemVerilog 함수
  - `act_in[7:0]` = 8비트 → `$signed()` → signed 8비트 (범위: -128~+127)
  - `weight_reg` = 8비트 → `$signed()` → signed 8비트
- **곱셈 결과**: signed 8비트 × signed 8비트 = signed 16비트이지만, 32비트로 sign-extend
  - 최악의 경우: (-128) × (-128) = +16,384 → 16비트로 충분하지만 누적 대비 32비트 확보
- **`assign`** = combinational logic (클럭 없이 즉시 계산)

### [L50-51] 덧셈 (Combinational)
```systemverilog
logic signed [31:0] int32_mac_result;
assign int32_mac_result = $signed(psum_in) + int32_product;
```
- MAC = **M**ultiply-**A**ccumulate → 곱셈 + 덧셈
- `psum_in`: 위쪽 PE에서 내려온 partial sum (이미 INT32)
- 결과: psum + (act × weight) → 이것이 아래쪽 PE로 전달될 새 partial sum

### [L54-70] 레지스터 업데이트 (Sequential)
```systemverilog
always_ff @(posedge clk) begin
```
- **`always_ff`**: 클럭 edge에서만 실행되는 sequential 블록
- 매 rising edge에서 combinational 결과를 레지스터에 저장 → **1 cycle 지연**

#### [L55-58] 리셋
```systemverilog
if (!rst_n) begin
    weight_reg <= '0;
    act_out    <= '0;
    psum_out   <= '0;
end
```
- `rst_n = 0`이면 모든 레지스터 초기화 (동기 리셋)
- `'0`은 SystemVerilog에서 "모든 비트 0"

#### [L61-62] Weight 로드
```systemverilog
if (weight_load_en) begin
    weight_reg <= weight_in[7:0];
end
```
- `weight_load_en`이 1일 때**만** weight 값을 저장
- 이후 `weight_load_en`이 0이 되어도 `weight_reg`는 **유지** (래치 동작)
- **이것이 weight-stationary**: 한번 로드하면 execute 동안 그대로

#### [L66] Activation 전달
```systemverilog
act_out <= act_in;
```
- 입력 activation을 **1 cycle 지연**하여 오른쪽 PE로 전달
- 이것이 systolic array에서 activation이 **왼쪽→오른쪽**으로 흘러가는 원리
- 16×16 배열이면, 첫 번째 PE에 들어간 activation이 16 cycle 후에 마지막 PE에 도달

#### [L69] MAC 결과 전달
```systemverilog
psum_out <= int32_mac_result;
```
- MAC 결과를 **1 cycle 지연**하여 아래쪽 PE로 전달
- **위→아래** 흐름: psum이 column을 따라 누적되며 내려감
- 최상단 PE에서 `psum_in = 0`으로 시작 → 16 PE를 거치며 16번 누적 → 최하단 `psum_out`이 최종 dot product

---

## 데이터 흐름 다이어그램

```
        psum_in (위에서)
           │ 32bit
           ▼
    ┌──────────────┐
    │   ① 곱셈      │
    │ act[7:0] ×    │←─ weight_reg (8bit, 고정)
    │ weight_reg    │
    │   = product   │
    │              │
    │   ② 덧셈      │
    │ psum_in +     │
    │ product       │
    │   = result    │
    │              │
    │   ③ 레지스터   │
    │ act_out ← act │──→ act_out (오른쪽으로)
    │ psum_out ←    │
    │   result      │
    └──────┬───────┘
           │ 32bit
           ▼
        psum_out (아래로)
```

---

## Weight-Stationary가 왜 좋은가?

행렬 곱셈 C = A × B에서:
- A의 한 행(activation row)은 B의 모든 열과 곱해야 함
- B의 한 열(weight column)은 A의 모든 행과 곱해야 함

**Weight-Stationary**는 B(weight)를 PE에 고정하고, A(activation)를 흘려보냄:
- Weight 로드 = 1회 (16 cycle)
- Activation 실행 = N회 반복 가능
- Weight를 매번 다시 로드하는 것보다 **에너지 효율적** (데이터 이동 = 전력 소모)

---

## 핵심 개념 정리

| 개념 | 설명 |
|------|------|
| MAC | Multiply-Accumulate. AI 가속기의 기본 연산 |
| Weight-Stationary | Weight를 PE에 고정, Activation을 흘려보내는 데이터플로우 |
| `$signed()` | unsigned 비트벡터를 signed로 해석 (2's complement) |
| `always_ff` | Sequential logic 블록. 클럭 edge에서만 업데이트 |
| 1-cycle latency | Combinational 결과를 register에 저장 → 파이프라인 구현 |
| Systolic flow | act: 왼→오, psum: 위→아래. 각 1 cycle 지연 |

---

## 연습 문제

1. `act_in = 8'sd3` (=3), `weight_reg = 8'sd(-2)`, `psum_in = 32'sd10`일 때, `psum_out`은?
2. Weight를 로드한 후 `weight_load_en`을 0으로 내려도 `weight_reg`가 유지되는 이유는?
3. `$signed(act_in[7:0])`을 `$signed(act_in)`으로 바꾸면 어떤 문제가 생기는가?
4. Activation이 PE[0][0]에 들어간 후 PE[0][15]에 도착하려면 몇 cycle이 걸리는가?
5. Column의 16개 PE가 모두 같은 weight를 갖고 있고, activation row [a0, a1, ..., a15]가 흘러가면, 최하단 psum_out은 수학적으로 무엇인가?

<details>
<summary>정답 보기</summary>

1. product = 3 × (-2) = -6, psum_out = 10 + (-6) = **4**
2. `if (weight_load_en)` 조건이 거짓이면 `weight_reg`에 대한 할당이 없어서 **이전 값 유지** (flip-flop의 기본 동작)
3. `act_in`은 16비트이므로 상위 8비트까지 포함하여 signed 해석됨 → INT8 값이 아닌 엉뚱한 값으로 곱셈 수행
4. 각 PE에서 1 cycle 지연 × 15 PE = **15 cycle** (PE[0][0]에서 이미 1 cycle 소모)
5. $\sum_{k=0}^{15} a_k \times w_k$ = **activation row와 weight column의 dot product**

</details>

---

## 다음 파일

→ [04. mac_pe.sv — FP16 MAC Processing Element](04_mac_pe.md)
