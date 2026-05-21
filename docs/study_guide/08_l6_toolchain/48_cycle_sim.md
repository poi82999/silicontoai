# 48. `cycle_sim.py` — 2-Stream Double-Buffered 사이클 시뮬레이터

> **파일 위치**: `l6/src/l6_toolchain/cycle_sim.py` (320줄)
> **역할**: DMA 스트림 || Compute 스트림 모델로 **사이클 단위 timeline** 시뮬레이션
> **선수 지식**: [33_scheduler.md](33_scheduler.md) (analytical cost), double-buffering 개념
> **공장 비유**: 공장 일정표 시뮬레이션 — 자재 운반팀과 작업라인을 나란히 그려서 **언제 어디서 대기(stall)가 생기는지** 정확히 보여줌

---

## 이 파일이 중요한 이유

scheduler.py의 `estimate_schedule_cost`는 **각 타일을 직렬**로 더한 값입니다. 하지만 실제 NPU는 **DMA와 compute가 병렬**로 돌아가서 (ping-pong bank 덕분), 한 타일의 compute 중에 다음 타일의 DMA가 진행됩니다. 이 모듈이 **그 overlap을 정확히 모델링**해서 더 사실적인 추정을 줍니다.

---

## 📚 학술적 배경: 성능 모델링은 시뮬레이터의 1차 가치

### 1. Roofline Model — Williams, Waterman, Patterson (CACM 2009)

> Williams, S., Waterman, A., Patterson, D. — "Roofline: An Insightful Visual Performance Model for Multicore Architectures", *CACM* 52(4), 2009.

Roofline은 한 알고리즘이 **compute-bound**인지 **memory-bound**인지를 시각화하는 모델:

$$\text{Performance} = \min(\text{Peak FLOPS}, \text{Arithmetic Intensity} \times \text{Peak BW})$$

이 cycle simulator는 Roofline의 **시간축 버전**:
- DMA stream cycle = 메모리 BW 제약
- Compute stream cycle = peak FLOPS 제약
- **`max(dma_clock, compute_clock)`** 가 실제 critical path → bottleneck 자동 판별

`stall_cycles > 0` ⇒ memory-bound 구간이 있다는 뜻 ⇒ Roofline의 ridge 왼쪽에 위치.

📖 참고: Williams CACM'09 PDF, [`l6/src/l6_toolchain/roofline.py`](../../../l6/src/l6_toolchain/roofline.py) (정적 Roofline 분석).

### 2. Little's Law의 응용 — 왜 double-buffer가 정확히 N×?

> Little, J.D.C. — "L = λW", *Operations Research* 9(3), 1961.

Single-buffer system: $L = 1$ (한 번에 1 tile만 in-flight) → $\lambda \le 1/W$ 즉 throughput이 latency에 의해 cap.

Double-buffer system: $L = 2$ → $\lambda \le 2/W$ — 단순 buffer 1개 추가로 throughput 2배.

이 simulator의 `compare_sim_schedules`가 보여주는 **speedup ≈ 1.5~2.0×** 가 정확히 이 이론값에 해당. (BW가 perfectly balanced일 때 2.0, imbalanced면 < 2.0)

### 3. CPI/IPC 모델의 ML 가속기 버전

> Hennessy, J., Patterson, D. — *Computer Architecture: A Quantitative Approach* Ch.1.9 "Quantitative Principles".

CPU 성능: $\text{Time} = N_{\text{inst}} \times \text{CPI} \times T_{\text{cycle}}$

이 NPU 성능 (이 시뮬레이터가 측정):
$$\text{Time} = (N_{\text{tile}} \times \text{cycles}_{\text{per\_tile}} + N_{\text{stall}}) \times T_{\text{cycle}}$$

여기서 `cycles_per_tile = 16(preload) + tile_m(execute) + ...` 는 NPU의 "CPI"에 해당. tile당 평균 cycle을 줄이는 것이 utilization 최적화의 본질.

📖 참고: H&P Ch.1.9 (Phase 1), Sze 교과서 Ch.6 (성능 모델).

### 4. Sim-to-Real Gap

이 simulator의 한계 (정직하게 명시):
- ✅ DMA + compute overlap, ping-pong, stall 모델
- ❌ DRAM controller queue contention 모델 없음
- ❌ Cache miss / DDR refresh 무시
- ❌ Clock skew, FPGA timing closure 영향 무시

산업급 cycle-accurate 시뮬레이터 (gem5-X, Sniper)와의 차이는 이 정도의 **fidelity vs speed trade-off**. 이 simulator는 **functional + analytical**, gem5는 **micro-architectural + DRAM**까지.

→ 보통 컴파일러 cost model로는 이 정도가 적정 (auto-tuning에서 1000개 schedule을 빠르게 비교해야 함). cycle-accurate은 검증/최종 평가 단계.

📖 참고: Carlson et al. — "Sniper: Exploring the Level of Abstraction for Scalable and Accurate Parallel Multi-Core Simulation", SC'11.

