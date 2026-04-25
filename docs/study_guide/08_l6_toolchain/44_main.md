# 44. `__main__.py` — Main CLI Entry Point

> **파일 위치**: `l6/src/l6_toolchain/__main__.py` (144줄)
> **역할**: `python -m l6_toolchain compile/inspect ...` 명령 처리
> **선수 지식**: [37_compiler.md](37_compiler.md), [41_inspector.md](41_inspector.md), `argparse` 모듈
> **공장 비유**: 정문 안내소 — 어떤 부서로 갈지 (`compile` or `inspect`) 묻고 안내

---

## 이 파일이 중요한 이유

L6 toolchain의 **현대적 CLI 진입점**. `linear_export.py` (legacy)와 달리 nn.Module trace, fusion, roofline, replay package 생성까지 한 명령으로 처리합니다. CI workflow와 사용자가 실제로 호출하는 명령.

---

## 큰 그림

```
python -m l6_toolchain ...
            │
            ▼ argparse (subcommand-based)
            │
   ┌────────┴────────┐
   ▼                 ▼
"compile"         "inspect"
   │                 │
   ▼                 ▼
compile_program   inspect_*_summary
   │                 │
   ▼                 ▼
print summary    print text or JSON
```

---

## CLI 구조: `_build_parser` (L14-65)

### Top-level

```python
parser = argparse.ArgumentParser(prog="l6_toolchain", description="L6 NPU toolchain compiler.")
sub = parser.add_subparsers(dest="command")
```

`dest="command"` → `args.command`에 "compile" 또는 "inspect"가 담김.

### `compile` subcommand (L22-59)

```python
compile_p.add_argument("--output-dir", required=True)
compile_p.add_argument("--package-id", default="l6_compile")
compile_p.add_argument("--input-shape", type=str)              # "1,4" → tuple
compile_p.add_argument("--schedule-strategy", default="weight_reuse",
                       choices=["default", "weight_reuse"])
compile_p.add_argument("--no-replay", action="store_true")
compile_p.add_argument("--no-schedule-metadata", action="store_true")
compile_p.add_argument("--include-roofline-manifest", action="store_true")
compile_p.add_argument("--roofline-profile", default="sim_default", choices=profile_names)
compile_p.add_argument("--roofline-dma-bandwidth-gbps", type=float)
compile_p.add_argument("--roofline-mac-throughput", type=int)
compile_p.add_argument("--roofline-clock-mhz", type=float)
compile_p.add_argument("--program-json", type=str)
compile_p.add_argument("--no-fusion", action="store_true")
```

→ `CompilerOptions`의 모든 필드를 CLI 플래그로 노출.

### `inspect` subcommand (L61-63)

```python
inspect_p.add_argument("path")
inspect_p.add_argument("--json", action="store_true")
```

→ 패키지 디렉토리 + JSON 모드 옵션.

---

## `_load_program_from_json` (L74-91) — Program JSON 직렬화 형식

```python
def _load_program_from_json(path):
    from .ir import OpNode, Program, TensorValue
    data = json.loads(Path(path).read_text(encoding="utf-8"))
    tensors = tuple(TensorValue(name=t["name"], shape=tuple(t["shape"]), dtype=t.get("dtype", "int8")) for t in data["tensors"])
    inputs = tuple(TensorValue(...) for t in data["inputs"])
    ops = tuple(OpNode(
        name=op["name"], kind=op["kind"],
        inputs=tuple(op["inputs"]), outputs=tuple(op["outputs"]),
        attrs=op.get("attrs", {}),
    ) for op in data["ops"])
    return Program(inputs=inputs, tensors=tensors, ops=ops, outputs=tuple(data["outputs"]))
```

### Program JSON 예시

```json
{
  "inputs": [{"name": "x", "shape": [16, 16], "dtype": "int8"}],
  "tensors": [
    {"name": "x", "shape": [16, 16], "dtype": "int8"},
    {"name": "y", "shape": [16, 16], "dtype": "int32"}
  ],
  "ops": [{
    "name": "fc", "kind": "linear",
    "inputs": ["x"], "outputs": ["y"],
    "attrs": {"in_features": 16, "out_features": 16,
              "weight": [[...]], "bias": [0,0,...]}
  }],
  "outputs": ["y"]
}
```

