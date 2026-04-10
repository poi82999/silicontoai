# L6 Python Workspace

이 디렉터리는 L6 학습과 실제 구현을 같은 저장소 안에서 진행하기 위한 Python 작업 공간입니다.

## 왜 저장소 안에서 진행하나

- 현재 workload package, replay, RTL contract와 바로 연결되어야 합니다.
- L6의 핵심은 모델 연산을 하드웨어 package 형식으로 내리는 과정입니다.
- 공부용 코드와 실제 산출물이 분리되면 재현성과 검증 연계가 약해집니다.

## 현재 환경

- Workspace-local virtual environment: `.venv312/`
- Installed now: `numpy`, `pytest`, `torch`
- Current recommended interpreter on this machine: Python `3.12`

주의:

- 기존 `.venv/`는 Python 3.14 기반 실험 환경으로 남아 있고, L6 frontend 작업은 `.venv312/`를 기준으로 진행하는 편이 안전합니다.
- 현재 workspace는 `.venv312/`를 활성 Python 환경으로 사용하도록 전환했습니다.
- PyTorch 기반 frontend와 end-to-end smoke test는 `.venv312/`에서 검증했습니다.

## 디렉터리 구조

```text
l6/
├── README.md
├── generate_model_workloads.py    # Track E-1: MobileNet/ResNet/Transformer workload generator
├── regenerate_fixed_replay_assets.py
├── src/
│   └── l6_toolchain/
│       ├── __init__.py
│       ├── __main__.py        # CLI entry: python -m l6_toolchain compile [--no-fusion]
│       ├── api.py             # public API surface
│       ├── common.py          # shared utilities
│       ├── compiler.py        # M5 end-to-end compiler (fusion → plan → export → replay)
│       ├── dma_scheduler.py   # DMA command generation + SRAM allocation
│       ├── emitter.py         # JSON package generation
│       ├── frontend.py        # Linear/Conv2d frontend + torch adapter
│       ├── fusion.py          # Track B-1: operator fusion (Linear+ReLU, Conv+ReLU, Conv+BN)
│       ├── inspector.py       # package golden stitching
│       ├── ir.py              # mini IR + program lowering + export
│       ├── linear_export.py   # legacy linear export CLI
│       ├── lowering.py        # tile planning (TILE_SIZE=16)
│       ├── replay_bridge.py   # L6→system replay bridge
│       ├── roofline.py        # roofline performance model
│       ├── roofline_profiles.py  # board/platform presets
│       ├── scheduler.py       # M4 cost model + reorder + memory budget
│       ├── tracer.py          # torch.fx → Program tracer
│       └── validator.py       # package validation
└── tests/
    ├── conftest.py
    ├── test_asset_drift.py
    ├── test_compiler.py
    ├── test_dma_scheduler.py
    ├── test_emitter.py
    ├── test_frontend.py
    ├── test_fusion.py
    ├── test_ir.py
    ├── test_m3_ops_tracer.py
    ├── test_model_workloads.py
    ├── test_package_tools.py
    ├── test_replay_bridge.py
    ├── test_roofline.py
    └── test_scheduler.py
```

## 첫 목표

첫 번째 목표는 `작은 Linear layer export + golden generation`입니다.

여기서 작은 Linear는 학습용으로 단순화한 `단일 16x16 tile`입니다.

- 입력 activation matrix: `M x K = 16 x 16`
- weight matrix: `K x N = 16 x 16`
- 출력 golden matrix: `M x N = 16 x 16`

이 크기를 먼저 쓰는 이유는 현재 RTL/replay contract와 정확히 맞기 때문입니다.
padding, tail tile, multi-tile scheduling은 그 다음 단계에서 다루는 편이 안전합니다.

## 지금 할 수 있는 명령

한 번만 editable install:

```powershell
c:/projects/silicontoai/.venv312/Scripts/python.exe -m pip install -e .[dev] torch
```

Linear demo package 생성:

