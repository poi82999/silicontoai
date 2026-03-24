# NPU SiliconToAI

Weight-Stationary 방식의 **16×16 Systolic Array** 기반 NPU RTL 설계 프로젝트입니다.  
FPGA(Xilinx/AMD Vivado) 타겟이며, Vivado xsim 및 Verilator 기반 검증을 지원합니다.

---

## 📁 디렉토리 구조

```
silicontoai/
├── docs/                   # AI/엔지니어 분석용 유지 문서
│   ├── ai_analysis_report.md
│   ├── architecture_report.md
│   ├── verification_report.md
│   ├── debugging_report.md
│   └── report_update_checklist.md
│
├── rtl/                    # RTL 소스 (SystemVerilog)
│   ├── npu_system_top.sv   # 최상위 통합 모듈 (DMA + SRAM + NPU Core + FSM)
│   ├── npu_core_top.sv     # NPU Core (Systolic Array + Accumulator)
│   ├── dma_controller.sv   # AXI4 Read DMA 컨트롤러
│   ├── systolic_array_16x16.sv  # 16×16 MAC Array (Skew/Deskew 포함)
│   ├── systolic_data_setup.sv   # Activation Input Skewing
│   ├── mac_pe.sv           # INT8×INT8→INT32 MAC Processing Element
│   ├── psum_accumulator_buffer.sv # Partial Sum BRAM 누산 버퍼
│   └── dp_sram_bank.sv     # Dual-Port SRAM Bank
│
├── tb/                     # 테스트벤치
│   ├── tb_system_top.sv    # 시스템 레벨 Directed Test
│   ├── tb_top.sv           # UVM 최상위 TB
│   ├── npu_uvm_pkg.sv      # UVM 검증 환경 (Driver/Monitor/Scoreboard/Test)
│   └── npu_if.sv           # UVM Virtual Interface
│
├── host/                   # C++ 호스트 드라이버 (Verilator 연동)
│   ├── npu_dma_controller.h
│   └── mock_allocator.h
│
├── scripts/                # 시뮬레이션 실행 스크립트
│   ├── run_sys.bat         # Vivado 시스템 레벨 시뮬 (권장)
│   ├── run_uvm.bat         # Vivado UVM 시뮬
│   ├── run_uvm.sh          # Linux용 UVM 시뮬
│   └── Makefile            # Verilator Co-sim 빌드
│
├── tools/                  # 유틸리티
│   ├── concat.py           # 모든 소스를 하나의 txt로 합치기
│   └── split.py            # txt에서 소스 파일로 분리
│
├── sim/                    # 시뮬레이션 결과 로그 (.gitignore됨)
├── Makefile                # 루트 빌드 스크립트
├── .gitignore
└── README.md
```

## 🤖 AI 분석 진입점

다른 AI나 자동화 에이전트가 이 프로젝트를 빠르게 분석해야 하면 아래 순서로 읽는 것을 권장합니다.

1. `README.md`
2. `docs/ai_analysis_report.md`
3. `docs/functional_contract_report.md`
4. `docs/workload_package_report.md`
5. `docs/core_replay_loader_report.md`
6. `docs/l5_system_replay_scenarios_report.md`
7. `docs/l5_signoff_report_template.md`
8. `docs/system_replay_phase_executor_report.md`
9. `docs/l5_signoff_sample_report.md`
10. `docs/architecture_report.md`
11. `docs/verification_report.md`
12. `docs/debugging_report.md`
13. `docs/report_update_checklist.md`
14. `rtl/npu_system_top.sv`
15. `rtl/npu_core_top.sv`
16. `tb/npu_uvm_pkg.sv`

문서 역할:

- `docs/ai_analysis_report.md`: 분석 진입점과 읽기 순서
- `docs/functional_contract_report.md`: 시스템/코어 기능 계약, 타이밍 규칙, accumulator/drain 규칙
- `docs/workload_package_report.md`: L2 workload package 개념, manifest 필드, replay 기준 예시
- `docs/core_replay_loader_report.md`: L4 core replay loader 설계, 실행 순서, mismatch 리포트 기준
- `docs/l5_system_replay_scenarios_report.md`: L5에서 어떤 package family를 어떤 순서와 목적로 검증해야 하는지 정리한 시나리오 표
- `docs/l5_signoff_report_template.md`: package 기반 L5 결과를 정리하고 sign-off 판단을 남기기 위한 보고서 초안
- `docs/system_replay_phase_executor_report.md`: future system replay runner가 package를 phase list로 확장하고 실행할 때 따라야 할 설계 기준
- `docs/l5_signoff_sample_report.md`: 현재 저장된 실제 로그/coverage 근거를 반영해 채워 본 첫 L5 sign-off 샘플
- `docs/architecture_report.md`: 핵심 RTL 구조, 데이터 흐름, Mermaid 연결도
- `docs/verification_report.md`: 검증 구조, 명령어, 산출물 위치
- `docs/debugging_report.md`: 증상별 디버깅 가이드
- `docs/report_update_checklist.md`: RTL/검증 변경 시 문서 동기화 체크리스트와 템플릿

---

## 🏗️ 아키텍처 개요

```
Main Memory (AXI4)
    │
    ▼ DMA (dma_controller)
Ping-Pong SRAM × 4 (dp_sram_bank)
    │  bank_sel 기반 MUX
    ▼
16×16 Systolic Array (systolic_array_16x16)
  - Activation Skewing (systolic_data_setup)
  - 256개 MAC PE (mac_pe): INT8 × INT8 → INT32
  - Psum De-skewing
    │  31-cycle pipeline
    ▼
Partial Sum Accumulator (psum_accumulator_buffer)
  - BRAM 512-depth × 512-bit
  - RAW Hazard Forwarding
    │
    ▼ Drain Interface
Output
```

