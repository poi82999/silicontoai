# Codex 토큰 절약형 플러그인 설계 계획

기준일: 2026-05-19

## 목적

`oh-my-claude code`의 핵심 아이디어는 다중 에이전트 오케스트레이션이다. 이 프로젝트에는 그 구조를 그대로 복제하기보다, 토큰 사용량을 줄이는 `context router` 형태가 더 적합하다.

목표:

- 전체 repo를 매번 읽지 않는다.
- 요청 유형에 따라 필요한 문서, RTL, TB, L6 파일만 선택한다.
- 한 파트를 공부하거나 수정할 때는 그 파트의 전문 지식과 그 파트의 프로젝트 코드만 기본 컨텍스트로 허용한다.
- 긴 파일은 원문 전체 대신 요약/색인/라인 범위 중심으로 공급한다.
- 이미 있는 `.agents/skills`와 `.agents/workflows`를 재사용한다.
- 교육용 질문에는 개념 설명과 코드 위치만 주고, 구현 요청에는 검증 절차까지 연결한다.

## OMC 요약

참고 글: https://ios-development.tistory.com/1840

해당 글 기준 `oh-my-claude code`, 또는 `omc`, 는 Claude Code용 멀티 에이전트 오케스트레이션 플러그인이다. 주요 특징은 다음과 같다.

- Architect, Executor, Designer, Tester, Security 등 역할별 전문 에이전트를 둔다.
- 사용자의 요청을 분석해 적절한 에이전트에 자동 위임한다.
- `/autopilot`, `/ralph`, `/ultrawork`, `/team`, `/plan`, `/analyze`, `/code-review`, `/tdd`, `/ultraqa`, `/deepinit` 같은 명령형 워크플로우를 제공한다.
- Claude Code의 plugin marketplace를 통해 설치하는 흐름을 전제로 한다.

## Codex 적용 가능성

적용 가능하다. 단, 1:1 포팅이 아니라 Codex 방식으로 재구성해야 한다.

OpenAI의 Codex 설명 기준으로는 plugin과 skill이 구분된다. plugin은 외부 도구나 정보원에 연결할 때 쓰고, skill은 특정 작업 절차를 따르게 하는 playbook에 가깝다. 이 프로젝트의 목표가 "로컬 repo의 학습/개발 컨텍스트를 절약해서 공급"하는 것이므로, 1차 구현은 plugin보다 skill + workflow + scripts 조합이 더 효율적이다.

현재 repo 상태:

- 이미 존재: `.agents/skills/`
  - `rtl-coding-guide`
  - `run-simulation`
  - `verification-debug`
  - `l6-compiler`
  - `workload-package`
  - `fpga-build`
  - `doc-update`
- 이미 존재: `.agents/workflows/`
  - `verify-all.md`
  - `l6-export.md`
  - `add-module.md`
- 없음: repo-local Codex plugin manifest인 `.codex-plugin/plugin.json`
- 없음: `.agents/plugins/marketplace.json`

결론:

- 당장 효과를 내려면 `skill/workflow` 확장이 우선이다.
- UI에서 설치 가능한 repo-local plugin으로 배포하려면 별도 plugin scaffold가 필요하다.
- OMC처럼 수십 개 에이전트를 기본 투입하는 방식은 이 repo에는 비효율적이다. RTL/검증/컴파일러의 파일 경계가 명확하므로, 자동 위임보다 "작업 유형별 최소 컨텍스트 선택"이 더 큰 이득을 준다.

## 설계 이름

`silicontoai-context-router`

역할:

- 요청을 분류한다.
- 읽을 파일 후보를 최소화한다.
- 필요한 skill/workflow를 선택한다.
- 답변/작업 전에 "컨텍스트 예산"을 적용한다.
- 다른 파트로 넘어가야 할 때는 boundary escalation 사유를 명시한다.

## 핵심 정책: 파트별 컨텍스트 격리

A 파트를 공부할 때는 A 파트의 전문 지식과 A 파트 코드만 본다. 다른 파트는 기본적으로 읽지 않는다.

예시:

