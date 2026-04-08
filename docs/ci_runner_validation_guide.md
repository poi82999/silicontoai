# CI Runner Validation Guide (Sprint-4 Day 5)

## Overview

This document provides step-by-step instructions for validating the `workload-regression.yml` GitHub Actions workflow on a self-hosted Windows runner.

## Prerequisites

- ✅ Local L5 signoff tests PASS (INT8 mode)
- ✅ Commits pushed to `poi82999/silicontoai` (main branch)
- ✅ GitHub Actions runner registered and online
- ✅ WSL, bash, Verilator available on runner

## Current Status (2026-04-08)

### Local Verification ✅

```
L5 Signoff Report ID: L5-SIGNOFF-20260408_165342
Data Mode: INT8
Decision: PASS

Packages Summary:
- Total: 11
- Passed: 10 ✅
- Expected Error: 1 ✅
- Failed: 0

Coverage Status:
- cp_dma_start_seen: HIT
- cp_dma_done_seen: HIT
- cp_weight_load_mode_start_seen: HIT
- cp_execute_mode_start_seen: HIT
- cp_forwarding_hit_seen: HIT
- cp_drain_request_seen: HIT
- cp_split_k_seen: HIT
- cp_multiburst_dma_seen: HIT
- cp_n_tile_seen: HIT
- cp_m_tile_seen: HIT
- cp_negative_validation_seen: HIT
```

### GitHub Push Status ✅

```
Commit: 74b08f6 → main (poi82999/silicontoai)
Files: dma_scheduler.py, api.py, current_status_report.md, agent_development_roadmap.md
Status: ✅ Successfully pushed
Note: Large build artifacts (64-65 MB .gch files) trigger GitHub LFS warning (non-blocking)
```

## Step-by-Step Runner Validation

### Method 1: GitHub UI (Recommended for First Run)

1. **Navigate to GitHub Actions**
   - Go to: https://github.com/poi82999/silicontoai/actions
   - Look for "Workload Regression" workflow

2. **Manually Trigger Dispatch**
   - Click "Workload Regression"
   - Click "Run workflow" button
   - Select `main` branch
   - Click "Run workflow"

3. **Monitor Execution**
   - Workflow should appear in the list
   - Click on the workflow run to view real-time logs
   - Expected runtime: 15-30 minutes (depending on runner performance)

### Method 2: GitHub CLI (If Available)

```bash
gh workflow run workload-regression.yml -r main
```

Then monitor:

```bash
gh run list --workflow workload-regression.yml -L 5
```

## Expected Workflow Execution

```
Job: workload-regression
Runner: self-hosted, windows

Steps:
1. Checkout (standard)
2. Normalize shell scripts for WSL
   - Converts CRLF → LF for bash scripts
   - Adds execute permissions
3. Run INT8 one-shot signoff gate ⏱️ ~10 min
   - Command: bash scripts/run_l5_signoff.sh --mode int8
   - Expected: PASS (11 packages, 10 passed)
4. Run FP16 smoke signoff gate ⏱️ ~5 min
   - Command: bash scripts/run_l5_signoff.sh --mode fp16
   - Expected: PASS (smoke mode only)
5. Run repeatability gate ⏱️ ~25 min
   - Command: bash scripts/check_l5_repeatability.sh
   - Expected: PASS (2 runs must match)
6. Upload artifacts
   - sim/verify/l5_signoff/
   - sim/verify/l5_repeatability/
```

## Success Criteria

### ✅ GREEN (All Gates Pass)

```
✓ INT8 signoff: PASS
✓ FP16 smoke: PASS
✓ Repeatability: PASS
✓ Artifacts uploaded
```

→ **Conclusion:** Runner environment is stable and compatible

### ⚠️ YELLOW (Some Gates Fail)

If one or more gates fail:

1. **INT8 Signoff Fails** → Issue with system replay or UVM tests
   - Check: Verilator installation, RTL changes, workload package integrity
   
2. **FP16 Smoke Fails** → Issue with FP16 data mode
   - Check: FP16 support in tb/main.cpp and GFLAGS
   - Likely: Requires specific tb/ changes or dedicated FP16 netlist

3. **Repeatability Fails** → Non-deterministic behavior
   - Check: Seed management in UVM, random number generators
   - Solution: May require RANDOM_SEED=0 enforcement

### 🔴 RED (Workflow Execution Error)

Possible causes:
- Runner offline/misconfigured
- WSL bash not available
- Workspace path not accessible
- Script encoding issues (CRLF)

**Troubleshooting:**
```bash
# On runner machine
wsl --list -v
which bash
pwd  # Verify working directory
```

## Post-Validation Actions

### If All Gates Pass ✅

1. Update `docs/current_status_report.md`:
   ```markdown
   **[2026-04-08 update #10]**
   - workload-regression.yml runner validation: ✅ ALL GATES PASS
   - INT8 signoff: 10/11 packages PASS (1 expected error)
   - FP16 smoke: PASS
   - Repeatability: PASS
   ```

2. Document runner configuration for future use
3. Consider making workload-regression a required check for all PRs

### If Gates Fail ⚠️

1. Investigate specific failure logs from artifact download
2. Create issue with failure details
3. Adjust runner environment as needed
4. Re-trigger workflow after fixes

## References

- `.github/workflows/workload-regression.yml`: Workflow definition
- `scripts/run_l5_signoff.sh`: INT8/FP16 signoff implementation
- `scripts/check_l5_repeatability.sh`: Repeatability check logic
- `docs/functional_contract_report.md`: RTL semantics reference
