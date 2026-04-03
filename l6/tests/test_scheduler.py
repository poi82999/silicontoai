from __future__ import annotations

from dataclasses import dataclass

from l6_toolchain.api import (
    MemoryBudget,
    ScheduleComparison,
    TilePlanEntry,
    analyze_memory_usage,
    compare_schedules,
    estimate_schedule_cost,
    estimate_tile_cost,
    plan_linear_tiles,
    reorder_tiles,
)
from l6_toolchain.scheduler import (
    BANK_SWAP_CYCLES,
    DMA_OVERHEAD_CYCLES,
    FLUSH_CYCLES,
    WEIGHT_PRELOAD_CYCLES,
)


@dataclass
class Shape:
    m: int
    k: int
    n: int


# ---------------------------------------------------------------------------
# M4-1: Cost model tests
# ---------------------------------------------------------------------------


def test_single_tile_cost_matches_analytical_formula() -> None:
    """A single 16×16×16 tile with no weight reuse."""
    tiles = plan_linear_tiles(Shape(m=16, k=16, n=16))
    assert len(tiles) == 1

    est = estimate_tile_cost(tiles[0], weight_reuse=False)

    # DMA weight: 16 + 1 = 17
    assert est.dma_weight_cycles == 16 + DMA_OVERHEAD_CYCLES
    # DMA activation: 16 + 1 = 17
    assert est.dma_activation_cycles == 16 + DMA_OVERHEAD_CYCLES
    # Preload: 16
    assert est.preload_cycles == WEIGHT_PRELOAD_CYCLES
    # Execute: seq_len = tile_m = 16
    assert est.execute_cycles == 16
    # Flush + drain (last pass): 35 + 16
    assert est.flush_cycles == FLUSH_CYCLES
    assert est.drain_cycles == 16
    # Swap: 2
    assert est.swap_cycles == 2 * BANK_SWAP_CYCLES
    # Total: 17 + 17 + 16 + 16 + 35 + 16 + 2 = 119
    assert est.total_cycles == 17 + 17 + 16 + 16 + 35 + 16 + 2


def test_weight_reuse_skips_dma_and_preload() -> None:
    """With weight reuse, DMA-weight and preload should be zero."""
    tile = TilePlanEntry(
        m_tile_base=0, n_tile_base=0, k_tile_base=0,
        tile_m=16, tile_k=16, tile_n=16,
        k_pass_index=0, k_tile_count=1,
        acc_clear=True, emit_drain_after=True,
    )
    est = estimate_tile_cost(tile, weight_reuse=True)

    assert est.dma_weight_cycles == 0
    assert est.preload_cycles == 0
    assert est.weight_reuse is True
    assert est.total_cycles < estimate_tile_cost(tile, weight_reuse=False).total_cycles


def test_splitk_intermediate_pass_has_no_flush_drain() -> None:
    """A split-K intermediate pass (not final) should have no flush/drain."""
    tile = TilePlanEntry(
        m_tile_base=0, n_tile_base=0, k_tile_base=0,
        tile_m=16, tile_k=16, tile_n=16,
        k_pass_index=0, k_tile_count=2,
        acc_clear=True, emit_drain_after=False,
    )
    est = estimate_tile_cost(tile)
    assert est.flush_cycles == 0
    assert est.drain_cycles == 0


def test_tail_tile_cost_reflects_smaller_tile_m() -> None:
    """Tail tile (tile_m=4) should have lower execute and drain cost."""
    tile = TilePlanEntry(
        m_tile_base=16, n_tile_base=0, k_tile_base=0,
        tile_m=4, tile_k=16, tile_n=16,
        k_pass_index=0, k_tile_count=1,
        acc_clear=True, emit_drain_after=True,
    )
    est = estimate_tile_cost(tile)
    assert est.execute_cycles == 4
    assert est.drain_cycles == 4
    assert est.dma_activation_cycles == 4 + DMA_OVERHEAD_CYCLES


def test_schedule_cost_detects_weight_reuse_in_sequence() -> None:
    """Two consecutive tiles sharing (n_tile_base, k_tile_base) → reuse."""
    tile_a = TilePlanEntry(
        m_tile_base=0, n_tile_base=0, k_tile_base=0,
        tile_m=16, tile_k=16, tile_n=16,
        k_pass_index=0, k_tile_count=1,
        acc_clear=True, emit_drain_after=True,
    )
    tile_b = TilePlanEntry(
        m_tile_base=16, n_tile_base=0, k_tile_base=0,
        tile_m=16, tile_k=16, tile_n=16,
        k_pass_index=0, k_tile_count=1,
        acc_clear=True, emit_drain_after=True,
    )
    summary = estimate_schedule_cost([tile_a, tile_b])

    assert summary.weight_reuse_count == 1
    assert summary.weight_reload_count == 1
    assert summary.tiles[1].weight_reuse is True


# ---------------------------------------------------------------------------
# M4-2: Memory budget tests
# ---------------------------------------------------------------------------


def test_single_tile_fits_default_budget() -> None:
    """A single 16×16 tile should fit the default SRAM budget."""
    tiles = plan_linear_tiles(Shape(m=16, k=16, n=16))
    report = analyze_memory_usage(tiles)

    assert report.fits_in_budget is True
    assert report.total_weight_bytes == 256  # 16 × 16
    assert report.total_activation_bytes == 256  # 16 × 16
    assert report.peak_accumulator_bytes == 16 * 16 * 4  # 1024
    assert len(report.violations) == 0


