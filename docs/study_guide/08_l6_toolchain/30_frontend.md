# 30. `frontend.py` — 단일 op 직접 처리 + im2col

> **파일 위치**: `l6/src/l6_toolchain/frontend.py` (466줄)
> **역할**: PyTorch `nn.Linear`/`nn.Conv2d`를 직접 받아서 GEMM 데이터로 변환. `tracer.py`와 다른 **저수준 진입점**.
> **선수 지식**: [29_tracer.md](29_tracer.md), im2col 개념, NCHW 레이아웃
> **공장 비유**: 부품 1개에 특화된 정밀 가공 부서 — 주문서 한 장(Linear/Conv 1개)을 받아 즉시 GEMM 행렬로 변환

---

## 이 파일이 중요한 이유

**im2col 알고리즘**의 표준 구현이 여기 있습니다. Conv2d → GEMM 변환의 핵심이라 NPU·GPU 모든 가속기에서 같은 방식을 씁니다. 또한 `frontend()`는 **legacy CLI** (`linear_export.py`)와 멀티 모듈에서 import되는 진입점입니다.

---

## 큰 그림

```
torch.nn.Linear ──┬──> linear_data_from_torch_linear ──> LinearData(act, weight, bias)
                  └──> linear_op_from_torch_linear   ──> LinearOp(m, k, n, modes)
                                                                  │
torch.nn.Conv2d ──┬──> conv_data_from_torch_conv2d ──> _im2col_nchw + _grouped_conv_weight_matrix
                  │                                                 │
                  └──> conv_from_torch_module ──────────> LinearData(activations=row-stacked patches)
                                                                    
CLI usage   ──────────> build_arg_parser + cli_frontend ────> JSON 파일에서 LinearOp/LinearData 로딩
```

---

## 핵심 자료구조 (L20-43)

### `LinearData`

```python
@dataclass(frozen=True)
class LinearData:
    activations: np.ndarray   # (M, K)
    weights: np.ndarray       # (K, N)
    bias: np.ndarray | None = None   # (N,) or None
```

**무엇**: GEMM 입력 한 묶음. `activations @ weights + bias` = 출력.

**중요한 컨벤션**: `weights`는 **(K, N)** — PyTorch의 `(out, in)`을 transpose한 형태. NPU 측은 `K` 차원으로 reduce하므로 이 형태가 자연스러움.

### `LinearOp`

```python
@dataclass(frozen=True)
class LinearOp:
    package_id: str = "linear16_l6_demo"
    m: int = TILE_SIZE   # 16
    k: int = TILE_SIZE
    n: int = TILE_SIZE
    activation_mode: str = "row_ramp"
    weight_mode: str = "constant_3"
```

**activation_mode / weight_mode**: 입력을 어떻게 채울지 선택.
- `"row_ramp"` / `"constant_3"`: 합성 데이터 (테스트용)
- `"from_tensor"` (= `EXPLICIT_TENSOR_MODE`): LinearData에서 가져온 실제 값 사용

`validate()` (L40-43): legacy single-tile 경로는 16×16×16만 허용 (PR 호환성 가드).

---

## `_to_numpy_array` (L46-62) — duck-typing 변환

```python
def _to_numpy_array(value):
    if isinstance(value, np.ndarray): return value
    detach = getattr(value, "detach", None)
    if callable(detach): value = detach()
    cpu = getattr(value, "cpu", None)
    if callable(cpu): value = cpu()
    numpy_fn = getattr(value, "numpy", None)
    if callable(numpy_fn): return np.asarray(numpy_fn())
    return np.asarray(value)
```

**왜 duck-typing**: `torch.Tensor`도 받고, `numpy.ndarray`도 받고, `list`도 받음. **torch를 import하지 않고도** torch tensor를 변환 가능 → 의존성 격리.

**디테일**: `.detach() → .cpu() → .numpy()` 순서는 PyTorch 표준 graceful 변환.

---

## `linear_data_from_torch_linear` (L77-106)

