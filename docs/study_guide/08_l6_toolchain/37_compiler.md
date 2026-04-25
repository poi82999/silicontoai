# 37. `compiler.py` — End-to-end 컴파일 파이프라인

> **파일 위치**: `l6/src/l6_toolchain/compiler.py` (481줄)
> **역할**: fusion → lowering → scheduler → emitter → replay_bridge를 **하나의 함수**로 묶음
> **선수 지식**: [28_ir.md](28_ir.md) ~ [36_validator.md](36_validator.md) 모두
> **공장 비유**: 본사 설계부 — 주문(Program) 받으면 모든 부서를 호출해서 출하 가능 상태까지 책임

---

## 이 파일이 중요한 이유

L6 toolchain의 **유일한 사용자 진입점**입니다. `compile_program(program, options)` 한 번 호출로 패키지 디렉토리가 디스크에 생기고, 선택적으로 RTL 시뮬까지 자동 실행됩니다. CLI (`python -m l6_toolchain compile`)도 결국 이 함수 호출.

---

## 큰 그림: 4-layer 파이프라인

```
compile_program(program, options)
        │
        ▼ ① IMPORT — 입력 정규화 + fusion
        │   (apply_all_fusions if enabled)
        ▼
        ▼ ② PLAN — 비용/타일링/스케줄 분석
        │   (lower_program_to_steps + plan_linear_tiles + reorder_tiles + estimate_schedule_cost)
        ▼
        ▼ ③ MATERIALIZE — 디스크에 출력
        │   (export_program_package + export_replay_packages)
        ▼
        ▼ ④ REPORT — manifest에 schedule metadata 기록
        │   (build_compile_manifest)
        ▼
   CompilerResult(plan, artifacts, smoke)
```

---

## 자료구조 (L30-104)

### `CompilerOptions` (L30-50)

```python
@dataclass(frozen=True)
class CompilerOptions:
    package_id: str = "l6_compile"
    output_dir: str | Path = "l6/generated/l6_compile"
    tiled: bool = True
    replay_enabled: bool = True
    schedule_strategy: str = "weight_reuse"
    enable_fusion: bool = True
    roofline_profile: str = "sim_default"
    include_roofline_in_manifest: bool = False
    tensor_data: dict[str, Any] | None = field(default=None, hash=False)
    ...
```

**핵심 옵션**:
- `tiled=True`: 다중 타일 (큰 GEMM)
- `schedule_strategy="weight_reuse"`: scheduler가 N-major 재배열 적용
- `enable_fusion=True`: BN folding + Conv/Linear+ReLU 합치기
- `tensor_data`: 실제 입력 텐서 (없으면 합성 데이터)

**`hash=False`**: `tensor_data`는 dict (mutable, hashable 아님) → frozen dataclass에서 hash 제외.

### `StepCompilePlan` (L53-70)

각 step (= IR의 한 op)에 대한 컴파일 계획:
- 어떤 lowered_kind로 변환됐는지
- tile 개수, 예상 사이클
- DMA schedule 객체
- replay package 개수

### `ProgramCompilePlan` (L73-86)

전체 Program의 step_plans + 합계 (`total_estimated_cycles`, `total_compute_steps`).

### `CompilerArtifacts` (L88-94)

디스크에 만들어진 파일들의 경로.

### `CompilerResult` (L97-104)

```python
@dataclass(frozen=True)
class CompilerResult:
    plan: ProgramCompilePlan
    artifacts: CompilerArtifacts
    smoke: SystemReplaySmokeResult | None = None
```

→ 사용자에게 반환되는 단일 객체.

---

## 핵심 함수: `compile_program` (L300 부근)

```python
def compile_program(program, *, options=None):
    if options is None:
        options = CompilerOptions()

    validate_program(program)

    # Stage 1: IMPORT
    if options.enable_fusion:
        fusion_result = apply_all_fusions(program, tensor_data=options.tensor_data)
        program = fusion_result.program

    # Stage 2: PLAN
    plan = create_compile_plan(program, options=options)

    # Stage 3: MATERIALIZE
    artifacts = _materialize_packages(program, plan, options)

    # Stage 4: REPORT
    if options.run_replay_smoke and options.replay_enabled:
        smoke = export_and_run_system_replay_smoke(...)
    else:
        smoke = None

    return CompilerResult(plan=plan, artifacts=artifacts, smoke=smoke)
```

---

## `create_compile_plan` (L150 부근) — Stage 2 자세히

```python
def create_compile_plan(program, *, options):
    lowered_steps = lower_program_to_steps(program)   # ir.py
    step_plans = []

    for step_id, step in enumerate(lowered_steps):
        is_compute = step.lowered_kind in {"gemm", "conv2d_im2col_gemm"}

        if not is_compute:
            # elementwise/shape_only step → tile 없음, 사이클 0
            step_plans.append(StepCompilePlan(
                step_id=step_id, ..., tile_count=0, estimated_cycles=0,
            ))
            continue

        # GEMM/Conv: tile 생성 + 재배열 + 비용 추정
        tiles = plan_linear_tiles(_GemmShape(m=step.attrs["m"], k=..., n=...))
        ordered = reorder_tiles(tiles, strategy=options.schedule_strategy)
        cost = estimate_schedule_cost(ordered, strategy=options.schedule_strategy)
        memory = analyze_memory_usage(ordered)
        dma = build_dma_schedule(ordered, double_buffer=True)

        step_plans.append(StepCompilePlan(
            step_id=step_id,
            tile_count=len(ordered),
            estimated_cycles=cost.total_cycles,
            estimated_dma_cycles=cost.total_dma_cycles,
            memory_fits=memory.fits_in_budget,
            ordered_tiles=tuple(ordered),
            dma_schedule=dma,
            replay_package_count=...,
        ))

    return ProgramCompilePlan(...)
```

