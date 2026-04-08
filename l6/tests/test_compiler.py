from __future__ import annotations

import json
from pathlib import Path

import pytest

from l6_toolchain.api import (
    OpNode,
    Program,
    TensorValue,
    export_program_package,
)
from l6_toolchain.compiler import (
    CompilerArtifacts,
    CompilerOptions,
    CompilerResult,
    ProgramCompilePlan,
    StepCompilePlan,
    build_program_from_source,
    compile_program,
    create_compile_plan,
)


# ---- helpers ---------------------------------------------------------------

def _make_linear_program(m: int = 1, k: int = 4, n: int = 2) -> Program:
    """Minimal linear-only program for testing."""
    return Program(
        inputs=(TensorValue(name="x", shape=(m, k), dtype="int8"),),
        tensors=(
            TensorValue(name="x", shape=(m, k), dtype="int8"),
            TensorValue(name="fc0_out", shape=(m, n), dtype="int32"),
        ),
        ops=(
            OpNode(
                name="fc0",
                kind="linear",
                inputs=("x",),
                outputs=("fc0_out",),
                attrs={"in_features": k, "out_features": n},
            ),
        ),
        outputs=("fc0_out",),
    )


def _make_two_layer_program() -> Program:
    """Two linear layers with relu in between."""
    return Program(
        inputs=(TensorValue(name="x", shape=(1, 4), dtype="int8"),),
        tensors=(
            TensorValue(name="x", shape=(1, 4), dtype="int8"),
            TensorValue(name="fc0_out", shape=(1, 8), dtype="int32"),
            TensorValue(name="relu0_out", shape=(1, 8), dtype="int8"),
            TensorValue(name="fc1_out", shape=(1, 2), dtype="int32"),
        ),
        ops=(
            OpNode(name="fc0", kind="linear", inputs=("x",), outputs=("fc0_out",), attrs={"in_features": 4, "out_features": 8}),
            OpNode(name="relu0", kind="relu", inputs=("fc0_out",), outputs=("relu0_out",)),
            OpNode(name="fc1", kind="linear", inputs=("relu0_out",), outputs=("fc1_out",), attrs={"in_features": 8, "out_features": 2}),
        ),
        outputs=("fc1_out",),
    )


def _make_residual_program() -> Program:
    """Residual block: two linears + add."""
    return Program(
        inputs=(TensorValue(name="x", shape=(1, 16), dtype="int8"),),
        tensors=(
            TensorValue(name="x", shape=(1, 16), dtype="int8"),
            TensorValue(name="fc0_out", shape=(1, 16), dtype="int32"),
            TensorValue(name="fc1_out", shape=(1, 16), dtype="int32"),
            TensorValue(name="add_out", shape=(1, 16), dtype="int32"),
        ),
        ops=(
            OpNode(name="fc0", kind="linear", inputs=("x",), outputs=("fc0_out",), attrs={"in_features": 16, "out_features": 16}),
            OpNode(name="fc1", kind="linear", inputs=("x",), outputs=("fc1_out",), attrs={"in_features": 16, "out_features": 16}),
            OpNode(name="add0", kind="add", inputs=("fc0_out", "fc1_out"), outputs=("add_out",)),
        ),
        outputs=("add_out",),
    )


# ---- Layer 1: build_program_from_source ------------------------------------

class TestBuildProgramFromSource:
    def test_program_passthrough(self) -> None:
        program = _make_linear_program()
        result = build_program_from_source(program)
        assert result is program

    def test_nn_module_trace(self) -> None:
        import torch.nn as nn

        class TinyModel(nn.Module):
            def __init__(self) -> None:
                super().__init__()
                self.fc = nn.Linear(4, 2, bias=False)

            def forward(self, x):
                return self.fc(x)

        program = build_program_from_source(TinyModel(), input_shape=(1, 4))
        assert isinstance(program, Program)
        assert len(program.ops) >= 1

    def test_nn_module_requires_input_shape(self) -> None:
        import torch.nn as nn

        model = nn.Linear(4, 2)
        with pytest.raises(ValueError, match="input_shape is required"):
            build_program_from_source(model)


