# 06. `systolic_array.sv` — 16×16 Systolic Array

> **파일 위치**: `rtl/core/systolic_array.sv`
> **역할**: 256개 PE를 격자로 연결 + skewing/deskewing 통합
> **선수 지식**: [03_mac_pe_int8.md](03_mac_pe_int8.md), [05_systolic_data_setup.md](05_systolic_data_setup.md)
> **공장 비유**: 생산라인 — 16×16 작업자가 격자로 배치된 공장 전체

---

## 이 파일의 4가지 역할

1. **Activation Skewing** — `systolic_data_setup` 인스턴스화
2. **2D Mesh 배선** — PE 간 act(→), psum(↓) 와이어 연결
3. **PE 인스턴스화** — DATA_MODE에 따라 INT8 or FP16 PE 256개 생성
4. **Psum Deskewing** — 출력 psum의 대각선 지연 보정

---

## 📚 학술적 배경: 16×16이라는 숫자는 어떻게 결정되나?

### Roofline Model의 관점 — Williams, Waterman, Patterson (CACM 2009)

> Williams, S., Waterman, A., Patterson, D. — "Roofline: An Insightful Visual Performance Model for Multicore Architectures", *Communications of the ACM*, 52(4), 2009.

Systolic array 크기는 두 제약 사이의 균형입니다:

```
Peak Compute (FLOPS) = 2 × N × N × clk_freq          (N×N array, MAC=2 ops)
Peak Bandwidth       = (N × W_bits / 8) × clk_freq   (한 cycle에 N개 act 입력)
Arithmetic Intensity = Peak FLOPS / Peak Bandwidth
                     = (2 × N × N) / N             # bytes 단위로 정리
                     = 2N ops/byte
```

→ **N이 클수록 compute-bound 영역**이 커집니다 (메모리 대역폭이 부족해도 PE가 잘 활용됨).

이 프로젝트 N=16의 의미:
- Peak FLOPS @ 100MHz = 2 × 16 × 16 × 1e8 = **51.2 GOPS** (INT8)
- Peak BW = 16 × 8b × 100MHz = **1.6 GB/s** (한 방향)
- Arithmetic intensity for full GEMM: **32 ops/byte** → 대부분 ML workload (~10-100 ops/byte)에 잘 맞음

산업계 비교:
- TPU v1: 256×256 → AI ≈ 512 → 매우 compute-bound (DRAM 대역폭이 충분히 확보 가능한 데이터센터에 맞음)
- 이 프로젝트 16×16 → AI ≈ 32 → FPGA의 적당한 BRAM 대역폭에 맞춤

