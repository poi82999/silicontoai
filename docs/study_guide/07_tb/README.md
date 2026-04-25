# Phase 7: 테스트벤치 학습 가이드

> 하드웨어를 검증하는 시뮬레이션 환경.
> RTL을 이해한 후 (Phase 1-5) 진행하세요.

---

## 파일 목록

| # | 파일 | 역할 | 난이도 |
|---|------|------|--------|
| 20 | `tb/npu_if.sv` | UVM Virtual Interface 정의 | ★☆☆ |
| 21 | `tb/tb_system_top.sv` | **Directed Test** — MMIO로 단계별 시나리오 실행 | ★★☆ |
| 22 | `tb/npu_uvm_pkg.sv` | UVM 환경 전체 (Driver/Monitor/Scoreboard/Test) | ★★★ |
| 23 | `tb/tb_top.sv` | UVM 최상위 연결 | ★★☆ |
| 24 | `tb/main.cpp` | Verilator C++ 드라이버 (Core replay) | ★★☆ |
| 25 | `tb/system_replay_main.cpp` | Verilator C++ 드라이버 (System replay) | ★★★ |
| 26 | `tb/assertions/*.sv` (4파일) | SVA assertion + coverage | ★★☆ |

## 검증 방법론 3가지

### 1. Directed Test (Vivado xsim)
```
tb_system_top.sv → npu_system_top (DUT)
- 시나리오를 하드코딩하여 순차 실행
- $readmemh로 golden 데이터 로드
- 결과 비교 후 PASS/FAIL 출력
```

### 2. UVM (Vivado xsim)
```
tb_top.sv → npu_uvm_pkg.sv (환경)
- Randomized stimulus
- Driver: 랜덤 데이터 생성 및 구동
- Monitor: 출력 관찰
- Scoreboard: expected vs actual 비교
- Coverage: functional coverage 수집
```

### 3. Verilator Co-simulation (C++)
```
main.cpp → Vnpu_core_top (Verilated model)
- C++에서 직접 clock toggle
- JSON workload package 로드
- Bit-exact golden 비교
- make sim / make sim-system
```

## 학습 순서 추천

1. `npu_if.sv` (가볍게 시작)
2. `tb_system_top.sv` (directed test 이해)
3. `main.cpp` (Verilator 흐름)
4. `npu_uvm_pkg.sv` (UVM은 큰 파일, 마지막에)

---

> 각 파일별 상세 학습 가이드는 해당 파일을 읽으며 보충 예정입니다.