```powershell
c:/projects/silicontoai/.venv312/Scripts/python.exe -m l6_toolchain.linear_export --output workloads/linear16_l6_demo
```

Tiled export CLI 예시:

```powershell
c:/projects/silicontoai/.venv312/Scripts/python.exe -m l6_toolchain.linear_export --output l6/generated/cli_smoke --package-id cli_smoke --m 32 --k 20 --n 16 --activation-mode column_ramp --weight-mode column_ramp --tiled
```

Torch frontend CLI 예시:

```powershell
c:/projects/silicontoai/.venv312/Scripts/python.exe -m l6_toolchain.linear_export --output l6/generated/torch_cli_smoke --package-id torch_cli_smoke --from-torch-linear --torch-in-features 20 --torch-out-features 32 --input-json l6/generated/input_rows.json --tiled
```

Torch Conv2d frontend CLI 예시:

```powershell
c:/projects/silicontoai/.venv312/Scripts/python.exe -m l6_toolchain.linear_export --output l6/generated/conv_cli_smoke --package-id conv_cli_smoke --from-torch-conv2d --torch-conv-in-channels 1 --torch-conv-out-channels 2 --torch-conv-kernel-height 3 --torch-conv-kernel-width 3 --torch-conv-stride 2 --torch-conv-padding 1 --input-json l6/generated/conv_input_nchw.json --tiled
```

Torch Conv2d dilation CLI 예시:

```powershell
c:/projects/silicontoai/.venv312/Scripts/python.exe -m l6_toolchain.linear_export --output l6/generated/conv_dilation_cli_smoke --package-id conv_dilation_cli_smoke --from-torch-conv2d --torch-conv-in-channels 1 --torch-conv-out-channels 2 --torch-conv-kernel-height 2 --torch-conv-kernel-width 2 --torch-conv-dilation 2 --input-json l6/generated/conv_input_nchw.json --tiled
```

Package golden stitching 확인 예시:

```powershell
c:/projects/silicontoai/.venv312/Scripts/python.exe -c "from l6_toolchain.api import reconstruct_output_matrix; import numpy as np; out = reconstruct_output_matrix('l6/generated/conv_cli_smoke'); print(out.shape); print(out[:2])"
```

Package structural validation 예시:

```powershell
c:/projects/silicontoai/.venv312/Scripts/python.exe -c "from l6_toolchain.api import validate_package; validate_package('l6/generated/conv_cli_smoke'); print('package ok')"
```

Structured validation report 예시:

```powershell
c:/projects/silicontoai/.venv312/Scripts/python.exe -c "from l6_toolchain.api import validate_package_report; report = validate_package_report('l6/generated/conv_cli_smoke'); print(report.to_dict())"
```

Mini IR lowering 예시:

```powershell
c:/projects/silicontoai/.venv312/Scripts/python.exe -c "from l6_toolchain.api import OpNode, Program, TensorValue, lower_program_to_steps; program = Program(inputs=(TensorValue('x', (1, 4)),), tensors=(TensorValue('x', (1, 4)), TensorValue('y', (1, 2), dtype='int32')), ops=(OpNode(name='fc0', kind='linear', inputs=('x',), outputs=('y',), attrs={'in_features': 4, 'out_features': 2}),), outputs=('y',)); print([step.to_dict() for step in lower_program_to_steps(program)])"
```

Mini IR program package export 예시:

```powershell
c:/projects/silicontoai/.venv312/Scripts/python.exe -c "from l6_toolchain.api import OpNode, Program, TensorValue, export_program_package; program = Program(inputs=(TensorValue('x', (1, 4)),), tensors=(TensorValue('x', (1, 4)), TensorValue('y', (1, 2), dtype='int32')), ops=(OpNode(name='fc0', kind='linear', inputs=('x',), outputs=('y',), attrs={'in_features': 4, 'out_features': 2}),), outputs=('y',)); export_program_package('l6/generated/program_cli_smoke', program, package_id='program_cli_smoke', tiled=False)"
```

Mini IR real-data program export 예시:

```powershell
c:/projects/silicontoai/.venv312/Scripts/python.exe -c "from l6_toolchain.api import OpNode, Program, TensorValue, export_program_package; program = Program(inputs=(TensorValue('x', (1, 3)),), tensors=(TensorValue('x', (1, 3)), TensorValue('fc0_out', (1, 2), dtype='int32'), TensorValue('relu0_out', (1, 2), dtype='int32'), TensorValue('y', (1, 1), dtype='int32')), ops=(OpNode(name='fc0', kind='linear', inputs=('x',), outputs=('fc0_out',), attrs={'in_features': 3, 'out_features': 2, 'weight': [[1, 0, 1], [0, 1, 1]], 'bias': [1, -2]}), OpNode(name='relu0', kind='relu', inputs=('fc0_out',), outputs=('relu0_out',)), OpNode(name='fc1', kind='linear', inputs=('relu0_out',), outputs=('y',), attrs={'in_features': 2, 'out_features': 1, 'weight': [[2, -1]], 'bias': [3]})), outputs=('y',)); export_program_package('l6/generated/program_real_data_smoke', program, package_id='program_real_data_smoke', tiled=False, tensor_data={'x': [[1, -2, 3]]})"
```

`tensor_data`를 주면 program input tensor 값이 실제로 step 사이를 흘러가고, `linear`/`conv2d` op의 `attrs['weight']`, optional `attrs['bias']`를 사용해 compute package의 activation/weight/golden payload가 real data 기준으로 생성됩니다. 각 `program_step` manifest에는 runtime input/output tensor summary도 함께 기록됩니다.

Program sequence root validation 예시:

```powershell
c:/projects/silicontoai/.venv312/Scripts/python.exe -c "from l6_toolchain.api import validate_package; validate_package('l6/generated/program_cli_smoke'); print('program_sequence ok')"
```

Replay bridge export 예시:

```powershell
c:/projects/silicontoai/.venv312/Scripts/python.exe -c "from l6_toolchain.api import export_linear_tiled_package, export_replay_packages, LinearOp; export_linear_tiled_package('l6/generated/replay_bridge_src', LinearOp(package_id='replay_bridge_src', m=16, k=32, n=16)); print([item.to_dict() for item in export_replay_packages('l6/generated/replay_bridge_src', 'l6/generated/replay_bridge_out')])"
```

System replay smoke helper 예시:

```powershell
c:/projects/silicontoai/.venv312/Scripts/python.exe -c "from l6_toolchain.api import export_and_run_system_replay_smoke; print(export_and_run_system_replay_smoke('l6/generated/replay_bridge_src', 'workloads/system_l6_bridge_smoke').to_dict())"
```

Committed replay workload smoke 예시:

```powershell
c:/projects/silicontoai/.venv312/Scripts/python.exe -c "from pathlib import Path; from l6_toolchain.api import run_system_replay_packages; root = Path('workloads/system_l6_bridge_program_chain'); package_dirs = [root / 'step_000_fc0' / 'program_chain_src_fc0', root / 'step_002_fc1' / 'program_chain_src_fc1']; print(run_system_replay_packages(package_dirs, root / 'replay_chain_summary.txt').to_dict())"
```

Committed split-K/tail chained replay workload smoke 예시:

```powershell
c:/projects/silicontoai/.venv312/Scripts/python.exe -c "from pathlib import Path; from l6_toolchain.api import run_system_replay_packages; root = Path('workloads/system_l6_bridge_program_chain_splitk_tail'); package_dirs = [root / 'step_000_fc0' / 'program_chain_splitk_tail_src_fc0_m0_n0', root / 'step_002_fc1' / 'program_chain_splitk_tail_src_fc1_m0_n0', root / 'step_002_fc1' / 'program_chain_splitk_tail_src_fc1_m0_n16']; print(run_system_replay_packages(package_dirs, root / 'replay_chain_summary.txt').to_dict())"
```

Fixed replay asset regenerate 예시:

