# 🗺️ NPU 풀스택 학습 로그

KAIST 전산학부 학부생이 **16×16 Weight-Stationary Systolic Array NPU 풀스택**(SystemVerilog RTL → Python 컴파일러 `l6` → UVM 검증 → FPGA 브링업)을 직접 만들고, 그 위에서 컴퓨터구조와 ML 컴파일러를 공부하는 과정의 공개 기록입니다.

> **진로 트랙:** "하드웨어를 아는 ML 컴파일러/아키텍트" — HW-SW Co-Design.
> 코드 전체는 [GitHub 저장소](https://github.com/poi82999/silicontoai)에 있습니다.

---

## 📍 현재 위치 (2026-07-20)

- **백본 노드 1 — 성능 모델 (Roofline · SIMD/DLP)**, 방학 압축 플랜 R1 주차
- 검증 완료: 이 NPU의 Peak 51.2 GOPS · 외부 BW 3.2 GB/s · **Ridge point 16 ops/byte**
- 이번 주: H&P 4.8 Roofline 심화 + `roofline.py` 줄 단위 정독 + matplotlib Roofline 그래프 실습

## 🧭 학습 지도

| 문서 | 내용 |
|---|---|
| [로드맵 인덱스](study_guide/roadmap_index.md) | 전체 지도 — 백본 6노드(성능모델→컴퓨터구조→AI가속기→컴파일러→l6 정복→co-design) + pull 레일 |
| [2026 시간표](study_guide/personal_roadmap_2026.md) | 주차별 실행 계획 (방학 R1~R6 + 가을학기 동기화) |
| [학습 일기](study_guide/journal/) | 매 세션의 기록 — 배운 것, 내린 결정과 이유, 막힌 곳 |
| [Roofline 요약](study_guide/roofline_summary.md) | 첫 산출물 — Williams CACM'09를 이 NPU에 적용한 1쪽 정리 |
| [코드 학습 가이드](study_guide/00_학습_로드맵.md) | NPU 코드베이스 52개 파일의 해설 문서 (학술 배경 포함) |

## ⚙️ 학습 운영 방식

1. **백본은 push** — 트랙의 척추(성능모델 → 아키텍처 → 컴파일러 → 내 컴파일러 `l6`)를 순서대로 정면 돌파합니다.
2. **기초는 pull** — 이미 배운 기초(자료구조·알고리즘 등)는 독립적으로 재학습하지 않고, 백본에서 필요해진 순간 10~30분만 당겨씁니다.
3. **학교 중복은 스킵** — KAIST 정규 과목(CS311 컴퓨터구조, CS420 컴파일러)이 다룰 내용은 학교에 맡기고, 학교가 안 다루는 것(논문·Roofline·`l6` 내부)에 deep time을 씁니다.
4. **일기 없는 학습은 없다** — 모든 세션은 [일기](study_guide/journal/)로 남기고, 모든 결정에는 이유를 적습니다.

## 🏗️ 이 프로젝트가 특별한 이유

교과서·논문의 이론을 **남이 만든 예제가 아니라 직접 만든 칩과 컴파일러**로 검증합니다. Roofline 논문을 읽으면 `roofline.py`로 내 NPU의 Ridge를 계산하고, 파이프라인 이론을 배우면 `systolic_array.sv`의 31사이클을 Vivado 파형으로 추적합니다.

---

<sub>이 페이지는 학습이 진행될 때마다 갱신됩니다. 마지막 갱신: 2026-07-20</sub>
