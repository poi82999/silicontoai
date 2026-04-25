# 25. `tb/system_replay_main.cpp` — Full System Replay Driver

> **파일 위치**: `tb/system_replay_main.cpp` (1210줄)
> **역할**: Verilator로 `npu_system_top` (DMA + SRAM + Core) 전체 시뮬 + 11-package chained replay
> **선수 지식**: [24_main_cpp.md](24_main_cpp.md), [15_npu_system_top.md](../05_rtl_system/15_npu_system_top.md), AXI memory model
> **공장 비유**: 풀스택 무인 조립 라인 — DDR(자재창고) ~ DMA(지게차) ~ SRAM(라인 옆 창고) ~ 코어(라인) ~ 출력 검사까지 자동 운영

---

## 이 파일이 중요한 이유

L5 sign-off의 핵심 구성요소입니다. `make l5-signoff`가 결국 이 binary를 11개 워크로드 패키지에 대해 차례로 호출. **DMA부터 drain까지 시스템 전체**가 정상 동작하는지 검증합니다.

---

## 큰 그림: main.cpp보다 5배 복잡한 이유

```
main.cpp (Core only):           system_replay_main.cpp:
                                ┌────────────────────────┐
                                │  AXI Memory Model       │ ← Host memory 흉내
                                │  (Map<addr → bytes>)    │
                                └─────────┬──────────────┘
                                          │ AR/RDATA
[direct sram drive]            ┌──────────▼──────────────┐
                                │  npu_system_top         │
                                │   - dma_controller      │
                                │   - dp_sram_bank × 4    │
                                │   - npu_core_top        │
                                └─────────────────────────┘
                                          │
                                          ▼ AXIS drain
                                MMIO 시퀀스 자동 시뮬 + assertion
```

**main.cpp**: 16-cycle weight load + execute + drain.
**system_replay_main.cpp**: DMA → swap → preload → DMA → swap → execute → ... 모든 phase.

---

## 핵심 자료구조

### `ReplayCounters` (L38-48)

```cpp
struct ReplayCounters {
    int dmaDoneCount;
    int npuDoneCount;
    int drainedRows;
    int checkedLanes;
    int bankSwapCount;
    int weightDmaLaunchCount;
    int activationDmaLaunchCount;
    int preloadLaunchCount;
    int executeLaunchCount;
};
```

→ 시뮬 동안 **각 phase가 몇 번 발동했는지** 정확히 추적. `expected_npu_done_count` 같은 manifest 필드와 비교해서 PASS/FAIL.

### `AssertionCheck`, `CoveragePoint` (L50-60)

```cpp
struct AssertionCheck { string name; bool pass; string note; };
struct CoveragePoint  { string name; bool hit;  string note; };
```

→ 11개의 assertion + coverage point를 추적. report에 기록.

---

## 11 Required Coverpoints

```cpp
// 시뮬 끝나면 모두 hit해야 PASS
cp_dma_start_seen
cp_dma_done_seen
cp_weight_load_mode_start_seen
cp_execute_mode_start_seen
cp_forwarding_hit_seen
cp_drain_request_seen
cp_split_k_seen
cp_multiburst_dma_seen
cp_n_tile_seen
cp_m_tile_seen
cp_negative_validation_seen
```

→ **검증 완성도의 최소 baseline**. 11/11 hit하지 않으면 sign-off PACKAGE_ERROR.

---

## AXI Memory Model

```cpp
class AxiReadModel {
    std::map<uint64_t, std::vector<uint8_t>> regions;  // base addr → bytes

    void addRegion(uint64_t base, const std::vector<uint8_t>& data);

    // ARVALID/RDATA 자동 응답
    void tick(Vnpu_system_top* dut) {
        if (dut->arvalid && dut->arready) {
            outstanding.push_back({dut->araddr, dut->arlen + 1});
        }
        if (dut->rready && !outstanding.empty()) {
            auto& req = outstanding.front();
            // 256-bit beat을 매 사이클 보냄
            ...
        }
    }
};
```

→ 진짜 DDR 대신 in-memory map. weight/activation 데이터를 정해진 base address에 등록.

---

## MMIO Sequencer (보통 L300-500 부근)

