from __future__ import annotations

import json
from pathlib import Path

import numpy as np
import pytest

torch = pytest.importorskip("torch", reason="torch is not installed")
nn = pytest.importorskip("torch.nn", reason="torch is not installed")

from l6_toolchain.api import (
    OpNode,
    Program,
    TensorValue,
    export_program_package,
    lower_program_to_steps,
    trace_torch_module,
    validate_program,
)


# --- New op lowering/validation tests ---


def test_lower_add_op() -> None:
    program = Program(
        inputs=(
            TensorValue(name="a", shape=(1, 4), dtype="int32"),
            TensorValue(name="b", shape=(1, 4), dtype="int32"),
        ),
        tensors=(
            TensorValue(name="a", shape=(1, 4), dtype="int32"),
            TensorValue(name="b", shape=(1, 4), dtype="int32"),
            TensorValue(name="c", shape=(1, 4), dtype="int32"),
        ),
        ops=(
            OpNode(name="add0", kind="add", inputs=("a", "b"), outputs=("c",)),
        ),
        outputs=("c",),
    )
    validate_program(program)
    steps = lower_program_to_steps(program)
    assert len(steps) == 1
    assert steps[0].lowered_kind == "elementwise_post_op"
    assert steps[0].source_kind == "add"


def test_lower_batch_norm_op() -> None:
    program = Program(
        inputs=(TensorValue(name="x", shape=(1, 2, 4, 4), dtype="int8"),),
        tensors=(
            TensorValue(name="x", shape=(1, 2, 4, 4), dtype="int8"),
            TensorValue(name="bn_out", shape=(1, 2, 4, 4), dtype="int8"),
        ),
        ops=(
            OpNode(
                name="bn0",
                kind="batch_norm",
                inputs=("x",),
                outputs=("bn_out",),
                attrs={"num_features": 2, "eps": 1e-5, "momentum": 0.1},
            ),
        ),
        outputs=("bn_out",),
    )
    validate_program(program)
    steps = lower_program_to_steps(program)
    assert len(steps) == 1
    assert steps[0].lowered_kind == "elementwise_post_op"
    assert steps[0].source_kind == "batch_norm"


def test_lower_max_pool2d_op() -> None:
    program = Program(
        inputs=(TensorValue(name="x", shape=(1, 1, 4, 4), dtype="int8"),),
        tensors=(
            TensorValue(name="x", shape=(1, 1, 4, 4), dtype="int8"),
            TensorValue(name="pool_out", shape=(1, 1, 2, 2), dtype="int8"),
        ),
        ops=(
            OpNode(
                name="pool0",
                kind="max_pool2d",
                inputs=("x",),
                outputs=("pool_out",),
                attrs={"kernel_size": 2, "stride": 2, "padding": 0},
            ),
        ),
        outputs=("pool_out",),
    )
    validate_program(program)
    steps = lower_program_to_steps(program)
    assert len(steps) == 1
    assert steps[0].lowered_kind == "elementwise_post_op"
    assert steps[0].source_kind == "max_pool2d"
    assert steps[0].attrs["kernel_size"] == (2, 2)


def test_lower_adaptive_avg_pool2d_op() -> None:
    program = Program(
        inputs=(TensorValue(name="x", shape=(1, 1, 4, 4), dtype="int8"),),
        tensors=(
            TensorValue(name="x", shape=(1, 1, 4, 4), dtype="int8"),
            TensorValue(name="pool_out", shape=(1, 1, 1, 1), dtype="int8"),
        ),
        ops=(
            OpNode(
                name="apool0",
                kind="adaptive_avg_pool2d",
                inputs=("x",),
                outputs=("pool_out",),
                attrs={"output_size": (1, 1)},
            ),
        ),
        outputs=("pool_out",),
    )
    validate_program(program)
    steps = lower_program_to_steps(program)
    assert len(steps) == 1
    assert steps[0].lowered_kind == "elementwise_post_op"
    assert steps[0].source_kind == "adaptive_avg_pool2d"


# --- Execution with real data tests ---


