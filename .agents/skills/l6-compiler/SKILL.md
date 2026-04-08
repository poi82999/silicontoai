---
name: l6-compiler
description: How to use the L6 Python compiler toolchain to compile PyTorch models into NPU workload packages
---

# L6 Compiler Toolchain Guide

The L6 toolchain converts PyTorch models into NPU-executable workload packages.

---

## 1. Environment Setup

```powershell
# Python 3.12 virtual environment (already exists)
c:\projects\silicontoai\.venv312\Scripts\activate

# Or use the interpreter directly
c:\projects\silicontoai\.venv312\Scripts\python.exe

# Install in editable mode (if not already)
pip install -e .
```

The project uses `pyproject.toml` for package configuration (entry point: `l6_toolchain`).

---

## 2. Project Structure

```
l6/
├── src/l6_toolchain/
│   ├── __init__.py       # Package init
│   ├── __main__.py       # CLI entry point
│   ├── api.py            # Public API (compile_program)
│   ├── frontend.py       # PyTorch → IR conversion
│   ├── ir.py             # Intermediate Representation (Program/OpNode/TensorValue)
│   ├── tracer.py         # torch.fx graph tracing
│   ├── compiler.py       # 4-stage compile pipeline
│   ├── scheduler.py      # Tile scheduling & cost model
│   ├── emitter.py        # Package file generation
│   ├── replay_bridge.py  # L6 package → Verilator replay workload
│   ├── validator.py      # Golden comparison
│   ├── lowering.py       # High-level → low-level IR
│   ├── inspector.py      # Package inspection utilities
│   ├── linear_export.py  # Simple Linear export helper
│   └── common.py         # Shared constants
├── tests/                # 10 test files, 112+ test cases
├── generated/            # Generated packages and assets
└── README.md
```

---

## 3. CLI Usage

```bash
# Show all commands
python -m l6_toolchain --help

# Compile a program from JSON IR
python -m l6_toolchain compile --program-json <path_to_program.json>

# With output directory
python -m l6_toolchain compile --program-json program.json --output-dir workloads/my_output
```

---

## 4. API Usage

### Simple Compile
```python
from l6_toolchain.api import compile_program

# From a PyTorch model
import torch.nn as nn
model = nn.Sequential(nn.Linear(16, 16))
result = compile_program(model, options={"output_dir": "output/"})
```

### Full Pipeline
```python
from l6_toolchain.frontend import import_linear, import_conv2d
from l6_toolchain.ir import Program
from l6_toolchain.compiler import compile_program
from l6_toolchain.replay_bridge import export_system_replay_package

# Step 1: Import model to IR
program = import_linear(in_features=16, out_features=16, weight_data=weights)

# Step 2: Compile (tile + schedule + emit)
result = compile_program(program)

# Step 3: Export to Verilator replay format
export_system_replay_package(result.program, output_dir="workloads/system_test")
```

---

## 5. Supported Operations

| PyTorch Op | L6 Frontend | Notes |
|---|---|---|
| `nn.Linear` | ✅ `import_linear()` | Direct GEMM mapping |
| `nn.Conv2d` | ✅ `import_conv2d()` | im2col → GEMM lowering |
| `F.relu` | ✅ (traced) | Post-accumulation |
| `torch.flatten` | ✅ (traced) | Reshape |
| `torch.add` | ✅ (traced) | Element-wise |
| Grouped Conv | ✅ | Via dilation/group params |
| Bias add | ✅ | Fused with Linear/Conv |

Unsupported ops raise `ValueError` with descriptive message.

---

## 6. Tracer (torch.fx)

```python
from l6_toolchain.tracer import trace_model

# Trace a PyTorch model
graph = trace_model(model, example_input=torch.randn(1, 16))
```

Supports: Linear, Conv2d, ReLU, Flatten, Add, bias_add, reshape, getattr.

---

## 7. Scheduler

```python
from l6_toolchain.scheduler import (
    schedule_tiles,
    reorder_tiles,
    estimate_schedule_cost,
    analyze_memory_usage,
    compare_schedules
)

# Get schedule summary
summary = estimate_schedule_cost(tiles, strategy="weight_reuse")
print(summary.total_cycles, summary.dma_cycles, summary.compute_cycles)

# Memory budget check
report = analyze_memory_usage(tiles)
print(report.fits_budget)  # True if < 64KB
```

---

## 8. Replay Bridge

Converts L6 compiler output into Verilator-ready workload packages:

```python
from l6_toolchain.replay_bridge import export_system_replay_package

# Export single step
export_system_replay_package(
    program,
    output_dir="workloads/system_my_test",
    step_index=0
)
```

The bridge handles:
- Weight/activation binary serialization
- Golden reference computation with correct arithmetic semantics
- Manifest generation with DMA burst parameters
- Split-K multi-pass configuration
- Tail tile valid-lane masking

---

## 9. Testing

```bash
# Run all L6 tests
c:\projects\silicontoai\.venv312\Scripts\python.exe -m pytest l6/tests -v

# Run specific test
python -m pytest l6/tests/test_compiler.py -v
python -m pytest l6/tests/test_frontend.py -v
python -m pytest l6/tests/test_replay_bridge.py -v
```

### Test Coverage
| Test File | Count | Coverage |
|---|---|---|
| test_compiler.py | 24 | Full compile pipeline |
| test_frontend.py | 17 | Linear/Conv2d import |
| test_ir.py | 14 | IR construction/serialization |
| test_replay_bridge.py | 16 | Bridge export & validation |
| test_scheduler.py | 10 | Cost model & reordering |
| test_emitter.py | 8 | Package file generation |
| test_m3_ops_tracer.py | 11 | torch.fx tracing |
| test_package_tools.py | 8 | Package utilities |
| test_asset_drift.py | 1 | Regression drift check |

---

## 10. Fixed Asset Regeneration

When arithmetic semantics or IR changes:

```bash
python l6/regenerate_fixed_replay_assets.py
```

This rebuilds committed regression assets under `l6/generated/_fixed_replay_asset_sources/` and corresponding workload packages.

Verify no drift:
```bash
python -m pytest l6/tests/test_asset_drift.py -v
```

---

## 11. Arithmetic Semantics

- Input: Signed INT8 (−128 to +127)
- Accumulation: Signed INT32
- No saturation/clamping in current implementation
- Matches RTL behavior: `$signed(act_in) * weight_reg` accumulated in 32-bit

See: `docs/l6_arithmetic_semantics_report.md` for full policy.
