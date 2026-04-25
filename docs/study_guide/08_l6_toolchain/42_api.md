# 42. `api.py` — 외부 API 단일 진입점

> **파일 위치**: `l6/src/l6_toolchain/api.py` (238줄)
> **역할**: 모든 모듈의 public 심볼을 하나로 모아 `from l6_toolchain.api import *` 가능하게 함
> **선수 지식**: Python re-export 패턴
> **공장 비유**: 본사 안내 데스크 — 손님이 어느 부서에 갈지 모를 때 모든 연락처를 한 자리에 정리

---

## 이 파일이 중요한 이유

L6 toolchain은 23개 모듈에 분산되어 있습니다. 사용자가 `from l6_toolchain.compiler import compile_program`, `from l6_toolchain.ir import OpNode` 식으로 일일이 import 경로를 외울 필요 없이 **`from l6_toolchain.api import OpNode, compile_program, ...`** 한 줄로 끝나도록 모든 public symbol을 모아둡니다.

---

## 구조: 3가지 섹션

```python
# ① 각 모듈에서 심볼 import (re-export)
from .common import conv_output_dim, json_dumps, ...
from .ir import LoweredOp, OpNode, Program, TensorValue, ...
from .frontend import LinearData, LinearOp, ...
from .compiler import CompilerOptions, CompilerResult, compile_program, ...
# ... (16개 모듈에서 60+ 심볼)

# ② __all__로 명시적 public API 선언
__all__ = [
    "AutoTileResult", "CompilerArtifacts", ..., "compile_program", ...
]
```

---

## 왜 `__all__`이 중요한가

```python
__all__ = ["compile_program", "Program", "OpNode", ...]
```

**3가지 효과**:
1. `from l6_toolchain.api import *` 시 import되는 심볼 명시 (private 누설 방지)
2. **API 계약 문서**: `__all__`에 있는 것만 외부에서 안정적으로 사용 가능
3. IDE 자동완성이 `__all__` 기준으로 작동

---

## 핵심 export 카테고리

### Compilation entry

```python
compile_program, CompilerOptions, CompilerResult, ProgramCompilePlan, StepCompilePlan, CompilerArtifacts
build_program_from_source, create_compile_plan
```

### IR

```python
Program, OpNode, TensorValue, LoweredOp, ProgramExportStep
validate_program, lower_program_to_steps, export_program_package
```

### Tracer & Frontend

```python
trace_torch_module
TorchLinear, TorchConv2d, LinearData, LinearOp
linear_data_from_torch_linear, conv_data_from_torch_conv2d
frontend, conv_from_torch_module
```

### Lowering & Scheduling

```python
TILE_SIZE, TilePlanEntry, plan_linear_tiles
TileCostEstimate, ScheduleSummary, MemoryBudget, MemoryUsageReport, ScheduleComparison
estimate_tile_cost, estimate_schedule_cost, analyze_memory_usage, compare_schedules, reorder_tiles
```

### DMA & Memory

```python
DMACommand, DMAAXIBurst, DMAScheduleSequence, MMIORegisterWrite, SRAMAllocation
build_dma_schedule, generate_dma_commands, generate_mmio_sequence
calculate_activation_payload_bytes, calculate_axi_bursts_for_payload, calculate_weight_payload_bytes
SRAM_BANK_BYTES, SRAM_TOTAL_BYTES
plan_memory, MemoryPlan, StepDescriptor, TensorLifetime, TensorPlacement, estimate_external_transfers
```

### Replay

```python
ReplayPackageArtifact, SystemReplayBuildResult, SystemReplaySmokeResult
build_system_replay_binary, export_and_run_system_replay_smoke, export_replay_packages, run_system_replay_packages
```

### Roofline

```python
RooflineResult, RooflineProfile
analyze_roofline, analyze_roofline_with_scheduler
get_roofline_profile, list_roofline_profiles, resolve_roofline_profile
```

### Quantization (Sprint-9)

