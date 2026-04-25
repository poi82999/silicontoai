# 26. `tb/assertions/*.sv` — SVA Assertion + Coverage

> **파일 위치**: `tb/assertions/` (4개 파일, 총 182줄)
>   - `npu_assertions.sv` (81줄) — concurrent assertions (DMA, accumulator)
>   - `npu_assert_coverage.sv` (66줄) — assertion coverage 그룹
>   - `core_assert_bind.sv` (9줄) — core 모듈에 cov bind
>   - `system_assert_bind.sv` (26줄) — system 모듈에 cov bind
> **역할**: SystemVerilog Assertion (SVA)으로 RTL invariant 검사 + coverage 추적
> **선수 지식**: [22_npu_uvm_pkg.md](22_npu_uvm_pkg.md), SVA basics (`property`, `assert`)
> **공장 비유**: 라인 안전 규정 + 자동 알람 — "지게차 8대 이상 동시에 못 다님" 같은 규칙을 항상 감시

---

## 이 파일이 중요한 이유

UVM scoreboard가 출력값을 비교하는 동안, SVA는 **RTL이 시간에 따라 어겨선 안 되는 규칙들**을 cycle 단위로 감시합니다. 검증 안전망이고, fail 시 즉시 어디서 어겼는지 알려줍니다.

---

## 큰 그림: 4개 파일의 역할

```
npu_assertions.sv          ← assertion property 정의 (실제 검사 로직)
npu_assert_coverage.sv     ← coverpoint 정의 (얼마나 봤나)
core_assert_bind.sv        ← core 모듈에 cov 모듈 bind
system_assert_bind.sv      ← system 모듈에 cov 모듈 bind
```

---

## ① `npu_assertions.sv` — 실제 SVA 모듈

### `dma_controller_sva` (4개 property)

```systemverilog
property p_outstanding_cnt_within_limit;
    @(posedge clk) disable iff (!rst_n)
        outstanding_cnt <= MAX_OUTSTANDING;
endproperty
```

**의미**: 동시 outstanding AXI request가 8개를 절대 안 넘음.
**왜 중요**: AXI ID 폭이 4-bit이라 16 outstanding이 한계. 8 buffer로 안전마진.

```systemverilog
property p_resp_cnt_never_exceeds_req_cnt;
    @(posedge clk) disable iff (!rst_n)
        req_cnt >= resp_cnt;
endproperty
```

**의미**: 응답이 요청보다 많을 수 없음. counter overflow나 잘못된 R 채널 처리 검출.

```systemverilog
property p_idle_clears_outstanding_cnt;
    @(posedge clk) disable iff (!rst_n)
        !busy |-> (outstanding_cnt == 0);
endproperty
```

**의미**: idle 상태이면 outstanding이 0. busy 미해제 후에도 outstanding이 있는 버그 방지.

```systemverilog
property p_dma_done_only_when_idle;
    @(posedge clk) disable iff (!rst_n)
        dma_done |-> !busy;
endproperty
```

**의미**: dma_done은 busy=0일 때만 pulse. 동시에 active이면 잘못된 핸드셰이크.

### `psum_accumulator_buffer_sva` (2개 property)

```systemverilog
property p_acc_and_drain_are_mutually_exclusive;
    @(posedge clk) disable iff (!rst_n)
        !(acc_valid && drain_re);
endproperty

property p_forwarding_requires_valid_previous_write;
    @(posedge clk) disable iff (!rst_n)
        forward_en |-> last_write_valid;
endproperty
```

**핵심 invariant**:
1. accumulate와 drain은 **동시에 못 함** (BRAM 1-port 제약)
2. forwarding은 **직전 valid write**가 있어야 발동 (없는 데이터 forward 안 함)

---

## SVA 문법 핵심

### `property ... endproperty`
property 정의. Boolean expression + 시간 연산자.

### `disable iff (!rst_n)`
reset 동안엔 검사 비활성. 안 그러면 reset 직후 noise로 fail.

### `|->` (overlapping implication)
`A |-> B`: A가 high이면 같은 cycle에 B도 high.

### `assert property (p)`
property를 검사. fail 시 `$error`. simulator log에 빨간 메시지 + 검증 fail 마크.

