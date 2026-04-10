"""Tests for l6_toolchain.fusion — operator fusion passes."""
from __future__ import annotations

import numpy as np
import pytest

from l6_toolchain.fusion import (
    FusionResult,
    apply_all_fusions,
    apply_conv_bn_folding,
    apply_conv_relu_fusion,
    apply_linear_relu_fusion,
)
from l6_toolchain.ir import OpNode, Program, TensorValue, validate_program


# ---------------------------------------------------------------------------
# Helpers: build small programs for testing
# ---------------------------------------------------------------------------

def _linear_relu_program() -> Program:
    """Linear → ReLU, two ops."""
    return Program(
        inputs=(TensorValue("x", (1, 16), "int8"),),
        tensors=(
            TensorValue("x", (1, 16), "int8"),
            TensorValue("fc0_out", (1, 16), "int32"),
            TensorValue("relu0_out", (1, 16), "int8"),
        ),
        ops=(
            OpNode("fc0", "linear", ("x",), ("fc0_out",), {"in_features": 16, "out_features": 16}),
            OpNode("relu0", "relu", ("fc0_out",), ("relu0_out",)),
        ),
        outputs=("relu0_out",),
    )


def _conv_relu_program() -> Program:
    """Conv2d → ReLU."""
    return Program(
        inputs=(TensorValue("x", (1, 3, 8, 8), "int8"),),
        tensors=(
            TensorValue("x", (1, 3, 8, 8), "int8"),
            TensorValue("conv0_out", (1, 16, 8, 8), "int8"),
            TensorValue("relu0_out", (1, 16, 8, 8), "int8"),
        ),
        ops=(
            OpNode("conv0", "conv2d", ("x",), ("conv0_out",), {
                "in_channels": 3, "out_channels": 16,
                "kernel_size": (3, 3), "stride": (1, 1),
                "padding": (1, 1), "dilation": (1, 1), "groups": 1,
            }),
            OpNode("relu0", "relu", ("conv0_out",), ("relu0_out",)),
        ),
        outputs=("relu0_out",),
    )


def _conv_bn_program() -> Program:
    """Conv2d → BatchNorm."""
    return Program(
        inputs=(TensorValue("x", (1, 3, 8, 8), "int8"),),
        tensors=(
            TensorValue("x", (1, 3, 8, 8), "int8"),
            TensorValue("conv0_out", (1, 16, 8, 8), "int8"),
            TensorValue("bn0_out", (1, 16, 8, 8), "int8"),
        ),
        ops=(
            OpNode("conv0", "conv2d", ("x",), ("conv0_out",), {
                "in_channels": 3, "out_channels": 16,
                "kernel_size": (3, 3), "stride": (1, 1),
                "padding": (1, 1), "dilation": (1, 1), "groups": 1,
            }),
            OpNode("bn0", "batch_norm", ("conv0_out",), ("bn0_out",), {
                "num_features": 16, "eps": 1e-5,
            }),
        ),
        outputs=("bn0_out",),
    )


def _conv_bn_relu_program() -> Program:
    """Conv2d → BatchNorm → ReLU — tests chained fusion."""
    return Program(
        inputs=(TensorValue("x", (1, 3, 8, 8), "int8"),),
        tensors=(
            TensorValue("x", (1, 3, 8, 8), "int8"),
            TensorValue("conv0_out", (1, 16, 8, 8), "int8"),
            TensorValue("bn0_out", (1, 16, 8, 8), "int8"),
            TensorValue("relu0_out", (1, 16, 8, 8), "int8"),
        ),
        ops=(
            OpNode("conv0", "conv2d", ("x",), ("conv0_out",), {
                "in_channels": 3, "out_channels": 16,
                "kernel_size": (3, 3), "stride": (1, 1),
                "padding": (1, 1), "dilation": (1, 1), "groups": 1,
            }),
            OpNode("bn0", "batch_norm", ("conv0_out",), ("bn0_out",), {
                "num_features": 16, "eps": 1e-5,
            }),
            OpNode("relu0", "relu", ("bn0_out",), ("relu0_out",)),
        ),
        outputs=("relu0_out",),
    )


