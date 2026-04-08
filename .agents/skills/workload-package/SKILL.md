---
name: workload-package
description: How to create, validate, and manage workload test packages for NPU core and system replay
---

# Workload Package Guide

Workload packages are the standard way to define test scenarios for Verilator replay simulations.

---

## 1. Package Directory Structure

### Core Replay Package
```
workloads/<package_name>/
├── manifest.json      # Test configuration
├── weight.bin         # Weight data (binary, row-major INT8)
├── act.bin            # Activation data (binary, row-major INT8)
└── golden.bin         # Expected output (binary, column-major INT32)
```

### System Replay Package
```
workloads/system_<package_name>/
├── manifest.json      # System-level test configuration
├── weight.bin
├── act.bin
└── golden.bin
```

System packages are prefixed with `system_` by convention.

---

## 2. Manifest Schema — Core Package

```json
{
  "name": "reference_gemm_tile_m0_n0_k0to15",
  "type": "core",
  "tile_m": 0,
  "tile_n": 0,
  "tile_k_start": 0,
  "tile_k_end": 15,
  "seq_len": 16,
  "acc_clear": true,
  "weight_file": "weight.bin",
  "activation_file": "act.bin",
  "golden_file": "golden.bin"
}
```

| Field | Type | Description |
|---|---|---|
| `name` | string | Human-readable package name |
| `type` | string | `"core"` or `"system"` |
| `tile_m/n` | int | Tile coordinates in output feature map |
| `tile_k_start/end` | int | K-dimension range (for split-K) |
| `seq_len` | int | Number of activation rows to feed (1-1024) |
| `acc_clear` | bool | `true` = overwrite accumulator, `false` = accumulate |

---

## 3. Manifest Schema — System Package

System packages have additional DMA and MMIO fields:

```json
{
  "name": "system_reference_gemm_tile_m0_n0_k0to15",
  "type": "system",
  "tile_m": 0,
  "tile_n": 0,
  "seq_len": 16,
  "acc_clear": true,
  "dma_config": {
    "weight_burst_len": 15,
    "weight_total_bursts": 1,
    "act_burst_len": 15,
    "act_total_bursts": 1
  },
  "weight_file": "weight.bin",
  "activation_file": "act.bin",
  "golden_file": "golden.bin"
}
```

Additional optional fields:
| Field | Description |
|---|---|
| `verification_acc_addr_override` | Force accumulator address (for forwarding tests) |
| `verification_one_shot_acc_clear` | Only clear on first valid (for multi-pass) |
| `valid_lanes` | Output lanes to compare (for tail tiles) |

---

## 4. Data File Formats

### weight.bin
- Format: Row-major, INT8 (signed byte)
- Size: `16 × seq_len` bytes (each row = 16 weight values for 16 PE columns)
- Row i → weights loaded into systolic array row i

### act.bin
- Format: Row-major, INT8 (signed byte)
- Size: `16 × seq_len` bytes (each row = 16 activation values for 16 PE rows)
- Fed cycle by cycle into the array's left input

### golden.bin
- Format: Column-major, INT32 (signed 32-bit, little-endian)
- Size: `16 × 16 × 4` bytes = 1024 bytes (16 rows × 16 columns)
- Each element = expected accumulated psum at `[row][col]`

---

## 5. Golden Computation

For a single tile with `acc_clear=true`:

```python
golden[row][col] = sum(act[cycle][row] * weight[cycle][col] for cycle in range(seq_len))
```

Where act and weight are signed INT8, accumulated as signed INT32.

For split-K (multiple passes):
- First pass: `acc_clear=true` (overwrite)
- Subsequent passes: `acc_clear=false` (accumulate on top)
- Final golden = sum of all passes

---

## 6. Creating a Package with L6 Toolchain

```python
from l6_toolchain.api import compile_program
from l6_toolchain.replay_bridge import export_system_replay_package

# From PyTorch model
result = compile_program(torch_model, options={"output_dir": "workloads/my_test"})

# Or from IR directly
export_system_replay_package(program, output_dir="workloads/system_my_test")
```

---

## 7. Creating a Package Manually

```python
import numpy as np
import struct, json, os

name = "custom_test_package"
out_dir = f"workloads/{name}"
os.makedirs(out_dir, exist_ok=True)

# Generate test data (16×16 tile, seq_len=16)
seq_len = 16
weights = np.ones((seq_len, 16), dtype=np.int8)  # All weights = 1
acts = np.arange(16, dtype=np.int8).reshape(1, 16).repeat(seq_len, axis=0)

# Compute golden (signed multiply-accumulate)
golden = np.zeros((16, 16), dtype=np.int32)
for cycle in range(seq_len):
    for row in range(16):
        for col in range(16):
            golden[row][col] += int(acts[cycle][row]) * int(weights[cycle][col])

# Write files
weights.tobytes()  # -> weight.bin
acts.tobytes()     # -> act.bin

with open(f"{out_dir}/weight.bin", "wb") as f:
    f.write(weights.tobytes())
with open(f"{out_dir}/act.bin", "wb") as f:
    f.write(acts.tobytes())
with open(f"{out_dir}/golden.bin", "wb") as f:
    # Column-major INT32
    for col in range(16):
        for row in range(16):
            f.write(struct.pack("<i", golden[row][col]))

# Write manifest
manifest = {
    "name": name,
    "type": "core",
    "tile_m": 0, "tile_n": 0,
    "tile_k_start": 0, "tile_k_end": seq_len - 1,
    "seq_len": seq_len,
    "acc_clear": True,
    "weight_file": "weight.bin",
    "activation_file": "act.bin",
    "golden_file": "golden.bin"
}
with open(f"{out_dir}/manifest.json", "w") as f:
    json.dump(manifest, f, indent=2)
```

---

## 8. Validation and Running

```bash
# Core replay
./build/Vnpu_core_top workloads/custom_test_package

# System replay (prefix with system_)
make sim-system SYSTEM_PACKAGE=../workloads/system_custom_test_package
```

---

## 9. Chained Packages

Multiple packages can be chained for multi-step execution (e.g., split-K):

Place successive packages in ordered directories under a parent, or use the `program_chain` pattern from L6.

The system replay runner executes them sequentially with bank swaps between DMA and compute phases.
