# Factory Analogy Architecture

> 이 문서는 프로젝트의 전체 HW/SW 스택을 하나의 공장 파이프라인에 비유하여 설명합니다.
> RTL 신호, Python 클래스, 상수, 검증 흐름까지 모두 대응되는 비유를 포함합니다.

---

## 전체 공장 지도

```
┌─── 본사 (Host / L6 Toolchain) ───────────────────────────────────┐
│  설계부 (compiler.py)         — 생산 계획서 작성                  │
│  주문접수 (tracer.py)         — 고객 도면을 내부 사양으로 변환    │
│  공정설계 (lowering.py)       — 제품 단위를 공장 단위(tile)로 분할│
│  일정관리 (scheduler.py)      — 생산 순서/비용 최적화             │
│  출하문서 (emitter.py/ir.py)  — 생산지시서(package) 발행          │
│  품질관리 (validator.py)      — 출하 전 검사                      │
└──────────────────────────────────────────────────────────────────┘
                    │ 생산지시서 (JSON manifest + payload)
                    ▼
┌─── 공장 (RTL Hardware) ──────────────────────────────────────────┐
│                                                                   │
│  ┌─ 정문 / 물류센터 (npu_system_top.sv) ────────────────────┐    │
│  │  경비실 (6-state FSM)  — IDLE→DMA→SWAP→EXEC→DONE→ACK     │    │
│  │  지게차 (dma_controller.sv) — AXI4 64bit addr, 512bit bus │    │
│  │  MMIO 관제탑 — mmio_start_dma, mmio_mode, mmio_src_addr  │    │
│  │  창고 A/B (dp_sram_bank.sv × 4) — 1024×128bit, 총 64KB  │    │
│  │  창고교대 (ping-pong) — phase_sel로 A↔B 전환              │    │
│  └────────────────────────────────────────────────────────────┘    │
│                    │ weight/activation rows (128bit)               │
│                    ▼                                               │
│  ┌─ 생산동 (npu_core_top.sv) ───────────────────────────────┐    │
│  │  정렬컨베이어 (systolic_data_setup.sv) — skew/deskew      │    │
│  │  ┌─ 생산라인 (systolic_array_16x16.sv) ──────────────┐   │    │
│  │  │  작업자 256명 (mac_pe.sv × 256)                     │   │    │
│  │  │  각자: psum_out = psum_in + act_in × weight_reg    │   │    │
│  │  │  signed int8 × int8 → int32 누적                   │   │    │
│  │  └────────────────────────────────────────────────────┘   │    │
│  │  완제품창고 (psum_accumulator_buffer.sv)                   │    │
│  │   — 512 entry × 512bit, RAW forwarding 지원              │    │
│  └────────────────────────────────────────────────────────────┘    │
│                    │ drain output                                  │
│                    ▼                                               │
│              출하검사 (golden compare / replay)                    │
└──────────────────────────────────────────────────────────────────┘
```

---

## Part 1. 본사 — L6 Toolchain (소프트웨어)

### 1.1 주문접수부: `tracer.py`

| 공장 비유 | 코드 대응 | 설명 |
|-----------|-----------|------|
| 고객 도면 | `torch.nn.Module` | PyTorch로 작성된 AI 모델 |
| 접수 직원 | `trace_torch_module()` | torch.fx를 통해 그래프를 추출 |
| 내부 사양서 | `Program(inputs, tensors, ops, outputs)` | straight-line mini IR |
| 지원 부품 | linear, conv2d, relu, flatten, add, bias_add, reshape, getattr | 8가지 op 종류 |

고객이 "Linear(64, 128)"이라고 써서 가져오면, 접수부에서 이걸 내부 표준양식인 `Program`으로 변환합니다.

### 1.2 공정설계부: `lowering.py`

| 공장 비유 | 코드 대응 | 설명 |
|-----------|-----------|------|
| 제품 크기 한도 | `TILE_SIZE = 16` | 생산라인이 한 번에 처리 가능한 최대 크기 |
| 분할 계획 | `TilePlanEntry(tile_m, tile_n, tile_k, ...)` | M/N/K 차원별 타일 좌표 |
| 분할 함수 | `plan_linear_tiles(spec)` | 큰 행렬을 16×16 타일들로 자동 분할 |

예: 64×128 행렬 → M방향 4칸, N방향 8칸, K방향 1칸 = 32타일 생산 계획.

### 1.3 일정관리부: `scheduler.py`