def _two_linear_relu_program() -> Program:
    """fc0 → relu0 → fc1 → relu1 — two fusible pairs."""
    return Program(
        inputs=(TensorValue("x", (1, 16), "int8"),),
        tensors=(
            TensorValue("x", (1, 16), "int8"),
            TensorValue("fc0_out", (1, 16), "int32"),
            TensorValue("relu0_out", (1, 16), "int8"),
            TensorValue("fc1_out", (1, 4), "int32"),
            TensorValue("relu1_out", (1, 4), "int8"),
        ),
        ops=(
            OpNode("fc0", "linear", ("x",), ("fc0_out",), {"in_features": 16, "out_features": 16}),
            OpNode("relu0", "relu", ("fc0_out",), ("relu0_out",)),
            OpNode("fc1", "linear", ("relu0_out",), ("fc1_out",), {"in_features": 16, "out_features": 4}),
            OpNode("relu1", "relu", ("fc1_out",), ("relu1_out",)),
        ),
        outputs=("relu1_out",),
    )


# ---------------------------------------------------------------------------
# Pass 1: Linear + ReLU
# ---------------------------------------------------------------------------

class TestLinearReluFusion:
    def test_fuses_linear_relu_pair(self) -> None:
        prog = _linear_relu_program()
        result = apply_linear_relu_fusion(prog)

        assert len(result.fusions_applied) == 1
        assert "linear_relu:fc0+relu0" in result.fusions_applied[0]

        fused = result.program
        assert len(fused.ops) == 1
        assert fused.ops[0].kind == "linear"
        assert fused.ops[0].attrs["relu"] is True
        assert fused.ops[0].outputs == ("relu0_out",)
        validate_program(fused)

    def test_intermediate_tensor_removed(self) -> None:
        prog = _linear_relu_program()
        result = apply_linear_relu_fusion(prog)
        tensor_names = {t.name for t in result.program.tensors}
        assert "fc0_out" not in tensor_names
        assert "relu0_out" in tensor_names

    def test_fuses_two_pairs(self) -> None:
        prog = _two_linear_relu_program()
        result = apply_linear_relu_fusion(prog)

        assert len(result.fusions_applied) == 2
        assert len(result.program.ops) == 2
        for op in result.program.ops:
            assert op.attrs.get("relu") is True
        validate_program(result.program)

    def test_skips_when_no_relu_follows(self) -> None:
        prog = Program(
            inputs=(TensorValue("x", (1, 16), "int8"),),
            tensors=(
                TensorValue("x", (1, 16), "int8"),
                TensorValue("fc0_out", (1, 16), "int32"),
            ),
            ops=(
                OpNode("fc0", "linear", ("x",), ("fc0_out",), {"in_features": 16, "out_features": 16}),
            ),
            outputs=("fc0_out",),
        )
        result = apply_linear_relu_fusion(prog)
        assert len(result.fusions_applied) == 0
        assert result.program is prog  # identity

    def test_skips_when_intermediate_is_program_output(self) -> None:
        """If the linear output is also a program output, skip fusion."""
        prog = Program(
            inputs=(TensorValue("x", (1, 16), "int8"),),
            tensors=(
                TensorValue("x", (1, 16), "int8"),
                TensorValue("fc0_out", (1, 16), "int32"),
                TensorValue("relu0_out", (1, 16), "int8"),
            ),
            ops=(
                OpNode("fc0", "linear", ("x",), ("fc0_out",), {"in_features": 16, "out_features": 16}),
                OpNode("relu0", "relu", ("fc0_out",), ("relu0_out",)),
            ),
            outputs=("fc0_out", "relu0_out"),  # fc0_out is also output
        )
        result = apply_linear_relu_fusion(prog)
        assert len(result.fusions_applied) == 0