def test_memory_report_tracks_multi_tile_totals() -> None:
    """32×32×32 produces 8 tiles; totals should sum correctly."""
    tiles = plan_linear_tiles(Shape(m=32, k=32, n=32))
    assert len(tiles) == 8  # 2×2×2
    report = analyze_memory_usage(tiles)

    assert report.fits_in_budget is True
    # Each tile: 256B weight + 256B activation (since all tile_m=16)
    assert report.total_weight_bytes == 8 * 256
    assert report.total_activation_bytes == 8 * 256


def test_custom_budget_detects_violation() -> None:
    """A very small budget should cause violations."""
    tiles = plan_linear_tiles(Shape(m=16, k=16, n=16))
    tiny_budget = MemoryBudget(
        weight_sram_bytes=100,  # too small for 256B
        activation_sram_bytes=100,
        accumulator_bytes=100,
    )
    report = analyze_memory_usage(tiles, budget=tiny_budget)

    assert report.fits_in_budget is False
    assert len(report.violations) > 0


# ---------------------------------------------------------------------------
# M4-3: Tile reordering tests
# ---------------------------------------------------------------------------


def test_reorder_default_preserves_original_order() -> None:
    """'default' strategy should return tiles in the same order."""
    tiles = plan_linear_tiles(Shape(m=32, k=16, n=32))
    reordered = reorder_tiles(tiles, strategy="default")
    assert reordered == tiles


def test_reorder_weight_reuse_changes_order_for_multi_tile() -> None:
    """Weight-reuse reordering should differ from default for 32×16×32."""
    tiles = plan_linear_tiles(Shape(m=32, k=16, n=32))
    reordered = reorder_tiles(tiles, strategy="weight_reuse")

    # Default order: (m=0,n=0), (m=0,n=16), (m=16,n=0), (m=16,n=16)
    # Weight-reuse: (m=0,n=0), (m=16,n=0), (m=0,n=16), (m=16,n=16)
    assert reordered != tiles
    assert reordered[0].m_tile_base == 0 and reordered[0].n_tile_base == 0
    assert reordered[1].m_tile_base == 16 and reordered[1].n_tile_base == 0
    assert reordered[2].m_tile_base == 0 and reordered[2].n_tile_base == 16
    assert reordered[3].m_tile_base == 16 and reordered[3].n_tile_base == 16


def test_reorder_weight_reuse_preserves_splitk_group_integrity() -> None:
    """Split-K passes for the same (m, n) must stay together after reorder."""
    tiles = plan_linear_tiles(Shape(m=32, k=32, n=32))
    reordered = reorder_tiles(tiles, strategy="weight_reuse")

    # Check that every (m, n) group has contiguous k_pass_index=0,1
    i = 0
    while i < len(reordered):
        tile = reordered[i]
        if tile.k_tile_count > 1:
            for k in range(tile.k_tile_count):
                assert reordered[i + k].k_pass_index == k
                assert reordered[i + k].m_tile_base == tile.m_tile_base
                assert reordered[i + k].n_tile_base == tile.n_tile_base
            i += tile.k_tile_count
        else:
            i += 1


def test_reorder_preserves_tile_set() -> None:
    """Reordering must not add, remove, or modify any tiles."""
    tiles = plan_linear_tiles(Shape(m=48, k=32, n=64))
    reordered = reorder_tiles(tiles, strategy="weight_reuse")

    assert len(reordered) == len(tiles)
    assert sorted(tiles, key=lambda t: (t.m_tile_base, t.n_tile_base, t.k_tile_base)) == \
           sorted(reordered, key=lambda t: (t.m_tile_base, t.n_tile_base, t.k_tile_base))


# ---------------------------------------------------------------------------
# M4-4: Schedule comparison tests
# ---------------------------------------------------------------------------


def test_weight_reuse_improves_32x16x32() -> None:
    """For 32×16×32, weight-reuse order should save cycles over default."""
    comparison = compare_schedules(Shape(m=32, k=16, n=32))

    assert comparison.cycle_savings > 0
    assert comparison.speedup_ratio > 1.0
    assert comparison.weight_reuse_gain > 0
    assert comparison.optimized.strategy == "weight_reuse"
    assert comparison.baseline.strategy == "default"


def test_single_tile_no_improvement() -> None:
    """For a single tile, both strategies should be identical."""
    comparison = compare_schedules(Shape(m=16, k=16, n=16))

    assert comparison.cycle_savings == 0
    assert comparison.speedup_ratio == 1.0
    assert comparison.weight_reuse_gain == 0


def test_large_shape_reuse_scales() -> None:
    """64×16×64: 4×4 output tiles → weight reuse should be significant."""
    comparison = compare_schedules(Shape(m=64, k=16, n=64))

    # 16 tile groups: default M→N→K has 0 reuse between groups
    # weight-reuse N→M→K: each N column gets 4 consecutive M tiles → 3 reuses per column × 4 columns = 12
    assert comparison.weight_reuse_gain >= 12
    assert comparison.speedup_ratio > 1.0


def test_splitk_comparison_still_works() -> None:
    """Split-K shapes should work with both strategies."""
    comparison = compare_schedules(Shape(m=32, k=48, n=32))

    # Should not crash, both should produce valid schedules
    assert comparison.baseline.total_cycles > 0
    assert comparison.optimized.total_cycles > 0
    assert comparison.optimized.total_cycles <= comparison.baseline.total_cycles


def test_reorder_invalid_strategy_raises() -> None:
    """Passing an invalid strategy should raise ValueError."""
    import pytest
    tiles = plan_linear_tiles(Shape(m=16, k=16, n=16))
    with pytest.raises(ValueError, match="Unknown tile reorder strategy"):
        reorder_tiles(tiles, strategy="nonexistent")