```powershell
c:/projects/silicontoai/.venv312/Scripts/python.exe l6/regenerate_fixed_replay_assets.py
```

Signed-int8 alignment은 현재 long-term target이지만 replay-bound path에서는 아직 transition subset만 허용합니다. 그래서 replay bridge는 현재 activation/weight lane에 대해 `[0, 255]` 범위를 강제하고, negative lane이 포함된 generated-only smoke는 현재 의도적으로 reject 됩니다.

Windows 호스트에서는 `build_system/Vnpu_system_top`가 Linux ELF일 수 있습니다. 이 경우 `build_system_replay_binary()`와 `export_and_run_system_replay_smoke()`는 `bash.exe`를 통해 WSL의 `make`, `verilator`, `g++`를 사용해 재빌드/실행을 시도합니다.

`export_replay_packages()`는 `gemm_tile`, `gemm_tiled`, `program_sequence`를 받아 현재 repo의 core/system replay loader가 읽는 package family로 변환합니다. `program_sequence`를 주면 compute step들만 골라 step별 replay package를 만들어 줍니다.
`export_and_run_system_replay_smoke()`는 그 bridge output을 만든 뒤 system replay binary를 바로 호출하는 helper입니다.
`run_system_replay_packages()`는 이미 만들어 둔 replay package 디렉터리 집합을 바로 chained system replay로 실행하는 helper입니다. repo에는 이 경로를 검증하기 위한 고정 regression asset `workloads/system_l6_bridge_program_chain/`, `workloads/system_l6_bridge_program_chain_splitk_tail/`도 함께 둡니다.
`l6/regenerate_fixed_replay_assets.py`는 이 두 committed workload를 재생성하는 표준 절차입니다.

현재 replay bridge 제약:

- current replay loader contract에 맞춰 `tile_cols`는 `1..16`, `tile_rows`는 `1..16` 범위를 지원합니다.
- `tile_rows`는 `1..16` 범위만 지원합니다.
- split-K는 지원하지만 한 `(m_tile_base, n_tile_base)` 그룹 안의 `k_pass_index`가 0부터 연속이어야 합니다.
- grouped conv나 real-data path도 compute package가 위 replay contract를 만족하면 bridge로 넘길 수 있습니다.
- `tile_cols < 16` tail tile은 replay package manifest에 실제 `tile_cols`를 기록하고, golden vector는 valid lane 수만 담은 채 replay loader가 그 lane 수만 비교합니다.

## Current Conv Frontend Limits

- Current lowering path is `Conv2d -> im2col -> LinearOp -> existing lowering/emitter`.
- Supported now: arbitrary positive integer `groups`, `stride`, `padding`, `dilation`, NCHW input, 2D convolution only.
- Current CLI smoke path proves the generated package shape follows `M = N_batch * H_out * W_out`, `K = C_in * R * S`, `N = C_out`.
- Grouped conv is lowered into a single Linear-compatible GEMM by keeping full-channel `im2col` activations and constructing a group-aware block weight matrix with zeros outside each group's channel range.
- For the inspected `conv_cli_smoke` example, each `golden.json` output vector is one Conv output row after `im2col_row @ flattened_kernel_matrix + bias`, emitted in drain-address order.

## Next Conv Scope

Recommended next expansion order:

1. Add generated package inspection examples for Conv golden/output stitching.
2. Decide whether depthwise convolution should stay as grouped-im2col lowering or get a separate optimized path later.
3. Extend CLI ergonomics from scalar Conv args to tuple-aware height/width pairs where needed.
4. Add richer runtime/debug summaries or intermediate tensor snapshots for long program sequences.

`input-json` 예시는 nested list 또는 `rows` 키를 가진 JSON이면 됩니다.

```json
{
    "rows": [[0, 1, 2], [3, 4, 5]]
}
```

테스트 실행:

```powershell
c:/projects/silicontoai/.venv312/Scripts/python.exe -m pytest l6/tests  # 148 tests
```

## Compiler CLI (M5)

End-to-end compiler entry point:

