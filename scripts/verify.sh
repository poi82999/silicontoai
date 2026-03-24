#!/bin/bash
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
ROOT_DIR="$(cd "${SCRIPT_DIR}/.." && pwd)"
SIM_DIR="${ROOT_DIR}/sim"
SYSTEM_DIR="${SIM_DIR}/system"
UVM_DIR="${SIM_DIR}/uvm"
VERIFY_DIR="${SIM_DIR}/verify"
MODE="${1:-full}"
VERIFY_ASSERT_INDEX="${VERIFY_DIR}/assertion_cov_index.txt"
VERIFY_ASSERT_SUMMARY="${VERIFY_DIR}/assertion_cov_summary.txt"

mkdir -p "${VERIFY_DIR}"
rm -f "${VERIFY_ASSERT_INDEX}" "${VERIFY_ASSERT_SUMMARY}"

run_step() {
    local label="$1"
    local logfile="$2"
    shift 2

    echo "[VERIFY] ${label}"
    if "$@" >"${logfile}" 2>&1; then
        echo "[PASS] ${label}"
    else
        echo "[FAIL] ${label}"
        tail -n 40 "${logfile}" || true
        return 1
    fi
}

normalize_summary_path() {
    local raw_path="$1"
    local trimmed_path
    local unix_like_path

    trimmed_path="$(printf '%s' "${raw_path}" | sed 's/[[:space:]]*$//')"
    unix_like_path="${trimmed_path//\\//}"

    if [[ -z "${unix_like_path}" ]]; then
        return 1
    fi

    if [[ "${unix_like_path}" == /* ]]; then
        printf '%s\n' "${unix_like_path}"
        return 0
    fi

    if [[ "${unix_like_path}" =~ ^[A-Za-z]:/ ]] && command -v wslpath >/dev/null 2>&1; then
        wslpath -u "${unix_like_path}"
        return 0
    fi

    realpath -m "${SCRIPT_DIR}/${unix_like_path}"
}

run_step "core" "${VERIFY_DIR}/core.log" make -C "${SCRIPT_DIR}" sim
run_step "system" "${VERIFY_DIR}/system.log" bash "${SCRIPT_DIR}/run_sys.sh"

if [[ "${MODE}" == "full" ]]; then
    run_step "uvm" "${VERIFY_DIR}/uvm.log" bash "${SCRIPT_DIR}/run_uvm.sh"
fi

{
    echo "Assertion Coverage Paths"
    echo "mode=${MODE}"
    if [[ -f "${SYSTEM_DIR}/latest/assertion_cov_summary.txt" ]]; then
        echo "system=${SYSTEM_DIR}/latest/assertion_cov_summary.txt"
    fi
    if [[ "${MODE}" == "full" && -f "${UVM_DIR}/latest_assert_cov_summary.txt" ]]; then
        UVM_ASSERT_SUMMARY_RAW="$(tr -d '\r' < "${UVM_DIR}/latest_assert_cov_summary.txt")"
        UVM_ASSERT_SUMMARY="$(normalize_summary_path "${UVM_ASSERT_SUMMARY_RAW}")"
        echo "uvm_pointer=${UVM_DIR}/latest_assert_cov_summary.txt"
        echo "uvm=${UVM_ASSERT_SUMMARY}"
    fi
} > "${VERIFY_ASSERT_INDEX}"

{
    if [[ -f "${SYSTEM_DIR}/latest/assertion_cov_summary.txt" ]]; then
        echo "===== SYSTEM ASSERTION COVERAGE ====="
        cat "${SYSTEM_DIR}/latest/assertion_cov_summary.txt"
        echo
    fi

    if [[ "${MODE}" == "full" && -f "${UVM_DIR}/latest_assert_cov_summary.txt" ]]; then
        UVM_ASSERT_SUMMARY_RAW="$(tr -d '\r' < "${UVM_DIR}/latest_assert_cov_summary.txt")"
        UVM_ASSERT_SUMMARY="$(normalize_summary_path "${UVM_ASSERT_SUMMARY_RAW}")"
        if [[ -f "${UVM_ASSERT_SUMMARY}" ]]; then
            echo "===== UVM ASSERTION COVERAGE ====="
            cat "${UVM_ASSERT_SUMMARY}"
            echo
        fi
    fi
} > "${VERIFY_ASSERT_SUMMARY}"

echo "[PASS] verification (${MODE})"
echo "[INFO] assertion coverage index: ${VERIFY_ASSERT_INDEX}"
echo "[INFO] assertion coverage summary: ${VERIFY_ASSERT_SUMMARY}"