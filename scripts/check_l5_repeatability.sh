#!/usr/bin/env bash

set -euo pipefail

ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
cd "$ROOT_DIR"

ARCHIVE_DIR="build/l5_repeatability"
RUN1_DIR="$ARCHIVE_DIR/run1"
RUN2_DIR="$ARCHIVE_DIR/run2"
OUT_DIR="sim/verify/l5_repeatability"
SUMMARY_FILE="$OUT_DIR/repeatability_summary.txt"

rm -rf "$ARCHIVE_DIR" "$OUT_DIR"
mkdir -p "$RUN1_DIR" "$RUN2_DIR"

bash scripts/clean_artifacts.sh > /tmp/l5_repeatability_clean_run1.log 2>&1 || true
mkdir -p "$RUN1_DIR" "$RUN2_DIR"
cp /tmp/l5_repeatability_clean_run1.log "$ARCHIVE_DIR/clean_run1.log"
bash scripts/run_l5_signoff.sh > "$RUN1_DIR/l5_signoff.log" 2>&1
cp sim/verify/l5_signoff/l5_signoff_summary.txt "$RUN1_DIR/l5_signoff_summary.txt"
cp sim/verify/l5_signoff/replay_chain_summary.txt "$RUN1_DIR/replay_chain_summary.txt"
cp sim/verify/l5_signoff/assertion_cov_summary.txt "$RUN1_DIR/assertion_cov_summary.txt"

bash scripts/clean_artifacts.sh > /tmp/l5_repeatability_clean_run2.log 2>&1 || true
mkdir -p "$RUN1_DIR" "$RUN2_DIR"
cp /tmp/l5_repeatability_clean_run2.log "$ARCHIVE_DIR/clean_run2.log"
bash scripts/run_l5_signoff.sh > "$RUN2_DIR/l5_signoff.log" 2>&1
cp sim/verify/l5_signoff/l5_signoff_summary.txt "$RUN2_DIR/l5_signoff_summary.txt"
cp sim/verify/l5_signoff/replay_chain_summary.txt "$RUN2_DIR/replay_chain_summary.txt"
cp sim/verify/l5_signoff/assertion_cov_summary.txt "$RUN2_DIR/assertion_cov_summary.txt"

cmp -s "$RUN1_DIR/l5_signoff_summary.txt" "$RUN2_DIR/l5_signoff_summary.txt"
cmp -s "$RUN1_DIR/replay_chain_summary.txt" "$RUN2_DIR/replay_chain_summary.txt"

mkdir -p "$OUT_DIR"
cp "$RUN1_DIR/l5_signoff_summary.txt" "$OUT_DIR/run1_l5_signoff_summary.txt"
cp "$RUN2_DIR/l5_signoff_summary.txt" "$OUT_DIR/run2_l5_signoff_summary.txt"
cp "$RUN1_DIR/replay_chain_summary.txt" "$OUT_DIR/run1_replay_chain_summary.txt"
cp "$RUN2_DIR/replay_chain_summary.txt" "$OUT_DIR/run2_replay_chain_summary.txt"

cat > "$SUMMARY_FILE" <<EOF
repeatability_runs=2
artifacts_cleaned_between_runs=1
run1_summary=$RUN1_DIR/l5_signoff_summary.txt
run2_summary=$RUN2_DIR/l5_signoff_summary.txt
run1_chain=$RUN1_DIR/replay_chain_summary.txt
run2_chain=$RUN2_DIR/replay_chain_summary.txt
result=PASS
EOF

cat "$SUMMARY_FILE"