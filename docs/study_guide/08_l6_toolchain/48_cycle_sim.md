# 48. `cycle_sim.py` — 2-Stream Double-Buffered 사이클 시뮬레이터

> **파일 위치**: `l6/src/l6_toolchain/cycle_sim.py` (320줄)
> **역할**: DMA 스트림 || Compute 스트림 모델로 **사이클 단위 timeline** 시뮬레이션
> **선수 지식**: [33_scheduler.md](33_scheduler.md) (analytical cost), double-buffering 개념
> **공장 비유**: 공장 일정표 시뮬레이션 — 자재 운반팀과 작업라인을 나란히 그려서 **언제 어디서 대기(stall)가 생기는지** 정확히 보여줌

---

## 이 파일이 중요한 이유

scheduler.py의 `estimate_schedule_cost`는 **각 타일을 직렬**로 더한 값입니다. 하지만 실제 NPU는 **DMA와 compute가 병렬**로 돌아가서 (ping-pong bank 덕분), 한 타일의 compute 중에 다음 타일의 DMA가 진행됩니다. 이 모듈이 **그 overlap을 정확히 모델링**해서 더 사실적인 추정을 줍니다.

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

## 연습 문제

1. tile 1개로 시뮬하면 stall은? speedup은?
2. M=64, K=64, N=64 (16 tiles)에서 double_buffer ON/OFF 비교 결과는 어느 정도 speedup?
3. 어떤 종류의 GEMM이 stall이 많아지는가? (힌트: tile_m이 작은 경우)
4. timeline에서 stall 패턴을 보면 weight_reuse 전략이 효과 있을지 알 수 있을까?

---

## 다음 파일로 넘어가기

→ [49_auto_tile.md](49_auto_tile.md): `auto_tile.py` — tile_m/tile_k/tile_n 자동 탐색
