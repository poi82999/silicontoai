# 22. `npu_uvm_pkg.sv` — UVM Verification Environment 전체

> **파일 위치**: `tb/npu_uvm_pkg.sv` (1103줄)
> **역할**: UVM driver/monitor/scoreboard/sequence/test 모두를 한 패키지에 묶음
> **선수 지식**: [20_npu_if.md](20_npu_if.md), UVM 기초 (uvm_test, uvm_env, uvm_sequence)
> **공장 비유**: 무작위 회귀 테스트 부서 — 작업카드를 자동 생성하고, 실시간 감시하며, 결과를 골든모델과 자동 비교

---

## 이 파일이 중요한 이유

UVM은 SystemVerilog 표준 검증 프레임워크입니다. 이 파일이 NPU의 **모든 무작위 회귀 검증 환경**을 정의합니다. 1103줄이라 많아 보이지만, **9가지 component가 정해진 역할 분담**으로 구성됩니다.

---

## 큰 그림: UVM 9-component

```
┌──────────────────────────────────────────────┐
│ 1. npu_seq_item (sequence item)              │
│    rand 신호 묶음 + constraint                │
├──────────────────────────────────────────────┤
│ 2. Sequences                                 │
│    npu_weight_load_sequence (weight 로드)     │
│    npu_sequence (랜덤 실행)                    │
│    npu_smoke_sequence (sanity)               │
│    npu_stress_sequence (back-to-back)        │
│    npu_fp16_smoke_sequence (FP16 모드)        │
├──────────────────────────────────────────────┤
│ 3. Driver                                    │
│    seq_item → vif 신호                       │
├──────────────────────────────────────────────┤
│ 4. Monitor                                   │
│    vif 관찰 → analysis port로 broadcast      │
├──────────────────────────────────────────────┤
│ 5. Scoreboard                                │
│    Golden model 계산 + RTL 출력 비교         │
├──────────────────────────────────────────────┤
│ 6. Coverage Collector                        │
│    coverpoint hit 추적                        │
├──────────────────────────────────────────────┤
│ 7. Agent (driver + monitor + sequencer)     │
├──────────────────────────────────────────────┤
│ 8. Env (agent + scoreboard + coverage)      │
├──────────────────────────────────────────────┤
│ 9. Tests                                     │
│    npu_test, npu_smoke_test, npu_stress_test │
│    npu_fp16_mode_smoke_test                  │
└──────────────────────────────────────────────┘
```

---

## ① `npu_seq_item` (L8-46)

```systemverilog
class npu_seq_item extends uvm_sequence_item;
    rand bit [NPU_ROWS-1:0]                         weight_load_en;
    rand bit [NPU_ROWS-1:0][NPU_ACT_WIDTH-1:0]      act_in;
    rand bit [NPU_COLS-1:0][NPU_WT_WIDTH-1:0]       weight_in;
    rand bit                                        acc_valid;
    rand bit                                        acc_clear;
    rand bit [MEM_ADDR_WIDTH-1:0]                   acc_addr;
    rand bit                                        drain_re;
    rand bit [MEM_ADDR_WIDTH-1:0]                   drain_addr;
    bit [NPU_COLS-1:0][NPU_PSUM_WIDTH-1:0]          psum_drain_out;

    `uvm_object_utils_begin(npu_seq_item)
        ...
    `uvm_object_utils_end
```

**역할**: 한 사이클의 자극을 표현. driver가 받아서 vif에 driving.

### Constraints (L35-45)

```systemverilog
constraint c_basic {
    acc_addr < (1 << MEM_ADDR_WIDTH);
    drain_addr < (1 << MEM_ADDR_WIDTH);
    acc_clear dist {1 := 30, 0 := 70};   // 30% 초기화, 70% 누산
    soft weight_load_en == 0;
}

constraint c_addr_edge {
    acc_addr dist {0 := 5, max-1 := 5, [1:max-2] := 90};
    // 5% 첫 주소, 5% 마지막 주소, 90% 중간 → corner case 강조
}
```

