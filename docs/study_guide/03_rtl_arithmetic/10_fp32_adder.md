# 10. `fp32_adder.sv` — FP32 덧셈기

> **파일 위치**: `rtl/arithmetic/fp32_adder.sv`
> **역할**: FP32 + FP32 → FP32 combinational 덧셈기 (정규화 + Round-to-Nearest-Even)
> **선수 지식**: [09_fp16_multiplier.md](09_fp16_multiplier.md)

---

## FP32 덧셈이 곱셈보다 **더 어려운** 이유

| 단계 | 곱셈 | 덧셈 |
|------|------|------|
| 지수 처리 | 단순 더하기 | **정렬(alignment)** 필요 |
| 결과 크기 | 예측 가능 | 캔슬레이션으로 극적 변화 가능 |
| 정규화 | 1비트 이동 | **최대 23비트** 이동 가능 |
| 라운딩 | ≈무손실 | **라운딩 에러** 발생 |

## 알고리즘 6단계

```
FP32 Add(A, B):
1. Unpack: sign/exp/mant 분리
2. Align:  작은 쪽 mantissa를 오른쪽 shift (exp 차이만큼)
3. Add/Sub: 부호가 같으면 더하기, 다르면 빼기
4. Normalize: Leading Zero Detection → 왼쪽 shift + exp 감소
5. Round: Round-to-Nearest-Even (은행가 라운딩)
6. Pack: 결과를 32비트로 조립
```

### Alignment 예시
```
A = 1.101 × 2^5
B = 1.010 × 2^3

exp 차이 = 5 - 3 = 2
B를 2비트 오른쪽 shift: 0.01010 × 2^5

덧셈: 1.101 + 0.01010 = 10.01110 × 2^5
정규화: 1.001110 × 2^6
```

### Round-to-Nearest-Even (RNE)
가장 가까운 값으로 라운딩. 중간값(0.5)일 때는 짝수 쪽으로:
- 1.0010|1 → 1.0011 (올림)
- 1.0011|1 → 1.0100 (올림→짝수)
- 1.0010|0 → 1.0010 (그대로)

---

## 특수값 처리

| 입력 | 출력 |
|------|------|
| NaN + anything | NaN |
| Inf + (-Inf) | NaN |
| Inf + finite | Inf |
| 0 + 0 | 0 (부호 규칙에 따라) |
| Subnormal | 0 취급 |

---

## FP16 MAC에서의 역할

```
mac_pe.sv에서:
  fp32_product = fp16_mul(act, weight)     ← fp16_multiplier
  psum_out     = fp32_add(psum, product)   ← 이 모듈 (fp32_adder)
```

곱셈 결과(FP32)와 이전 partial sum(FP32)을 더하여 새 partial sum을 만듭니다.
이 덧셈에서 **라운딩 에러가 발생할 수 있으며**, 이것이 FP16 모드의 수치 오차 주요 원인입니다.

---

## 연습 문제

1. Alignment에서 오른쪽 shift 시 잘려나가는 비트는 어떻게 되는가?
2. INT8 MAC(`mac_pe_int8`)은 왜 이런 복잡한 덧셈기가 필요 없는가?
3. Catastrophic cancellation이란? (힌트: 비슷한 크기의 수를 뺄 때)

<details>
<summary>정답 보기</summary>

1. Guard/Round/Sticky 비트로 보존되어 RNE 라운딩에 사용됨
2. 정수 덧셈은 단순 이진 가산기면 충분. 정규화/라운딩 불필요
3. 비슷한 크기의 두 수를 빼면 유효 숫자가 급감하여 상대 오차가 커지는 현상

</details>

---

## 다음 파일

→ [11. dp_sram_bank.sv — Dual-Port SRAM Bank](../04_rtl_memory/11_dp_sram_bank.md)
