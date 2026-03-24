#!/bin/bash
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
ROOT_DIR="$(cd "${SCRIPT_DIR}/.." && pwd)"
TESTNAME="${1:-npu_test}"
SNAPSHOT="sim_snapshot_$(date +%s)"
SIM_DIR="${ROOT_DIR}/sim/uvm"
RUNS_DIR="${SIM_DIR}/runs"
RUN_DIR="${RUNS_DIR}/${SNAPSHOT}"
WORK_DIR="${RUN_DIR}/work"
SIM_LOG="${RUN_DIR}/sim.log"
COV_DIR="${SIM_DIR}/coverage"
COV_REPORT_DIR="${COV_DIR}/report_${SNAPSHOT}"
COV_LOG="${RUN_DIR}/coverage.log"
COV_TXT_REPORT="${COV_REPORT_DIR}/functionalCoverageReport/xcrg_func_cov_report.txt"
ASSERT_COV_SUMMARY="${RUN_DIR}/assertion_cov_summary.txt"
WDB_FILE="${RUN_DIR}/waves.wdb"
LATEST_RUN="${SIM_DIR}/latest_run.txt"
LATEST_SIM_LOG="${SIM_DIR}/latest_sim_log.txt"
LATEST_COV_REPORT="${SIM_DIR}/latest_cov_report.txt"
LATEST_ASSERT_SUMMARY="${SIM_DIR}/latest_assert_cov_summary.txt"

prune_uvm_runs() {
    local max_runs="${UVM_MAX_RUNS:-8}"
    local old_runs=()

    mapfile -t old_runs < <(find "${RUNS_DIR}" -mindepth 1 -maxdepth 1 -type d -printf '%T@ %f\n' | sort -nr | awk -v keep="${max_runs}" 'NR > keep {print $2}')

    for run_name in "${old_runs[@]}"; do
        rm -rf "${RUNS_DIR}/${run_name}" "${COV_DIR}/xsim.covdb/${run_name}" "${COV_DIR}/report_${run_name}"
    done
}

if ! command -v xvlog >/dev/null 2>&1 || ! command -v xelab >/dev/null 2>&1 || ! command -v xsim >/dev/null 2>&1 || ! command -v xcrg >/dev/null 2>&1 || \
    ! xvlog -version >/dev/null 2>&1 || ! xelab -version >/dev/null 2>&1 || ! xsim -version >/dev/null 2>&1; then
    if command -v cmd.exe >/dev/null 2>&1 && [[ -f "${SCRIPT_DIR}/run_uvm.bat" ]]; then
        echo "[UVM Script] Linux Vivado tools are not on PATH. Falling back to Windows Vivado via cmd.exe."
        cmd.exe /c "cd /d $(wslpath -w "${SCRIPT_DIR}") && call run_uvm.bat ${TESTNAME}"
        exit $?
    fi

    echo "[UVM Script] Vivado simulator tools are not on PATH."
    exit 1
fi

rm -f "${SCRIPT_DIR}"/*.log "${SCRIPT_DIR}"/*.pb
mkdir -p "${RUN_DIR}" "${WORK_DIR}" "${COV_DIR}"
rm -rf "${COV_REPORT_DIR}" "${COV_DIR}/xsim.covdb/${SNAPSHOT}" "${COV_DIR}/xsim.codecov/${SNAPSHOT}" "${WORK_DIR}/xsim.dir"
rm -f "${RUN_DIR}/compile.log" "${RUN_DIR}/elaborate.log" "${COV_LOG}" "${ASSERT_COV_SUMMARY}" "${WDB_FILE}"

printf '%s\n' "${RUN_DIR}" > "${LATEST_RUN}"
printf '%s\n' "${SIM_LOG}" > "${LATEST_SIM_LOG}"

echo "[UVM Script] Starting Compilation..."
(cd "${WORK_DIR}" && \
    xvlog --nolog -sv -L uvm \
        "${ROOT_DIR}/rtl/mac_pe.sv" \
        "${ROOT_DIR}/rtl/systolic_data_setup.sv" \
        "${ROOT_DIR}/rtl/psum_accumulator_buffer.sv" \
        "${ROOT_DIR}/rtl/systolic_array_16x16.sv" \
        "${ROOT_DIR}/rtl/npu_core_top.sv" \
        "${ROOT_DIR}/tb/npu_if.sv" \
        "${ROOT_DIR}/tb/npu_uvm_pkg.sv" \
        "${ROOT_DIR}/tb/assertions/npu_assertions.sv" \
        "${ROOT_DIR}/tb/assertions/npu_assert_coverage.sv" \
        "${ROOT_DIR}/tb/assertions/core_assert_bind.sv" \
        "${ROOT_DIR}/tb/tb_top.sv") > "${RUN_DIR}/compile.log" 2>&1

echo "[UVM Script] Starting Elaboration..."
(cd "${WORK_DIR}" && \
    xelab --nolog -L uvm -timescale 1ns/1ps -debug typical \
        --cov_db_dir "${COV_DIR}" \
        --cov_db_name "${SNAPSHOT}" \
        tb_top -s "${SNAPSHOT}") > "${RUN_DIR}/elaborate.log" 2>&1

echo "[UVM Script] Starting Simulation..."
(cd "${WORK_DIR}" && \
    xsim --nolog "${SNAPSHOT}" -R \
        --wdb "${WDB_FILE}" \
        --cov_db_dir "${COV_DIR}" \
        --cov_db_name "${SNAPSHOT}" \
        -testplusarg "UVM_TESTNAME=${TESTNAME}") > "${SIM_LOG}" 2>&1

xcrg -nolog -cov_db_dir "${COV_DIR}" \
    -cov_db_name "${SNAPSHOT}" \
    -report_dir "${COV_REPORT_DIR}" \
    -report_format text > "${COV_LOG}" 2>&1

printf '%s\n' "${COV_REPORT_DIR}" > "${LATEST_COV_REPORT}"
printf '%s\n' "${ASSERT_COV_SUMMARY}" > "${LATEST_ASSERT_SUMMARY}"
grep -E "Coverage Score|cp_|p_" "${COV_TXT_REPORT}" > "${ASSERT_COV_SUMMARY}" || true
prune_uvm_runs

echo "[UVM Script] Result summary..."
grep -E "UVM_ERROR|UVM_FATAL|SCB_PASS|SCB_FAIL" "${SIM_LOG}" || true
if grep -Eq "\[SCB_FAIL\]|UVM_ERROR [^:]+|UVM_FATAL [^:]" "${SIM_LOG}"; then
    echo "[ERROR] Failure markers found in ${SIM_LOG}"
    exit 1
fi
grep -q "SCB_PASS" "${SIM_LOG}"
echo "Done. Full log: ${SIM_LOG}"
echo "Coverage report: ${COV_REPORT_DIR}"
echo "Assertion coverage summary: ${ASSERT_COV_SUMMARY}"
