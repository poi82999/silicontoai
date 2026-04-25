# 17. `fpga_system_bringup_top.sv` — System 레벨 FPGA 자체검사

> **파일 위치**: `rtl/fpga/fpga_system_bringup_top.sv` (740줄)
> **역할**: Zynq/Arty 보드에서 NPU **시스템 전체** (DMA+SRAM+Core) 자체검사
> **선수 지식**: [16_fpga_core_bringup_top.md](16_fpga_core_bringup_top.md), [15_npu_system_top.md](../05_rtl_system/15_npu_system_top.md)
> **공장 비유**: 풀 라인 시운전 — 자재창고(BRAM init), 지게차(DMA), 라인(core), 검사대까지 한 번에 검증

---

## 이 파일이 중요한 이유

**core bringup**(16번)이 NPU 코어만 검증한다면, 이 파일은 **DMA → SRAM → core** 풀 데이터 패스를 검증합니다. system_replay_main.cpp가 시뮬에서 하는 일을 **실제 FPGA**에서 자율적으로 실행.

---

## 큰 그림: core bringup과의 차이

| | core bringup | system bringup |
|---|---|---|
| 자극 데이터 | 내부 logic으로 생성 | 로컬 BRAM에서 (initmem) |
| AXI 트래픽 | 없음 | dma_controller가 BRAM 읽음 |
| FSM 길이 | 8 state | ~12 state (DMA 단계 추가) |
| 검증 범위 | core 알고리즘 | core + DMA + SRAM bank |
| LOC | 231 | 740 |

---

## 핵심 컴포넌트

```
fpga_system_bringup_top
├── 3-flop synchronizer (start_btn → start_pulse)
├── Heartbeat counter → alive_led
├── Self-test FSM (AXI-Lite writes 생성)
│   └── axi_lite_mmio_bridge (MMIO bus master 흉내)
├── npu_system_top (DUT)
│   ├── dma_controller
│   ├── dp_sram_bank × 4
│   └── npu_core_top
└── Local BRAM (test data source for AXI Read)
    └── readmemh로 initialize
```

---

## 12-state FSM 흐름

```
ST_IDLE
  → ST_AXIL_WRITE_DMA_PARAMS    (mmio_src_addr, burst_len, total_bursts)
  → ST_AXIL_TRIGGER_DMA          (mmio_start_dma = 1)
  → ST_WAIT_DMA_DONE
  → ST_AXIL_SWAP_BANKS
  → ST_AXIL_WRITE_PRELOAD_PARAMS
  → ST_AXIL_TRIGGER_PRELOAD
  → ST_WAIT_NPU_DONE_PRELOAD
  → ST_AXIL_WRITE_EXECUTE_PARAMS
  → ST_AXIL_TRIGGER_EXECUTE
  → ST_WAIT_NPU_DONE_EXEC
  → ST_DRAIN
  → ST_DONE (debug_led로 결과 표시)
```

→ system_replay_main.cpp의 C++ 시퀀스를 SystemVerilog FSM으로 옮긴 형태.

---

## Local BRAM (Test Data Source)

```systemverilog
logic [AXI_DATA_WIDTH-1:0] test_bram[0:1023];   // 1024 × 256-bit = 32 KB

initial begin
    // Activation: lane c가 c (0~15)
    for (int row = 0; row < 16; row++) begin
        for (int lane = 0; lane < 16; lane++) begin
            test_bram[row][lane*16 +: 16] = fp16_from_int(lane);
        end
    end
    // Weight: identity (lane c가 row r의 column이면 1, 아니면 0)
    for (int row = 16; row < 32; row++) begin
        for (int lane = 0; lane < 16; lane++) begin
            test_bram[row][lane*16 +: 16] = ((row - 16) == lane) ? 16'h3C00 : 16'h0000;
        end
    end
end
```

→ `$readmemh`나 hard-code로 BRAM 초기화. DMA가 이 BRAM을 source로 읽어 SRAM에 채움.

---

## AXI Read Slave (BRAM ↔ DMA)

DMA의 `arvalid`, `araddr`을 받아 `rdata`로 응답:

```systemverilog
always_ff @(posedge clk) begin
    if (npu_arvalid && npu_arready) begin
        // BRAM 인덱스로 변환
        active_addr <= npu_araddr[12:5];     // /32 byte = beat index
        active_burst_remaining <= npu_arlen + 1;
    end
    if (npu_rvalid && npu_rready) begin
        npu_rdata <= test_bram[active_addr];
        active_addr <= active_addr + 1;
        active_burst_remaining <= active_burst_remaining - 1;
        npu_rlast <= (active_burst_remaining == 1);
    end
end
```

→ AXI4 read protocol을 단순 BRAM 한 chunk가 처리.

---

## Result Comparison

drain된 첫 row의 lane 0이 `EXPECTED_SUM = 0x42F00000` (FP32 120.0)이면 PASS.

→ core bringup과 같은 정답값. 다만 데이터가 **DMA → SRAM** 경로를 거쳐 들어왔다는 점이 다름.

---

## ILA Debug Marker (`mark_debug`)

```systemverilog
(* mark_debug = "true" *) logic start_pulse;
```

→ Vivado synthesis가 이 신호를 ILA(Internal Logic Analyzer)로 추적하기 쉽게 표시. 보드에서 디버깅 시 `Vivado Hardware Manager`에서 wave를 볼 수 있음.

다른 표시 신호:
- DMA 단계 (start_dma, dma_done)
- NPU 단계 (start_npu, npu_done)
- 출력 (psum_drain_out)

총 14 probes, depth 1024 → ILA core 인스턴스화.

---

## XDC + 빌드 (Zynq 기준)

```tcl
# vivado/fpga_system_bringup_top_zynq.xdc
set_property PACKAGE_PIN <pin> [get_ports board_clk]
create_clock -period 10.000 -name board_clk [get_ports board_clk]
# ... LED, button 핀 매핑
```

```bash
vivado -mode batch -source vivado/build_system_zynq.tcl
# → bitstream 생성 (xc7z020 타겟)
```

`docs/l7_preboard_bringup_results.md`에 timing closure 결과 (WNS +2.627ns @ 100MHz) 기록.

---

## 검증 흐름

```
1. Zynq 보드 전원 ON
2. alive_led 깜빡임 확인
3. SW reset → BTN0 push
4. AXI Read 트래픽이 DMA → SRAM에 흘러감 (ILA로 관찰 가능)
5. core preload → execute → drain
6. ~수 μs 후 done_led ON
7. debug_led[3] = 1 → PASS
```

---

## 핵심 개념 정리

| 개념 | 의미 |
|---|---|
| **System bringup vs core bringup** | 풀 시스템 vs 코어 단독 |
| **Local BRAM source** | $readmemh로 테스트 패턴 초기화 |
| **AXI Read Slave (BRAM)** | DMA가 fetch할 source 모델 |
| **AXI-Lite master FSM** | MMIO 시퀀스 자율 생성 |
| **`mark_debug`** | ILA probe로 신호 추적 |

---

## 연습 문제

1. core bringup이 PASS하는데 system bringup이 FAIL하면 어디 문제?
2. test_bram의 weight가 identity가 아니라 random이면 어떤 검증 가치?
3. ILA 14 probes의 capture depth 1024로 무엇을 볼 수 있나? (cycle 단위)
4. AXI Read Slave가 실제 DDR과 다르게 동작하는 점은? (latency, congestion)

---

## 다음 파일로 넘어가기

→ [18_fpga_pynq_top.md](18_fpga_pynq_top.md): PYNQ-Z2 PS7 ARM + AXI 연결
