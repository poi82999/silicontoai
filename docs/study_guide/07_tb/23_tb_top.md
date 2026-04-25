# 23. `tb_top.sv` — UVM Testbench Top

> **파일 위치**: `tb/tb_top.sv` (74줄)
> **역할**: UVM 검증 환경의 최상위. DUT + vif + run_test 호출
> **선수 지식**: [20_npu_if.md](20_npu_if.md), [22_npu_uvm_pkg.md](22_npu_uvm_pkg.md)
> **공장 비유**: 검사실 입구 — DUT(제품)와 검사원(UVM env)을 한 방에 들여놓고 검사 시작 버튼 누름

---

## 이 파일이 중요한 이유

74줄 짧지만 UVM 환경 **전체의 최상위 wiring**입니다. 이 파일에서:
1. clock/reset 생성
2. vif 인스턴스
3. DUT 연결
4. UVM config_db에 vif 전달
5. `run_test()` 호출

→ 이 5단계가 정확해야 UVM이 정상 동작.

---

## 전체 코드 분석

### 1. Imports + DATA_MODE 분기 (L3-13)

```systemverilog
import uvm_pkg::*;
`include "uvm_macros.svh"
import npu_uvm_pkg::*;

module tb_top;

`ifdef UVM_DATA_MODE_FP16
    localparam int TB_DATA_MODE = 1;
`else
    localparam int TB_DATA_MODE = 0;
`endif
```

**`UVM_DATA_MODE_FP16` define**: `scripts/run_uvm.sh fp16` 호출 시 `+define+UVM_DATA_MODE_FP16` 추가됨 → DUT의 `DATA_MODE=1`로 elaborate.

**핵심**: 같은 testbench 코드로 INT8/FP16 두 모드 검증 가능.

### 2. Clock/Reset (L15-27)

```systemverilog
logic clk;
logic rst_n;

initial begin
    clk = 0;
    forever #5 clk = ~clk; // 100MHz (period 10ns)
end

initial begin
    rst_n = 0;
    #20 rst_n = 1;
end
```

**Clock**: 10ns 주기 → 100 MHz (`#5` toggle).

**Reset**: 20ns active low → 그 후 release. `rst_n` 동기화는 DUT가 자체 처리.

### 3. Interface 인스턴스 (L30)

```systemverilog
npu_if vif(clk, rst_n);
```

→ `npu_if`를 한 인스턴스 만들어 driver/monitor/DUT 모두 공유.

### 4. DUT Instantiation (L33-47)

```systemverilog
npu_core_top #(
    .DATA_MODE(TB_DATA_MODE)
) dut (
    .clk             (vif.clk),
    .rst_n           (vif.rst_n),
    .sram_act_in     (vif.sram_act_in),
    .sram_weight_in  (vif.sram_weight_in),
    .weight_load_en  (vif.weight_load_en),
    .acc_valid       (vif.acc_valid),
    .acc_clear       (vif.acc_clear),
    .acc_addr        (vif.acc_addr),
    .drain_re        (vif.drain_re),
    .drain_addr      (vif.drain_addr),
    .psum_drain_out  (vif.psum_drain_out)
);
```

**핵심**:
- 모든 신호를 vif의 동일 이름으로 연결 → driver가 vif에 쓰면 자동으로 DUT 입력
- `DATA_MODE=TB_DATA_MODE` 파라미터 전달 → INT8/FP16 분기

### 5. Coverage Bind (L49-54)

```systemverilog
core_assert_cov u_core_assert_cov (
    .clk        (vif.clk),
    .rst_n      (vif.rst_n),
    .forward_en (dut.u_psum_buffer.forward_en),
    .drain_re   (vif.drain_re)
);
```

**`dut.u_psum_buffer.forward_en`**: hierarchical reference로 DUT 내부 신호에 접근. `core_assert_cov`가 이걸 관찰해서 forwarding hit를 보고.

→ `tb/assertions/core_assert_bind.sv`와 함께 작동.

### 6. UVM 시작 (L56-63)

```systemverilog
initial begin
    // Pass virtual interface to UVM configuration database globally
    uvm_config_db#(virtual npu_if)::set(null, "*", "vif", vif);

    // Start the test execution
    run_test("npu_test");
end
```

**`uvm_config_db::set(null, "*", "vif", vif)`**:
- `null`: scope (글로벌)
- `"*"`: 모든 component에 적용
- `"vif"`: key 이름
- `vif`: 값 (interface 인스턴스)

→ driver/monitor가 `uvm_config_db::get(this, "", "vif", vif)`로 가져감.

**`run_test("npu_test")`**: UVM 진입점.
- plusarg `+UVM_TESTNAME=npu_smoke_test`로 override 가능
- `scripts/run_uvm.sh`가 어떤 test를 돌릴지 결정

### 7. Timeout Fallback (L66-70)

```systemverilog
initial begin
    #10000ns;
    $display("Simulation Timeout");
    $finish;
end
```

**왜 필요**: 만약 deadlock이나 무한 루프 발생 시 시뮬레이터가 영원히 안 끝남 → CI runner가 timeout으로 실패하기 전에 명시적 종료.

10000ns = 10μs → 100MHz에서 1000 cycles → 보통 NPU 회귀에 충분.

---

## 시뮬레이션 명령

```bash
# Vivado xsim
bash scripts/run_uvm.sh npu_smoke_test int8

# 내부적으로:
xvlog rtl/include/*.sv rtl/.../*.sv
xvlog tb/npu_if.sv tb/npu_uvm_pkg.sv tb/tb_top.sv tb/assertions/*.sv
xelab tb_top -L uvm -snapshot tb_top
xsim tb_top -R +UVM_TESTNAME=npu_smoke_test
```

---

## DUT 변경 시 영향

만약 `npu_core_top`이 새 포트를 추가하면:
1. `npu_if.sv`에 새 신호 추가
2. `tb_top.sv` 인스턴스 wiring 추가 (이 파일)
3. driver/monitor에 read/write 로직 추가
4. scoreboard golden 모델 갱신

→ **DUT-TB contract**의 단일 진입점이 이 파일.

---

## 핵심 개념 정리

| 개념 | 의미 |
|---|---|
| **`uvm_config_db`** | 전역 dict, vif/parameter를 component로 전달 |
| **`run_test`** | UVM 진입점. plusarg로 어떤 test 돌릴지 |
| **Hierarchical reference** | `dut.u_psum_buffer.forward_en` 같이 깊은 신호 관찰 |
| **Compile-time DATA_MODE switch** | `+define+UVM_DATA_MODE_FP16`로 INT8/FP16 분기 |
| **Timeout fallback** | deadlock 방어 |

---

## 연습 문제

1. `run_test("npu_test")` 인자로 plusarg를 안 주면 어떤 test가 돌까?
2. `uvm_config_db::set(null, "*", "vif", vif)`에서 두 번째 인자 `"*"`을 `"uvm_test_top.env.agt.drv"`로 좁히면 어떤 차이?
3. clock 주기를 `#5`에서 `#1`로 바꾸면 (1GHz) 시뮬은 빠른가? feasible한가?
4. timeout fallback이 발동하면 그 시뮬은 PASS인가 FAIL인가? CI에서 어떻게 처리?

---

## 다음 파일로 넘어가기

→ [24_main_cpp.md](24_main_cpp.md): Verilator C++ driver — `tb/main.cpp` (core replay)