- `rtl-core`를 공부할 때: `rtl/core/**`, `rtl/include/**`, `docs/study_guide/02_rtl_core/**`만 기본 허용
- `l6-toolchain`을 공부할 때: `l6/src/l6_toolchain/**`, `l6/tests/**`, `docs/study_guide/08_l6_toolchain/**`만 기본 허용
- `tb-verification`을 공부할 때: `tb/**`, `docs/study_guide/07_tb/**`, 직접 instantiate/bind된 DUT 파일만 허용
- `study-roadmap`을 볼 때: `docs/study_guide`의 로드맵/자료 계획만 허용하고 source code는 열지 않음

예외는 boundary file만 허용한다.

- interface/package: `rtl/include/**`
- immediate parent/child top module
- replay/workload format boundary
- testbench가 직접 bind/instantiate하는 DUT

이 경우에도 이웃 파트 전체를 읽지 않고 boundary 파일만 읽는다.

## 명령 설계

초기 버전은 명령을 6개로 제한한다.

| 명령 | 목적 | 읽는 기본 컨텍스트 |
|---|---|---|
| `/npu-map` | 프로젝트 구조 빠른 파악 | `README.md`, `docs/study_guide/00_학습_로드맵.md`, 관련 폴더 README |
| `/rtl-focus <module>` | RTL 모듈 집중 분석 | 해당 `rtl/**/*.sv`, 대응 `docs/study_guide/0*_rtl_*/**.md`, interface/pkg |
| `/tb-focus <test>` | TB/UVM 분석 | `tb/**`, `docs/study_guide/07_tb/**`, 관련 RTL top |
| `/l6-focus <pass>` | L6 compiler pass 분석 | `l6/src/l6_toolchain/<pass>.py`, `l6/tests/**`, `docs/study_guide/08_l6_toolchain/**` |
| `/study-pack <topic>` | 학습용 최소 자료 묶음 | study guide 문서, 외부 링크 인덱스, 핵심 코드 1-3개 |
| `/verify-route` | 변경 범위에 맞는 검증 명령 선택 | `.agents/workflows/*`, `Makefile`, `scripts/*` |

OMC의 `/autopilot`류 명령은 v1에서 제외한다. 이유는 명확하다. 이 repo의 병목은 에이전트 수가 아니라, 불필요하게 많은 RTL/L6 문서를 컨텍스트에 넣는 것이다.

## 요청 분류 규칙

| 요청 패턴 | 라우트 | 우선 skill/workflow |
|---|---|---|
| `RTL`, `SystemVerilog`, `always_ff`, `interface`, `modport` | `rtl-focus` | `rtl-coding-guide` |
| `xsim`, `Verilator`, `UVM`, `assertion`, `scoreboard` | `tb-focus` | `run-simulation`, `verification-debug` |
| `compiler`, `IR`, `fusion`, `lowering`, `scheduler`, `quantize` | `l6-focus` | `l6-compiler` |
| `workload`, `replay package`, `program.json` | `l6-focus` or `verify-route` | `workload-package`, `l6-export.md` |
| `FPGA`, `Vivado`, `PYNQ`, `Arty A7`, `bitstream` | `verify-route` | `fpga-build` |
| `로드맵`, `교재`, `강의`, `학습` | `study-pack` | `docs/study_guide/README.md`, `자료_수집_관리_계획.md` |
| `문서 갱신`, `analysis doc`, `study guide` | `study-pack` | `doc-update` |

## 토큰 절약 정책

기본 예산:

- 간단 질문: 2-5개 파일, 총 400줄 이하
- 구현/수정: 5-12개 파일, 총 1200줄 이하
- 디버깅: 실패 로그 + 관련 코드 5개 이하 + 최근 변경 diff
- 학습 설명: 코드 원문보다 study guide와 직접 관련 줄 우선

파일 선택 우선순위:

1. 사용자가 명시한 파일
2. `rg`로 나온 직접 매칭 파일
3. 대응되는 `docs/study_guide` 해설 문서
4. top/interface/pkg 파일
5. 테스트 또는 workflow 파일

긴 파일 처리:

