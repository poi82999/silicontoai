from __future__ import annotations

from dataclasses import dataclass, field
from pathlib import Path
from typing import Any

from .common import json_dumps
from .dma_scheduler import DMAScheduleSequence, build_dma_schedule
from .ir import LoweredOp, Program, export_program_package, lower_program_to_steps, validate_program
from .lowering import TILE_SIZE, TilePlanEntry, plan_linear_tiles
from .replay_bridge import (
    SystemReplaySmokeResult,
    export_and_run_system_replay_smoke,
    export_replay_packages,
)
from .scheduler import (
    analyze_memory_usage,
    estimate_schedule_cost,
    reorder_tiles,
)


# ---------------------------------------------------------------------------
# M5 Dataclasses
# ---------------------------------------------------------------------------

@dataclass(frozen=True)
class CompilerOptions:
    """Top-level compiler configuration."""

    package_id: str = "l6_compile"
    output_dir: str | Path = "l6/generated/l6_compile"
    tiled: bool = True
    replay_enabled: bool = True
    replay_output_dir: str | Path | None = None
    run_replay_smoke: bool = False
    binary_path: str | Path | None = None
    schedule_strategy: str = "weight_reuse"
    include_schedule_metadata: bool = True
    input_shape: tuple[int, ...] | None = None
    tensor_data: dict[str, Any] | None = field(default=None, hash=False)


@dataclass(frozen=True)
class StepCompilePlan:
    """Per-step compile plan with scheduling metadata."""

    step_id: int
    op_name: str
    source_kind: str
    lowered_kind: str
    compute_required: bool
    logical_shape: dict[str, int] | None
    tile_count: int
    schedule_strategy: str | None
    estimated_cycles: int | None
    estimated_dma_cycles: int | None
    memory_fits: bool | None
    replay_package_count: int
    ordered_tiles: tuple[TilePlanEntry, ...] | None = None
    dma_schedule: DMAScheduleSequence | None = None


@dataclass(frozen=True)
class ProgramCompilePlan:
    """Full compile plan for an entire Program."""

    package_id: str
    program: Program
    lowered_steps: tuple[LoweredOp, ...]
    step_plans: tuple[StepCompilePlan, ...]
    total_compute_steps: int
    total_replay_packages: int
    total_estimated_cycles: int
    schedule_strategy: str
    replay_enabled: bool


@dataclass(frozen=True)
class CompilerArtifacts:
    """Filesystem paths produced by materialization."""

    program_package_dir: str
    replay_package_dirs: tuple[str, ...]
    compile_manifest_path: str | None = None


@dataclass(frozen=True)
class CompilerResult:
    """Complete compilation result: plan + artifacts + optional smoke."""

    plan: ProgramCompilePlan
    artifacts: CompilerArtifacts
    replay_smoke: SystemReplaySmokeResult | None = None


# ---------------------------------------------------------------------------
# Layer 1: Import — canonicalize source to Program
# ---------------------------------------------------------------------------

_COMPUTE_LOWERED_KINDS = frozenset({"gemm", "conv2d_im2col_gemm"})


def build_program_from_source(
    source: Program | object,
    *,
    input_shape: tuple[int, ...] | None = None,
) -> Program:
    """Convert *source* into a validated :class:`Program`.

    - If *source* is already a :class:`Program`, validate and return it.
    - If *source* is a PyTorch ``nn.Module``, trace it via ``trace_torch_module``.
    """
    if isinstance(source, Program):
        validate_program(source)
        return source

    # Assume PyTorch nn.Module — import lazily to avoid hard torch dependency.
    from .tracer import trace_torch_module  # noqa: F811

    if input_shape is None:
        raise ValueError("input_shape is required when source is an nn.Module.")
    return trace_torch_module(source, input_shape)


# ---------------------------------------------------------------------------
# Layer 2: Compile Planning
# ---------------------------------------------------------------------------

