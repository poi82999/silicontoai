# 43. `linear_export.py` — Legacy Single-Tile CLI

> **파일 위치**: `l6/src/l6_toolchain/linear_export.py` (22줄)
> **역할**: legacy CLI — `python -m l6_toolchain.linear_export ...` 또는 `linear_export.py` 직접 실행
> **선수 지식**: [30_frontend.md](30_frontend.md), [42_api.md](42_api.md)
> **공장 비유**: 옛 주문 양식 — 새 양식(`l6_toolchain` CLI)이 나오기 전 단일 부품 주문에 쓰던 thin wrapper

---

## 이 파일이 중요한 이유

22줄짜리 thin wrapper지만 **L6 toolchain이 처음 만들어졌을 때의 진입점**입니다. 새로운 `l6_toolchain compile` CLI가 추가되기 전에는 이게 유일한 외부 인터페이스였고, 기존 스크립트와의 하위 호환을 위해 유지됩니다.

---

## 전체 코드

```python
from . import api as _api
from .api import *
from .emitter import export_linear_tile_package, export_linear_tiled_package
from .frontend import build_arg_parser, cli_frontend


def main() -> int:
    parser = build_arg_parser()
    args = parser.parse_args()

    spec, data = cli_frontend(args)
    output_path = export_linear_tiled_package(args.output, spec, data) if args.tiled else export_linear_tile_package(args.output, spec, data)
    print(f"Generated L6 study package at {output_path}")
    return 0


__all__ = [*_api.__all__, "main"]


if __name__ == "__main__":
    raise SystemExit(main())
```

---

## 동작 흐름

```
1. build_arg_parser() (frontend.py)
       │
       ▼ argparse Parser 생성
       │ --input-json, --weight-json, --m, --k, --n, --tiled, --output, --activation-mode, --weight-mode
       ▼
2. parse_args()
       │
       ▼
3. cli_frontend(args) (frontend.py)
       │
       ▼ JSON에서 LinearOp + LinearData 로딩
       ▼ (LinearOp(m,k,n,modes), LinearData(act, weight, bias))
       │
4. export_linear_tile_package OR export_linear_tiled_package (emitter.py)
       │
       ▼ output_dir/ 디렉토리에 manifest + activation/weight/golden 생성
       ▼
5. print으로 출력 위치 알림
```

---

## `__all__` 트릭 (L19)

```python
__all__ = [*_api.__all__, "main"]
```

**무엇**: api.py의 `__all__`을 그대로 펼치고 + `"main"` 추가.

**효과**: `from l6_toolchain.linear_export import *` 시 api.py의 모든 심볼 + main이 한꺼번에 import됨.

**왜**: 기존 사용자 코드가 `from linear_export import compile_program, OpNode` 같은 식으로 짜여 있을 수 있어 호환성 보존.

---

## CLI 사용 예시

```bash
# 합성 데이터로 16×16×16 single tile
python -m l6_toolchain.linear_export \
    --output ./out/synth_demo \
    --activation-mode row_ramp \
    --weight-mode constant_3 \
    --m 16 --k 16 --n 16

# JSON 가중치로 multi-tile
python -m l6_toolchain.linear_export \
    --output ./out/torch_demo \
    --tiled \
    --activation-mode from_tensor \
    --weight-mode from_tensor \
    --input-json activations.json \
    --weight-json weights.json \
    --m 32 --k 32 --n 32
```

---

## `linear_export.py` vs `__main__.py`

| 항목 | linear_export | __main__ (`l6_toolchain compile`) |
|---|---|---|
| 대상 | 단일 GEMM | 전체 nn.Module / Program |
| 입력 | --input-json, --weight-json | --program-json |
| Fusion | ✗ | ✓ (--no-fusion으로 끔) |
| Schedule strategy | default만 | --schedule-strategy {default, weight_reuse} |
| Roofline | ✗ | ✓ (--include-roofline-manifest) |
| Replay package | 없음 | ✓ (자동) |

→ `linear_export.py`는 **단일 GEMM 디버깅·테스트용 legacy 도구**. 새 코드는 `python -m l6_toolchain compile` 사용 권장.

---

## 핵심 개념 정리

| 개념 | 의미 |
|---|---|
| **Thin wrapper** | argparse + emitter 1줄 호출의 얇은 진입점 |
| **`__all__` re-export** | api의 심볼을 그대로 펼침 + main 추가 |
| **Legacy 호환 layer** | 기존 스크립트가 안 깨지게 유지 |

---

## 연습 문제

1. `linear_export.py`로 multi-tile package를 만들 수 있을까? 어떤 옵션 필요?
2. 새 `__main__.py`는 어떤 시나리오에서 더 강력한가? (힌트: nn.Module trace + fusion + roofline)
3. linear_export의 `__all__ = [*_api.__all__, "main"]`을 그냥 `__all__ = ["main"]`으로 바꾸면 어떤 사용자 코드가 깨질까?

---

## 다음 파일로 넘어가기

→ [44_main.md](44_main.md): `__main__.py` — `python -m l6_toolchain ...` 메인 CLI
