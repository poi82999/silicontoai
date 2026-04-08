# SiliconToAI — AI 에이전트 개발 로드맵 & 지시 계획

> **작성일:** 2026-04-08  
> **대상:** 이 프로젝트를 이어받아 발전시킬 하위 AI 모델 에이전트  
> **목적:** 현재 상태 정확히 전달, 개발 방향 명시, 실행 가능한 작업 단위로 분해

---

## 0. 프로젝트 핵심 요약 (에이전트용 5분 브리핑)

| 항목 | 내용 |
|------|------|
| **무엇** | 16×16 Weight-Stationary Systolic Array 기반 NPU |
| **RTL** | SystemVerilog, FP16×FP16→FP32 MAC, 31-cycle pipeline |
| **컴파일러** | L6 Python 툴체인 (PyTorch → trace → lower → tile → schedule → export) |
| **검증** | Verilator + Vivado xsim + UVM, 18개 워크로드 패키지, CI 자동화 |
| **FPGA** | Arty A7-35T 가상타겟 빌드 완료 (100MHz, WNS +2.627ns), 실물 미검증 |
| **데모** | `host/npu_fullstack_demo.ipynb` — PyTorch MLP → RTL sim → heatmap |
| **완성도** | 베이스라인 96%, 풀스택 78% |

### 에이전트가 먼저 읽어야 할 파일 (순서대로)

```
1. README.md                               ← 전체 구조 + 아키텍처
2. docs/current_status_report.md           ← 진행 상황 + 위상별 완성도
3. docs/ai_analysis_report.md              ← AI 분석 진입점
4. docs/factory_analogy_architecture.md    ← HW/SW 전체 비유 (이해도↑)
5. docs/functional_contract_report.md      ← RTL I/O 규약
6. l6/README.md                            ← 컴파일러 사용법 + 구조
7. 이 문서 (agent_development_roadmap.md)  ← 개발 방향
```

---

## 1. 현재 아키텍처 지도

```
┌─────────────────────────────────────────────────────────────┐
│                      Host Layer                              │
│  host/npu_fullstack_demo.ipynb  ← 데모 노트북               │
│  npu_cuda/                      ← CUDA 골든 (INT8, 참조용)  │
├─────────────────────────────────────────────────────────────┤
│                  L6 Compiler Toolchain                       │
│  l6/src/l6_toolchain/                                        │
│    tracer.py     → torch.fx 기반 모델 트레이싱               │
│    ir.py         → Program/OpNode/TensorValue 미니 IR        │
│    lowering.py   → GEMM 타일링 (TILE_SIZE=16 하드코딩)       │
│    scheduler.py  → 분석적 비용 모델 + weight_reuse 전략      │
│    compiler.py   → 원샷 compile_program() 엔트리            │
│    emitter.py    → JSON manifest + payload 패키지 생성       │
│    replay_bridge.py → L6→시스템 리플레이 변환               │
│    validator.py  → 패키지 스키마 검증                        │
├─────────────────────────────────────────────────────────────┤
│                    Verification Layer                         │
│  tb/main.cpp              ← Verilator 코어 테스트벤치        │
│  tb/system_replay_main.cpp← 시스템 리플레이 드라이버         │
│  tb/uvm/                  ← UVM 랜덤 검증                    │
│  workloads/               ← 18개 패키지 (gemm_tile 중심)     │
├─────────────────────────────────────────────────────────────┤
│                      RTL Layer                               │
│  rtl/core/     npu_core_top, systolic_array, mac_pe (FP16)   │
│  rtl/system/   npu_system_top, dma_controller, axi_mmio      │
│  rtl/memory/   dp_sram_bank (ping-pong), psum_accumulator    │
│  rtl/fpga/     fpga_core_bringup_top, fpga_pynq_top          │
│  rtl/arithmetic/ fp16_multiplier, fp32_adder                  │
├─────────────────────────────────────────────────────────────┤
│                      FPGA Layer                              │
│  vivado/       Tcl 빌드 스크립트, XDC 핀아웃                 │
│  scripts/      시뮬레이션/빌드 자동화                        │
└─────────────────────────────────────────────────────────────┘
```

---

## 2. 미해결 기술 부채 (Critical Issues)

### 2.1 데이터타입 불일치 🟠 (옵션 A 진행 중, 핵심 전환 완료)

#### 2.1.1 실제 코드 기준 현재 상태

