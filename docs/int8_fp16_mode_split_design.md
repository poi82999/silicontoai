# INT8/FP16 Compile-Time Mode Split Design (Draft)

## 1. Objective

`mac_pe` 데이터패스를 compile-time parameter로 분리하여 INT8 기본 경로와 FP16 실험 경로를 공존시키되,
기존 signoff(INT8 streamlined) 안정성을 깨뜨리지 않는 것이 목표다.

## 2. Scope

대상 모듈:

- `rtl/core/mac_pe.sv`
- `rtl/core/mac_pe_int8.sv`
- `rtl/core/systolic_array.sv`
- `rtl/core/npu_core_top.sv`
- `rtl/include/npu_def_pkg.sv`

비대상(Phase-1 제외):

- L6 compiler arithmetic policy 전환
- CUDA FP16 golden 확장
- FPGA synthesis option matrix

## 3. Mode Definition

compile-time mode enum:

- `NPU_DATA_MODE_INT8 = 0`
- `NPU_DATA_MODE_FP16 = 1`

기본값:

- `NPU_DATA_MODE = NPU_DATA_MODE_INT8`

원칙:

- signoff/CI default는 항상 INT8
- FP16은 opt-in 실험 경로

## 4. RTL Architecture Changes

### 4.1 `npu_def_pkg.sv`

추가 항목:

- `localparam int NPU_DATA_MODE_INT8 = 0;`
- `localparam int NPU_DATA_MODE_FP16 = 1;`
- `parameter int NPU_DATA_MODE = NPU_DATA_MODE_INT8;`

### 4.2 `systolic_array.sv`

파라미터 추가:

- `parameter int DATA_MODE = NPU_DATA_MODE_INT8`

generate 분기:

- `if (DATA_MODE == NPU_DATA_MODE_INT8)` -> `mac_pe_int8` 인스턴스
- `else` -> `mac_pe` 인스턴스

### 4.3 `npu_core_top.sv`

`u_systolic_array` 인스턴스에 `DATA_MODE` 전달.

초기 단계에서는 코어 최상위에서 고정값 전달(기본 INT8).
후속 단계에서 testbench/top-level에서 override 가능하도록 확장.

## 5. Verification Strategy

### 5.1 Phase-1 (INT8 보호)

목표:

- 기존 INT8 signoff 결과 완전 동일

필수 통과:

- `make sim`
- `make sim-system`
- `make l5-signoff`
- `make uvm-smoke`

### 5.2 Phase-2 (FP16 실험 경로 smoke)

목표:

- FP16 모드 compile + directed smoke 성공

필수 통과:

- FP16 build variant에서 core/system compile
- 최소 1개 directed 패키지 실행 및 mismatch report 생성 확인

## 6. Risk and Mitigation

Risk A: generate 분기에서 lint/unused signal 증가

- Mitigation: mode별 conditional connection + 필요한 경우 국소 lint pragma

Risk B: FP16 경로 golden/compare policy 부재

- Mitigation: Phase-2에서는 signoff 미포함, 실험 태그로 분리

Risk C: CI matrix 팽창

- Mitigation: default CI는 INT8만 유지, FP16 nightly job으로 분리

## 7. Milestones

M1: Mode parameter skeleton

- `npu_def_pkg.sv`, `systolic_array.sv`, `npu_core_top.sv` 반영
- INT8 regression no-change 증명

M2: FP16 build enable

- FP16 compile path smoke
- mismatch log path 유효성 확인

M3: Toolchain alignment proposal

- L6/CUDA/host compare policy 문서화
- FP16 package schema 확장 여부 결정

## 8. Open Decisions

1. `mac_pe.sv`를 재사용할지, `mac_pe_fp16.sv`로 명시 분리할지
2. mode 선택 지점을 `npu_def_pkg` 전역으로 둘지 top parameter override로 둘지
3. FP16 모드의 golden 기준(비트정확 vs 허용오차) 정의 위치