```powershell
# 도움말
c:/projects/silicontoai/.venv312/Scripts/python.exe -m l6_toolchain --help
c:/projects/silicontoai/.venv312/Scripts/python.exe -m l6_toolchain compile --help

# Program JSON으로부터 compile
c:/projects/silicontoai/.venv312/Scripts/python.exe -m l6_toolchain compile --program-json l6/generated/program.json --output-dir l6/generated/compiled

# Schedule 전략 변경
c:/projects/silicontoai/.venv312/Scripts/python.exe -m l6_toolchain compile --program-json l6/generated/program.json --schedule-strategy weight_reuse

# Schedule metadata 비활성화
c:/projects/silicontoai/.venv312/Scripts/python.exe -m l6_toolchain compile --program-json l6/generated/program.json --no-schedule-metadata

# Compile manifest에 scheduler-coupled roofline 결과 기록
c:/projects/silicontoai/.venv312/Scripts/python.exe -m l6_toolchain compile --program-json l6/generated/program.json --output-dir l6/generated/compiled_with_roofline --include-roofline-manifest --roofline-profile sim_default

# Preset 기반 값에서 일부만 override
c:/projects/silicontoai/.venv312/Scripts/python.exe -m l6_toolchain compile --program-json l6/generated/program.json --output-dir l6/generated/compiled_with_roofline --include-roofline-manifest --roofline-profile pynq_z2_overlay --roofline-clock-mhz 125.0
```

`--include-roofline-manifest`를 주지 않으면 `compile_manifest.json`에는 roofline 필드가 기록되지 않습니다.
옵션을 주면 top-level `roofline_config`와 compute step별 `roofline` 블록이 추가됩니다.
roofline 값은 `--roofline-profile` preset에서 가져오고, 필요할 때만 개별 플래그로 override 합니다.
고정 스키마는 `docs/l6_roofline_manifest_schema.md`를 따릅니다.

Inspect CLI 예시:

```powershell
# compile output 루트에서 human-readable performance summary 출력
c:/projects/silicontoai/.venv312/Scripts/python.exe -m l6_toolchain inspect l6/generated/compiled_with_roofline

# JSON 요약 출력
c:/projects/silicontoai/.venv312/Scripts/python.exe -m l6_toolchain inspect l6/generated/compiled_with_roofline --json
```

Python API로 직접 사용:

```python
from l6_toolchain.api import compile_program, CompilerOptions

result = compile_program(program, CompilerOptions(
    package_id="my_model",
    output_dir="l6/generated/my_model",
    schedule_strategy="weight_reuse",
    include_schedule_metadata=True,
    roofline_profile="sim_default",
    include_roofline_in_manifest=True,
))
print(result.plan.total_estimated_cycles)
```

Inspection API 예시:

```python
from l6_toolchain.api import format_performance_summary, inspect_package_summary

summary = inspect_package_summary("l6/generated/my_model/program_package")
print(summary["steps"][0]["compiler"]["roofline"])

print(format_performance_summary("l6/generated/my_model"))
```

## 다음 학습 순서

1. `linear_export.py`를 읽고 `M/K/N`이 manifest와 payload로 어떻게 내려가는지 이해한다.
2. activation/weight 값을 바꿔서 golden이 어떻게 달라지는지 본다.
3. `validator.py`로 generated package의 manifest/payload consistency를 먼저 검사한다.
4. `inspector.py`로 generated package를 다시 읽어 full output matrix를 복원해 본다.
5. 생성된 package를 기존 replay 흐름에 연결한다.
6. 그 다음 단계에서 arbitrary shape와 padding 정책을 추가한다.
7. `ir.py`로 multi-op program을 표현하고 GEMM-like step 목록으로 낮춰 본다.
8. `frontend.py`에서 real-data adapter가 어떻게 `LinearOp + LinearData`를 만드는지 본다.
9. `lowering.py`에서 tile schedule이 shape를 어떻게 split하는지 본다.
10. `emitter.py`에서 manifest/payload가 어떻게 파일로 내려가는지 본다.