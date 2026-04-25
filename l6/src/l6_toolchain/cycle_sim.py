"""Cycle-accurate NPU pipeline simulator (Track C-2).

Models DMA transfer, preload, execute, flush, and drain on a per-tile basis,
accounting for double-buffering overlap between the DMA engine and the PE array.

Two parallel streams
--------------------
* **DMA stream** — moves weight + activation tiles from DRAM to SRAM via AXI.
* **Compute stream** — performs preload → execute → flush → drain on the systolic
  array.

With double-buffering, the DMA engine for tile ``i+1`` starts as soon as the
execute phase of tile ``i`` begins.  One SRAM bank is now occupied by the
compute engine; the DMA engine uses the *other* bank.  A *stall* occurs when
DMA for tile ``i+1`` has not yet finished by the time tile ``i``'s compute
pipeline finishes — compute must idle until the next tile's data arrives.

Timing constants are imported directly from :mod:`scheduler` so that the
simulator stays in sync with the analytical cost model.

Usage example::

    from l6_toolchain.lowering import plan_linear_tiles
    from l6_toolchain.cycle_sim import simulate_tile_schedule

    class GEMMShape:
        m, k, n = 64, 64, 64

    tiles = plan_linear_tiles(GEMMShape())
    result = simulate_tile_schedule(tiles, double_buffer=True)
    print(result.summary())
"""

from __future__ import annotations

from dataclasses import dataclass
from typing import Sequence

from .lowering import TilePlanEntry
from .scheduler import estimate_schedule_cost


# ---------------------------------------------------------------------------
# Data types
# ---------------------------------------------------------------------------


@dataclass(frozen=True)
class PhaseInterval:
    """A single contiguous phase for one tile in the simulation timeline."""

    tile_idx: int
    """Zero-based index of the tile this event belongs to."""

    phase: str
    """One of: ``'dma_weight'``, ``'dma_activation'``, ``'preload'``,
    ``'execute'``, ``'flush'``, ``'drain'``, ``'stall'``."""

    cycle_start: int
    """Inclusive start cycle (0-based)."""

    cycle_end: int
    """Exclusive end cycle."""

    @property
    def duration(self) -> int:
        """Length in cycles."""
        return max(0, self.cycle_end - self.cycle_start)


@dataclass(frozen=True)
class SimResult:
    """Cycle-accurate simulation result for a full tile schedule."""

    total_cycles: int
    """Wall-clock cycles from first DMA start to last drain end."""

    compute_cycles: int
    """Sum of active compute cycles (preload + execute + flush + drain) across
    all tiles.  May exceed ``total_cycles`` when DMA overlaps with compute."""

    dma_cycles: int
    """Sum of active DMA cycles (weight + activation) across all tiles."""

    overlap_cycles: int
    """DMA cycles that ran concurrently with compute (saved by double-buffering).
    Computed as ``compute_cycles + dma_cycles − total_cycles + stall_cycles``."""

    stall_cycles: int
    """Cycles the compute pipeline idled waiting for DMA to finish."""

    dma_utilization: float
    """Fraction of ``total_cycles`` with active DMA (capped at 1.0)."""

    compute_utilization: float
    """Fraction of ``total_cycles`` with active compute (capped at 1.0)."""

    timeline: tuple[PhaseInterval, ...]
    """All phase events sorted by ``cycle_start``."""

    def summary(self) -> str:
        """Return a one-line human-readable summary."""
        return (
            f"total={self.total_cycles}  compute={self.compute_cycles}  "
            f"dma={self.dma_cycles}  overlap={self.overlap_cycles}  "
            f"stall={self.stall_cycles}  "
            f"dma_util={self.dma_utilization * 100:.1f}%  "
            f"cmp_util={self.compute_utilization * 100:.1f}%"
        )


# ---------------------------------------------------------------------------
# Simulator
# ---------------------------------------------------------------------------


