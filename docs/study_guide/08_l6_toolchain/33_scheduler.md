# 33. `scheduler.py` — 비용 모델 + 타일 재배열

> **파일 위치**: `l6/src/l6_toolchain/scheduler.py` (348줄)
> **역할**: TilePlanEntry 시퀀스에 **사이클 cost**를 매기고, **weight_reuse 전략**으로 재배열, **메모리 예산** 검증
> **선수 지식**: [32_lowering.md](32_lowering.md), Weight-Stationary 개념, NPU 31-cycle pipeline
> **공장 비유**: 일정관리 부서 — 각 작업카드의 소요시간을 산정하고, 같은 금형(weight)을 쓰는 카드들을 묶어서 줄세움

---

## 이 파일이 중요한 이유

이 파일이 있어야 컴파일러가 **"이 GEMM은 몇 사이클 걸린다"** 를 사전 답할 수 있고, **"weight를 재사용하면 몇 사이클 절약"** 같은 트레이드오프를 정량적으로 보여줄 수 있습니다. 컴파일러의 **지능 부분**입니다.

---

## 큰 그림: 4개 섹션

```
┌──────────────────────────────────────────────┐
│ ① Hardware constants (L13-17)                │
│   WEIGHT_PRELOAD_CYCLES=16, FLUSH=35,        │
│   DRAIN_CYCLES_PER_ROW=1, BANK_SWAP=1, ...   │
├──────────────────────────────────────────────┤
│ ② Cycle estimation (L20-138)                 │
│   estimate_tile_cost() / estimate_schedule_cost() │
│   → TileCostEstimate / ScheduleSummary        │
├──────────────────────────────────────────────┤
│ ③ Memory budget (L141-227)                   │
│   analyze_memory_usage() → MemoryUsageReport │
├──────────────────────────────────────────────┤
│ ④ Tile reordering (L230-348)                 │
│   reorder_tiles() — weight_reuse 전략         │
│   compare_schedules() — 전략 간 비교          │
└──────────────────────────────────────────────┘
```

---

## ① 하드웨어 상수 (L13-17)

```python
WEIGHT_PRELOAD_CYCLES = 16      # 16 rows × 1 cycle/row
FLUSH_CYCLES = 35               # RTL pipeline depth
DRAIN_CYCLES_PER_ROW = 1
BANK_SWAP_CYCLES = 1
DMA_OVERHEAD_CYCLES = 1
```

**왜 이 값들**: RTL 코드에서 직접 추출한 cycle-accurate 상수. 예:
- `WEIGHT_PRELOAD_CYCLES=16`: weight를 256개 PE에 로드하는 데 16 사이클 ([06_systolic_array.md](../02_rtl_core/06_systolic_array.md) 참조)
- `FLUSH_CYCLES=35`: skew 15 + array 1 + deskew 15 + 여유 4 = 35 (실측 + 안전 margin)
- `BANK_SWAP_CYCLES=1`: ping-pong bank 전환은 단일 사이클

→ 이 상수가 바뀌면 RTL이 실제로 바뀐 거. **소프트웨어와 하드웨어를 묶는 contract**.

---

## ② Cycle Estimation

### `TileCostEstimate` (L20-45)

```python
@dataclass(frozen=True)
class TileCostEstimate:
    tile: TilePlanEntry
    dma_weight_cycles: int
    dma_activation_cycles: int
    preload_cycles: int
    execute_cycles: int
    flush_cycles: int
    drain_cycles: int
    swap_cycles: int
    weight_reuse: bool = False
    total_cycles: int = 0   # __post_init__에서 자동 계산
```

`__post_init__`이 7개 phase 사이클을 합산해서 `total_cycles`로 채움. **frozen dataclass에서 setattr 우회 트릭** (`object.__setattr__`).

### `estimate_tile_cost` (L60-95) — 한 타일의 사이클 산정

```python
def estimate_tile_cost(tile, *, weight_reuse=False):
    if weight_reuse:
        dma_w = 0; preload = 0          # weight 재사용 시 DMA + preload 생략
    else:
        dma_w = TILE_SIZE + DMA_OVERHEAD_CYCLES   # 16 + 1
        preload = WEIGHT_PRELOAD_CYCLES           # 16

    dma_a = tile.tile_m + DMA_OVERHEAD_CYCLES     # tile_m rows + 1 setup
    execute = tile.tile_m                          # tile_m systolic cycles

    is_last_pass = tile.emit_drain_after
    flush = FLUSH_CYCLES if is_last_pass else 0
    drain = tile.tile_m * DRAIN_CYCLES_PER_ROW if is_last_pass else 0
    swap = 2 * BANK_SWAP_CYCLES                    # weight bank swap + activation bank swap

    return TileCostEstimate(...)
```

**핵심 패턴**: 한 타일의 사이클은
```
total = dma_weight + dma_activation + preload + execute + (flush + drain) if last_pass else 0 + swap
```

**weight_reuse의 효과**: `dma_w + preload = (16+1) + 16 = 33`사이클 절약. 멀티 타일 시 큰 차이.

### `estimate_schedule_cost` (L98-138) — 전체 스케줄

```python
def estimate_schedule_cost(tiles, *, strategy="default"):
    prev_weight_key = None
    for tile in tiles:
        weight_key = (tile.n_tile_base, tile.k_tile_base)
        reuse = prev_weight_key is not None and weight_key == prev_weight_key
        est = estimate_tile_cost(tile, weight_reuse=reuse)
        ...
        prev_weight_key = weight_key
    ...
```

