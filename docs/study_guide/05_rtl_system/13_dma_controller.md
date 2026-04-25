# 13. `dma_controller.sv` — AXI4 Read DMA 컨트롤러

> **파일 위치**: `rtl/system/dma_controller.sv`
> **역할**: AXI4 read master로 외부 메모리에서 데이터를 읽어 AXI-Stream으로 출력
> **선수 지식**: [02_npu_interfaces.md](../01_rtl_include/02_npu_interfaces.md), AXI4 프로토콜 기초
> **공장 비유**: 지게차 — 외부 창고에서 짐을 가져오는 운송수단

---

## AXI4 Read 프로토콜 간단 설명

```
Host → DMA: "주소 0x1000에서 16 beat 가져와"

DMA → Memory (AR channel):   araddr=0x1000, arlen=15(=16-1), arvalid=1
Memory → DMA (AR channel):   arready=1  (핸드셰이크 완료)

Memory → DMA (R channel):    rdata=..., rvalid=1, rlast=0 (beat 1~15)
Memory → DMA (R channel):    rdata=..., rvalid=1, rlast=1 (beat 16, 마지막)
```

## 주요 파라미터

| 파라미터 | 기본값 | 의미 |
|----------|--------|------|
| `AXI_DATA_WIDTH` | 512 | beat당 512비트 (64바이트) |
| `AXI_ADDR_WIDTH` | 64 | 64비트 주소 |
| `MAX_OUTSTANDING` | 8 | 동시 진행 가능한 burst 수 |

## FSM: 3개 카운터 기반

```
req_cnt:         AR channel로 발행한 burst 수
resp_cnt:        R channel에서 완료된 burst 수
outstanding_cnt: req_cnt - resp_cnt (발행했지만 아직 응답 안 온 수)
```

### 흐름
```
start_dma=1 → busy=1
  → AR channel: burst 요청 발행 (req_cnt < total_bursts AND outstanding < MAX)
  → R channel: 데이터 수신 → AXI-Stream 출력 (m_axis_tvalid/tdata)
  → 모든 burst 완료 (resp_cnt == total_bursts) → dma_done=1, busy=0
```

## AXI-Stream 출력

```systemverilog
assign m_axis_tvalid = rvalid;          // memory에서 데이터 오면 바로 유효
assign m_axis_tdata  = rdata;           // 데이터 직결
assign m_axis_tlast  = rvalid && rlast; // 마지막 beat 표시
assign rready        = m_axis_tready;   // downstream backpressure 전달
```

DMA는 데이터를 저장하지 않고 **pass-through**: memory → AXI-Stream으로 직결

## Outstanding 요청의 장점

```
Without outstanding (1개씩):
  AR발행 → 대기 → R수신 → AR발행 → 대기 → R수신  (간격 있음)

With outstanding=8:
  AR발행×8 → R수신×8 연속  (메모리 지연 숨김)
```

---

## 연습 문제

1. `arlen = burst_len`에서 burst_len=15이면 실제 몇 beat 전송되는가?
2. `arburst = 2'b01`은 AXI4에서 어떤 모드인가?
3. DMA가 "pass-through"인 것의 장단점은?

<details>
<summary>정답 보기</summary>

1. **16 beat** (AXI4에서 arlen은 N-1 인코딩)
2. INCR (incrementing burst) — 주소가 beat마다 자동 증가
3. 장점: 버퍼 불필요로 면적 절감. 단점: downstream이 막히면 메모리도 stall

</details>

---

## 다음 파일

→ [14. axi_lite_mmio_bridge.sv — MMIO 레지스터 브릿지](14_axi_lite_mmio_bridge.md)
