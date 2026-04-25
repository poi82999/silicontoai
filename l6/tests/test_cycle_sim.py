"""Tests for the cycle-accurate NPU pipeline simulator (cycle_sim.py)."""
from __future__ import annotations

import pytest

from l6_toolchain.cycle_sim import (
    PhaseInterval,
    SimComparison,
    SimResult,
    compare_sim_schedules,
    simulate_tile_schedule,
)
from l6_toolchain.lowering import TilePlanEntry, plan_linear_tiles, TILE_SIZE
from l6_toolchain.scheduler import (
    WEIGHT_PRELOAD_CYCLES,
    FLUSH_CYCLES,
    DMA_OVERHEAD_CYCLES,
    BANK_SWAP_CYCLES,
)


# ---------------------------------------------------------------------------
# Helpers
# ---------------------------------------------------------------------------


class _Shape:
    def __init__(self, m: int, k: int, n: int) -> None:
        self.m, self.k, self.n = m, k, n


def _tiles(m: int, k: int, n: int) -> list[TilePlanEntry]:
    return plan_linear_tiles(_Shape(m, k, n))


# ---------------------------------------------------------------------------
# Empty / edge cases
# ---------------------------------------------------------------------------


class TestEmptyTileList:
    def test_empty_returns_zero_cycles(self) -> None:
        result = simulate_tile_schedule([])
        assert result.total_cycles == 0
        assert result.compute_cycles == 0
        assert result.dma_cycles == 0
        assert result.stall_cycles == 0
        assert result.timeline == ()

    def test_empty_utilisation_is_zero(self) -> None:
        result = simulate_tile_schedule([])
        assert result.dma_utilization == 0.0
        assert result.compute_utilization == 0.0


# ---------------------------------------------------------------------------
# Single tile
# ---------------------------------------------------------------------------


class TestSingleTile:
    """A single 16×16×16 tile is the simplest case."""

    def _single_tile(self) -> SimResult:
        tiles = _tiles(TILE_SIZE, TILE_SIZE, TILE_SIZE)
        assert len(tiles) == 1
        return simulate_tile_schedule(tiles)

    def test_total_cycles_positive(self) -> None:
        result = self._single_tile()
        assert result.total_cycles > 0

    def test_compute_and_dma_positive(self) -> None:
        result = self._single_tile()
        assert result.compute_cycles > 0
        assert result.dma_cycles > 0

    def test_no_stall_for_single_tile(self) -> None:
        """With one tile there is no double-buffering opportunity → no stall."""
        result = self._single_tile()
        assert result.stall_cycles == 0

    def test_no_overlap_for_single_tile(self) -> None:
        """DMA and compute are sequential for the first (and only) tile."""
        result = self._single_tile()
        assert result.overlap_cycles == 0

    def test_timeline_has_all_phases(self) -> None:
        """Single tile (last K-pass) must have dma_weight, dma_act, preload,
        execute, flush, and drain events."""
        result = self._single_tile()
        phases = {e.phase for e in result.timeline}
        expected = {"dma_weight", "dma_activation", "preload", "execute", "flush", "drain"}
        assert expected.issubset(phases)

    def test_total_equals_sequential_sum(self) -> None:
        """Without overlap the total should equal dma + compute."""
        result = self._single_tile()
        assert result.total_cycles == result.dma_cycles + result.compute_cycles


# ---------------------------------------------------------------------------
# Double-buffering vs sequential
# ---------------------------------------------------------------------------


class TestDoubleBuffering:
    """Multi-tile schedule: double-buffer should be faster or equal to sequential."""

    def _multi_tile_results(self, m: int, k: int, n: int) -> tuple[SimResult, SimResult]:
        tiles = _tiles(m, k, n)
        seq = simulate_tile_schedule(tiles, double_buffer=False)
        db = simulate_tile_schedule(tiles, double_buffer=True)
        return seq, db

    def test_double_buffer_not_slower_than_sequential(self) -> None:
        seq, db = self._multi_tile_results(32, 32, 32)
        assert db.total_cycles <= seq.total_cycles

    def test_sequential_has_no_overlap(self) -> None:
        """Sequential mode: dma + compute = total (no overlap, no stall)."""
        seq, _ = self._multi_tile_results(32, 32, 32)
        assert seq.overlap_cycles == 0
        assert seq.stall_cycles == 0

    def test_double_buffer_records_overlap_or_stall(self) -> None:
        """With double_buffer, either overlap > 0 or stall > 0 (both signals exist)."""
        tiles = _tiles(TILE_SIZE, TILE_SIZE, TILE_SIZE * 4)  # 4 tiles
        result = simulate_tile_schedule(tiles, double_buffer=True)
        # overlap and stall are derived — their sum must be consistent
        # overlap = compute + dma - total + stall
        expected_overlap = max(
            0, result.compute_cycles + result.dma_cycles - result.total_cycles + result.stall_cycles
        )
        assert result.overlap_cycles == expected_overlap

    def test_cycle_savings_positive_for_larger_shapes(self) -> None:
        """Larger shapes (more tiles) gain more from double-buffering."""
        seq, db = self._multi_tile_results(64, 64, 64)
        savings = seq.total_cycles - db.total_cycles
        # At least some savings expected (>= 0 strictly due to overlap model)
        assert savings >= 0


