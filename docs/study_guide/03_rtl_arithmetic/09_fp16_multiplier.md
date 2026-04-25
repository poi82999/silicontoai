# 09. `fp16_multiplier.sv` — FP16 곱셈기

> **파일 위치**: `rtl/arithmetic/fp16_multiplier.sv`
> **역할**: FP16 × FP16 → FP32 combinational 곱셈기 (IEEE 754)
> **선수 지식**: [04_mac_pe.md](../02_rtl_core/04_mac_pe.md), IEEE 754 부동소수점 기초
> **공장 비유**: FP16 전용 정밀 계산기

---

## IEEE 754 Half-Precision (FP16) 복습

```
FP16: [15] [14:10]  [9:0]
       S     E(5)    M(10)

값 = (-1)^S × 2^(E-15) × 1.M    (정규 수, E≠0, E≠31)
```

| 필드 | 비트 | 범위 |
|------|------|------|
| Sign | 1비트 | 0=양수, 1=음수 |
| Exponent | 5비트 | 0~31 (bias=15) |
| Mantissa | 10비트 | 암묵적 1.xxx (= 1 + 0.M) |

## 곱셈 알고리즘

```
A × B 에서:
1. sign_result = sign_a XOR sign_b
2. exp_result  = exp_a + exp_b - bias(15) + FP32_bias(127) - FP16_bias(15) 보정
3. mant_result = (1.mant_a) × (1.mant_b)  [11비트 × 11비트 = 22비트]
4. FP32으로 패킹 (23비트 mantissa에 22비트가 딱 들어감 → 무손실!)
```

## 코드 구조 (6단계)

| 단계 | 역할 | 코드 위치 |
|------|------|-----------|
| 1. Unpack | FP16 → sign/exp/mant 분리 | `sign_a = fp16_a[15]` 등 |
| 2. Classify | zero/inf/nan/subnormal 판별 | `a_is_zero = (exp_a == 0)` |
| 3. Special cases | 0×X, NaN, Inf 처리 | combinational if-else |
| 4. Multiply mantissa | `(1.mant_a) × (1.mant_b)` = 22비트 | `11'b × 11'b` |
| 5. Normalize | 곱이 2.xxx이면 shift right + exp+1 | `if (product[21])` |
| 6. Pack FP32 | sign/exp/mant → 32비트 | `{sign, exp[7:0], mant[22:0]}` |

## 특수값 처리

| 입력 | 출력 | 이유 |
|------|------|------|
| 0 × anything | ±0 | 수학적 정의 |
| NaN × anything | NaN | NaN 전파 |
| Inf × 0 | NaN | 정의되지 않음 |
| Inf × finite | ±Inf | 무한대 전파 |
| Subnormal | 0 취급 | 단순화 (비정규 수 = 극소값) |

## FP16→FP32 무손실 변환의 원리

```
FP16 mantissa: 10비트 + 암묵적 1 = 11비트
곱셈: 11×11 = 22비트
FP32 mantissa: 23비트 ← 22비트가 완전히 들어감!
```

따라서 **FP16 곱셈 결과를 FP32로 표현하면 라운딩 에러가 전혀 없습니다**.

---

## 연습 문제

1. FP16에서 1.0은 어떤 비트패턴인가? (sign=0, exp=15, mant=0)
2. FP16의 최대 유한 값은 약 얼마인가? (exp=30, mant=0x3FF)
3. 두 FP16의 곱이 FP32 범위를 넘을 수 있는가?

<details>
<summary>정답 보기</summary>

1. `0_01111_0000000000` = 0x3C00
2. $(-1)^0 \times 2^{30-15} \times (1 + 1023/1024) \approx 65504$
3. FP16 최대값² = 65504² ≈ 4.29×10⁹. FP32 최대값 ≈ 3.4×10³⁸이므로 **절대 넘지 않음**

</details>

---

## 다음 파일

→ [10. fp32_adder.sv — FP32 덧셈기](10_fp32_adder.md)