| 공장 비유 | 코드 대응 | 설명 |
|-----------|-----------|------|
| 작업시간 기준표 | `WEIGHT_PRELOAD_CYCLES = 16` | 금형 장착 16사이클 |
| | `FLUSH_CYCLES = 35` | 파이프라인 완전 비움 35사이클 |
| | `DRAIN_CYCLES_PER_ROW = 1` | 출하 1줄당 1사이클 |
| | `BANK_SWAP_CYCLES = 1` | 창고 교대 1사이클 |
| | `DMA_OVERHEAD_CYCLES = 1` | 지게차 출발 준비 1사이클 |
| 작업원가 계산 | `estimate_tile_cost(tile, weight_reuse=?)` | 타일 1개 생산 비용(사이클) |
| 전체 견적 | `estimate_schedule_cost(tiles)` → `ScheduleSummary` | 총 사이클, DMA/compute 비율, 재사용 횟수 |
| 순서 최적화 | `reorder_tiles(tiles, strategy="weight_reuse")` | 같은 N열 타일을 연속 배치 → 금형(weight) 재사용으로 DMA 절감 |
| 창고용량 확인 | `analyze_memory_usage(tiles)` → `MemoryUsageReport` | 64KB budget 대비 peak 사용량 점검 |

**핵심 최적화**: weight_reuse 전략은 같은 weight 블록을 쓰는 타일을 연속 배치해서, 금형을 다시 장착하지 않고 바로 다음 activation만 넣어 생산을 이어가는 것입니다. DMA weight 로드(17사이클) + preload(16사이클) = 총 33사이클 절감/재사용 당.

### 1.4 설계부 (총괄): `compiler.py`

| 공장 비유 | 코드 대응 | 설명 |
|-----------|-----------|------|
| 생산총괄 이사 | `compile_program(source, options)` → `CompilerResult` | 주문→계획→생산→보고 전 과정 총괄 |
| 생산 설정서 | `CompilerOptions` | package_id, output_dir, schedule_strategy 등 |
| 공정별 계획 | `StepCompilePlan` (per-step) | 타일 수, 예상 사이클, 메모리 적합성, 스케줄 전략 |
| 전체 계획서 | `ProgramCompilePlan` | 모든 step의 계획 통합 |
| 생산 결과물 | `CompilerArtifacts` | 출력 디렉토리 경로들 |
| 최종 보고서 | `CompilerResult` | plan + artifacts + optional smoke 결과 |

**4단계 파이프라인**:
1. **Import** (`build_program_from_source`) — 어떤 형태의 주문이든 `Program`으로 통일
2. **Plan** (`create_compile_plan`) — 타일 분할 + 스케줄링 + 비용 예측
3. **Materialize** (`compile_program` 내부) — 실제 JSON 패키지 파일 생성
4. **Report** — 컴파일 매니페스트와 결과 객체 반환

### 1.5 출하문서부: `emitter.py` + `ir.py`

| 공장 비유 | 코드 대응 | 설명 |
|-----------|-----------|------|
| 생산지시서 작성 | `export_linear_tiled_package()` | 타일별 activation/weight/golden JSON 생성 |
| 프로그램 패키지 | `export_program_package()` | multi-step program을 디렉토리 구조로 출력 |
| IR 검증 | `validate_program()` | 사양서의 논리적 정합성 확인 |
| 단계별 매니페스트 | `ProgramExportStep` | step_id, lowered_kind, compute_package_dir |
| 스케줄 메타데이터 | `schedule_metadata` in step manifest | `"compiler"` 블록: strategy, cycles, dma, memory |

### 1.6 시스템 연동부: `replay_bridge.py`

| 공장 비유 | 코드 대응 | 설명 |
|-----------|-----------|------|
| 생산→검사 연결 | `export_replay_packages()` | 생산지시서를 검사용 replay workload로 변환 |
| 실물 연동 테스트 | `export_and_run_system_replay_smoke()` | WSL에서 실제 시뮬레이션 돌려 pass/fail 확인 |
| 연결 결과 | `SystemReplaySmokeResult` | pass_count, fail_count, package별 결과 |

### 1.7 품질관리부: `validator.py`

| 공장 비유 | 코드 대응 | 설명 |
|-----------|-----------|------|
| 출하 전 검사관 | `validate_package()` | manifest/payload 정합성 검사 |
| 검사 보고서 | `ValidationReport` | issue 목록, severity, pass/fail |

---

## Part 2. 공장 — RTL Hardware

### 2.1 정문/물류센터: `npu_system_top.sv`

공장의 정문이자 전체 흐름을 관제하는 본부입니다.