| 구성요소 | 현재 상태 | 판정 |
|----------|-----------|------|
| `rtl/core/mac_pe_int8.sv` | signed INT8 × signed INT8 → INT32 MAC 신규 구현 | ✅ 완료 |
| `rtl/core/systolic_array.sv` | PE 인스턴스가 `mac_pe_int8` 경로로 전환됨 | ✅ 완료 |
| `host/replay_package.h` | DUT drive 준비 함수가 INT8 lane 값을 직접 전달 | ✅ 완료 |
| `tb/system_replay_main.cpp` | 스트리밍 실행/비교 로직이 INT8/INT32 시맨틱에 맞게 정리 | ✅ 완료 |
| `rtl/core/mac_pe.sv` | FP16 경로 모듈은 파일로 유지(기본 경로에서는 비활성) | ⚠️ 공존 상태 |
| `npu_cuda/`, `host/` 노트북 | INT8 골든 문맥 유지, RTL 기본 경로와 정합 | ✅ 완료 |36




















































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































#### 2.1.2 옵션 A 완료 기준 체크리스트

필수(Must):
- [x] INT8 MAC RTL 구현 (`mac_pe_int8.sv`)
- [x] systolic array가 INT8 PE를 실제 인스턴스하도록 연결
- [x] TB 입력 브릿지에서 FP16 변환 의존 제거
- [x] 골든 비교가 INT32 비트패턴 기준 + 레거시 호환 처리
- [x] 코어 리플레이 대표 패키지 PASS (`reference_gemm_tile_m0_n0_k0to15`)

권장(Should):
- [x] 미사용 FP16 변환 헬퍼 정리 (`intToFp16` 제거)
- [x] INT8 오버플로우/경계값 전용 패키지 추가 (3개)
- [ ] FP16 경로를 실험용 옵션으로 분리(컴파일 타임 모드 또는 별도 top)
- [x] UVM INT8 모드 커버리지 포인트 추가 및 로그 반영

남은 항목(즉시 처리 대상):
1. FP16 경로를 실험용 옵션으로 분리(컴파일 타임 모드 또는 별도 top)

#### 2.1.3 최신 회귀 스냅샷 (L5 signoff 재실행 기준)

실행 명령: `bash scripts/run_l5_signoff.sh`  
종료 코드: `0`

| 패키지(시스템 11종) | 상태 | mismatch_count | 비고 |
|---------------------|------|----------------|------|
| `system_reference_gemm_tile_m0_n0_k0to15` | PASS | 0 | 기준 타일 |
| `system_reference_gemm_tile_m0_n0_k0to31_splitk` | PASS | 0 | split-K 2-pass |
| `system_reference_gemm_tile_m0_n16_k0to15` | PASS | 0 | n 오프셋 타일 |
| `system_reference_gemm_tile_m16_n0_k0to15` | PASS | 0 | m 오프셋 타일 |
| `system_reference_gemm_tile_m0_n0_k0to15_multiburst` | PASS | 0 | multi-burst DMA |
| `system_reference_gemm_tile_m0_n0_k0to31_splitk_bankstress` | PASS | 0 | split-K + bank stress |
| `system_reference_forwarding_same_addr_m0_n0_k0to15` | PASS | 0 | forwarding stress |
| `system_int8_edge_all_max_pos` | PASS | 0 | INT8 +127 경계 |
| `system_int8_edge_all_min_neg` | PASS | 0 | INT8 -128 경계 |
| `system_int8_edge_mixed_sign_checker` | PASS | 0 | INT8 부호 혼합 |
| `system_negative_invalid_dma_bytes` | PACKAGE_ERROR | 0 | 의도된 negative validation |

종합(시스템 체인): PASS 10건 / FAIL 0건 / PACKAGE_ERROR(기대) 1건.

추가 안정화 반영(2026-04-08 동일 세션):
- `rtl/memory/psum_accumulator_buffer.sv`가 FP32 가산 경로에서 INT32 signed 누산 경로로 정렬됨
- `tools/generate_streamlined_signoff_packages.py` 기준 골든 baseline이 현재 INT8 동작값으로 동기화됨
  - split-K/bankstress: lane 기대값 `2400`
  - forwarding same-addr: lane 기대값 `19200`
- `scripts/run_l5_signoff.sh`에 stale/background 재진입 방지 lock guard(`.run_lock/pid`) 추가
- canonical/run-scoped summary가 동일 `report_id=L5-SIGNOFF-20260408_125936`로 정합 확인

참고(코어 리플레이): `reference_gemm_tile_m0_n0_k0to15` PASS, `reference_acc_forwarding_same_addr_core` PASS.

최종 판정:
- 시스템 리플레이 관점: ✅ 11패키지 기준 PASS 고정
- 옵션 A 완료 관점(필수 기준): ✅ 완료
- 옵션 A 완료 관점(권장 기준): 🟡 FP16/INT8 선택 모드 분리만 잔여

