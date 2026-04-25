"""Automatic tile-size search for NPU GEMM workloads (Track C-3).

The NPU hardware is fixed at a 16×16 weight-stationary systolic array, so the
*physical* tile is always 16×16.  This module searches for the best *logical*
tiling strategy — specifically, how many rows/columns from the full GEMM shape
to group into a single scheduling unit — by trading off:

* **SRAM utilisation** — each (tile_m × tile_k × tile_n) unit must fit in half
  the on-chip SRAM budget (one ping-pong bank).
* **DMA efficiency** — larger tile_m amortises the DMA overhead cycles over
  more MACs.
* **Weight-reuse savings** — reusing the same weight tile across multiple M-rows
  eliminates redundant weight DMA and preload cycles.

Search space
------------
Tile candidates are formed from the Cartesian product of:

* ``tile_m`` ∈ {4, 8, 16, 32, 48, 64, 128} ∩ [1, M]
* ``tile_k`` ∈ {16, 32, 48, 64, 128} ∩ [1, K]  (split-K granularity)
* ``tile_n`` ∈ {16, 32, 48, 64} ∩ [1, N]        (N-dimension grouping)

Only candidates where the combined SRAM usage fits within ``sram_budget_bytes``
are considered.  The winner minimises estimated_total_cycles.

SRAM budget model (per bank)::

    weight_bytes    = tile_k × tile_n × 1   (INT8)
    activation_bytes = tile_m × tile_k × 1  (INT8)
    output_bytes     = tile_m × tile_n × 4  (INT32 accumulator)
    total_per_bank   = weight_bytes + activation_bytes + output_bytes

Two banks are required for ping-pong double-buffering, so::

    total_sram = 2 × total_per_bank ≤ sram_budget_bytes

Cycle estimation
----------------
Uses an analytical model derived directly from :mod:`scheduler` timing constants
rather than running :func:`simulate_tile_schedule` for every candidate (which
would be slow for large search spaces).  The model accounts for weight-reuse
savings from N-major tile ordering.

Usage example::

    from l6_toolchain.auto_tile import search_tile_sizes

    result = search_tile_sizes(256, 256, 256)
    print(result.best)          # TileCandidate with lowest cycles
    print(result.summary())
"""

from __future__ import annotations

import math
from dataclasses import dataclass

from .lowering import TILE_SIZE
from .memory_planner import SRAM_BANK_BYTES
from .scheduler import (
    BANK_SWAP_CYCLES,
    DMA_OVERHEAD_CYCLES,
    DRAIN_CYCLES_PER_ROW,
    FLUSH_CYCLES,
    WEIGHT_PRELOAD_CYCLES,
)


# ---------------------------------------------------------------------------
# Constants
# ---------------------------------------------------------------------------

# INT8 for weights and activations; INT32 for accumulator output
_INT8_BYTES = 1
_INT32_BYTES = 4

# Hardware PE array dimensions (fixed at compile time)
_PE_ROWS = TILE_SIZE   # 16
_PE_COLS = TILE_SIZE   # 16

# Candidate sets for each tile dimension
_TILE_M_CANDIDATES = (4, 8, 16, 32, 48, 64, 128)
_TILE_K_CANDIDATES = (16, 32, 48, 64, 128)
_TILE_N_CANDIDATES = (16, 32, 64)


# ---------------------------------------------------------------------------
# Data types
# ---------------------------------------------------------------------------


@dataclass(frozen=True)
class TileCandidate:
    """A single (tile_m, tile_k, tile_n) configuration with cost metadata."""

    tile_m: int
    """Rows of the M-dimension processed per scheduling unit."""

    tile_k: int
    """Columns of the K-dimension per pass (split-K granularity)."""

    tile_n: int
    """Columns of the N-dimension per scheduling unit."""

    num_tiles: int
    """Total number of hardware 16×16 tiles in the full GEMM."""

    estimated_total_cycles: int
    """Analytical estimate of total execution cycles for the full GEMM."""

    sram_per_bank_bytes: int
    """SRAM required per ping-pong bank (weight + activation + output buffers)."""

    fits_sram: bool
    """True when ``2 × sram_per_bank_bytes ≤ sram_budget_bytes``."""

    pe_utilization: float
    """Average fraction of PE array actively computing (accounts for tail tiles)."""


