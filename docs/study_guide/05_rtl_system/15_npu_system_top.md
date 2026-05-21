# 15. `npu_system_top.sv` — NPU System Top

> **파일 위치**: `rtl/system/npu_system_top.sv`
> **역할**: DMA + SRAM Banks + MXE Core를 통합. **프로젝트의 최상위 하드웨어 모듈**
> **선수 지식**: Phase 1-4 전체, [13_dma_controller.md](13_dma_controller.md), [14_axi_lite_mmio_bridge.md](14_axi_lite_mmio_bridge.md)
> **공장 비유**: 공장 정문 + 물류센터 — 모든 것을 조율하는 본부

---

## 📚 학술적 배경: 가속기 시스템 통합의 패턴

### 1. Accelerator System Architecture 패러다임

NPU/GPU 같은 가속기를 시스템에 통합하는 데에는 세 가지 표준 패턴이 있습니다 (Sze 교과서 Ch.6).

| 패턴 | 통합 방식 | 사례 |
|---|---|---|
| **Coprocessor (loosely coupled)** | Host가 MMIO로 명령, DMA로 데이터, polling/interrupt로 완료 확인 | **이 프로젝트**, TPU v1, Edge TPU |
| Cache-coherent | 가속기가 host cache와 일관성 유지 (CXL.cache) | NVIDIA Grace Hopper, Intel SPR |
| Wafer-scale | 가속기가 host를 흡수 (or 거꾸로) | Cerebras WSE, Tesla Dojo |

→ **이 모듈이 구현하는 것은 "loosely coupled coprocessor" 패턴**. Host(ARM A9)는 무엇을 할지 명령만 내리고, NPU가 알아서 끝낼 때까지 polling 또는 다른 일을 함. 산업계 99%의 ML 가속기가 이 패턴.

### 2. FSM 기반 제어 — Mealy vs Moore (P&H Appendix A)

> Patterson, D., Hennessy, J. — *Computer Organization*, Appendix A "Logic Design Basics".

이 모듈의 6-state FSM (IDLE → DMA_WT → PRELOAD → DMA_ACT → EXECUTE → DRAIN)는 전형적인 **Moore machine** (출력이 현재 state에만 의존). 산업계 가속기 컨트롤러는 거의 항상 Moore machine — 이유:
- **검증이 쉬움** (state 수만 N개, 입력 조합은 무관)
- **타이밍 closure 쉬움** (state register → output이 단 1 cycle delay)
- **SVA(SystemVerilog Assertion)에서 state-property 검사 직관적**

만약 Mealy로 했다면 (출력이 입력+state에 의존), state 수는 줄지만 transition logic이 combinational path 길어져 timing 깨질 위험. 이 프로젝트가 Moore를 선택한 이유.

📖 참고: Sutherland *SystemVerilog for Design* Ch.5 "Always Blocks" (Phase 2 자료).

### 3. Decoupled Access-Execute (Smith 1982)

> Smith, J.E. — "Decoupled Access/Execute Computer Architectures", *ISCA 1982*.

40년 전 논문이지만 이 NPU에 그대로 적용됩니다:

```
Access stream:  DMA가 메모리에서 데이터 읽기 (memory bound)
Execute stream: SA가 PE에서 연산 (compute bound)
                → 두 stream을 분리하면 서로의 stall이 다른 stream을 막지 않음
```

이 모듈의 ping-pong + outstanding DMA + AXI-Stream backpressure가 모두 Smith 1982의 직접 구현. 컴파일러 측면에서는 [`l6/src/l6_toolchain/dma_scheduler.py`](../../../l6/src/l6_toolchain/dma_scheduler.py)가 두 stream을 cycle-level에서 인터리빙합니다.

📖 참고: H&P Appendix M.4 (Decoupled architectures historical perspective).

---

## 이 파일이 최상위인 이유

RTL에서 가장 바깥쪽 모듈. Host(CPU)와 직접 통신하며, 내부의 모든 서브모듈을 인스턴스화합니다.

```
npu_system_top
├── dma_controller          (외부 메모리 → AXI-Stream)
├── dp_sram_bank × 4        (staging memory, ping-pong)
├── SRAM read/write FSM     (DMA target routing, bank select)
├── npu_mxe_top             (compute engine wrapper)
│   └── npu_core_top
│       ├── systolic_array (16×16 PE mesh)
│       └── psum_accumulator_buffer
└── Drain AXI-Stream output
```

---

## 주요 인터커넥트

### DMA → SRAM
```
DMA (AXI-Stream) → routing logic → wen/waddr/wdata → dp_sram_bank[target]
                                                       target = weight(0) or act(1)
```

### SRAM → MXE Core
```
dp_sram_bank → ren/raddr → rdata → s_axis_wt/s_axis_act → npu_mxe_top
```

### MXE Core → Drain Output
```
npu_mxe_top → m_axis_psum → npu_system_top → m_axis_psum_t* (외부)
```

---

## 실행 시나리오 (Weight Preload + Activation Execute)

```
Host MMIO 명령 시퀀스:
─────────────────────────────────────────────────────
1. DMA: src=weight_addr, target=weight    (Weight를 SRAM Bank에 로드)
   → DMA done

2. DMA: src=act_addr, target=activation   (Activation을 SRAM Bank에 로드)
   → DMA done

3. SRAM → MXE: weight 16 beat 전송       (PE에 weight preload)
   → weight_load 완료

4. SRAM → MXE: activation N beat 전송     (MAC 실행)
   → 31 cycle pipeline 후 psum 생성

5. Drain: MXE → 외부 AXI-Stream           (결과 추출)
   → golden과 비교
─────────────────────────────────────────────────────
```

