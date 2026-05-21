# 13. `dma_controller.sv` — AXI4 Read DMA 컨트롤러

> **파일 위치**: `rtl/system/dma_controller.sv`
> **역할**: AXI4 read master로 외부 메모리에서 데이터를 읽어 AXI-Stream으로 출력
> **선수 지식**: [02_npu_interfaces.md](../01_rtl_include/02_npu_interfaces.md), AXI4 프로토콜 기초
> **공장 비유**: 지게차 — 외부 창고에서 짐을 가져오는 운송수단

---

## 📚 학술적 배경: DMA가 NPU의 운명을 결정한다

### 1. Memory wall 문제 — Wulf & McKee (1995)

> Wulf, W., McKee, S. — "Hitting the Memory Wall: Implications of the Obvious", *ACM SIGARCH Computer Architecture News* 23(1), 1995.

CPU 성능은 매년 ~50% 증가했지만 DRAM 지연시간은 ~7%만 줄었습니다 (1980-2000년대). 이 격차가 누적되어 **연산 속도와 메모리 속도의 비대칭**이 모든 가속기 설계의 첫 번째 적이 되었습니다.

이 NPU도 같은 문제: SA가 100MHz @ 256 PE = 25.6 GOPS이지만, DDR3 (PYNQ-Z2) 단일 채널 ~6 GB/s. INT8이라 ops/byte가 4배 유리해도 여전히 memory-bound 가능. 이 DMA 컨트롤러가 그 격차를 메우는 핵심 무기입니다.

### 2. Outstanding requests = Little's Law의 응용

> Little, J.D.C. — "A Proof for the Queuing Formula L = λW", *Operations Research* 9(3), 1961.

대기열 이론의 핵심 공식:
$$L = \lambda \cdot W$$
- $L$ = 시스템 안의 평균 요청 수 (outstanding requests)
- $\lambda$ = 처리율 (bandwidth in bursts/sec)
- $W$ = 평균 응답 지연 (memory latency)

**적용**: PYNQ-Z2 DDR3 latency ≈ 100 cycle, 원하는 처리율 = 1 burst/cycle (peak BW). 그러면 **L = 100개 outstanding이 필요**.

이 DMA의 `MAX_OUTSTANDING=8`은 PYNQ-Z2의 짧은 burst length(16 beat) + 짧은 read queue 깊이에 맞춘 값. 더 빠른 DDR4/HBM에서는 16~64까지 늘려야 peak BW 도달.

→ 즉 outstanding은 "선택사항"이 아니라 **메모리 시스템의 BW 도달 여부를 결정하는 1차 변수**입니다.

📖 참고: H&P Ch.2 "Memory Hierarchy Design" §2.4 (Memory-Level Parallelism), CMU 15-213 Lec.21 (System-level I/O).

### 3. AXI4 burst의 산업 표준화

AXI(Advanced eXtensible Interface)는 ARM AMBA 4의 일부로 2003년 표준화. 이전에는 PCI/AHB/Wishbone 등 partikular 프로토콜이 난립했지만, AXI는 **decoupled handshake** + **out-of-order completion** + **burst transactions**를 모두 지원하면서 표준이 되었습니다.

이 프로젝트가 AXI4를 쓰는 이유:
- **Vivado 자동 통합**: Zynq PS(ARM)와 PL(FPGA) 간 표준 인터페이스
- **메모리 컨트롤러 호환**: DDR3/4, HBM2/3 모두 AXI4 frontend 제공
- **Tools eco**: Vivado의 ILA(Integrated Logic Analyzer)가 AXI 트랜잭션을 자동 디코딩 → 디버깅 용이

📖 참고: [ARM AMBA AXI Protocol Specification](https://developer.arm.com/documentation/ihi0022/latest/), Sutherland *SystemVerilog for Design* Ch.6 (Interface) — Phase 2 자료.

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

> **💡 정량적 분석: outstanding=8이 BW에 미치는 영향**
>
> 가정: DDR3 latency 100 cycle, burst length 16 beat, beat당 64B → burst당 1024B.
>
> - **Outstanding = 1**: 1024B / (100 cycle / 100MHz) = **1.024 GB/s** (peak의 ~17%)
> - **Outstanding = 8**: min(8 × 1024B / 100 cycle, peak BW) = ~8 GB/s but capped → **6 GB/s** (peak의 100%)
>
> → outstanding 1개와 8개의 차이가 **6배 throughput**. memory wall이 가속기 설계에 얼마나 critical한지의 정량적 근거.

---

## 🔬 전문가 관점: DMA 컨트롤러의 산업적 변화

| 구조 | 사용처 | trade-off |
|---|---|---|
| **이 프로젝트 (single-channel AXI Read DMA)** | FPGA bringup, edge | 단순. 한 번에 한 흐름 |
| Multi-channel DMA | TPU UB DMA, GPU DMA | 동시 stream 여러 개 (read + write 병렬) |
| Scatter-gather DMA | Linux kernel, NIC | 비연속 메모리 영역 한 번에 처리 |
| Tensor DMA (Tenstorrent NoC) | Tenstorrent Wormhole | NoC 라우팅 + tensor reshape on-the-fly |
| Direct cache access (DCA) | Intel Xeon | DMA가 LLC에 직접 push (latency 절감) |

이 프로젝트는 **가장 단순한 형태**지만, [`l6/src/l6_toolchain/dma_scheduler.py`](../../../l6/src/l6_toolchain/dma_scheduler.py)에서 **컴파일러가 DMA 명령을 미리 정렬해서** 사실상 multi-channel 효과를 냅니다 (compute와 DMA를 cycle level에서 overlap). **하드웨어 단순함을 컴파일러가 보완하는 패턴**은 RISC 철학(P&H 1장)의 ML 가속기 버전입니다.

---

## 📖 더 깊이 공부하기

| 깊이 | 자료 | 어느 부분 |
|---|---|---|
| 🟢 입문 | CMU 15-213 Lec.20-21 (Phase 1) | I/O와 mmap, DMA 개념 |
| 🟢 입문 | P&H Ch.5.10 (Phase 1) | 메모리 controller와 burst |
| 🟡 중급 | H&P Ch.2.4 — Memory-Level Parallelism (Phase 1) | Outstanding/MSHR 분석 |
| 🟡 중급 | ARM AMBA AXI4 Spec (Phase 2) | Handshake, burst type, ID |
| 🔴 심화 | TPU 논문 §3 — DMA & UB 구조 (Phase 5) | 산업적 multi-channel DMA |
| 🔴 심화 | "FlashAttention" Dao et al. NeurIPS'22 (Phase 5) | 메모리 계층 인지 알고리즘 — DMA 패턴이 알고리즘을 결정 |

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