def test_execute_add_op(tmp_path: Path) -> None:
    program = Program(
        inputs=(
            TensorValue(name="a", shape=(1, 4), dtype="int32"),
            TensorValue(name="b", shape=(1, 4), dtype="int32"),
        ),
        tensors=(
            TensorValue(name="a", shape=(1, 4), dtype="int32"),
            TensorValue(name="b", shape=(1, 4), dtype="int32"),
            TensorValue(name="c", shape=(1, 4), dtype="int32"),
        ),
        ops=(
            OpNode(name="add0", kind="add", inputs=("a", "b"), outputs=("c",)),
        ),
        outputs=("c",),
    )
    export_program_package(
        tmp_path / "add_test",
        program,
        tensor_data={"a": [[1, 2, 3, 4]], "b": [[10, 20, 30, 40]]},
    )
    step_manifest = json.loads((tmp_path / "add_test" / "steps" / "step_000_add0" / "manifest.json").read_text())
    assert step_manifest["runtime"]["output_summary"]["min"] == 11
    assert step_manifest["runtime"]["output_summary"]["max"] == 44


def test_execute_max_pool2d_op(tmp_path: Path) -> None:
    program = Program(
        inputs=(TensorValue(name="x", shape=(1, 1, 4, 4), dtype="int8"),),
        tensors=(
            TensorValue(name="x", shape=(1, 1, 4, 4), dtype="int8"),
            TensorValue(name="pool_out", shape=(1, 1, 2, 2), dtype="int8"),
        ),
        ops=(
            OpNode(
                name="pool0",
                kind="max_pool2d",
                inputs=("x",),
                outputs=("pool_out",),
                attrs={"kernel_size": 2, "stride": 2, "padding": 0},
            ),
        ),
        outputs=("pool_out",),
    )
    x = [[[[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12], [13, 14, 15, 16]]]]
    export_program_package(tmp_path / "pool_test", program, tensor_data={"x": x})
    step_manifest = json.loads((tmp_path / "pool_test" / "steps" / "step_000_pool0" / "manifest.json").read_text())
    assert step_manifest["runtime"]["output_summary"]["shape"] == [1, 1, 2, 2]
    assert step_manifest["runtime"]["output_summary"]["max"] == 16


def test_execute_adaptive_avg_pool2d_op(tmp_path: Path) -> None:
    program = Program(
        inputs=(TensorValue(name="x", shape=(1, 1, 4, 4), dtype="int8"),),
        tensors=(
            TensorValue(name="x", shape=(1, 1, 4, 4), dtype="int8"),
            TensorValue(name="pool_out", shape=(1, 1, 1, 1), dtype="int8"),
        ),
        ops=(
            OpNode(
                name="apool0",
                kind="adaptive_avg_pool2d",
                inputs=("x",),
                outputs=("pool_out",),
                attrs={"output_size": (1, 1)},
            ),
        ),
        outputs=("pool_out",),
    )
    # Average of 1..16 = 8.5, integer division = 8
    x = [[[[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12], [13, 14, 15, 16]]]]
    export_program_package(tmp_path / "apool_test", program, tensor_data={"x": x})
    step_manifest = json.loads((tmp_path / "apool_test" / "steps" / "step_000_apool0" / "manifest.json").read_text())
    assert step_manifest["runtime"]["output_summary"]["shape"] == [1, 1, 1, 1]
    assert step_manifest["runtime"]["output_summary"]["min"] == 8


# --- Tracer tests ---


def test_trace_mlp_block() -> None:
    class MLP(nn.Module):
        def __init__(self) -> None:
            super().__init__()
            self.fc0 = nn.Linear(16, 8)
            self.relu = nn.ReLU()
            self.fc1 = nn.Linear(8, 4)

        def forward(self, x: torch.Tensor) -> torch.Tensor:
            return self.fc1(self.relu(self.fc0(x)))

    model = MLP()
    program = trace_torch_module(model, input_shape=(1, 16))

    assert len(program.inputs) == 1
    assert program.inputs[0].shape == (1, 16)
    assert len(program.ops) == 3
    assert [op.kind for op in program.ops] == ["linear", "relu", "linear"]
    assert program.ops[0].attrs["in_features"] == 16
    assert program.ops[0].attrs["out_features"] == 8
    assert program.ops[2].attrs["in_features"] == 8
    assert program.ops[2].attrs["out_features"] == 4
    validate_program(program)


def test_trace_conv_block() -> None:
    class ConvBlock(nn.Module):
        def __init__(self) -> None:
            super().__init__()
            self.conv = nn.Conv2d(1, 4, kernel_size=3, padding=1)
            self.bn = nn.BatchNorm2d(4)
            self.relu = nn.ReLU()
            self.pool = nn.MaxPool2d(kernel_size=2, stride=2)

        def forward(self, x: torch.Tensor) -> torch.Tensor:
            return self.pool(self.relu(self.bn(self.conv(x))))

    model = ConvBlock()
    model.eval()
    program = trace_torch_module(model, input_shape=(1, 1, 8, 8))

    assert len(program.ops) == 4
    assert [op.kind for op in program.ops] == ["conv2d", "batch_norm", "relu", "max_pool2d"]
    assert program.ops[0].attrs["in_channels"] == 1
    assert program.ops[0].attrs["out_channels"] == 4
    validate_program(program)

    steps = lower_program_to_steps(program)
    assert [s.lowered_kind for s in steps] == ["conv2d_im2col_gemm", "elementwise_post_op", "elementwise_post_op", "elementwise_post_op"]


