"""
Multi-layer memory planner for NPU workload sequences.

Analyzes intermediate tensor lifetimes across a compiled program and determines
the best SRAM reuse strategy to minimize external memory transfers.

Key concepts
------------
- **Liveness analysis**: each intermediate tensor has a *birth* step (the step
  that produces it) and a *death* step (the last step that consumes it).  A
  tensor is *live* between birth and death.
- **SRAM budget**: The hardware exposes 64 KB per bank (two banks total,
  128 KB usable for double-buffering).  Tensors whose joint livespan fits
  within the budget can stay on-chip and avoid a round-trip to DDR.
- **Reuse strategies**:
  - ``in_place``    – the output SRAM slot of step N reuses the input slot
    from step N when the input tensor is dead after N.
  - ``ping_pong``   – alternating banks (0/1) maximise DMA/compute overlap.
  - ``evict``       – tensor is written back to external memory and re-loaded
    on demand (fallback when SRAM is exhausted).

The planner does **not** generate RTL-level MMIO sequences; that is the job of
:mod:`l6_toolchain.dma_scheduler`.  The planner only decides *where* (on-chip
vs off-chip) each tensor lives and how much external bandwidth is consumed.
"""
from __future__ import annotations

from dataclasses import dataclass, field
from typing import Sequence

SRAM_BANK_BYTES: int = 65_536   # 64 KB per bank
SRAM_TOTAL_BYTES: int = SRAM_BANK_BYTES * 2   # 128 KB (two banks)
BYTES_PER_INT8: int = 1
BYTES_PER_INT32: int = 4


# ---------------------------------------------------------------------------
# Public data model
# ---------------------------------------------------------------------------

@dataclass(frozen=True)
class TensorLifetime:
    """Liveness interval for a single intermediate tensor."""

    name: str
    """Unique tensor identifier (matches ``TensorValue.name`` in the IR)."""

    size_bytes: int
    """Byte size of the tensor (elements × bytes_per_element)."""

    birth_step: int
    """Index of the step that **produces** this tensor (0-based)."""

    death_step: int
    """Index of the last step that **consumes** this tensor (inclusive).

    A tensor with ``birth_step == death_step`` is produced and consumed within
    the same step (immediately collectable).
    """

    @property
    def live_steps(self) -> int:
        """Number of steps during which this tensor occupies SRAM."""
        return self.death_step - self.birth_step + 1


@dataclass(frozen=True)
class TensorPlacement:
    """Decided placement for a single tensor in the memory plan."""

    name: str
    """Tensor identifier."""

    strategy: str
    """One of ``'in_place'``, ``'ping_pong'``, or ``'evict'``."""

    bank: int | None
    """SRAM bank index (0 or 1) if on-chip, else ``None`` (evicted)."""

    sram_bytes: int
    """Bytes allocated in SRAM.  Zero when ``strategy == 'evict'``."""

    external_bytes: int
    """Bytes transferred to/from external memory.  Zero when fully on-chip."""


@dataclass(frozen=True)
class MemoryPlan:
    """Complete memory plan for all steps in a compiled program."""

    lifetimes: tuple[TensorLifetime, ...]
    """Liveness intervals for every intermediate tensor."""

    placements: tuple[TensorPlacement, ...]
    """Placement decisions (one per tensor, in the same order as *lifetimes*)."""

    total_sram_peak_bytes: int
    """Peak simultaneous SRAM usage across all steps."""

    total_external_bytes: int
    """Total bytes transferred to/from external memory (writes + reads)."""

    num_evictions: int
    """Number of tensors that were evicted to external memory."""

    num_in_place: int
    """Number of tensors that reuse an input's SRAM slot in-place."""

    num_ping_pong: int
    """Number of tensors placed in alternating ping-pong banks."""

    @property
    def fully_on_chip(self) -> bool:
        """True if *all* intermediate tensors fit in SRAM without eviction."""
        return self.num_evictions == 0


# ---------------------------------------------------------------------------
# Step descriptor (lightweight, avoids importing full compiler/IR types)
# ---------------------------------------------------------------------------