- 처음에는 `rg -n` 결과와 함수/모듈 경계만 읽는다.
- 전체 파일은 버그 수정 또는 정확한 라인 편집이 필요할 때만 읽는다.
- 문서 파일은 헤딩과 관련 섹션만 읽는다.
- 로그는 마지막 실패 블록과 에러 주변만 본다.

## 구현 단계

### Phase 1: Skill 확장

목표: plugin 없이도 즉시 동작하는 경량 라우터를 만든다.

작업:

- `.agents/skills/context-router/SKILL.md` 추가
- `.agents/skills/context-router/scripts/context_router.py` 추가
- `tools/context_router.py` convenience wrapper 추가
- 요청 분류표와 파일 선택 규칙을 skill에 넣는다.
- 기존 skill과 workflow 호출 기준을 명시한다.
- `docs/study_guide/codex_token_saver_plugin_plan.md`를 설계 기준 문서로 둔다.

검증:

- RTL 질문 1개, UVM 질문 1개, L6 질문 1개에 대해 읽는 파일 수가 줄었는지 확인한다.

### Phase 2: Helper Script

목표: 사람이 직접 파일을 고르지 않아도 후보를 뽑는다.

후보 스크립트:

```text
tools/context_router.py
```

기능:

- 입력: topic/query
- 출력: route, 추천 skill, 추천 workflow, 파일 후보, 읽을 섹션
- `rg --files`, `rg -n`, 파일명 매핑 테이블 사용
- JSON 출력 지원

예시:

```powershell
python tools/context_router.py --query "systolic array valid timing debug"
```

예상 출력:

```json
{
  "route": "rtl-focus",
  "skills": ["rtl-coding-guide", "run-simulation"],
  "files": [
    "rtl/core/systolic_array.sv",
    "rtl/core/systolic_data_setup.sv",
    "docs/study_guide/02_rtl_core/06_systolic_array.md",
    "tb/tb_system_top.sv"
  ],
  "workflows": ["verify-all.md"]
}
```

### Phase 3: Repo-local Codex Plugin

목표: Codex UI에서 설치 가능한 형태로 묶는다.

구조:

```text
plugins/silicontoai-context-router/
  .codex-plugin/plugin.json
  skills/context-router/SKILL.md
  scripts/context_router.py
  assets/route_map.json
.agents/plugins/marketplace.json
```

plugin manifest는 Codex plugin scaffold 규칙에 맞춰 생성한다. 이 단계는 사용자가 repo-local plugin 생성을 명시적으로 승인할 때 진행한다.

### Phase 4: 교육 학습 모드

목표: 학습 질문에서 토큰을 줄이면서도 설명 품질을 유지한다.

추가 명령:

```text
/study-pack pipeline
/study-pack sram-banking
/study-pack dma-burst
/study-pack uvm-scoreboard
/study-pack l6-fusion
```

각 topic은 다음 형식으로 출력한다.

- 먼저 읽을 문서 1개
- 관련 코드 1-2개
- 외부 강의/교재 1-2개
- 직접 해볼 실습 1개
- 다음 질문 예시 3개

## MVP 범위

MVP는 plugin이 아니라 skill + script로 한다.

완료 기준:

- `context-router` skill이 있다.
- `tools/context_router.py`가 route와 파일 후보를 JSON으로 출력한다.
- RTL/UVM/L6/학습 질문 각각에 대한 fixture query 4개가 있다.
- `python tools/context_router.py --query ...` 실행 결과가 사람이 납득 가능한 수준이다.

## 보류할 기능

- 30개 이상의 전문 에이전트
- 모델 간 tmux 오케스트레이션
- 자동 무한 수정 루프
- 보안/디자인/프론트엔드 등 이 repo와 직접 관계없는 역할
- 외부 강의 PDF 자동 다운로드

이 기능들은 토큰 절약보다 orchestration 복잡도를 키운다. 현재 프로젝트 목적에는 우선순위가 낮다.

## 출처

- Tistory OMC 설명: https://ios-development.tistory.com/1840
- OpenAI Codex plugin/skill 개념: https://openai.com/academy/codex-plugins-and-skills/