#### 2.1.4 다음 진척 방향성 및 계획

Sprint-1 (완료): 회귀 신뢰성 고정
1. [완료] split-K/forwarding/edge 패키지를 생성 스크립트 기반으로 재생성 가능하게 통합
2. [완료] `run_l5_signoff.sh` 산출물 경로/게시 흐름을 run-scoped + canonical publish로 정리
3. [완료] signoff 시작 전 stale/background 실행 잔존을 lock guard로 차단
4. [완료] `docs/verification_report.md`, `docs/current_status_report.md`에 11패키지 기준선 반영

Next Step Plan (Sprint-2, 1~2주): 데이터패스 선택성 확보
1. `mac_pe` 계층에 INT8/FP16 선택 모드(컴파일 타임 파라미터) 추가
2. `systolic_array`/`psum_accumulator_buffer`를 모드별 누산 경로로 분기(공통 인터페이스 유지)
3. 모드별 골든/패키지 생성기 분기 구현(INT8 기본, FP16 실험 모드)
4. UVM 테스트셋을 모드별 스모크/기본/스트레스로 분리하고 각 모드 최소 게이트 지정
5. signoff 스크립트에 `--mode int8|fp16` 인자 추가 및 summary에 mode 메타데이터 기록

Sprint-2 실행 체크리스트(권장 10일):
1. Day 1-2: RTL 모드 스위치 뼈대 추가 ✅ 완료(2026-04-08)
  - `NPU_DATA_MODE` 파라미터(INT8=0, FP16=1) 정의
  - `mac_pe`/`mac_pe_int8` generate 분기 래퍼 작성
  - `systolic_array` compile-time 분기 연결
  - 상위 전달 경로(`npu_system_top`→`npu_mxe_top`→`npu_core_top`)까지 `DATA_MODE` 파라미터 체인 연결
  - 기본 INT8 모드에서 `make -C scripts build-core`, `make -C scripts build-system`, `bash scripts/run_l5_signoff.sh` PASS 확인
2. Day 3-4: 누산/드레인 경로 모드 분리 ✅ 완료(2026-04-08)
  - INT8 경로: INT32 signed 누산(현행 유지)
  - FP16 경로: FP32 가산 경로를 별도 generate로 복구
  - 공통 포트/타이밍 contract 유지 여부 회귀 검증
  - `psum_accumulator_buffer`에 `DATA_MODE` parameter + generate 분기(INT8 signed add / FP16 fp32_adder) 반영
  - `verify.sh`, `run_l5_signoff.sh`에 `--data-mode`/`--mode` 스켈레톤 인자 추가
  - FP16 smoke 경로는 별도 빌드 디렉터리(`build_fp16`, `build_system_fp16`)를 사용하도록 분리
3. Day 5-6: 패키지/골든 생성기 모드 인식 추가 ✅ 완료(2026-04-08)
  - `tools/generate_streamlined_signoff_packages.py`에 `--mode` 추가
  - INT8: 기존 edge/split-k/forwarding baseline 재생성 경로 유지
  - FP16: smoke skeleton package(`workloads/system_fp16_smoke_skeleton`) + tolerance compare metadata 생성
  - `run_l5_signoff.sh`에서 package generator에 `--mode` 전달하도록 연결
4. Day 7-8: 검증 게이트 분리 ✅ 완료(2026-04-08)
  - UVM smoke를 mode별 1개 이상 고정
  - system chain 최소 게이트를 mode별로 명시
  - `verify.sh` summary에 mode 구분 라벨 추가
5. Day 9-10: signoff 통합 및 문서 동기화 ✅ 완료(2026-04-08)
  - `run_l5_signoff.sh --mode int8|fp16` 지원
  - summary에 `data_mode`, `required_packages_by_mode` 기록
  - `verification_report.md`, `current_status_report.md` 동기화

Sprint-2 완료 기준(exit criteria):
1. INT8 모드에서 현재 11-package baseline이 유지(PASS 10 + expected PACKAGE_ERROR 1)
2. FP16 모드에서 최소 smoke gate(core 1 + system 1 + uvm 1) PASS
3. mode 인자 누락/오입력 시 스크립트가 명확한 에러와 사용법 출력
4. mode별 summary artifact가 동일한 run-scoped/canonical 정책으로 게시

Sprint-3 (2주): 컴파일러-리플레이 일체화
1. L6 emitter/bridge 경로가 `streamlined_dma_execute` 메타데이터를 직접 생성하도록 확장 ✅ 완료(2026-04-08)
  - `verification_only_hook_policy=streamlined_dma_execute` 자동 생성
  - `expected_npu_done_count`를 `k_tile_count` 기준으로 정렬
