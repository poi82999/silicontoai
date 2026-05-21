# Study Guide Index

이 폴더는 SiliconToAI NPU 프로젝트를 공부하기 위한 로드맵, 파일별 코드 해설, 외부 강의/교재 관리 계획을 모아둔 공간이다.

## 먼저 볼 문서

| 순서 | 문서 | 용도 |
|---:|---|---|
| 1 | [00_학습_로드맵.md](00_학습_로드맵.md) | 프로젝트 구조와 코드 파일별 학습 순서 |
| 2 | [학부생_맞춤_로드맵.md](학부생_맞춤_로드맵.md) | 학부생 기준 A/B/C 경로 선택과 핵심 전략 |
| 3 | [학부생_C경로_주간계획.md](학부생_C경로_주간계획.md) | HW + SW + 이론을 함께 가는 28주 실행안 |
| 4 | [자료_수집_관리_계획.md](자료_수집_관리_계획.md) | 구할 교재, 북마크할 강의, 강의 자료 폴더 관리 규칙 |
| 5 | [codex_token_saver_plugin_plan.md](codex_token_saver_plugin_plan.md) | Codex 토큰 절약형 context router/plugin 설계 |
| 6 | [전문가_학습_로드맵.md](전문가_학습_로드맵.md) | 장기적으로 AI 칩/컴파일러 풀스택까지 확장하는 자료 |

## 폴더 구조

| 폴더 | 내용 |
|---|---|
| `01_rtl_include/` | 공통 패키지, 인터페이스 |
| `02_rtl_core/` | MAC PE, systolic array, core top |
| `03_rtl_arithmetic/` | FP16/FP32 산술 유닛 |
| `04_rtl_memory/` | SRAM bank, accumulator buffer |
| `05_rtl_system/` | DMA, AXI-Lite, system top |
| `06_rtl_fpga/` | FPGA bring-up top/wrapper |
| `07_tb/` | directed testbench, UVM, Verilator/C++ replay |
| `08_l6_toolchain/` | L6 컴파일러/스케줄러/성능 모델 |
| `09_host/` | host driver, replay package |
| `materials/` | 개인 학습 자료 보관 규칙과 인덱스 템플릿 |

## 2026년 기준 운영 원칙

기존 로드맵 일부는 2025년 달력 기준으로 작성되어 있다. 2026-05-19 이후에는 날짜를 그대로 따르기보다 `Week 1`, `Week 2` 식의 상대 주차 계획으로 읽는다.

추천 기본값은 C 경로다. 다만 첫 8주는 RTL/컴퓨터 아키텍처를 중심으로 두고, 이후 UVM 검증과 L6 컴파일러로 확장하는 방식이 가장 안정적이다.