# ---------------------------------------------------------------------------
# Pass 2: Conv2d + ReLU
# ---------------------------------------------------------------------------

class TestConvReluFusion:
    def test_fuses_conv_relu_pair(self) -> None:
        prog = _conv_relu_program()
        result = apply_conv_relu_fusion(prog)

        assert len(result.fusions_applied) == 1
        fused = result.program
        assert len(fused.ops) == 1
        assert fused.ops[0].kind == "conv2d"
        assert fused.ops[0].attrs["relu"] is True
        assert fused.ops[0].outputs == ("relu0_out",)
        validate_program(fused)

    def test_intermediate_tensor_removed(self) -> None:
        prog = _conv_relu_program()
        result = apply_conv_relu_fusion(prog)
        tensor_names = {t.name for t in result.program.tensors}
        assert "conv0_out" not in tensor_names


# ---------------------------------------------------------------------------
# Pass 3: Conv2d + BatchNorm folding
# ---------------------------------------------------------------------------

class TestConvBnFolding:
    def test_folds_conv_bn_pair(self) -> None:
        prog = _conv_bn_program()
        result = apply_conv_bn_folding(prog)

        assert len(result.fusions_applied) == 1
        fused = result.program
        assert len(fused.ops) == 1
        assert fused.ops[0].kind == "conv2d"
        assert fused.ops[0].attrs["bn_folded"] is True
        assert fused.ops[0].outputs == ("bn0_out",)
        validate_program(fused)

    def test_numeric_weight_folding(self) -> None:
        """When tensor_data is provided, BN params fold into conv weight."""
        prog = _conv_bn_program()
        out_ch = 16
        in_ch = 3
        tensor_data: dict = {
            "conv0_weight": np.ones((out_ch, in_ch, 3, 3), dtype=np.float32),
            "bn0_weight": np.full(out_ch, 2.0, dtype=np.float32),     # gamma
            "bn0_bias": np.zeros(out_ch, dtype=np.float32),            # beta
            "bn0_running_mean": np.zeros(out_ch, dtype=np.float32),
            "bn0_running_var": np.ones(out_ch, dtype=np.float32),
        }
        result = apply_conv_bn_folding(prog, tensor_data=tensor_data)

        assert result.fusions_applied
        assert result.program.ops[0].attrs.get("bn_weights_folded_numerically") is True

        # scale = gamma / sqrt(var + eps) = 2 / sqrt(1 + 1e-5) ≈ 2.0
        folded_w = tensor_data["conv0_weight"]
        np.testing.assert_allclose(folded_w, 2.0, rtol=1e-4)

        # folded_bias = scale * (0 - 0) + 0 = 0
        folded_b = tensor_data["conv0_bias"]
        np.testing.assert_allclose(folded_b, 0.0, atol=1e-4)

    def test_weight_folding_with_nonzero_mean_and_bias(self) -> None:
        """Verify folded bias accounts for running_mean and original bias."""
        prog = _conv_bn_program()
        out_ch = 16
        in_ch = 3
        tensor_data: dict = {
            "conv0_weight": np.ones((out_ch, in_ch, 3, 3), dtype=np.float32) * 0.5,
            "conv0_bias": np.full(out_ch, 1.0, dtype=np.float32),
            "bn0_weight": np.full(out_ch, 2.0, dtype=np.float32),      # gamma = 2
            "bn0_bias": np.full(out_ch, 0.5, dtype=np.float32),        # beta = 0.5
            "bn0_running_mean": np.full(out_ch, 0.1, dtype=np.float32),
            "bn0_running_var": np.full(out_ch, 4.0, dtype=np.float32),  # std = 2
        }
        result = apply_conv_bn_folding(prog, tensor_data=tensor_data)

        # scale = gamma / sqrt(var + eps) = 2 / sqrt(4 + 1e-5) ≈ 1.0
        scale = 2.0 / np.sqrt(4.0 + 1e-5)
        expected_w = 0.5 * scale
        np.testing.assert_allclose(tensor_data["conv0_weight"], expected_w, rtol=1e-5)

        # folded_bias = scale * (bias - mean) + beta = scale * (1.0 - 0.1) + 0.5
        expected_b = scale * (1.0 - 0.1) + 0.5
        np.testing.assert_allclose(tensor_data["conv0_bias"], expected_b, rtol=1e-5)

    def test_no_tensor_data_stores_structural_info(self) -> None:
        """Without tensor_data, structural BN info is recorded in attrs."""
        prog = _conv_bn_program()
        result = apply_conv_bn_folding(prog, tensor_data=None)

        attrs = result.program.ops[0].attrs
        assert attrs["bn_folded"] is True
        assert attrs["bn_num_features"] == 16


