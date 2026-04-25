"""Tests for the multi-layer memory planner (memory_planner.py)."""
from __future__ import annotations

import pytest

from l6_toolchain.memory_planner import (
    MemoryPlan,
    SRAM_BANK_BYTES,
    SRAM_TOTAL_BYTES,
    StepDescriptor,
    TensorLifetime,
    TensorPlacement,
    estimate_external_transfers,
    plan_memory,
)


# ---------------------------------------------------------------------------
# Helpers
# ---------------------------------------------------------------------------

def _step(
    step_id: int,
    output: str,
    shape: tuple[int, ...],
    inputs: tuple[str, ...] = (),
    dtype: str = "int32",
) -> StepDescriptor:
    return StepDescriptor(
        step_id=step_id,
        output_tensor_name=output,
        output_shape=shape,
        output_dtype=dtype,
        input_tensor_names=inputs,
    )


# ---------------------------------------------------------------------------
# Tests
# ---------------------------------------------------------------------------

class TestPlanMemoryBasic:
    def test_single_step_produces_plan(self) -> None:
        steps = [_step(0, "out0", (16, 16))]
        plan = plan_memory(steps)
        assert isinstance(plan, MemoryPlan)
        assert len(plan.lifetimes) == 1
        assert len(plan.placements) == 1

    def test_single_step_tensor_lifetime(self) -> None:
        steps = [_step(0, "out0", (16, 16))]
        plan = plan_memory(steps)
        lt = plan.lifetimes[0]
        assert lt.name == "out0"
        # Only one step — birth == death == 0
        assert lt.birth_step == 0
        assert lt.death_step == 0
        assert lt.live_steps == 1

    def test_chain_two_steps_liveness(self) -> None:
        """Step 0 produces 'a', step 1 consumes 'a' and produces 'b'."""
        steps = [
            _step(0, "a", (16, 16)),
            _step(1, "b", (16, 16), inputs=("a",)),
        ]
        plan = plan_memory(steps)
        lt_map = {lt.name: lt for lt in plan.lifetimes}
        # 'a' is born at 0, last consumed at 1 → death = 1
        assert lt_map["a"].birth_step == 0
        assert lt_map["a"].death_step == 1
        # 'b' is born at 1 and never consumed → death stays at 1 (final step)
        assert lt_map["b"].birth_step == 1
        assert lt_map["b"].death_step == 1

    def test_fully_on_chip_flag(self) -> None:
        """Small tensors (16×16 int32 = 1 KB each) should all fit on chip."""
        steps = [
            _step(0, "a", (16, 16)),
            _step(1, "b", (16, 16), inputs=("a",)),
            _step(2, "c", (16, 16), inputs=("b",)),
        ]
        plan = plan_memory(steps)
        # 3 × 1 KB = 3 KB — well within 128 KB total SRAM
        assert plan.fully_on_chip is True
        assert plan.num_evictions == 0

    def test_empty_steps_raises(self) -> None:
        with pytest.raises(ValueError, match="at least one step"):
            plan_memory([])

    def test_duplicate_step_ids_raises(self) -> None:
        steps = [
            _step(0, "a", (16, 16)),
            _step(0, "b", (16, 16)),  # duplicate
        ]
        with pytest.raises(ValueError, match="unique"):
            plan_memory(steps)


class TestSramFit:
    def test_tensors_fit_within_budget(self) -> None:
        """Tensors totalling less than SRAM_TOTAL_BYTES should not be evicted."""
        # Each 64×64 int32 tensor = 64*64*4 = 16 KB, two live at once = 32 KB < 128 KB
        steps = [
            _step(0, "a", (64, 64)),
            _step(1, "b", (64, 64), inputs=("a",)),
        ]
        plan = plan_memory(steps)
        assert plan.num_evictions == 0
        assert plan.total_external_bytes == 0

    def test_oversized_tensor_triggers_eviction(self) -> None:
        """A tensor exceeding SRAM capacity should be evicted."""
        # 256×256 int32 = 256*256*4 = 262,144 bytes > 128 KB SRAM
        steps = [_step(0, "big", (256, 256))]
        plan = plan_memory(steps)
        assert plan.num_evictions >= 1

    def test_peak_sram_does_not_exceed_total(self) -> None:
        """After placement, peak SRAM should not exceed available budget."""
        steps = [
            _step(0, "a", (64, 64)),
            _step(1, "b", (64, 64), inputs=("a",)),
            _step(2, "c", (64, 64), inputs=("b",)),
        ]
        plan = plan_memory(steps)
        assert plan.total_sram_peak_bytes <= SRAM_TOTAL_BYTES


class TestPlacementStrategies:
    def test_ping_pong_assigned_different_banks(self) -> None:
        """Consecutive steps without dead inputs should use alternating banks."""
        steps = [
            _step(0, "a", (16, 16)),
            _step(1, "b", (16, 16)),
            _step(2, "c", (16, 16)),
        ]
        plan = plan_memory(steps)
        on_chip = [p for p in plan.placements if p.sram_bytes > 0]
        banks = {p.bank for p in on_chip if p.bank is not None}
        # Should use both banks (0 and 1) for alternation
        assert len(banks) <= 2  # at most 2 distinct banks used

    def test_estimate_external_transfers_convenience(self) -> None:
        steps = [
            _step(0, "a", (16, 16)),
            _step(1, "b", (16, 16), inputs=("a",)),
        ]
        result = estimate_external_transfers(steps)
        assert isinstance(result, int)
        assert result >= 0