def simulate_tile_schedule(
    tiles: Sequence[TilePlanEntry],
    *,
    double_buffer: bool = True,
) -> SimResult:
    """Simulate NPU pipeline execution for an ordered list of tiles.

    Parameters
    ----------
    tiles:
        Tile plan produced by :func:`plan_linear_tiles` (optionally reordered
        by :func:`reorder_tiles` for weight-reuse N-major order).
    double_buffer:
        If ``True`` (default), DMA for tile ``i+1`` starts at the beginning of
        tile ``i``'s *execute* phase, modelling 2-bank SRAM ping-pong.
        If ``False``, all phases run strictly sequentially (baseline model).

    Returns
    -------
    :class:`SimResult` with timing breakdown and per-phase timeline.

    Notes
    -----
    The weight DMA and activation DMA share one AXI channel and run
    *sequentially* within a tile (weight first, then activation).  Two
    independent DMA channels would reduce the DMA duration but are not
    modelled here — this is a conservative estimate.
    """
    if not tiles:
        return SimResult(
            total_cycles=0,
            compute_cycles=0,
            dma_cycles=0,
            overlap_cycles=0,
            stall_cycles=0,
            dma_utilization=0.0,
            compute_utilization=0.0,
            timeline=(),
        )

    cost_estimates = list(estimate_schedule_cost(list(tiles)).tiles)

    events: list[PhaseInterval] = []
    stall_total = 0

    dma_free = 0       # earliest cycle the DMA channel is available
    compute_free = 0   # earliest cycle the compute pipeline is available
    prev_execute_start = 0  # execute_start of the previous tile (for double_buffer)

    for idx, cost in enumerate(cost_estimates):

        # ── DMA start time ────────────────────────────────────────────────
        if double_buffer and idx > 0:
            # Begin DMA as soon as previous tile's execute started.
            # The bank swap has occurred: compute holds bank B, DMA fills bank A.
            dma_start = max(prev_execute_start, dma_free)
        else:
            # Sequential: DMA only after previous compute AND previous DMA finish.
            dma_start = max(compute_free, dma_free)

        # Weight DMA then activation DMA on the same AXI channel.
        dma_w_start = dma_start
        dma_w_end = dma_w_start + cost.dma_weight_cycles
        dma_a_start = dma_w_end
        dma_a_end = dma_a_start + cost.dma_activation_cycles
        dma_end = dma_a_end
        dma_free = dma_end

        if cost.dma_weight_cycles > 0:
            events.append(PhaseInterval(idx, "dma_weight", dma_w_start, dma_w_end))
        if cost.dma_activation_cycles > 0:
            events.append(PhaseInterval(idx, "dma_activation", dma_a_start, dma_a_end))

        # ── Stall detection ───────────────────────────────────────────────
        # After tile i-1 finishes, compute is free at compute_free.
        # Preload cannot start until *both* DMA is done and compute is free.
        # The wait between compute_free and dma_end is a stall (compute idles).
        if double_buffer and idx > 0 and dma_end > compute_free:
            stall_len = dma_end - compute_free
            events.append(PhaseInterval(idx, "stall", compute_free, dma_end))
            stall_total += stall_len

        # ── Preload ───────────────────────────────────────────────────────
        preload_start = max(dma_end, compute_free)
        preload_end = preload_start + cost.preload_cycles
        if cost.preload_cycles > 0:
            events.append(PhaseInterval(idx, "preload", preload_start, preload_end))

        # ── Execute ───────────────────────────────────────────────────────
        execute_start = preload_end
        execute_end = execute_start + cost.execute_cycles
        if cost.execute_cycles > 0:
            events.append(PhaseInterval(idx, "execute", execute_start, execute_end))

        prev_execute_start = execute_start  # remember for next tile's DMA scheduling

        # ── Flush (last K-pass only) ──────────────────────────────────────
        flush_end = execute_end
        if cost.flush_cycles > 0:
            events.append(
                PhaseInterval(idx, "flush", execute_end, execute_end + cost.flush_cycles)
            )
            flush_end = execute_end + cost.flush_cycles

        # ── Drain (last K-pass only) ──────────────────────────────────────
        drain_end = flush_end
        if cost.drain_cycles > 0:
            events.append(
                PhaseInterval(idx, "drain", flush_end, flush_end + cost.drain_cycles)
            )
            drain_end = flush_end + cost.drain_cycles

        compute_free = drain_end

    # Wall-clock is maxed over both streams
    total_cycles = max(dma_free, compute_free)

    # Aggregate metrics
    compute_phase_names = {"preload", "execute", "flush", "drain"}
    dma_phase_names = {"dma_weight", "dma_activation"}
    compute_total = sum(e.duration for e in events if e.phase in compute_phase_names)
    dma_total = sum(e.duration for e in events if e.phase in dma_phase_names)

    # Overlap: compute + dma - (total - stall) gives cycles both streams were active.
    # Derivation: total = compute + dma - overlap + stall  →  overlap = compute + dma - total + stall
    overlap = max(0, compute_total + dma_total - total_cycles + stall_total)

    sorted_events = tuple(sorted(events, key=lambda e: e.cycle_start))

    return SimResult(
        total_cycles=total_cycles,
        compute_cycles=compute_total,
        dma_cycles=dma_total,
        overlap_cycles=overlap,
        stall_cycles=stall_total,
        dma_utilization=min(1.0, dma_total / max(total_cycles, 1)),
        compute_utilization=min(1.0, compute_total / max(total_cycles, 1)),
        timeline=sorted_events,
    )


# ---------------------------------------------------------------------------
# Utilities
# ---------------------------------------------------------------------------


def compare_sim_schedules(
    sequential: SimResult,
    double_buffered: SimResult,
) -> SimComparison:
    """Compare sequential vs double-buffered simulation results.

    Parameters
    ----------
    sequential:
        Result from :func:`simulate_tile_schedule` with ``double_buffer=False``.
    double_buffered:
        Result from :func:`simulate_tile_schedule` with ``double_buffer=True``.

    Returns
    -------
    :class:`ScheduleComparison` with speedup and savings breakdown.
    """
    saved = sequential.total_cycles - double_buffered.total_cycles
    speedup = sequential.total_cycles / max(double_buffered.total_cycles, 1)
    return SimComparison(
        sequential=sequential,
        double_buffered=double_buffered,
        cycle_savings=saved,
        speedup=speedup,
    )


@dataclass(frozen=True)
class SimComparison:
    """Comparison of sequential vs double-buffered simulation results."""

    sequential: SimResult
    """Simulation result without double-buffering."""

    double_buffered: SimResult
    """Simulation result with double-buffering."""

    cycle_savings: int
    """Cycles saved by double-buffering (may be negative when tiny tiles stall)."""

    speedup: float
    """``sequential.total_cycles / double_buffered.total_cycles``."""

    def summary(self) -> str:
        return (
            f"seq={self.sequential.total_cycles}  "
            f"db={self.double_buffered.total_cycles}  "
            f"saved={self.cycle_savings}  speedup={self.speedup:.3f}x"
        )


__all__ = [
    "PhaseInterval",
    "SimComparison",
    "SimResult",
    "compare_sim_schedules",
    "simulate_tile_schedule",
]
