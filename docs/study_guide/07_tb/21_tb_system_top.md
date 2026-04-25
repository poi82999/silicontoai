# 21. `tb_system_top.sv` — System-level Directed Test

> **파일 위치**: `tb/tb_system_top.sv` (285줄)
> **역할**: `npu_system_top` DUT을 직접 자극해서 알려진 시나리오를 실행 (Vivado xsim)
> **선수 지식**: [15_npu_system_top.md](../05_rtl_system/15_npu_system_top.md), [13_dma_controller.md](../05_rtl_system/13_dma_controller.md), Verilog tasks
> **공장 비유**: 정해진 절차서로 한 번 라인을 돌려보는 **prototype 시운전** — 사전에 입력값과 기대결과를 다 알고 있음

---

## 이 파일이 중요한 이유

UVM이 **무작위 회귀**를 한다면, 이 파일은 **directed test** — 명확한 시나리오로 hand-crafted된 자극을 줘서 원하는 동작을 한 번 정확히 확인합니다. CI의 sanity check이며, 모델/RTL 변경 후 **첫 검증 단계**.

---

## 큰 그림: 4단계

```
1. Clock/Reset 생성 (L7-9)
2. MMIO/AXI/Drain 신호 wiring (L11-65)
3. DUT 인스턴스 + assertion coverage bind (L64-75)
4. Initial block: 시나리오 task 호출
   - mmio_set_dma_target → start DMA
   - wait dma_done → swap_banks
   - mmio_set_weight_load → npu_done
   - mmio_set_execute → npu_done × N
   - drain → compare with expected
```

---

## Wire 그룹 (L11-65)

### MMIO Control (L11-30)

```systemverilog
logic mmio_start_dma = 0;
logic mmio_dma_target = 0;
logic [63:0] mmio_src_addr = 0;
logic [7:0] mmio_burst_len = 0;
logic [15:0] mmio_total_bursts = 0;
logic mmio_dma_done;
logic mmio_swap_banks = 0;
logic mmio_start_npu = 0;
logic mmio_npu_mode = 0;          // 0 = execute, 1 = weight_load
logic mmio_npu_acc_clear = 0;
logic [15:0] mmio_npu_seq_len = 0;
logic mmio_npu_done;
```

→ `axi_lite_mmio_bridge.sv`가 디코드하는 register write 신호들. 이 testbench는 bridge를 우회해서 **직접 신호로** 줌 (단순화).

### AXI 버스 (L32-46)

DDR/host memory를 흉내내는 모델이 ARVALID/ARREADY/RDATA 등을 직접 구동.

### Drain Interface (L48-62)

`drain_re` + `drain_addr` 또는 `mmio_drain_start` + AXIS TX (둘 중 한 경로). UVM과 다르게 directed에선 매뉴얼하게 timing 잡음.

---

## DUT 인스턴스 + Coverage Bind

```systemverilog
npu_system_top u_dut (.*);    // implicit port name match

system_assert_cov u_system_assert_cov (
    .clk(clk),
    .rst_n(rst_n),
    .dma_start_seen(mmio_start_dma),
    .dma_done(mmio_dma_done),
    .weight_load_mode_start_seen(mmio_start_npu && mmio_npu_mode),
    .execute_mode_start_seen(mmio_start_npu && !mmio_npu_mode && (mmio_npu_seq_len != 0)),
    .forward_en(u_dut.u_mxe_core.u_core.u_psum_buffer.forward_en),
    .drain_re(m_axis_psum_tvalid)
);
```

**핵심**:
- `u_dut(.*)`: SV 단축 — DUT 포트 이름과 testbench 변수 이름이 같으면 자동 wiring
- coverage bind: DUT 깊은 신호(`u_dut.u_mxe_core.u_core.u_psum_buffer.forward_en`)를 외부에서 관찰 → assertion이 forwarding hit를 잡음

---

## Helper Functions (L80 부근)

### FP16 encoding

```systemverilog
function [15:0] fp16_from_int(input integer val);
    // sign(1) + exp(5) + mantissa(10)
    // val ≤ 2^11 → exact representation
    ...
endfunction
```

→ test pattern을 `for i = 0; i < 16; i++` 같은 정수로 만들고 FP16 비트 패턴으로 변환하는 도구.

---