```cpp
void runDmaPhase(Vnpu_system_top* dut, uint64_t srcAddr, uint8_t burstLen,
                 uint16_t totalBursts, bool target) {
    dut->mmio_dma_target = target;
    dut->mmio_src_addr   = srcAddr;
    dut->mmio_burst_len  = burstLen;
    dut->mmio_total_bursts = totalBursts;
    dut->mmio_start_dma = 1;
    tick(dut, ctx);
    dut->mmio_start_dma = 0;

    while (!dut->mmio_dma_done) {
        tick(dut, ctx);
        if (counters.cycles > kDefaultTimeoutCycles) throw timeout();
    }
    counters.dmaDoneCount++;
}

void runExecutePhase(Vnpu_system_top* dut, uint16_t seqLen, bool accClear) {
    dut->mmio_npu_mode = 0;
    dut->mmio_npu_seq_len = seqLen;
    dut->mmio_npu_acc_clear = accClear;
    dut->mmio_start_npu = 1;
    tick(dut, ctx);
    dut->mmio_start_npu = 0;

    while (!dut->mmio_npu_done) tick(dut, ctx);
    counters.npuDoneCount++;
}
```

→ task `mmio_*`을 C++로 옮긴 패턴. directed test와 동일한 시퀀스를 자동화.

---

## Per-Pass Loop (보통 L600-800 부근)

```cpp
for (const auto& pass : package.systemPasses) {
    // 1) Weight DMA
    runDmaPhase(dut, pass.weightSrcAddr, pass.weightBurstLen, pass.weightBursts, /*target=weight*/ true);

    // 2) Bank swap
    pulseSignal(dut, &dut->mmio_swap_banks);
    counters.bankSwapCount++;

    // 3) Activation DMA
    runDmaPhase(dut, pass.actSrcAddr, pass.actBurstLen, pass.actBursts, /*target=act*/ false);

    // 4) Bank swap
    pulseSignal(dut, &dut->mmio_swap_banks);

    // 5) Weight Preload
    runWeightLoadPhase(dut);

    // 6) Execute (acc_clear if first K-pass)
    runExecutePhase(dut, pass.execSeqLen, pass.accClear);
}

// 7) Drain & Compare
runDrainAndCompare(dut, package.goldens, ...);
```

→ manifest의 `phase_sequence`를 **순서대로 그대로** 실행.

---

## Streamlined DMA-Execute Hook

manifest에 `verification_only_hook_policy: streamlined_dma_execute`이면 일부 검증 hook 우회 (legacy phase ordering 무시) → 더 단순한 DMA → execute 진행.

→ `replay_bridge.py`가 이 정책 metadata를 항상 추가.

---

## Output Reports

```
package_dir/
├── replay_report.txt           # status=PASS/FAIL, mismatch 리스트
├── replay_coverage.txt         # 11 coverpoint hit 추적
├── replay_event_summary.txt    # cycle-by-cycle phase 발동 요약
└── replay_assertion_summary.txt # SVA 결과
```

`scripts/run_l5_signoff.sh`가 11 패키지 모두에 대해 이 report들을 모아 `chain_summary.txt` + `l5_signoff_summary.txt` 생성.

---

## Build/Run

```bash
make -C scripts build-system
./build_system/Vnpu_system_top workloads/system_reference_gemm_tile_m0_n0_k0to15
```

또는 한 번에:

```bash
make l5-signoff
```

---

## 핵심 개념 정리

| 개념 | 의미 |
|---|---|
| **AXI memory model** | std::map base→bytes. DDR 흉내 |
| **MMIO sequencer in C++** | mmio_start_* pulse + wait done |
| **Per-pass loop** | DMA→swap→preload→DMA→swap→execute |
| **11 coverpoint baseline** | sign-off 통과 기준 |
| **Streamlined hook** | legacy hook 우회 정책 |

---

## 연습 문제

1. weight DMA가 끝나기 전에 activation DMA를 시작하면 어떤 문제? bank swap 위치는 왜 그 사이?
2. `expected_npu_done_count`이 split-K 2-pass에서 2여야 하는 이유?
3. AXI memory model이 응답을 너무 빨리 주면 어떤 RTL 동작이 가려질 수 있나?
4. 11 coverpoint 중 하나가 hit 못 하면? sign-off는 어떤 결과?

---

## 다음 파일로 넘어가기

→ [26_assertions.md](26_assertions.md): SVA assertion + coverage 정의 (4개 .sv 파일)