| 공장 비유 | RTL 신호/구조 | 세부 |
|-----------|---------------|------|
| 경비실 주간표 | 6-state FSM | `S_IDLE → S_DMA → S_SWAP → S_EXEC → S_DONE → S_ACK` |
| 지게차 출발 명령 | `mmio_start_dma` | 1bit, host가 넣으면 DMA 시작 |
| 어디서 가져올지 | `mmio_src_addr[63:0]` | 64bit 외부 메모리 주소 |
| 어디에 넣을지 | `mmio_dma_target[1:0]` | weight(0) / activation(1) 구분 |
| 작업 모드 | `mmio_mode[2:0]` | preload / execute / drain / flush / nop |
| burst 길이 | `mmio_burst_len[7:0]` | DMA 1회 전송 길이 |
| 작업 완료 | `done` 신호 | core가 올리면 system이 인지 |
| 완료 승인 | `ack` 신호 | host가 올리면 idle 복귀 |

### 2.2 지게차: `dma_controller.sv`

| 공장 비유 | RTL 신호/구조 | 세부 |
|-----------|---------------|------|
| 지게차 엔진 | AXI4 master | `m_axi_araddr[63:0]`, `m_axi_arlen[7:0]` |
| 짐칸 크기 | AXI data bus | 512bit (64 bytes/beat) |
| 동시 운반 수 | `MAX_OUTSTANDING = 8` | 최대 8개 burst 동시 처리 |
| 내리는 곳 | SRAM write port | bank select + address |

외부 창고(main memory)에서 데이터를 가져와 SRAM 창고에 내려놓는 역할입니다.

### 2.3 창고 A/B: `dp_sram_bank.sv` × 4

| 공장 비유 | RTL 구조 | 세부 |
|-----------|----------|------|
| 창고 1동 | Bank 0 | 1024 × 128bit = 16KB |
| 창고 2동 | Bank 1 | 1024 × 128bit = 16KB |
| 창고 3동 | Bank 2 | 1024 × 128bit = 16KB |
| 창고 4동 | Bank 3 | 1024 × 128bit = 16KB |
| 총 재고 용량 | 4 banks | 64KB |
| 교대 관리자 | `phase_sel` | A조/B조 전환 — DMA가 채우는 쪽 ↔ 코어가 읽는 쪽 |

**Ping-pong 운영**: DMA가 A조 창고에 다음 재료를 채우는 동안, 코어는 B조 창고에서 현재 재료를 꺼내 생산합니다. 완료되면 A↔B를 교대(`bank_swap`)합니다.

### 2.4 정렬 컨베이어: `systolic_data_setup.sv`

| 공장 비유 | RTL 동작 | 세부 |
|-----------|----------|------|
| 입구 컨베이어 (skew) | activation row를 대각선으로 지연 | row[i]를 i사이클 늦게 투입 |
| 출구 컨베이어 (deskew) | psum column을 대각선으로 정렬 | col[j]를 j사이클 늦게 추출 |

16×16 systolic array가 올바르게 동작하려면 입력이 대각선으로 들어가야 합니다. 이 모듈은 직선 데이터를 대각선으로 바꿔주는 컨베이어벨트입니다.

### 2.5 생산라인: `systolic_array_16x16.sv` + `mac_pe.sv`

| 공장 비유 | RTL 구조 | 세부 |
|-----------|----------|------|
| 공장 전체 작업자 | 16×16 = 256개 PE | weight-stationary 구조 |
| 작업자 1명의 행동 | `mac_pe.sv` | `psum_out = psum_in + act_in × weight_reg` |
| 금형 | `weight_reg` (int8) | preload 때 세팅, execute 동안 고정 |
| 재료 | `act_in` (int8) | 매 사이클 왼쪽에서 오른쪽으로 전달 |
| 중간품 | `psum_in/psum_out` (int32) | 위에서 아래로 누적 전달 |
| 파이프라인 깊이 | 31 사이클 | 첫 activation 투입 → 마지막 psum 출력까지 |

**Weight-stationary 의미**: 금형(weight)을 한번 장착하면 교체 없이 여러 재료(activation row)를 연속 투입합니다. 금형 교체 = weight preload = 16사이클 소요.

### 2.6 완제품 창고: `psum_accumulator_buffer.sv`

| 공장 비유 | RTL 구조 | 세부 |
|-----------|----------|------|
| 선반 수 | 512 entry | 각 32bit × 16 = 512bit wide |
| 총 용량 | 32KB | 512 × 512bit |
| 적재 방식 | accumulate mode | 기존 값 + 새 값 (Split-K용) |
| 초기화 | clear mode | 새 타일 시작 시 선반 비움 |
| 즉시 전달 | RAW forwarding | 같은 주소 연속 쓰기→읽기 시 bypass |
| 출하 | drain mode | 선반에서 꺼내 외부로 전달 |

**RAW forwarding**: 작업자가 선반에 넣는 순간, 같은 선반을 읽으려는 다음 작업에 바로 전달해주는 특급 배송입니다. 이걸 안 하면 1사이클 stall이 발생합니다.

---

