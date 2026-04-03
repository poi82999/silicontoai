# Current Status Report

## Current Status

> Key takeaway
> 
> RTL 코어, package-driven replay, L5 sign-off, repeatability, GitHub Actions 자동화까지 현재 baseline은 사실상 닫혔습니다.
> 남은 공백은 구조 자체보다 상위 workload 확장, 성능 모델링, compiler/backend, FPGA 실물 검증 쪽에 가깝습니다.

- Overall completion: ██████████ 96%
- RTL implementation stability: █████████░ 89%
- Verification maturity: █████████░ 93%
- Real workload linkage: █████████░ 90%
- Full-stack scalability: ████████░░ 78%

---

## Phase Breakdown

## L0. Functional Contract

> Goal: 설계와 검증의 기준이 되는 하드웨어 입출력 규약, timing semantics, phase ordering, pass/fail 기준을 문서화

- Progress: ██████████ 100%
- Exit criterion: 문서만 읽어도 system/core 경계, DMA/start-done semantics, accumulator/drain rules, legal/illegal sequence를 재구성할 수 있어야 함
- [x] 주요 블록 역할 및 구조 문서화
- [x] 31-cycle timing assumption 및 제약사항 정리
- [x] system/core boundary 정의
- [x] 입력/출력 format contract 고정
- [x] `acc_clear`, `acc_valid`, `drain` 규칙 명문화
- [x] DMA 시작/종료 조건 및 system FSM phase 기준 정의
- [x] sign-off pass/fail 판단 기준 문서화

Current evidence:

- `docs/functional_contract_report.md`

## L1. Dataflow Analysis

> Goal: 데이터 이동과 compute 구조의 타당성을 설명하고, tile 단위 흐름과 병목 해석 기반을 확보

- Progress: ████████░░ 78%
- Exit criterion: load -> preload -> execute -> flush -> drain 경로를 tile 관점과 bandwidth 관점으로 모두 설명 가능해야 함
- [x] Weight-stationary 구조 타당성 정리
- [x] Activation skew / psum deskew 필요성 문서화
- [x] 31-cycle pipeline 도출 근거 정리
- [x] SRAM bank, DMA, core 간 연결 개요 설계
- [x] 실제 연산 tile 기준 데이터 흐름 예시 추가
- [ ] Workload 관점 병목 분석 정량화
- [ ] Bandwidth vs compute roofline 분석

Current evidence:

- `docs/architecture_report.md`
- `docs/functional_contract_report.md`

## L2. Workload Package Definition

> Goal: 실제 AI tile을 package와 manifest로 정의하고 core/system replay가 같은 package 개념을 공유하도록 고정

- Progress: ████████░░ 88%
- Exit criterion: package directory와 manifest만으로 payload 해석, tile placement, execution policy, golden compare 기준이 결정돼야 함
- [x] Workload replay 방향성 및 필요성 확립
- [x] Host/runtime 최소 뼈대 구현
- [x] Workload package directory 구조 정의
- [x] Manifest 필드 및 schema 역할 정의
- [x] Activation/weight/golden payload 포맷 정의
- [x] System replay 확장 필드 정의
- [ ] Saturation / overflow / int arithmetic 기준 별도 문서로 완결

Current evidence:

- `docs/workload_package_report.md`
- `host/replay_package.h`
- `workloads/system_reference_gemm_tile_m0_n0_k0to15/manifest.json`

## L3. RTL Structure Stabilization

> Goal: 핵심 RTL 구현과 기본 corner-case 방어가 regression/CI 기준으로 안정적으로 유지

- Progress: █████████░ 90%
- Exit criterion: baseline RTL, DMA, accumulator, forwarding, split-K 관련 핵심 risk가 regression과 CI에서 반복적으로 통과해야 함
- [x] 16x16 systolic array 구현 완료
- [x] DMA + SRAM + core + accumulator top-level 통합 완료
- [x] Directed system simulation 및 UVM core verification 구축
- [x] Assertion 기반 검증 및 merged coverage flow 도입
- [x] Split-K system bug 수정 및 regression 반영
- [x] Verilator width/case warning 정리
- [x] Contract-driven verification 기준 문서화
- [ ] 더 넓은 실제 workload corner case 보강

Current evidence:

- `rtl/npu_system_top.sv`
- `rtl/dma_controller.sv`
- `docs/verification_report.md`

## L4. Core-Level Replay

> Goal: hard-coded stimulus 대신 package를 읽어서 core replay를 실행하고 golden 자동 비교를 수행