def test_trace_residual_block() -> None:
    class ResidualBlock(nn.Module):
        def __init__(self) -> None:
            super().__init__()
            self.conv1 = nn.Conv2d(4, 4, kernel_size=3, padding=1)
            self.relu1 = nn.ReLU()
            self.conv2 = nn.Conv2d(4, 4, kernel_size=3, padding=1)
            self.relu2 = nn.ReLU()

        def forward(self, x: torch.Tensor) -> torch.Tensor:
            identity = x
            out = self.relu1(self.conv1(x))
            out = self.conv2(out)
            out = out + identity
            return self.relu2(out)

    model = ResidualBlock()
    program = trace_torch_module(model, input_shape=(1, 4, 8, 8))

    op_kinds = [op.kind for op in program.ops]
    assert "conv2d" in op_kinds
    assert "add" in op_kinds
    assert "relu" in op_kinds
    validate_program(program)

    steps = lower_program_to_steps(program)
    lowered_kinds = [s.lowered_kind for s in steps]
    assert "conv2d_im2col_gemm" in lowered_kinds
    assert "elementwise_post_op" in lowered_kinds


def test_trace_classifier_with_adaptive_pool_and_flatten() -> None:
    class Classifier(nn.Module):
        def __init__(self) -> None:
            super().__init__()
            self.conv = nn.Conv2d(1, 4, kernel_size=3, padding=1)
            self.relu = nn.ReLU()
            self.pool = nn.AdaptiveAvgPool2d((1, 1))
            self.flatten = nn.Flatten()
            self.fc = nn.Linear(4, 2)

        def forward(self, x: torch.Tensor) -> torch.Tensor:
            x = self.relu(self.conv(x))
            x = self.pool(x)
            x = self.flatten(x)
            return self.fc(x)

    model = Classifier()
    model.eval()
    program = trace_torch_module(model, input_shape=(1, 1, 8, 8))

    op_kinds = [op.kind for op in program.ops]
    assert op_kinds == ["conv2d", "relu", "adaptive_avg_pool2d", "flatten", "linear"]
    validate_program(program)


def test_trace_operator_add_in_residual() -> None:
    """Ensure operator.add (Python + operator) is traced correctly."""
    import operator as op_module

    class AddBlock(nn.Module):
        def __init__(self) -> None:
            super().__init__()
            self.fc = nn.Linear(8, 8)

        def forward(self, x: torch.Tensor) -> torch.Tensor:
            return op_module.add(x, self.fc(x))

    model = AddBlock()
    program = trace_torch_module(model, input_shape=(1, 8))

    op_kinds = [o.kind for o in program.ops]
    assert "add" in op_kinds
    validate_program(program)


# --- New op (avg_pool2d, sigmoid, gelu, mul) lowering/validation tests ---


def test_lower_avg_pool2d_op() -> None:
    program = Program(
        inputs=(TensorValue(name="x", shape=(1, 1, 4, 4), dtype="int8"),),
        tensors=(
            TensorValue(name="x", shape=(1, 1, 4, 4), dtype="int8"),
            TensorValue(name="pool_out", shape=(1, 1, 2, 2), dtype="int8"),
        ),
        ops=(
            OpNode(
                name="avgpool0",
                kind="avg_pool2d",
                inputs=("x",),
                outputs=("pool_out",),
                attrs={"kernel_size": 2, "stride": 2, "padding": 0},
            ),
        ),
        outputs=("pool_out",),
    )
    validate_program(program)
    steps = lower_program_to_steps(program)
    assert len(steps) == 1
    assert steps[0].lowered_kind == "elementwise_post_op"
    assert steps[0].source_kind == "avg_pool2d"
    assert steps[0].attrs["kernel_size"] == (2, 2)


