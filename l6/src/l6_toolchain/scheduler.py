from __future__ import annotations

from dataclasses import dataclass
from typing import Sequence

from .lowering import TILE_SIZE, TilePlanEntry, plan_linear_tiles, SupportsLinearShape


# ---------------------------------------------------------------------------
# M4-1: Analytical cost model — hardware timing constants from RTL
# ---------------------------------------------------------------------------

WEIGHT_PRELOAD_CYCLES = 16      # 16 rows × 1 cycle/row
FLUSH_CYCLES = 35               # RTL dfx_runtime / flush pipeline depth
DRAIN_CYCLES_PER_ROW = 1        # 1 cycle per drain address
BANK_SWAP_CYCLES = 1            # single-cycle bank swap
DMA_OVERHEAD_CYCLES = 1         # per-burst DMA setup overhead


@dataclass(frozen=True)
class TileCostEstimate:
    """Cycle-accurate estimate for one tile execution."""
    tile: TilePlanEntry
    dma_weight_cycles: int
    dma_activation_cycles: int
    preload_cycles: int
    execute_cycles: int
    flush_cycles: int
    drain_cycles: int
    swap_cycles: int
    weight_reuse: bool = False
    total_cycles: int = 0

    def __post_init__(self) -> None:
        if self.total_cycles == 0:
            total = (
                self.dma_weight_cycles
                + self.dma_activation_cycles
                + self.preload_cycles
                + self.execute_cycles
                + self.flush_cycles
                + self.drain_cycles
                + self.swap_cycles
            )
            object.__setattr__(self, "total_cycles", total)


@dataclass(frozen=True)
class ScheduleSummary:
    """Summary of a complete tile schedule with cost annotations."""
    tiles: tuple[TileCostEstimate, ...]
    total_cycles: int
    total_dma_cycles: int
    total_compute_cycles: int
    weight_reuse_count: int
    weight_reload_count: int
    strategy: str


def estimate_tile_cost(
    tile: TilePlanEntry,
    *,
    weight_reuse: bool = False,
) -> TileCostEstimate:
    """Estimate cycle cost for a single tile pass.

    When ``weight_reuse`` is True, we assume the previous tile used the same
    weights so DMA-weight and preload are skipped.
    """
    if weight_reuse:
        dma_w = 0
        preload = 0
    else:
        dma_w = TILE_SIZE + DMA_OVERHEAD_CYCLES       # 16 weight rows + setup
        preload = WEIGHT_PRELOAD_CYCLES

    dma_a = tile.tile_m + DMA_OVERHEAD_CYCLES          # tile_m activation rows + setup
    execute = tile.tile_m                               # seq_len = tile_m systolic cycles
    swap = 2 * BANK_SWAP_CYCLES                         # two swaps per pass

    is_last_pass = tile.emit_drain_after
    flush = FLUSH_CYCLES if is_last_pass else 0
    drain = tile.tile_m * DRAIN_CYCLES_PER_ROW if is_last_pass else 0

    return TileCostEstimate(
        tile=tile,
        dma_weight_cycles=dma_w,
        dma_activation_cycles=dma_a,
        preload_cycles=preload,
        execute_cycles=execute,
        flush_cycles=flush,
        drain_cycles=drain,
        swap_cycles=swap,
        weight_reuse=weight_reuse,
    )


def estimate_schedule_cost(
    tiles: Sequence[TilePlanEntry],
    *,
    strategy: str = "default",
) -> ScheduleSummary:
    """Estimate total cost for an ordered sequence of tiles.

    Automatically detects weight reuse: consecutive tiles sharing the same
    ``(n_tile_base, k_tile_base)`` skip weight DMA and preload.
    """
    estimates: list[TileCostEstimate] = []
    prev_weight_key: tuple[int, int] | None = None
    reuse_count = 0
    reload_count = 0

    for tile in tiles:
        weight_key = (tile.n_tile_base, tile.k_tile_base)
        reuse = prev_weight_key is not None and weight_key == prev_weight_key

        est = estimate_tile_cost(tile, weight_reuse=reuse)
        estimates.append(est)

        if reuse:
            reuse_count += 1
        else:
            reload_count += 1
        prev_weight_key = weight_key

    total = sum(e.total_cycles for e in estimates)
    total_dma = sum(e.dma_weight_cycles + e.dma_activation_cycles for e in estimates)
    total_compute = sum(e.preload_cycles + e.execute_cycles + e.flush_cycles for e in estimates)

    return ScheduleSummary(
        tiles=tuple(estimates),
        total_cycles=total,
        total_dma_cycles=total_dma,
        total_compute_cycles=total_compute,
        weight_reuse_count=reuse_count,
        weight_reload_count=reload_count,
        strategy=strategy,
    )


