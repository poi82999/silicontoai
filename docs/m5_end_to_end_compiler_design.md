# M5 End-to-End Compiler Design

## Goal

M5의 목표는 현재 분리되어 있는 아래 경로를 하나의 상위 compiler entry로 묶는 것이다.

- framework/module import
- `Program` 구성
- op-level lowering
- compute package export
- replay package export
- optional system replay smoke 실행

즉, M5 이후에는 사용자가 개별 helper를 조합하지 않고도 다음 한 번의 흐름으로 artifact를 만들 수 있어야 한다.

`module or graph -> Program -> compile plan -> program_sequence package -> replay workloads -> optional smoke result`

## Current Baseline

현재 저장소는 이미 아래 primitive를 갖고 있다.

### Frontend / IR

- `trace_torch_module()`가 torch.fx graph를 `Program`으로 변환한다.
- `Program`, `OpNode`, `TensorValue`는 straight-line mini IR 역할을 한다.
- `lower_program_to_steps()`는 op를 `gemm`, `conv2d_im2col_gemm`, `shape_only`, `elementwise_post_op`로 내린다.

### Export / Replay

- `export_program_package()`는 `Program`을 `program_sequence` root package로 만든다.
- compute-backed step은 내부적으로 `export_linear_tile_package()` 또는 `export_linear_tiled_package()`를 재사용한다.
- `export_replay_packages()`는 `gemm_tile`, `gemm_tiled`, `program_sequence`를 replay package family로 변환한다.
- `export_and_run_system_replay_smoke()`는 replay package 생성 후 system binary까지 호출한다.

### Scheduling

- `scheduler.py`는 tile reorder, analytical cost model, memory budget analysis를 제공한다.
- 하지만 현재 scheduler는 top-level compile driver와 연결되어 있지 않다.
- `export_program_package()`는 strategy나 schedule summary를 manifest에 남기지 않는다.

## Problem Statement

현재 구조는 기능적으로는 충분히 강하지만, 상위 orchestration layer가 없다.

핵심 공백은 세 가지다.

1. 사용자가 어떤 frontend entry를 쓸지 직접 결정해야 한다.
2. `Program` export와 replay export 사이의 policy가 암묵적이다.
3. compile 결과를 설명하는 단일 plan object가 없다.

그 결과 지금은 "backend helper collection"이지, 아직 "compiler entry"는 아니다.

## Design Principles

M5는 새 범용 IR를 만드는 단계가 아니다. 이미 있는 `Program`과 package family를 상위에서 조합하는 단계다.

원칙은 다음과 같다.

1. Existing artifact formats first
   - `Program`, `program_sequence`, `gemm_tiled`, replay package format을 유지한다.

2. Explainable compilation
   - compile 결과는 왜 이런 package 수, tile order, replay layout이 나왔는지 설명 가능해야 한다.

3. Policy separation
   - import, lowering, scheduling, export, replay는 분리된 phase로 유지한다.

4. Replay is a target, not the IR
   - replay package는 최종 target artifact이고, compiler의 내부 canonical form은 `Program`과 compile plan이다.

5. Incremental scope
   - M5에서는 single-graph straight-line path만 묶는다.
   - branching, control-flow, memory reuse across ops, quantization은 M6 이후로 넘긴다.

## Proposed Architecture

M5는 새 상위 모듈 `compiler.py`를 중심으로 다음 계층을 둔다.

### Layer 1. Import

입력 source를 canonical `Program`으로 바꾼다.

예상 source 종류:

- existing `Program`
- PyTorch `nn.Module`
- future: torch.fx `GraphModule`

Proposed API:

```python
def build_program_from_source(
    source: Program | object,
    *,
    input_shape: tuple[int, ...] | None = None,
) -> Program:
    ...
```

정책:

- source가 `Program`이면 validation만 수행한다.
- source가 `nn.Module`이면 `trace_torch_module()`를 사용한다.
- import layer는 target-specific decision을 하지 않는다.

### Layer 2. Compile Planning

`Program`을 받아 export/replay 정책을 명시적으로 계산한다.

이 레이어가 M5의 핵심이다.

Proposed dataclasses:

```python
@dataclass(frozen=True)
class CompilerOptions:
    package_id: str = "l6_compile"
    output_dir: str | Path = "l6/generated/l6_compile"
    tiled: bool = True
    replay_enabled: bool = True
    replay_output_dir: str | Path | None = None
    run_replay_smoke: bool = False
    binary_path: str | Path | None = None
    schedule_strategy: str = "weight_reuse"
    include_system_metadata: bool = True
    input_shape: tuple[int, ...] | None = None
    tensor_data: dict[str, object] | None = None


@dataclass(frozen=True)
class StepCompilePlan:
    step_id: int
    op_name: str
    source_kind: str
    lowered_kind: str
    compute_required: bool
    logical_shape: dict[str, int] | None
    tile_count: int
    schedule_strategy: str | None
    estimated_cycles: int | None
    estimated_dma_cycles: int | None
    memory_fits: bool | None
    replay_package_count: int


@dataclass(frozen=True)
class ProgramCompilePlan:
    package_id: str
    program: Program
    lowered_steps: tuple[LoweredOp, ...]
    step_plans: tuple[StepCompilePlan, ...]
    total_compute_steps: int
    total_replay_packages: int
    total_estimated_cycles: int
    schedule_strategy: str
    replay_enabled: bool
```
```

역할:

- step별로 compute-backed step인지 판단
- compute-backed step에 대해 tile plan 생성
- scheduler cost / memory budget를 묶어서 요약
- replay package multiplicity까지 미리 계산

이렇게 하면 export 전에 전체 결과를 설명할 수 있다.

### Layer 3. Materialization

`ProgramCompilePlan`을 실제 filesystem artifact로 내린다.

Proposed API:

```python
@dataclass(frozen=True)
class CompilerArtifacts:
    program_package_dir: str
    replay_package_dirs: tuple[str, ...]
    chain_summary_path: str | None = None


@dataclass(frozen=True)
class CompilerResult:
    plan: ProgramCompilePlan
    artifacts: CompilerArtifacts
    replay_smoke: SystemReplaySmokeResult | None = None
```
```

Materialization phase responsibilities:

- `export_program_package()` 호출
- optional `export_replay_packages()` 호출
- optional `export_and_run_system_replay_smoke()` 또는 `run_system_replay_packages()` 호출
- compile summary manifest 작성

### Layer 4. Reporting

compile 결과를 하나의 root manifest나 report로 남긴다.

Proposed root file:

- `compile_manifest.json`

Suggested contents:

```json
{
  "manifest_version": "0.1",
  "package_id": "resnet_block_demo",
  "entry": "compile_program",
  "schedule_strategy": "weight_reuse",
  "program_package_dir": "program_package",
  "replay_output_dir": "replay_packages",
  "total_compute_steps": 3,
  "total_replay_packages": 4,
  "total_estimated_cycles": 512,
  "steps": [
    {
      "step_id": 0,
      "name": "conv0",
      "lowered_kind": "conv2d_im2col_gemm",
      "tile_count": 2,
      "replay_package_count": 2,
      "estimated_cycles": 238,
      "memory_fits": true
    }
  ]
}
```

## Compiler Phase Breakdown

M5 compiler는 아래 순서로 동작한다.

### Phase 1. Canonicalize source

- source를 `Program`으로 만든다.
- `validate_program()` 수행

### Phase 2. Lower

- `lower_program_to_steps()` 수행
- 각 step이 compute-backed step인지 분류한다.

분류 규칙:

- `gemm`, `conv2d_im2col_gemm` -> compute-backed
- `shape_only`, `elementwise_post_op` -> non-compute step

### Phase 3. Plan compute steps

compute-backed step마다 다음을 계산한다.

- logical shape `(m, k, n)`
- tile list via `plan_linear_tiles()`
- reordered tile list via `reorder_tiles(..., strategy=...)`
- schedule summary via `estimate_schedule_cost()`
- memory report via `analyze_memory_usage()`
- expected replay package count

replay package count heuristic:

- tiled compute package를 replay bridge로 넘긴 뒤 `(m_tile_base, n_tile_base)` group 수와 동일
- practical rule: final output tile group count와 같다

### Phase 4. Export program package

- current `export_program_package()`를 reuse한다.
- 단, M5 이후에는 step manifest 또는 compile root에 schedule metadata를 함께 남긴다.

권장 확장:

- `export_program_package(..., compile_plan: ProgramCompilePlan | None = None)` optional parameter 추가
- compute step manifest에 아래 metadata 추가
  - `schedule_strategy`
  - `estimated_cycles`
  - `estimated_dma_cycles`
  - `estimated_weight_reuse_count`
  - `memory_usage`

### Phase 5. Export replay packages

- `CompilerOptions.replay_enabled`가 true면 program package를 replay package family로 변환한다.
- replay root는 `program_package`와 분리된 sibling dir로 둔다.

권장 디렉터리 구조:

```text
<output_dir>/
├── compile_manifest.json
├── program_package/
│   ├── manifest.json
│   └── steps/
└── replay_packages/
    ├── step_000_conv0/
    └── step_003_fc0/
```

### Phase 6. Optional smoke

- `run_replay_smoke`가 true면 replay package set을 바로 실행한다.
- smoke result는 compile result에 연결한다.

## Public Entry Points

M5에서는 public API를 세 단계로 제공하는 것이 적절하다.

### 1. Lowest convenient entry

```python
def create_compile_plan(
    source: Program | object,
    *,
    options: CompilerOptions,
) -> ProgramCompilePlan:
    ...
```

용도:

- artifact 생성 없이 planning / cost inspection만 하고 싶을 때

### 2. Main compiler entry

```python
def compile_program(
    source: Program | object,
    *,
    options: CompilerOptions,
) -> CompilerResult:
    ...
```

용도:

- M5의 기본 one-shot entry

### 3. CLI entry

