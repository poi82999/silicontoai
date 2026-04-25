#!/bin/bash
# =============================================================================
# verify_all.sh — One-step full-stack verification
# =============================================================================
# Runs in order:
#   1. L6 Python toolchain unit tests (pytest, ~306 tests)
#   2. Verilator core + system + UVM smoke (verify.sh fast)
#   3. L5 system-level chained replay sign-off (run_l5_signoff.sh)
#
# Use --skip-l5 to skip the heavy 11-package L5 sign-off
# Use --skip-pytest to skip L6 Python tests
# Use --skip-rtl to skip Verilator/UVM gates
# Use --full to upgrade verify.sh from `fast` to `full` (adds UVM regression)
#
# Exit code 0 = all enabled stages passed
# Exit code != 0 = first failed stage (subsequent stages skipped)
# =============================================================================
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
ROOT_DIR="$(cd "${SCRIPT_DIR}/.." && pwd)"

SKIP_PYTEST=0
SKIP_RTL=0
SKIP_L5=0
RTL_MODE="fast"
SUMMARY_DIR="${ROOT_DIR}/sim/verify/all"

usage() {
    cat <<EOF
Usage: bash scripts/verify_all.sh [--skip-pytest] [--skip-rtl] [--skip-l5] [--full]

Full-stack one-step verification:
  Stage 1: L6 Python tests (pytest l6/tests)
  Stage 2: RTL fast verify (Verilator core+system+UVM smoke)
  Stage 3: L5 11-package chained sign-off

Options:
  --skip-pytest   skip L6 Python tests
  --skip-rtl      skip RTL/Verilator/UVM gates
  --skip-l5       skip L5 chained sign-off (the slowest stage)
  --full          run UVM full regression instead of fast smoke
  -h, --help      show this help

Summary written to: sim/verify/all/verify_all_summary.txt
EOF
}

while [[ $# -gt 0 ]]; do
    case "$1" in
        --skip-pytest) SKIP_PYTEST=1 ;;
        --skip-rtl)    SKIP_RTL=1 ;;
        --skip-l5)     SKIP_L5=1 ;;
        --full)        RTL_MODE="full" ;;
        -h|--help)     usage; exit 0 ;;
        *) echo "[VERIFY_ALL ERROR] Unknown argument: $1"; usage; exit 1 ;;
    esac
    shift
done

mkdir -p "${SUMMARY_DIR}"
SUMMARY_FILE="${SUMMARY_DIR}/verify_all_summary.txt"
PYTEST_LOG="${SUMMARY_DIR}/pytest.log"
RTL_LOG="${SUMMARY_DIR}/rtl_verify.log"
L5_LOG="${SUMMARY_DIR}/l5_signoff.log"
START_TS="$(date +%s)"

# Reset summary
{
    echo "===== verify_all.sh =====";
    echo "started_at: $(date -Iseconds)";
    echo "rtl_mode: ${RTL_MODE}";
    echo "skip_pytest: ${SKIP_PYTEST}";
    echo "skip_rtl: ${SKIP_RTL}";
    echo "skip_l5: ${SKIP_L5}";
    echo;
} > "${SUMMARY_FILE}"

declare -A STAGE_RESULT

run_stage() {
    local label="$1"
    local logfile="$2"
    shift 2
    echo "[VERIFY_ALL] >>> ${label}"
    if "$@" >"${logfile}" 2>&1; then
        echo "[VERIFY_ALL] [PASS] ${label}"
        STAGE_RESULT["${label}"]="PASS"
        echo "${label}: PASS" >> "${SUMMARY_FILE}"
        return 0
    else
        echo "[VERIFY_ALL] [FAIL] ${label}"
        echo "----- last 40 lines of ${logfile} -----"
        tail -n 40 "${logfile}" || true
        STAGE_RESULT["${label}"]="FAIL"
        echo "${label}: FAIL" >> "${SUMMARY_FILE}"
        return 1
    fi
}

# Helper: locate a usable Python (.venv -> .venv312 -> py -3.12 -> python)
resolve_python() {
    local candidates=(
        "${ROOT_DIR}/.venv/Scripts/python.exe"
        "${ROOT_DIR}/.venv312/Scripts/python.exe"
        "${ROOT_DIR}/.venv/bin/python"
    )
    for c in "${candidates[@]}"; do
        if [[ -x "${c}" ]]; then
            printf '%s\n' "${c}"
            return 0
        fi
    done
    if command -v py >/dev/null 2>&1; then
        printf 'py\n'
        return 0
    fi
    if command -v python >/dev/null 2>&1; then
        printf 'python\n'
        return 0
    fi
    return 1
}

# Stage 1: L6 pytest
if [[ "${SKIP_PYTEST}" != "1" ]]; then
    if ! PYTHON_BIN="$(resolve_python)"; then
        echo "[VERIFY_ALL ERROR] No usable Python interpreter found."
        exit 2
    fi
    PYTEST_CMD=(
        "${PYTHON_BIN}" -c "import npu_cuda.golden_accel as g; g.force_backend('numpy'); import pytest, sys; sys.exit(pytest.main(['l6/tests','-q','--tb=short']))"
    )
    if [[ "${PYTHON_BIN}" == "py" ]]; then
        PYTEST_CMD=(
            py -3.12 -c "import npu_cuda.golden_accel as g; g.force_backend('numpy'); import pytest, sys; sys.exit(pytest.main(['l6/tests','-q','--tb=short']))"
        )
    fi
    cd "${ROOT_DIR}"
    if ! run_stage "pytest_l6" "${PYTEST_LOG}" "${PYTEST_CMD[@]}"; then
        echo "[VERIFY_ALL] aborted at stage 1 (pytest_l6)"
        exit 1
    fi
else
    echo "[VERIFY_ALL] [SKIP] pytest_l6"
    echo "pytest_l6: SKIP" >> "${SUMMARY_FILE}"
fi

# Stage 2: RTL verify (fast or full)
if [[ "${SKIP_RTL}" != "1" ]]; then
    if ! run_stage "rtl_verify_${RTL_MODE}" "${RTL_LOG}" bash "${SCRIPT_DIR}/verify.sh" "${RTL_MODE}"; then
        echo "[VERIFY_ALL] aborted at stage 2 (rtl_verify)"
        exit 1
    fi
else
    echo "[VERIFY_ALL] [SKIP] rtl_verify"
    echo "rtl_verify_${RTL_MODE}: SKIP" >> "${SUMMARY_FILE}"
fi

# Stage 3: L5 chained sign-off
if [[ "${SKIP_L5}" != "1" ]]; then
    if ! run_stage "l5_signoff" "${L5_LOG}" bash "${SCRIPT_DIR}/run_l5_signoff.sh"; then
        echo "[VERIFY_ALL] aborted at stage 3 (l5_signoff)"
        exit 1
    fi
else
    echo "[VERIFY_ALL] [SKIP] l5_signoff"
    echo "l5_signoff: SKIP" >> "${SUMMARY_FILE}"
fi

END_TS="$(date +%s)"
ELAPSED=$((END_TS - START_TS))

{
    echo;
    echo "completed_at: $(date -Iseconds)";
    echo "elapsed_seconds: ${ELAPSED}";
    echo "result: PASS";
} >> "${SUMMARY_FILE}"

echo
echo "[VERIFY_ALL] [PASS] all enabled stages passed (elapsed ${ELAPSED}s)"
echo "[VERIFY_ALL] summary: ${SUMMARY_FILE}"