2. replay bridge에서 split-K/forwarding 주소/카운트 규칙 자동 산출 ✅ 완료(2026-04-08)
  - split-K pass metadata/카운트 규칙이 system replay 기대치와 정합
  - 관련 bridge 테스트 assertion 동기화(`l6/tests/test_replay_bridge.py`)
3. CI에서 11패키지 + 코어 2패키지 + UVM smoke를 필수 게이트로 승격 ✅ 완료(2026-04-08)
  - `.github/workflows/l5-signoff.yml`에 core build, core 2-package, UVM smoke를 one-shot signoff 이전 필수 단계로 고정

Sprint-4 (1주): CI 인프라 고도화 & DMA 스케줄러 기초
1. ✅ **Day 1: L6 CI 게이트 분할 & workload 회귀 workflow 생성** (2026-04-08)
   - `.github/workflows/l6-toolchain.yml`: 3단계 분할
     - "Run L6 CPU/core unit tests" (NumPy 강제, tracer/drift 제외) — 필수 경로
     - "Run tracer dependency gate (advisory)" (continue-on-error) — torch 미보장 환경 대응
     - "Run asset drift gate" (NumPy 강제) — 재현성
   - `.github/workflows/workload-regression.yml`: 신규 생성
     - 트리거: rtl/**, tb/**, host/**, workloads/**, scripts 변경
     - 3 gates: INT8 signoff, FP16 smoke, repeatability check
     - Artifact: l5_signoff, l5_repeatability (7일 보관)
   - 경로 필터 결정:
     - `tb/**` 포함: UVM 실행 안정성 (workload package이 깨질 수 있음)
     - `host/**` 포함: driver/loader 코드 변경이 직접 영향 (필수 회귀 간선)
   - tracer gate 승격 기준 문서화:
     - 현재: advisory (torch 미보장)
     - 승격 조건: runner torch 환경 고정 후 `continue-on-error` 제거
   - Evidence: `.github/workflows/` modified, docs/current_status_report.md update #8 추가
2. ⏳ **Day 2-3: DMA 스케줄러 skeleton 구현** (예정)
   - 파일: `l6/src/l6_toolchain/dma_scheduler.py` (신규)
   - 기능: 타일 스케줄 → DMA command 시퀀스 생성
   - 핑퐁 SRAM 뱅크 할당, 더블 버퍼링 모델링
   - 테스트: 생성 DMA sequence Verilator로 직접 리플레이 (representative 2-3 packages)
3. ⏳ **Day 4-5: workload-regression 워크플로우 runner 검증** (예정)
   - 수동 dispatch 또는 PR 트리거로 실행
   - runner 환경에서 INT8/FP16/repeatability 게이트 검증
   - 실패 시 runner 구성 조정 (torch/cupy/numpy 버전 동기화)
4. ⏳ **Day 6-7: 문서 동기화** (예정)
   - docs/current_status_report.md Sprint-4 entry 추가 (e.g., update #9~#10)
   - agent_development_roadmap.md Track B-2, E-3 진행 상황 기록
   - DMA 스케줄러 설계 방식 소개 (타일 → DMA command 매핑 로직)

Sprint-4 exit criteria:
- L6 CI 분할 및 workload-regression 워크플로우 runner에서 안정적 실행
- tracer gate 승격 시점 명확히 문서화 (runner torch 환경 설정 후)
- DMA 스케줄러 skeleton이 representative packages에 대해 PASS 리플레이 생성
- 전체 체크인 커밋 메시지: "Sprint-4 Day 1: CI infrastructure refactor (L6 test gate split, workload regression workflow)"

### 2.2 컴파일러 미완성 영역 🟠

| 기능 | 상태 | 설명 |
|------|------|------|
| Linear (GEMM) | ✅ 완료 | 단일 타일 + 타일드 + split-K |
| Conv2d (im2col) | ✅ 완료 | im2col → GEMM 변환 |
| **DMA 커맨드 생성** | ❌ 없음 | 스케줄러가 비용만 추정, DMA 시퀀스 미생성 |
| **메모리 레이아웃 변환** | ❌ 없음 | row-major → systolic order 변환 미구현 |
| **멀티-타일 최적화** | ⚠️ 부분 | 타일 순서 최적화는 있으나 더블 버퍼링 미모델링 |

### 2.3 FPGA 미검증 🟠

- 합성 결과는 존재하나 실물 보드 테스트 없음
- ILA 디버그 프로브 미삽입
- AXI DMA → DDR 경로 미검증
- 커널 드라이버/PYNQ 오버레이 미구현

---
---

### Track A: INT8 데이터패스 통합 🟠 (우선순위 1, A-1 완료)

**목표:** RTL, 컴파일러, 골든 모델 모두 INT8 시맨틱을 네이티브로 지원

#### A-1. RTL INT8 MAC PE 구현
상태: ✅ 구현 완료(기본 경로 INT8 전환)

완료 항목:
1. `mac_pe_int8.sv` 추가 (`signed [7:0] × signed [7:0] → signed [31:0]`)
2. `systolic_array.sv`에서 PE 인스턴스가 `mac_pe_int8`를 사용하도록 전환
3. 리플레이 입력 브릿지/비교 경로를 INT8/INT32 시맨틱으로 정합

잔여 항목:
1. 코어 리플레이 패키지 FAIL 1건 해소 (`reference_gemm_tile_m0_n0_k0to15`)
2. INT8 경계값 전용 워크로드 패키지 추가
3. UVM INT8 모드 커버리지 명시

#### A-2. CUDA 골든 FP16 확장
```
파일: npu_cuda/npu_golden_kernel.py 수정
추가: FP16 CUDA 커널 또는 numpy fp16 fallback

의존성: A-1과 독립
```

#### A-3. 양자화 파이프라인 (L6 확장)
```
파일: l6/src/l6_toolchain/quantize.py (신규)
    - per-tensor symmetric quantization
    - scale/zero-point 계산
    - FP32 weight → INT8 변환

의존성: A-1 완료 후 연동
```

---

### Track B: 컴파일러 고도화 🟠 (우선순위 2)

**목표:** 실제 모델(ResNet block 수준)을 컴파일 가능한 수준으로 확장

#### B-1. 연산자 퓨전 프레임워크
```
파일: l6/src/l6_toolchain/fusion.py (신규)

패턴:
  - Linear + ReLU → fused GEMM (acc_clear 타이밍에 ReLU 마스크 적용)
  - Conv2d + BatchNorm → 가중치 접기 (weight folding)
  - Conv2d + ReLU → fused Conv

의존성: 없음 (IR 수준 변환)
테스트: l6/tests/test_fusion.py
```

#### B-2. DMA 커맨드 생성기
```
파일: l6/src/l6_toolchain/dma_scheduler.py (신규)

기능:
  - 타일 스케줄에서 DMA 전송 시퀀스 생성
  - 핑퐁 SRAM 뱅크 할당 자동화
  - 더블 버퍼링 모델링 (DMA ↔ compute overlap)
  - 출력: MMIO 레지스터 쓰기 시퀀스

의존성: 기존 scheduler.py의 비용 모델 활용
테스트: 생성된 DMA 시퀀스를 Verilator로 직접 리플레이
```

#### B-3. 멀티-레이어 메모리 플래닝
```
파일: l6/src/l6_toolchain/memory_planner.py (신규)

기능:
  - 레이어 간 중간 텐서 수명 분석
  - SRAM 재사용 전략 (in-place, ping-pong 스케줄링)
  - 외부 메모리 ↔ SRAM 전송 최소화

의존성: B-2 (DMA 스케줄러)
```

#### B-4. 지원 연산자 확대
```
현재:  linear, conv2d, relu, flatten, add, batch_norm(shape만), max_pool2d(shape만)
목표:  + residual add (실제 compute), + concat, + softmax(근사), + layer_norm

파일: l6/src/l6_toolchain/tracer.py 수정 + lowering.py 확장
테스트: MobileNetV2 inverted residual block 컴파일 테스트
```

---

### Track C: 성능 모델링 & 최적화 🟡 (우선순위 3)

**목표:** 하드웨어 활용률 분석 및 병목 식별

#### C-1. 루프라인 모델 (Roofline Analysis)
```
파일: l6/src/l6_toolchain/roofline.py (신규)

입력: GEMM shape (M, K, N), SRAM 용량, DMA 대역폭, MAC 처리량
출력: 
  - compute-bound vs memory-bound 판정
  - 이론적 활용률 (%)
  - 타일 크기별 최적점 탐색

시각화: matplotlib roofline 차트 생성
```

#### C-2. 사이클-정확 시뮬레이터 (Python)
```
파일: l6/src/l6_toolchain/cycle_sim.py (신규)

기능:
  - DMA 전송 + compute + drain을 사이클 단위 시뮬레이션
  - 핑퐁 버퍼 점유율 추적
  - Verilator 결과와 교차검증

목적: Verilator 없이 빠른 성능 탐색
```

#### C-3. 자동 타일 크기 탐색
```
파일: l6/src/l6_toolchain/auto_tile.py (신규)

기능:
  - GEMM shape → 최적 타일 크기 자동 결정
  - SRAM 용량, 레이턴시, DMA 대역폭 고려
  - TILE_SIZE=16 하드코딩 제거 → 파라메트릭 타일링
```

---

### Track D: FPGA 실물 검증 🟡 (우선순위 3)

**목표:** 시뮬레이션에서 실물 하드웨어로 전환

#### D-1. ILA 디버그 프로브 삽입
```
파일: vivado/build_system_zynq.tcl 수정
     rtl/fpga/fpga_system_bringup_top.sv 수정

프로브 대상:
  - DMA FSM state
  - SRAM bank_sel, write_en
  - Core acc_valid, drain_valid
  - 출력 데이터 처음 16비트
```

#### D-2. PYNQ 오버레이 패키징
```
파일: vivado/package_pynq_overlay.tcl (신규)
     host/pynq_driver.py (신규)

기능:
  - 비트스트림 + hwh → .bit.bin + .hwh 패키지
  - PYNQ Jupyter 노트북에서 DMA 전송/실행/결과 읽기
  - MMIO 레지스터 맵 Python 래퍼
```

#### D-3. 보드 자가진단 스크립트
```
파일: scripts/check_l7_env.ps1 (현재 빈 파일 — 구현 필요)

검사항목:
  - Vivado 설치 확인
  - 보드 연결 (JTAG) 확인
  - 비트스트림 유효성
  - DMA 루프백 테스트
```

---

### Track E: 워크로드 확장 🟡 (우선순위 3)

**목표:** 합성 패턴에서 실제 신경망 레이어로 확장

#### E-1. 실제 모델 레이어 패키지
```
대상 모델:
  1. MobileNetV2 첫 3개 레이어 (Conv2d 3→32, BN, ReLU6)
  2. ResNet-18 residual block (Conv2d + skip connection)
  3. Transformer attention head (QKV projection, 단일 head)

출력: workloads/ 하위에 per-model 디렉토리
검증: Verilator 리플레이 + NumPy 골든 diff
```

#### E-2. 엣지 케이스 스트레스 패키지
```
추가 패키지:
  - M,N이 16의 배수가 아닌 경우 (tail handling 강화)
  - K > 256 (극단적 split-K)
  - 배치 차원 > 1
  - 음수 중심 분포 (signed INT8 경계)
  - 올-제로, 올-max 입력
```

#### E-3. 회귀 테스트 자동화 (CI 강화)
```
파일: .github/workflows/workload-regression.yml (신규)

트리거: workloads/** 또는 rtl/** 변경 시
실행: 전체 18+ 패키지 리플레이
리포트: 패키지별 PASS/FAIL + cycle count diff
```

---

### Track F: 문서 & 관측성 🟢 (우선순위 4)

#### F-1. 대화형 아키텍처 가이드
```
파일: docs/interactive_architecture.md (신규)

내용:
  - Mermaid 다이어그램으로 FSM 상태 전이
  - 각 모듈의 입출력 포트 테이블
  - 시그널 타이밍 웨이브폼 (WaveDrom JSON)
  - RTL 모듈 ↔ L6 컴파일러 대응 맵
```

#### F-2. 에이전트용 자기진단 스크립트
```
파일: tools/agent_selfcheck.py (신규)

기능:
  - Python 환경 검증 (torch, numpy, l6_toolchain import)
  - WSL 빌드 도구 확인 (make, g++, verilator)
  - 최근 테스트 결과 요약
  - 워크로드 패키지 무결성 해시 검증
  - 실행: python tools/agent_selfcheck.py → JSON 리포트
```

---

### Track G: 런타임 & 배포 🔵 (우선순위 5, 장기)

#### G-1. 리눅스 커널 드라이버 스켈레톤
```
파일: host/driver/ (신규 디렉토리)
  - npu_drv.c — platform driver 등록, MMIO 맵핑
  - npu_ioctl.h — DMA submit, wait_done, read_output
  - Makefile — 크로스 컴파일 (ARM/aarch64)
```

#### G-2. 유저스페이스 런타임 라이브러리
```
파일: host/runtime/ (신규)
  - npu_runtime.py — ioctl 래퍼 + 텐서 직렬화
  - npu_runtime.h / .c — C API

인터페이스:
  ctx = npu_open("/dev/npu0")
  npu_load_weights(ctx, weight_buf, size)
  npu_run_inference(ctx, input_buf, output_buf)
  npu_close(ctx)
```

#### G-3. ONNX 프론트엔드
```
파일: l6/src/l6_toolchain/onnx_frontend.py (신규)

기능:
  - ONNX 그래프 → L6 IR Program 변환
  - 지원 op: Gemm, Conv, Relu, Add, Flatten, BatchNorm
  - PyTorch 없이 모델 로드 가능
```

---

### Track H: 테스트 인프라 강화 🟢 (우선순위 4)

#### H-1. 프로퍼티 기반 테스트 (L6)
```
파일: l6/tests/test_property.py (신규)
도구: hypothesis 라이브러리

프로퍼티:
  - 임의의 M,K,N에 대해 타일링 → 재조합 = 원본
  - 임의의 signed int8 입력에 대해 골든 = DUT
  - 스케줄 비용 ≥ 0, 순서 재배열 후 결과 불변
```

#### H-2. 코어 RTL 커버리지 리포트 자동화
```
파일: scripts/gen_coverage_report.sh (신규)

기능:
  - UVM 커버리지 수집 + HTML 리포트
  - 구조적/기능적 커버리지 메트릭
  - CI에서 자동 생성 → artifacts 업로드
```

---

## 4. 에이전트 작업 지시 프로토콜

### 4.1 작업 할당 형식

에이전트에게 작업을 지시할 때 다음 형식을 사용:

```
## 작업 지시: [Track]-[번호] [제목]

### 컨텍스트
- 선행 완료 작업: [의존성 트랙-번호]
- 참조 파일: [관련 파일 목록]
- 참조 문서: [읽어야 할 docs/ 파일]

### 목표
[1~2문장으로 명확한 완료 조건]

### 제약 조건
- 기존 테스트 깨뜨리지 않을 것
- 코딩 스타일: .agents/skills/rtl-coding-guide/SKILL.md 준수 (RTL 작업 시)
- L6 작업 시: .agents/skills/l6-compiler/SKILL.md 참조
- 새 파일 추가 시: .agents/skills/doc-update/SKILL.md에 따라 문서 갱신

### 검증 방법
- `make verify-fast` 통과
- 새 테스트 추가: [테스트 파일 경로]
- 예상 출력: [구체적 PASS 기준]

### 완료 기준
- [ ] 코드 작성 완료
- [ ] 테스트 통과
- [ ] 기존 회귀 테스트 통과
- [ ] (해당 시) 문서 갱신
```

### 4.2 에이전트 역할 분류

| 역할 | 담당 트랙 | 필수 스킬 파일 |
|------|----------|--------------|
| **RTL Engineer** | A (INT8), D (FPGA) | `rtl-coding-guide`, `run-simulation`, `fpga-build` |
| **Compiler Engineer** | B (컴파일러), C (성능) | `l6-compiler`, `workload-package` |
| **Verification Engineer** | E (워크로드), H (테스트) | `run-simulation`, `verification-debug`, `workload-package` |
| **Integration Engineer** | F (문서), G (런타임) | `doc-update`, `l6-compiler` |

### 4.3 병렬화 가능 매트릭스

```
         A    B    C    D    E    F    G    H
    A    -    ✗    ✗    ✗    ✗    ✓    ✗    ✓
    B    ✗    -    →    ✗    ✓    ✓    ✓    ✓
    C    ✗    ←    -    ✗    ✗    ✓    ✗    ✗
    D    ✗    ✗    ✗    -    ✗    ✓    →    ✗
    E    ✗    ←    ✗    ✗    -    ✓    ✗    ✓
    F    ✓    ✓    ✓    ✓    ✓    -    ✓    ✓
    G    ✗    ←    ✗    ←    ✗    ✓    -    ✗
    H    ✓    ✓    ✗    ✗    ✓    ✓    ✗    -

✓ = 완전 병렬 가능    → = 선행 필요 (행→열)    ✗ = 독립적이나 동시 변경 충돌 주의
```

### 4.4 우선순위 실행 순서 (권장)

```
Phase 1 (즉시 착수 가능):
  ├── A-1: INT8 MAC PE RTL 구현 ──────────────── [RTL Engineer]
  ├── B-1: 연산자 퓨전 프레임워크 ────────────── [Compiler Engineer]  
  ├── F-2: 에이전트 자기진단 스크립트 ──────────── [Integration Engineer]
  └── H-1: 프로퍼티 기반 테스트 ──────────────── [Verification Engineer]

Phase 2 (Phase 1 일부 완료 후):
  ├── A-2: CUDA 골든 FP16 확장 ──────────────── [RTL Engineer]
  ├── B-2: DMA 커맨드 생성기 ─────────────────── [Compiler Engineer]
  ├── E-1: 실제 모델 레이어 패키지 ─────────────── [Verification Engineer]
  └── C-1: 루프라인 모델 ─────────────────────── [Compiler Engineer]

Phase 3 (기반 완성 후):
  ├── A-3: 양자화 파이프라인 ─────────────────── [Compiler Engineer]
  ├── B-3: 멀티-레이어 메모리 플래닝 ────────── [Compiler Engineer]
  ├── D-1: ILA 디버그 프로브 ─────────────────── [RTL Engineer]
  └── E-3: 워크로드 회귀 CI ──────────────────── [Verification Engineer]

Phase 4 (장기):
  ├── D-2: PYNQ 오버레이 패키징 ─────────────── [RTL + Integration]
  ├── G-1~3: 드라이버, 런타임, ONNX ──────────── [Integration Engineer]
  └── B-4: 연산자 확대 (softmax 등) ────────── [Compiler Engineer]
```

---

## 5. 기술 제약 & 환경 조건

### 5.1 빌드 환경

| 도구 | 버전 | 위치 | 비고 |
|------|------|------|------|
| Python | ≥ 3.12 | `.venv/` | numpy, pytest, torch 필요 |
| Verilator | WSL 내 | `bash.exe` 경유 | Windows 네이티브 X |
| Vivado | 2025.2 | `C:\AMDDesignTools\` | 합성/시뮬 |
| PyTorch | 최신 | pip install | L6 tracer 의존 |
| WSL | Ubuntu | Windows 호스트 | make, g++ |

### 5.2 RTL 코딩 규칙 요약

- 모든 output은 `always_ff` 등록 (순수 조합 출력 금지)
- 리셋: `!rst_n` (active-low, 현재 비동기 → 동기 전환 진행 중)
- 네이밍: `snake_case`, 모듈명 = 파일명
- 상수: `npu_def_pkg.sv`에 패키지화
- 상세: `.agents/skills/rtl-coding-guide/SKILL.md` 참조

### 5.3 L6 패키지 구조 규칙

```
workloads/<package_name>/
  ├── manifest.json       ← 필수: shape, addr, payload 참조
  ├── weight_payload.bin  ← 가중치 (K×N, row-major, signed int8)
  ├── act_payload.bin     ← 활성화 (M×K, row-major, signed int8)
  └── golden_payload.bin  ← 기대 출력 (M×N, row-major, signed int32)
```

### 5.4 테스트 실행 명령어

```bash
# L6 툴체인 전체 테스트
cd l6 && python -m pytest tests/ -v

# Verilator 코어 시뮬
make sim

# 시스템 리플레이 (특정 패키지)
make sim-system SYSTEM_PACKAGE=workloads/<pkg>

# L5 전체 sign-off
make l5-signoff

# 빠른 검증 (핵심 서브셋)
make verify-fast
```

---

## 6. 성공 지표

| 마일스톤 | 측정 기준 | 목표 |
|---------|----------|------|
| INT8 데이터패스 | 기존 18 패키지 INT8 모드 PASS | 100% |
| 컴파일러 MobileNet | MobileNetV2 첫 블록 컴파일+리플레이 | PASS |
| 루프라인 모델 | 이론 vs 실측 사이클 오차 | < 15% |
| FPGA 보드 검증 | DMA 루프백 + 단일 GEMM 실행 | PASS |
| 워크로드 커버리지 | 40+ 패키지 (현재 18개) | 2× 이상 |
| 테스트 수 | L6: 150+ (현재 ~88) | 1.7× |

---

## 7. 금지 사항 (Anti-Patterns)

에이전트가 반드시 피해야 할 것:

1. **TILE_SIZE 하드코딩 추가 금지** — 새 코드에서 `16`을 매직넘버로 쓰지 말 것. `npu_def_pkg.sv`의 상수 참조
2. **RTL 비동기 리셋 확산 금지** — 새 모듈은 반드시 동기 리셋 (`posedge clk` 블록 내 리셋)
3. **L6 테스트에서 Verilator 의존 금지** — 유닛 테스트는 바이너리 없이 동작해야 함 (리플레이 스모크만 예외)
4. **워크로드 패키지 수동 편집 금지** — 항상 L6 emitter 또는 `regenerate_fixed_replay_assets.py`로 생성
5. **docs/ 수동 수정 후 체크리스트 미반영 금지** — `docs/report_update_checklist.md` 참조
6. **절대 경로 신규 추가 금지** — `C:\projects\silicontoai` 같은 하드코딩 금지 (기존 데모 제외)

---

*이 문서는 프로젝트의 현재 상태를 기반으로 작성되었으며, 각 트랙 완료 시 갱신이 필요합니다.*