# ---------------------------------------------------------------------------
# M4-2: Memory budget tracker
# ---------------------------------------------------------------------------

# Hardware memory regions (bytes)
DEFAULT_WEIGHT_SRAM_BYTES = 16 * 16      # one 16×16 int8 weight bank
DEFAULT_ACTIVATION_SRAM_BYTES = 16 * 16  # one 16×16 int8 activation bank
DEFAULT_ACCUMULATOR_BYTES = 16 * 16 * 4  # 16 rows × 16 lanes × 4 bytes (int32)


@dataclass(frozen=True)
class MemoryBudget:
    """SRAM budget constraints for the NPU."""
    weight_sram_bytes: int = DEFAULT_WEIGHT_SRAM_BYTES
    activation_sram_bytes: int = DEFAULT_ACTIVATION_SRAM_BYTES
    accumulator_bytes: int = DEFAULT_ACCUMULATOR_BYTES
    external_weight_bytes: int = 0      # total DMA source region for weights
    external_activation_bytes: int = 0  # total DMA source region for activations


@dataclass(frozen=True)
class MemoryUsageReport:
    """Per-tile-group memory analysis."""
    total_weight_bytes: int
    total_activation_bytes: int
    total_golden_bytes: int
    peak_accumulator_bytes: int
    fits_in_budget: bool
    violations: tuple[str, ...] = ()


def analyze_memory_usage(
    tiles: Sequence[TilePlanEntry],
    *,
    budget: MemoryBudget | None = None,
) -> MemoryUsageReport:
    """Analyze memory usage for a tile schedule."""
    if budget is None:
        budget = MemoryBudget()

    total_weight_bytes = 0
    total_activation_bytes = 0
    total_golden_bytes = 0
    peak_accum = 0
    violations: list[str] = []

    for tile in tiles:
        # Per-pass: weight block is always 16×16 int8 (padded)
        w_bytes = TILE_SIZE * TILE_SIZE
        # Per-pass: activation block is tile_m × 16 int8 (padded to 16 cols)
        a_bytes = tile.tile_m * TILE_SIZE
        total_weight_bytes += w_bytes
        total_activation_bytes += a_bytes

        # Accumulator: tile_m rows × 16 lanes × 4 bytes
        accum = tile.tile_m * TILE_SIZE * 4
        peak_accum = max(peak_accum, accum)

        if tile.emit_drain_after:
            # Golden output: tile_m rows × 16 lanes × 4 bytes
            total_golden_bytes += tile.tile_m * TILE_SIZE * 4

        # Check per-tile SRAM constraints
        if w_bytes > budget.weight_sram_bytes:
            violations.append(
                f"Tile (m={tile.m_tile_base},n={tile.n_tile_base},k={tile.k_tile_base}): "
                f"weight {w_bytes}B exceeds SRAM {budget.weight_sram_bytes}B"
            )
        if a_bytes > budget.activation_sram_bytes:
            violations.append(
                f"Tile (m={tile.m_tile_base},n={tile.n_tile_base},k={tile.k_tile_base}): "
                f"activation {a_bytes}B exceeds SRAM {budget.activation_sram_bytes}B"
            )

    if peak_accum > budget.accumulator_bytes:
        violations.append(
            f"Peak accumulator {peak_accum}B exceeds budget {budget.accumulator_bytes}B"
        )

    return MemoryUsageReport(
        total_weight_bytes=total_weight_bytes,
        total_activation_bytes=total_activation_bytes,
        total_golden_bytes=total_golden_bytes,
        peak_accumulator_bytes=peak_accum,
        fits_in_budget=len(violations) == 0,
        violations=tuple(violations),
    )


# ---------------------------------------------------------------------------
# M4-3: Tile reordering pass
# ---------------------------------------------------------------------------