## Scenario Tasks (보통 L150-280 부근)

### `mmio_start_dma_target_X`

```systemverilog
task mmio_start_dma_target(input bit target, input [63:0] src, input [7:0] burst_len, input [15:0] total);
    @(posedge clk);
    mmio_dma_target  <= target;
    mmio_src_addr    <= src;
    mmio_burst_len   <= burst_len;
    mmio_total_bursts<= total;
    mmio_start_dma   <= 1'b1;
    @(posedge clk);
    mmio_start_dma   <= 1'b0;

    wait (mmio_dma_done);
    @(posedge clk);
endtask
```

**패턴**: pulse를 1 cycle 토글하고, `wait (done)`으로 동기화.

### `mmio_swap_banks`

```systemverilog
task mmio_swap_banks_pulse;
    @(posedge clk);
    mmio_swap_banks <= 1'b1;
    @(posedge clk);
    mmio_swap_banks <= 1'b0;
endtask
```

→ DMA가 채운 bank와 core가 읽을 bank를 교대.

### `run_one_tile_scenario`

```systemverilog
task run_one_tile_scenario;
    // 1) Weight DMA 후 swap
    mmio_start_dma_target(.target(WEIGHT), .src(WEIGHT_ADDR), ...);
    mmio_swap_banks_pulse;

    // 2) Activation DMA 후 swap
    mmio_start_dma_target(.target(ACTIVATION), .src(ACT_ADDR), ...);
    mmio_swap_banks_pulse;

    // 3) Weight Preload (npu_mode=1)
    @(posedge clk);
    mmio_npu_mode <= 1'b1;
    mmio_npu_seq_len <= 16'd16;
    mmio_start_npu <= 1'b1;
    @(posedge clk);
    mmio_start_npu <= 1'b0;
    wait (mmio_npu_done);

    // 4) Execute (npu_mode=0)
    mmio_npu_mode <= 1'b0;
    mmio_npu_seq_len <= 16'd16;
    mmio_npu_acc_clear <= 1'b1;
    mmio_start_npu <= 1'b1;
    @(posedge clk);
    mmio_start_npu <= 1'b0;
    wait (mmio_npu_done);

    // 5) Drain + compare
    drain_and_compare;
endtask
```

→ **단일 16×16×16 GEMM의 전체 시퀀스**를 신호 레벨로 step-by-step 자극.

---

## 검증 결과 메시지

```
[PERFECT MATCH] All columns computed exactly 1200!
```

`row_ramp × constant_3` (k=16) → 각 출력 셀 = `Σ(0..15) × 3 = 120 × 3 / 2 × 16 = ...` (실제 계산 결과 1200). 모든 column이 정확히 1200이면 PASS.

---

## scripts/run_sys.sh / run_sys.bat

```bash
# Vivado xsim 컴파일 + 실행
xvlog rtl/include/*.sv rtl/...
xvlog tb/tb_system_top.sv tb/assertions/*.sv
xelab tb_system_top -snapshot tb_system_top
xsim tb_system_top -R
```

→ `make sys` 또는 `cd scripts && run_sys.bat` 호출.

---

## 핵심 개념 정리

| 개념 | 의미 |
|---|---|
| **Directed test** | 미리 정해진 입력 + 기대 결과 비교 |
| **MMIO 우회** | bridge 통하지 않고 신호 직접 구동 (단순화) |
| **`task ... wait (done)`** | 비동기 신호를 동기 task로 wrapping |
| **`u_dut(.*)`** | port name 매치 자동 wiring |
| **Assertion coverage bind** | DUT 내부 신호를 외부 모니터로 노출 |

---

## 연습 문제

1. `mmio_start_dma`를 1 cycle pulse로 주는 이유는? 만약 계속 1로 유지하면 어떤 문제?
2. `wait (mmio_dma_done)`이 deadlock 가능성? (힌트: rst_n=1 안 됐을 때)
3. directed test의 한계는 무엇? UVM이 보완하는 부분은?
4. `[PERFECT MATCH] ... 1200`이 1199로 나오면 어디부터 디버깅?

---

## 다음 파일로 넘어가기

→ [22_npu_uvm_pkg.md](22_npu_uvm_pkg.md): UVM verification environment 전체 (driver/monitor/scoreboard/test)
