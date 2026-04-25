# 15. `npu_system_top.sv` — NPU System Top

> **파일 위치**: `rtl/system/npu_system_top.sv`
> **역할**: DMA + SRAM Banks + MXE Core를 통합. **프로젝트의 최상위 하드웨어 모듈**
> **선수 지식**: Phase 1-4 전체, [13_dma_controller.md](13_dma_controller.md), [14_axi_lite_mmio_bridge.md](14_axi_lite_mmio_bridge.md)
> **공장 비유**: 공장 정문 + 물류센터 — 모든 것을 조율하는 본부

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