# ---- Layer 2: create_compile_plan -----------------------------------------

class TestCreateCompilePlan:
    def test_single_linear_plan(self) -> None:
        program = _make_linear_program(m=1, k=4, n=2)
        options = CompilerOptions(package_id="test_single")
        plan = create_compile_plan(program, options=options)

        assert isinstance(plan, ProgramCompilePlan)
        assert plan.package_id == "test_single"
        assert plan.program is program
        assert len(plan.lowered_steps) == 1
        assert len(plan.step_plans) == 1
        assert plan.total_compute_steps == 1
        assert plan.total_estimated_cycles > 0
        assert plan.schedule_strategy == "weight_reuse"

        sp = plan.step_plans[0]
        assert sp.compute_required is True
        assert sp.lowered_kind == "gemm"
        assert sp.logical_shape == {"m": 1, "k": 4, "n": 2}
        assert sp.tile_count >= 1
        assert sp.replay_package_count >= 1
        assert sp.estimated_cycles is not None and sp.estimated_cycles > 0
        assert sp.memory_fits is True

    def test_two_layer_plan_counts(self) -> None:
        program = _make_two_layer_program()
        options = CompilerOptions(package_id="test_two_layer")
        plan = create_compile_plan(program, options=options)

        assert plan.total_compute_steps == 2
        compute_steps = [sp for sp in plan.step_plans if sp.compute_required]
        noncompute_steps = [sp for sp in plan.step_plans if not sp.compute_required]
        assert len(compute_steps) == 2
        assert len(noncompute_steps) == 1  # relu
        assert noncompute_steps[0].lowered_kind == "elementwise_post_op"
        assert noncompute_steps[0].estimated_cycles is None
        assert noncompute_steps[0].tile_count == 0

    def test_residual_block_plan(self) -> None:
        program = _make_residual_program()
        options = CompilerOptions(package_id="test_residual")
        plan = create_compile_plan(program, options=options)

        assert plan.total_compute_steps == 2
        assert len(plan.step_plans) == 3  # fc0, fc1, add
        add_step = plan.step_plans[2]
        assert add_step.compute_required is False
        assert add_step.replay_package_count == 0

    def test_splitk_tile_count(self) -> None:
        """A (1, 32, 16) GEMM should produce 2 tiles (split-K)."""
        program = Program(
            inputs=(TensorValue(name="x", shape=(1, 32), dtype="int8"),),
            tensors=(
                TensorValue(name="x", shape=(1, 32), dtype="int8"),
                TensorValue(name="y", shape=(1, 16), dtype="int32"),
            ),
            ops=(
                OpNode(name="fc0", kind="linear", inputs=("x",), outputs=("y",), attrs={"in_features": 32, "out_features": 16}),
            ),
            outputs=("y",),
        )
        plan = create_compile_plan(program, options=CompilerOptions())
        sp = plan.step_plans[0]
        assert sp.tile_count == 2  # k=32 -> 2 k-tiles
        assert sp.replay_package_count == 1  # single (m=0, n=0) group

    def test_tail_n_tile_count(self) -> None:
        """A (16, 16, 20) GEMM should have 2 (m,n) groups -> 2 replay packages."""
        program = Program(
            inputs=(TensorValue(name="x", shape=(16, 16), dtype="int8"),),
            tensors=(
                TensorValue(name="x", shape=(16, 16), dtype="int8"),
                TensorValue(name="y", shape=(16, 20), dtype="int32"),
            ),
            ops=(
                OpNode(name="fc0", kind="linear", inputs=("x",), outputs=("y",), attrs={"in_features": 16, "out_features": 20}),
            ),
            outputs=("y",),
        )
        plan = create_compile_plan(program, options=CompilerOptions())
        sp = plan.step_plans[0]
        assert sp.replay_package_count == 2  # n=20 -> 2 n-tiles

    def test_nn_module_plan(self) -> None:
        """create_compile_plan should accept an nn.Module source."""
        import torch.nn as nn

        class TinyModel(nn.Module):
            def __init__(self) -> None:
                super().__init__()
                self.fc = nn.Linear(4, 2, bias=False)

            def forward(self, x):
                return self.fc(x)

        options = CompilerOptions(package_id="test_module", input_shape=(1, 4))
        plan = create_compile_plan(TinyModel(), options=options)
        assert plan.total_compute_steps >= 1

    def test_replay_disabled_plan(self) -> None:
        program = _make_linear_program()
        options = CompilerOptions(replay_enabled=False)
        plan = create_compile_plan(program, options=options)
        assert plan.replay_enabled is False
        # replay_package_count is still computed (it's a plan estimate)
        assert plan.total_replay_packages >= 1