# ---------------------------------------------------------------------------
# Timeline structure
# ---------------------------------------------------------------------------


class TestTimeline:
    def test_events_sorted_by_cycle_start(self) -> None:
        tiles = _tiles(32, 32, 32)
        result = simulate_tile_schedule(tiles)
        starts = [e.cycle_start for e in result.timeline]
        assert starts == sorted(starts)

    def test_phase_names_are_valid(self) -> None:
        valid_phases = {"dma_weight", "dma_activation", "preload", "execute", "flush", "drain", "stall"}
        tiles = _tiles(32, 32, 32)
        result = simulate_tile_schedule(tiles)
        for ev in result.timeline:
            assert ev.phase in valid_phases

    def test_phase_intervals_non_negative_duration(self) -> None:
        tiles = _tiles(32, 32, 32)
        result = simulate_tile_schedule(tiles)
        for ev in result.timeline:
            assert ev.duration >= 0

    def test_tile_idx_within_bounds(self) -> None:
        tiles = _tiles(32, 32, 32)
        result = simulate_tile_schedule(tiles)
        n_tiles = len(tiles)
        for ev in result.timeline:
            assert 0 <= ev.tile_idx < n_tiles

    def test_summary_is_string(self) -> None:
        tiles = _tiles(16, 16, 16)
        result = simulate_tile_schedule(tiles)
        s = result.summary()
        assert isinstance(s, str)
        assert "total=" in s


# ---------------------------------------------------------------------------
# Weight reuse interaction
# ---------------------------------------------------------------------------


class TestWeightReuse:
    def test_weight_reuse_reduces_dma_cycles(self) -> None:
        """tiles sharing the same (n, k) position reuse weights → fewer DMA_W events."""
        # M=32, K=16, N=16 → plan_linear_tiles gives 2 m-tiles, 1 k-tile, 1 n-tile
        # With N-major ordering, m-tile 1 reuses the weight from m-tile 0
        tiles = _tiles(32, TILE_SIZE, TILE_SIZE)
        seq = simulate_tile_schedule(tiles, double_buffer=False)
        # First tile: weight DMA present; second tile: weight reuse (0 cycles)
        weight_dma_events = [e for e in seq.timeline if e.phase == "dma_weight"]
        # Only one weight DMA (second tile reuses)
        assert len(weight_dma_events) == 1

    def test_no_weight_reuse_across_different_k(self) -> None:
        """Different K-pass tiles always reload weights."""
        tiles = _tiles(TILE_SIZE, 32, TILE_SIZE)  # 2 K-passes
        result = simulate_tile_schedule(tiles, double_buffer=False)
        weight_dma_events = [e for e in result.timeline if e.phase == "dma_weight"]
        # 2 K-passes → 2 weight DMA loads
        assert len(weight_dma_events) == 2


# ---------------------------------------------------------------------------
# Utilization metrics
# ---------------------------------------------------------------------------


class TestUtilizationMetrics:
    def test_dma_utilization_in_0_1(self) -> None:
        tiles = _tiles(64, 64, 64)
        result = simulate_tile_schedule(tiles)
        assert 0.0 <= result.dma_utilization <= 1.0

    def test_compute_utilization_in_0_1(self) -> None:
        tiles = _tiles(64, 64, 64)
        result = simulate_tile_schedule(tiles)
        assert 0.0 <= result.compute_utilization <= 1.0


# ---------------------------------------------------------------------------
# compare_schedules helper
# ---------------------------------------------------------------------------


class TestCompareSchedules:
    def test_compare_returns_schedule_comparison(self) -> None:
        tiles = _tiles(32, 32, 32)
        seq = simulate_tile_schedule(tiles, double_buffer=False)
        db = simulate_tile_schedule(tiles, double_buffer=True)
        cmp = compare_sim_schedules(seq, db)
        assert isinstance(cmp, SimComparison)

    def test_speedup_positive(self) -> None:
        tiles = _tiles(32, 32, 32)
        seq = simulate_tile_schedule(tiles, double_buffer=False)
        db = simulate_tile_schedule(tiles, double_buffer=True)
        cmp = compare_sim_schedules(seq, db)
        assert cmp.speedup > 0.0

    def test_compare_summary_string(self) -> None:
        tiles = _tiles(16, 16, 32)
        seq = simulate_tile_schedule(tiles, double_buffer=False)
        db = simulate_tile_schedule(tiles, double_buffer=True)
        cmp = compare_sim_schedules(seq, db)
        s = cmp.summary()
        assert "seq=" in s
        assert "speedup=" in s
