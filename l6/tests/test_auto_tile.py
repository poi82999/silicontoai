"""Tests for the automatic tile-size search module (auto_tile.py)."""
from __future__ import annotations

import pytest

from l6_toolchain.auto_tile import (
    AutoTileResult,
    TileCandidate,
    get_optimal_tile,
    search_tile_sizes,
)
from l6_toolchain.lowering import TILE_SIZE
from l6_toolchain.memory_planner import SRAM_BANK_BYTES


# ---------------------------------------------------------------------------
# Basic return type
# ---------------------------------------------------------------------------


class TestSearchTileSizesReturnType:
    def test_returns_auto_tile_result(self) -> None:
        result = search_tile_sizes(64, 64, 64)
        assert isinstance(result, AutoTileResult)

    def test_best_is_tile_candidate(self) -> None:
        result = search_tile_sizes(32, 32, 32)
        assert isinstance(result.best, TileCandidate)

    def test_all_candidates_tuple_of_tile_candidates(self) -> None:
        result = search_tile_sizes(32, 32, 32)
        assert isinstance(result.all_candidates, tuple)
        assert all(isinstance(c, TileCandidate) for c in result.all_candidates)

    def test_dimensions_stored_correctly(self) -> None:
        result = search_tile_sizes(48, 32, 64)
        assert result.m == 48
        assert result.k == 32
        assert result.n == 64


# ---------------------------------------------------------------------------
# SRAM constraint enforcement
# ---------------------------------------------------------------------------


class TestSRAMConstraint:
    def test_best_fits_sram(self) -> None:
        result = search_tile_sizes(64, 64, 64)
        assert result.best.fits_sram

    def test_best_sram_within_budget(self) -> None:
        budget = SRAM_BANK_BYTES * 2
        result = search_tile_sizes(64, 64, 64, sram_budget_bytes=budget)
        assert result.best.sram_per_bank_bytes * 2 <= budget

    def test_tight_sram_budget_respected(self) -> None:
        """A small budget forces a small tile."""
        small_budget = 16 * 16 * 1 + 16 * 16 * 1 + 16 * 16 * 4  # 16×16×16 + 16×16×16 + output
        small_budget *= 2
        result = search_tile_sizes(16, 16, 16, sram_budget_bytes=small_budget)
        assert result.best.fits_sram
        assert result.best.sram_per_bank_bytes * 2 <= small_budget

    def test_impossible_budget_raises(self) -> None:
        """Even the smallest tile exceeds budget → ValueError."""
        with pytest.raises(ValueError, match="SRAM budget"):
            # Budget of 1 byte is impossibly small
            search_tile_sizes(64, 64, 64, sram_budget_bytes=1)


# ---------------------------------------------------------------------------
# Tile dimension validity
# ---------------------------------------------------------------------------


class TestTileDimensions:
    def test_tile_dims_positive(self) -> None:
        result = search_tile_sizes(16, 16, 16)
        assert result.best.tile_m > 0
        assert result.best.tile_k > 0
        assert result.best.tile_n > 0

    def test_tile_dims_do_not_exceed_shape(self) -> None:
        m, k, n = 12, 8, 10
        result = search_tile_sizes(m, k, n)
        assert result.best.tile_m <= m
        assert result.best.tile_k <= k
        assert result.best.tile_n <= n

    def test_num_tiles_positive(self) -> None:
        result = search_tile_sizes(64, 64, 64)
        assert result.best.num_tiles > 0


# ---------------------------------------------------------------------------
# Cycle estimates
# ---------------------------------------------------------------------------


class TestCycleEstimates:
    def test_estimated_cycles_positive(self) -> None:
        result = search_tile_sizes(32, 32, 32)
        assert result.best.estimated_total_cycles > 0

    def test_larger_shape_more_cycles(self) -> None:
        """64×64×64 should require more cycles than 16×16×16."""
        small = search_tile_sizes(16, 16, 16)
        large = search_tile_sizes(64, 64, 64)
        assert large.best.estimated_total_cycles > small.best.estimated_total_cycles

    def test_candidates_sorted_by_cycles(self) -> None:
        result = search_tile_sizes(64, 64, 64)
        cycles = [c.estimated_total_cycles for c in result.all_candidates]
        assert cycles == sorted(cycles)

    def test_best_is_minimum_cycles_among_feasible(self) -> None:
        result = search_tile_sizes(64, 64, 64)
        feasible = [c for c in result.all_candidates if c.fits_sram]
        min_cycles = min(c.estimated_total_cycles for c in feasible)
        assert result.best.estimated_total_cycles == min_cycles


# ---------------------------------------------------------------------------
# PE utilization
# ---------------------------------------------------------------------------


class TestPEUtilization:
    def test_utilization_in_0_1(self) -> None:
        result = search_tile_sizes(32, 32, 32)
        for c in result.all_candidates:
            assert 0.0 <= c.pe_utilization <= 1.0

    def test_full_tile_full_utilization(self) -> None:
        """When M and N are exact multiples of TILE_SIZE, utilization = 1.0."""
        result = search_tile_sizes(TILE_SIZE, TILE_SIZE, TILE_SIZE)
        # The 16×16×16 candidate should hit exactly 1.0 utilization
        candidate_16 = next(
            (c for c in result.all_candidates if c.tile_m == 16 and c.tile_n == 16),
            None,
        )
        if candidate_16 is not None:
            assert candidate_16.pe_utilization == pytest.approx(1.0)


# ---------------------------------------------------------------------------
# Summary & get_optimal_tile
# ---------------------------------------------------------------------------


class TestSummaryAndHelpers:
    def test_summary_returns_string(self) -> None:
        result = search_tile_sizes(32, 32, 32)
        s = result.summary()
        assert isinstance(s, str)
        assert "best=" in s
        assert "cycles=" in s

    def test_get_optimal_tile_returns_triple(self) -> None:
        tm, tk, tn = get_optimal_tile(64, 64, 64)
        assert isinstance(tm, int)
        assert isinstance(tk, int)
        assert isinstance(tn, int)
        assert tm > 0 and tk > 0 and tn > 0

    def test_get_optimal_tile_consistent_with_search(self) -> None:
        result = search_tile_sizes(64, 64, 64)
        tm, tk, tn = get_optimal_tile(64, 64, 64)
        assert tm == result.best.tile_m
        assert tk == result.best.tile_k
        assert tn == result.best.tile_n


# ---------------------------------------------------------------------------
# Error handling
# ---------------------------------------------------------------------------


class TestInputValidation:
    def test_zero_m_raises(self) -> None:
        with pytest.raises(ValueError, match="positive"):
            search_tile_sizes(0, 16, 16)

    def test_negative_k_raises(self) -> None:
        with pytest.raises(ValueError, match="positive"):
            search_tile_sizes(16, -1, 16)

    def test_zero_sram_budget_raises(self) -> None:
        with pytest.raises(ValueError, match="sram_budget_bytes"):
            search_tile_sizes(16, 16, 16, sram_budget_bytes=0)
