# Phase 6: FPGA 모듈 학습 가이드

> 이 Phase는 FPGA 보드 타겟 관련 파일입니다.
> RTL 코어를 이해한 후 진행하세요 (Phase 1-5 완료 필수).

---

## 파일 목록

| # | 파일 | 역할 |
|---|------|------|
| 16 | `rtl/fpga/fpga_core_bringup_top.sv` | Core 단독 자체검사 모듈. LED로 pass/fail 표시 |
| 17 | `rtl/fpga/fpga_system_bringup_top.sv` | System 레벨 FPGA 검사. DMA+SRAM+Core 전체 테스트 |
| 18 | `rtl/fpga/fpga_pynq_top.sv` | PYNQ-Z2 오버레이. PS7 ARM → AXI → NPU 연결 |
| 19 | `rtl/fpga/fpga_pynq_top_wrapper.v` | Vivado IP Integrator용 Verilog 래퍼 (.sv → .v) |

## 학습 포인트

- Arty A7-35T: 100MHz, BRAM 기반, 자체검사 (LED blink = pass)
- PYNQ-Z2: Zynq PS7 ARM + PL, AXI interconnect 통해 NPU 제어
- Vivado constraint 파일 (`.xdc`): 핀 배치, 클럭 제약

## 선수 지식

- Vivado 기본 사용법
- FPGA BRAM, LUT, DSP 개념
- Zynq PS-PL 아키텍처 (PYNQ 파트)

---

> 각 파일별 상세 학습 가이드는 해당 파일을 읽으며 보충 예정입니다.
> 코어 RTL(Phase 1-5)을 먼저 완료하는 것을 권장합니다.
