# 36. `validator.py` — Workload Package 검증

> **파일 위치**: `l6/src/l6_toolchain/validator.py` (416줄)
> **역할**: emitter가 만든 디스크상의 workload package가 schema 규약을 따르는지 검증
> **선수 지식**: [35_emitter.md](35_emitter.md), JSON schema 개념
> **공장 비유**: 품질관리 (QC) — 출하 직전 봉투 안 내용물이 송장과 일치하는지 검수

---

## 이 파일이 중요한 이유

emitter가 만들고, replay loader가 읽는 그 사이의 **계약 검증** 레이어입니다. 잘못된 manifest나 누락된 파일을 **하드웨어 시뮬레이션 시작 전**에 잡아내서 디버깅 시간을 절약합니다.

---

## 큰 그림: 4종 op_type 검증

```
manifest.json의 "op_type":
  - "gemm_tile"           → single 16×16×16
  - "gemm_tiled"          → multi-tile GEMM
  - "program_sequence"    → 다단계 프로그램
  - "program_step"        → program_sequence 내부의 한 step

각 타입마다 다른 schema → 다른 validator 함수
```

---

## 자료구조

### `ValidationIssue` (L9-13)

```python
@dataclass(frozen=True)
class ValidationIssue:
    code: str            # 머신 readable 카테고리
    message: str         # 사람 readable 설명
    path: str | None = None   # 어느 파일/필드
```

`code` 예시: `"missing_manifest"`, `"root_manifest"`, `"shape_mismatch"`, `"tile_count_mismatch"`.

### `ValidationReport` (L16-33)

```python
@dataclass(frozen=True)
class ValidationReport:
    package_dir: str
    is_valid: bool
    op_type: str | None
    shape: dict[str, int] | None
    tile_count: int | None
    issues: tuple[ValidationIssue, ...]
```

**왜 issue 리스트**: 여러 문제를 한 번에 모아서 보여주기 (한 개씩 잡고 종료하지 않음).

---

## Top-level: `validate_package_report` (L36-110 부근)

```python
def validate_package_report(package_dir):
    manifest_path = package_path / "manifest.json"
    try:
        manifest = read_json_required(manifest_path)
    except ValueError as exc:
        # manifest 자체가 없으면 즉시 실패
        return ValidationReport(is_valid=False, ...)

    # shape, op_type, tile_count 추출 (없으면 None)
    ...

    # op_type별 분기
    if op_type == "gemm_tile":
        _validate_single_tile_package(package_path, manifest, shape)
    elif op_type == "gemm_tiled":
        _validate_tiled_package(...)
    elif op_type == "program_sequence":
        _validate_program_sequence_package(...)
    elif op_type == "program_step":
        _validate_program_step_package(...)
    else:
        issues.append(ValidationIssue(code="unknown_op_type", ...))
```

**패턴**: try/except로 잡고 `ValidationIssue`로 모음 → 하나의 문제로 검증 전체가 멈추지 않음.

---

## 4종 검증 함수 (L130 이후)

### `_validate_root_manifest` 

manifest의 필수 필드 확인:
- `manifest_version` 존재
- `op_type` ∈ {gemm_tile, gemm_tiled, program_sequence, program_step}
- `shape` (gemm 계열) 또는 `program` (program_sequence)
- `files` 또는 `step_count`

→ 빠진 필드, 잘못된 타입 발견 시 `ValueError`.

### `_validate_single_tile_package`

`gemm_tile` (16×16×16) 전용:
- shape == {16, 16, 16}
- `activation_input.json`, `weight_input.json`, `golden_output.json` 존재
- 각 파일의 row 개수가 m=16
- golden values 개수가 16개

### `_validate_tiled_package`

`gemm_tiled` (multi-tile):
- `tiles/` 디렉토리 존재
- 디렉토리 안 tile 수가 manifest의 `tile_count`와 일치
- 각 tile에 activation/weight/golden 존재
- (M, K, N)으로부터 계산한 tile 수와 일치 (`m_tile_count * n_tile_count * k_tile_count`)

### `_validate_program_sequence_package`

multi-step 프로그램:
- `steps.json` 존재 + `step_count`와 일치
- 각 step 디렉토리(`steps/step_NNN_<name>/`) 존재
- 각 step의 manifest가 `program_step` op_type
- `inputs`/`outputs`가 program 전체 tensor 그래프와 정합

