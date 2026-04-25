# 24. `tb/main.cpp` — Verilator C++ Core Replay Driver

> **파일 위치**: `tb/main.cpp` (352줄)
> **역할**: Verilator로 빌드된 `Vnpu_core_top`을 워크로드 패키지로 자극 + golden 비교
> **선수 지식**: [22_npu_uvm_pkg.md](22_npu_uvm_pkg.md), Verilator 사용법, [38_replay_bridge.md](../08_l6_toolchain/38_replay_bridge.md)
> **공장 비유**: 시운전 자동화 — 출하서(JSON manifest)를 읽고 작업카드를 라인에 차례로 투입, 결과를 골든과 비교

---

## 이 파일이 중요한 이유

UVM은 SystemVerilog에서만 돌고 Vivado xsim 같은 무거운 시뮬레이터를 요구합니다. **Verilator + C++** 조합은 훨씬 빠르고(수십 배), CI에서 매 PR마다 돌릴 수 있습니다. 이 파일이 그 진입점입니다. `compile_program`이 만든 workload package를 **그대로** 받아서 RTL 시뮬을 자동 실행합니다.

---

## 큰 그림

```
build/Vnpu_core_top  workloads/some_package/
        │
        ▼
1. PackageData 로드 (replay_package.h)
   - manifest.json, activation, weight, golden
2. Reset (~5 cycle)
3. Weight load mode (16 cycle)
4. Execute mode + acc accumulation (k_pass × m cycle)
5. Drain & compare with golden
        │
        ▼
replay_report.txt: status=PASS / FAIL
replay_coverage.txt: forwarding_hit, drain_request
```

---

## 핵심 자료구조

### `PackageData` (`replay_package.h` 정의)

```cpp
struct PackageData {
    fs::path packageDir;
    Manifest manifest;
    std::vector<ReplayRow16x16> activations;   // m rows × 16 lanes
    std::vector<ReplayRow16x16> weights;       // n cols × 16 lanes
    std::vector<GoldenEntry>    goldens;       // (drain_addr, expected) 쌍
};
```

→ JSON에서 파싱된 모든 데이터를 **한 struct**로 묶음.

### `CoreCoverageState`

```cpp
struct CoreCoverageState {
    bool forwardingHitSeen = false;
    bool drainRequestSeen = false;
};
```

→ replay 동안 **forwarding hit**(누산기 바이패스 동작)이 한 번이라도 발동했는지 추적. coverage report에 사용.

---

## Tick 함수 (L31-54)

```cpp
void tick(Vnpu_core_top* dut, VerilatedContext* contextp) {
    dut->clk = 0; contextp->timeInc(1); dut->eval();
    dut->clk = 1; contextp->timeInc(1); dut->eval();
}

void tickAndSample(Vnpu_core_top* dut, VerilatedContext* contextp, CoreCoverageState* state) {
    dut->clk = 0; contextp->timeInc(1); dut->eval();
    dut->clk = 1; contextp->timeInc(1); dut->eval();
    sampleCoverage(dut, state);
}
```

**왜 두 번 eval**: 한 cycle = clock low + clock high. Verilator 모델이 양쪽 phase 모두 평가해야 sequential logic이 갱신.

---

## Forwarding Hit Detection (L36-44)

```cpp
void sampleCoverage(Vnpu_core_top* dut, CoreCoverageState* coverageState) {
    const auto* root = dut->rootp;
    const bool forwardingHit =
        (root->npu_core_top__DOT__u_psum_buffer__DOT__acc_valid_q != 0)
     && (root->npu_core_top__DOT__u_psum_buffer__DOT__last_write_valid != 0)
     && (root->npu_core_top__DOT__u_psum_buffer__DOT__acc_addr_q
         == root->npu_core_top__DOT__u_psum_buffer__DOT__last_write_addr);
    coverageState->forwardingHitSeen = coverageState->forwardingHitSeen || forwardingHit;
    coverageState->drainRequestSeen  = coverageState->drainRequestSeen  || (dut->drain_re != 0);
}
```

**Verilator hierarchical access**: SystemVerilog의 `dut.u_psum_buffer.forward_en` → C++에서는 `root->npu_core_top__DOT__u_psum_buffer__DOT__forward_en`.

**Forwarding hit 정의**:
- 현재 사이클에 누산 valid
- 직전 사이클에도 같은 주소에 write
→ accumulator BRAM 우회 path가 활성화됨

→ 이 조건을 한 번이라도 본 패키지는 forwarding 경로를 **검증한 셈**.

---

## main 함수의 5단계

### Step 1: 패키지 로드

```cpp
fs::path packageDir(argv[1]);
PackageData package = replay::loadPackage(packageDir);
```

→ `replay_package.h`의 `loadPackage`가 manifest 파싱 + activation/weight/golden 메모리에 적재.

### Step 2: DUT 생성 + Reset

```cpp
auto contextp = std::make_unique<VerilatedContext>();
auto dut = std::make_unique<Vnpu_core_top>(contextp.get());

dut->rst_n = 0;
for (int i = 0; i < 5; ++i) tick(dut.get(), contextp.get());
dut->rst_n = 1;
tick(...);
```

