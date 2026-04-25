# 29. `tracer.py` — PyTorch → IR 자동 변환

> **파일 위치**: `l6/src/l6_toolchain/tracer.py` (284줄)
> **역할**: PyTorch `nn.Module` → `Program` (mini IR) 자동 변환. **torch.fx symbolic_trace** 기반
> **선수 지식**: [28_ir.md](28_ir.md), PyTorch `nn.Module`, torch.fx 기초
> **공장 비유**: 주문 접수처 — 고객이 그린 도면(PyTorch model)을 본사 표준 양식(Program IR)으로 옮겨 적기

---

## 이 파일이 중요한 이유

L6 컴파일러의 **유일한 PyTorch 의존 진입점**입니다. 이 파일을 통과한 뒤에는 모든 코드가 **순수 Python + numpy**로 동작합니다 (그래서 CI에서 torch 없이 대부분의 테스트가 돌아감).

---

## 큰 그림

```
PyTorch nn.Module
       │
       ▼
torch.fx.symbolic_trace
       │
       ▼ (graph of fx.Node)
3가지 노드 분기:
  - call_module    → nn.Linear, nn.Conv2d, nn.ReLU, ... (12종)
  - call_function  → torch.add, torch.relu, F.gelu, ... 
  - call_method    → x.flatten(), x + y, x * y
       │
       ▼
OpNode 생성 + 실제 forward 실행으로 shape inference
       │
       ▼
Program(inputs, tensors, ops, outputs)
```

---

## 핵심 함수: `trace_torch_module` (L13-216)

### 입력/출력

```python
def trace_torch_module(model: Any, input_shape: tuple[int, ...]) -> Program:
```

- `model`: `nn.Module` 인스턴스 (이미 weight 로드됨)
- `input_shape`: 더미 입력 shape, 예: `(1, 3, 32, 32)`
- 반환: `ir.Program`

### 1단계: torch.fx로 graph 추출 (L21-25)

```python
import torch
import torch.fx
import torch.nn as nn

traced = torch.fx.symbolic_trace(model)
graph = traced.graph
```

**무엇**: `symbolic_trace`는 `model.forward`를 한 번 실행하면서 모든 op를 graph로 기록.

**한계**: Python `if`/`for`는 trace 시점의 값으로 unroll됨 → control flow가 데이터에 의존하면 trace 안 됨. NPU workload는 보통 정적 그래프라 OK.

### 2단계: dummy input으로 shape inference (L30-32)

```python
model.eval()
dummy = torch.zeros(input_shape, dtype=torch.float32)
env: dict[str, torch.Tensor] = {}
```

**왜 dummy 실행**: graph에는 op 종류는 있지만 **shape은 없음**. 실제로 한 번 forward를 해야 각 텐서의 shape를 알 수 있음.

`env`: tensor 이름 → 실제 torch tensor 매핑 — 다음 노드의 입력을 찾을 때 사용.

### 3단계: graph 노드 순회 (L54-209)

```python
for node in graph.nodes:
    if node.op == "placeholder":      # 입력
        ...
    elif node.op == "call_module":    # nn.Linear 등
        ...
    elif node.op == "call_function":  # torch.add 등
        ...
    elif node.op == "call_method":    # x.flatten() 등
        ...
    elif node.op == "output":         # return 값
        ...
```

---

## call_module 분기 (L61-149) — 가장 중요

```python
elif node.op == "call_module":
    target_module = traced.get_submodule(str(node.target))
    input_names = tuple(...)
    output_name = _tensor_name(node)

    input_tensors = [env[n] for n in input_names]
    with torch.no_grad():
        out = target_module(*input_tensors)   # 실제 forward
    env[output_name] = out

    if isinstance(target_module, nn.Linear):
        ...
    elif isinstance(target_module, nn.Conv2d):
        ...
    # ...12개 분기
    else:
        raise ValueError(f"Unsupported module type ...")
```

