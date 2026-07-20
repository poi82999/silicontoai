#!/usr/bin/env bash
# ============================================================
# GitHub Project(v2) 보드 1회 셋업 — "NPU 학습 로드맵 2026"
#
# 선행 조건 (딱 한 번, 브라우저 인증 필요):
#   gh auth refresh -s project,read:project
#
# 실행:
#   bash scripts/setup_github_project.sh
#
# 하는 일:
#   1. 사용자 소유 Project "NPU 학습 로드맵 2026" 생성 (이미 있으면 재사용)
#   2. silicontoai 레포에 링크
#   3. '학습세션' 라벨이 붙은 이슈(R1~R6)를 전부 보드에 추가
# ============================================================
set -euo pipefail

OWNER="poi82999"
REPO="poi82999/silicontoai"
TITLE="NPU 학습 로드맵 2026"

NUM=$(gh project list --owner "$OWNER" --format json \
      -q ".projects[] | select(.title==\"$TITLE\") | .number" | head -1)

if [ -z "${NUM:-}" ]; then
  NUM=$(gh project create --owner "$OWNER" --title "$TITLE" --format json -q '.number')
  echo "✔ 프로젝트 생성: #$NUM"
else
  echo "✔ 기존 프로젝트 재사용: #$NUM"
fi

gh project link "$NUM" --owner "$OWNER" --repo "$REPO" 2>/dev/null \
  && echo "✔ 레포에 링크됨" || echo "· 링크는 이미 되어 있음"

gh issue list -R "$REPO" --label "학습세션" --state all --json url -q '.[].url' \
| while read -r url; do
    gh project item-add "$NUM" --owner "$OWNER" --url "$url" >/dev/null \
      && echo "✔ 보드에 추가: $url"
  done

echo ""
echo "완료 → https://github.com/users/$OWNER/projects/$NUM"
echo "보드에서 Status 컬럼(Todo/In Progress/Done)은 웹 UI 기본값을 그대로 쓰면 됩니다."