→ **Distribution-based** randomization. Edge case (0, max-1)을 일반 주소(5%/5%)보다 자주 보게 함.

---

## ② Sequences (L48-200 부근)

### `npu_weight_load_sequence` (L49-66)

```systemverilog
class npu_weight_load_sequence extends uvm_sequence#(npu_seq_item);
    task body();
        for(int i=0; i<NPU_ROWS; i++) begin
            req = npu_seq_item::type_id::create("req");
            start_item(req);
            if (!req.randomize() with { 
                weight_load_en == (1 << i);   // 한 row씩 순차 로드
                acc_valid == 0;
                drain_re == 0;
            }) ...
            finish_item(req);
        end
    endtask
endclass
```

→ **16 cycle** 동안 row 0, 1, ..., 15에 weight를 로드.

### `npu_sequence`, `npu_smoke_sequence`, `npu_stress_sequence`

각각 **랜덤 누산/드레인**, **smoke (작은 랜덤)**, **back-to-back stress**.

stress는 같은 acc_addr에 연속 누산하여 **forwarding hazard** 강제 발동.

---

## ③ Driver (보통 L300 부근)

```systemverilog
class npu_driver extends uvm_driver#(npu_seq_item);
    virtual npu_if vif;

    task run_phase(uvm_phase phase);
        forever begin
            seq_item_port.get_next_item(req);
            drive_item(req);
            seq_item_port.item_done();
        end
    endtask

    task drive_item(npu_seq_item req);
        @(posedge vif.clk);
        vif.weight_load_en <= req.weight_load_en;
        vif.act_in         <= req.act_in;
        vif.weight_in      <= req.weight_in;
        vif.acc_valid      <= req.acc_valid;
        ...
    endtask
endclass
```

→ sequence가 만든 item을 받아서 vif에 drive. 1 item = 1 cycle.

---

## ④ Monitor (보통 L400 부근)

```systemverilog
class npu_monitor extends uvm_monitor;
    virtual npu_if vif;
    uvm_analysis_port #(npu_seq_item) ap;

    task run_phase(uvm_phase phase);
        forever begin
            @(posedge vif.clk);
            // 입력 capture
            in_item = npu_seq_item::type_id::create("in");
            in_item.act_in = vif.act_in;
            ...
            ap.write(in_item);

            // Drain output 별도 capture
            if (vif.drain_re) begin
                out_item = ...;
                out_item.psum_drain_out = vif.psum_drain_out;
                ap_out.write(out_item);
            end
        end
    endtask
endclass
```

→ vif를 **passive** 관찰. analysis port로 scoreboard/coverage에 전송.

---

## ⑤ Scoreboard (보통 L500 부근)

```systemverilog
class npu_scoreboard extends uvm_scoreboard;
    bit [31:0] golden_acc[/MEM_DEPTH/]; // golden 누산기 모델

    function void write_input(npu_seq_item item);
        // INT8×INT8→INT32 모델로 partial 계산
        bit [31:0] partial[NPU_COLS];
        for (int c=0; c<NPU_COLS; c++) begin
            partial[c] = 0;
            for (int r=0; r<NPU_ROWS; r++)
                partial[c] += signed(item.act_in[r]) * signed(item.weight_in[c][r]);
        end
        // acc_clear/valid에 따라 golden_acc 갱신
        if (item.acc_clear) golden_acc[item.acc_addr] = '0;
        if (item.acc_valid) golden_acc[item.acc_addr] += partial;
    endfunction

    function void write_output(npu_seq_item item);
        // RTL이 drain 한 값과 golden 비교
        for (int c=0; c<NPU_COLS; c++) begin
            if (item.psum_drain_out[c] != golden_acc[item.drain_addr][c])
                `uvm_error("SCBD", $sformatf("Mismatch at col %0d", c))
        end
    endfunction