**핵심 패턴**: 각 `nn.Module` 타입마다:
1. `out = module(input)` 실행 → 실제 shape 얻기
2. `_record_tensor(output_name, out.shape, dtype)` → IR에 등록
3. `module`의 hyperparameter (in_features, kernel_size, ...)와 weight를 `attrs`에 추출
4. `OpNode(kind=..., inputs=..., outputs=..., attrs=...)` 생성

**12개 nn.Module 분기**:
| nn.Module | OpNode kind | 라인 |
|---|---|---|
| `nn.Linear` | `linear` | L71-81 |
| `nn.Conv2d` | `conv2d` | L83-98 |
| `nn.ReLU` | `relu` | L100-102 |
| `nn.BatchNorm2d` | `batch_norm` | L104-115 |
| `nn.MaxPool2d` | `max_pool2d` | L117-124 |
| `nn.AdaptiveAvgPool2d` | `adaptive_avg_pool2d` | L126-132 |
| `nn.Flatten` | `flatten` | L134-137 |
| `nn.AvgPool2d` | `avg_pool2d` | L139-146 |
| `nn.Sigmoid` | `sigmoid` | L148-150 |
| `nn.GELU` | `gelu` | L152-154 |

### Linear 분기 자세히 보기 (L71-81)

```python
if isinstance(target_module, nn.Linear):
    out_dtype = "int32"
    _record_tensor(output_name, tuple(out.shape), out_dtype)
    attrs: dict[str, Any] = {
        "in_features": target_module.in_features,
        "out_features": target_module.out_features,
        "weight": _extract_params(target_module, "weight"),
    }
    if target_module.bias is not None:
        attrs["bias"] = _extract_params(target_module, "bias")
    ops.append(OpNode(name=output_name, kind="linear", ...))
```

**디테일**:
- `out_dtype = "int32"`: linear의 출력은 INT8×INT8 곱이 누적된 결과 → INT32
- `_extract_params`: `param.detach().cpu().numpy().tolist()` — **JSON serializable**한 리스트로 변환
- `bias=None`이면 attrs에 키 자체를 넣지 않음 → emitter가 bias 유무를 자동 판단

### Conv2d 분기 (L83-98)

```python
elif isinstance(target_module, nn.Conv2d):
    out_dtype = "int32"
    _record_tensor(output_name, tuple(out.shape), out_dtype)
    attrs = {
        "in_channels": target_module.in_channels,
        "out_channels": target_module.out_channels,
        "kernel_size": target_module.kernel_size,
        "stride": target_module.stride,
        "padding": target_module.padding,
        "dilation": target_module.dilation,
        "groups": target_module.groups,
        "weight": _extract_params(target_module, "weight"),
    }
```

**중요**: `groups`까지 그대로 가져옴 → depthwise/grouped conv 지원.

---

## call_function 분기 (L143-189)

graph에는 `torch.add`, `torch.relu`, `F.gelu` 같은 **함수 호출**도 있음.

```python
elif node.op == "call_function":
    if node.target is torch.add or node.target is _OPERATOR_ADD:
        ...   # add OpNode
    elif node.target is torch.mul or node.target is _OPERATOR_MUL:
        ...   # mul OpNode
    elif node.target is torch.sigmoid or node.target is torch.nn.functional.sigmoid:
        ...
    elif node.target is torch.nn.functional.gelu:
        ...
    elif node.target is torch.nn.functional.avg_pool2d:
        ...
    elif node.target is torch.flatten:
        ...
    elif node.target is torch.relu or node.target is torch.nn.functional.relu:
        ...
    elif node.target is torch.nn.functional.adaptive_avg_pool2d:
        ...
```

**주의**: `node.target is operator.add`로 비교 — 파이썬 `+` 연산자가 trace되면 `operator.add`로 잡힘.

**왜 함수도 다뤄야 하는가**: 사용자가 `nn.ReLU` 모듈을 안 쓰고 `F.relu(x)`나 `torch.relu(x)`를 직접 쓸 수 있음. 두 경로 모두 같은 `OpNode(kind="relu")`로 변환.