# ---- Layer 3: compile_program (materialization) ----------------------------

class TestCompileProgram:
    def test_single_linear_compile(self, tmp_path: Path) -> None:
        program = _make_linear_program()
        options = CompilerOptions(
            package_id="test_compile",
            output_dir=tmp_path / "output",
            replay_enabled=True,
        )
        result = compile_program(program, options=options)

        assert isinstance(result, CompilerResult)
        assert isinstance(result.plan, ProgramCompilePlan)
        assert isinstance(result.artifacts, CompilerArtifacts)
        assert result.replay_smoke is None

        # Check program package directory
        pkg_dir = Path(result.artifacts.program_package_dir)
        assert pkg_dir.exists()
        assert (pkg_dir / "manifest.json").exists()
        assert (pkg_dir / "steps.json").exists()

        # Check replay packages were produced
        assert len(result.artifacts.replay_package_dirs) >= 1
        for rdir in result.artifacts.replay_package_dirs:
            assert Path(rdir).exists()

    def test_compile_manifest_written(self, tmp_path: Path) -> None:
        program = _make_linear_program()
        options = CompilerOptions(
            package_id="manifest_test",
            output_dir=tmp_path / "output",
        )
        result = compile_program(program, options=options)

        manifest_path = Path(result.artifacts.compile_manifest_path)
        assert manifest_path.exists()

        manifest = json.loads(manifest_path.read_text(encoding="utf-8"))
        assert manifest["manifest_version"] == "0.1"
        assert manifest["package_id"] == "manifest_test"
        assert manifest["entry"] == "compile_program"
        assert manifest["total_compute_steps"] == 1
        assert manifest["total_estimated_cycles"] > 0
        assert isinstance(manifest["steps"], list)
        assert len(manifest["steps"]) == 1

        step = manifest["steps"][0]
        assert step["compute_required"] is True
        assert step["lowered_kind"] == "gemm"
        assert "logical_shape" in step
        assert "estimated_cycles" in step

    def test_two_layer_compile(self, tmp_path: Path) -> None:
        program = _make_two_layer_program()
        options = CompilerOptions(
            package_id="two_layer",
            output_dir=tmp_path / "two_layer",
        )
        result = compile_program(program, options=options)

        assert result.plan.total_compute_steps == 2
        assert len(result.artifacts.replay_package_dirs) >= 2

        manifest = json.loads(Path(result.artifacts.compile_manifest_path).read_text(encoding="utf-8"))
        assert manifest["total_compute_steps"] == 2
        assert len(manifest["steps"]) == 3  # fc0 + relu + fc1

    def test_residual_compile(self, tmp_path: Path) -> None:
        program = _make_residual_program()
        options = CompilerOptions(
            package_id="residual",
            output_dir=tmp_path / "residual",
        )
        result = compile_program(program, options=options)
        assert result.plan.total_compute_steps == 2

    def test_replay_disabled_skips_replay(self, tmp_path: Path) -> None:
        program = _make_linear_program()
        options = CompilerOptions(
            package_id="no_replay",
            output_dir=tmp_path / "no_replay",
            replay_enabled=False,
        )
        result = compile_program(program, options=options)

        assert len(result.artifacts.replay_package_dirs) == 0

        # Program package should still exist
        assert Path(result.artifacts.program_package_dir).exists()

        manifest = json.loads(Path(result.artifacts.compile_manifest_path).read_text(encoding="utf-8"))
        assert manifest["replay_enabled"] is False

    def test_nn_module_compile(self, tmp_path: Path) -> None:
        import torch.nn as nn

        class TinyModel(nn.Module):
            def __init__(self) -> None:
                super().__init__()
                self.fc = nn.Linear(4, 2, bias=False)

            def forward(self, x):
                return self.fc(x)

        options = CompilerOptions(
            package_id="module_compile",
            output_dir=tmp_path / "module",
            input_shape=(1, 4),
        )
        result = compile_program(TinyModel(), options=options)
        assert Path(result.artifacts.program_package_dir).exists()
        assert result.plan.total_compute_steps >= 1

    def test_custom_replay_output_dir(self, tmp_path: Path) -> None:
        program = _make_linear_program()
        replay_dir = tmp_path / "custom_replay"
        options = CompilerOptions(
            package_id="custom_replay",
            output_dir=tmp_path / "output",
            replay_output_dir=replay_dir,
        )
        result = compile_program(program, options=options)

        # Replay packages should be under the custom directory
        for rdir in result.artifacts.replay_package_dirs:
            assert str(replay_dir) in rdir

    def test_splitk_compile(self, tmp_path: Path) -> None:
        """Split-K program should produce replay packages correctly."""
        program = Program(
            inputs=(TensorValue(name="x", shape=(1, 32), dtype="int8"),),
            tensors=(
                TensorValue(name="x", shape=(1, 32), dtype="int8"),
                TensorValue(name="y", shape=(1, 16), dtype="int32"),
            ),
            ops=(
                OpNode(name="fc0", kind="linear", inputs=("x",), outputs=("y",), attrs={"in_features": 32, "out_features": 16}),
            ),
            outputs=("y",),
        )
        options = CompilerOptions(
            package_id="splitk",
            output_dir=tmp_path / "splitk",
        )
        result = compile_program(program, options=options)
        assert result.plan.step_plans[0].tile_count == 2
        assert len(result.artifacts.replay_package_dirs) >= 1