- Progress: █████████░ 92%
- Exit criterion: reference package를 core replay로 실행해 자동 판정과 mismatch report를 생성해야 함
- [x] Core-level Verilator simulation 환경 구축
- [x] 수동 stimulus 기반 accumulate/drain 기본 검증
- [x] Package loader 및 manifest parser 연동
- [x] Golden data 자동 비교 및 mismatch report 구조 구현
- [x] Replay pass/fail 기준 확립
- [x] Dedicated forwarding core package로 same-address forwarding hit 증명

Current evidence:

- `tb/main.cpp`
- `docs/core_replay_loader_report.md`
- `workloads/reference_acc_forwarding_same_addr_core/`

## L5. System Replay and Sign-off

> Goal: system top 기준 package-driven replay, coverage/assertion/sign-off gate, repeatability, CI automation까지 통합

- Progress: ██████████ 100%
- Exit criterion: repository-hosted regression set, forwarding evidence, assertion/coverage evidence, one-shot sign-off, repeatability, CI가 모두 PASS 해야 함
- [x] System-level directed simulation 구축
- [x] Verify-fast / verify 전체 집계 흐름 구축
- [x] DMA input map 및 SRAM bank 배치 규칙 정리
- [x] System replay 입력 포맷 및 system-level golden check 구현
- [x] Chained replay mode 구현
- [x] Runner-native event / assertion / coverage artifact 구현
- [x] Dedicated system forwarding scenario 추가
- [x] Numeric sign-off gate 수립
- [x] One-shot sign-off flow 구현
- [x] Repeatability flow 구현
- [x] GitHub Actions self-hosted CI 성공

Current evidence:

- `tb/system_replay_main.cpp`
- `docs/l5_system_replay_scenarios_report.md`
- `docs/l5_signoff_sample_report.md`
- `.github/workflows/l5-signoff.yml`

## L6 and L7. Long-Term Expansion

> Goal: compiler/backend, higher-level operator tiling, FPGA implementation과 timing closure까지 확장

- L6 compiler/backend linkage: █████████░ 92%
  - [x] Python 3.12 기반 L6 workspace와 public API surface 정리
  - [x] `gemm_tile` / `gemm_tiled` exporter, inspector, validator 구축
  - [x] Torch `Linear` / `Conv2d` frontend와 grouped-conv real-data lowering 경로 구축
  - [x] Mini IR `Program/OpNode/TensorValue`와 `program_sequence` package export 구축
  - [x] Replay bridge를 통해 L6 compute/program package를 system replay workload로 변환 가능
  - [x] WSL-backed system replay smoke, committed fixed regression asset, regenerate script까지 연결
  - [x] M1 arithmetic semantics 문서화 및 signed-int8 alignment design note 작성
  - [x] M2 fixed replay asset drift-check test 및 regenerate script 연결
  - [x] M3 torch.fx tracer + 8개 op frontend coverage (linear/conv2d/relu/flatten/add/bias_add/reshape/getattr)
  - [x] M4 analytical cost model, weight_reuse reorder, memory budget analysis (scheduler.py)
  - [x] M5 end-to-end compiler entry (`compile_program`), scheduler→export bridge, schedule metadata in manifest, CLI
  - [ ] 현재 지원 op를 넘는 broader importer / model-level coverage 확장
  - [ ] representative end-to-end layer/model set으로 fixed regression workload 확대
- L7 FPGA implementation: ███████░░░ 70%
  - [x] Vivado simulation flow 확보
  - [x] Arty A7-35T pre-board bitstream synthesis (npu_core_top → xc7a35t, timing met)
  - [x] Zynq system bitstream with ILA debug (xc7z020, 14 probes, depth-1024)
  - [x] PYNQ overlay bitstream + .hwh metadata generation
  - [x] PYNQ host notebook (NPUDriver, DMA, overlay load)
  - [x] Board-less visualization notebook (sim → heatmap / timeline)
  - [x] Full-stack demo: PyTorch → L6 compile → Verilator RTL sim → per-layer verify (ALL PASS in ~5s)
  - [ ] On-board FPGA validation (requires physical board connection)
  - [ ] Post-implementation utilization / timing closure report 정리

Current evidence:

- `l6/README.md`
- `docs/l6_arithmetic_semantics_report.md`
- `l6/src/l6_toolchain/api.py`
- `l6/src/l6_toolchain/replay_bridge.py`
- `l6/regenerate_fixed_replay_assets.py`
- `l6/tests/test_replay_bridge.py`
- `vivado/build_system_zynq.tcl`
- `vivado/build_pynq_overlay.tcl`
- `host/npu_fullstack_demo.ipynb`
- `host/npu_local_viz.ipynb`
- `host/pynq_npu_demo.ipynb`

---

## Project Position and Strategy

Strengths:

- RTL, directed test, UVM, assertion coverage, Verilator replay, system replay, sign-off automation, repeatability, CI까지 한 저장소 안에서 연결되어 있습니다.
- 단순 블록 구현이 아니라 실제 반도체 개발 흐름에 가까운 verification stack이 확보된 상태입니다.

