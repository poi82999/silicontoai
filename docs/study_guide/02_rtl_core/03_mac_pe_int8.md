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

## 📚 학술적 배경: PE는 왜 이렇게 설계되었나

### 1. Systolic Array의 뿌리 — H.T. Kung (1982)

> Kung, H.T. — "Why Systolic Architectures?" *IEEE Computer* 15(1), 1982.

이 논문에서 Kung은 두 가지 통찰을 제시했습니다.

1. **데이터 재사용 (Data Reuse)**: 메모리에서 한 번 읽어온 데이터를 가능한 많은 PE가 재사용해야 에너지 효율이 좋다. 그래서 데이터가 PE 사이를 "흘러가야(systolic = 심장 박동처럼 박동하는)" 한다.
2. **Local Communication**: 글로벌 와이어는 길고 느리다 (RC delay). PE 간 **인접한 1-hop 통신**만 허용 → 지금 이 PE의 `act_in/act_out`, `psum_in/psum_out`이 바로 이 원칙의 구현체.

이 PE의 `always_ff`에 들어있는 `act_out <= act_in;`이 바로 Kung 논문의 "심장 박동"입니다 — 매 cycle 데이터가 한 칸씩 옆으로 전진.

### 2. INT8 선택의 이론적 근거 — Vivienne Sze 교과서

> Sze, V., Chen, Y.-H., Yang, T.-J., Emer, J. — *Efficient Processing of Deep Neural Networks*, Morgan & Claypool, 2020. (Ch.2-3)