# ---- Scheduler-export bridge tests ----------------------------------------

class TestSchedulerExportBridge:
    def test_ordered_tiles_stored_in_plan(self) -> None:
        """StepCompilePlan should carry ordered_tiles from scheduler."""
        program = _make_linear_program(m=1, k=4, n=2)
        options = CompilerOptions()
        plan = create_compile_plan(program, options=options)
        sp = plan.step_plans[0]
        assert sp.ordered_tiles is not None
        assert len(sp.ordered_tiles) == sp.tile_count

    def test_weight_reuse_order_materialized_in_package(self, tmp_path: Path) -> None:
        """For multi-tile shapes, compile_program should use scheduler tile order."""
        # 32x16x32: has 2 m-tiles × 2 n-tiles × 1 k-tile = 4 tiles
        # weight_reuse reorders from M→N→K to N→M→K
        program = Program(
            inputs=(TensorValue(name="x", shape=(32, 16), dtype="int8"),),
            tensors=(
                TensorValue(name="x", shape=(32, 16), dtype="int8"),
                TensorValue(name="y", shape=(32, 32), dtype="int32"),
            ),
            ops=(
                OpNode(name="fc0", kind="linear", inputs=("x",), outputs=("y",), attrs={"in_features": 16, "out_features": 32}),
            ),
            outputs=("y",),
        )
        options = CompilerOptions(
            package_id="reorder_test",
            output_dir=tmp_path / "reorder",
            schedule_strategy="weight_reuse",
        )
        result = compile_program(program, options=options)

        # Read the tiles.json from the compute package to verify order
        pkg = Path(result.artifacts.program_package_dir)
        tiles_json_path = pkg / "steps" / "step_000_fc0" / "compute_package" / "tiles.json"
        tiles_data = json.loads(tiles_json_path.read_text(encoding="utf-8"))
        tiles = tiles_data["tiles"]

        # weight_reuse should sort N-major: first two tiles share n_tile_base=0
        # then next two share n_tile_base=16
        n_bases = [t["n_tile_base"] for t in tiles]
        # In N-major order: [0, 0, 16, 16] (both m-tiles for n=0 first)
        assert n_bases == [0, 0, 16, 16], f"Expected N-major order, got n_bases={n_bases}"

    def test_schedule_metadata_in_step_manifest(self, tmp_path: Path) -> None:
        """Per-step manifest.json should include compiler schedule metadata."""
        program = _make_linear_program()
        options = CompilerOptions(
            package_id="meta_test",
            output_dir=tmp_path / "meta",
            include_schedule_metadata=True,
        )
        result = compile_program(program, options=options)

        pkg = Path(result.artifacts.program_package_dir)
        step_manifest_path = pkg / "steps" / "step_000_fc0" / "manifest.json"
        step_manifest = json.loads(step_manifest_path.read_text(encoding="utf-8"))

        assert "compiler" in step_manifest
        compiler_meta = step_manifest["compiler"]
        assert compiler_meta["schedule_strategy"] == "weight_reuse"
        assert isinstance(compiler_meta["estimated_cycles"], int)
        assert compiler_meta["estimated_cycles"] > 0
        assert isinstance(compiler_meta["estimated_dma_cycles"], int)
        assert isinstance(compiler_meta["memory_fits"], bool)
        assert "tile_order" not in compiler_meta  # tile_order is internal, not serialized

    def test_no_metadata_when_disabled(self, tmp_path: Path) -> None:
        """include_schedule_metadata=False should omit compiler block from manifests."""
        program = _make_linear_program()
        options = CompilerOptions(
            package_id="no_meta",
            output_dir=tmp_path / "no_meta",
            include_schedule_metadata=False,
        )
        result = compile_program(program, options=options)

        pkg = Path(result.artifacts.program_package_dir)
        step_manifest_path = pkg / "steps" / "step_000_fc0" / "manifest.json"
        step_manifest = json.loads(step_manifest_path.read_text(encoding="utf-8"))
        assert "compiler" not in step_manifest

    def test_noncompute_step_has_no_metadata(self, tmp_path: Path) -> None:
        """Non-compute steps (relu) should not have compiler metadata."""
        program = _make_two_layer_program()
        options = CompilerOptions(
            package_id="noncompute_meta",
            output_dir=tmp_path / "noncompute",
        )
        result = compile_program(program, options=options)

        pkg = Path(result.artifacts.program_package_dir)
        relu_manifest_path = pkg / "steps" / "step_001_relu0" / "manifest.json"
        relu_manifest = json.loads(relu_manifest_path.read_text(encoding="utf-8"))
        assert "compiler" not in relu_manifest