Remaining gaps:

- compiler/backend prototype은 이미 package와 replay workload를 직접 뽑을 수 있지만, coverage가 현재 지원 op와 explainable path에 한정되어 있습니다.
- hardware-faithful golden generation은 현재 지원 op 범위에서는 자동화됐지만, arithmetic policy와 broader workload set까지 닫히지는 않았습니다.
- FPGA synthesis/timing/bring-up은 아직 장기 과제입니다.

---

## Short-Term Priorities

- [ ] L1 roofline / bottleneck 분석 문서 추가
- [ ] L6 broader model-level regression workload 확대 (grouped conv, split-K, tail, multi-step chain)
- [ ] L6 asset drift CI gate 추가 (GitHub Actions)
- [ ] L7 on-board FPGA validation (requires physical board)
- [ ] L7 post-implementation utilization / timing report 정리

현재 baseline closure 관점에서는 L0, L4, L5가 유지보수 상태이고, L6 M1-M5가 완료되어 L7 pre-board 준비가 완료된 상태입니다.
Phase B (full-stack PyTorch → Verilator → 검증) 파이프라인이 보드 없이 동작하며, 남은 작업은 실물 보드 연결 후 on-board validation입니다.

---

## L6 Milestones (All Complete)

### M1. Semantics Closure ✅

> Goal: 현재 지원 경로에서 golden이 무엇을 의미하는지 arithmetic policy까지 문서/코드 기준을 일치시킴

- Status: **COMPLETE**
- Evidence:
  - `docs/l6_arithmetic_semantics_report.md` — dtype, accumulation, saturation/overflow policy 문서화
  - `docs/l6_signed_int8_alignment_design_note.md` — long-term signed-int8 contract 명문화
  - replay bridge compare semantics와 validator가 위 정책과 정렬됨
  - fixed assets가 regenerate script 기준으로 재생성 가능

### M2. Regression Closure ✅

> Goal: L6 산출물이 repo-hosted regression asset과 smoke로 반복 검증되도록 고정

- Status: **COMPLETE**
- Evidence:
  - `l6/regenerate_fixed_replay_assets.py` — 고정 asset 재생성 표준 절차
  - `l6/tests/test_asset_drift.py` — committed asset vs freshly generated 비교 테스트
  - split-K, tail tile, multi-step chain 포함 regression pack 유지
  - Remaining: CI gate 자동화는 추후 추가 가능 (현재 local test로 검증)

### M3. Frontend Coverage Expansion ✅

> Goal: 현재 explainable path를 유지한 채 입력 coverage를 더 넓힘

- Status: **COMPLETE**
- Evidence:
  - `tracer.py` — torch.fx 기반 자동 graph import, 8개 op 지원
  - `frontend.py` — Linear, Conv2d, grouped conv, dilation, stride, padding 지원
  - unsupported op에 대한 explicit `ValueError` diagnostic
  - 12+ tracer test cases covering MLP, Conv+BN+ReLU, residual, classifier 패턴

### M4. Scheduling and Cost Awareness ✅

> Goal: 지금의 direct tiling rule을 넘어서 shape-dependent scheduling 판단을 추가

- Status: **COMPLETE**
- Evidence:
  - `scheduler.py` — RTL-derived analytical cost model (cycle-accurate tile estimation)
  - `reorder_tiles()` — weight_reuse 전략으로 DMA 절감
  - `estimate_schedule_cost()` → `ScheduleSummary` with total/dma/compute cycles
  - `analyze_memory_usage()` → `MemoryUsageReport` with 64KB budget check
  - `compare_schedules()` — 전략간 비교
  - 10+ scheduler test cases

### M5. End-to-End Compiler Entry ✅

> Goal: framework graph에서 `program_sequence`와 replay-ready package까지 직접 연결되는 상위 진입점을 마련

- Status: **COMPLETE**
- Design note: `docs/m5_end_to_end_compiler_design.md`
- Evidence:
  - `compiler.py` — 4-layer pipeline (import → plan → materialize → report)
  - `compile_program(source, options)` → `CompilerResult` one-shot entry
  - scheduler→export bridge: reordered tiles가 실제 package에 반영
  - schedule metadata가 step manifest의 `"compiler"` 블록에 기록
  - `__main__.py` — CLI: `python -m l6_toolchain compile --program-json <path>`
  - 24 compiler test cases

---

## Weekly Update Log