@dataclass(frozen=True)
class AutoTileResult:
    """Result of an automatic tile-size search."""

    m: int
    """Full GEMM M dimension."""

    k: int
    """Full GEMM K dimension."""

    n: int
    """Full GEMM N dimension."""

    best: TileCandidate
    """Candidate with lowest ``estimated_total_cycles`` that fits in SRAM."""

    all_candidates: tuple[TileCandidate, ...]
    """All evaluated candidates sorted by ``estimated_total_cycles``."""

    sram_budget_bytes: int
    """SRAM budget used during the search (``2 × SRAM_BANK_BYTES`` by default)."""

    def summary(self) -> str:
        """Return a short human-readable summary of the best tile choice."""
        b = self.best
        return (
            f"best=({b.tile_m}×{b.tile_k}×{b.tile_n})  "
            f"cycles={b.estimated_total_cycles}  "
            f"sram_per_bank={b.sram_per_bank_bytes}B  "
            f"pe_util={b.pe_utilization * 100:.1f}%  "
            f"total_tiles={b.num_tiles}"
        )


# ---------------------------------------------------------------------------
# Internal helpers
# ---------------------------------------------------------------------------


def _sram_per_bank(tile_m: int, tile_k: int, tile_n: int) -> int:
    """Return bytes needed in one SRAM bank for this tile configuration."""
    weight_bytes = tile_k * tile_n * _INT8_BYTES
    activation_bytes = tile_m * tile_k * _INT8_BYTES
    output_bytes = tile_m * tile_n * _INT32_BYTES
    return weight_bytes + activation_bytes + output_bytes


def _ceil_div(a: int, b: int) -> int:
    return (a + b - 1) // b


def _estimate_cycles(
    m: int,
    k: int,
    n: int,
    tile_m: int,
    tile_k: int,
    tile_n: int,
) -> int:
    """Analytical cycle estimate for a full GEMM using the given tile sizes.

    Assumes N-major tile ordering so the weight tile is reused across all
    M-tiles that share the same (K-pass, N-tile) position.

    The model is conservative (no double-buffer overlap), giving an upper
    bound identical to what :func:`estimate_schedule_cost` computes for the
    same ordering.
    """
    # Number of complete and partial tiles in each dimension
    m_tiles = _ceil_div(m, tile_m)
    k_tiles = _ceil_div(k, tile_k)
    n_tiles = _ceil_div(n, tile_n)

    # Hardware 16×16 sub-tiles per logic tile in each dimension
    sub_m = _ceil_div(tile_m, _PE_ROWS)
    sub_k = _ceil_div(tile_k, _PE_COLS)
    sub_n = _ceil_div(tile_n, _PE_COLS)

    total_sub_tiles = m_tiles * k_tiles * n_tiles * sub_m * sub_k * sub_n

    # Per sub-tile costs (using scheduler constants)
    # Effective tile dimensions at hardware level (last sub-tile may be partial)
    hw_tile_m = min(tile_m, _PE_ROWS)   # representative hardware tile_m
    hw_tile_k = min(tile_k, _PE_COLS)   # representative hardware tile_k

    # DMA weight: TILE_SIZE rows at TILE_SIZE frequency + overhead
    dma_w_cycles = hw_tile_k + DMA_OVERHEAD_CYCLES   # 17 for full tile

    # DMA activation: tile_m rows + overhead
    dma_a_cycles = hw_tile_m + DMA_OVERHEAD_CYCLES   # 17 for full tile

    # Preload rows into systolic array
    preload_cycles = WEIGHT_PRELOAD_CYCLES  # 16

    # Execute: one activation row per cycle
    execute_cycles = hw_tile_m   # 16 for full tile

    # Bank swap: 2 swaps per sub-tile
    swap_cycles = 2 * BANK_SWAP_CYCLES   # 2

    # Flush + drain only on the last K-pass (per output tile)
    flush_drain_per_mn_tile = FLUSH_CYCLES + hw_tile_m * DRAIN_CYCLES_PER_ROW

    # Total for non-last K-pass sub-tiles
    cost_non_last = dma_w_cycles + dma_a_cycles + preload_cycles + execute_cycles + swap_cycles
    # Total for last K-pass sub-tiles (once per (M,N) group)
    cost_last = cost_non_last + flush_drain_per_mn_tile

    # Weight is reused across sub_m hardware tiles for the same (K,N) position.
    # Only the first M-sub-tile in a group pays weight DMA + preload.
    weight_reload_groups = n_tiles * k_tiles * sub_k * sub_n   # unique (K,N) groups
    weight_reuse_tiles = (sub_m - 1) * weight_reload_groups     # tiles that reuse

    # Non-last K-pass sub-tiles (all except the last K-pass per (M,N) tile)
    last_k_tiles = m_tiles * n_tiles * sub_m * sub_n   # one per (M,N) output group
    non_last_tiles = total_sub_tiles - last_k_tiles

    # Total cycles:
    # non-last sub-tiles pay cost_non_last, last sub-tiles pay cost_last,
    # minus weight DMA+preload savings for weight-reused tiles
    total = (
        non_last_tiles * cost_non_last
        + last_k_tiles * cost_last
        - weight_reuse_tiles * (dma_w_cycles + preload_cycles)
    )

    return max(total, 0)