```bash
python -m l6_toolchain.compiler \
  --from-torch-module \
  --output l6/generated/residual_demo \
  --package-id residual_demo \
  --input-shape 1,4,8,8 \
  --emit-replay \
  --schedule-strategy weight_reuse \
  --run-replay-smoke
```

CLI는 M5 말미 또는 M5.5에서 붙여도 된다. 우선순위는 Python API가 더 높다.

## Manifest / Metadata Changes

M5에서 artifact format을 크게 깨지 않고도 compiler identity를 남기려면 두 군데만 확장하면 된다.

### 1. New compile root manifest

- `compile_manifest.json`
- top-level compiler decision과 final artifact map 기록

### 2. Step-level schedule annotation

현재 `program_step` manifest는 lowered op 정보만 담는다.
M5 이후 compute-backed step에는 다음을 추가하는 것이 좋다.

```json
"compiler": {
  "schedule_strategy": "weight_reuse",
  "estimated_cycles": 238,
  "estimated_dma_cycles": 74,
  "tile_count": 2,
  "replay_package_count": 2,
  "memory": {
    "fits_in_budget": true,
    "peak_accumulator_bytes": 1024
  }
}
```

이 정보는 기존 validator를 깨지 않는다. validator는 unknown field를 허용하면 된다.

## Interaction with Scheduler

M4 scheduler는 M5의 optional optimization pass가 아니라 standard planning component로 들어가야 한다.

권장 rule:

- compute-backed step는 항상 tile plan을 만든다.
- default compile strategy는 `weight_reuse`
- `shape_only`, `elementwise_post_op`는 schedule 대상이 아니다.

M5에서 scheduler를 이렇게 쓰면 장점이 있다.

1. compile output에 cost estimate를 포함할 수 있다.
2. replay package multiplicity와 tile grouping reasoning이 명확해진다.
3. M6 quantization 이후에도 schedule planning layer를 재사용할 수 있다.

## Interaction with Replay Bridge

현재 replay bridge는 package artifact만 입력으로 받는다. 이건 유지하는 편이 좋다.

즉, M5 compiler는 replay metadata를 직접 쓰지 않고 아래 순서를 지킨다.

1. `Program` export
2. package validation optional
3. replay bridge export
4. replay smoke optional

이렇게 해야 compiler와 replay loader contract가 분리된다.

## Recommended Implementation Order

### M5-1. Compile plan dataclasses and planning API

구현 항목:

- `CompilerOptions`
- `StepCompilePlan`
- `ProgramCompilePlan`
- `build_program_from_source()`
- `create_compile_plan()`

Exit:

- existing `Program` 또는 `nn.Module` 입력에 대해 compile plan 생성 가능
- tests에서 step count, tile count, estimated cycle count 검증 가능

### M5-2. Materialization API

구현 항목:

- `CompilerArtifacts`
- `CompilerResult`
- `compile_program()`
- `compile_manifest.json` emission

Exit:

- one-shot으로 program package와 replay package 생성 가능

### M5-3. Step annotation and validation widening

구현 항목:

- `program_step` manifest에 compiler metadata 추가
- validator가 해당 metadata를 허용

Exit:

- compile output에 scheduler / replay summary가 남음

### M5-4. Optional smoke integration

구현 항목:

- `run_replay_smoke` option
- binary path forwarding
- smoke result attachment

Exit:

- compile one-shot에서 smoke까지 연결 가능

## Recommended Test Matrix

M5 테스트는 새 파일 `l6/tests/test_compiler.py`로 분리하는 것이 좋다.

필수 케이스:

1. `Program` 입력 -> compile plan 생성
2. `nn.Module` 입력 -> trace 후 compile plan 생성
3. residual block -> compute-backed step와 elementwise step가 혼합된 compile plan 생성
4. split-K shape -> replay package count 예측 검증
5. tail-n shape -> replay package count 예측 검증
6. `compile_program(replay_enabled=False)` -> program package만 생성
7. `compile_program(replay_enabled=True)` -> replay packages까지 생성
8. optional smoke path -> binary가 없으면 skip, 있으면 PASS

## Non-Goals for M5

아래는 M5 범위에서 제외한다.

- 새로운 universal compiler IR 정의
- control-flow graph support
- dynamic shape support
- inter-op SRAM lifetime optimization
- DMA/compute overlap scheduler
- quantization parameter propagation
- fusion pass

이것들은 M5를 통과한 뒤 M6 이후에 별도 milestone으로 다루는 편이 맞다.

## Summary

M5의 본질은 새 수학이나 새 artifact format을 만드는 것이 아니다.
이미 있는 `Program`, package exporter, replay bridge, scheduler를 하나의 compile driver로 묶는 것이다.

따라서 M5의 canonical output은 두 개다.

1. 설명 가능한 `ProgramCompilePlan`
2. filesystem에 materialize된 `CompilerResult`

이 구조를 채택하면 다음 단계인 quantization, richer schedule policy, inter-op planning도 기존 artifact family를 깨지 않고 확장할 수 있다.