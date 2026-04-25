# 05. `systolic_data_setup.sv` — Activation Skewing

> **파일 위치**: `rtl/core/systolic_data_setup.sv`
> **역할**: Systolic array에 들어가는 activation을 대각선으로 지연(skew)
> **선수 지식**: [03_mac_pe_int8.md](03_mac_pe_int8.md), `generate` 구문
> **공장 비유**: 정렬 컨베이어 — 16줄의 재료를 대각선으로 어긋나게 투입

---

## 왜 Skewing이 필요한가?

행렬 곱셈 C = A × B에서, C[0][0]을 계산하려면:
```
C[0][0] = A[0][0]×B[0][0] + A[0][1]×B[1][0] + ... + A[0][15]×B[15][0]
```

Systolic array에서 activation row 0는 PE row 0에, row 1은 PE row 1에 들어갑니다.
그런데 **모든 행이 같은 cycle에 들어가면 안 됩니다**!

```
동시 투입 (잘못됨):          skew 투입 (올바름):
cycle 0: row0 → PE[0][0]    cycle 0: row0 → PE[0][0]
cycle 0: row1 → PE[1][0]    cycle 1: row1 → PE[1][0]  (1 cycle 늦게)
cycle 0: row2 → PE[2][0]    cycle 2: row2 → PE[2][0]  (2 cycle 늦게)
...                          ...
cycle 0: row15→ PE[15][0]   cycle15: row15→ PE[15][0] (15 cycle 늦게)
```

**이유**: PE[i][j]에서 activation row i의 k번째 원소와 만나야 하는 weight는 column j의 row k.
대각선 지연이 있어야 올바른 조합이 만들어집니다.

---

## 전체 코드 (35줄)

```systemverilog
`timescale 1ns / 1ps

module systolic_data_setup #(                          // [L3]
    parameter ROWS = 16,                               // [L4]
    parameter DATA_WIDTH = 8                           // [L5]
)(
    input  logic clk,                                  // [L7]
    input  logic rst_n,                                // [L8]
    input  logic [ROWS-1:0][DATA_WIDTH-1:0] act_in_raw,    // [L9]
    output logic [ROWS-1:0][DATA_WIDTH-1:0] act_in_skewed  // [L10]
);
    genvar i;                                          // [L12]
    generate
        for (i = 0; i < ROWS; i++) begin : ROW_SKEW   // [L14]
            if (i == 0) begin                          // [L15]
                assign act_in_skewed[i] = act_in_raw[i];  // [L16]
            end else begin                             // [L17]
                logic [i-1:0][DATA_WIDTH-1:0] delay_pipe;  // [L18]
                always_ff @(posedge clk) begin         // [L19]
                    if (!rst_n) begin                  // [L20]
                        delay_pipe <= '0;              // [L21]
                    end else begin                     // [L22]
                        delay_pipe[0] <= act_in_raw[i];    // [L23]
                        for (int k = 1; k < i; k++) begin  // [L24]
                            delay_pipe[k] <= delay_pipe[k-1]; // [L25]
                        end
                    end
                end
                assign act_in_skewed[i] = delay_pipe[i-1]; // [L29]
            end
        end
    endgenerate
endmodule
```

---

## 줄 단위 해설

### [L4-5] 파라미터
- `ROWS = 16`: 행 수 (=15 cycle의 최대 지연)
- `DATA_WIDTH = 8`: **주의!** 인스턴스화 시 `NPU_ACT_WIDTH(=16)`으로 override됨

### [L9-10] 입출력
- `act_in_raw[ROWS-1:0]`: 원본 activation (모든 행이 같은 cycle에 들어옴)
- `act_in_skewed[ROWS-1:0]`: skew된 activation (행마다 다른 cycle에 나옴)

### [L14-16] Row 0: 지연 없음
```systemverilog
if (i == 0) begin
    assign act_in_skewed[0] = act_in_raw[0];  // 직통!
end
```
- 첫 번째 행은 지연 없이 바로 통과

### [L17-29] Row i: i cycle 지연
```systemverilog
logic [i-1:0][DATA_WIDTH-1:0] delay_pipe;  // i개 깊이의 shift register
```
- Row 1: `delay_pipe[0]` → 1 flip-flop → **1 cycle 지연**
- Row 2: `delay_pipe[0]` → `delay_pipe[1]` → **2 cycle 지연**
- Row 15: 15단 shift register → **15 cycle 지연**

### Shift Register 동작

```
Row 3의 delay_pipe (3단):

cycle 0: act_in_raw[3] = A  →  pipe = [_, _, _]
cycle 1: act_in_raw[3] = B  →  pipe = [A, _, _]
cycle 2: act_in_raw[3] = C  →  pipe = [B, A, _]
cycle 3: act_in_raw[3] = D  →  pipe = [C, B, A]  ← act_in_skewed[3] = A (3 cycle 지연!)
```

---

## 시각적 이해: Skewing

```
act_in_raw (16행):              act_in_skewed (16행):
cycle:  0  1  2  3  ...         cycle:  0  1  2  3  ...
row 0: [a0 a1 a2 a3 ...]       row 0: [a0 a1 a2 a3 ...]  지연 0
row 1: [b0 b1 b2 b3 ...]       row 1: [ _ b0 b1 b2 ...]  지연 1
row 2: [c0 c1 c2 c3 ...]       row 2: [ _  _ c0 c1 ...]  지연 2
row 3: [d0 d1 d2 d3 ...]       row 3: [ _  _  _ d0 ...]  지연 3
...                             ...

대각선이 형성됨!
```

이 대각선 덕분에, systolic array 내부에서 올바른 activation-weight 조합이 만나게 됩니다.

---

## `generate`를 이용한 하드웨어 생성

```systemverilog
for (i = 0; i < ROWS; i++) begin : ROW_SKEW
```
- **`generate for`**: 합성 시점에 ROWS개의 서로 다른 하드웨어를 생성
- Row 0: 와이어 1개 (pass-through)
- Row 1: FF 1개
- Row 15: FF 15개
- 총 FF 수: 0+1+2+...+15 = **120개** × `DATA_WIDTH`비트

---

## 핵심 개념 정리

| 개념 | 설명 |
|------|------|
| Skewing | 데이터를 대각선으로 지연시켜 systolic timing 맞춤 |
| Shift Register | FF 체인으로 데이터를 N cycle 지연 |
| `generate for` | 합성 시점에 반복적 하드웨어 구조 생성 |
| 대칭적 Deskewing | psum 출력 쪽에서 반대로 지연하여 정렬 (systolic_array.sv에서 구현) |

---

## 연습 문제

1. 16행 skewing에 총 몇 개의 flip-flop이 필요한가? (DATA_WIDTH=16 기준)
2. Row 7에 어떤 데이터가 cycle 0에 들어갔다면, skewed 출력으로 나오는 것은 cycle 몇?
3. `DATA_WIDTH`가 `systolic_array.sv`에서 `NPU_ACT_WIDTH(=16)`으로 override되는데, 기본값이 8인 이유는?

<details>
<summary>정답 보기</summary>

1. (0+1+2+...+15) × 16 = 120 × 16 = **1,920개**
2. Cycle **7** (7단 shift register 통과)
3. 아마 초기 설계 시 INT8 (8비트) 기준으로 작성했다가 lane 폭이 16으로 통일되면서 override하는 구조로 변경. 기본값 자체는 의미 없음

</details>

---

## 다음 파일

→ [06. systolic_array.sv — 16×16 Systolic Array](06_systolic_array.md)