def _pe_utilization(m: int, k: int, n: int, tile_m: int, tile_k: int, tile_n: int) -> float:
    """Average fraction of PE rows/columns used (tail wastage model).

    Full tiles use all PE rows/cols; tail tiles use only the remainder.
    """
    sub_m = _ceil_div(tile_m, _PE_ROWS)
    sub_n = _ceil_div(tile_n, _PE_COLS)

    # Effective M and N per logical tile (weighted average across full/tail)
    m_tiles = _ceil_div(m, tile_m)
    n_tiles = _ceil_div(n, tile_n)

    eff_m = ((m_tiles - 1) * tile_m + (m % tile_m or tile_m)) / m_tiles
    eff_n = ((n_tiles - 1) * tile_n + (n % tile_n or tile_n)) / n_tiles

    # Utilization within one logical tile's hardware executions
    hw_eff_m = min(eff_m, _PE_ROWS)
    hw_eff_n = min(eff_n, _PE_COLS)

    return (hw_eff_m / _PE_ROWS) * (hw_eff_n / _PE_COLS)


# ---------------------------------------------------------------------------
# Public API
# ---------------------------------------------------------------------------


def search_tile_sizes(
    m: int,
    k: int,
    n: int,
    *,
    sram_budget_bytes: int = SRAM_BANK_BYTES * 2,
) -> AutoTileResult:
    """Search for the best (tile_m, tile_k, tile_n) for a GEMM of shape (M, K, N).

    Parameters
    ----------
    m, k, n:
        GEMM logical dimensions (output rows, shared K, output columns).
        Must be positive integers.
    sram_budget_bytes:
        Total on-chip SRAM available for tile buffers.  Two equal-sized
        ping-pong banks are assumed, so each bank gets
        ``sram_budget_bytes // 2`` bytes.  Default: 128 KB (two 64 KB banks).

    Returns
    -------
    :class:`AutoTileResult` with the best candidate and all evaluated options.

    Raises
    ------
    ValueError
        If no candidate fits within ``sram_budget_bytes`` (the GEMM shape is
        too large or the budget too small for even the smallest tile).
    """
    if m <= 0 or k <= 0 or n <= 0:
        raise ValueError(f"GEMM dimensions must be positive: got ({m}, {k}, {n}).")
    if sram_budget_bytes <= 0:
        raise ValueError(f"sram_budget_bytes must be positive, got {sram_budget_bytes}.")

    per_bank_budget = sram_budget_bytes // 2
    candidates: list[TileCandidate] = []

    for tm in _TILE_M_CANDIDATES:
        if tm > m:
            # Always include at least the smallest tile ≥ 1
            if candidates:
                continue
        eff_tm = min(tm, m)
        for tk in _TILE_K_CANDIDATES:
            eff_tk = min(tk, k)
            for tn in _TILE_N_CANDIDATES:
                eff_tn = min(tn, n)

                sram_bank = _sram_per_bank(eff_tm, eff_tk, eff_tn)
                fits = sram_bank <= per_bank_budget
                hw_sub_m = _ceil_div(eff_tm, _PE_ROWS)
                hw_sub_k = _ceil_div(eff_tk, _PE_COLS)
                hw_sub_n = _ceil_div(eff_tn, _PE_COLS)
                num_tiles = (
                    _ceil_div(m, eff_tm)
                    * _ceil_div(k, eff_tk)
                    * _ceil_div(n, eff_tn)
                    * hw_sub_m
                    * hw_sub_k
                    * hw_sub_n
                )
                cycles = _estimate_cycles(m, k, n, eff_tm, eff_tk, eff_tn)
                util = _pe_utilization(m, k, n, eff_tm, eff_tk, eff_tn)

                candidates.append(
                    TileCandidate(
                        tile_m=eff_tm,
                        tile_k=eff_tk,
                        tile_n=eff_tn,
                        num_tiles=num_tiles,
                        estimated_total_cycles=cycles,
                        sram_per_bank_bytes=sram_bank,
                        fits_sram=fits,
                        pe_utilization=util,
                    )
                )

    # Deduplicate (same effective dims can appear from multiple candidates)
    seen: set[tuple[int, int, int]] = set()
    unique: list[TileCandidate] = []
    for c in candidates:
        key = (c.tile_m, c.tile_k, c.tile_n)
        if key not in seen:
            seen.add(key)
            unique.append(c)

    # Sort by cycles (tie-break: larger SRAM usage wins for better reuse)
    unique.sort(key=lambda c: (c.estimated_total_cycles, -c.sram_per_bank_bytes))

    feasible = [c for c in unique if c.fits_sram]
    if not feasible:
        # All candidates exceed SRAM — this shouldn't happen with INT8 4×16×16
        # tiles, but provide a useful error.
        smallest = min(unique, key=lambda c: c.sram_per_bank_bytes)
        raise ValueError(
            f"No tile candidate fits in SRAM budget of {sram_budget_bytes} bytes. "
            f"Smallest per-bank usage is {smallest.sram_per_bank_bytes} bytes "
            f"(tile {smallest.tile_m}×{smallest.tile_k}×{smallest.tile_n})."
        )

    best = feasible[0]

    return AutoTileResult(
        m=m,
        k=k,
        n=n,
        best=best,
        all_candidates=tuple(unique),
        sram_budget_bytes=sram_budget_bytes,
    )


def get_optimal_tile(
    m: int,
    k: int,
    n: int,
    *,
    sram_budget_bytes: int = SRAM_BANK_BYTES * 2,
) -> tuple[int, int, int]:
    """Return ``(tile_m, tile_k, tile_n)`` for the lowest-cycle tile choice.

    Convenience wrapper around :func:`search_tile_sizes`.

    Returns
    -------
    ``(tile_m, tile_k, tile_n)`` integers.
    """
    result = search_tile_sizes(m, k, n, sram_budget_bytes=sram_budget_bytes)
    b = result.best
    return b.tile_m, b.tile_k, b.tile_n


__all__ = [
    "AutoTileResult",
    "TileCandidate",
    "get_optimal_tile",
    "search_tile_sizes",
]
