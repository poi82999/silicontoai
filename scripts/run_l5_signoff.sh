#!/usr/bin/env bash

set -euo pipefail

DATA_MODE="int8"

usage() {
  cat <<EOF
Usage: bash scripts/run_l5_signoff.sh [--mode int8|fp16]

Notes:
  --mode int8 : Full L5 signoff (default)
  --mode fp16 : Smoke-only skeleton path (verify build smoke + summary)
EOF
}

while [[ $# -gt 0 ]]; do
  case "$1" in
    --mode)
      if [[ $# -lt 2 ]]; then
        echo "[L5 SIGNOFF ERROR] --mode requires a value (int8|fp16)"
        usage
        exit 1
      fi
      DATA_MODE="$2"
      shift
      ;;
    -h|--help)
      usage
      exit 0
      ;;
    *)
      echo "[L5 SIGNOFF ERROR] unknown argument: $1"
      usage
      exit 1
      ;;
  esac
  shift
done

if [[ "$DATA_MODE" != "int8" && "$DATA_MODE" != "fp16" ]]; then
  echo "[L5 SIGNOFF ERROR] --mode must be one of: int8, fp16"
  exit 1
fi

ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
cd "$ROOT_DIR"

SYSTEM_PACKAGES=(
  "workloads/system_reference_gemm_tile_m0_n0_k0to15"
  "workloads/system_reference_gemm_tile_m0_n0_k0to31_splitk"
  "workloads/system_reference_gemm_tile_m0_n16_k0to15"
  "workloads/system_reference_gemm_tile_m16_n0_k0to15"
  "workloads/system_reference_gemm_tile_m0_n0_k0to15_multiburst"
  "workloads/system_reference_gemm_tile_m0_n0_k0to31_splitk_bankstress"
  "workloads/system_reference_forwarding_same_addr_m0_n0_k0to15"
  "workloads/system_int8_edge_all_max_pos"
  "workloads/system_int8_edge_all_min_neg"
  "workloads/system_int8_edge_mixed_sign_checker"
  "workloads/system_negative_invalid_dma_bytes"
)
FP16_SMOKE_PACKAGES=(
  "workloads/system_fp16_numeric_smoke"
)

SIGNOFF_DIR="sim/verify/l5_signoff"
LOCK_DIR="$SIGNOFF_DIR/.run_lock"
LOCK_PID_FILE="$LOCK_DIR/pid"
RUN_ID="$(date +%Y%m%d_%H%M%S)"
RUN_DIR="$SIGNOFF_DIR/runs/$RUN_ID"
CHAIN_SUMMARY_RUN="$RUN_DIR/replay_chain_summary.txt"
SYSTEM_LOG_RUN="$RUN_DIR/system_chain.log"
CORE_LOG_RUN="$RUN_DIR/core_forwarding.log"
SUMMARY_FILE_RUN="$RUN_DIR/l5_signoff_summary.txt"
VERIFY_LOG_RUN="$RUN_DIR/verify_full.log"
VERIFY_SUMMARY_RUN="$RUN_DIR/assertion_cov_summary.txt"
PKG_GEN_LOG_RUN="$RUN_DIR/package_generation.log"

CORE_REFERENCE_PACKAGE="workloads/reference_gemm_tile_m0_n0_k0to15"
CORE_FORWARDING_PACKAGE="workloads/reference_acc_forwarding_same_addr_core"
CORE_REFERENCE_LOG_RUN="$RUN_DIR/core_reference.log"
SYSTEM_LOG="$SIGNOFF_DIR/system_chain.log"
CORE_LOG="$SIGNOFF_DIR/core_forwarding.log"
CORE_REFERENCE_LOG="$SIGNOFF_DIR/core_reference.log"
SUMMARY_FILE="$SIGNOFF_DIR/l5_signoff_summary.txt"
VERIFY_LOG="$SIGNOFF_DIR/verify_full.log"
VERIFY_SUMMARY="$SIGNOFF_DIR/assertion_cov_summary.txt"
SYSTEM_FORWARDING_COVERAGE="workloads/system_reference_forwarding_same_addr_m0_n0_k0to15/replay_coverage.txt"
CORE_FORWARDING_COVERAGE="workloads/reference_acc_forwarding_same_addr_core/replay_coverage.txt"

EXPECTED_PACKAGES="${#SYSTEM_PACKAGES[@]}"
EXPECTED_PACKAGE_ERRORS=1
REQUIRED_PACKAGES_BY_MODE="int8:${#SYSTEM_PACKAGES[@]},fp16:${#FP16_SMOKE_PACKAGES[@]}"
VERILATOR_GFLAGS_MODE=""
if [[ "$DATA_MODE" == "fp16" ]]; then
  VERILATOR_GFLAGS_MODE="-GDATA_MODE=1"
fi

mkdir -p "$SIGNOFF_DIR"

acquire_signoff_lock() {
  if mkdir "$LOCK_DIR" 2>/dev/null; then
    echo "$$" > "$LOCK_PID_FILE"
    return 0
  fi

  local lock_pid=""
  if [[ -f "$LOCK_PID_FILE" ]]; then
    lock_pid="$(cat "$LOCK_PID_FILE" 2>/dev/null || true)"
  fi

  if [[ "$lock_pid" =~ ^[0-9]+$ ]] && kill -0 "$lock_pid" 2>/dev/null; then
    echo "[L5 SIGNOFF ERROR] another signoff run is active (pid=$lock_pid)."
    echo "[L5 SIGNOFF ERROR] stop the stale/background run first, then retry."
    exit 1
  fi

  echo "[L5 SIGNOFF WARN] stale lock detected (pid=${lock_pid:-unknown}); cleaning lock and continuing."
  rm -rf "$LOCK_DIR"
  mkdir "$LOCK_DIR"
  echo "$$" > "$LOCK_PID_FILE"
}

release_signoff_lock() {
  if [[ -f "$LOCK_PID_FILE" ]] && [[ "$(cat "$LOCK_PID_FILE" 2>/dev/null || true)" == "$$" ]]; then
    rm -rf "$LOCK_DIR"
  fi
}

trap release_signoff_lock EXIT INT TERM

acquire_signoff_lock

mkdir -p "$RUN_DIR"

PYTHON_BIN="${PYTHON_BIN:-python3}"
if ! command -v "$PYTHON_BIN" >/dev/null 2>&1; then
  PYTHON_BIN="python"
fi

"$PYTHON_BIN" tools/generate_streamlined_signoff_packages.py --mode "$DATA_MODE" > "$PKG_GEN_LOG_RUN" 2>&1

bash scripts/verify.sh full --data-mode "$DATA_MODE" > "$VERIFY_LOG_RUN" 2>&1
cp sim/verify/assertion_cov_summary.txt "$VERIFY_SUMMARY_RUN"

if [[ "$DATA_MODE" == "fp16" ]]; then
cat > "$SUMMARY_FILE_RUN" <<EOF
report_id=L5-SIGNOFF-$RUN_ID
data_mode=$DATA_MODE
required_packages_by_mode=$REQUIRED_PACKAGES_BY_MODE
decision=SMOKE_PASS
signoff_scope=fp16_smoke_only
required_system_packages=${#FP16_SMOKE_PACKAGES[@]}
assertion_failures_allowed=0
dut_mismatches_allowed=not_applicable
verification_only_hook_policy=mode_switch_skeleton
verify_log=$VERIFY_LOG_RUN
verify_summary=$VERIFY_SUMMARY_RUN
notes=FP16 path runs numeric UVM smoke with dedicated fp16 package generation for compare policy synchronization.
EOF

cp "$VERIFY_SUMMARY_RUN" "$VERIFY_SUMMARY"
cp "$VERIFY_LOG_RUN" "$VERIFY_LOG"
cp "$SUMMARY_FILE_RUN" "$SUMMARY_FILE"

cat "$SUMMARY_FILE"
exit 0
fi

grep -q '^===== SYSTEM ASSERTION COVERAGE =====$' "$VERIFY_SUMMARY_RUN"
grep -q '^===== UVM ASSERTION COVERAGE =====$' "$VERIFY_SUMMARY_RUN"
for coverpoint in \
  cp_dma_start_seen \
  cp_dma_done_seen \
  cp_weight_load_mode_start_seen \
  cp_execute_mode_start_seen \
  cp_forwarding_hit_seen \
  cp_drain_request_seen; do
  grep -q "${coverpoint}" "$VERIFY_SUMMARY_RUN"
done

make -C scripts build-system VERILATOR_GFLAGS="$VERILATOR_GFLAGS_MODE" > "$RUN_DIR/build_system.log" 2>&1
./build_system/Vnpu_system_top --chain-summary="$CHAIN_SUMMARY_RUN" "${SYSTEM_PACKAGES[@]}" > "$SYSTEM_LOG_RUN" 2>&1

make -C scripts build-core VERILATOR_GFLAGS="$VERILATOR_GFLAGS_MODE" > "$RUN_DIR/build_core.log" 2>&1
./build/Vnpu_core_top "$CORE_REFERENCE_PACKAGE" > "$CORE_REFERENCE_LOG_RUN" 2>&1
grep -q '\[REPLAY PASS\]' "$CORE_REFERENCE_LOG_RUN"
./build/Vnpu_core_top "$CORE_FORWARDING_PACKAGE" > "$CORE_LOG_RUN" 2>&1

packages_total="$(grep '^packages_total=' "$CHAIN_SUMMARY_RUN" | cut -d= -f2)"
packages_passed="$(grep '^packages_passed=' "$CHAIN_SUMMARY_RUN" | cut -d= -f2)"
packages_with_expected_package_error="$(grep '^packages_with_expected_package_error=' "$CHAIN_SUMMARY_RUN" | cut -d= -f2)"
packages_failed="$(grep '^packages_failed=' "$CHAIN_SUMMARY_RUN" | cut -d= -f2)"

if [ "$packages_total" -ne "$EXPECTED_PACKAGES" ]; then
  echo "[L5 SIGNOFF ERROR] packages_total=$packages_total expected=$EXPECTED_PACKAGES"
  exit 1
fi
if [ "$packages_with_expected_package_error" -ne "$EXPECTED_PACKAGE_ERRORS" ]; then
  echo "[L5 SIGNOFF ERROR] packages_with_expected_package_error=$packages_with_expected_package_error expected=$EXPECTED_PACKAGE_ERRORS"
  exit 1
fi
if [ "$packages_failed" -ne 0 ]; then
  echo "[L5 SIGNOFF ERROR] packages_failed=$packages_failed expected=0"
  exit 1
fi
if [ "$packages_passed" -ne $((EXPECTED_PACKAGES - EXPECTED_PACKAGE_ERRORS)) ]; then
  echo "[L5 SIGNOFF ERROR] packages_passed=$packages_passed expected=$((EXPECTED_PACKAGES - EXPECTED_PACKAGE_ERRORS))"
  exit 1
fi

for coverpoint in \
  cp_dma_start_seen \
  cp_dma_done_seen \
  cp_weight_load_mode_start_seen \
  cp_execute_mode_start_seen \
  cp_forwarding_hit_seen \
  cp_drain_request_seen \
  cp_split_k_seen \
  cp_multiburst_dma_seen \
  cp_n_tile_seen \
  cp_m_tile_seen \
  cp_negative_validation_seen; do
  grep -q "^${coverpoint}=HIT " "$CHAIN_SUMMARY_RUN"
done

grep -q '^cp_forwarding_hit_seen=HIT ' "$SYSTEM_FORWARDING_COVERAGE"
grep -q '^cp_forwarding_hit_seen=HIT ' "$CORE_FORWARDING_COVERAGE"

cat > "$SUMMARY_FILE_RUN" <<EOF
report_id=L5-SIGNOFF-$RUN_ID
data_mode=$DATA_MODE
decision=PASS
required_packages_by_mode=$REQUIRED_PACKAGES_BY_MODE
required_system_packages=$packages_total
system_packages_passed=$packages_passed
system_packages_with_expected_package_error=$packages_with_expected_package_error
system_packages_failed=$packages_failed
assertion_failures_allowed=0
dut_mismatches_allowed=0
required_system_coverpoints=cp_dma_start_seen,cp_dma_done_seen,cp_weight_load_mode_start_seen,cp_execute_mode_start_seen,cp_forwarding_hit_seen,cp_drain_request_seen
required_extended_coverpoints=cp_split_k_seen,cp_multiburst_dma_seen,cp_n_tile_seen,cp_m_tile_seen,cp_negative_validation_seen
required_chain_run=1
verification_only_hook_policy=streamlined_dma_execute
vivado_system_assertion_presence_gate=PASS
uvm_assertion_presence_gate=PASS
system_forwarding_package=PASS
system_forwarding_hit=HIT
core_forwarding_reference=PASS
core_forwarding_hit=HIT
required_core_packages=2
core_reference_package=PASS
package_generation_log=$PKG_GEN_LOG_RUN
verify_log=$VERIFY_LOG_RUN
verify_summary=$VERIFY_SUMMARY_RUN
chain_summary=$CHAIN_SUMMARY
system_log=$SYSTEM_LOG
core_log=$CORE_LOG
EOF

cp "$CHAIN_SUMMARY_RUN" "$CHAIN_SUMMARY"
cp "$SYSTEM_LOG_RUN" "$SYSTEM_LOG"
cp "$CORE_LOG_RUN" "$CORE_LOG"
cp "$CORE_REFERENCE_LOG_RUN" "$CORE_REFERENCE_LOG"
cp "$VERIFY_SUMMARY_RUN" "$VERIFY_SUMMARY"
cp "$VERIFY_LOG_RUN" "$VERIFY_LOG"
cp "$SUMMARY_FILE_RUN" "$SUMMARY_FILE"

cat "$SUMMARY_FILE"