@dataclass(frozen=True)
class StepDescriptor:
    """Minimal description of one compilation step for the memory planner.

    Callers typically build these from a :class:`~l6_toolchain.compiler.StepCompilePlan`
    or directly from the IR.
    """

    step_id: int
    """Zero-based step index."""

    output_tensor_name: str
    """Name of the tensor produced by this step."""

    output_shape: tuple[int, ...]
    """Spatial shape of the output tensor (excluding batch)."""

    output_dtype: str = "int32"
    """Element dtype string: ``'int8'`` or ``'int32'`` (default)."""

    input_tensor_names: tuple[str, ...] = field(default_factory=tuple)
    """Names of tensors consumed by this step."""


def _elem_bytes(dtype: str) -> int:
    if dtype in ("int8", "uint8"):
        return BYTES_PER_INT8
    # int16, fp16, bfloat16
    if dtype in ("int16", "float16", "bfloat16"):
        return 2
    # int32, float32
    return BYTES_PER_INT32


def _tensor_size_bytes(shape: tuple[int, ...], dtype: str) -> int:
    elements = 1
    for dim in shape:
        elements *= dim
    return elements * _elem_bytes(dtype)


# ---------------------------------------------------------------------------
# Core planner logic
# ---------------------------------------------------------------------------

def _compute_lifetimes(
    steps: Sequence[StepDescriptor],
) -> dict[str, TensorLifetime]:
    """Compute liveness intervals for all tensors produced by *steps*.

    Only *intermediate* tensors (produced by some step) are tracked.
    External inputs that are never produced by any step are ignored.
    """
    # Map tensor name → step that produces it
    producers: dict[str, int] = {}
    sizes: dict[str, int] = {}
    dtypes: dict[str, str] = {}
    for step in steps:
        name = step.output_tensor_name
        producers[name] = step.step_id
        sizes[name] = _tensor_size_bytes(step.output_shape, step.output_dtype)
        dtypes[name] = step.output_dtype

    # Map tensor name → last step that consumes it
    last_consumer: dict[str, int] = {}
    for step in steps:
        for inp in step.input_tensor_names:
            if inp in producers:
                prev = last_consumer.get(inp, -1)
                if step.step_id > prev:
                    last_consumer[inp] = step.step_id

    # Tensors produced but never consumed by a subsequent step live until
    # the last step (they are final outputs).
    final_step = max((s.step_id for s in steps), default=0)
    lifetimes: dict[str, TensorLifetime] = {}
    for name, birth in producers.items():
        death = last_consumer.get(name, final_step)
        lifetimes[name] = TensorLifetime(
            name=name,
            size_bytes=sizes[name],
            birth_step=birth,
            death_step=death,
        )

    return lifetimes


