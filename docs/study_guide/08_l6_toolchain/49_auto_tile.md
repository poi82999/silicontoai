# 49. `auto_tile.py` — Tile Size 자동 탐색

> **파일 위치**: `l6/src/l6_toolchain/auto_tile.py` (414줄)
> **역할**: 주어진 (M, K, N)에 대해 **최적의 (tile_m, tile_k, tile_n)** 조합 탐색
> **선수 지식**: [33_scheduler.md](33_scheduler.md), [47_memory_planner.md](47_memory_planner.md)
> **공장 비유**: 작업 묶음 사이즈 자동 선정 — "256개 주문을 16개씩 묶을지, 32개씩 묶을지" 자동 결정

---

## 이 파일이 중요한 이유

`lowering.py`의 `TILE_SIZE=16`은 **하드웨어 PE 어레이 크기**(고정). 하지만 그 위에 **logical tile** (16의 배수로 묶음)을 어떻게 잡느냐는 자유도가 있습니다. 같은 (M, K, N) GEMM이라도 logical tile 사이즈에 따라 사이클 수가 크게 달라집니다.

---

## 큰 그림

```
입력: (M, K, N) = (256, 256, 256)
       │
       ▼
search_tile_sizes
       │
       ▼ Cartesian product
   tile_m ∈ {4, 8, 16, 32, 48, 64, 128}    (실제 ≤ M만)
   tile_k ∈ {16, 32, 48, 64, 128}          (실제 ≤ K만)
   tile_n ∈ {16, 32, 48, 64}                (실제 ≤ N만)
       │
       ▼ 각 후보에 대해
   ① SRAM budget 체크 (per_bank ≤ 64KB / 2)
   ② 사이클 추정 (analytical, weight_reuse 반영)
       │
       ▼ 최소 사이클 선택
   AutoTileResult(best, all_candidates, sram_budget)
```

---

## 자료구조

### `TileCandidate`

```python
@dataclass(frozen=True)
class TileCandidate:
    tile_m: int
    tile_k: int
    tile_n: int
    sram_per_bank_bytes: int      # 한 bank 사용량
    estimated_cycles: int          # 분석적 추정
    fits_budget: bool              # SRAM 예산 통과
```

### `AutoTileResult`

```python
@dataclass(frozen=True)
class AutoTileResult:
    m: int; k: int; n: int
    best: TileCandidate                       # 최소 cycle 후보
    all_candidates: tuple[TileCandidate, ...]  # 모든 후보 (예산 통과)
    sram_budget_bytes: int                    # 입력 예산
```

---

## SRAM Budget 모델

```python
def _sram_per_bank(tile_m, tile_k, tile_n):
    weight_bytes = tile_k * tile_n * 1            # INT8
    activation_bytes = tile_m * tile_k * 1        # INT8
    output_bytes = tile_m * tile_n * 4            # INT32 accumulator
    return weight_bytes + activation_bytes + output_bytes

def _is_feasible(per_bank, sram_budget):
    # ping-pong이라 2 bank 필요 → per_bank * 2 ≤ budget
    return per_bank * 2 <= sram_budget
```

**기본 예산**: `SRAM_BANK_BYTES = 64KB` (memory_planner에서 import) → `2 × 64KB = 128KB` 가용 → per_bank 64KB.

**제약 예시**: `tile_m=128, tile_k=128, tile_n=64` → `weight=8192 + activation=16384 + output=32768 = 57344 B` → 56KB → 통과.

---

## Cycle Estimation (analytical)

```python
def _estimate_total_cycles(M, K, N, tile_m, tile_k, tile_n):
    n_tile_count = math.ceil(N / tile_n)
    k_tile_count = math.ceil(K / tile_k)
    m_tile_count = math.ceil(M / tile_m)

    # N-major weight reuse: 같은 weight를 여러 m-row에서 재사용
    # 한 weight 그룹 (n_block × k_pass) 안에서 m_tile_count 만큼 reuse
    weight_loads_total = n_tile_count * k_tile_count
    activation_loads_total = m_tile_count * n_tile_count * k_tile_count

    weight_cycles = weight_loads_total * (TILE_SIZE + DMA_OVERHEAD_CYCLES)
    activation_cycles = activation_loads_total * (tile_m + DMA_OVERHEAD_CYCLES)
    preload_cycles = weight_loads_total * WEIGHT_PRELOAD_CYCLES
    execute_cycles = activation_loads_total * tile_m
    flush_drain_cycles = m_tile_count * n_tile_count * (FLUSH_CYCLES + tile_m * DRAIN_CYCLES_PER_ROW)
    swap_cycles = activation_loads_total * 2 * BANK_SWAP_CYCLES

    return weight_cycles + activation_cycles + preload_cycles + execute_cycles + flush_drain_cycles + swap_cycles
```