endclass
```

**핵심**: golden model은 **C++가 아니라 SystemVerilog** — 검증 환경 안에서 자급자족.

INT8 모드에서는 partial sum을 INT32로 누적. 이 모델이 RTL과 정확히 일치해야 검증 의미 있음.

---

## ⑥ Coverage (보통 L700 부근)

```systemverilog
class npu_coverage extends uvm_subscriber#(npu_seq_item);
    covergroup cg;
        cp_acc_valid: coverpoint item.acc_valid;
        cp_acc_clear: coverpoint item.acc_clear;
        cp_drain_re: coverpoint item.drain_re;
        cp_acc_addr: coverpoint item.acc_addr {
            bins low = {[0:7]};
            bins mid = {[8:23]};
            bins high = {[24:$]};
        }
        cross_acc_valid_clear: cross cp_acc_valid, cp_acc_clear;
    endgroup
endclass
```

→ 어떤 입력 패턴이 얼마나 보였는지 추적. 회귀 결과의 **품질 metric**.

---

## ⑦⑧ Agent + Env (보통 L800 부근)

```systemverilog
class npu_agent extends uvm_agent;
    npu_driver drv;
    npu_monitor mon;
    uvm_sequencer#(npu_seq_item) seqr;
    ...
endclass

class npu_env extends uvm_env;
    npu_agent agt;
    npu_scoreboard scbd;
    npu_coverage cov;

    function void connect_phase(uvm_phase phase);
        agt.mon.ap_in.connect(scbd.in_imp);
        agt.mon.ap_out.connect(scbd.out_imp);
        agt.mon.ap_in.connect(cov.analysis_export);
    endfunction
endclass
```

→ **Connect**: monitor → scoreboard, monitor → coverage.

---

## ⑨ Tests (보통 L1000 부근)

```systemverilog
class npu_test extends uvm_test;
    npu_env env;

    task run_phase(uvm_phase phase);
        npu_weight_load_sequence wseq;
        npu_sequence iseq;

        phase.raise_objection(this);
        wseq = npu_weight_load_sequence::type_id::create("wseq");
        wseq.start(env.agt.seqr);   // weight 로딩
        iseq = npu_sequence::type_id::create("iseq");
        iseq.start(env.agt.seqr);   // 본 회귀
        phase.drop_objection(this);
    endtask
endclass

// Test variants
class npu_smoke_test extends npu_test ...    // 짧은 랜덤
class npu_stress_test extends npu_test ...   // back-to-back stress
class npu_fp16_mode_smoke_test extends npu_test ... // FP16 모드
```

→ `+UVM_TESTNAME=npu_test` plusarg로 어떤 test 돌릴지 결정.

---

## 핵심 개념 정리

| 개념 | 의미 |
|---|---|
| **Sequence item** | 한 사이클 자극 데이터 |
| **Constraint distribution** | dist 연산자로 corner case 가중치 |
| **Driver/Monitor 분리** | active drive vs passive observe |
| **Golden in scoreboard** | SV로 RTL 산식 재구현 |
| **Coverage cross** | 두 coverpoint 조합 추적 |
| **Phase 기반 lifecycle** | build/connect/run phase 자동 |

---

## 연습 문제

1. `npu_stress_test`가 forwarding hazard를 잘 강제할 수 있는 이유? (constraint를 보고 답)
2. scoreboard의 golden model이 RTL과 다르게 계산하면 어떤 결과? CI에서 어떻게 잡히나?
3. Coverage cross에서 `cp_acc_valid × cp_acc_clear` 조합이 4개 (00, 01, 10, 11) 모두 hit해야 하는가? 그 이유는?
4. UVM driver가 `@(posedge vif.clk)` 후에 `<=` (NB assignment)를 쓰는 이유는?

---

## 다음 파일로 넘어가기

→ [23_tb_top.md](23_tb_top.md): UVM testbench의 최상위 wiring (DUT + vif + run_test)