---

## 큰 그림: 2-Stream 모델

```
시간 →
DMA 스트림:    [DMA tile0 W][DMA tile0 A][DMA tile1 W][DMA tile1 A][DMA tile2 W][...
                                   ↓
Compute 스트림:                  [preload][execute][flush][drain] tile0
                                                   [preload][execute][flush][drain] tile1
                                                                ↑
                                                            여기서 stall 가능
```

**핵심**: tile i의 execute가 끝나기 전에 tile i+1의 DMA가 끝나야 stall 없음.

---

## 자료구조

### `PhaseInterval` (L48-68)

```python
@dataclass(frozen=True)
class PhaseInterval:
    tile_idx: int
    phase: str    # "dma_weight", "dma_activation", "preload", "execute", "flush", "drain", "stall"
    cycle_start: int
    cycle_end: int

    @property
    def duration(self) -> int:
        return max(0, self.cycle_end - self.cycle_start)
```

→ 한 타일의 한 phase가 **언제 시작해서 언제 끝나는지** 기록. 모든 PhaseInterval을 모으면 timeline.

### `SimResult` (L71-105 부근)

```python
@dataclass(frozen=True)
class SimResult:
    total_cycles: int           # 첫 DMA 시작 ~ 마지막 drain 끝
    compute_cycles: int         # active compute (preload+exec+flush+drain) 합
    dma_cycles: int             # active DMA 합
    overlap_cycles: int         # DMA가 compute와 동시에 돈 사이클 수
    stall_cycles: int           # compute가 기다린 사이클
    dma_utilization: float      # dma_active_cycles / total
    compute_utilization: float
    timeline: tuple[PhaseInterval, ...]
```

**`overlap_cycles` 공식**:
```
overlap = compute_cycles + dma_cycles - total_cycles + stall_cycles
```

→ "두 스트림 합 - 직렬 길이 + stall = 진짜 동시 실행된 사이클".

---

## 핵심 함수: `simulate_tile_schedule` (L130 부근)

```python
def simulate_tile_schedule(tiles: Sequence[TilePlanEntry], *, double_buffer: bool = True) -> SimResult:
    timeline = []
    dma_clock = 0       # DMA 스트림 현재 사이클
    compute_clock = 0   # Compute 스트림 현재 사이클
    stall_total = 0

    for tile_idx, tile in enumerate(tiles):
        # 1) DMA 스트림에서 weight + activation 처리
        dma_w_start = dma_clock
        dma_w_end = dma_w_start + DMA_WEIGHT_CYCLES_PER_TILE   # 17 cycles
        timeline.append(PhaseInterval(tile_idx, "dma_weight", dma_w_start, dma_w_end))

        dma_a_start = dma_w_end
        dma_a_end = dma_a_start + (tile.tile_m + DMA_OVERHEAD)
        timeline.append(PhaseInterval(tile_idx, "dma_activation", dma_a_start, dma_a_end))
        dma_clock = dma_a_end

        # 2) Compute 스트림은 DMA 끝나야 시작 가능
        compute_start = max(compute_clock, dma_a_end)
        if compute_start > compute_clock:
            stall = compute_start - compute_clock
            timeline.append(PhaseInterval(tile_idx, "stall", compute_clock, compute_start))
            stall_total += stall

        # 3) preload + execute + flush + drain
        preload_end = compute_start + PRELOAD_CYCLES        # 16
        execute_end = preload_end + tile.tile_m              # tile_m
        flush_end = execute_end + (FLUSH_CYCLES if tile.emit_drain_after else 0)
        drain_end = flush_end + (tile.tile_m if tile.emit_drain_after else 0)

        timeline.append(PhaseInterval(tile_idx, "preload", compute_start, preload_end))
        timeline.append(PhaseInterval(tile_idx, "execute", preload_end, execute_end))
        # ...
        compute_clock = drain_end if tile.emit_drain_after else execute_end

    total = max(dma_clock, compute_clock)
    return SimResult(total_cycles=total, ..., timeline=tuple(timeline))
```

### Double-buffer ON vs OFF

- **ON** (default): tile i+1 DMA가 tile i compute 시작과 동시에 출발 → overlap 가능.
- **OFF**: 직렬 — DMA 끝나야 compute 시작.

---

## `compare_sim_schedules` — 전략 비교

```python
@dataclass(frozen=True)
class SimComparison:
    sequential: SimResult
    double_buffered: SimResult
    speedup: float

def compare_sim_schedules(tiles) -> SimComparison:
    seq = simulate_tile_schedule(tiles, double_buffer=False)
    db = simulate_tile_schedule(tiles, double_buffer=True)
    return SimComparison(
        sequential=seq,
        double_buffered=db,
        speedup=seq.total_cycles / db.total_cycles,
    )
```

→ "이 GEMM에서 double-buffer가 1.7배 빠르다" 같은 결과.

---

## `scheduler.estimate_schedule_cost`와 차이

