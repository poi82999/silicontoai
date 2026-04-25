# 01. `npu_def_pkg.sv` — 전역 파라미터 패키지

> **파일 위치**: `rtl/include/npu_def_pkg.sv`
> **역할**: NPU 전체에서 사용하는 상수(크기, 폭, 모드)를 한 곳에 정의
> **선수 지식**: SystemVerilog 기본 문법 (`package`, `localparam`)

---

## 전체 코드 (29줄)

```systemverilog
`timescale 1ns / 1ps                              // ← [L1]

package npu_def_pkg;                               // ← [L3]

    // AXI Bus Configuration
    localparam int EXT_AXI_DATA_WIDTH = 256;       // ← [L6]
    localparam int EXT_AXI_ADDR_WIDTH = 64;        // ← [L7]

    // NPU Systolic Array Dimensions
    localparam int NPU_ROWS = 16;                  // ← [L10]
    localparam int NPU_COLS = 16;                  // ← [L11]

    // NPU Data Mode (compile-time)
    localparam int NPU_DATA_MODE_INT8 = 0;         // ← [L14]
    localparam int NPU_DATA_MODE_FP16 = 1;         // ← [L15]
    localparam int NPU_DATA_MODE      = NPU_DATA_MODE_INT8; // ← [L16]

    // NPU Data Precisions
    localparam int NPU_ACT_WIDTH  = 16;            // ← [L22]
    localparam int NPU_WT_WIDTH   = 16;            // ← [L23]
    localparam int NPU_PSUM_WIDTH = 32;            // ← [L24]

    // NPU Memory Configuration
    localparam int MEM_ADDR_WIDTH = 9;             // ← [L27]

endpackage                                         // ← [L29]
```

---

## 줄 단위 해설

### [L1] `timescale 1ns / 1ps`
- **무엇**: 시뮬레이션 시간 단위 설정
- **의미**: `#1` = 1나노초, 시간 해상도 = 1피코초
- **왜**: 모든 RTL 파일에 일관된 타이밍 기준을 잡기 위함

### [L3] `package npu_def_pkg;`
- **무엇**: SystemVerilog **Package** 선언
- **의미**: 이 안에 정의된 `localparam`들을 다른 모듈에서 `import npu_def_pkg::*;`로 가져다 쓸 수 있음
- **비유**: C언어의 `#define`이 든 공통 헤더파일과 같은 역할

### [L6-7] AXI 버스 설정
```
EXT_AXI_DATA_WIDTH = 256   → 외부 AXI 버스 폭 256비트 (= 32바이트/beat)
EXT_AXI_ADDR_WIDTH = 64    → 64비트 주소 공간
```
- **왜 256비트?**: 16개 lane × 16비트/lane = 256비트. 한 번의 AXI beat로 systolic array 한 행(row) 전체의 데이터를 전송 가능
- **왜 64비트 주소?**: AXI4 표준에서 큰 메모리 공간을 지원하기 위함

### [L10-11] Systolic Array 크기
```
NPU_ROWS = 16   → 행 16개
NPU_COLS = 16   → 열 16개
```
- 총 PE 수 = 16 × 16 = **256개**
- 이 숫자를 바꾸면 systolic array 크기가 바뀜 (scalability parameter)
- **왜 16?**: 2의 거듭제곱이라 하드웨어 효율적 + 실용적 크기

### [L14-16] 데이터 모드 선택
```
NPU_DATA_MODE_INT8 = 0    → INT8 모드
NPU_DATA_MODE_FP16 = 1    → FP16 모드
NPU_DATA_MODE = NPU_DATA_MODE_INT8  → 현재 INT8 사용
```
- **compile-time 선택**: Verilog 합성 시점에 어떤 PE를 사용할지 결정
- `systolic_array.sv`에서 이 값에 따라 `mac_pe_int8` 또는 `mac_pe`를 인스턴스화
- INT8은 면적·전력 효율적, FP16은 정밀도 필요한 경우

### [L22-24] 데이터 폭 정의
```
NPU_ACT_WIDTH  = 16   → Activation lane 폭 16비트
NPU_WT_WIDTH   = 16   → Weight lane 폭 16비트
NPU_PSUM_WIDTH = 32   → Partial Sum 폭 32비트
```
- **핵심 포인트**: INT8 모드에서도 lane 폭은 16비트로 유지!
  - INT8 데이터는 하위 8비트(`[7:0]`)만 사용, 상위 8비트는 무시
  - **왜?**: AXI 버스, SRAM, skew 로직을 INT8/FP16 모드 간에 공유하기 위해
- PSUM은 32비트: INT8×INT8 = 최대 16비트지만, 여러 값을 누적하면 오버플로우 방지 필요

### [L27] 메모리 주소 폭
```
MEM_ADDR_WIDTH = 9   → 2^9 = 512 entries per SRAM bank
```
- 각 bank: 512 × 128비트 = 8KB (INT8 모드 기준)
- 4 banks × 8KB = **32KB** (또는 FP16 모드에서 각 entry가 256비트면 64KB)

---

## 핵심 개념 정리

| 개념 | 설명 |
|------|------|
| `localparam` | 모듈 외부에서 변경 불가능한 상수. `parameter`와 달리 인스턴스화 시 override 불가 |
| `package` | 여러 모듈이 공유하는 상수/타입을 묶는 SystemVerilog 구조 |
| Lane 폭 통일 | INT8이든 FP16이든 16비트 lane 유지 → 하드웨어 재사용성 확보 |
| Scalability | `NPU_ROWS`/`NPU_COLS`를 바꾸면 8×8, 32×32 등으로 확장 가능 |

---

## 연습 문제

1. `NPU_ROWS`를 32로 바꾸면 총 PE 수는 몇 개가 되는가?
2. `NPU_ACT_WIDTH`가 16비트인데 INT8만 쓴다면, AXI 한 beat (256비트)에 activation 몇 개를 실을 수 있는가?
3. `MEM_ADDR_WIDTH = 9`이고 bank 4개면, 전체 SRAM 용량은 몇 바이트? (entry 폭 = 16비트 × 16 lane = 256비트 기준)

<details>
<summary>정답 보기</summary>

1. 32 × 32 = **1,024개**
2. 256비트 ÷ 16비트 = **16개** (정확히 한 행의 activation)
3. 512 entries × 256비트 × 4 banks = 512 × 32바이트 × 4 = **65,536바이트 = 64KB**

</details>

---

## 다음 파일

→ [02. npu_interfaces.sv — AXI-Stream 인터페이스](02_npu_interfaces.md)