**핵심**:
1. lowered_kind으로 compute step만 분리 (elementwise는 hardware 별도 처리)
2. compute step은 tile + reorder + cost + memory + DMA 한꺼번에 분석
3. 모든 step의 사이클 합산 → total_estimated_cycles

---

## `_materialize_packages` (L260 부근) — Stage 3

```python
def _materialize_packages(program, plan, options):
    output_dir = Path(options.output_dir)

    # Schedule metadata를 step별로 정리
    schedule_metadata = {
        sp.step_id: {
            "tile_order": [...],
            "strategy": sp.schedule_strategy,
            "cycles": sp.estimated_cycles,
            "dma_cycles": sp.estimated_dma_cycles,
            "memory_fits": sp.memory_fits,
        }
        for sp in plan.step_plans if sp.compute_required
    }

    if options.include_roofline_in_manifest:
        schedule_metadata = _enrich_with_roofline(schedule_metadata, ...)

    # 1) ir.py가 program package 디렉토리 생성
    package_dir = export_program_package(
        output_dir, program,
        package_id=options.package_id,
        tiled=options.tiled,
        tensor_data=options.tensor_data,
        schedule_metadata=schedule_metadata,
    )

    # 2) replay_bridge가 RTL에 보낼 system replay packages 생성
    replay_packages = []
    if options.replay_enabled:
        replay_dir = options.replay_output_dir or (output_dir / "replay")
        artifacts = export_replay_packages(package_dir, replay_dir)
        replay_packages = [a.replay_package_dir for a in artifacts]

    return CompilerArtifacts(
        program_package_dir=str(package_dir),
        replay_package_dirs=tuple(replay_packages),
        compile_manifest_path=str(output_dir / "compile_manifest.json"),
    )
```

**중요**: schedule_metadata가 step manifest의 `"compiler"` 블록에 기록되어 inspector가 보여줄 수 있음.

---

## CLI 진입점

```bash
python -m l6_toolchain compile --program-json path/to/program.json --output-dir ./out
```

`__main__.py`가 JSON을 파싱해서 `Program` 만들고 → `compile_program(program, options)` 호출.

---

## 사용 예시 (Python API)

```python
from l6_toolchain.api import OpNode, Program, TensorValue, compile_program, CompilerOptions

program = Program(
    inputs=(TensorValue("x", (16, 16), "int8"),),
    tensors=(
        TensorValue("x", (16, 16), "int8"),
        TensorValue("y", (16, 16), "int32"),
    ),
    ops=(OpNode("fc", "linear", ("x",), ("y",), {
        "in_features": 16, "out_features": 16,
        "weight": [[1 if i==j else 0 for j in range(16)] for i in range(16)],
    }),),
    outputs=("y",),
)

options = CompilerOptions(
    package_id="my_test",
    output_dir="./out/my_test",
    tensor_data={"x": [[i for i in range(16)] for _ in range(16)]},
)
result = compile_program(program, options=options)

print(f"Generated {len(result.artifacts.replay_package_dirs)} replay packages")
print(f"Total estimated cycles: {result.plan.total_estimated_cycles}")
```

---

## 핵심 개념 정리

| 개념 | 의미 | 어디서 |
|---|---|---|
| **4-layer 파이프라인** | IMPORT → PLAN → MATERIALIZE → REPORT | `compile_program` |
| **CompilerOptions** | 모든 행동을 한 dict로 제어 | L30-50 |
| **Step별 plan 분리** | compute (GEMM/Conv) vs elementwise/shape_only | `create_compile_plan` |
| **Schedule metadata 전달** | compiler → step manifest의 "compiler" 블록 | `_materialize_packages` |
| **Replay 자동 export** | options.replay_enabled로 토글 | `export_replay_packages` 호출 |

---

## 연습 문제

1. `enable_fusion=False`로 호출하면 결과의 `total_compute_steps`는 어떻게 달라질까? (Conv+BN+ReLU 모델로 직접 확인)
2. `schedule_strategy="default"` vs `"weight_reuse"`의 `total_estimated_cycles` 차이를 단일 GEMM(M=32, K=32, N=32)으로 측정해 보세요.
3. `tensor_data=None`이면 emitter가 무엇을 채울까? `tensor_data={"x": ...}`이면?
4. `run_replay_smoke=True`이면 어떤 추가 작업이 일어나는가? 어떤 외부 의존성이 필요한가?

---

## 다음 파일로 넘어가기

→ [38_replay_bridge.md](38_replay_bridge.md): `replay_bridge.py` — L6 program package → system replay workload 변환 + Verilator 자동 실행
