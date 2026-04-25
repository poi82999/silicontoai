# 27. `common.py` — L6 공통 유틸리티

> **파일 위치**: `l6/src/l6_toolchain/common.py` (45줄)
> **역할**: L6 toolchain 전체에서 사용하는 작은 헬퍼 6개 (JSON 입출력, conv 출력 크기 계산, pair 정규화)
> **선수 지식**: Python 기본, JSON, `pathlib`
> **공장 비유**: 본사의 표준 양식/계산기 — 어디서든 같은 식으로 쓰는 작은 도구

---

## 이 파일이 중요한 이유

L6 모듈 16개가 모두 이 파일의 함수를 import 합니다. 한 줄짜리 함수들이지만 **전 toolchain에서 일관성을 보장**하는 핵심입니다. 예를 들어 모든 manifest JSON이 같은 들여쓰기로 직렬화되는 이유, 모든 conv 출력 shape 계산이 동일한 공식을 쓰는 이유가 여기 있습니다.

---

## 전체 코드 해설

### `conv_output_dim` (L8-9)

```python
def conv_output_dim(input_size, kernel_size, stride, padding, dilation):
    return ((input_size + 2 * padding - dilation * (kernel_size - 1) - 1) // stride) + 1
```

**무엇**: Conv2d의 출력 H/W 한 차원을 계산.

**왜 이 공식**: PyTorch `nn.Conv2d`의 공식과 정확히 일치 (`Conv2d.html` docstring 참조).
- `dilation * (kernel_size - 1) + 1` = 실효 커널 크기 (dilation 반영)
- `input_size + 2*padding` = 패딩 포함 입력 크기
- 위 둘의 차에 stride를 나누고 +1 = 슬라이딩 윈도우 개수

**예시**: `input=8, kernel=3, stride=2, padding=1, dilation=1` → `((8+2-2-1)//2)+1 = 4`. PyTorch와 동일.

**어디서 쓰나**: `ir.py`의 conv2d/maxpool/avgpool validation, `frontend.py`의 im2col output shape, `tracer.py` shape inference.

---

### `json_dumps` (L12-13)

```python
def json_dumps(payload):
    return json.dumps(payload, indent=2) + "\n"
```

**무엇**: dict → JSON 문자열, 들여쓰기 2 + 끝에 newline.

**왜**: 모든 manifest 파일을 **같은 포맷**으로 쓰기 위함. 끝의 newline은 git diff에서 마지막 줄 변경 표시("\\ No newline at end of file") 방지.

---

### `normalize_pair` (L16-21)

```python
def normalize_pair(value, *, name, error_cls=ValueError):
    if isinstance(value, int):
        return value, value
    if isinstance(value, tuple) and len(value) == 2 and all(isinstance(item, int) for item in value):
        return value
    raise error_cls(f"Expected {name} to be an int or a tuple of two ints.")
```

**무엇**: `2` → `(2, 2)`, `(3, 3)` → `(3, 3)`, 그 외에는 에러.

**왜**: PyTorch는 `kernel_size=3` 또는 `kernel_size=(3,3)` 둘 다 허용. 내부에선 항상 `(h, w)` 튜플로 통일해서 다루는 게 편함.

**핵심**: `*, name` — 키워드 전용 인자. 호출 시 `normalize_pair(2, name="kernel_size")`로 강제 → 에러 메시지가 친절해짐.

---

### `read_json`, `read_json_required` (L24-32)

```python
def read_json(path):
    return json.loads(Path(path).read_text(encoding="utf-8"))

def read_json_required(path):
    resolved = Path(path)
    if not resolved.exists():
        raise ValueError(f"Required package file is missing: {resolved}")
    return read_json(resolved)
```

**차이**: `read_json_required`는 파일이 없으면 명확한 에러 메시지를 던집니다. `validator.py`나 manifest 로딩 경로에서 사용.

**왜 `encoding="utf-8"` 명시**: Windows 기본 인코딩이 cp949일 수 있어 한글 주석 등이 깨질 수 있음.

---

### `write_json` (L35-36)

```python
def write_json(path, payload):
    Path(path).write_text(json_dumps(payload), encoding="utf-8")
```

**무엇**: `json_dumps`로 직렬화 + UTF-8로 쓰기.

**왜**: manifest, golden, replay package metadata가 전부 이걸로 작성됨 → asset drift 테스트가 작동하는 근거.

---

## 핵심 개념 정리

| 개념 | 의미 | 왜 중요 |
|---|---|---|
| **Pair 정규화** | int 또는 (h,w) → 항상 (h,w) | PyTorch API 호환 + 내부 일관성 |
| **JSON canonical 출력** | indent=2 + trailing newline | git diff 안정성 + asset drift 검증 가능 |
| **인코딩 명시** | UTF-8 강제 | Windows OS 환경에서도 동일 결과 |

---

## 연습 문제

1. `conv_output_dim(28, 5, 1, 2, 1)`은 무엇? (직접 계산하고 PyTorch로 검증)
2. `normalize_pair([3, 3], name="kernel_size")`는 어떤 결과? 왜 그런 결과가 나는지 코드를 보고 답해보세요.
3. 만약 `json_dumps`에서 `+ "\n"`을 빼면 어떤 문제가 생길까? (asset drift 테스트 관점)

---

## 다음 파일로 넘어가기

→ [28_ir.md](28_ir.md): `ir.py` — Program/OpNode/TensorValue 미니 IR 정의

`common.py`의 `conv_output_dim`과 `normalize_pair`가 `ir.py`의 conv2d validation에서 어떻게 쓰이는지 곧 보게 됩니다.