**핵심 가정**: weight_reuse N-major ordering이 적용된다고 가정 → weight DMA는 `n_tile_count × k_tile_count`만, activation DMA는 모든 (m, n, k) 조합.

→ scheduler.py의 cost model과 일관 (가능하면 cycle_sim 시뮬도 가능하지만 대량 후보엔 너무 느림).

---

## 핵심 함수

### `search_tile_sizes`

```python
def search_tile_sizes(m, k, n, *, sram_budget_bytes=SRAM_TOTAL_BYTES) -> AutoTileResult:
    candidates = []
    for tm in TILE_M_CANDIDATES:
        if tm > m: continue
        for tk in TILE_K_CANDIDATES:
            if tk > k: continue
            for tn in TILE_N_CANDIDATES:
                if tn > n: continue
                per_bank = _sram_per_bank(tm, tk, tn)
                fits = _is_feasible(per_bank, sram_budget_bytes)
                cycles = _estimate_total_cycles(m, k, n, tm, tk, tn)
                candidates.append(TileCandidate(
                    tile_m=tm, tile_k=tk, tile_n=tn,
                    sram_per_bank_bytes=per_bank,
                    estimated_cycles=cycles,
                    fits_budget=fits,
                ))

    feasible = [c for c in candidates if c.fits_budget]
    if not feasible:
        raise ValueError("No tile candidate fits the SRAM budget.")

    best = min(feasible, key=lambda c: c.estimated_cycles)
    return AutoTileResult(m=m, k=k, n=n, best=best, all_candidates=tuple(candidates), sram_budget_bytes=sram_budget_bytes)
```

### `get_optimal_tile` (편의 wrapper)

```python
def get_optimal_tile(m, k, n) -> tuple[int, int, int]:
    result = search_tile_sizes(m, k, n)
    return (result.best.tile_m, result.best.tile_k, result.best.tile_n)
```

→ 한 줄로 `(tile_m, tile_k, tile_n)` 반환.

---

## 사용 예시

```python
from l6_toolchain.api import search_tile_sizes, get_optimal_tile

# 256×256×256 GEMM
tm, tk, tn = get_optimal_tile(256, 256, 256)
print(f"Best tile: {tm}×{tk}×{tn}")

result = search_tile_sizes(256, 256, 256)
print(f"Cycles: {result.best.estimated_cycles}")
print(f"SRAM per bank: {result.best.sram_per_bank_bytes} bytes")
print(f"Total candidates evaluated: {len(result.all_candidates)}")
print(f"Feasible: {sum(1 for c in result.all_candidates if c.fits_budget)}")
```

---

## compiler.py와 통합 (잠재적)

**현재 상태**: `compiler.py`는 `TILE_SIZE=16` 하드코딩. `auto_tile`은 별도 사용.

**향후 통합**: `CompilerOptions.tile_search="auto"`이면 `search_tile_sizes` 호출 → logical tile 결정 → lowering에 전달. 현재는 manual.

---

## 핵심 개념 정리

| 개념 | 의미 |
|---|---|
| **Physical vs logical tile** | 16×16 PE 고정 vs logical grouping 자유 |
| **Search space** | tile_m × tile_k × tile_n cartesian (~140 후보) |
| **SRAM budget 검증** | 2 × per_bank ≤ 128KB |
| **Analytical estimation** | scheduler 상수 기반, weight_reuse 가정 |
| **N-major reuse 가정** | weight_loads_total = n × k (m이 곱해지지 않음) |

---

## 연습 문제

1. (16, 16, 16)의 best tile은? (당연히 (16, 16, 16))
2. (1024, 1024, 1024)에서 best tile은 어떤 형태? tile_m이 클수록 좋을까?
3. SRAM budget을 16KB로 제한하면 어떤 후보들이 탈락? best가 어떻게 변하는가?
4. analytical estimate vs cycle_sim 결과를 비교해 보세요. 차이가 큰 경우는 어떤 케이스?

---

## 🎉 Phase 8 완료!

23개 L6 toolchain 모듈을 모두 학습했습니다.

```
common.py             ir.py              tracer.py
frontend.py           fusion.py          lowering.py
scheduler.py          dma_scheduler.py   emitter.py
validator.py          compiler.py        replay_bridge.py
roofline.py           roofline_profiles.py   inspector.py
api.py                linear_export.py   __main__.py
__init__.py           quantize.py        memory_planner.py
cycle_sim.py          auto_tile.py
```

→ Phase 7 (Test bench, UVM, Verilator C++)으로 이동: [tb/](../07_tb/)
또는 Phase 9 (Host driver): [host/](../09_host/)
또는 Phase 6 (FPGA wrappers): [fpga/](../06_rtl_fpga/)
