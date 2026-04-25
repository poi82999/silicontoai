# 02. `npu_interfaces.sv` — AXI-Stream 인터페이스 정의

> **파일 위치**: `rtl/include/npu_interfaces.sv`
> **역할**: AXI-Stream 프로토콜을 SystemVerilog `interface`로 정의
> **선수 지식**: [01_npu_def_pkg.md](01_npu_def_pkg.md), SystemVerilog `interface`/`modport` 개념

---

## 전체 코드 (27줄)

```systemverilog
`timescale 1ns / 1ps                                          // ← [L1]

interface npu_axis_if #(                                       // ← [L3]
    parameter DATA_WIDTH = 256                                 // ← [L4]
);
    logic                    tvalid;                           // ← [L6]
    logic                    tready;                           // ← [L7]
    logic [DATA_WIDTH-1:0]   tdata;                            // ← [L8]
    logic                    tlast;                             // ← [L9]

    // Master port directions
    modport master (                                           // ← [L12]
        output tvalid, tdata, tlast,
        input  tready
    );

    // Slave port directions
    modport slave (                                            // ← [L18]
        input  tvalid, tdata, tlast,
        output tready
    );

    // Monitor interface (useful for assertions and simulation)
    modport monitor (                                          // ← [L24]
        input tvalid, tready, tdata, tlast
    );
endinterface                                                   // ← [L27]
```

---

## 줄 단위 해설

### [L3-5] Interface 선언
```systemverilog
interface npu_axis_if #(
    parameter DATA_WIDTH = 256
);
```
- **`interface`**: SystemVerilog에서 모듈 간 연결 "번들"을 정의하는 구조
  - 여러 신호를 하나의 이름으로 묶어서 포트에 연결
  - `wire`를 하나하나 연결하는 것보다 훨씬 깔끔
- **`DATA_WIDTH = 256`**: 기본값 256비트. 인스턴스화할 때 바꿀 수 있음
- **왜 256?**: `npu_def_pkg.sv`의 `EXT_AXI_DATA_WIDTH`와 동일. 한 beat = systolic array 한 행

### [L6-9] AXI-Stream 4대 신호

| 신호 | 방향 (Master 기준) | 의미 |
|------|---------------------|------|
| `tvalid` | Master → Slave | "데이터 준비됐어" (1이면 tdata가 유효) |
| `tready` | Slave → Master | "받을 준비 됐어" (1이면 수신 가능) |
| `tdata` | Master → Slave | 실제 데이터 (256비트) |
| `tlast` | Master → Slave | "이 beat가 전송의 마지막이야" |

**핸드셰이크 규칙**: `tvalid=1` **AND** `tready=1`인 클럭 엣지에서 데이터 전송 완료

```
     clk:  ─┐ ┌─┐ ┌─┐ ┌─┐ ┌─
   tvalid:  ─┘ 1 │ 1 │ 1 │ 0│
   tready:  ─┘ 0 │ 1 │ 1 │──│
                      ↑   ↑
              전송!  전송! (tvalid & tready = 1)
```

### [L12-15] `modport master`
```systemverilog
modport master (
    output tvalid, tdata, tlast,
    input  tready
);
```
- **Master**가 데이터를 **보내는** 쪽
- `tvalid`, `tdata`, `tlast`를 **출력** (내가 준비된 데이터를 알려줌)
- `tready`를 **입력** (상대방이 받을 수 있는지 확인)
- 이 프로젝트에서: **DMA controller**가 master

### [L18-21] `modport slave`
```systemverilog
modport slave (
    input  tvalid, tdata, tlast,
    output tready
);
```
- **Slave**가 데이터를 **받는** 쪽
- master와 방향이 정확히 반대
- 이 프로젝트에서: **SRAM bank**가 slave

### [L24-26] `modport monitor`
```systemverilog
modport monitor (
    input tvalid, tready, tdata, tlast
);
```
- 모든 신호를 **읽기 전용**으로 관찰
- 검증(TB)에서 UVM Monitor가 데이터를 관찰할 때 사용
- 버스에 영향을 주지 않고 traffic을 기록 가능

---

## 핵심 개념 정리

| 개념 | 설명 |
|------|------|
| AXI-Stream | ARM AMBA 프로토콜. 스트리밍 데이터 전송용 (메모리 주소 없음) |
| `interface` | SystemVerilog에서 신호 번들을 정의. 포트 선언 간소화 |
| `modport` | interface 내부에서 방향(input/output)을 역할별로 정의 |
| 핸드셰이크 | valid & ready 동시 1 → 전송 발생. backpressure 메커니즘 |

### AXI-Stream vs AXI4 차이

| | AXI-Stream | AXI4 (Full) |
|--|-----------|-------------|
| 주소 | 없음 | 있음 (araddr/awaddr) |
| 용도 | 스트리밍 (DMA→SRAM) | 메모리 매핑 (CPU→레지스터) |
| 이 프로젝트 | DMA 데이터 경로 | MMIO 제어 경로 |

---

## 연습 문제

1. `tvalid=1, tready=0`이면 데이터 전송이 일어나는가?
2. `modport master`에서 `tready`가 `input`인 이유는?
3. Monitor가 `output`을 하나도 갖지 않는 이유는?
4. `DATA_WIDTH`를 128로 줄이면 한 beat에 activation 몇 개를 실을 수 있는가?

<details>
<summary>정답 보기</summary>

1. **아니요**. 둘 다 1이어야 전송 발생 (backpressure 상태)
2. Master는 데이터를 보내는 쪽이므로 상대(slave)가 받을 준비됐는지(tready)를 **확인**해야 함 → input
3. Monitor는 관찰만 하고 버스에 영향을 주면 안 되므로 input만 가짐
4. 128비트 ÷ 16비트/lane = **8개** (한 행의 절반만 실을 수 있음)

</details>

---

## 다음 파일

→ [03. mac_pe_int8.sv — INT8 MAC Processing Element](../02_rtl_core/03_mac_pe_int8.md)
