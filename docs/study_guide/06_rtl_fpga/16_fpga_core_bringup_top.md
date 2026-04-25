# 16. `fpga_core_bringup_top.sv` — Arty A7 Core 자체검사

> **파일 위치**: `rtl/fpga/fpga_core_bringup_top.sv` (231줄)
> **역할**: NPU core를 Arty A7-35T 보드에서 단독 자체검사. LED로 PASS/FAIL 표시
> **선수 지식**: [08_npu_core_top.md](../02_rtl_core/08_npu_core_top.md), Vivado XDC, debouncing
> **공장 비유**: 공장 시운전 패널 — START 버튼을 누르면 라인이 한 번 도는지 LED로 확인

---

## 이 파일이 중요한 이유

L7 단계 첫 산출물입니다. RTL 시뮬레이터가 아니라 **실제 FPGA 칩**에서 NPU core가 동작하는지 확인. UART/JTAG 없이도 **버튼 + LED만**으로 sanity check 가능 → 보드 brigup의 1단계.

---

## 큰 그림: 8-state FSM

```
ST_IDLE → ST_PRELOAD → ST_EXECUTE → ST_FLUSH → ST_DRAIN_REQ → ST_DRAIN_WAIT → ST_DRAIN_SAMPLE → ST_DONE
   ▲                                                                                                │
   └────────────────────────────────────────────────────────────────────────────────────────────────┘
                                            (start_btn 다시 누르면)

내부 자극 데이터:
- weight = identity 16×16 (FP16 1.0)
- activation = ramp 0..15 (FP16)
- 기대 결과: column-wise sum = 120.0 (FP32 0x42F00000)
```

---

## 포트 (L3-10)

```systemverilog
module fpga_core_bringup_top (
    input  logic       board_clk,    // 100 MHz Arty crystal
    input  logic       rst_btn_n,    // SW0 (active low)
    input  logic       start_btn,    // BTN0
    output logic       alive_led,    // 살아있음 (heartbeat)
    output logic       done_led,     // 시퀀스 완료
    output logic [3:0] debug_led     // {match, state[2:0]}
);
```

**LED 의미**:
- `alive_led`: 100 MHz / 2^24 ≈ 6Hz → 사람 눈에 깜빡임 → MMCM/clock 살아있음
- `done_led`: 시퀀스 한 번 완료
- `debug_led[3]`: PASS (1=120.0과 일치)
- `debug_led[2:0]`: 현재 state (디버깅 시 어디서 멈췄나)

---

## Button Debouncing + Edge Detection (L61-71)

```systemverilog
always_ff @(posedge board_clk) begin
    if (!rst_n) begin
        start_sync_0    <= 1'b0;
        start_sync_1    <= 1'b0;
        start_sync_prev <= 1'b0;
    end else begin
        start_sync_0    <= start_btn;
        start_sync_1    <= start_sync_0;
        start_sync_prev <= start_sync_1;
    end
end

assign start_pulse = start_sync_1 && !start_sync_prev;   // rising edge
```

**3-flop synchronizer + edge detect**:
- 비동기 입력 (사람이 누르는 버튼)을 board_clk 도메인으로 안전 동기화
- `rising edge` (이전 cycle 0 → 이번 cycle 1)에 1-cycle pulse 발생

→ FSM이 button을 한 번만 인식하도록 보장.

---

## Heartbeat (L73-79)

```systemverilog
always_ff @(posedge board_clk) begin
    if (!rst_n) heartbeat_counter <= '0;
    else heartbeat_counter <= heartbeat_counter + 24'd1;
end

assign alive_led = heartbeat_counter[23];   // 100 MHz / 2^24 ≈ 6 Hz
```

**디버깅 첫 단계**: alive_led가 안 깜빡이면 clock 자체가 안 들어옴. 펜타플롭/LED 자체 문제 등.

---

## FSM 상태별 의미

```systemverilog
typedef enum logic [2:0] {
    ST_IDLE,           // 대기, start_btn 기다림
    ST_PRELOAD,        // 16 cycle weight load
    ST_EXECUTE,        // 16 cycle activation 흘려보내기
    ST_FLUSH,          // 35 cycle pipeline drain
    ST_DRAIN_REQ,      // drain 시작
    ST_DRAIN_WAIT,     // BRAM read latency 대기
    ST_DRAIN_SAMPLE,   // 결과 읽기
    ST_DONE            // 비교 + LED 표시
} bringup_state_t;
```

