"""Tests for Track E-1: Real-model workload package generation."""
from __future__ import annotations

import json
from pathlib import Path

import pytest

from l6_toolchain.compiler import CompilerOptions, compile_program
from l6_toolchain.ir import validate_program

# Import the model program builders from the generator
import sys
sys.path.insert(0, str(Path(__file__).resolve().parent.parent))
from generate_model_workloads import (
    _mobilenet_v2_layer1_program,
    _resnet18_block1_program,
    _transformer_qkv_program,
    _transformer_ffn_program,
)


# ---------------------------------------------------------------------------
# MobileNetV2 Layer 1
# ---------------------------------------------------------------------------

class TestMobileNetV2Layer1:
    def test_program_validates(self) -> None:
        program, _ = _mobilenet_v2_layer1_program()
        validate_program(program)

    def test_fusion_reduces_ops(self) -> None:
        """Conv+BN+ReLU should fuse to 1 op."""
        from l6_toolchain.fusion import apply_all_fusions
        program, _ = _mobilenet_v2_layer1_program()
        result = apply_all_fusions(program)
        assert len(result.program.ops) == 1
        assert result.program.ops[0].attrs.get("bn_folded") is True
        assert result.program.ops[0].attrs.get("relu") is True

    def test_compile_produces_artifacts(self, tmp_path: Path) -> None:
        program, tensor_data = _mobilenet_v2_layer1_program()
        options = CompilerOptions(
            package_id="test_mobilenet_v2_layer1",
            output_dir=tmp_path / "mobilenet",
            tiled=True,
            replay_enabled=True,
            tensor_data=tensor_data,
        )
        result = compile_program(program, options=options)

        assert result.plan.total_compute_steps >= 1
        assert Path(result.artifacts.program_package_dir).exists()
        assert len(result.artifacts.replay_package_dirs) >= 1

        manifest = json.loads(Path(result.artifacts.compile_manifest_path).read_text(encoding="utf-8"))
        assert manifest["total_compute_steps"] >= 1


# ---------------------------------------------------------------------------
# ResNet-18 Residual Block
# ---------------------------------------------------------------------------

class TestResNet18Block1:
    def test_program_validates(self) -> None:
        program, _ = _resnet18_block1_program()
        validate_program(program)

    def test_has_residual_add(self) -> None:
        program, _ = _resnet18_block1_program()
        add_ops = [op for op in program.ops if op.kind == "add"]
        assert len(add_ops) == 1
        assert "x" in add_ops[0].inputs  # skip connection from input

    def test_fusion_folds_both_bn_and_relu(self) -> None:
        """Conv1+BN1+ReLU and Conv2+BN2 should fuse; add survives."""
        from l6_toolchain.fusion import apply_all_fusions
        program, _ = _resnet18_block1_program()
        result = apply_all_fusions(program)
        # After fusion: conv1(bn_folded, relu) + conv2(bn_folded) + add = 3 ops
        assert len(result.program.ops) == 3
        conv_ops = [op for op in result.program.ops if op.kind == "conv2d"]
        assert len(conv_ops) == 2
        assert all(op.attrs.get("bn_folded") is True for op in conv_ops)

    def test_compile_produces_artifacts(self, tmp_path: Path) -> None:
        program, tensor_data = _resnet18_block1_program()
        options = CompilerOptions(
            package_id="test_resnet18_block1",
            output_dir=tmp_path / "resnet",
            tiled=True,
            replay_enabled=True,
            tensor_data=tensor_data,
        )
        result = compile_program(program, options=options)

        assert result.plan.total_compute_steps >= 2  # two conv ops
        assert Path(result.artifacts.program_package_dir).exists()
        assert len(result.artifacts.replay_package_dirs) >= 2

        manifest = json.loads(Path(result.artifacts.compile_manifest_path).read_text(encoding="utf-8"))
        assert manifest["total_compute_steps"] >= 2


# ---------------------------------------------------------------------------
# Transformer QKV Projection
# ---------------------------------------------------------------------------

class TestTransformerQKV:
    def test_program_validates(self) -> None:
        program, _ = _transformer_qkv_program()
        validate_program(program)

    def test_single_large_gemm(self) -> None:
        """QKV projection should produce a single compute step."""
        program, _ = _transformer_qkv_program()
        assert len(program.ops) == 1
        assert program.ops[0].kind == "linear"

    def test_compile_produces_multi_tile_package(self, tmp_path: Path) -> None:
        program, tensor_data = _transformer_qkv_program()
        options = CompilerOptions(
            package_id="test_transformer_qkv",
            output_dir=tmp_path / "transformer",
            tiled=True,
            replay_enabled=True,
            tensor_data=tensor_data,
        )
        result = compile_program(program, options=options)

        assert result.plan.total_compute_steps == 1
        # Linear(128, 384) → GEMM(1, 128, 384) → multiple tiles
        sp = result.plan.step_plans[0]
        assert sp.tile_count > 1
        assert sp.estimated_cycles is not None and sp.estimated_cycles > 0

        manifest = json.loads(Path(result.artifacts.compile_manifest_path).read_text(encoding="utf-8"))
        assert manifest["total_estimated_cycles"] > 0


# ---------------------------------------------------------------------------
# Transformer FFN (Linear -> GELU -> Linear) — broader op coverage
# ---------------------------------------------------------------------------

class TestTransformerFFN:
    def test_program_validates(self) -> None:
        program, _ = _transformer_ffn_program()
        validate_program(program)

    def test_has_gelu_between_linears(self) -> None:
        program, _ = _transformer_ffn_program()
        assert [op.kind for op in program.ops] == ["linear", "gelu", "linear"]

    def test_compile_produces_two_compute_steps(self, tmp_path: Path) -> None:
        program, tensor_data = _transformer_ffn_program()
        options = CompilerOptions(
            package_id="test_transformer_ffn",
            output_dir=tmp_path / "ffn",
            tiled=True,
            replay_enabled=True,
            tensor_data=tensor_data,
        )
        result = compile_program(program, options=options)
        # Two linear ops -> two compute steps; gelu lowers to elementwise post-op
        assert result.plan.total_compute_steps == 2
        assert len(result.artifacts.replay_package_dirs) >= 2


# ---------------------------------------------------------------------------
# Cross-model checks
# ---------------------------------------------------------------------------

class TestModelWorkloadCross:
    def test_all_four_programs_valid(self) -> None:
        """Quick validation that all 4 model programs pass IR validation."""
        for builder in [
            _mobilenet_v2_layer1_program,
            _resnet18_block1_program,
            _transformer_qkv_program,
            _transformer_ffn_program,
        ]:
            program, _ = builder()
            validate_program(program)

    def test_all_four_compile(self, tmp_path: Path) -> None:
        """All 4 models compile without errors."""
        builders = [
            ("mobilenet", _mobilenet_v2_layer1_program),
            ("resnet", _resnet18_block1_program),
            ("transformer_qkv", _transformer_qkv_program),
            ("transformer_ffn", _transformer_ffn_program),
        ]
        for name, builder in builders:
            program, tensor_data = builder()
            options = CompilerOptions(
                package_id=f"test_{name}",
                output_dir=tmp_path / name,
                tiled=True,
                replay_enabled=True,
                tensor_data=tensor_data,
            )
            result = compile_program(program, options=options)
            assert result.plan.total_compute_steps >= 1, f"{name} should have at least 1 compute step"
