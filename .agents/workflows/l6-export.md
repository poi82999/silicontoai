---
description: End-to-end PyTorch model to L6 compile to Verilator replay verification
---

# PyTorch → L6 Compile → Replay Verification

Use this workflow to compile a PyTorch model through the L6 toolchain and verify correctness via Verilator simulation.

## Steps

1. **Activate Python environment**:
   ```powershell
   c:\projects\silicontoai\.venv312\Scripts\activate
   ```

2. **Define or modify the model** (example: simple Linear):
   ```python
   import torch.nn as nn
   model = nn.Sequential(nn.Linear(16, 16, bias=False))
   ```

3. **Compile with L6 toolchain**:
   ```python
   from l6_toolchain.api import compile_program
   result = compile_program(model, options={"output_dir": "l6/generated/my_model"})
   print(result.summary)
   ```

   Or via CLI:
   ```bash
   python -m l6_toolchain compile --program-json l6/generated/my_model/program.json
   ```

4. **Export to system replay packages** (if not done by compiler):
   ```python
   from l6_toolchain.replay_bridge import export_system_replay_package
   export_system_replay_package(result.program, output_dir="workloads/system_my_model")
   ```

5. **Build Verilator System** (if not already built):
   ```bash
   cd c:\projects\silicontoai
   make build-system
   ```

6. **Run System Replay**:
   ```bash
   make sim-system SYSTEM_PACKAGE=../workloads/system_my_model
   ```
   Check for `ALL PASS`.

7. **Run L6 tests** to ensure no regressions:
   ```bash
   python -m pytest l6/tests -v
   ```

8. **(Optional) Check for asset drift**:
   ```bash
   python -m pytest l6/tests/test_asset_drift.py -v
   ```

9. **(Optional) Regenerate fixed assets** if IR/arithmetic changed:
   ```bash
   python l6/regenerate_fixed_replay_assets.py
   ```