```python
def linear_data_from_torch_linear(torch_linear, input_tensor):
    input_array = _to_numpy_array(input_tensor)
    if input_array.ndim != 2:
        raise ValueError("Expected a 2D input tensor.")
    in_features = getattr(torch_linear, "in_features", None)
    out_features = getattr(torch_linear, "out_features", None)
    ...
    weight_array = _to_numpy_array(weight)
    if weight_array.shape != (out_features, in_features):
        raise ValueError("torch_linear.weight must have shape (out_features, in_features).")
    weights = weight_array.T  # ★ 핵심: (out, in) → (in, out)
    bias = ... # (out,) 또는 None
    return LinearData(activations=input_array, weights=weights, bias=bias)
```

**핵심 한 줄**: `weights = weight_array.T` — PyTorch convention과 GEMM convention의 **유일한 차이**.

---

## `_im2col_nchw` (L109-147) — Conv → GEMM 변환의 핵심

### 알고리즘

Conv2d는 본질적으로 sliding window 곱셈+합이지만, GEMM 가속기로 처리하려면 **출력 픽셀 1개당 입력 패치 1개를 행으로 펼쳐**서 큰 행렬을 만들어야 합니다.

```
Input (N, C, H, W) + Kernel (Kh, Kw)
            │
            ▼ im2col
(N * out_h * out_w,  C * Kh * Kw) 행렬
            │
            × Weight (C * Kh * Kw, OutChannels)
            ▼
(N * out_h * out_w, OutChannels)
            │
            ▼ reshape + transpose
(N, OutChannels, out_h, out_w)  ← Conv 출력
```

### 코드 분석

```python
def _im2col_nchw(input_array, *, kernel_h, kernel_w, stride_h, stride_w, pad_h, pad_w, dilation_h, dilation_w):
    batch, channels, height, width = input_array.shape
    padded = np.pad(input_array, ((0,0), (0,0), (pad_h,pad_h), (pad_w,pad_w)), mode="constant")  # ① 패딩

    out_h = conv_output_dim(height, kernel_h, stride_h, pad_h, dilation_h)
    out_w = conv_output_dim(width, kernel_w, stride_w, pad_w, dilation_w)
    patch_size = channels * kernel_h * kernel_w
    rows = np.zeros((batch * out_h * out_w, patch_size), dtype=input_array.dtype)  # ② 결과 행렬 할당

    row_index = 0
    for batch_index in range(batch):
        for out_row in range(out_h):
            input_row = out_row * stride_h
            for out_col in range(out_w):
                input_col = out_col * stride_w
                patch_values = []
                for channel_index in range(channels):
                    for kernel_row in range(kernel_h):
                        source_row = input_row + kernel_row * dilation_h
                        for kernel_col in range(kernel_w):
                            source_col = input_col + kernel_col * dilation_w
                            patch_values.append(padded[batch_index, channel_index, source_row, source_col])  # ③ 한 픽셀씩 수집
                rows[row_index] = np.asarray(patch_values, dtype=input_array.dtype)
                row_index += 1
    return rows
```

**왜 이렇게 명시적으로 (그리고 느리게) 짜는가**:
1. **golden 정확성**: 빠른 vectorized 버전은 미묘한 dilation/grouped 케이스에서 틀릴 수 있음. 명시적 loop는 한 픽셀씩 정확.
2. **이해 가능성**: 이 코드가 곧 **Conv2d 알고리즘 자체의 정의**.
3. NPU 검증용이라 속도는 부차적.

**dilation 처리**: `source_row = input_row + kernel_row * dilation_h` — kernel pixel 사이 간격을 dilation만큼 띄움.

---

## `conv_data_from_torch_conv2d` (L150-211)

전체 Conv 변환 파이프라인:

```
torch.nn.Conv2d
   │
   ├─ in_channels, out_channels, kernel_size, stride, padding, dilation, groups 추출
   ├─ weight (out, in/groups, kh, kw) 추출 + shape 검증
   │
   ├─ _im2col_nchw(input)         → activations: (N*out_h*out_w, C*kh*kw)
   ├─ _grouped_conv_weight_matrix → weights: (C*kh*kw, out_channels)
   │
   └─ LinearData(activations, weights, bias)
```