### `else $error(...)`
fail 시 출력 메시지. 어떤 어설션이 깨졌는지 명확히.

---

## ② `npu_assert_coverage.sv` — Coverage groups

```systemverilog
covergroup cg_dma_lifecycle @(posedge clk);
    cp_start: coverpoint dma_start_seen { bins seen = {1}; }
    cp_done:  coverpoint dma_done       { bins seen = {1}; }
endgroup

covergroup cg_accumulator_pipeline @(posedge clk);
    cp_forward: coverpoint forward_en { bins hit = {1}; }
    cp_drain:   coverpoint drain_re   { bins hit = {1}; }
endgroup
```

**역할**: assertion이 **PASS** 한다고 충분한가? 안 됨 — 그 이벤트가 **한 번이라도 발동**해야 의미. coverage가 그걸 보장.

→ 11 required coverpoint (system_replay_main.cpp 참조) 중 일부가 여기서 정의.

---

## ③④ Bind 파일

`core_assert_bind.sv`:
```systemverilog
bind npu_core_top.u_psum_buffer psum_accumulator_buffer_sva u_sva (
    .clk             (clk),
    .rst_n           (rst_n),
    .acc_valid       (acc_valid_q),
    .drain_re        (drain_re),
    .forward_en      (forward_en),
    .last_write_valid(last_write_valid)
);
```

**`bind`**: SystemVerilog 핵심 기능 — 기존 모듈을 수정 안 하고 **외부에서 추가 모듈 인스턴스**.

→ `npu_core_top.u_psum_buffer` 인스턴스에 `psum_accumulator_buffer_sva`를 첨부. RTL 코드에는 없는 새 SVA 인스턴스.

→ 검증 코드를 RTL과 분리. RTL은 깨끗하게 유지.

---

## Verilator vs Vivado xsim 차이

| | Verilator | Vivado xsim |
|---|---|---|
| SVA 지원 | 부분 (concurrent OK) | 풀 지원 |
| Coverage | 별도 도구 | xcrg native |
| Bind 지원 | 가능 | 가능 |

→ 일부 고급 SVA (sequence, until 등)은 Verilator에서 안 됨 → 단순 implication만 사용.

---

## 시뮬에서 fail 보면

```
[ASSERT][p_outstanding_cnt_within_limit] dma_controller: outstanding_cnt exceeded MAX_OUTSTANDING
**FATAL** at time 1234 ns
```

→ 어떤 assertion인지 + 어디서 (시간) 깨졌는지 명확. waveform을 그 시간에서 보면 root cause.

---

## 핵심 개념 정리

| 개념 | 의미 |
|---|---|
| **SVA property** | 시간에 걸친 boolean 조건 |
| **`disable iff`** | reset 중에는 검사 안 함 |
| **`|->`** | implication (precondition → check) |
| **`assert + $error`** | fail 시 즉시 알림 |
| **`bind`** | 기존 RTL을 안 건드리고 추가 모듈 첨부 |
| **Coverpoint vs Assertion** | 발동 추적 vs 어김 검출 (둘 다 필요) |

---

## 연습 문제

1. `outstanding_cnt`가 `MAX_OUTSTANDING + 1`이 되는 순간 어떤 일이 일어나는가? simulator 종료? 메시지만?
2. `bind` 없이 `psum_accumulator_buffer_sva`를 사용하려면 어떻게 해야 할까? (RTL 수정?)
3. `acc_valid && drain_re`가 동시에 1이면 RTL이 어떤 동작? (BRAM 1-port 충돌)
4. forwarding hit coverpoint가 한 번도 hit 못한 시뮬은 PASS인가? (sign-off 관점)

---

## 🎉 Phase 7 완료!

7개 TB 파일을 모두 학습했습니다.

```
npu_if.sv          tb_system_top.sv     npu_uvm_pkg.sv
tb_top.sv          main.cpp             system_replay_main.cpp
assertions/*.sv (4 files)
```

→ Phase 9 (Host driver): [host/](../09_host/) — C++ DMA controller, replay loader
→ Phase 6 (FPGA wrappers): [fpga/](../06_rtl_fpga/) — 보드별 top 모듈