def reorder_tiles_weight_reuse(tiles: Sequence[TilePlanEntry]) -> list[TilePlanEntry]:
    """Reorder tiles to maximize weight reuse (N-major, M-middle, K-inner).

    In a weight-stationary architecture, consecutive tiles with the same
    (n_tile_base, k_tile_base) can skip weight DMA + preload, saving ~33 cycles
    per tile. This reorders from the default M→N→K to N→M→K order so that
    all M-tiles sharing the same weight block execute consecutively.
    """
    # Group tiles by (n_tile_base, k_pass_index) — these share the same weight block
    # Sort: primary by n_tile_base, secondary by m_tile_base, tertiary by k_pass_index
    # But k_pass_index must stay grouped per (m, n) for split-K correctness.
    #
    # Strategy: group by (m_tile_base, n_tile_base), then reorder groups to N→M order.

    # Collect split-K groups: all k-passes for a given (m, n) must stay together
    groups: dict[tuple[int, int], list[TilePlanEntry]] = {}
    for tile in tiles:
        key = (tile.m_tile_base, tile.n_tile_base)
        groups.setdefault(key, [])
        groups[key].append(tile)

    # Sort each group by k_pass_index (should already be sorted, but be safe)
    for key in groups:
        groups[key].sort(key=lambda t: t.k_pass_index)

    # Reorder groups: N-major (n first), then M
    sorted_keys = sorted(groups.keys(), key=lambda k: (k[1], k[0]))  # (n, m)

    result: list[TilePlanEntry] = []
    for key in sorted_keys:
        result.extend(groups[key])

    return result


def reorder_tiles(
    tiles: Sequence[TilePlanEntry],
    *,
    strategy: str = "weight_reuse",
) -> list[TilePlanEntry]:
    """Reorder tiles according to the specified strategy.

    Strategies:
        - "default": keep original M→N→K order (no-op)
        - "weight_reuse": N→M→K order to maximize weight reuse
    """
    if strategy == "default":
        return list(tiles)
    if strategy == "weight_reuse":
        return reorder_tiles_weight_reuse(tiles)
    raise ValueError(f"Unknown tile reorder strategy: {strategy}")


# ---------------------------------------------------------------------------
# M4-4: Schedule comparison
# ---------------------------------------------------------------------------

@dataclass(frozen=True)
class ScheduleComparison:
    """Side-by-side comparison of two scheduling strategies."""
    baseline: ScheduleSummary
    optimized: ScheduleSummary
    cycle_savings: int
    speedup_ratio: float
    weight_reuse_gain: int


def compare_schedules(
    spec: SupportsLinearShape,
    *,
    baseline_strategy: str = "default",
    optimized_strategy: str = "weight_reuse",
) -> ScheduleComparison:
    """Plan tiles, apply two strategies, and compare costs."""
    base_tiles = plan_linear_tiles(spec)

    baseline_order = reorder_tiles(base_tiles, strategy=baseline_strategy)
    optimized_order = reorder_tiles(base_tiles, strategy=optimized_strategy)

    baseline_cost = estimate_schedule_cost(baseline_order, strategy=baseline_strategy)
    optimized_cost = estimate_schedule_cost(optimized_order, strategy=optimized_strategy)

    savings = baseline_cost.total_cycles - optimized_cost.total_cycles
    speedup = baseline_cost.total_cycles / optimized_cost.total_cycles if optimized_cost.total_cycles > 0 else 1.0
    reuse_gain = optimized_cost.weight_reuse_count - baseline_cost.weight_reuse_count

    return ScheduleComparison(
        baseline=baseline_cost,
        optimized=optimized_cost,
        cycle_savings=savings,
        speedup_ratio=round(speedup, 4),
        weight_reuse_gain=reuse_gain,
    )


__all__ = [
    "BANK_SWAP_CYCLES",
    "DEFAULT_ACCUMULATOR_BYTES",
    "DEFAULT_ACTIVATION_SRAM_BYTES",
    "DEFAULT_WEIGHT_SRAM_BYTES",
    "DMA_OVERHEAD_CYCLES",
    "FLUSH_CYCLES",
    "DRAIN_CYCLES_PER_ROW",
    "MemoryBudget",
    "MemoryUsageReport",
    "ScheduleComparison",
    "ScheduleSummary",
    "TileCostEstimate",
    "WEIGHT_PRELOAD_CYCLES",
    "analyze_memory_usage",
    "compare_schedules",
    "estimate_schedule_cost",
    "estimate_tile_cost",
    "reorder_tiles",
]
