#!/bin/bash
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
ROOT_DIR="$(cd "${SCRIPT_DIR}/.." && pwd)"

rm -rf \
  "${ROOT_DIR}/sim/system" \
  "${ROOT_DIR}/sim/uvm" \
  "${ROOT_DIR}/sim/verify" \
  "${ROOT_DIR}/sim/coverage"

rm -f \
  "${ROOT_DIR}/sim/compile.log" \
  "${ROOT_DIR}/sim/elaborate.log" \
  "${ROOT_DIR}/sim/sim.log" \
  "${ROOT_DIR}/sim/coverage_sys.log" \
  "${ROOT_DIR}/sim/assertion_cov_sys_summary.txt" \
  "${ROOT_DIR}/sim/latest_sys_cov_report.txt" \
  "${ROOT_DIR}/sim/uvm_compile.log" \
  "${ROOT_DIR}/sim/uvm_elaborate.log" \
  "${ROOT_DIR}/sim/uvm_sim.log" \
  "${ROOT_DIR}/sim/uvm_latest_path.txt" \
  "${ROOT_DIR}/sim/uvm_latest_cov_report.txt" \
  "${ROOT_DIR}/sim/uvm_latest_assert_cov_summary.txt" \
  "${ROOT_DIR}/sim/uvm_merge_cov.log" \
  "${ROOT_DIR}/sim/uvm_merged_assertion_cov_summary.txt" \
  "${ROOT_DIR}/sim/uvm_latest_merged_cov_report.txt" \
  "${ROOT_DIR}/sim/uvm_latest_merged_assert_cov_summary.txt" \
  "${ROOT_DIR}/sim/verify_core.log" \
  "${ROOT_DIR}/sim/verify_sys.log" \
  "${ROOT_DIR}/sim/verify_uvm.log" \
  "${ROOT_DIR}/sim/verify_assertion_cov_index.txt" \
  "${ROOT_DIR}/sim/verify_assertion_cov_summary.txt"

rm -f "${ROOT_DIR}/sim"/my_sim_*

rm -f \
  "${SCRIPT_DIR}"/*.log \
  "${SCRIPT_DIR}"/*.pb \
  "${SCRIPT_DIR}"/*.wdb \
  "${SCRIPT_DIR}/xsim.jou" \
  "${SCRIPT_DIR}/xsim_"*.backup.jou \
  "${SCRIPT_DIR}/xsim_"*.backup.log \
  "${SCRIPT_DIR}/tr_db.log" \
  "${SCRIPT_DIR}/.xcrg.log"

rm -rf "${SCRIPT_DIR}/xsim.dir" "${SCRIPT_DIR}/..simcoveragesys"

echo "Cleaned simulation artifacts."