| | scheduler | cycle_sim |
|---|---|---|
| 모델 | 직렬 합산 | 2-stream 병렬 |
| 출력 | 단일 cycle 수 | timeline + 분해된 metric |
| 정확도 | 추정 (overlap 무시) | 사실적 (DMA/compute 병렬) |
| 비용 | 매우 빠름 | 빠름 (timeline 생성 포함) |
| 용도 | weight_reuse 비교, roofline | bottleneck 정확히 파악 |

→ **scheduler가 fast estimate, cycle_sim이 accurate timeline**.

---

## Timeline 활용

`SimResult.timeline`은 plot 가능:

```python
import matplotlib.pyplot as plt
result = simulate_tile_schedule(tiles)
for iv in result.timeline:
    color = {"dma_weight": "lightblue", "dma_activation": "blue",
             "preload": "yellow", "execute": "green",
             "flush": "orange", "drain": "red", "stall": "gray"}[iv.phase]
    plt.barh(iv.tile_idx, iv.duration, left=iv.cycle_start, color=color)
plt.show()
```

→ **Gantt chart**처럼 사이클 사용 패턴 시각화 → bottleneck 즉시 보임.

---

## 핵심 개념 정리

| 개념 | 의미 |
|---|---|
| **2-stream simulation** | DMA와 compute clock을 별도 추적 |
| **Stall** | compute 스트림이 DMA를 기다리는 시간 |
| **Overlap** | DMA가 compute와 동시 진행된 시간 |
| **Speedup** | sequential vs double_buffered 비율 |
| **Timeline** | tile별 phase 별 시작/끝 → 시각화 가능 |

---

## 🔬 전문가 관점: 시뮬레이터를 어떻게 검증하나?

### Sim-vs-RTL validation pipeline

이 시뮬레이터의 추정이 RTL의 실측 사이클과 일치하는지 검증하는 것이 다음 단계 작업:

```
1) cycle_sim.simulate_tile_schedule(tiles)
       ↓ predicted total_cycles
2) Verilator wave dump (tb_system_top)
       ↓ measured total_cycles
3) error = (predicted - measured) / measured
   목표: < 5% (Roofline-level model에서 표준)
```

만약 error가 크다면:
- DMA latency 상수가 부정확 → measured에서 fitting
- Stall 모델이 ping-pong을 잘못 가정 → RTL과 비교
- Compute overhead (preload, drain)가 실제와 다름

이 작업이 [전문가 로드맵 Phase 3 실습 과제 #2](../전문가_학습_로드맵.md#실습-과제-3) (`cycle_simulator.py` 확장)의 명시적 목표.

### Sweep analysis와 design space exploration

Cycle simulator의 진정한 가치는 **what-if 분석**에 있습니다:

| 변경 변수 | sim 결과의 의미 |
|---|---|
| Tile size 16 → 32 | compute_cycles 증가, DMA-to-compute ratio 변화 |
| Bank 수 4 → 8 | stall 감소 폭 = 추가 BRAM의 ROI |
| Clock 100MHz → 200MHz | DDR BW도 같이 올려야 stall이 안 늘어남 |
| 100 GB/s HBM2 가정 | 거의 모든 GEMM이 compute-bound — SA를 키워야 |

→ 이것이 **하드웨어 설계 결정에 데이터 근거를 제공**하는 컴파일러 cost model의 가치.

📖 참고: NVIDIA NSight Compute (GPU Roofline 분석 도구), AMD Omniperf, Intel VTune.

---

## 📖 더 깊이 공부하기

| 깊이 | 자료 | 어느 부분 |
|---|---|---|
| 🟢 입문 | P&H Ch.1 (Phase 1) | Performance equation, Amdahl |
| 🟢 입문 | H&P Ch.1.9 (Phase 1) | Quantitative Principles |
| 🟡 중급 | Williams CACM'09 Roofline (Phase 5) | Compute/memory-bound 자동 판별 |
| 🟡 중급 | Little 1961 OR | Double-buffer speedup 이론값 |
| 🔴 심화 | Carlson SC'11 Sniper | Cycle-accurate simulator의 trade-off |
| 🔴 심화 | NSight Compute (NVIDIA) | 산업급 GPU Roofline 분석 |
| 🔴 심화 | gem5-X (EPFL) | full-system + DRAM 모델 사례 |

---

## 연습 문제

1. tile 1개로 시뮬하면 stall은? speedup은?
2. M=64, K=64, N=64 (16 tiles)에서 double_buffer ON/OFF 비교 결과는 어느 정도 speedup?
3. 어떤 종류의 GEMM이 stall이 많아지는가? (힌트: tile_m이 작은 경우)
4. timeline에서 stall 패턴을 보면 weight_reuse 전략이 효과 있을지 알 수 있을까?

---

## 다음 파일로 넘어가기

→ [49_auto_tile.md](49_auto_tile.md): `auto_tile.py` — tile_m/tile_k/tile_n 자동 탐색