각 state의 cycle 카운터로 진행:
- `preload_row_idx 0→15` 완료 시 `ST_EXECUTE`
- `exec_row_idx 0→15` 완료 시 `ST_FLUSH`
- `flush_cnt 0→34` 완료 시 `ST_DRAIN_REQ`

---

## 자극 데이터 생성

### Weight: Identity matrix

```systemverilog
// PRELOAD 동안 row r, col c에 대해 weight = (r == c) ? 1.0 : 0.0
core_weights[c] = (preload_row_idx == c[3:0]) ? 16'h3C00 : 16'h0000;  // FP16 1.0 / 0.0
core_weight_load_en[r] = (r == preload_row_idx);
```

### Activation: ramp 0..15

```systemverilog
// EXECUTE 동안 lane c에 대해 activation = c
core_activations[c] = fp16_from_int(exec_row_idx + c);   // FP16(0)..FP16(15)
```

### 기대 결과

Identity weight × ramp activation → 출력 = ramp 그대로 (각 column = 0..15).
Drain 시 16 row 모두 sum하면 column별 sum = `0+1+...+15 = 120` (FP32 0x42F00000).

---

## 결과 비교 + LED 표시 (보통 L150-200)

```systemverilog
ST_DRAIN_SAMPLE: begin
    if (core_psum_drain_out[0] == EXPECTED_SUM) begin
        result_match_latched <= 1'b1;
    end
    state <= ST_DONE;
end

ST_DONE: begin
    done_latched <= 1'b1;
    if (start_pulse) state <= ST_IDLE;   // 다시 시작
end
```

→ debug_led[3]이 켜지면 PASS, 꺼지면 FAIL.

---

## 검증 흐름

```
1. Arty A7-35T 보드 전원 ON
2. alive_led 깜빡임 확인 (clock 정상)
3. SW0 push (active low) → 한 번 reset
4. BTN0 push → 시퀀스 시작
5. ~250 cycle 후 (수십 ns) done_led ON
6. debug_led[3] = 1 이면 NPU core PASS
   debug_led[3] = 0 이면 FAIL → debug_led[2:0]에서 어느 state에서 멈췄나 확인
```

→ 사람 눈으로 ms 단위 시각 확인 가능.

---

## XDC (Arty A7 핀 매핑)

```tcl
# vivado/fpga_core_bringup_top.xdc
set_property PACKAGE_PIN E3   [get_ports board_clk]   # 100MHz
set_property PACKAGE_PIN C2   [get_ports rst_btn_n]   # SW0
set_property PACKAGE_PIN D9   [get_ports start_btn]   # BTN0
set_property PACKAGE_PIN H5   [get_ports alive_led]   # LD0
set_property PACKAGE_PIN J5   [get_ports done_led]    # LD1
set_property PACKAGE_PIN T9   [get_ports debug_led[0]]
...
create_clock -period 10.000 -name board_clk [get_ports board_clk]
```

→ build script `vivado/build_arty_a7_bringup.tcl`이 합성 + 비트스트림 생성.

---

## 핵심 개념 정리

| 개념 | 의미 |
|---|---|
| **Bringup module** | 외부 의존성 없이 RTL 자체로 자체검사 |
| **3-flop synchronizer** | 비동기 입력의 metastability 회피 |
| **Heartbeat LED** | 클럭/RTL 살아있음 1차 확인 |
| **Identity × ramp 자극** | 결과를 한 상수 (120.0)로 단순화 |
| **debug_led[3:0]** | match + state — 사후 디버깅 가능 |

---

## 연습 문제

1. `start_btn`을 디바운스 없이 직접 FSM 입력으로 쓰면 어떤 문제가 생길까?
2. heartbeat_counter[23]을 [22]로 바꾸면 LED 점멸 주기는?
3. EXPECTED_SUM=120.0(FP32 0x42F00000)이 나오려면 partial sum이 어떻게 계산돼야 하는지 손으로 유도.
4. 만약 `done_led`가 안 켜지면 어디부터 디버깅? (debug_led로 가능)

---

## 다음 파일로 넘어가기

→ [17_fpga_system_bringup_top.md](17_fpga_system_bringup_top.md): system 레벨 FPGA 자체검사 (DMA + SRAM + core)