### Step 3: Weight Load Mode

```cpp
for (int row = 0; row < 16; ++row) {
    dut->weight_load_en = (1u << row);
    for (int lane = 0; lane < 16; ++lane) {
        dut->sram_weight_in[lane] = prepareLaneForDutDrive(package.weights[row].lane[lane]);
    }
    tick(...);
}
dut->weight_load_en = 0;
```

→ row 0~15에 한 cycle씩 weight 로드. `weight_load_en` one-hot.

### Step 4: Execute Mode + Accumulation

```cpp
for (int kPass = 0; kPass < package.manifest.kTileCount; ++kPass) {
    bool isFirstKPass = (kPass == 0);

    for (int m = 0; m < package.manifest.tileM; ++m) {
        // activation drive
        for (int lane = 0; lane < 16; ++lane) {
            dut->sram_act_in[lane] = prepareLaneForDutDrive(package.activations[m].lane[lane]);
        }
        dut->acc_valid = 1;
        dut->acc_clear = (isFirstKPass && (m == 0)) ? 1 : 0;
        dut->acc_addr  = m;
        tickAndSample(...);
    }
}
dut->acc_valid = 0;
```

**핵심**:
- `acc_clear`: 첫 K-pass의 첫 row만 1 (누산기 0 초기화)
- 나머지는 누산
- 31-cycle pipeline: drain은 마지막 m 사이클 이후에 시작

### Step 5: Drain & Compare

```cpp
std::vector<std::string> mismatchLines;
int checkedLanes = 0;
for (const auto& [drainAddr, expectedGolden] : package.manifest.drainAddresses_and_goldens) {
    dut->drain_re   = 1;
    dut->drain_addr = drainAddr;
    tickAndSample(...);

    for (int lane = 0; lane < 16; ++lane) {
        int32_t actual = dut->psum_drain_out[lane];
        int32_t expected = decodeCompareValue(expectedGolden, lane, package.manifest.compareMode);
        if (actual != expected) {
            mismatchLines.push_back(...);
        }
        ++checkedLanes;
    }
}
dut->drain_re = 0;

writeReplayReport(package, mismatchLines, checkedLanes);
writeCoverageReport(package, coverageState);
return mismatchLines.empty() ? 0 : 1;
```

→ 미스매치가 한 줄도 없으면 `status=PASS`.

---

## 산출물

```
package_dir/
├── replay_report.txt
│   package=...
│   k_passes=2
│   drained_rows=16
│   checked_lanes=256
│   mismatch_count=0
│   status=PASS
└── replay_coverage.txt
    forwarding_hit_seen=1
    drain_request_seen=1
    coverage_hit_count=2
    coverage_total=2
```

---

## Build / Run

```bash
# Verilator 빌드
make -C scripts build-core

# 단일 패키지 실행
./build/Vnpu_core_top workloads/reference_gemm_tile_m0_n0_k0to15
```

`scripts/Makefile`이 verilator로 `Vnpu_core_top.h/.cpp` 생성 후 g++로 link.

---

## main.cpp vs. system_replay_main.cpp

| | main.cpp | system_replay_main.cpp |
|---|---|---|
| 대상 | `npu_core_top` (코어 단독) | `npu_system_top` (DMA + SRAM + 코어) |
| 입력 | activation/weight 직접 |  AXI memory model + MMIO sequence |
| 시나리오 | weight load + execute + drain | DMA → swap → preload → execute → swap → drain |
| 용도 | 코어 알고리즘 회귀 | full system 통합 회귀 |

→ 다음 가이드 [25_system_replay_main.md](25_system_replay_main.md).

---

## 핵심 개념 정리

| 개념 | 의미 |
|---|---|
| **Verilator C++ tick** | clk 0/1 토글 + eval() 두 번 |
| **`__DOT__`** | SV의 `.`이 C++ 이름에서 `__DOT__`로 mangle |
| **Forwarding hit detection** | 두 신호 + 주소 일치로 hazard 검출 |
| **acc_clear 첫 K-pass에만** | split-K 누산 시작 신호 |
| **replay_report.txt** | 패키지별 PASS/FAIL + mismatch 상세 |

---

## 연습 문제

1. `weight_load_en = (1u << row)`이 매 사이클 다른 row를 로드하는 이유는?
2. `acc_clear`가 첫 K-pass의 첫 m row에서만 1인 이유는? 다른 m row에서도 1이면?
3. Verilator의 `dut->rootp->...__DOT__forward_en` 같은 mangled name을 어떻게 알 수 있나? (힌트: `Vnpu_core_top___024root.h`)
4. main.cpp의 timeout이 명시적으로 없는 이유는? (힌트: 모든 cycle 수가 input에서 결정됨)

---

## 다음 파일로 넘어가기

→ [25_system_replay_main.md](25_system_replay_main.md): system replay (DMA + SRAM + core 전체) C++ driver