**자동 reuse 감지**: 연속한 두 타일이 같은 `(n_tile_base, k_tile_base)`이면 같은 weight block → reuse.

→ 이게 `weight_reuse` 재배열 전략이 cycle을 줄이는 메커니즘.

---

## ③ Memory Budget Analysis (L141-227)

### `MemoryBudget` (L151-158)

```python
DEFAULT_WEIGHT_SRAM_BYTES = 16 * 16          # 256 B (1 weight bank)
DEFAULT_ACTIVATION_SRAM_BYTES = 16 * 16      # 256 B (1 activation bank)
DEFAULT_ACCUMULATOR_BYTES = 16 * 16 * 4      # 1024 B (16×16 INT32)
```

**주의**: 이 default는 **per-tile** 작은 한도. 실제 NPU SRAM은 16KB×4 (`l6/src/l6_toolchain/dma_scheduler.py`의 `SRAM_BANK_BYTES=64KB`). 이 모듈은 "한 타일이 한 bank에 들어가는가" 만 검사.

### `analyze_memory_usage` (L172-227)

각 타일에 대해:
- weight bytes = 16×16 = 256
- activation bytes = `tile_m`×16 (tail이면 더 작음)
- accumulator bytes = `tile_m`×16×4 (peak 추적)
- 만약 `emit_drain_after`이면 golden 출력도 카운트

위반이 있으면 `violations` 리스트에 모음.

---

## ④ Tile Reordering — 이게 진짜 최적화 (L230-348)

### `reorder_tiles_weight_reuse` (L234-310)

**Default 순서**: `m → n → k` (lowering.py에서 생성)
```
(m=0, n=0, k=0)
(m=0, n=0, k=1)   ← split-K, weight (n=0,k=*) 다름
(m=0, n=1, k=0)   ← weight 새로 로드
(m=0, n=1, k=1)
(m=1, n=0, k=0)   ← 또 weight 새로 로드
...
```

**Reuse 순서**: `n → m → k` (n을 외부 루프로) → 같은 (n, k) weight를 모든 m 타일이 연속 사용
```
(m=0, n=0, k=0)
(m=1, n=0, k=0)   ← 같은 weight 재사용 ✓
(m=0, n=0, k=1)
(m=1, n=0, k=1)   ← 재사용 ✓
(m=0, n=1, k=0)
(m=1, n=1, k=0)   ← 재사용 ✓
...
```

**복잡한 부분**: split-K group integrity 보존 — 같은 (m, n)의 K-패스들은 **반드시 연속**해야 함 (누산기 연속성).

코드 전략:
1. (m, n)별 group 생성 → split-K integrity 보존
2. group을 N-major → M-middle 순서로 재배열

### `compare_schedules` (L320 부근)

두 strategy("default" vs "weight_reuse")의 ScheduleSummary를 나란히 비교 → CLI/inspector가 "X% 빠르다"를 보여주는 데 사용.

### `reorder_tiles` (top-level dispatch)

```python
def reorder_tiles(tiles, *, strategy="default"):
    if strategy == "default":
        return list(tiles)
    elif strategy == "weight_reuse":
        return reorder_tiles_weight_reuse(tiles)
    else:
        raise ValueError(...)
```

**확장점**: 새 전략 (e.g., "activation_reuse", "memory_aware") 추가 시 여기에 분기 추가.

---

## emitter.py / compiler.py와의 연결

```
plan_linear_tiles  →  TilePlanEntry list
                            │
                            ▼
                     reorder_tiles  (scheduler)
                            │
                            ▼
                     estimate_schedule_cost  (scheduler)
                            │
                            ▼
              compiler.py가 manifest에 schedule 정보 기록
                            │
                            ▼
              emitter.py가 reordered 순서로 activation/weight 슬라이스 + golden 생성
```

→ scheduler.py는 **cost 측정 + 전략 선택**, 실제 데이터 변환은 emitter가 담당.

---

## 핵심 개념 정리

| 개념 | 의미 | 어디서 |
|---|---|---|
| **Cycle-accurate cost model** | RTL 상수 기반 사이클 추정 | L13-17 + estimate_tile_cost |
| **Weight reuse 자동 감지** | 같은 (n, k) 연속 → DMA/preload 생략 | estimate_schedule_cost |
| **Split-K integrity** | (m, n) group 내 K-패스 순서 보존 | reorder_tiles_weight_reuse |
| **Memory budget check** | per-tile SRAM 사용량 + peak accumulator | analyze_memory_usage |
| **Strategy dispatch** | "default" / "weight_reuse" / 확장 가능 | reorder_tiles |

---

## 연습 문제

1. 16×16×16 single tile의 `total_cycles`는? (구성: dma_w + dma_a + preload + execute + flush + drain + swap)
2. 32×32×32 GEMM (8 tiles)에서 default vs weight_reuse 전략의 cycle 차이는?
3. weight_reuse 재배열 시 split-K group을 깨뜨리면 어떤 하드웨어 버그가 발생할까? (힌트: 누산기 forwarding)
4. `MemoryBudget`의 default 256B는 너무 작아 보입니다. 실제 NPU 64KB bank와 어떻게 다른지 설명. (힌트: 이 모듈은 per-tile만 봄)

---

## 다음 파일로 넘어가기

→ [31_fusion.md](31_fusion.md): `fusion.py` — Linear+ReLU, Conv+BN+ReLU 같은 op 패턴 합치기 (다음 batch)
또는 → [34_dma_scheduler.md](34_dma_scheduler.md): tile schedule을 DMA command sequence로 변환
