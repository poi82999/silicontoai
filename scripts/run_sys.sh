#!/bin/bash
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
ROOT_DIR="$(cd "${SCRIPT_DIR}/.." && pwd)"
SIM_DIR="${ROOT_DIR}/sim/system"
OUT_DIR="${SIM_DIR}/latest"
WORK_DIR="${SIM_DIR}/work"
COV_DIR="${SIM_DIR}/coverage"
COV_NAME="tb_system_top_snapshot"
COV_REPORT_DIR="${COV_DIR}/report_${COV_NAME}"
COV_LOG="${OUT_DIR}/coverage.log"
COV_TXT_REPORT="${COV_REPORT_DIR}/functionalCoverageReport/xcrg_func_cov_report.txt"
ASSERT_COV_SUMMARY="${OUT_DIR}/assertion_cov_summary.txt"
WDB_FILE="${OUT_DIR}/tb_system_top.wdb"
LATEST_COV_REPORT="${SIM_DIR}/latest_cov_report.txt"

if ! command -v xvlog >/dev/null 2>&1 || ! command -v xelab >/dev/null 2>&1 || ! command -v xsim >/dev/null 2>&1 || ! command -v xcrg >/dev/null 2>&1 || \
  ! xvlog -version >/dev/null 2>&1 || ! xelab -version >/dev/null 2>&1 || ! xsim -version >/dev/null 2>&1; then
  if command -v cmd.exe >/dev/null 2>&1 && [[ -f "${SCRIPT_DIR}/run_sys.bat" ]]; then
    echo "[SYS Script] Linux Vivado tools are not on PATH. Falling back to Windows Vivado via cmd.exe."
    cmd.exe /c "cd /d $(wslpath -w "${SCRIPT_DIR}") && call run_sys.bat"
    exit $?
  fi

  echo "[SYS Script] Vivado simulator tools are not on PATH."
  exit 1
fi

mkdir -p "${OUT_DIR}" "${WORK_DIR}" "${COV_DIR}"
rm -f "${OUT_DIR}/compile.log" "${OUT_DIR}/elaborate.log" "${OUT_DIR}/sim.log" "${COV_LOG}" "${ASSERT_COV_SUMMARY}" "${WDB_FILE}"
rm -rf "${COV_REPORT_DIR}" "${COV_DIR}/xsim.covdb/${COV_NAME}" "${COV_DIR}/xsim.codecov/${COV_NAME}" "${WORK_DIR}/xsim.dir"

echo "============================================================"
echo " [1/3] Compiling RTL + Testbench (xvlog)..."
echo "============================================================"
(cd "${WORK_DIR}" && \
  xvlog --nolog -sv \
    "${ROOT_DIR}/rtl/dp_sram_bank.sv" \
    "${ROOT_DIR}/rtl/mac_pe.sv" \
    "${ROOT_DIR}/rtl/systolic_data_setup.sv" \
    "${ROOT_DIR}/rtl/systolic_array_16x16.sv" \
    "${ROOT_DIR}/rtl/psum_accumulator_buffer.sv" \
    "${ROOT_DIR}/rtl/dma_controller.sv" \
    "${ROOT_DIR}/rtl/npu_core_top.sv" \
    "${ROOT_DIR}/rtl/npu_system_top.sv" \
    "${ROOT_DIR}/tb/assertions/npu_assertions.sv" \
    "${ROOT_DIR}/tb/assertions/npu_assert_coverage.sv" \
    "${ROOT_DIR}/tb/assertions/system_assert_bind.sv" \
    "${ROOT_DIR}/tb/tb_system_top.sv") > "${OUT_DIR}/compile.log" 2>&1

echo "[OK] Compilation successful."

echo "============================================================"
echo " [2/3] Elaborating (xelab)..."
echo "============================================================"
(cd "${WORK_DIR}" && \
  xelab --nolog -debug typical \
    --cov_db_dir "${COV_DIR}" \
    --cov_db_name "${COV_NAME}" \
    -top tb_system_top \
    -snapshot tb_system_top_snapshot) > "${OUT_DIR}/elaborate.log" 2>&1

echo "[OK] Elaboration successful."

echo "============================================================"
echo " [3/3] Running Simulation (xsim)..."
echo "============================================================"
(cd "${WORK_DIR}" && \
  xsim --nolog tb_system_top_snapshot -R \
    --wdb "${WDB_FILE}" \
    --cov_db_dir "${COV_DIR}" \
    --cov_db_name "${COV_NAME}") > "${OUT_DIR}/sim.log" 2>&1

xcrg -nolog -cov_db_dir "${COV_DIR}" \
  -cov_db_name "${COV_NAME}" \
  -report_dir "${COV_REPORT_DIR}" \
  -report_format text > "${COV_LOG}" 2>&1

printf '%s\n' "${COV_REPORT_DIR}" > "${LATEST_COV_REPORT}"
grep -E "Coverage Score|cp_|p_" "${COV_TXT_REPORT}" > "${ASSERT_COV_SUMMARY}" || true

echo
echo "============================================================"
echo " Result:"
echo "============================================================"
grep -E "PERFECT MATCH|ZERO-DEFECT|FAIL|ERROR" "${OUT_DIR}/sim.log" || true
grep -q "PERFECT MATCH" "${OUT_DIR}/sim.log"
if grep -Eq " \[FAIL\]|\[ERROR\]" "${OUT_DIR}/sim.log"; then
  echo "[ERROR] Failure markers found in ${OUT_DIR}/sim.log"
  exit 1
fi
echo
echo "Done. Full log: ${OUT_DIR}/sim.log"
echo "Coverage report: ${COV_REPORT_DIR}"
echo "Assertion coverage summary: ${ASSERT_COV_SUMMARY}"