## Part 3. 검증 — 품질 보증 체계

| 공장 비유 | 프로젝트 대응 | 설명 |
|-----------|---------------|------|
| 시제품 단건 검사 | Core Replay (Verilator) | 1타일씩 golden과 bit-exact 비교 |
| 전체 라인 가동 검사 | System Replay | multi-tile, bank-swap, chained 패턴 |
| 무작위 스트레스 검사 | UVM Testbench | constrained-random, coverage-driven |
| 검사 기준서 | L5 Sign-off Gate | 12개 수치 게이트 (assertion hit, coverage %) |
| 반복 재현 검사 | Repeatability Flow | 동일 seed 2회 실행 → 동일 결과 확인 |
| 자동 검사 라인 | GitHub Actions CI | push마다 자동 L5 sign-off |

---

## Part 4. 생산 1사이클의 전체 흐름

하나의 16×16 타일을 생산하는 과정을 공장 일과로 표현합니다.

```
시간  공장 활동                          RTL 대응
─────────────────────────────────────────────────────────
T+0   지게차가 외부 창고에서 금형 반입     DMA weight load (17 cycles)
T+17  지게차가 외부 창고에서 재료 반입     DMA activation load (17 cycles)
T+34  창고A↔B 교대                        bank_swap (1 cycle)
T+35  금형 장착 (16줄 순차 장착)          weight preload (16 cycles)
T+51  재료 투입 시작, 생산 개시           execute phase (16 cycles)
T+67  마지막 재료 투입 완료               last activation row enters
T+82  파이프라인 완전 비움 대기           flush (35 cycles)
T+83  완제품 선반에서 출하                drain (16 cycles, 1/row)
T+99  경비실에 완료 보고                  done → ack handshake
```

총 ~99 사이클 / 1타일 (weight 재사용 시 ~66 사이클).

---

## Part 5. 변수와 상수 사전

| 상수/변수 | 값 | 공장 비유 |
|-----------|----|-----------|
| `TILE_SIZE` | 16 | 생산라인 한 번에 처리 가능한 제품 크기 |
| `WEIGHT_PRELOAD_CYCLES` | 16 | 금형 장착 소요 시간 |
| `FLUSH_CYCLES` | 35 | 파이프라인 완전 비움 대기 시간 |
| `DRAIN_CYCLES_PER_ROW` | 1 | 출하 1줄 소요 시간 |
| `BANK_SWAP_CYCLES` | 1 | 창고 교대 소요 시간 |
| `DMA_OVERHEAD_CYCLES` | 1 | 지게차 출발 준비 시간 |
| `MAX_OUTSTANDING` | 8 | 동시 운행 지게차 수 |
| SRAM depth | 1024 | 창고 1동의 선반 수 |
| SRAM width | 128bit | 선반 1칸 너비 |
| Bank count | 4 | 창고 동 수 |
| Total SRAM | 64KB | 전체 창고 용량 |
| Accumulator depth | 512 | 완제품 선반 수 |
| Accumulator width | 512bit | 완제품 선반 너비 |
| Pipeline depth | 31 cycles | 생산라인 관통 시간 |
| PE count | 256 (16×16) | 총 작업자 수 |
| MAC equation | `psum + act × weight` | 작업자 1명의 작업 내용 |
| AXI addr width | 64bit | 외부 창고 주소 범위 |
| AXI data width | 512bit (DMA) / 128bit (core) | 지게차 짐칸 / 내부 운반차 크기 |

---

## Part 6. 소프트웨어 ↔ 하드웨어 매핑 요약

| L6 Python 객체 | RTL 대응 | 역할 |
|----------------|----------|------|
| `Program` | 하나의 생산 배치 | 여러 step(op)으로 구성 |
| `OpNode` | 개별 공정 | linear, conv2d 등 |
| `LoweredOp` | 공장 단위 공정 | gemm, conv2d_im2col_gemm 등 |
| `TilePlanEntry` | 1회 생산 분 | M/N/K 좌표가 지정된 16×16 타일 |
| `ScheduleSummary` | 생산 일정표 | 총 사이클, 재사용 횟수, 전략 |
| `CompilerResult` | 생산 완료 보고서 | 계획 + 결과물 + 스모크 |
| JSON manifest | 생산지시서 | 타일 사양, 페이로드 경로, golden 기대값 |
| Replay package | 검사 워크로드 | 생산지시서를 검사 형식으로 변환한 것 |
| `validate_package()` | 출하 전 검사 | manifest/payload 정합성 확인 |

---

## 문서 이력

| 날짜 | 변경 내용 |
|------|-----------|
| 2026.04.02 | 초판 작성. M1-M5 완료, scheduler-export bridge 수정, CLI 추가 이후 시점 기준. |