---

## Ping-Pong Bank 관리

```
Phase 0: DMA writes → Bank 0,1   |   Core reads ← Bank 2,3
         (phase_sel = 0)
Phase 1: DMA writes → Bank 2,3   |   Core reads ← Bank 0,1
         (phase_sel = 1)
```

`mmio_swap_banks` → `phase_sel` 토글. Double-buffering으로 DMA와 compute 오버랩.

---

## 이 파일을 공부하는 팁

이 파일은 매우 깁니다 (수백 줄). 아래 순서로 읽으세요:

1. **포트 목록**: 어떤 외부 인터페이스가 있는지 파악
2. **서브모듈 인스턴스**: `dma_controller`, `dp_sram_bank`, `npu_mxe_top` 연결
3. **SRAM write 로직**: DMA 출력 → 어떤 bank에 쓰는지
4. **SRAM read 로직**: 어떤 bank에서 읽어서 MXE에 전달하는지
5. **제어 FSM**: 있다면 state machine 흐름
6. **Done/status 신호**: 완료 판단 로직

---

## 핵심 개념 정리

| 개념 | 설명 |
|------|------|
| System Integration | 모든 서브모듈을 연결하고 제어하는 최상위 레벨 |
| MMIO-driven | Host가 레지스터를 통해 단계별 명령. HW가 자동 실행 |
| Ping-pong | DMA와 compute가 서로 다른 bank를 사용하여 동시 동작 |
| Dataflow streaming | DMA → SRAM → MXE 구간이 AXI-Stream으로 연결 |

---

## 🔬 전문가 관점: 이 system top이 더 발전하면?

### 단계별 진화 가능 경로

| 진화 단계 | 추가 기능 | 어떤 산업 칩과 비슷해지나 |
|---|---|---|
| **현재** | Single-stream sequential execution | Edge TPU v1 |
| Step 1: Out-of-order DMA | DMA 예약 큐 + reorder buffer | NVIDIA A100 DMA engine |
| Step 2: Multi-tenant | Process ID, address space isolation | TPU v4, AWS Inferentia |
| Step 3: NoC interconnect | PE clusters 간 mesh routing | Tenstorrent Wormhole, Cerebras |
| Step 4: Cache coherency (CXL.cache) | LLC와 NPU SRAM 일관성 | NVIDIA Grace Hopper |
| Step 5: Multi-die | UCIe로 die 간 통신 | TPU v5p, NVIDIA Blackwell |

### 검증 측면의 시사점

이 모듈이 **시스템 통합의 첫 검증 지점**입니다. 왜?
- 단위 모듈은 통과해도 통합에서 실패하는 버그가 80% (Bergeron *Writing Testbenches* Ch.1)
- 그래서 [`tb/uvm_npu_tb/`](../../../tb/uvm_npu_tb/)의 UVM 환경이 이 모듈 레벨에서 동작
- **functional coverage** ([`tb/sv_assertions/`](../../../tb/sv_assertions/))가 이 모듈의 모든 state transition을 커버해야 함

📖 참고: Spear *SystemVerilog for Verification* Ch.12 "Coverage" (Phase 2).

---

## 📖 더 깊이 공부하기

| 깊이 | 자료 | 어느 부분 |
|---|---|---|
| 🟢 입문 | P&H Appendix A (FSM) | 6-state Moore machine |
| 🟢 입문 | P&H Ch.4.5 (control unit) | hardwired vs microprogrammed |
| 🟡 중급 | Sutherland Ch.5 (Phase 2) | `always_ff` + state encoding 패턴 |
| 🟡 중급 | Smith *Decoupled Access/Execute* (1982) | ping-pong의 학술적 origin |
| 🔴 심화 | TPU 논문 §3 — System Integration (Phase 5) | 산업급 Coprocessor pattern |
| 🔴 심화 | Tenstorrent *Wormhole* arch overview | NoC 기반 multi-PE 시스템 |
| 🔴 심화 | CXL 3.0 spec — type 2 device (CXL.cache) | 차세대 가속기 통합 |

---

## 연습 문제

1. Weight와 Activation에 각각 2개씩 bank를 쓰는 이유는?
2. `m_axis_psum`이 512비트인 이유는? (16 col × 32bit)
3. 이 모듈에서 clock은 몇 개인가? 왜 단일 클럭인가?

<details>
<summary>정답 보기</summary>

1. Ping-pong: 하나에 DMA가 다음 데이터를 쓰는 동안, 다른 하나에서 Core가 현재 데이터를 읽음
2. 16개 column의 32비트 psum 결과를 한 beat로 전송 (16 × 32 = 512)
3. 1개 (`clk`). 단일 클럭 도메인이라 CDC(Clock Domain Crossing) 없이 모든 모듈이 동기적으로 동작

</details>

---

## 다음 Phase

→ Phase 6: [16. fpga_core_bringup_top.sv](../06_rtl_fpga/16_fpga_core_bringup_top.md) (FPGA)
→ 또는 Phase 7: [20. npu_if.sv](../07_tb/20_npu_if.md) (테스트벤치) — FPGA를 건너뛰어도 됩니다