# ---- CLI entry point tests -------------------------------------------------

class TestCompilerCLI:
    def test_cli_compile_from_program_json(self, tmp_path: Path) -> None:
        """CLI should accept --program-json and produce artifacts."""
        program_json = {
            "inputs": [{"name": "x", "shape": [1, 4], "dtype": "int8"}],
            "tensors": [
                {"name": "x", "shape": [1, 4], "dtype": "int8"},
                {"name": "y", "shape": [1, 2], "dtype": "int32"},
            ],
            "ops": [
                {"name": "fc0", "kind": "linear", "inputs": ["x"], "outputs": ["y"], "attrs": {"in_features": 4, "out_features": 2}},
            ],
            "outputs": ["y"],
        }
        json_path = tmp_path / "program.json"
        json_path.write_text(json.dumps(program_json), encoding="utf-8")

        output_dir = tmp_path / "cli_output"
        from l6_toolchain.__main__ import main

        main([
            "compile",
            "--output-dir", str(output_dir),
            "--package-id", "cli_test",
            "--program-json", str(json_path),
        ])

        assert (output_dir / "compile_manifest.json").exists()
        assert (output_dir / "program_package" / "manifest.json").exists()


# ---- DMA scheduler integration tests ----------------------------------------

class TestDMASchedulerIntegration:
    def test_step_plan_has_dma_schedule(self) -> None:
        """StepCompilePlan should carry a populated DMAScheduleSequence."""
        from l6_toolchain.dma_scheduler import DMAScheduleSequence
        # Use a realistic tile size: 16x16 activation = 512 bytes, AXI-aligned.
        program = _make_linear_program(m=16, k=16, n=16)
        plan = create_compile_plan(program, options=CompilerOptions())
        sp = plan.step_plans[0]
        assert sp.dma_schedule is not None
        assert isinstance(sp.dma_schedule, DMAScheduleSequence)
        assert sp.dma_schedule.total_dma_commands > 0

    def test_noncompute_step_has_no_dma_schedule(self) -> None:
        """Non-compute steps should have dma_schedule=None."""
        program = _make_two_layer_program()
        plan = create_compile_plan(program, options=CompilerOptions())
        relu_step = next(sp for sp in plan.step_plans if not sp.compute_required)
        assert relu_step.dma_schedule is None

    def test_splitk_dma_schedule_has_multiple_commands(self) -> None:
        """A split-K schedule (k=32, 2 k-passes) should produce >= 4 DMA commands."""
        # k=32 → 2 k-tile passes of tile_k=16; each pass issues 2 commands (act+wt) = 4 total.
        # Note: split_k_passes is based on tile_k dimension changes, not tile count,
        # so it correctly stays at 1 for uniform tile_k split-K. total_dma_commands
        # correctly reflects the doubled command count.
        program = Program(
            inputs=(TensorValue(name="x", shape=(16, 32), dtype="int8"),),
            tensors=(
                TensorValue(name="x", shape=(16, 32), dtype="int8"),
                TensorValue(name="y", shape=(16, 16), dtype="int32"),
            ),
            ops=(
                OpNode(name="fc0", kind="linear", inputs=("x",), outputs=("y",),
                       attrs={"in_features": 32, "out_features": 16}),
            ),
            outputs=("y",),
        )
        plan = create_compile_plan(program, options=CompilerOptions())
        sp = plan.step_plans[0]
        assert sp.dma_schedule is not None
        assert sp.dma_schedule.total_dma_commands >= 4

    def test_dma_schedule_in_compile_manifest(self, tmp_path: Path) -> None:
        """compile_manifest.json step entries should include dma_schedule summary."""
        # Use a realistic tile size so the DMA schedule is computed (not None).
        program = _make_linear_program(m=16, k=16, n=16)
        options = CompilerOptions(package_id="dma_manifest", output_dir=tmp_path / "out")
        result = compile_program(program, options=options)

        manifest = json.loads(Path(result.artifacts.compile_manifest_path).read_text(encoding="utf-8"))
        step = manifest["steps"][0]
        assert "dma_schedule" in step
        dma = step["dma_schedule"]
        assert isinstance(dma["total_dma_commands"], int)
        assert dma["total_dma_commands"] > 0
        assert isinstance(dma["split_k_passes"], int)
        assert dma["split_k_passes"] >= 1
        assert isinstance(dma["double_buffer_enabled"], bool)
        assert isinstance(dma["sram_feasible"], bool)

    def test_dma_schedule_sram_feasible_for_small_tile(self) -> None:
        """A single 16×16×16 tile should fit in 64KB SRAM budget."""
        program = _make_linear_program(m=16, k=16, n=16)
        plan = create_compile_plan(program, options=CompilerOptions())
        sp = plan.step_plans[0]
        assert sp.dma_schedule is not None
        assert sp.dma_schedule.sram_allocation.is_feasible() is True

    def test_double_buffering_enabled(self) -> None:
        """DMA schedule should have double-buffering enabled (ping-pong strategy)."""
        # Use a realistic tile size so the DMA schedule is computed (not None).
        program = _make_linear_program(m=16, k=16, n=16)
        plan = create_compile_plan(program, options=CompilerOptions())
        sp = plan.step_plans[0]
        assert sp.dma_schedule is not None
        assert sp.dma_schedule.double_buffer_enabled is True
        assert sp.dma_schedule.bank_swap_strategy == "ping-pong"

