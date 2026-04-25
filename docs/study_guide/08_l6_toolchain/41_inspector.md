# 41. `inspector.py` — 패키지 내용 검사 + 사람이 읽을 요약

> **파일 위치**: `l6/src/l6_toolchain/inspector.py` (240줄)
> **역할**: workload package에서 metadata를 추출해 dict/text로 요약, golden 출력 행렬 재구성
> **선수 지식**: [35_emitter.md](35_emitter.md), [36_validator.md](36_validator.md)
> **공장 비유**: 검수 결과 보고서 작성팀 — 봉투를 열어보고 "어떤 부품이 몇 개, 얼마짜리"를 사람 읽기 좋게 정리

---

## 이 파일이 중요한 이유

`compile_program`이 만들어낸 패키지가 무엇을 담고 있는지 빠르게 확인하는 도구입니다. 디버깅·디자인 검토·문서화 시 필수.

---

## 큰 그림: 3가지 함수

```
1. reconstruct_output_matrix(package_dir) → np.ndarray
   golden 출력을 (m, n) 행렬로 복원

2. inspect_package_summary(package_dir) → dict
   manifest + step별 메타데이터를 dict로 모음 (JSON-friendly)

3. format_performance_summary(summary) → str
   roofline + schedule 정보를 사람이 읽기 좋은 multi-line text로
```

---

## `reconstruct_output_matrix` (L11-55)

```python
def reconstruct_output_matrix(package_dir):
    manifest = read_json(package_path / "manifest.json")
    m, n = manifest["shape"]["m"], manifest["shape"]["n"]
    output = np.zeros((m, n), dtype=np.int32)

    if op_type == "gemm_tile":
        _apply_golden_payload(output, read_json(package_path / "golden.json"))
        return output

    if op_type == "gemm_tiled":
        for tile in tiles_index["tiles"]:
            tile_manifest = read_json(package_path / tile["dir"] / "manifest.json")
            golden_name = tile_manifest["files"]["golden"]
            _apply_golden_payload(output, read_json(package_path / tile["dir"] / golden_name))
        return output
```

**무엇**: 디스크에 흩어진 tile별 golden 파일들을 (m, n) 한 행렬로 복원.

**왜 필요**: replay 결과를 numpy로 비교하거나, jupyter에서 heatmap 그릴 때 한 행렬이 편함.

`_apply_golden_payload` 헬퍼: golden JSON의 `outputs` 리스트를 읽어 `output[row_index, col_base:col_base+len]` 위치에 값 쓰기.

---

## `inspect_package_summary` (L58-150 부근)

```python
def inspect_package_summary(package_dir):
    manifest = read_json_required(package_path / "manifest.json")
    summary = {
        "package_dir": str(package_path),
        "package_id": manifest.get("package_id"),
        "op_type": manifest.get("op_type"),
        "shape": manifest.get("shape"),
    }

    if "compiler" in manifest:
        summary["compiler"] = manifest["compiler"]

    if op_type == "program_sequence":
        # 각 step의 manifest 읽어 step별 정보 추가
        for step in steps_index["steps"]:
            step_manifest = read_json_required(...)
            inspected_step = {
                "step_id": ...,
                "name": ...,
                "lowered_kind": ...,
                "compiler": step_manifest.get("compiler"),  # tile_count, cycles, dma_cycles
                "runtime": step_manifest.get("runtime"),    # input/output summary
            }
            inspected_steps.append(inspected_step)
        summary["steps"] = inspected_steps

    return summary
```

**핵심**: program_sequence면 step별 information을 모아서 `summary["steps"]`로.

**`compiler` 블록**: emitter가 step manifest에 기록한 schedule_metadata (tile_count, estimated_cycles, dma_cycles, memory_fits, roofline...)

---

## `format_performance_summary` (L150-240)

```python
def format_performance_summary(summary):
    lines = ["===== L6 PACKAGE SUMMARY ====="]
    lines.append(f"package_id: {summary.get('package_id')}")
    lines.append(f"op_type: {summary.get('op_type')}")

    if compiler := summary.get("compiler"):
        lines.append(f"strategy: {compiler.get('strategy')}")
        lines.append(f"total_cycles: {compiler.get('cycles')}")

    if steps := summary.get("steps"):
        lines.append(f"\n----- {len(steps)} steps -----")
        for s in steps:
            lines.append(f"  [{s['step_id']:03d}] {s['name']}: {s['lowered_kind']}")
            if compiler := s.get("compiler"):
                lines.append(f"        cycles={compiler.get('cycles')}, dma={compiler.get('dma_cycles')}")
                if roofline := compiler.get("roofline"):
                    lines.append(f"        OI={roofline.get('operational_intensity'):.2f}, bottleneck={roofline.get('bottleneck')}")

    return "\n".join(lines)
```

→ multi-line text. CLI `python -m l6_toolchain inspect <path>`에서 사용.

---

## CLI 사용

```bash
python -m l6_toolchain inspect path/to/package
```

내부적으로:
1. `validate_package_report(path)` 호출 → 우선 schema 검증
2. `inspect_package_summary(path)` → dict
3. `format_performance_summary(summary)` → text 출력

---

## 핵심 개념 정리

| 개념 | 의미 | 어디서 |
|---|---|---|
| **Output 행렬 복원** | 흩어진 tile golden → (m, n) 행렬 | `reconstruct_output_matrix` |
| **Summary dict** | manifest 트리에서 핵심 정보 추출 | `inspect_package_summary` |
| **Performance text** | 사람이 읽을 multi-line 보고 | `format_performance_summary` |
| **CLI 진입점** | `python -m l6_toolchain inspect` | __main__.py가 사용 |

---

## 연습 문제

1. `gemm_tiled` 패키지를 `reconstruct_output_matrix`로 복원하면, 각 tile golden은 결과 행렬의 어느 영역에 들어가는가? (`row_index`, `col_base` 사용)
2. `inspect_package_summary`의 `summary["steps"]`에서 elementwise step (relu)는 `compiler` 필드가 있는가? 없는가? 왜?
3. `format_performance_summary`에 새 필드 (예: SRAM allocation 사용량)을 추가하려면 어디 어떻게 수정?

---

## 다음 파일로 넘어가기

→ [42_api.md](42_api.md): `api.py` — 외부 사용자가 import할 수 있는 모든 심볼의 단일 진입점