# ---------------------------------------------------------------------------
# Composite: apply_all_fusions
# ---------------------------------------------------------------------------

class TestApplyAllFusions:
    def test_conv_bn_relu_chain(self) -> None:
        """Conv2d → BN → ReLU should become a single fused conv op."""
        prog = _conv_bn_relu_program()
        result = apply_all_fusions(prog)

        # BN folding first, then conv_relu fusion on the result
        assert len(result.fusions_applied) == 2
        fused = result.program
        assert len(fused.ops) == 1
        op = fused.ops[0]
        assert op.kind == "conv2d"
        assert op.attrs["bn_folded"] is True
        assert op.attrs["relu"] is True
        assert op.outputs == ("relu0_out",)
        validate_program(fused)

    def test_mixed_linear_and_conv_fusions(self) -> None:
        """Program with both linear+relu and conv+relu pairs."""
        prog = Program(
            inputs=(TensorValue("x", (1, 3, 8, 8), "int8"),),
            tensors=(
                TensorValue("x", (1, 3, 8, 8), "int8"),
                TensorValue("conv0_out", (1, 16, 8, 8), "int8"),
                TensorValue("relu0_out", (1, 16, 8, 8), "int8"),
                TensorValue("flat0_out", (1, 1024), "int8"),
                TensorValue("fc0_out", (1, 10), "int32"),
                TensorValue("relu1_out", (1, 10), "int8"),
            ),
            ops=(
                OpNode("conv0", "conv2d", ("x",), ("conv0_out",), {
                    "in_channels": 3, "out_channels": 16,
                    "kernel_size": (3, 3), "stride": (1, 1),
                    "padding": (1, 1), "dilation": (1, 1), "groups": 1,
                }),
                OpNode("relu0", "relu", ("conv0_out",), ("relu0_out",)),
                OpNode("flat0", "flatten", ("relu0_out",), ("flat0_out",), {"start_dim": 1}),
                OpNode("fc0", "linear", ("flat0_out",), ("fc0_out",), {"in_features": 1024, "out_features": 10}),
                OpNode("relu1", "relu", ("fc0_out",), ("relu1_out",)),
            ),
            outputs=("relu1_out",),
        )
        result = apply_all_fusions(prog)

        # conv+relu, linear+relu → 2 fusions, flatten survives
        assert len(result.fusions_applied) == 2
        assert len(result.program.ops) == 3  # fused_conv, flatten, fused_linear
        validate_program(result.program)

    def test_selective_disable(self) -> None:
        """Disabling passes via kwargs."""
        prog = _linear_relu_program()
        result = apply_all_fusions(prog, enable_linear_relu=False)
        assert len(result.fusions_applied) == 0

    def test_noop_on_program_with_no_fusible_pairs(self) -> None:
        prog = Program(
            inputs=(TensorValue("x", (1, 16), "int8"),),
            tensors=(
                TensorValue("x", (1, 16), "int8"),
                TensorValue("fc0_out", (1, 4), "int32"),
            ),
            ops=(
                OpNode("fc0", "linear", ("x",), ("fc0_out",), {"in_features": 16, "out_features": 4}),
            ),
            outputs=("fc0_out",),
        )
        result = apply_all_fusions(prog)
        assert len(result.fusions_applied) == 0
        assert result.program is prog