def _greedy_place(
    lifetimes: dict[str, TensorLifetime],
    steps: Sequence[StepDescriptor],
) -> tuple[TensorPlacement, ...]:
    """Greedy SRAM placement using simple liveness intervals.

    Algorithm
    ---------
    Process tensors in birth-step order.  For each tensor:
    1.  Collect all tensors that are currently live in SRAM.
    2.  Compute residual SRAM (total − live peak).
    3.  If the new tensor fits, assign it to a free bank slot.
        - Prefer ``in_place`` if the tensor's immediate predecessor in the
          same bank just became dead (dead_step < birth_step of current).
        - Otherwise use ping-pong bank selection.
    4.  If it does not fit, evict the largest live tensor to free space,
        then place the new one.
    """
    placements: dict[str, TensorPlacement] = {}
    # Tracks which tensors are currently occupying each bank slot.
    # bank_slots[bank] = list of (tensor_name, death_step)
    bank_slots: list[list[tuple[str, int]]] = [[], []]
    bank_cursor = 0  # alternates 0/1 for ping-pong

    sorted_by_birth = sorted(lifetimes.values(), key=lambda lt: (lt.birth_step, lt.name))

    def _live_sram_bytes(current_step: int) -> int:
        total = 0
        for p in placements.values():
            if p.sram_bytes > 0:
                lt = lifetimes[p.name]
                if lt.death_step >= current_step:
                    total += p.sram_bytes
        return total

    def _dead_in_bank(bank: int, current_step: int) -> bool:
        """Return True if latest occupant of this bank is already dead."""
        if not bank_slots[bank]:
            return True
        _, death = bank_slots[bank][-1]
        return death < current_step

    def _evict_largest_live(current_step: int) -> int:
        """Evict the largest live on-chip tensor, return bytes freed."""
        candidates = [
            (lifetimes[p.name].size_bytes, p.name)
            for p in placements.values()
            if p.sram_bytes > 0 and lifetimes[p.name].death_step >= current_step
        ]
        if not candidates:
            return 0
        candidates.sort(reverse=True)
        _, evict_name = candidates[0]
        old = placements[evict_name]
        placements[evict_name] = TensorPlacement(
            name=evict_name,
            strategy="evict",
            bank=None,
            sram_bytes=0,
            external_bytes=old.sram_bytes * 2,  # write + read
        )
        return old.sram_bytes

    for lt in sorted_by_birth:
        step = lt.birth_step
        live_bytes = _live_sram_bytes(step)
        needed = lt.size_bytes

        # Evict until we have room
        while live_bytes + needed > SRAM_TOTAL_BYTES:
            freed = _evict_largest_live(step)
            if freed == 0:
                break
            live_bytes = _live_sram_bytes(step)

        if live_bytes + needed > SRAM_TOTAL_BYTES:
            # Cannot fit even after evictions — must evict this tensor itself
            placements[lt.name] = TensorPlacement(
                name=lt.name,
                strategy="evict",
                bank=None,
                sram_bytes=0,
                external_bytes=needed * 2,
            )
            continue

        # Choose strategy & bank
        # in_place: reuse the slot of a just-expired same-bank predecessor
        if _dead_in_bank(bank_cursor, step):
            strategy = "in_place"
            bank = bank_cursor
        else:
            strategy = "ping_pong"
            bank = bank_cursor % 2

        placements[lt.name] = TensorPlacement(
            name=lt.name,
            strategy=strategy,
            bank=bank,
            sram_bytes=needed,
            external_bytes=0,
        )
        bank_slots[bank].append((lt.name, lt.death_step))
        bank_cursor = 1 - bank_cursor  # flip for next

    return tuple(placements.values())


def plan_memory(steps: Sequence[StepDescriptor]) -> MemoryPlan:
    """Compute a memory plan for a sequence of compilation steps.

    Parameters
    ----------
    steps:
        Ordered list of :class:`StepDescriptor` objects.  Steps must have
        unique ``step_id`` values starting at 0.

    Returns
    -------
    A :class:`MemoryPlan` with liveness, placements, and aggregate statistics.

    Raises
    ------
    ValueError:
        If *steps* is empty or contains duplicate step IDs.
    """
    if not steps:
        raise ValueError("plan_memory: at least one step is required.")

    step_ids = [s.step_id for s in steps]
    if len(set(step_ids)) != len(step_ids):
        raise ValueError("plan_memory: step_ids must be unique.")

    lifetimes_map = _compute_lifetimes(steps)
    placements = _greedy_place(lifetimes_map, steps)

    # ---- aggregate statistics ----
    num_steps = max(step_ids) + 1
    peak_per_step: list[int] = [0] * num_steps
    for lt in lifetimes_map.values():
        pl = next((p for p in placements if p.name == lt.name), None)
        if pl is None or pl.sram_bytes == 0:
            continue
        for s in range(lt.birth_step, min(lt.death_step + 1, num_steps)):
            peak_per_step[s] += pl.sram_bytes

    total_sram_peak = max(peak_per_step) if peak_per_step else 0
    total_external = sum(p.external_bytes for p in placements)
    num_evictions = sum(1 for p in placements if p.strategy == "evict")
    num_in_place = sum(1 for p in placements if p.strategy == "in_place")
    num_ping_pong = sum(1 for p in placements if p.strategy == "ping_pong")

    return MemoryPlan(
        lifetimes=tuple(lifetimes_map.values()),
        placements=placements,
        total_sram_peak_bytes=total_sram_peak,
        total_external_bytes=total_external,
        num_evictions=num_evictions,
        num_in_place=num_in_place,
        num_ping_pong=num_ping_pong,
    )


def estimate_external_transfers(steps: Sequence[StepDescriptor]) -> int:
    """Convenience function: return total external memory transfer bytes.

    This is a fast path that does not expose the full :class:`MemoryPlan`.
    """
    return plan_memory(steps).total_external_bytes