- **에너지 코스트 비율** (45nm CMOS, Sze 2.10절): INT8 MAC ≈ 0.2pJ, FP16 MAC ≈ 1.1pJ, FP32 MAC ≈ 3.7pJ. **INT8은 FP32 대비 18배 에너지 절약**.
- **메모리 대역폭**: INT8은 FP32 대비 4배 적은 byte → DRAM/SRAM 대역폭에서도 4배 유리.
- **정확도 손실**: ResNet/MobileNet에서 well-quantized INT8은 FP32 대비 < 1% top-1 손실. ([Jacob et al. CVPR'18](https://arxiv.org/abs/1712.05877) "Quantization and Training of Neural Networks for Efficient Integer-Arithmetic-Only Inference")

→ 이 PE가 INT8을 받는 이유는 단순히 "작은 거 좋아서"가 아니라 **학계가 정량적으로 검증한 트레이드오프**입니다.

### 3. 산업계의 직접 원조 — Google TPU v1 (2017)

> Jouppi, N. et al. — "In-Datacenter Performance Analysis of a Tensor Processing Unit", *ISCA 2017*.

TPU v1은 256×256 INT8 systolic array. 이 프로젝트의 PE는 **TPU v1 PE의 1/256 축소판**입니다. TPU 논문 Fig.4의 "Matrix Multiply Unit" 다이어그램이 정확히 이 파일의 16×16 버전.

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

> **💡 배경: 왜 "Weight" Stationary인가?**
>
> Eyeriss(MIT, ISSCC 2016)의 분류에 따르면 dataflow는 **무엇을 PE에 멈춰두는가**로 나뉩니다:
> - **WS (Weight Stationary)** — TPU v1, 이 프로젝트. Weight 재사용이 Activation 재사용보다 클 때 유리. CNN의 큰 conv kernel, transformer의 weight-heavy linear에 좋음.
> - **OS (Output Stationary)** — Partial sum을 PE에 누적. 메모리 write back을 줄임. ShiDianNao(2015) 등.
> - **RS (Row Stationary)** — Eyeriss. 모든 데이터를 가능한 재사용. 가장 정교하지만 컨트롤 복잡.
>
> Weight를 두는 비용은 register 1개 (`weight_reg`)이지만, 한 번 로드 후 N번의 activation을 처리할 수 있으면 **weight DRAM read를 N분의 1로 줄임**. 이것이 이 프로젝트가 WS를 선택한 이유.
>
> 📖 참고: Sze 교과서 Ch.5 Dataflow Taxonomy, [Chen et al. ISSCC'16](https://people.csail.mit.edu/emer/papers/2016.isscc.eyeriss.pdf)

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

> **💡 배경: 왜 32비트로 누적하는가? (Accumulator Bit-width 이론)**
>
> 16×16 systolic array에서 한 column의 dot product는 **16개 INT8 곱의 합**입니다.
> - 한 곱의 max magnitude: $2^{15} = 32{,}768$ (signed 16-bit 범위)
> - 16개 합의 max magnitude: $16 \times 2^{15} = 2^{19}$ → 20비트로 충분.
>
> 그런데 왜 32비트? **Split-K** 때문입니다 (`l6/lowering.py` 참고). 큰 K 차원을 16-tile 단위로 쪼개서 partial sum을 NPU 외부 buffer에서 누적. 즉 PE는 16개가 아니라 **수천 개의 INT8 곱**을 누적할 수 있어야 함. 32비트면 $2^{31}/2^{15} = 2^{16} = 65{,}536$개의 곱셈을 overflow 없이 누적 가능.
>
> 산업계도 같음: TPU v1 = INT32 accumulator, NVIDIA Tensor Core (INT8) = INT32 accumulator. 이것이 왜 "INT8 in / INT32 out"이 표준 패턴인지의 이유.
>
> 📖 참고: P&H *Computer Organization* Ch.3 (산술), Sze 교과서 Ch.7 "Reduce Precision".

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

## 🔬 전문가 관점: 이 PE를 산업계 칩과 비교

| 항목 | 이 프로젝트 PE | TPU v1 PE | NVIDIA Tensor Core | Eyeriss PE |
|---|---|---|---|---|
| Dataflow | WS | WS | WS+OS hybrid | RS (Row Stationary) |
| Precision | INT8 × INT8 → INT32 | INT8 × INT8 → INT32 | INT8/FP16 → INT32/FP32 | 16-bit fixed |
| 1 PE / cycle | 1 MAC | 1 MAC | 64 MAC (4×4×4 sub-tile) | 1 MAC + RF |
| 로컬 storage | weight 1개 (8b) | weight 1개 (8b) | weight tile (4×4) | RF + scratchpad |
| 1-cycle latency | ✅ (registered out) | ✅ | ✅ | ✅ |

**가장 큰 차이**: NVIDIA Tensor Core는 한 PE 안에서 **4×4×4 = 64 MAC**을 한 cycle에 처리. 이 프로젝트는 1 MAC. 대신 256 PE를 spatial하게 펼쳐서 throughput을 맞춥니다. 두 접근의 트레이드오프는 **utilization vs flexibility** — Tensor Core는 작은 행렬에서 utilization이 떨어지고, SA는 큰 행렬에 더 유리.

📖 더 깊이: NVIDIA A100 White Paper (2020), Sze 교과서 Ch.6 "Spatial Architectures".

---

## 📖 더 깊이 공부하기 — 전문가 학습 로드맵 매핑

이 파일을 완전히 이해하려면 [전문가_학습_로드맵.md](../전문가_학습_로드맵.md)의 다음 자료들을 추천합니다:

| 깊이 | 자료 | 어느 부분이 이 PE와 연결되는가 |
|---|---|---|
| 🟢 입문 | P&H *Computer Organization* Ch.4 (Phase 1) | Pipeline register와 1-cycle latency |
| 🟢 입문 | MIT 6.004 강의 5~10강 (Phase 1) | `always_ff` 와 sequential logic |
| 🟡 중급 | Sze 교과서 Ch.2-3, 5 (Phase 3) | INT8 에너지 분석, WS dataflow 분류 |
| 🟡 중급 | Eyeriss ISSCC'16 논문 (Phase 5) | RS dataflow와 비교 — 왜 WS가 더 단순한가 |
| 🔴 심화 | TPU ISCA'17 논문 (Phase 5) | 256×256 산업 구현 — 이 PE의 1024배 버전 |
| 🔴 심화 | H.T. Kung 1982 "Why Systolic" | systolic의 철학적 origin |
| 🔴 심화 | Jacob et al. CVPR'18 (Quantization) | INT8 inference의 수학적 정합성 |

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