def test_lower_sigmoid_op() -> None:
    program = Program(
        inputs=(TensorValue(name="x", shape=(1, 4), dtype="int32"),),
        tensors=(
            TensorValue(name="x", shape=(1, 4), dtype="int32"),
            TensorValue(name="y", shape=(1, 4), dtype="int32"),
        ),
        ops=(OpNode(name="sig0", kind="sigmoid", inputs=("x",), outputs=("y",)),),
        outputs=("y",),
    )
    validate_program(program)
    steps = lower_program_to_steps(program)
    assert len(steps) == 1
    assert steps[0].lowered_kind == "elementwise_post_op"
    assert steps[0].source_kind == "sigmoid"


def test_lower_gelu_op() -> None:
    program = Program(
        inputs=(TensorValue(name="x", shape=(1, 8), dtype="int32"),),
        tensors=(
            TensorValue(name="x", shape=(1, 8), dtype="int32"),
            TensorValue(name="y", shape=(1, 8), dtype="int32"),
        ),
        ops=(OpNode(name="gelu0", kind="gelu", inputs=("x",), outputs=("y",)),),
        outputs=("y",),
    )
    validate_program(program)
    steps = lower_program_to_steps(program)
    assert len(steps) == 1
    assert steps[0].lowered_kind == "elementwise_post_op"
    assert steps[0].source_kind == "gelu"


def test_lower_mul_op() -> None:
    program = Program(
        inputs=(
            TensorValue(name="a", shape=(1, 4), dtype="int32"),
            TensorValue(name="b", shape=(1, 4), dtype="int32"),
        ),
        tensors=(
            TensorValue(name="a", shape=(1, 4), dtype="int32"),
            TensorValue(name="b", shape=(1, 4), dtype="int32"),
            TensorValue(name="c", shape=(1, 4), dtype="int32"),
        ),
        ops=(OpNode(name="mul0", kind="mul", inputs=("a", "b"), outputs=("c",)),),
        outputs=("c",),
    )
    validate_program(program)
    steps = lower_program_to_steps(program)
    assert len(steps) == 1
    assert steps[0].lowered_kind == "elementwise_post_op"
    assert steps[0].source_kind == "mul"


# --- New op execution tests ---


def test_execute_avg_pool2d_op(tmp_path: Path) -> None:
    program = Program(
        inputs=(TensorValue(name="x", shape=(1, 1, 4, 4), dtype="int8"),),
        tensors=(
            TensorValue(name="x", shape=(1, 1, 4, 4), dtype="int8"),
            TensorValue(name="pool_out", shape=(1, 1, 2, 2), dtype="int8"),
        ),
        ops=(
            OpNode(
                name="avgpool0",
                kind="avg_pool2d",
                inputs=("x",),
                outputs=("pool_out",),
                attrs={"kernel_size": 2, "stride": 2, "padding": 0},
            ),
        ),
        outputs=("pool_out",),
    )
    # Average of [[1,2],[5,6]] = 14//4 = 3 ; etc.
    x = [[[[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12], [13, 14, 15, 16]]]]
    export_program_package(tmp_path / "avgpool_test", program, tensor_data={"x": x})
    step_manifest = json.loads((tmp_path / "avgpool_test" / "steps" / "step_000_avgpool0" / "manifest.json").read_text())
    assert step_manifest["runtime"]["output_summary"]["shape"] == [1, 1, 2, 2]
    # First window (1+2+5+6)//4 = 3
    assert step_manifest["runtime"]["output_summary"]["min"] == 3


def test_execute_sigmoid_op(tmp_path: Path) -> None:
    program = Program(
        inputs=(TensorValue(name="x", shape=(1, 4), dtype="int32"),),
        tensors=(
            TensorValue(name="x", shape=(1, 4), dtype="int32"),
            TensorValue(name="y", shape=(1, 4), dtype="int32"),
        ),
        ops=(OpNode(name="sig0", kind="sigmoid", inputs=("x",), outputs=("y",)),),
        outputs=("y",),
    )
    # sigmoid(0)=0.5 -> 63 (int from *127), sigmoid(large)~1 -> ~127
    export_program_package(tmp_path / "sigmoid_test", program, tensor_data={"x": [[-100, 0, 1, 100]]})
    step_manifest = json.loads((tmp_path / "sigmoid_test" / "steps" / "step_000_sig0" / "manifest.json").read_text())
    assert step_manifest["runtime"]["output_summary"]["shape"] == [1, 4]
    assert step_manifest["runtime"]["output_summary"]["max"] == 127
    assert step_manifest["runtime"]["output_summary"]["min"] == 0