**[2026.04.02 update #2]**

- Status: 🟢 정상 진행
- One-line summary: L6 M1-M5 전체 완료, scheduler→export bridge 수정, schedule metadata 적용, compiler CLI 추가, factory analogy 문서화

Completed since the previous snapshot:

- [x] M4 scheduler.py 완성: analytical cost model, weight_reuse reorder, memory budget analysis, schedule comparison
- [x] M5 compiler.py 완성: 4-layer pipeline (import→plan→materialize→report), `CompilerResult` one-shot entry
- [x] Scheduler→export bridge 수정: reordered tiles가 실제 package에 반영되도록 `tile_order` kwarg 추가
- [x] Schedule metadata in step manifest: per-step `"compiler"` 블록에 strategy/cycles/dma/memory 기록
- [x] `__main__.py` CLI entry: `python -m l6_toolchain compile --program-json <path>` 지원
- [x] Test suite 확장: 112 tests 전체 PASS (compiler 24 + scheduler 10 + 기존 78)
- [x] `docs/factory_analogy_architecture.md` 작성: 전체 HW/SW 스택 공장 비유 문서
- [x] `docs/current_status_report.md` 갱신: M1-M5 완료 반영, progress bar 92%, short-term priorities 갱신

Reference commands validated in the current baseline:

```bash
c:/projects/silicontoai/.venv312/Scripts/python.exe -m pytest l6/tests  # 112 passed
c:/projects/silicontoai/.venv312/Scripts/python.exe -m l6_toolchain --help
c:/projects/silicontoai/.venv312/Scripts/python.exe -m l6_toolchain compile --help
```

Current decision:

- L6 M1-M5 전체 COMPLETE. L7 진입 준비 완료.
- 다음 주요 value-up은 L7 FPGA synthesis / utilization / timing report
- L6 확장 여지: broader model coverage, asset drift CI gate, scheduler autotuning

**[2026.04.02 update]**

- Status: 🟢 정상 진행
- One-line summary: L6 study toolchain이 package export를 넘어 replay bridge, committed fixed regression asset, split-K/tail chained smoke, regenerate script까지 연결됨

Completed since the previous snapshot:

- [x] L6 workspace를 Python 3.12 기반으로 정리하고 public API surface 고정
- [x] Linear single-tile / tiled export와 package inspector / validator 구축
- [x] Torch Linear / Conv2d frontend, dilation, grouped conv real-data lowering 지원
- [x] Mini IR `Program` lowering과 `program_sequence` export 구축
- [x] Real-data multi-step program export와 runtime tensor summary 기록
- [x] Replay bridge로 L6 package -> system replay workload 변환 지원
- [x] tail tile valid-lane compare와 split-K replay contract hardening 완료
- [x] Windows host에서 WSL-backed rebuild/run으로 system replay smoke PASS
- [x] committed fixed replay asset 2종과 regenerate script 추가

Reference commands validated in the current baseline:

```bash
c:/projects/silicontoai/.venv312/Scripts/python.exe -m pytest l6/tests
c:/projects/silicontoai/.venv312/Scripts/python.exe l6/regenerate_fixed_replay_assets.py
```

Current decision:

- L6는 "operator-to-package explainable prototype backend" 기준으로는 중후반 단계에 진입
- L6 arithmetic 방향은 long-term signed-int8 contract, short-term non-negative byte-compatible replay subset으로 고정
- 다음 주요 value-up은 arithmetic semantics closure, asset drift gate, broader importer coverage, scheduling/cost awareness

**[2026.03.24 update]**

- Status: 🟢 정상 진행
- One-line summary: package-driven core/system replay, forwarding stress, numeric L5 sign-off, repeatability, self-hosted GitHub Actions, repo cleanup까지 완료

Completed since the previous snapshot:

- [x] L0 functional contract 문서 계약 수준으로 고정
- [x] L2 workload package schema 및 reference package 구조 정의
- [x] L4 core replay loader 구현 및 golden 자동 비교 연동
- [x] Core forwarding dedicated package 추가 및 hit 증명
- [x] L5 system replay runner 구현
- [x] Split-K system bug 수정 및 재검증
- [x] Chained replay mode 추가
- [x] Runner-native event summary / assertion / coverage artifact 추가
- [x] Coverage taxonomy를 UVM/assertion 보고서와 정렬
- [x] System forwarding dedicated package 추가 및 hit 증명
- [x] Numeric sign-off gate 정리
- [x] One-shot sign-off 및 repeatability flow 구현
- [x] Self-hosted GitHub Actions `L5 Signoff` workflow 성공
- [x] 불필요한 generated artifact 정리 및 cleanup flow 수정
- [x] Cleanup 이후 local `make l5-signoff` 재통과
- [x] Cleanup 이후 remote CI `l5-signoff` 재통과

Reference commands validated in the current baseline:

```bash
make l5-signoff
make l5-repeatability
git push origin main
```

Current decision:

- 현재 repository baseline은 L5 closure 관점에서 `PASS`
- 다음 주요 value-up은 workload 확장 자동화와 compiler/backend 연계