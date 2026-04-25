# 14. `axi_lite_mmio_bridge.sv` — AXI-Lite MMIO 레지스터 브릿지

> **파일 위치**: `rtl/system/axi_lite_mmio_bridge.sv`
> **역할**: Host(CPU/PS)가 AXI-Lite로 NPU 제어 레지스터를 읽고 쓰는 인터페이스
> **선수 지식**: [13_dma_controller.md](13_dma_controller.md)
> **공장 비유**: MMIO 관제탑 — 본사(Host)에서 공장(NPU)에 명령을 내리는 통신 채널

---

## Register Map

| 주소 | 이름 | R/W | 비트 필드 |
|------|------|-----|-----------|
| 0x00 | CTRL | W1S | bit0=start_dma, bit1=start_npu, bit2=swap_banks, bit3=clear_done |
| 0x04 | STATUS | RO | bit0=dma_done, bit1=npu_done |
| 0x08 | DMA_CFG | RW | bit0=dma_target, bit4=npu_mode, bit5=acc_clear, bit6/7=test overrides |
| 0x0C | DMA_SRC_LO | RW | mmio_src_addr[31:0] |
| 0x10 | DMA_SRC_HI | RW | mmio_src_addr[63:32] |
| 0x14 | DMA_BURST | RW | [7:0]=burst_len, [23:8]=total_bursts |
| 0x18 | NPU_SEQ | RW | [15:0]=npu_seq_len |
| 0x1C | ACC_TEST | RW | [8:0]=acc_addr_override |

## 동작 시나리오 (PYNQ 예시)

```python
# PYNQ Python에서:
mmio.write(0x0C, weight_ptr & 0xFFFFFFFF)  # DMA_SRC_LO
mmio.write(0x10, weight_ptr >> 32)          # DMA_SRC_HI
mmio.write(0x08, 0x01)                      # DMA_CFG: target=weight
mmio.write(0x14, (total_bursts << 8) | burst_len)
mmio.write(0x00, 0x01)                      # CTRL: start_dma!

# Host polls until done
while not (mmio.read(0x04) & 0x01):         # STATUS: dma_done?
    pass
```

## AXI-Lite 프로토콜

AXI4의 간소화 버전:
- **단일 beat** (burst 없음)
- **32비트** 데이터
- 5개 채널: AW(write addr), W(write data), B(write resp), AR(read addr), R(read data)
- MMIO 레지스터 접근에 적합 (DMA 같은 대량 전송에는 AXI4 Full 사용)

## FPGA에서의 역할

```
ARM PS (PYNQ CPU)
      │ AXI-Lite (GP0 port)
      ▼
axi_lite_mmio_bridge
      │ MMIO 신호들
      ▼
npu_system_top
```

Verilator 시뮬에서는 C++ 코드가 이 MMIO 신호를 직접 구동합니다.
FPGA에서는 이 모듈이 AXI-Lite ↔ MMIO 변환을 합니다.

---

## 연습 문제

1. W1S(Write-1-to-Set)란 무엇인가? 왜 CTRL 레지스터에 사용하는가?
2. Register map에서 주소가 4의 배수인 이유는?
3. Verilator 시뮬에서는 이 모듈이 필요 없는 이유는?

<details>
<summary>정답 보기</summary>

1. 1을 쓰면 set, 0을 쓰면 영향 없음. 여러 비트를 독립적으로 제어할 수 있어서 control register에 적합
2. AXI-Lite는 32비트(4바이트) 정렬. 각 레지스터가 4바이트 경계에 위치
3. C++ 테스트벤치가 `mmio_start_dma` 등의 신호를 직접 구동하므로 프로토콜 변환 불필요

</details>

---

## 다음 파일

→ [15. npu_system_top.sv — NPU System Top](15_npu_system_top.md)