def test_execute_gelu_op(tmp_path: Path) -> None:
    program = Program(
        inputs=(TensorValue(name="x", shape=(1, 4), dtype="int32"),),
        tensors=(
            TensorValue(name="x", shape=(1, 4), dtype="int32"),
            TensorValue(name="y", shape=(1, 4), dtype="int32"),
        ),
        ops=(OpNode(name="gelu0", kind="gelu", inputs=("x",), outputs=("y",)),),
        outputs=("y",),
    )
    # gelu(0)=0, gelu(2)~1.95, gelu(-3)~-0.0036, gelu(5)~4.999 (truncates to 4)
    export_program_package(tmp_path / "gelu_test", program, tensor_data={"x": [[-3, 0, 2, 5]]})
    step_manifest = json.loads((tmp_path / "gelu_test" / "steps" / "step_000_gelu0" / "manifest.json").read_text())
    assert step_manifest["runtime"]["output_summary"]["shape"] == [1, 4]
    # gelu(5) ≈ 4.999 truncates to 4 under int32 cast
    assert step_manifest["runtime"]["output_summary"]["max"] == 4


def test_execute_mul_op(tmp_path: Path) -> None:
    program = Program(
        inputs=(
            TensorValue(name="a", shape=(1, 4), dtype="int32"),
            TensorValue(name="b", shape=(1, 4), dtype="int32"),
        ),
        tensors=(
            TensorValue(name="a", shape=(1, 4), dtype="int32"),
            TensorValue(name="b", shape=(1, 4), dtype="int32"),
            TensorValue(name="c", shape=(1, 4), dtype="int32"),
        ),
        ops=(OpNode(name="mul0", kind="mul", inputs=("a", "b"), outputs=("c",)),),
        outputs=("c",),
    )
    export_program_package(tmp_path / "mul_test", program, tensor_data={"a": [[1, 2, 3, 4]], "b": [[10, 20, 30, 40]]})
    step_manifest = json.loads((tmp_path / "mul_test" / "steps" / "step_000_mul0" / "manifest.json").read_text())
    assert step_manifest["runtime"]["output_summary"]["min"] == 10
    assert step_manifest["runtime"]["output_summary"]["max"] == 160


# --- New op tracer tests ---


def test_trace_sigmoid_module() -> None:
    class SigBlock(nn.Module):
        def __init__(self) -> None:
            super().__init__()
            self.fc = nn.Linear(8, 8)
            self.sig = nn.Sigmoid()

        def forward(self, x: torch.Tensor) -> torch.Tensor:
            return self.sig(self.fc(x))

    model = SigBlock()
    program = trace_torch_module(model, input_shape=(1, 8))
    assert [op.kind for op in program.ops] == ["linear", "sigmoid"]
    validate_program(program)


def test_trace_gelu_in_ffn() -> None:
    class FFN(nn.Module):
        def __init__(self) -> None:
            super().__init__()
            self.fc1 = nn.Linear(16, 32)
            self.gelu = nn.GELU()
            self.fc2 = nn.Linear(32, 16)

        def forward(self, x: torch.Tensor) -> torch.Tensor:
            return self.fc2(self.gelu(self.fc1(x)))

    model = FFN()
    program = trace_torch_module(model, input_shape=(1, 16))
    assert [op.kind for op in program.ops] == ["linear", "gelu", "linear"]
    validate_program(program)


def test_trace_avg_pool2d_module() -> None:
    class AvgBlock(nn.Module):
        def __init__(self) -> None:
            super().__init__()
            self.conv = nn.Conv2d(1, 4, kernel_size=3, padding=1)
            self.avgpool = nn.AvgPool2d(kernel_size=2, stride=2)

        def forward(self, x: torch.Tensor) -> torch.Tensor:
            return self.avgpool(self.conv(x))

    model = AvgBlock()
    model.eval()
    program = trace_torch_module(model, input_shape=(1, 1, 8, 8))
    assert [op.kind for op in program.ops] == ["conv2d", "avg_pool2d"]
    validate_program(program)


def test_trace_mul_operator_in_gating() -> None:
    """SE-style gating: sigmoid(scale) * features."""
    class GateBlock(nn.Module):
        def __init__(self) -> None:
            super().__init__()
            self.scale_fc = nn.Linear(8, 8)
            self.sig = nn.Sigmoid()

        def forward(self, x: torch.Tensor) -> torch.Tensor:
            scale = self.sig(self.scale_fc(x))
            return x * scale

    model = GateBlock()
    program = trace_torch_module(model, input_shape=(1, 8))
    op_kinds = [op.kind for op in program.ops]
    assert "linear" in op_kinds
    assert "sigmoid" in op_kinds
    assert "mul" in op_kinds
    validate_program(program)
