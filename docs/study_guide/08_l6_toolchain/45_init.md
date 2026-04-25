# 45. `__init__.py` — 패키지 초기화

> **파일 위치**: `l6/src/l6_toolchain/__init__.py` (1줄)
> **역할**: 패키지가 **의도적으로 비어있음**을 선언. namespace pollution 방지
> **선수 지식**: [42_api.md](42_api.md), Python `__init__.py`의 의미
> **공장 비유**: 본사 입구 — 들어가면 바로 안내데스크(api.py)로 가라는 표지판만 있음

---

## 이 파일이 중요한 이유

이 파일이 **의도적으로 거의 비어있다는 것**이 design choice입니다. Python에서 `__init__.py`는 패키지 import 시 실행되는 코드인데, 보통 모든 public 심볼을 자동 import하는 패턴이 흔합니다. 여기서는 그렇게 안 했습니다 — **사용자가 명시적으로 `from .api import ...`를 쓰도록 강제**.

---

## 전체 코드

```python
__all__ = ["api", "common", "compiler", "fusion", "linear_export", "frontend",
           "lowering", "emitter", "inspector", "validator", "ir", "replay_bridge",
           "scheduler", "tracer", "roofline", "roofline_profiles"]
```

→ 단 한 줄.

---

## `__all__`만 있고 import는 없음 — 왜?

### 비교: 흔한 패턴 (안 한 것)

```python
# __init__.py — 흔한 패턴
from .compiler import compile_program, CompilerOptions
from .ir import OpNode, Program, TensorValue
from .scheduler import reorder_tiles
# ... 60+ symbol auto-import
```

→ 사용자: `from l6_toolchain import compile_program` 가능.
→ 단점:
1. `import l6_toolchain` 한 줄에 모든 모듈이 로드 (시작 느림)
2. 한 모듈에서 import 에러나면 패키지 전체 import 깨짐 (예: torch가 없는 환경에서)
3. 어느 심볼이 어느 모듈에서 왔는지 흐릿해짐

### 우리가 한 패턴

```python
__all__ = ["api", "common", ...]   # 모듈 이름만 나열
```

→ 사용자: `from l6_toolchain.api import compile_program` (명시적)
→ 장점:
1. **lazy loading**: 안 쓰는 모듈은 import 안 됨 → torch 없는 환경에서도 비-tracer 경로 사용 가능
2. **명확한 출처**: import문만 봐도 어느 모듈에서 왔는지 보임
3. **API 안정성**: api.py가 facade → 내부 구조 자유롭게 리팩토링 가능

---

## `__all__`의 의미

`__all__`은 두 가지 용도:
1. `from package import *` 시 import할 심볼 명시
2. **이 패키지가 공개하는 것**의 문서적 선언

여기서는 **패키지의 sub-module 이름들**을 나열 → "이 16개 모듈이 공식 표면이다"

---

## 사용자 권장 패턴

```python
# ✓ 권장: api facade 사용
from l6_toolchain.api import (
    OpNode, Program, TensorValue,
    compile_program, CompilerOptions,
    trace_torch_module,
)

# ✓ 가능: 직접 모듈 import (advanced 사용자)
from l6_toolchain.compiler import compile_program
from l6_toolchain.ir import OpNode

# ✗ 작동 안 함: 패키지 자체에는 심볼이 없음
from l6_toolchain import compile_program   # ImportError
```

---

## 만약 사용자가 `from l6_toolchain import *`를 하면?

```python
from l6_toolchain import *
# → __all__의 모듈 이름들이 namespace에 들어옴
api, common, compiler, fusion, ...   # 모두 모듈 객체
# 사용 시:
api.compile_program(...)   # 또는
compiler.compile_program(...)
```

→ 일반 사용자는 이 패턴을 안 씁니다. 명시적 `from .api import ...` 권장.

---

## 핵심 개념 정리

| 개념 | 의미 |
|---|---|
| **빈 `__init__.py`** | 의도된 디자인: lazy loading + namespace 깨끗하게 |
| **`__all__`로 sub-module 명시** | 공식 노출 모듈 목록 |
| **Facade 패턴** | api.py를 거치도록 유도 → 내부 변경에 유연 |

---

## 연습 문제

1. `__init__.py`에 `from .compiler import compile_program`을 추가하면 어떤 장단점이 생기나?
2. torch가 없는 환경에서 `import l6_toolchain.compiler`는 동작? `import l6_toolchain.tracer`는?
3. 패키지에 새 모듈 `optimizer.py`를 추가했다고 가정. `__init__.py`의 `__all__`을 갱신해야 하나? 안 해도 되나? (실험 권장)

---

## Phase 8 일반 모듈 학습 완료!

19개 핵심 L6 모듈을 모두 마쳤습니다. 다음 batch는 Sprint-9에서 추가된 4개 신규 모듈입니다.

→ [46_quantize.md](46_quantize.md): `quantize.py` — INT8 양자화 (per-tensor, per-channel, SmoothQuant, GPTQ)
