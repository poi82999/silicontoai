#!/usr/bin/env bash

set -euo pipefail

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
  "workloads/system_negative_invalid_dma_bytes"
)

SIGNOFF_DIR="sim/verify/l5_signoff"
CHAIN_SUMMARY="$SIGNOFF_DIR/replay_chain_summary.txt"
SYSTEM_LOG="$SIGNOFF_DIR/system_chain.log"
CORE_LOG="$SIGNOFF_DIR/core_forwarding.log"
SUMMARY_FILE="$SIGNOFF_DIR/l5_signoff_summary.txt"
VERIFY_LOG="$SIGNOFF_DIR/verify_full.log"
VERIFY_SUMMARY="$SIGNOFF_DIR/assertion_cov_summary.txt"
SYSTEM_FORWARDING_COVERAGE="workloads/system_reference_forwarding_same_addr_m0_n0_k0to15/replay_coverage.txt"
CORE_FORWARDING_COVERAGE="workloads/reference_acc_forwarding_same_addr_core/replay_coverage.txt"

mkdir -p "$SIGNOFF_DIR"

bash scripts/verify.sh full > "$VERIFY_LOG" 2>&1
cp sim/verify/assertion_cov_summary.txt "$VERIFY_SUMMARY"

grep -q '^===== SYSTEM ASSERTION COVERAGE =====$' "$VERIFY_SUMMARY"
grep -q '^===== UVM ASSERTION COVERAGE =====$' "$VERIFY_SUMMARY"
for coverpoint in \
  cp_dma_start_seen \
  cp_dma_done_seen \
  cp_weight_load_mode_start_seen \
  cp_execute_mode_start_seen \
  cp_forwarding_hit_seen \
  cp_drain_request_seen; do
  grep -q "${coverpoint}" "$VERIFY_SUMMARY"
done

make -C scripts build-system > "$SIGNOFF_DIR/build_system.log" 2>&1
./build_system/Vnpu_system_top --chain-summary="$CHAIN_SUMMARY" "${SYSTEM_PACKAGES[@]}" > "$SYSTEM_LOG" 2>&1

make -C scripts build-core > "$SIGNOFF_DIR/build_core.log" 2>&1
./build/Vnpu_core_top workloads/reference_acc_forwarding_same_addr_core > "$CORE_LOG" 2>&1

grep -q '^packages_total=8$' "$CHAIN_SUMMARY"
grep -q '^packages_passed=7$' "$CHAIN_SUMMARY"
grep -q '^packages_with_expected_package_error=1$' "$CHAIN_SUMMARY"
grep -q '^packages_failed=0$' "$CHAIN_SUMMARY"

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
  grep -q "^${coverpoint}=HIT " "$CHAIN_SUMMARY"
done

grep -q '^cp_forwarding_hit_seen=HIT ' "$SYSTEM_FORWARDING_COVERAGE"
grep -q '^cp_forwarding_hit_seen=HIT ' "$CORE_FORWARDING_COVERAGE"

cat > "$SUMMARY_FILE" <<EOF
report_id=L5-SIGNOFF-2026-03-24-ONE-SHOT
decision=PASS
required_system_packages=8
system_packages_passed=7
system_packages_with_expected_package_error=1
system_packages_failed=0
assertion_failures_allowed=0
dut_mismatches_allowed=0
required_system_coverpoints=cp_dma_start_seen,cp_dma_done_seen,cp_weight_load_mode_start_seen,cp_execute_mode_start_seen,cp_forwarding_hit_seen,cp_drain_request_seen
required_extended_coverpoints=cp_split_k_seen,cp_multiburst_dma_seen,cp_n_tile_seen,cp_m_tile_seen,cp_negative_validation_seen
required_chain_run=1
verification_only_hook_policy=directed_vivado_path_tied_off_system_replay_only_manifest_control
vivado_system_assertion_presence_gate=PASS
uvm_assertion_presence_gate=PASS
system_forwarding_package=PASS
system_forwarding_hit=HIT
core_forwarding_reference=PASS
core_forwarding_hit=HIT
verify_log=$VERIFY_LOG
verify_summary=$VERIFY_SUMMARY
chain_summary=$CHAIN_SUMMARY
system_log=$SYSTEM_LOG
core_log=$CORE_LOG
EOF

cat "$SUMMARY_FILE"