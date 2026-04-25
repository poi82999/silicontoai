# 07. `npu_mxe_top.sv` — Matrix Execution Engine Wrapper

> **파일 위치**: `rtl/core/npu_mxe_top.sv`
> **역할**: `npu_core_top`을 AXI-Stream 인터페이스로 감싸는 wrapper. Weight 로딩 시퀀서, Acc 제어, Drain FSM 포함
> **선수 지식**: [08_npu_core_top.md](08_npu_core_top.md), AXI-Stream 핸드셰이크
> **공장 비유**: 생산동 관리자 — 재료 입고 순서, 작업 카운터, 출하 순서를 관리

---

## 이 파일이 하는 일 (3가지)

1. **Weight Loading Sequencer**: AXI-Stream으로 들어오는 weight를 행 단위(row 0→15)로 PE에 순차 로딩
2. **Activation & Accumulator Control**: activation beat마다 acc_addr 카운터 증가, acc_clear 제어
3. **Drain FSM**: MMIO 명령으로 accumulator에서 결과를 AXI-Stream으로 읽어내는 상태머신

---

## 주요 포트

| 포트 그룹 | 설명 |
|-----------|------|
| `s_axis_wt_*` | Weight 입력 AXI-Stream (slave) |
| `s_axis_act_*` | Activation 입력 AXI-Stream (slave) |
| `m_axis_psum_*` | Drain 출력 AXI-Stream (master) |
| `direct_drain_*` | Legacy C++ 드라이버용 직접 drain 포트 |
| `test_*` | 검증용 override 포트 (주소 강제, clear 제어) |
| `mmio_drain_*` | MMIO로부터의 drain 시작/길이/완료 신호 |

---

## Section 1: Weight Loading Sequencer

```systemverilog
logic [ROWS-1:0] wt_load_shift;  // one-hot shift register

always_ff @(posedge clk) begin
    if (!rst_n)
        wt_load_shift <= 16'h0001;           // Row 0부터 시작
    else if (s_axis_wt_tvalid && s_axis_wt_tready) begin
        if (s_axis_wt_tlast)
            wt_load_shift <= 16'h0001;       // 마지막 beat → 초기화
        else
            wt_load_shift <= {wt_load_shift[ROWS-2:0], 1'b0}; // 왼쪽 shift
    end
end
```

**동작 시나리오**:
```
Beat 0:  wt_load_shift = 0000_0000_0000_0001 → Row 0에 weight 로드
Beat 1:  wt_load_shift = 0000_0000_0000_0010 → Row 1에 weight 로드
...
Beat 15: wt_load_shift = 1000_0000_0000_0000 → Row 15에 weight 로드 (tlast)
→ 다시 0000_0000_0000_0001로 리셋
```

16개 beat = 16 cycle로 모든 PE 행에 weight 배포 완료.

---

## Section 2: Accumulator Control

```systemverilog
logic [8:0] acc_addr_ctr;  // 0~511

always_ff @(posedge clk) begin
    if (!rst_n)
        acc_addr_ctr <= '0;
    else if (s_axis_act_tvalid && s_axis_act_tready) begin
        if (s_axis_act_tlast)
            acc_addr_ctr <= '0;        // 마지막 activation → 리셋
        else
            acc_addr_ctr <= acc_addr_ctr + 1'b1;  // 매 beat마다 증가
    end
end
```

- 각 activation beat마다 accumulator에 다른 주소에 결과 저장
- `tuser[0]`이 1이면 `acc_clear` 활성화 → accumulator를 덮어쓰기 (새 타일)
- `tuser[0]`이 0이면 기존 값에 누적 (Split-K)

---

## Section 3: Drain FSM

```
ST_DRAIN_IDLE → (mmio_drain_start) → ST_DRAIN_READ → (완료) → ST_DRAIN_IDLE
```

- `mmio_drain_len`: 몇 행을 읽을지 (0~len-1)
- 매 cycle 1행씩 AXI-Stream으로 출력
- 완료되면 `mmio_drain_done = 1`

---

## npu_core_top과의 관계

```
MXE Top (이 파일)               Core Top
┌──────────────────┐           ┌──────────────────┐
│ AXI-Stream ↔     │           │                  │
│ Weight Sequencer  │──weight──→│ systolic_array   │
│ Act Counter       │──act────→│                  │
│ Drain FSM         │←─drain──│ psum_acc_buffer  │
└──────────────────┘           └──────────────────┘
```

MXE는 **프로토콜 변환** 역할: AXI-Stream ↔ Core 내부 신호

---

## 연습 문제

1. Weight 로딩에 16 cycle이 걸리는 이유는?
2. `s_axis_wt_tready = 1'b1` (항상 ready)인 이유는? backpressure가 없어도 괜찮은가?
3. `acc_addr_ctr`가 9비트인 이유는?

<details>
<summary>정답 보기</summary>

1. 16개 행에 순차적으로 weight를 로드해야 하므로 (one-hot shift register)
2. Weight 수신은 SRAM/PE에 바로 쓰기만 하면 되므로 한 cycle도 stall 없이 받을 수 있음
3. `MEM_ADDR_WIDTH = 9` → 512 entry accumulator 주소 공간에 대응

</details>

---

## 다음 파일

→ [08. npu_core_top.sv — NPU Core Top](08_npu_core_top.md)
