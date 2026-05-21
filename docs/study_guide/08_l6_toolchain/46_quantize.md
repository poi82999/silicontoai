# 46. `quantize.py` — INT8 양자화 (per-tensor / per-channel / SmoothQuant / GPTQ)

> **파일 위치**: `l6/src/l6_toolchain/quantize.py` (628줄)
> **역할**: FP32 weight/activation → signed INT8 변환. 4가지 알고리즘 (단순 → 고급)
> **선수 지식**: [42_api.md](42_api.md), 양자화 기초 (scale = max/127 형태)
> **공장 비유**: 부품 규격 변환소 — 1mm 정밀 도면을 NPU가 받을 수 있는 1cm 등급 부품으로 단순화 (오차 최소화)

---

## 이 파일이 중요한 이유

NPU 하드웨어는 **INT8만 받습니다**. 하지만 PyTorch 모델은 FP32. 이 파일이 그 변환을 담당하는데, 단순한 quantization은 정확도가 떨어지고 — 특히 transformer activation은 outlier 때문에 문제가 큽니다. 그래서 학계 최신 기법(SmoothQuant, GPTQ)을 같이 제공합니다.

---

## 📚 학술적 배경: PTQ는 5년간 격렬히 발전한 분야

### 1. Quantization의 정량적 출발 — Jacob et al. CVPR'18

> Jacob, B. et al. — "Quantization and Training of Neural Networks for Efficient Integer-Arithmetic-Only Inference", *CVPR 2018*.

Google MobileNet의 quantization 논문. 핵심 공식:
$$x_{\text{int}} = \text{round}\left(\frac{x_{\text{float}}}{\text{scale}}\right) + \text{zero\_point}$$

이 프로젝트는 `zero_point=0`만 사용 (symmetric). 이유:
- **하드웨어 단순화**: NPU MAC가 `(act - z_act) * (w - z_w)`를 계산하지 않아도 됨
- **정확도 trade-off**: ReLU 후 (≥0) activation은 asymmetric이 유리하지만, 일반적으로 1% 이내 손실

**산업계 추세**: TensorRT, ONNX Runtime, CoreML 모두 symmetric weight + asymmetric activation을 default로 사용. 이 프로젝트는 weight/activation 모두 symmetric — **하드웨어 단순성을 위한 의도적 선택**.

📖 참고: Jacob CVPR'18, Sze 교과서 Ch.7 "Reduce Numerical Precision".

### 2. Per-channel quantization의 등장 — Krishnamoorthi (2018)

> Krishnamoorthi, R. — "Quantizing deep convolutional networks for efficient inference: A whitepaper", arXiv 2018.

Per-tensor quantization은 **outlier channel** 1개 때문에 다른 channel들의 dynamic range를 낭비합니다. Krishnamoorthi의 분석:
- ResNet-50 Conv weight: per-tensor INT8 → top-1 손실 ~3%
- Per-channel INT8 → 손실 < 0.5%

→ "공짜 점심" — 추가 연산 비용이 거의 없으면서 정확도 크게 향상. 이 프로젝트의 `_quantize_per_channel`이 직접 구현.

**왜 Linear/Conv weight만 per-channel?** Activation은 batch마다 통계가 달라지므로 per-tensor가 안전. Weight는 한 번 학습 후 고정 → per-channel이 안전.

### 3. SmoothQuant — Xiao et al. ICML'23

> Xiao, G. et al. — "SmoothQuant: Accurate and Efficient Post-Training Quantization for Large Language Models", *ICML 2023*.

LLM (GPT-3, BLOOM)의 activation은 **systematic outlier**가 있습니다 — 특정 channel이 다른 채널보다 100배 이상 큰 값. 이는 LLM의 attention 메커니즘 때문이고, 학습 후에도 사라지지 않음.

핵심 통찰:
- Activation은 outlier 때문에 quantize 어려움
- Weight는 per-channel quantize 잘 됨
- → Activation의 어려움을 weight로 **수학적으로 동일한 transformation**으로 옮김

수식:
$$Y = X \cdot W = (X \cdot \text{diag}(s)^{-1}) \cdot (\text{diag}(s) \cdot W) = X' \cdot W'$$

이 프로젝트 `smooth_quant`가 정확히 그것 (`α=0.5`는 논문 default와 동일).

→ SmoothQuant 없이 LLM을 INT8로 양자화하면 perplexity 발산. 이 함수가 LLM 시대의 NPU에 critical.

### 4. GPTQ — Frantar et al. ICLR'23

> Frantar, E., Ashkboos, S., Hoefler, T., Alistarh, D. — "GPTQ: Accurate Post-Training Quantization for Generative Pre-trained Transformers", *ICLR 2023*.

Optimal Brain Surgeon (LeCun 1990, "OBS")의 weight pruning 알고리즘을 quantization에 적용.

