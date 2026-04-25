# 08. `npu_core_top.sv` — NPU Core Top

> **파일 위치**: `rtl/core/npu_core_top.sv`
> **역할**: Systolic Array + Accumulator Buffer를 하나의 "Core"로 통합
> **선수 지식**: [06_systolic_array.md](06_systolic_array.md), accumulator 개념
> **공장 비유**: 생산동 건물 전체 — 생산라인(array) + 완제품 창고(accumulator)

---

## 이 파일의 구조

```
npu_core_top
├── zero_psum_top (상수 0)
├── systolic_array (u_systolic_array)
│   ├── skewing
│   ├── 256 PEs
│   └── deskewing
├── ACC_DELAY pipeline (제어 신호 지연)
└── psum_accumulator_buffer (u_psum_buffer)
```

---

## 핵심 코드 해설

### 포트
```systemverilog
input  [ROWS-1:0][ACT_W-1:0] sram_act_in,    // SRAM에서 온 activation
input  [COLS-1:0][WT_W-1:0]  sram_weight_in,  // SRAM에서 온 weight
input  [ROWS-1:0]            weight_load_en,   // 행별 weight 로드
input                        acc_valid,        // accumulator 쓰기 유효
input                        acc_clear,        // accumulator 초기화
input  [8:0]                 acc_addr,         // accumulator 주소
input                        drain_re,         // drain 읽기 활성화
input  [8:0]                 drain_addr,       // drain 주소
output [COLS-1:0][PSUM_W-1:0] psum_drain_out  // drain 출력 (16 × 32bit)
```

### Systolic Array 연결
```systemverilog
assign zero_psum_top = '0;  // psum 초기값 = 0

systolic_array u_systolic_array (
    .psum_in_top     (zero_psum_top),       // 0에서 시작
    .psum_out_bottom (array_psum_bottom)    // → accumulator로
);
```

**`zero_psum_top = 0`의 의미**: Weight-stationary에서 psum은 array 최상단에서 0으로 시작하여, 각 PE를 지나며 act×weight를 누적합니다. 최하단 `psum_out_bottom`이 한 행의 dot product 결과.

### ACC_DELAY: 제어 신호 파이프라인 지연

```systemverilog
localparam ACC_DELAY = ROWS + COLS - 1;  // 16 + 16 - 1 = 31
```

**문제**: `acc_valid`, `acc_clear`, `acc_addr`는 activation과 **같은 cycle**에 입력됨.
하지만 systolic array를 통과하는 데 **31 cycle**이 걸림.

**해결**: 제어 신호도 31단 shift register로 지연시켜, psum이 도착하는 timing에 맞춤.

```systemverilog
logic [ACC_DELAY-1:0] acc_valid_pipe;  // 31비트 shift register
logic [ACC_DELAY-1:0] acc_clear_pipe;
logic [8:0] acc_addr_pipe [ACC_DELAY];  // 31단 × 9비트

// 매 cycle: 입력 → pipe[0] → pipe[1] → ... → pipe[30]
acc_valid_pipe <= {acc_valid_pipe[ACC_DELAY-2:0], acc_valid};
```

```
Cycle 0:  acc_valid 입력 →  pipe[0]=1
Cycle 1:                    pipe[1]=1, pipe[0]=새 값
...
Cycle 30:                   pipe[30]=1 → accumulator에 전달!
```

### Accumulator 연결
```systemverilog
psum_accumulator_buffer u_psum_buffer (
    .acc_valid  (acc_valid_pipe[ACC_DELAY-1]),   // 31 cycle 지연된 valid
    .acc_clear  (acc_clear_pipe[ACC_DELAY-1]),
    .acc_addr   (acc_addr_pipe[ACC_DELAY-1]),
    .array_psum (array_psum_bottom),             // array에서 직결
    .drain_re   (drain_re),
    .drain_addr (drain_addr),
    .drain_data (psum_drain_out)
);
```

---

## 전체 데이터 흐름 타이밍

```
Cycle 0:  activation 입력 + acc_valid=1, acc_addr=0
          ↓ (31 cycle: skew + array + deskew)
Cycle 30: array_psum_bottom 유효
          + acc_valid_pipe[30]=1, acc_addr_pipe[30]=0
          → accumulator가 addr=0에 psum 저장
```

---

## 핵심 개념 정리

| 개념 | 설명 |
|------|------|
| Pipeline Delay Matching | 데이터와 제어 신호의 타이밍을 맞추기 위한 shift register |
| ACC_DELAY = 31 | ROWS + COLS - 1 = systolic array의 전체 latency |
| Zero psum top | Weight-stationary: psum 누적의 시작점은 항상 0 |
| 모듈 계층 | MXE → Core → Array + Accumulator |

---

## 연습 문제

1. `ACC_DELAY = ROWS + COLS - 1`에서 -1이 붙는 이유는?
2. 제어 신호 파이프라인 없이 `acc_valid`를 직접 accumulator에 연결하면 어떤 문제가 생기는가?
3. `array_act_right`에 `UNUSEDSIGNAL` lint가 붙어있는 이유는?

<details>
<summary>정답 보기</summary>

1. Skew가 0~15 cycle (16단), deskew가 0~14 cycle (15단) → 합: 15 + 1(propagation) + 15 = 31 = 16+16-1
2. Accumulator가 activation 입력과 같은 cycle에 쓰기를 시도 → 아직 psum이 도착 안 했으므로 쓰레기 값 저장
3. Weight-stationary에서 activation이 오른쪽으로 빠져나가는 값은 사용하지 않음 (다음 타일 forwarding용으로 예비)

</details>

---

## 다음 파일

→ [09. fp16_multiplier.sv — FP16 곱셈기](../03_rtl_arithmetic/09_fp16_multiplier.md)