### `_validate_program_step_package`

program_sequence 안의 한 step:
- `manifest_version`, `step_id`, `name`, `lowered_kind` 필수
- `lowered_kind` ∈ {gemm, conv2d_im2col_gemm, elementwise_post_op, shape_only}
- `compute_package` 폴더 (gemm/conv 계열만)

---

## 보조 함수 패턴

```python
def _require_int_field(payload, name):
    value = payload.get(name)
    if not isinstance(value, int):
        raise ValueError(f"Manifest field '{name}' must be an integer.")
    return value

def _require_dict_field(payload, name):
    value = payload.get(name)
    if not isinstance(value, dict):
        raise ValueError(f"Manifest field '{name}' must be an object.")
    return value
```

→ 한 줄짜리 type assertion. JSON 디코딩 결과는 모든 게 `Any`이므로 명시적 검사 필요.

---

## `validate_package` (top-level convenience) — L390 이후

```python
def validate_package(package_dir):
    report = validate_package_report(package_dir)
    if not report.is_valid:
        raise ValueError(f"Package validation failed: {report.issues}")
    return report
```

**차이**: `validate_package_report`는 항상 report 반환, `validate_package`는 invalid 시 raise.

→ CLI/테스트 시점에서는 `validate_package_report` (자세한 진단), 컴파일러 내부 invariant 검사 시는 `validate_package` (즉시 실패).

---

## CLI/테스트에서의 사용

```bash
# CLI
python -m l6_toolchain inspect path/to/package
# → validator를 내부에서 호출, ValidationReport를 보여줌
```

```python
# tests/test_package_tools.py
def test_validates_emitted_package(tmp_path):
    spec = LinearOp(m=16, k=16, n=16)
    export_linear_tile_package(tmp_path / "pkg", spec)
    report = validate_package_report(tmp_path / "pkg")
    assert report.is_valid
```

---

## emitter ↔ validator: 데이터 계약

| emitter가 만드는 것 | validator가 검사하는 것 |
|---|---|
| `manifest.json` 존재 | ✓ 필수 필드 + 타입 |
| `activation_input.json` (m rows) | ✓ row 개수 == m |
| `weight_input.json` (n cols) | ✓ col 개수 == n |
| `golden_output.json` (m rows × n cols int32) | ✓ shape 일치 |
| `tiles/tile_K/` 디렉토리들 | ✓ tile_count 일치 |
| `steps/step_NNN_<name>/manifest.json` | ✓ op_type=program_step + 필수 필드 |

→ 한쪽이 schema를 어기면 다른 쪽이 즉시 잡음. **CI에서 asset drift 테스트가 이걸 활용**.

---

## 핵심 개념 정리

| 개념 | 의미 | 어디서 |
|---|---|---|
| **Issue list 패턴** | 여러 문제를 모음, 첫 에러로 멈추지 않음 | `validate_package_report` |
| **op_type 분기** | 4종 패키지마다 다른 검증기 | top-level dispatch |
| **Schema 검증** | 타입/필수 필드/shape 일관성 | `_require_*_field`, op-specific validators |
| **Report vs raise API** | 진단용 / 즉시 실패용 | `validate_package_report` vs `validate_package` |

---

## 연습 문제

1. emitter가 `weight_input.json`을 안 만들고 `manifest.json`만 출력했다면 validator가 어떤 `ValidationIssue.code`를 낼까?
2. tiled package에서 manifest의 `tile_count`가 실제 디렉토리 수와 다르면 어떤 에러? (직접 케이스를 만들어 확인)
3. program_step의 `lowered_kind`가 새로 추가된 카테고리(예: `"reduce"`)면 validator는 어떻게 동작? 어디를 수정해야 새 카테고리 지원?
4. validator가 fail하는데 emitter는 동작했다면 — 어디에 버그가 있을 가능성? (compiler? emitter? validator schema 정의?)

---

## 다음 파일로 넘어가기

→ [37_compiler.md](37_compiler.md): `compiler.py` — fusion → lowering → scheduler → emitter → validator를 하나의 entry point로 묶는 최상위 함수