📖 참고: [`l6/src/l6_toolchain/roofline.py`](../../../l6/src/l6_toolchain/roofline.py)에 이 계산이 자동화되어 있음. H&P 1.10절(Roofline) 또는 [Williams 원논문 PDF](https://people.eecs.berkeley.edu/~kubitron/cs252/handouts/papers/RooflineVyNoYellow.pdf).

### Skew/Deskew의 수학적 필연성 — Kung & Leiserson (1979)

> Kung, H.T., Leiserson, C.E. — "Systolic Arrays for VLSI", *Sparse Matrix Proceedings*, 1979.

원래 Kung-Leiserson 논문은 **모든 데이터가 PE에 동시에 도착해야** dot product가 정렬된다는 것을 증명했습니다. 그런데 단일 broadcast wire로는 N개 PE에 동시 도착이 불가능 (clock skew, RC delay 누적). 해법이 **데이터를 미리 비스듬히 (skew) 보내고, 출력을 다시 정렬 (deskew)**하는 것.

→ 이 파일의 31-cycle 파이프라인 = skew(15) + propagation(1) + deskew(15)의 형태가 바로 Kung-Leiserson 1979의 직접 구현입니다.

---

## 코드 구조 개요

```systemverilog
module systolic_array #(파라미터)(포트);

    // 1. Skewing: act_in_left → act_skewed
    systolic_data_setup u_skew (...);

    // 2. 2D mesh 와이어 선언
    logic pe_act_wire  [ROWS][COLS+1];   // act: 왼→오
    logic pe_psum_wire [ROWS+1][COLS];   // psum: 위→아래

    // 3. 256개 PE 인스턴스화 (generate)
    for (i) for (j)
        mac_pe_int8 / mac_pe  u_pe (...);

    // 4. Deskewing: pe_psum_wire[ROWS][j] → psum_out_bottom[j]
    for (j) shift register로 대각선 보정
endmodule
```

---

## 줄 단위 해설

### 파라미터와 포트 [L5-23]

```systemverilog
module systolic_array #(
    parameter int ROWS = NPU_ROWS,        // 16
    parameter int COLS = NPU_COLS,        // 16
    parameter int ACT_W = NPU_ACT_WIDTH,  // 16
    parameter int WT_W  = NPU_WT_WIDTH,   // 16
    parameter int PSUM_W = NPU_PSUM_WIDTH,// 32
    parameter int DATA_MODE = NPU_DATA_MODE // INT8(0) or FP16(1)
)(
    input  logic [ROWS-1:0]           weight_load_en,  // 행별 weight 로드
    input  logic [COLS-1:0][WT_W-1:0] weight_bus,      // 16개 weight (열별)
    input  logic [ROWS-1:0][ACT_W-1:0] act_in_left,   // 16개 activation (행별)
    input  logic [COLS-1:0][PSUM_W-1:0] psum_in_top,  // 16개 psum 초기값 (보통 0)
    output logic [ROWS-1:0][ACT_W-1:0] act_out_right,
    output logic [COLS-1:0][PSUM_W-1:0] psum_out_bottom
);
```

**포인트**:
- `weight_load_en[ROWS-1:0]`: **행별** 1비트. 특정 행만 선택적으로 weight 로드 가능
- `weight_bus[COLS-1:0]`: **모든 열에 동시** broadcast. 한 행의 weight를 한 번에 배포

### Section 1: Activation Skewing [L27-33]

```systemverilog
systolic_data_setup #(.ROWS(ROWS), .DATA_WIDTH(ACT_W)) u_skew (
    .act_in_raw   (act_in_left),
    .act_in_skewed(act_skewed)
);
```
- 이전 파일에서 배운 skew 모듈 인스턴스화
- Row i의 activation이 i cycle 지연되어 나옴

### Section 2: 2D Mesh 와이어 [L36-48]

```systemverilog
logic [ACT_W-1:0]  pe_act_wire  [ROWS][COLS+1];  // +1: 마지막 PE 출력
logic [PSUM_W-1:0] pe_psum_wire [ROWS+1][COLS];   // +1: 마지막 PE 출력
```

배선 다이어그램:
```
                  psum_in_top[0]   psum_in_top[1]   psum_in_top[2]
                       │                │                │
                  wire[0][0]       wire[0][1]       wire[0][2]
                       ↓                ↓                ↓
act_skewed[0]→wire[0][0]→[PE00]→wire[0][1]→[PE01]→wire[0][2]→[PE02]→wire[0][3]
                       ↓                ↓                ↓
                  wire[1][0]       wire[1][1]       wire[1][2]
                       ↓                ↓                ↓
act_skewed[1]→wire[1][0]→[PE10]→wire[1][1]→[PE11]→wire[1][2]→[PE12]→wire[1][3]
                       ↓                ↓                ↓
                  wire[2][0]       wire[2][1]       wire[2][2]
```

- `pe_act_wire[i][j]`: Row i의 PE column j **왼쪽** 입력
- `pe_act_wire[i][j+1]`: Row i의 PE column j **오른쪽** 출력 → 다음 PE의 입력
- `pe_psum_wire[i][j]`: Column j의 PE row i **위쪽** 입력
- `pe_psum_wire[i+1][j]`: Column j의 PE row i **아래쪽** 출력 → 다음 PE의 입력

### Section 3: PE 인스턴스화 [L51-83]

```systemverilog
generate
    for (i = 0; i < ROWS; i++) begin : PE_ROW
        for (j = 0; j < COLS; j++) begin : PE_COL
            if (DATA_MODE == NPU_DATA_MODE_INT8) begin : MODE_INT8
                mac_pe_int8 u_pe (
                    .weight_load_en (weight_load_en[i]),  // 행 단위
                    .weight_in      (weight_bus[j]),      // 열 단위
                    .act_in         (pe_act_wire[i][j]),
                    .psum_in        (pe_psum_wire[i][j]),
                    .act_out        (pe_act_wire[i][j+1]),
                    .psum_out       (pe_psum_wire[i+1][j])
                );
            end else begin : MODE_FP16
                mac_pe u_pe (...);  // 동일 배선, 다른 PE
            end
        end
    end
endgenerate
```

**핵심 배선 규칙**:
- `weight_load_en[i]`: 같은 행의 모든 PE가 **동시에** weight 로드
- `weight_bus[j]`: 같은 열의 모든 PE가 **같은** weight를 받음 (broadcast)
- `act`: 왼쪽 PE의 `act_out` → 오른쪽 PE의 `act_in` (수평 흐름)
- `psum`: 위 PE의 `psum_out` → 아래 PE의 `psum_in` (수직 흐름)

### Section 4: Psum Deskewing [L94-115]

Skewing의 반대 작업. 출력 psum을 정렬합니다.

```
Array 아래쪽에서 나오는 psum 타이밍:
  col 0:  cycle 15에 첫 결과   (가장 왼쪽 → 가장 빠름)
  col 1:  cycle 16에 첫 결과   (1 cycle 늦음)
  ...
  col 15: cycle 30에 첫 결과   (15 cycle 늦음)
```

Deskewing은 빠른 column에 지연을 추가하여 모두 같은 cycle에 나오게 합니다:
- col 0: 15 cycle 추가 지연 → cycle 30에 출력
- col 1: 14 cycle 추가 지연 → cycle 30에 출력
- col 15: 0 cycle 추가 지연 → cycle 30에 출력

```systemverilog
localparam DELAY = COLS - 1 - j;  // col 0 → 15, col 15 → 0
```

---

## 전체 타이밍: 31 Cycle Pipeline

```
Cycle 0:       act row 0 투입 시작
                ↓ skew (15 cycle: row 15가 cycle 15에 투입)
Cycle 15:      모든 row의 첫 activation이 PE에 도달
                ↓ array propagation (1 cycle latency per PE)
Cycle 16:      첫 psum이 array 최하단 도달 (col 0)
                ↓ deskew (15 cycle: col 0을 col 15와 정렬)
Cycle 30:      모든 column의 psum이 정렬되어 출력
                = 총 31 cycle (0~30)
```

> **💡 배경: 31-cycle latency가 큰 문제인가?**
>
> 한 16×16 GEMM tile의 **fill latency**는 31 cycle이지만, **steady-state throughput**은 1 cycle당 256 MAC. tile size가 16일 때 256 cycle을 실행하면 utilization = 256/(256+31) ≈ **89%**. tile size를 늘리거나 (sequential tiles), pipeline overlapping을 하면 95%+ 가능.
>
> 이것이 **Amdahl's Law의 실전 적용**: 직렬 부분(fill/drain)을 병렬 부분(steady-state)으로 amortize. P&H 1.10절 또는 H&P Ch.1 참고.
>
> 산업계 사례: TPU v1은 256×256 → fill latency 511 cycle. 하지만 batch=128, sequence=512 같은 큰 workload에서 utilization이 99%+. 이것이 TPU가 **데이터센터** 가속기로 위치하는 이유.

---

## 🔬 전문가 관점: 만약 N=8 또는 N=32였다면?

| N (한 변) | Peak GOPS @100MHz | PE 수 | Arithmetic Intensity | 전형적 utilization | 비고 |
|---|---|---|---|---|---|
| 8 | 12.8 | 64 | 16 | 더 작은 tile에 유리 | edge AI, low-power |
| **16** | **51.2** | **256** | **32** | **이 프로젝트** | FPGA mid-range |
| 32 | 204.8 | 1024 | 64 | 큰 batch 필요 | high-end FPGA |
| 256 | 13107.2 | 65536 | 512 | datacenter only | TPU v1 |

**왜 16인가?**
1. **PYNQ-Z2 (Zynq-7020) 자원 제약**: 220 DSP48E1 → 256 MAC을 LUT+DSP 혼합으로 합성 가능
2. **BRAM 대역폭**: 4 banks × 256-bit @ 100MHz = 12.8 GB/s ≈ peak compute가 요구하는 대역폭과 일치
3. **Sweet spot for ML 모델**: ResNet conv(typical K=3, C=64) → im2col 후 GEMM이 K=576 — 16 단위로 나누면 36 tile, 8 단위로 나누면 72 tile (control overhead 2배)

📖 참고: [Sze 교과서 Ch.6](https://efficientdeeplearning.mit.edu/) Spatial Architecture sizing, [Eyeriss v2 (JSSC'19)](https://arxiv.org/abs/1807.07928)의 hierarchical mesh가 이 trade-off를 hierarchically 풀어낸 사례.

---

## 📖 더 깊이 공부하기 — 전문가 학습 로드맵 매핑

| 깊이 | 자료 | 어느 부분 |
|---|---|---|
| 🟢 입문 | P&H *Computer Organization* Ch.4 (파이프라인 hazard) | skew/deskew = "데이터 hazard"의 spatial 해결 |
| 🟢 입문 | MIT 6.004 강의 11~20강 (Phase 1) | generate 구문, 2D mesh 합성 |
| 🟡 중급 | H&P *Quantitative* Ch.4 (SIMD/벡터) | 16-lane MAC ↔ SIMD lane 비유 |
| 🟡 중급 | Williams CACM'09 Roofline 논문 (Phase 5) | 이 SA가 compute/memory bound인지 판단 |
| 🟡 중급 | [`l6/src/l6_toolchain/roofline.py`](../../../l6/src/l6_toolchain/roofline.py) | 이 SA의 roofline 자동 계산 (직접 실행해보기) |
| 🔴 심화 | Kung-Leiserson "Systolic Arrays for VLSI" (1979) | skew의 수학적 증명 |
| 🔴 심화 | TPU ISCA'17 논문 — Fig.4 (Phase 5) | 256×256 array의 산업 구현 |
| 🔴 심화 | NVIDIA A100 White Paper | Tensor Core(64 MAC/cycle/PE)와의 trade-off 비교 |

---

## 핵심 개념 정리

| 개념 | 설명 |
|------|------|
| 2D Mesh | PE를 격자로 연결. act→수평, psum→수직 데이터 흐름 |
| Generate 2중 루프 | 16×16 = 256개 PE를 합성 시점에 생성 |
| Compile-time 모드 분기 | `DATA_MODE`로 INT8/FP16 PE 선택 (런타임 아닌 합성 시점) |
| Deskewing | Skewing의 역 — 출력을 정렬하여 동시에 유효하게 |
| 31-cycle pipeline | 15(skew) + 1(propagation) + 15(deskew) |

---

## 연습 문제

1. `pe_act_wire`의 크기가 `[ROWS][COLS+1]`인 이유는? `+1`은 뭔가?
2. Weight preload 시 `weight_load_en = 16'b0000_0000_0000_0001`이면 어떤 행에 weight가 로드되는가?
3. 16×16 배열에서 deskew에 필요한 총 flip-flop 수는? (PSUM_W=32 기준)
4. `DATA_MODE`를 런타임에 바꿀 수 없는 이유는?

<details>
<summary>정답 보기</summary>

1. 각 PE는 `act_in`(왼쪽)과 `act_out`(오른쪽)을 가짐. Col 0~15 PE의 오른쪽 출력이 Col 1~16 와이어에 연결되므로 총 17개 필요
2. Row 0만 로드 (비트 0 = row 0)
3. (15+14+13+...+0) × 32 = 120 × 32 = **3,840개**
4. `generate if`는 합성(synthesis) 시점에 하드웨어를 결정. 한번 합성하면 고정된 게이트이므로 런타임 변경 불가

</details>

---

## 다음 파일

→ [07. npu_mxe_top.sv — Matrix Execution Engine Wrapper](07_npu_mxe_top.md)
