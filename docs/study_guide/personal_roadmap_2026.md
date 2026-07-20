# 개인 맞춤 학습 로드맵 2026

> 생성일: 2026-05-21 · **재조정: 2026-07-20** (7주 공백 확인 → 방학 잔여 6주 압축 플랜)  
> 기반: [전문가_학습_로드맵.md](전문가_학습_로드맵.md) (Phase 1~7) + KAIST CS 정규 커리큘럼  
> 운영 원칙: [메모리 study-strategy](#) — 중복 스킵, 다음 학기 예습 병행, 일기 기록 필수  
> **전체 지도(백본 구조·pull 원칙)는 [roadmap_index.md](roadmap_index.md)** — 이 문서는 주차별 시간표 담당

---

## 1. 현재 상태 (2026-07-20 갱신)

| 항목 | 내용 |
|---|---|
| 학년/학기 | KAIST CS 3학년 여름방학 (1학기 종료, CS230 수료) |
| 2026-가을(3-2) 예정 | **CS311 컴퓨터구조**, **CS420 컴파일러** |
| NPU 프로젝트 상태 | Sprint-12 완료, 풀스택 동작, 이론 보강 단계 |
| 학습 진행 | W1 완료 + Ridge=16 정량 검증 (Day 02, 5/29). **5/30~7/19 약 7주 공백** → §4를 6주 압축 플랜으로 재조정 |

---

## 2. 핵심 전략 3가지

1. **중복 제거**: KAIST 정규 과목과 겹치는 챕터는 학교 수업이 책임진다 → NPU 학습에서는 skim만.
2. **예습 결합**: NPU 이론 보강 시간을 다음 학기 CS311/CS420 예습으로 동시에 활용한다.
3. **NPU 고유 가치 우선**: 학교에서 안 다루는 부분(Roofline, SIMD/DLP, TPU/Eyeriss 논문, l6 toolchain 내부)이 진짜 차별점이다 — 여기에 deep time을 배분한다.

---

## 3. Phase × KAIST 과목 매핑

### 범례
- 🟦 **Skip**: 학교 수업이 대체. NPU 학습 시 안 함.
- 🟨 **Skim**: 학교 수업이 다루지만 NPU 연결만 빠르게 확인.
- 🟥 **Deep**: NPU 차별점. 책 정독 + 실습 + 정리.
- 🟢 **Do**: 산출물 실습.

| Phase 콘텐츠 | KAIST 연계 | 분류 | 시기 (07-20 재조정) |
|---|---|---|---|
| P&H 1-2장 (성능, ISA) | CS311(예정) | 🟦 Skip | CS311 첫 주가 대체 (preview 드롭) |
| P&H 4장 파이프라인 | CS311(예정) | 🟨 Skim | R4 (8/10~16, 실습 2와 함께) |
| P&H 5장 캐시 | CS311(예정) | 🟨 Skim | R5 (8/17~23, 실습 3과 함께) |
| P&H 6장 병렬 | CS311(예정) | 🟦 Skip | CS311 11월 진도가 대체 |
| CMU 15-213 L1~L12 | **CS230(수료)** | 🟦 Skip | — |
| H&P Quantitative 4장 SIMD/DLP | (학교 안 다룸) | 🟥 Deep | R2 (7/27~8/2) |
| **Williams Roofline 논문** (CACM'09) | (학교 안 다룸) | ✅ 완료 | 5/29 (roofline_summary.md) |
| H&P 4.8 Roofline 심화 + roofline.py 정독 | (학교 안 다룸) | 🟥 Deep | R1 (7/20~26, 브리프 #01) |
| **TPU 논문 + Eyeriss 논문** | (학교 안 다룸) | 🟥 Deep | R3 (8/3~9) |
| Phase 1 실습 3개 (Roofline 그래프, 31사이클 추적, dp_sram 분석) | — | 🟢 Do | R1~R5 (7/20 ~ 8/23) |
| Phase 3 Dragon Book 1-2장 | CS420(예정) | 🟨 Skim | R5 (8/17~23) |
| Phase 3 Dragon Book 3장 (parsing) | CS420(예정) | 🟨 Skim | 2026-09 (CS420 진도와 함께, Deep→이월) |
| Phase 3 Dragon Book 4-6장 | CS420(예정) | 🟨 Skim | 2026-09~10 (CS420 진도와 함께) |
| Phase 3 l6 IR/tracer 분석 | (NPU 고유) | 🟥 Deep | R6 (8/24~31) |
| Phase 3 l6 fusion/lowering/scheduler | (NPU 고유) | 🟥 Deep | 2026-09~11 (CS420 진도와 함께) |

---

## 4. 시간순 계획 (2026-05 ~ 2026-12, 약 30주)

### ✅ 완료분 (2026-05-21 ~ 05-29, Day 01–02)
- W1: Williams Roofline 논문 정독 + `roofline_summary.md` 1쪽 요약
- W3 일부(당겨옴): 이 NPU **Peak 51.2 GOPS / BW 3.2 GB/s / Ridge = 16 ops/byte** 정량 검증, GEMM 4종 판정
- Gemini 교육 브리프 #01 작성 완료 (W3~W5 커버) — **미실행 상태로 대기 중**

### ⚠️ 공백 (2026-05-30 ~ 07-19, 약 7주)
학습 중단 (2026-07-20 확인). 원 계획의 W2~W13 미소화 → 아래 6주 압축 플랜(R1~R6)으로 흡수.

### 🔥 2026-07-20 ~ 08-31 (방학 잔여 6주, 압축 플랜 R1~R6)
**압축 원칙: CS311/CS420이 가을에 다룰 교과서 정독(P&H 4·5장, Dragon Book)은 Deep→Skim 강등. 학교가 안 다루는 NPU 고유 가치(논문 2편, Roofline 완성, l6 내부, 실습 3종)만 Deep 유지.**

| 주차 | 자료/활동 | 산출물 |
|---|---|---|
| R1 (7/20~26) | **브리프 #01 실행**: H&P 4.8 Roofline 심화 + roofline.py 줄 단위 정독 + matplotlib 그래프 (**실습 1**) — 원 W3~W5 | `docs/roofline_analysis.md` |
| R2 (7/27~8/2) | H&P Quantitative 4.1-4.4 SIMD/DLP — 원 W2 | SIMD 정리 1쪽 |
| R3 (8/3~9) | **TPU 논문(Jouppi ISCA'17) + Eyeriss(Chen ISCA'16)** 정독 + 비교 — 원 W9, 최우선 Deep | WS vs RS 비교 1쪽 |
| R4 (8/10~16) | P&H 4장 파이프라인 🟨Skim + systolic_array.sv 31사이클 추적 (**실습 2**, Vivado 파형) — 원 W6~W7 | 파형 캡처 + 분석 1쪽 |
| R5 (8/17~23) | P&H 5장 캐시 🟨Skim + dp_sram_bank.sv 분석 (**실습 3**) + Dragon Book Ch.1-2 가볍게 — 원 W8, W10 | SRAM 패턴 분석 |
| R6 (8/24~31) | l6 ir.py + tracer.py 정독 (원 W12) + **Phase 1 완료 검증** (원 W13) + 가을 시간표 보고 계획 확정 | `docs/phase1_completion.md` + IR 구조 다이어그램 |

**잘라낸 것 (가을학기로 이월):**
- Dragon Book Ch.3 parsing Deep (원 W11) → CS420 개강 후 진도와 함께
- P&H 1-2장 preview → CS311 첫 주 복습으로 대체
- P&H 6장 병렬 skim → CS311 11월 진도와 함께

### 🍂 2026-09 ~ 12 (가을학기, 16주)
**테마: CS311 + CS420 진도와 동기화 + NPU 실전 검증**

```
주마다 시간 분배 가이드 (총 15-20h/주 추정):
- KAIST 수업/과제: 80%
- NPU 학습 deep: 10% (CS 수업이 안 다루는 부분만)
- NPU 실험/구현: 10% (Phase 3 후반)
```

| 월 | CS311에서 다룸 | CS420에서 다룸 | NPU 학습 동기화 활동 |
|---|---|---|---|
| 9월 | ISA, 파이프라인 시작 | Lexer/Parser | NPU 측: 이미 7월에 deep — "복습" 모드. l6 fusion.py 정독 |
| 10월 | 메모리 계층 | Semantic, IR | NPU 측: l6 lowering.py 정독, BatchNorm fusion rule 구현 |
| 11월 | 병렬/SIMD | Optimization, code gen | NPU 측: l6 scheduler.py + 새 scheduling heuristic 실험 |
| 12월 | (기말) | (기말) | NPU 측: 한 학기 결과 정리, Phase 3 완료 |

---

## 5. 다음 검토 시점

- **2026-08 말**: 가을학기 시간표 확정 시 → 이 매핑 재조정
- **2026-12 말**: 한 학기 종료 시 Phase 1+3 완료 검증, Phase 2(RTL 검증) 또는 Phase 5(AI 가속기 이론) 진입 결정
- **2027-01**: 겨울방학 — Phase 2 또는 Phase 4(CUDA) 본격

---

## 6. 산출물 누적 목표 (2026 말까지)

- 일기: 매 학습 세션, [docs/study_guide/journal/](journal/)
- 분석 문서: Roofline / 31사이클 / SRAM 패턴 / WS vs RS / Phase 1 완료 검증 → 5편
- 코드 기여: BatchNorm fusion rule + 새 scheduling heuristic + Roofline 자동화 → 2~3 PR
- Git commits: Sprint-13 이후 약 20개 추가

---

## 7. 진로 트랙 확정 (2026-06-19)

**선택: "A+" — 하드웨어를 아는 ML 컴파일러/아키텍트 (HW-SW Co-Design).**

CS(아키텍처+컴파일러)를 척추로 삼되, co-design이 가능할 만큼의 마이크로아키텍처 하드웨어까지 내려간다.
**풀 실리콘(VLSI 물리설계·반도체 소자)은 가지 않는다** (흥미면 취미 수준).

### 왜 이 트랙인가
1. **병목**: 하드웨어 칩은 충분, 성능을 뽑는 컴파일러/런타임(MLIR·Triton·TVM·XLA) 인력이 부족. 순수 물리설계는 EDA 자동화 + 인력 풀이 커 천장이 낮다.
2. **AI 대체 저항성**(최우선 목표): HW+SW 두 멘탈 모델을 동시에 쥐는 co-design이 가장 자동화하기 어렵다.
3. **자산 증폭**: 기존 CS 기반 + `l6` toolchain을 그대로 키운다. EE 트랙을 새로 파는 ROI 손실 회피.
4. **시장**: NVIDIA/Google TPU/AMD/Tenstorrent, 국내 Rebellions·FuriosaAI·삼성·SK하이닉스 모두 "HW 아는 컴파일러/시스템 엔지니어"가 가장 귀하다.

### 과목 매핑 업데이트
| 분류 | 과목 | 시기 |
|---|---|---|
| ✅ 유지 | CS311 컴퓨터구조, CS420 컴파일러 | 3-2 (2026 가을) |
| ⭐ 추가 | 디지털 시스템 설계(EE, 코드 미확정) — co-design 기초·합성/타이밍 | 3-2 또는 4-1, VLSI 선수라 미루면 병목 |
| ⭐ 추가 | 고급 컴퓨터구조 (4학년/대학원) — GPU·TPU·DSA 실제 다룸 (Phase 5 연계) | 4학년 |
| 필수 | ML 1과목 (CS470/기계학습) — 가속 대상 워크로드 이해 | 4학년 |
| 권장 | CS330 운영체제 (런타임/드라이버), ML 컴파일러/시스템 대학원 세미나 청강 | 미정 |
| 드롭 | VLSI 물리설계 풀코스, 디지털 IC, 반도체 소자 | — |

> EE 과목 코드는 KAIST 학사요람/강의편람에서 "디지털 시스템 / 논리회로 / VLSI" 키워드로 정확한 코드·선수과목(회로이론 요구 여부)·타과 수강 제약 확인 필요.