핵심 아이디어:
- Quantization 오차 $e = W - \hat{W}$를 그냥 줄이지 말고 모델 출력에 미치는 second-order effect를 줄이자
- $\min e^T H e$ where $H = X X^T$ (입력의 통계)
- Column j를 quantize하고 발생한 오차를 column j+1, j+2, ...에 보정

이 프로젝트 `gptq_quantize_weight`이 그 직접 구현. Cholesky decomposition + lazy-batch 트릭으로 큰 weight matrix도 처리 가능.

**산업계 채택**: LLaMA-2 70B, Falcon, Mixtral 모두 GPTQ로 INT4까지 양자화하여 consumer GPU에서 inference 가능. 이 함수가 그 알고리즘의 INT8 버전.

📖 참고: Frantar ICLR'23, Optimal Brain Surgeon (LeCun NeurIPS'90), [GPTQ 공식 repo](https://github.com/IST-DASLab/gptq).

### 5. ADAROUND (Nagel et al. ICML'20)

> Nagel, M. et al. — "Up or Down? Adaptive Rounding for Post-Training Quantization", *ICML 2020*.

`round()`는 단순히 가까운 정수로 가는 것이 항상 최적은 아닙니다. ADAROUND는 각 weight마다 **올림/내림을 학습** (small calibration set으로 reconstruction loss 최소화).

이 파일에는 아직 ADAROUND가 없지만, 다음 확장 후보. GPTQ보다 단순하면서 per-tensor 대비 큰 향상.

📖 참고: Nagel ICML'20, [Brevitas](https://github.com/Xilinx/brevitas) (Xilinx의 PTQ/QAT 라이브러리).

---

## 큰 그림: 4단계 quantization 메뉴

```
1. Per-tensor symmetric         ← baseline
   scale = max(|W|)/127, 모든 element 같은 scale

2. Per-channel symmetric        ← Linear/Conv weight 정확도↑
   axis 따라 channel별 scale (out 차원에)

3. SmoothQuant                  ← activation outlier 처리
   W → W·diag(s),  X → X·diag(1/s)
   activation의 큰 값을 weight로 분산

4. GPTQ                         ← 정확도 최고
   Hessian guidance로 weight 보정
   second-order error 최소화
```

NPU 하드웨어는 4가지 모두 **같은 INT8 MAC** 경로를 사용. 알고리즘 차이는 **컴파일 타임에만** 작용.

---

## 자료구조 (L40-75)

### `QuantizeResult`

```python
@dataclass(frozen=True)
class QuantizeResult:
    quantized: np.ndarray          # INT8 (-128..127)
    scale: float                   # per-tensor (또는 per-channel mean)
    original_dtype: str
    max_abs_error: float
    mean_abs_error: float
    scales_per_channel: np.ndarray | None = None    # (C,) or None
    axis: int | None = None

    @property
    def zero_point(self) -> int:
        return 0   # 항상 symmetric

    @property
    def is_per_channel(self) -> bool:
        return self.scales_per_channel is not None
```

**핵심**: `zero_point=0` 강제 — symmetric만. NPU 하드웨어가 zero point 처리 안 하기 때문.

### `LayerQuantizeResult`, `SmoothQuantResult`, `GPTQResult`

각 알고리즘별 결과 + 입력 정보 묶음. 각 함수의 반환 타입.

---

## ① Per-tensor Quantization

```python
def quantize_tensor(tensor, *, saturate=True, axis=None) -> QuantizeResult:
    if axis is None:
        # Per-tensor
        max_abs = float(np.abs(tensor).max())
        scale = max_abs / 127.0 if max_abs > 0 else 1.0
        quantized = np.round(tensor / scale).astype(np.int32)
        if saturate:
            quantized = np.clip(quantized, -128, 127)
        quantized = quantized.astype(np.int8)

        # 역양자화로 오차 측정
        dequantized = quantized.astype(np.float32) * scale
        ...
```

**핵심 공식**:
```
scale = max(|x|) / 127
x_int8 = round(x / scale)  // [-128, 127]에 clamp
x_dequant = x_int8 × scale
```

→ 오차는 **clipping** + **rounding**에서 옴. `saturate=False`이면 overflow 가능 (디버깅용).

---

## ② Per-channel Quantization

```python
def _quantize_per_channel(tensor, axis, saturate):
    moved = np.moveaxis(tensor, axis, 0)            # axis를 첫 번째 축으로
    n_channels = moved.shape[0]
    flat = moved.reshape(n_channels, -1)            # (C, rest)

    max_abs_per = np.abs(flat).max(axis=1)           # (C,)
    scales = np.where(max_abs_per > 0, max_abs_per / 127.0, 1.0)   # (C,)

    quantized_flat = np.round(flat / scales[:, None]).astype(np.int32)
    if saturate:
        quantized_flat = np.clip(quantized_flat, -128, 127)
    quantized_flat = quantized_flat.astype(np.int8)

    quantized = quantized_flat.reshape(moved.shape)
    quantized = np.moveaxis(quantized, 0, axis)
    return QuantizeResult(quantized=quantized, scales_per_channel=scales, axis=axis, ...)
```

**왜 이 방식이 더 정확한가**: per-tensor는 **한 outlier 채널** 때문에 다른 채널들의 dynamic range를 낭비. per-channel은 채널마다 자기 max 사용 → 모든 채널이 [-128, 127] 가득 활용.

**Linear weight**: shape `(out_features, in_features)` → `axis=0` (out 차원).
**Conv2d weight**: shape `(out_channels, in_channels, kh, kw)` → `axis=0`.

---

## ③ SmoothQuant — Activation Outlier 분산

### 문제

Transformer activation은 일부 채널이 100배 이상 큼 → per-channel quantization도 안 됨 (channel별 scale은 W에는 가능, X에는 보통 어려움).

### 해법

```
원래:    Y = X · W
변환:    Y = X · diag(1/s) · diag(s) · W = X' · W'
              ↑ X' (smoothed)    ↑ W' (rescaled)
```

스케일 벡터 `s`를 잘 고르면 **X'와 W'가 모두 quantization-friendly**.

### 코드

```python
def smooth_quant(activations, weights, *, alpha=0.5, ...) -> SmoothQuantResult:
    # 활성화 통계: 각 input feature 채널의 max
    act_stats = np.abs(activations).max(axis=0)    # (in_features,)
    weight_stats = np.abs(weights).max(axis=0)     # (in_features,)

    # 스케일 (Hyperparam α: 0.5가 default)
    scales = (act_stats ** alpha) / (weight_stats ** (1 - alpha))
    scales = np.maximum(scales, 1e-5)

    # 변환
    smoothed_act = activations / scales[None, :]
    smoothed_weight = weights * scales[:, None]
    return SmoothQuantResult(...)
```

**α=0.5의 의미**: activation 부담과 weight 부담을 **반반**으로 나눔.

---

## ④ GPTQ — Hessian-guided Weight Correction

### 핵심 아이디어

quantization 오차 `(W - Ŵ)`를 그냥 줄이지 말고, **second-order error**를 줄이자:
```
min   (W - Ŵ)ᵀ H (W - Ŵ)     s.t. Ŵ ∈ INT8
```

여기서 `H ≈ X X.T` (입력의 통계). H를 알면 quantization 오차가 모델 출력에 어떤 영향을 미치는지 계산 가능 → 영향 큰 weight를 우선 정확히 quantize.

### 코드 흐름

```python
def gptq_quantize_weight(weight, *, hessian=None, blocksize=128) -> GPTQResult:
    # 1) Hessian 준비 (없으면 identity로 fallback = per-channel과 같음)
    H = hessian if hessian is not None else np.eye(weight.shape[1])

    # 2) Cholesky decomp + lazy-batch
    L = np.linalg.cholesky(H + epsilon * I)
    Hinv = solve_triangular(L.T, solve_triangular(L, I))

    # 3) Column-wise quantize with error propagation
    Q = np.zeros_like(weight, dtype=np.int8)
    for j in range(weight.shape[1]):
        q_j = quantize_column(weight[:, j], scale)
        error_j = weight[:, j] - q_j * scale
        # 다음 column들에 error 분산
        weight[:, j+1:] -= error_j[:, None] * Hinv[j, j+1:]
        Q[:, j] = q_j

    return GPTQResult(quantized=Q, scales=..., correction_mse=...)
```

**핵심**: column j를 quantize하면서 발생한 오차를 **이후 column에 보정**으로 분산 → 누적 오차 최소화.

---

## Layer-level Helpers

### `quantize_linear_layer`, `quantize_conv2d_layer`

```python
def quantize_linear_layer(linear, activations=None, *, per_channel=True) -> LayerQuantizeResult:
    weight = linear.weight   # (out, in)
    if per_channel:
        weight_q = quantize_tensor(weight, axis=0)
    else:
        weight_q = quantize_tensor(weight)

    bias_q = ... if linear.bias else None
    activation_q = quantize_activation(activations) if activations is not None else None

    return LayerQuantizeResult(weight=weight_q, bias=bias_q, activation=activation_q)
```

**편의 함수**: nn.Linear/Conv2d 인스턴스 + 입력 텐서를 받아서 weight/bias/activation을 한꺼번에 처리.

---

## 검증: `check_quantization_error`

```python
def check_quantization_error(original, quantized_result, threshold_pct=5.0):
    rel_error = quantized_result.mean_abs_error / np.abs(original).mean()
    return {
        "passes": rel_error * 100 < threshold_pct,
        "rel_error_pct": rel_error * 100,
        "max_abs_error": quantized_result.max_abs_error,
    }
```

→ 컴파일 시점에 quantization 손실이 너무 크면 경고.

---

## 핵심 개념 정리

| 알고리즘 | 정확도 | 비용 | 언제 |
|---|---|---|---|
| Per-tensor | 낮음 | 저렴 | smoke test, baseline |
| Per-channel | 중간 | 낮음 | weight (default) |
| SmoothQuant | 높음 | 중 (offline scale 계산) | transformer activation outlier |
| GPTQ | 가장 높음 | 비쌈 (Cholesky + iterative) | calibration data 있을 때 |

| 개념 | 의미 |
|---|---|
| **Symmetric quantization** | zero_point=0, scale = max/127 |
| **Per-channel axis** | Linear/Conv는 axis=0 (out 차원) |
| **α (alpha) in SmoothQuant** | activation/weight 부담 분배 (0.5 default) |
| **Hessian H** | 입력 통계 → 오차의 2차 영향 |

---

## 🔬 전문가 관점: 이 파일의 위치와 한계

### 산업급 PTQ pipeline과의 비교

| 단계 | 이 프로젝트 | 산업급 (NVIDIA TensorRT, Xilinx Brevitas) |
|---|---|---|
| 1. Calibration | (수동 입력) | 자동 (~100 샘플 forward) |
| 2. Range estimation | max-abs (clipping 없음) | percentile (99.9%), MSE-optimal, KL-divergence |
| 3. Weight quantize | per-channel (basic) + GPTQ | + ADAROUND, AdaQuant, BRECQ |
| 4. Activation quantize | per-tensor (basic) + SmoothQuant | + LSQ, QAT fine-tuning |
| 5. Validation | mean/max abs error | task-level metric (top-1, BLEU) |

→ 이 파일은 **PTQ의 4가지 algorithm 깊이**(per-tensor → per-channel → SmoothQuant → GPTQ)를 다 갖췄지만, **calibration data를 자동으로 사용하는 framework**가 빠져 있음. 향후 확장:
- `calibrate.py`: forward pass로 자동 통계 수집
- `qat.py`: Quantization-Aware Training 지원
- task-level evaluation harness

### INT8 → INT4 → INT2 trend

2024 trend는 **더 낮은 비트**:
- LLM weight: INT4 (GPTQ) standard, INT3/INT2도 active research
- Activation: INT8 still dominant (memory bandwidth critical)
- Hardware: NVIDIA H100 = FP8/INT8/INT4 모두 native

이 프로젝트 NPU는 INT8 only. INT4를 지원하려면 **하드웨어 변경 필요** (PE 안의 곱셈기 폭). **Quantization은 알고리즘+하드웨어 공동설계의 정점** — 두 영역을 모두 아는 엔지니어가 가장 가치 있음.

📖 참고: NVIDIA H100 white paper (2022), MIT 6.5940 Lec.6 "Quantization" (Phase 3 자료).

---

## 📖 더 깊이 공부하기

| 깊이 | 자료 | 어느 부분 |
|---|---|---|
| 🟢 입문 | Sze 교과서 Ch.7 (Phase 3) | Quantization 분류와 트레이드오프 |
| 🟢 입문 | MIT 6.5940 Lec.6 (Phase 3) | PTQ vs QAT, 산업 사례 |
| 🟡 중급 | Jacob CVPR'18 (Phase 5) | Symmetric/asymmetric, INT8 inference 정합성 |
| 🟡 중급 | Krishnamoorthi 2018 whitepaper | Per-channel의 정량 분석 |
| 🔴 심화 | SmoothQuant ICML'23 (Phase 5) | LLM activation outlier |
| 🔴 심화 | GPTQ ICLR'23 (Phase 5) | Hessian-guided quantization |
| 🔴 심화 | Optimal Brain Surgeon (LeCun NeurIPS'90) | GPTQ의 35년 전 origin |
| 🔴 심화 | ADAROUND ICML'20 (Phase 5) | Adaptive rounding 이론 |
| 🔴 심화 | Brevitas docs (Xilinx) | 산업급 PTQ/QAT framework |

---

## 연습 문제

1. `quantize_tensor(np.array([100.0, 0.5, -0.3]))` 결과의 scale은?
2. weight `(out=4, in=8)`에서 한 row의 max가 100, 다른 row들은 1이면 per-tensor vs per-channel `max_abs_error` 차이는?
3. SmoothQuant α=0인 경우의 의미는? α=1.0이면?
4. GPTQ가 단순 per-channel보다 항상 좋은가? 어떤 경우 비효율적?

---

## 다음 파일로 넘어가기

→ [47_memory_planner.md](47_memory_planner.md): `memory_planner.py` — 텐서 lifetime + SRAM in-place/ping-pong/evict
