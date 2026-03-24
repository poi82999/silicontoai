#!/bin/bash
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
ROOT_DIR="$(cd "${SCRIPT_DIR}/.." && pwd)"
SIM_DIR="${ROOT_DIR}/sim/uvm"
COV_DIR="${SIM_DIR}/coverage"
COV_DB_DIR="${COV_DIR}/xsim.covdb"
MERGE_DIR="${COV_DIR}/merged"
MERGE_DB_NAME="uvm_assert_merged"
MERGE_REPORT_DIR="${MERGE_DIR}/report_${MERGE_DB_NAME}"
MERGE_LOG="${SIM_DIR}/merged_cov.log"
MERGE_TXT_REPORT="${MERGE_REPORT_DIR}/functionalCoverageReport/xcrg_func_cov_report.txt"
MERGE_ASSERT_SUMMARY="${SIM_DIR}/merged_assertion_cov_summary.txt"
LATEST_MERGE_REPORT="${SIM_DIR}/latest_merged_cov_report.txt"
LATEST_MERGE_SUMMARY="${SIM_DIR}/latest_merged_assert_cov_summary.txt"

if ! command -v xcrg >/dev/null 2>&1 || ! xcrg -help >/dev/null 2>&1; then
    if command -v cmd.exe >/dev/null 2>&1 && [[ -f "${SCRIPT_DIR}/merge_uvm_cov.bat" ]]; then
        echo "[UVM Merge] Linux Vivado tools are not on PATH. Falling back to Windows Vivado via cmd.exe."
        cmd.exe /c "cd /d $(wslpath -w "${SCRIPT_DIR}") && call merge_uvm_cov.bat"
        exit $?
    fi

    echo "[UVM Merge] xcrg is not on PATH."
    exit 1
fi

if [[ ! -d "${COV_DB_DIR}" ]]; then
    echo "[UVM Merge] Coverage DB directory not found: ${COV_DB_DIR}"
    exit 1
fi

mapfile -t DB_NAMES < <(find "${COV_DB_DIR}" -mindepth 1 -maxdepth 1 -type d -printf '%f\n' | sort)

if [[ ${#DB_NAMES[@]} -eq 0 ]]; then
    echo "[UVM Merge] No UVM coverage DBs found under ${COV_DB_DIR}"
    exit 1
fi

mkdir -p "${MERGE_DIR}"
rm -rf "${MERGE_DIR}/xsim.covdb/${MERGE_DB_NAME}" "${MERGE_REPORT_DIR}"
rm -f "${MERGE_LOG}" "${MERGE_ASSERT_SUMMARY}"

XCRG_ARGS=( -merge_dir "${MERGE_DIR}" -merge_db_name "${MERGE_DB_NAME}" -report_dir "${MERGE_REPORT_DIR}" -report_format text )
for db_name in "${DB_NAMES[@]}"; do
    XCRG_ARGS+=( -cov_db_dir "${COV_DIR}" -cov_db_name "${db_name}" )
done

echo "[UVM Merge] Merging ${#DB_NAMES[@]} coverage DBs"
xcrg -nolog "${XCRG_ARGS[@]}" > "${MERGE_LOG}" 2>&1

printf '%s\n' "${MERGE_REPORT_DIR}" > "${LATEST_MERGE_REPORT}"
printf '%s\n' "${MERGE_ASSERT_SUMMARY}" > "${LATEST_MERGE_SUMMARY}"
grep -E "Coverage Score|cp_|p_" "${MERGE_TXT_REPORT}" > "${MERGE_ASSERT_SUMMARY}" || true

echo "Merged DB count: ${#DB_NAMES[@]}"
printf 'Merged DBs:\n'
printf ' - %s\n' "${DB_NAMES[@]}"
echo "Merged coverage report: ${MERGE_REPORT_DIR}"
echo "Merged assertion summary: ${MERGE_ASSERT_SUMMARY}"