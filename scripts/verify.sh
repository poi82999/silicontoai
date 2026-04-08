#!/bin/bash
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
ROOT_DIR="$(cd "${SCRIPT_DIR}/.." && pwd)"
SIM_DIR="${ROOT_DIR}/sim"
SYSTEM_DIR="${SIM_DIR}/system"
UVM_DIR="${SIM_DIR}/uvm"
VERIFY_DIR="${SIM_DIR}/verify"
MODE="full"
DATA_MODE="int8"
SMOKE_ONLY=0
VERIFY_ASSERT_INDEX="${VERIFY_DIR}/assertion_cov_index.txt"
VERIFY_ASSERT_SUMMARY="${VERIFY_DIR}/assertion_cov_summary.txt"

usage() {
    cat <<EOF
Usage: bash scripts/verify.sh [full|fast] [--data-mode int8|fp16] [--smoke]

Examples:
  bash scripts/verify.sh full
  bash scripts/verify.sh fast
  bash scripts/verify.sh full --data-mode fp16 --smoke
EOF
}

while [[ $# -gt 0 ]]; do
    case "$1" in
        full|fast)
            MODE="$1"
            ;;
        --data-mode)
            if [[ $# -lt 2 ]]; then
                echo "[VERIFY ERROR] --data-mode requires a value (int8|fp16)"
                usage
                exit 1
            fi
            DATA_MODE="$2"
            shift
            ;;
        --smoke)
            SMOKE_ONLY=1
            ;;
        -h|--help)
            usage
            exit 0
            ;;
        *)
            echo "[VERIFY ERROR] Unknown argument: $1"
            usage
            exit 1
            ;;
    esac
    shift
done

if [[ "$DATA_MODE" != "int8" && "$DATA_MODE" != "fp16" ]]; then
    echo "[VERIFY ERROR] --data-mode must be one of: int8, fp16"
    exit 1
fi

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

VERILATOR_GFLAGS_MODE=""
BUILD_SUFFIX_MODE=""
if [[ "${DATA_MODE}" == "fp16" ]]; then
    VERILATOR_GFLAGS_MODE="-GDATA_MODE=1"
    BUILD_SUFFIX_MODE="_fp16"
fi

if [[ "${DATA_MODE}" == "fp16" ]]; then
    if [[ "${SMOKE_ONLY}" != "1" ]]; then
        echo "[VERIFY WARN] fp16 mode currently supports smoke path only; forcing --smoke behavior."
        SMOKE_ONLY=1
    fi

    # FP16 mode is currently smoke-only: compile path readiness check.
    run_step "core-fp16-build" "${VERIFY_DIR}/core.log" make -C "${SCRIPT_DIR}" build-core VERILATOR_GFLAGS="${VERILATOR_GFLAGS_MODE}" BUILD_SUFFIX="${BUILD_SUFFIX_MODE}"
    run_step "system-fp16-build" "${VERIFY_DIR}/system.log" make -C "${SCRIPT_DIR}" build-system VERILATOR_GFLAGS="${VERILATOR_GFLAGS_MODE}" BUILD_SUFFIX="${BUILD_SUFFIX_MODE}"
    run_step "uvm-fp16-smoke" "${VERIFY_DIR}/uvm_smoke.log" bash "${SCRIPT_DIR}/run_uvm.sh" npu_fp16_mode_smoke_test fp16

    {
        echo "Assertion Coverage Paths"
        echo "mode=${MODE}"
        echo "data_mode=${DATA_MODE}"
        echo "smoke_only=1"
        echo "core_build=${VERIFY_DIR}/core.log"
        echo "system_build=${VERIFY_DIR}/system.log"
        echo "uvm_smoke=${VERIFY_DIR}/uvm_smoke.log"
    } > "${VERIFY_ASSERT_INDEX}"

    {
        echo "===== FP16 SMOKE VERIFY ====="
        echo "data_mode=${DATA_MODE}"
        echo "result=build-pass+uvm-smoke-pass"
    } > "${VERIFY_ASSERT_SUMMARY}"

    echo "[PASS] verification (${MODE}, data_mode=${DATA_MODE}, smoke)"
    echo "[INFO] assertion coverage index: ${VERIFY_ASSERT_INDEX}"
    echo "[INFO] assertion coverage summary: ${VERIFY_ASSERT_SUMMARY}"
    exit 0
fi

run_step "core" "${VERIFY_DIR}/core.log" make -C "${SCRIPT_DIR}" sim VERILATOR_GFLAGS="${VERILATOR_GFLAGS_MODE}"
run_step "system" "${VERIFY_DIR}/system.log" bash "${SCRIPT_DIR}/run_sys.sh"
run_step "uvm-smoke" "${VERIFY_DIR}/uvm_smoke.log" bash "${SCRIPT_DIR}/run_uvm.sh" npu_smoke_test int8

if [[ "${MODE}" == "full" ]]; then
    run_step "uvm" "${VERIFY_DIR}/uvm.log" bash "${SCRIPT_DIR}/run_uvm.sh" npu_test int8
fi

{
    echo "Assertion Coverage Paths"
    echo "mode=${MODE}"
    if [[ -f "${SYSTEM_DIR}/latest/assertion_cov_summary.txt" ]]; then
        echo "system=${SYSTEM_DIR}/latest/assertion_cov_summary.txt"
    fi
    if [[ -f "${VERIFY_DIR}/uvm_smoke.log" ]]; then
        echo "uvm_smoke=${VERIFY_DIR}/uvm_smoke.log"
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