def _plan_compute_step(
    step_id: int,
    step: LoweredOp,
    *,
    strategy: str,
) -> StepCompilePlan:
    """Build a :class:`StepCompilePlan` for a compute-backed step."""
    m = int(step.attrs["m"])
    k = int(step.attrs["k"])
    n = int(step.attrs["n"])

    # Build a lightweight shape spec for plan_linear_tiles / scheduler
    _shape = type("_Shape", (), {"m": m, "k": k, "n": n})()
    tiles: list[TilePlanEntry] = plan_linear_tiles(_shape)
    ordered_tiles = reorder_tiles(tiles, strategy=strategy)
    schedule = estimate_schedule_cost(ordered_tiles, strategy=strategy)
    memory = analyze_memory_usage(ordered_tiles)

    # Replay package count = unique (m_tile_base, n_tile_base) groups
    replay_groups: set[tuple[int, int]] = set()
    for tile in tiles:
        replay_groups.add((tile.m_tile_base, tile.n_tile_base))

    dma_schedule: DMAScheduleSequence | None
    try:
        dma_schedule = build_dma_schedule(list(schedule.tiles))
    except ValueError:
        # Sub-AXI-beat tiles (e.g. tiny test shapes) cannot produce a DMA schedule.
        dma_schedule = None

    return StepCompilePlan(
        step_id=step_id,
        op_name=step.name,
        source_kind=step.source_kind,
        lowered_kind=step.lowered_kind,
        compute_required=True,
        logical_shape={"m": m, "k": k, "n": n},
        tile_count=len(tiles),
        schedule_strategy=strategy,
        estimated_cycles=schedule.total_cycles,
        estimated_dma_cycles=schedule.total_dma_cycles,
        memory_fits=memory.fits_in_budget,
        replay_package_count=len(replay_groups),
        ordered_tiles=tuple(ordered_tiles),
        dma_schedule=dma_schedule,
    )


def _plan_noncompute_step(step_id: int, step: LoweredOp) -> StepCompilePlan:
    """Build a :class:`StepCompilePlan` for a non-compute step."""
    return StepCompilePlan(
        step_id=step_id,
        op_name=step.name,
        source_kind=step.source_kind,
        lowered_kind=step.lowered_kind,
        compute_required=False,
        logical_shape=None,
        tile_count=0,
        schedule_strategy=None,
        estimated_cycles=None,
        estimated_dma_cycles=None,
        memory_fits=None,
        replay_package_count=0,
    )


def create_compile_plan(
    source: Program | object,
    *,
    options: CompilerOptions,
) -> ProgramCompilePlan:
    """Build a compile plan without materializing any filesystem artifacts.

    Useful for cost inspection and dry-run analysis.
    """
    program = build_program_from_source(source, input_shape=options.input_shape)
    lowered = lower_program_to_steps(program)

    step_plans: list[StepCompilePlan] = []
    for idx, step in enumerate(lowered):
        if step.lowered_kind in _COMPUTE_LOWERED_KINDS:
            step_plans.append(
                _plan_compute_step(idx, step, strategy=options.schedule_strategy)
            )
        else:
            step_plans.append(_plan_noncompute_step(idx, step))

    total_compute = sum(1 for sp in step_plans if sp.compute_required)
    total_replay = sum(sp.replay_package_count for sp in step_plans)
    total_cycles = sum(sp.estimated_cycles for sp in step_plans if sp.estimated_cycles is not None)

    return ProgramCompilePlan(
        package_id=options.package_id,
        program=program,
        lowered_steps=tuple(lowered),
        step_plans=tuple(step_plans),
        total_compute_steps=total_compute,
        total_replay_packages=total_replay,
        total_estimated_cycles=total_cycles,
        schedule_strategy=options.schedule_strategy,
        replay_enabled=options.replay_enabled,
    )


# ---------------------------------------------------------------------------
# Layer 3: Materialization
# ---------------------------------------------------------------------------

def compile_program(
    source: Program | object,
    *,
    options: CompilerOptions,
) -> CompilerResult:
    """End-to-end compile: plan -> export -> optional replay -> result."""
    plan = create_compile_plan(source, options=options)

    output_path = Path(options.output_dir)
    program_package_dir = output_path / "program_package"

    # Build schedule metadata to thread into export
    schedule_metadata = _build_schedule_metadata(plan) if options.include_schedule_metadata else None

    # Phase 4: Export program package
    export_program_package(
        program_package_dir,
        plan.program,
        package_id=options.package_id,
        tiled=options.tiled,
        tensor_data=options.tensor_data,
        schedule_metadata=schedule_metadata,
    )

    # Phase 5: Export replay packages (optional)
    replay_dirs: list[str] = []
    if options.replay_enabled:
        replay_output = Path(options.replay_output_dir) if options.replay_output_dir else output_path / "replay_packages"
        artifacts_list = export_replay_packages(
            program_package_dir,
            replay_output,
        )
        replay_dirs = [a.replay_package_dir for a in artifacts_list]

    # Write compile_manifest.json
    compile_manifest_path = output_path / "compile_manifest.json"
    _write_compile_manifest(plan, compile_manifest_path, program_package_dir, replay_dirs)

    artifacts = CompilerArtifacts(
        program_package_dir=str(program_package_dir),
        replay_package_dirs=tuple(replay_dirs),
        compile_manifest_path=str(compile_manifest_path),
    )

    # Phase 6: Optional smoke
    smoke_result: SystemReplaySmokeResult | None = None
    if options.run_replay_smoke and replay_dirs:
        smoke_result = export_and_run_system_replay_smoke(
            program_package_dir,
            Path(options.replay_output_dir) if options.replay_output_dir else output_path / "replay_packages",
            binary_path=options.binary_path,
        )

    return CompilerResult(plan=plan, artifacts=artifacts, replay_smoke=smoke_result)