**중요**: groups 처리는 별도 함수 `_grouped_conv_weight_matrix` (이 파일 뒤쪽)가 weight 행렬을 group별로 zero-padding된 (in_channels*kh*kw, out_channels) 형태로 재구성. 그래야 group=1 case와 같은 GEMM 코드로 처리 가능.

---

## `frontend()` (L237-251) — 일반 진입점

```python
def frontend(torch_linear, input_tensor, *, package_id="torch_linear_export"):
    data = linear_data_from_torch_linear(torch_linear, input_tensor)
    op = linear_op_from_torch_linear(
        torch_linear,
        package_id=package_id,
        activation_mode=EXPLICIT_TENSOR_MODE,
        weight_mode=EXPLICIT_TENSOR_MODE,
        m=data.activations.shape[0],
    )
    return op, data
```

**무엇**: nn.Linear 인스턴스 + 입력 텐서 → `(LinearOp, LinearData)`.

**어디서 쓰나**: `linear_export.py` (legacy CLI), `tests/test_frontend.py`.

---

## `cli_frontend()` (L350-466) — CLI 진입점

`python -m l6_toolchain ...` 또는 `linear_export.py` 호출 시 실행.

**주요 기능**:
- `--input-json`: 활성화 데이터 JSON 파일에서 로딩
- `--weight-json`: weight를 JSON에서
- `--activation-mode {row_ramp, from_tensor}`: 합성 vs 실제 데이터
- `--m, --k, --n`: 차원 명시
- `--package-id`: 산출 디렉토리 이름

---

## tracer.py vs. frontend.py — 언제 무엇을?

| 상황 | 사용 |
|---|---|
| **전체 모델 (여러 op)** | `tracer.trace_torch_module` → 전체 graph를 IR로 |
| **단일 Linear/Conv2d**, JSON에서 weight 로딩 | `frontend.frontend()` 또는 CLI |
| 새 op 종류 추가 | `tracer.py` + `ir.py` |
| 새 데이터 source (예: ONNX) | 새 frontend 모듈 추가 |

→ `tracer.py`가 더 high-level, `frontend.py`가 더 low-level (그래서 legacy 경로에서 직접 사용).

---

## 핵심 개념 정리

| 개념 | 의미 | 어디서 |
|---|---|---|
| **im2col** | sliding window를 행으로 펼쳐 GEMM으로 만들기 | `_im2col_nchw` |
| **Weight transpose** | PyTorch (out,in) → GEMM (in,out) | `linear_data_from_torch_linear` L97 |
| **Grouped conv weight rearrangement** | groups를 zero-padded 행렬로 합치기 | `_grouped_conv_weight_matrix` |
| **Duck-typed tensor 변환** | torch import 없이 torch 텐서 다루기 | `_to_numpy_array` |
| **Activation/Weight modes** | 합성 데이터 vs 실제 텐서 선택 | `LinearOp.activation_mode` |

---

## 연습 문제

1. `linear_data_from_torch_linear`이 weight를 `.T` 하는 이유를 PyTorch와 NPU GEMM convention 차이로 설명해 보세요.
2. `_im2col_nchw`로 (1, 1, 4, 4) 입력 + 3×3 kernel + stride=1 + padding=0 + dilation=1을 변환하면 결과 행렬의 shape는?
3. `_im2col_nchw`의 4중첩 loop를 numpy vectorize로 다시 짤 수 있을까? 어떤 위험이 있을까?
4. `tracer.py`가 있는데 왜 `frontend.py`를 따로 두는가? (예: 모델 통째 로 안 받고 가중치만 JSON으로 받는 시나리오)

---

## 다음 파일로 넘어가기

→ [31_fusion.md](31_fusion.md): `fusion.py` — Linear+ReLU, Conv+BN+ReLU 같은 op 패턴을 하나로 합치는 최적화