→ Python dataclass와 1:1 대응.

---

## `main` (L94-140) — 진입 함수

```python
def main(argv=None):
    parser = _build_parser()
    args = parser.parse_args(argv)

    if args.command is None:
        parser.print_help()
        sys.exit(1)

    if args.command == "compile":
        if args.program_json is None:
            parser.error("--program-json is required (nn.Module loading from CLI is not yet supported).")
        source = _load_program_from_json(args.program_json)
        options = CompilerOptions(...)   # 모든 CLI 플래그를 그대로 매핑
        result = compile_program(source, options=options)

        print(f"Compiled: {result.plan.package_id}")
        print(f"  Steps: {len(result.plan.step_plans)} ({result.plan.total_compute_steps} compute)")
        print(f"  Estimated cycles: {result.plan.total_estimated_cycles}")
        print(f"  Program package: {result.artifacts.program_package_dir}")
        print(f"  Replay packages: {len(result.artifacts.replay_package_dirs)}")
        return

    if args.command == "inspect":
        target = Path(args.path)
        if args.json:
            if (target / "compile_manifest.json").exists():
                print(json.dumps(inspect_compile_output_summary(target), indent=2))
            else:
                print(json.dumps(inspect_package_summary(target), indent=2))
        else:
            print(format_performance_summary(target))
        return
```

**핵심**:
1. `args.program_json` 없으면 친절한 에러 (현재 nn.Module CLI 로딩 미지원)
2. compile은 결과 metadata 5줄 print
3. inspect는 JSON 모드 / text 모드 분기

---

## CLI 사용 예시

### Compile

```bash
# 기본 (sim_default profile, weight_reuse, fusion ON)
python -m l6_toolchain compile \
    --program-json my_program.json \
    --output-dir ./out/my_test

# Roofline + PYNQ profile
python -m l6_toolchain compile \
    --program-json my_program.json \
    --output-dir ./out/pynq_analysis \
    --include-roofline-manifest \
    --roofline-profile pynq_z2_overlay

# Fusion 끄고 default scheduling
python -m l6_toolchain compile \
    --program-json my_program.json \
    --output-dir ./out/baseline \
    --no-fusion \
    --schedule-strategy default
```

### Inspect

```bash
# Text summary
python -m l6_toolchain inspect ./out/my_test

# JSON output (스크립트 친화)
python -m l6_toolchain inspect ./out/my_test --json
```

---

## 어디서 호출되나

| 호출자 | 명령 |
|---|---|
| `tests/test_compiler.py` | `subprocess.run(["python", "-m", "l6_toolchain", "compile", ...])` |
| `regenerate_fixed_replay_assets.py` | API 직접 호출 (CLI 우회) |
| `l6-toolchain.yml` (CI) | pytest로 import 테스트 |
| 사용자 shell | 직접 호출 |

---

## 핵심 개념 정리

| 개념 | 의미 |
|---|---|
| **`__main__.py`** | `python -m <pkg>`로 호출 시 실행되는 파일 |
| **Subcommand** | argparse subparsers로 verb 분기 |
| **Program JSON 직렬화** | dataclass와 1:1 매핑되는 minimal JSON 형식 |
| **Friendly errors** | `parser.error(...)` 사용 (sys.exit + usage 출력) |

---

## 연습 문제

1. `python -m l6_toolchain compile`만 (인자 없이) 호출하면? `python -m l6_toolchain` (subcommand 없이)는?
2. nn.Module을 CLI로 trace하려면 어떤 함수가 추가되어야 할까? (힌트: `--module-import path:Cls --input-shape 1,3,32,32`)
3. `inspect --json`이 `compile_manifest.json` 존재 여부로 분기하는 이유는? compile 결과 디렉토리 vs 단일 패키지 디렉토리 차이는?
4. CI에서 `l6_toolchain compile`을 직접 호출 안 하고 pytest로 import 테스트만 하는 이유는?

---

## 다음 파일로 넘어가기

→ [45_init.md](45_init.md): `__init__.py` — 패키지 초기화 (의외로 거의 빈 파일)