# ---------------------------------------------------------------------------
# Layer 4: Reporting
# ---------------------------------------------------------------------------

def _build_schedule_metadata(plan: ProgramCompilePlan) -> dict[int, dict[str, Any]]:
    """Build per-step schedule metadata dict keyed by step_id.

    This is threaded into ``export_program_package`` so that per-step
    manifest.json files include scheduler annotations, and ``tile_order``
    is used by the emitter instead of default M→N→K.
    """
    metadata: dict[int, dict[str, Any]] = {}
    for sp in plan.step_plans:
        if not sp.compute_required:
            continue
        entry: dict[str, Any] = {
            "schedule_strategy": sp.schedule_strategy,
            "estimated_cycles": sp.estimated_cycles,
            "estimated_dma_cycles": sp.estimated_dma_cycles,
            "tile_count": sp.tile_count,
            "replay_package_count": sp.replay_package_count,
            "memory_fits": sp.memory_fits,
        }
        if sp.ordered_tiles is not None:
            entry["tile_order"] = list(sp.ordered_tiles)
        if sp.dma_schedule is not None:
            ds = sp.dma_schedule
            entry["dma_schedule"] = {
                "total_dma_commands": ds.total_dma_commands,
                "split_k_passes": ds.split_k_passes,
                "double_buffer_enabled": ds.double_buffer_enabled,
                "bank_swap_strategy": ds.bank_swap_strategy,
                "sram_feasible": ds.check_memory_feasibility(),
                "sram_model_bank0_bytes": ds.sram_allocation.bank_0_used_bytes,
                "sram_model_bank1_bytes": ds.sram_allocation.bank_1_used_bytes,
            }
        metadata[sp.step_id] = entry
    return metadata


def _write_compile_manifest(
    plan: ProgramCompilePlan,
    path: Path,
    program_package_dir: Path,
    replay_dirs: list[str],
) -> None:
    steps_summary: list[dict[str, object]] = []
    for sp in plan.step_plans:
        entry: dict[str, object] = {
            "step_id": sp.step_id,
            "name": sp.op_name,
            "source_kind": sp.source_kind,
            "lowered_kind": sp.lowered_kind,
            "compute_required": sp.compute_required,
        }
        if sp.compute_required:
            entry["logical_shape"] = sp.logical_shape
            entry["tile_count"] = sp.tile_count
            entry["schedule_strategy"] = sp.schedule_strategy
            entry["estimated_cycles"] = sp.estimated_cycles
            entry["estimated_dma_cycles"] = sp.estimated_dma_cycles
            entry["memory_fits"] = sp.memory_fits
            entry["replay_package_count"] = sp.replay_package_count
            if sp.dma_schedule is not None:
                ds = sp.dma_schedule
                entry["dma_schedule"] = {
                    "total_dma_commands": ds.total_dma_commands,
                    "split_k_passes": ds.split_k_passes,
                    "double_buffer_enabled": ds.double_buffer_enabled,
                    "sram_feasible": ds.check_memory_feasibility(),
                }
        steps_summary.append(entry)

    manifest: dict[str, object] = {
        "manifest_version": "0.1",
        "package_id": plan.package_id,
        "entry": "compile_program",
        "schedule_strategy": plan.schedule_strategy,
        "program_package_dir": str(program_package_dir),
        "replay_enabled": plan.replay_enabled,
        "replay_package_dirs": replay_dirs,
        "total_compute_steps": plan.total_compute_steps,
        "total_replay_packages": plan.total_replay_packages,
        "total_estimated_cycles": plan.total_estimated_cycles,
        "steps": steps_summary,
    }

    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json_dumps(manifest), encoding="utf-8")


__all__ = [
    "CompilerArtifacts",
    "CompilerOptions",
    "CompilerResult",
    "ProgramCompilePlan",
    "StepCompilePlan",
    "build_program_from_source",
    "compile_program",
    "create_compile_plan",
]