```python
QuantizeResult, LayerQuantizeResult, GPTQResult, SmoothQuantResult
quantize_tensor, dequantize_tensor, check_quantization_error
quantize_activation, quantize_linear_layer, quantize_conv2d_layer
gptq_quantize_weight, smooth_quant
```

### Cycle simulation & Auto-tile (Sprint-9)

```python
PhaseInterval, SimResult, SimComparison
simulate_tile_schedule, compare_sim_schedules
AutoTileResult, TileCandidate
search_tile_sizes, get_optimal_tile
```

### Fusion

```python
FusionResult
apply_all_fusions, apply_conv_bn_folding, apply_conv_relu_fusion, apply_linear_relu_fusion
```

### Inspector & Validator

```python
inspect_compile_output_summary, inspect_package_summary, format_performance_summary, reconstruct_output_matrix
ValidationIssue, ValidationReport, validate_package, validate_package_report
```

### Common utilities

```python
conv_output_dim, normalize_pair, json_dumps, read_json, read_json_required, write_json
SupportsLinearShape
```

---

## 사용 패턴

### 권장: `from .api import` 사용

```python
from l6_toolchain.api import Program, OpNode, TensorValue, compile_program, CompilerOptions
```

→ 모듈 경로가 바뀌어도 사용자 코드는 안 깨짐 (api.py에서 흡수).

### 비권장: 직접 모듈 import

```python
from l6_toolchain.ir import Program  # 가능하지만 fragile
```

→ 미래에 `ir.py`를 분할하거나 이름 바꾸면 사용자 코드도 바뀌어야 함.

---

## __init__.py와의 관계

`l6_toolchain/__init__.py`:
```python
__all__ = ["api", "common", "compiler", "fusion", ...]
```

→ 패키지 자체의 namespace는 빈 채로 둠. 사용자에게는 `api` 모듈을 통해서만 접근 권장.

이렇게 하면 `import l6_toolchain` 만 한 사용자가 우연히 internal 모듈에 접근하는 걸 막음.

---

## API 안정성 가이드

| 변경 | 사용자 영향 | 어떻게 처리 |
|---|---|---|
| 새 심볼 추가 | 없음 | api.py에 export 추가 |
| 함수 시그니처 변경 (호환) | 없음 | 그대로 두면 됨 |
| 함수 시그니처 변경 (비호환) | 있음 | deprecation 경로 또는 major version bump |
| 모듈 분할/이름 변경 | 없음 (api.py만 갱신) | api.py에서 새 위치 import |
| 심볼 제거 | 있음 | 우선 deprecation warning 후 다음 major 제거 |

→ **api.py가 stable contract, 내부 모듈은 자유롭게 리팩토링 가능**.

---

## 핵심 개념 정리

| 개념 | 의미 |
|---|---|
| **Re-export 패턴** | 내부 모듈 심볼을 한 facade에 모음 |
| **`__all__`** | 공개 API 명시 + IDE/`*` import 제어 |
| **API stability layer** | 내부 모듈은 자유롭게 리팩토링, api.py만 안정 |
| **Discovery** | `from l6_toolchain.api import *` → 모든 public 사용 가능 |

---

## 연습 문제

1. `from l6_toolchain.api import *` 시 import되는 심볼 개수는? (`__all__` 길이)
2. 새 모듈 `optimizer.py`를 추가했다고 가정. 사용자에게 노출하려면 `api.py`에 무엇을 추가?
3. 만약 `compile_program`을 다른 이름 (`compile_l6`)으로 바꾸려면 사용자 코드를 안 깨면서 어떻게?
4. 왜 `__init__.py`를 단순히 `from .api import *`로 안 하고 `__all__ = ["api", ...]`로 둘까? (힌트: namespace pollution)

---

## 다음 파일로 넘어가기

→ [43_linear_export.md](43_linear_export.md): `linear_export.py` — legacy single-tile CLI thin wrapper
