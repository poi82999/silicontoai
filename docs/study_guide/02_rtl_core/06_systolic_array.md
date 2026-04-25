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