**파이프라인 레이턴시**: 31 사이클 (Skew 15 + Array 1 + Deskew 15)

---

## 🚀 시뮬레이션 실행

### 시스템 레벨 시뮬레이션 (권장)
```bat
cd scripts
run_sys.bat
```
Linux:
```bash
make sys
```
WSL with Windows Vivado installed also works through automatic `cmd.exe` fallback.
결과 로그: `sim/system/latest/sim.log`  
기대 출력: `[PERFECT MATCH] All columns computed exactly 1200!`

### UVM 랜덤 검증
```bat
cd scripts
run_uvm.bat
```
Linux:
```bash
make uvm
```
WSL with Windows Vivado installed also works through automatic `cmd.exe` fallback.
결과 로그: `sim/uvm/runs/<snapshot>/sim.log`

테스트 케이스 정리:
```bash
make uvm-smoke   # 빠른 경계/기본 동작 확인
make uvm-basic   # 기본 랜덤 누산/드레인 검증
make uvm-stress  # 같은 주소 back-to-back 누산 스트레스 검증
make uvm         # basic + stress 전체 회귀
make uvm-merge-cov  # 여러 UVM run의 coverage DB를 merge해 누적 assertion coverage 생성
```

누적 UVM assertion coverage 산출물:
- `sim/uvm/coverage/merged/report_uvm_assert_merged/functionalCoverageReport/xcrg_func_cov_report.txt`
- `sim/uvm/merged_assertion_cov_summary.txt`

### One-Step Verification
빠른 검증 (Core + System):
```bash
make verify-fast
```

생성 산출물:
- `sim/verify/assertion_cov_index.txt`
- `sim/verify/assertion_cov_summary.txt`

전체 검증 (Core + System + UVM):
```bash
make verify
```

`make verify`는 최신 system/UVM assertion coverage summary 경로를 한 파일로 모아주며,
요약 본문은 `sim/verify/assertion_cov_summary.txt`에서 바로 볼 수 있습니다.

기존/최신 시뮬레이션 산출물을 한 번에 비우려면:
```bash
make clean-artifacts
```

### 산출물 구조
반복 실행 시 로그가 루트에 누적되지 않도록 산출물은 아래처럼 정리됩니다.

```text
sim/
├── system/
│   ├── latest/        # 최신 system run 로그, wdb, assertion summary
│   ├── work/          # xsim 작업 디렉터리
│   └── coverage/      # system coverage DB/report
├── uvm/
│   ├── runs/          # run별 독립 로그 디렉터리
│   ├── coverage/      # UVM coverage DB/report 및 merge 결과
│   ├── latest_run.txt
│   ├── latest_sim_log.txt
│   └── latest_assert_cov_summary.txt
└── verify/
  ├── core.log
  ├── system.log
  ├── uvm.log
  └── assertion_cov_summary.txt
```

`make uvm*` 계열 실행 시 오래된 run 디렉터리는 자동으로 정리되며, 기본 보존 개수는 8개입니다. 필요하면 `UVM_MAX_RUNS=<N>`으로 조정할 수 있습니다.

### Verilator Co-simulation
```bash
make sim   # 또는 scripts/ 에서 make
```

Dedicated core forwarding stress package:

```bash
./build/Vnpu_core_top workloads/reference_acc_forwarding_same_addr_core
```

이 package는 `acc_addr_sequence=[0,0,0,0]`와 `acc_clear_sequence=[1,0,0,0]`를 사용해 accumulator same-address forwarding 경로를 직접 검증합니다.

### Verilator System Replay
```bash
make sim-system
```

특정 system replay package를 직접 실행하려면:
```bash
make sim-system SYSTEM_PACKAGE=../workloads/system_reference_gemm_tile_m0_n0_k0to31_splitk
```

Dedicated system forwarding stress package:

```bash
./build_system/Vnpu_system_top workloads/system_reference_forwarding_same_addr_m0_n0_k0to15
```

이 package는 `verification_acc_addr_override=0`와 `verification_one_shot_acc_clear=true`를 사용해 full system path에서 same-address forwarding을 직접 검증합니다.

One-shot L5 sign-off:

```bash
make l5-signoff
```

이 명령은 8-package chained system replay, dedicated core forwarding reference run, numeric gate 체크, 최종 요약 파일 생성을 한 번에 수행합니다.

Clean repeatability check:

```bash
make l5-repeatability
```

이 명령은 산출물을 비운 뒤 `make l5-signoff`를 두 번 수행하고, 최종 summary와 chain summary가 반복 실행에서도 동일한지 검사합니다.

Self-hosted CI workflow:

- `.github/workflows/l5-signoff.yml`

Vivado와 WSL이 설치된 self-hosted Windows runner에서는 push 또는 manual dispatch로 동일한 L5 sign-off와 repeatability flow를 자동 실행할 수 있습니다.

---

## 🔢 설계 수치

| 항목 | 값 |
|------|----|
| MAC PE 수 | 256 (16×16) |
| 데이터 타입 | INT8 × INT8 → INT32 |
| 파이프라인 깊이 | 31 사이클 |
| SRAM Bank 용량 | 16KB (1024 × 128b) × 4 |
| Accumulator BRAM | 512 × 512b |
| DMA Outstanding | 최대 8 |
