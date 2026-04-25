# 04. `mac_pe.sv` — FP16 MAC Processing Element

> **파일 위치**: `rtl/core/mac_pe.sv`
> **역할**: FP16×FP16→FP32 MAC 수행하는 PE. `mac_pe_int8`의 부동소수점 버전
> **선수 지식**: [03_mac_pe_int8.md](03_mac_pe_int8.md), IEEE 754 FP16/FP32 기본 지식

---

## INT8 PE와의 차이점

| 항목 | `mac_pe_int8` | `mac_pe` (이 파일) |
|------|---------------|---------------------|
| 곱셈 | `$signed(a) * $signed(b)` 직접 연산 | `fp16_multiplier` 서브모듈 호출 |
| 덧셈 | `$signed(psum) + product` 직접 연산 | `fp32_adder` 서브모듈 호출 |
| Weight 레지스터 | 8비트 (`weight_in[7:0]`) | **16비트** (FP16 전체) |
| 정밀도 | INT8→INT32 (정수) | FP16→FP32 (부동소수점) |

**구조는 동일**: weight-stationary, act 왼→오, psum 위→아래, 1 cycle latency

---

## 전체 코드 (75줄)

```systemverilog
module mac_pe (
    input  logic        clk,
    input  logic        rst_n,

    input  logic        weight_load_en,
    input  logic [15:0] weight_in,       // FP16 전체 16비트 사용

    input  logic [15:0] act_in,          // FP16
    input  logic [31:0] psum_in,         // FP32

    output logic [15:0] act_out,         // FP16
    output logic [31:0] psum_out         // FP32
);
    logic [15:0] weight_reg;             // ← 16비트 (INT8과 다름!)

    // ① FP16 곱셈: 서브모듈 인스턴스
    logic [31:0] fp32_product;
    fp16_multiplier u_mul (              // ← 별도 모듈 필요
        .fp16_a      (act_in),
        .fp16_b      (weight_reg),
        .fp32_product(fp32_product)
    );

    // ② FP32 덧셈: 서브모듈 인스턴스
    logic [31:0] fp32_mac_result;
    fp32_adder u_add (                   // ← 별도 모듈 필요
        .fp32_a  (psum_in),
        .fp32_b  (fp32_product),
        .fp32_sum(fp32_mac_result)
    );

    // ③ 레지스터 (mac_pe_int8과 동일 패턴)
    always_ff @(posedge clk) begin
        if (!rst_n) begin
            weight_reg <= '0;
            act_out    <= '0;
            psum_out   <= '0;
        end else begin
            if (weight_load_en)
                weight_reg <= weight_in;  // ← 16비트 전체 저장

            act_out  <= act_in;
            psum_out <= fp32_mac_result;
        end
    end
endmodule
```

---

## 핵심 포인트

### 왜 서브모듈을 사용하는가?

INT8 곱셈은 Verilog의 `*` 연산자로 충분하지만, **FP16 곱셈은 하드웨어 설계가 복잡**:
1. 부호 비트 XOR
2. 지수 덧셈 + bias 보정
3. 가수 곱셈 (11비트 × 11비트)
4. 정규화 + 라운딩

이 복잡성을 `fp16_multiplier.sv`와 `fp32_adder.sv`로 분리한 것입니다.
→ Phase 3에서 이 두 파일을 상세히 학습합니다.

### 현재 프로젝트의 기본 모드

```systemverilog
// npu_def_pkg.sv에서
localparam int NPU_DATA_MODE = NPU_DATA_MODE_INT8;  // ← INT8이 기본!
```

현재는 **INT8 모드가 기본**이므로, `mac_pe.sv`는 FP16 빌드 시에만 활성화됩니다.
`systolic_array.sv`의 `generate` 블록에서 `DATA_MODE`에 따라 선택됩니다.

---

## 연습 문제

1. `mac_pe`와 `mac_pe_int8`의 `always_ff` 블록은 거의 동일한데, 어떤 한 줄이 다른가?
2. FP16 모드에서 `weight_reg`가 16비트인 이유는?
3. `fp16_multiplier`를 서브모듈 대신 `assign product = act_in * weight_reg;`로 쓰면 안 되는 이유는?

<details>
<summary>정답 보기</summary>

1. `weight_reg <= weight_in;` (FP16: 16비트 전체) vs `weight_reg <= weight_in[7:0];` (INT8: 하위 8비트)
2. FP16은 16비트 전체(sign 1 + exp 5 + mantissa 10)가 의미있는 값이므로
3. Verilog의 `*`는 정수 곱셈. FP16은 IEEE 754 형식이므로 부호/지수/가수를 별도로 처리해야 함

</details>

---

## 다음 파일

→ [05. systolic_data_setup.sv — Activation Skewing](05_systolic_data_setup.md)