---

## call_method 분기 (L191-217)

`x + y`, `x.flatten(1)`, `x * y` 같은 **메서드 호출**.

```python
elif node.op == "call_method":
    if node.target == "flatten":
        ...
    elif node.target == "add" or node.target == "__add__":
        ...   # x + y
    elif node.target == "mul" or node.target == "__mul__":
        ...   # x * y
    elif node.target == "sigmoid":
        ...
```

**3가지 add 경로 통합**:
- `nn.functional.add` → call_function
- `torch.add` → call_function
- `x + y` → call_method `__add__`

→ 모두 `OpNode(kind="add")`로 정규화. **사용자 코딩 스타일과 무관하게 같은 IR**.

---

## 헬퍼 함수들

### `_tensor_name` (L40-41)

```python
def _tensor_name(node: torch.fx.Node) -> str:
    return str(node.name)
```

**무엇**: torch.fx Node의 자동 생성 이름 (`linear_1`, `add`, `relu_2` 등) 사용.

### `_record_tensor` (L43-47)

```python
def _record_tensor(name, shape, dtype="int8"):
    if name not in tensor_shapes:
        tensor_shapes[name] = shape
        tensor_dtypes[name] = dtype
        tensors.append(TensorValue(name=name, shape=shape, dtype=dtype))
```

**왜 `if name not in`**: 같은 이름을 두 번 등록하면 안 됨 (Program의 SSA 보장).

### `_extract_params` (L49-53)

```python
def _extract_params(module, param_name):
    param = getattr(module, param_name, None)
    if param is None:
        return []
    return param.detach().cpu().numpy().tolist()
```

**왜 `.tolist()`**: numpy array는 JSON으로 직렬화 안 됨 → list로 변환해야 manifest에 저장 가능.

---

## dtype 결정 로직

```python
# linear, conv2d → int32 (곱셈 결과)
out_dtype = "int32"

# 그 외 (relu, batch_norm, pool, ...) → 입력의 dtype 그대로
_record_tensor(output_name, tuple(out.shape), tensor_dtypes.get(input_names[0], "int8"))
```

**왜 이런 규칙**: GEMM/Conv 결과는 INT8×INT8을 32비트에 누적해야 overflow가 안 남. Pointwise op (relu, add)는 입력 타입 유지.

---

## 핵심 개념 정리

| 개념 | 의미 | 어디서 |
|---|---|---|
| **symbolic_trace** | `forward`를 한 번 실행하며 op graph 기록 | torch.fx |
| **Shape inference via dummy run** | 실제 forward로 각 텐서 shape 결정 | env dict |
| **3가지 노드 분기** | `call_module`/`call_function`/`call_method`를 모두 같은 OpNode로 통합 | L61-217 |
| **JSON serializable params** | weight를 `tolist()`로 변환 → manifest에 저장 | `_extract_params` |
| **dtype propagation rule** | gemm/conv → int32, 그 외 → 입력 dtype | `_record_tensor` 호출 |

---

## 연습 문제

1. `nn.Sequential(nn.Linear(8, 16), nn.ReLU(), nn.Linear(16, 4))`을 trace하면 `program.ops`의 길이는? 각 op의 `kind`는?
2. `class M(nn.Module): def forward(self, x): return x + self.fc(x)` — 이 모델의 add는 `call_function`으로 잡힐까 `call_method`로 잡힐까? (실험으로 확인)
3. 새 op (예: `nn.LeakyReLU`)를 추가하려면 `tracer.py`의 어디를 수정해야 할까? `ir.py`도 같이 수정해야 한다면 어디를?
4. `symbolic_trace`가 trace 못하는 PyTorch 패턴 1가지를 떠올려보세요. (힌트: 데이터 의존 control flow)

---

## 다음 파일로 넘어가기

→ [30_frontend.md](30_frontend.md): `frontend.py` — PyTorch 모듈을 직접 다루는 더 낮은 레벨의 API (Linear/Conv2d 손으로 받기, im2col 구현)
