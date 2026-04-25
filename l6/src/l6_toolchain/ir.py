from __future__ import annotations

from dataclasses import asdict, dataclass, field
from pathlib import Path
from typing import Any

import numpy as np

from .common import conv_output_dim, json_dumps, normalize_pair
from .emitter import export_linear_tile_package, export_linear_tiled_package
from .frontend import EXPLICIT_TENSOR_MODE, LinearData, LinearOp, _grouped_conv_weight_matrix, _im2col_nchw, _to_numpy_array


@dataclass(frozen=True)
class TensorValue:
    name: str
    shape: tuple[int, ...]
    dtype: str = "int8"


@dataclass(frozen=True)
class OpNode:
    name: str
    kind: str
    inputs: tuple[str, ...]
    outputs: tuple[str, ...]
    attrs: dict[str, Any] = field(default_factory=dict)


@dataclass(frozen=True)
class Program:
    inputs: tuple[TensorValue, ...]
    tensors: tuple[TensorValue, ...]
    ops: tuple[OpNode, ...]
    outputs: tuple[str, ...]

    def tensor_map(self) -> dict[str, TensorValue]:
        return {tensor.name: tensor for tensor in self.tensors}


@dataclass(frozen=True)
class LoweredOp:
    name: str
    source_kind: str
    lowered_kind: str
    inputs: tuple[str, ...]
    outputs: tuple[str, ...]
    attrs: dict[str, Any] = field(default_factory=dict)

    def to_dict(self) -> dict[str, object]:
        return asdict(self)


@dataclass(frozen=True)
class ProgramExportStep:
    step_id: int
    name: str
    lowered_kind: str
    dir: str
    compute_package_dir: str | None = None

    def to_dict(self) -> dict[str, object]:
        return asdict(self)


def validate_program(program: Program) -> None:
    tensor_map = program.tensor_map()
    if len(tensor_map) != len(program.tensors):
        raise ValueError("Program tensors must have unique names.")

    if not program.inputs:
        raise ValueError("Program must declare at least one input tensor.")
    for tensor in program.inputs:
        if tensor.name not in tensor_map:
            raise ValueError("Every program input tensor must also appear in program.tensors.")

    seen_outputs: set[str] = set(tensor.name for tensor in program.inputs)
    for op in program.ops:
        if not op.inputs or not op.outputs:
            raise ValueError(f"Op {op.name} must declare at least one input and one output.")
        for input_name in op.inputs:
            if input_name not in tensor_map:
                raise ValueError(f"Op {op.name} references unknown input tensor {input_name}.")
            if input_name not in seen_outputs:
                raise ValueError(f"Op {op.name} consumes tensor {input_name} before it is produced.")
        for output_name in op.outputs:
            if output_name not in tensor_map:
                raise ValueError(f"Op {op.name} references unknown output tensor {output_name}.")
            if output_name in seen_outputs:
                raise ValueError(f"Tensor {output_name} is produced more than once.")
            seen_outputs.add(output_name)

        _validate_op_node(op, tensor_map)

    for output_name in program.outputs:
        if output_name not in tensor_map:
            raise ValueError(f"Program output tensor {output_name} is not declared.")
        if output_name not in seen_outputs:
            raise ValueError(f"Program output tensor {output_name} is not produced.")


def lower_program_to_steps(program: Program) -> list[LoweredOp]:
    validate_program(program)
    tensor_map = program.tensor_map()
    lowered_steps: list[LoweredOp] = []

    for op in program.ops:
        if op.kind == "linear":
            input_tensor = tensor_map[op.inputs[0]]
            output_tensor = tensor_map[op.outputs[0]]
            in_features = _require_attr_int(op, "in_features")
            out_features = _require_attr_int(op, "out_features")
            lowered_steps.append(
                LoweredOp(
                    name=op.name,
                    source_kind=op.kind,
                    lowered_kind="gemm",
                    inputs=op.inputs,
                    outputs=op.outputs,
                    attrs={
                        "m": input_tensor.shape[0],
                        "k": in_features,
                        "n": out_features,
                        "logical_input_shape": input_tensor.shape,
                        "logical_output_shape": output_tensor.shape,
                    },
                )
            )
            continue

        if op.kind == "conv2d":
            input_tensor = tensor_map[op.inputs[0]]
            output_tensor = tensor_map[op.outputs[0]]
            kernel_h, kernel_w = normalize_pair(op.attrs.get("kernel_size"), name="kernel_size")
            stride_h, stride_w = normalize_pair(op.attrs.get("stride", 1), name="stride")
            pad_h, pad_w = normalize_pair(op.attrs.get("padding", 0), name="padding")
            dilation_h, dilation_w = normalize_pair(op.attrs.get("dilation", 1), name="dilation")
            groups = int(op.attrs.get("groups", 1))
            if groups <= 0 or input_tensor.shape[1] % groups != 0 or output_tensor.shape[1] % groups != 0:
                raise ValueError("Mini IR lowering requires grouped conv channel counts to divide evenly.")

            batch, in_channels, in_height, in_width = input_tensor.shape
            out_batch, out_channels, out_height, out_width = output_tensor.shape
            if batch != out_batch:
                raise ValueError(f"Conv op {op.name} must preserve batch dimension in this mini IR prototype.")
            expected_out_h = conv_output_dim(in_height, kernel_h, stride_h, pad_h, dilation_h)
            expected_out_w = conv_output_dim(in_width, kernel_w, stride_w, pad_w, dilation_w)
            if (out_height, out_width) != (expected_out_h, expected_out_w):
                raise ValueError(f"Conv op {op.name} output shape does not match kernel/stride/padding/dilation.")

            lowered_steps.append(
                LoweredOp(
                    name=op.name,
                    source_kind=op.kind,
                    lowered_kind="conv2d_im2col_gemm",
                    inputs=op.inputs,
                    outputs=op.outputs,
                    attrs={
                        "m": batch * out_height * out_width,
                        "k": in_channels * kernel_h * kernel_w,
                        "n": out_channels,
                        "kernel_size": (kernel_h, kernel_w),
                        "stride": (stride_h, stride_w),
                        "padding": (pad_h, pad_w),
                        "dilation": (dilation_h, dilation_w),
                        "logical_input_shape": input_tensor.shape,
                        "logical_output_shape": output_tensor.shape,
                    },
                )
            )
            continue

        if op.kind == "flatten":
            lowered_steps.append(
                LoweredOp(
                    name=op.name,
                    source_kind=op.kind,
                    lowered_kind="shape_only",
                    inputs=op.inputs,
                    outputs=op.outputs,
                    attrs=dict(op.attrs),
                )
            )
            continue

        if op.kind == "relu":
            lowered_steps.append(
                LoweredOp(
                    name=op.name,
                    source_kind=op.kind,
                    lowered_kind="elementwise_post_op",
                    inputs=op.inputs,
                    outputs=op.outputs,
                    attrs={},
                )
            )
            continue

        if op.kind == "add":
            lowered_steps.append(
                LoweredOp(
                    name=op.name,
                    source_kind=op.kind,
                    lowered_kind="elementwise_post_op",
                    inputs=op.inputs,
                    outputs=op.outputs,
                    attrs={},
                )
            )
            continue

        if op.kind == "batch_norm":
            lowered_steps.append(
                LoweredOp(
                    name=op.name,
                    source_kind=op.kind,
                    lowered_kind="elementwise_post_op",
                    inputs=op.inputs,
                    outputs=op.outputs,
                    attrs={k: v for k, v in op.attrs.items() if k in ("num_features", "eps", "momentum")},
                )
            )
            continue

        if op.kind == "max_pool2d":
            input_tensor = tensor_map[op.inputs[0]]
            kernel_h, kernel_w = normalize_pair(op.attrs.get("kernel_size"), name="kernel_size")
            stride_h, stride_w = normalize_pair(op.attrs.get("stride", kernel_h), name="stride")
            pad_h, pad_w = normalize_pair(op.attrs.get("padding", 0), name="padding")
            lowered_steps.append(
                LoweredOp(
                    name=op.name,
                    source_kind=op.kind,
                    lowered_kind="elementwise_post_op",
                    inputs=op.inputs,
                    outputs=op.outputs,
                    attrs={
                        "kernel_size": (kernel_h, kernel_w),
                        "stride": (stride_h, stride_w),
                        "padding": (pad_h, pad_w),
                        "logical_input_shape": input_tensor.shape,
                    },
                )
            )
            continue

        if op.kind == "adaptive_avg_pool2d":
            input_tensor = tensor_map[op.inputs[0]]
            output_size = normalize_pair(op.attrs.get("output_size"), name="output_size")
            lowered_steps.append(
                LoweredOp(
                    name=op.name,
                    source_kind=op.kind,
                    lowered_kind="elementwise_post_op",
                    inputs=op.inputs,
                    outputs=op.outputs,
                    attrs={
                        "output_size": output_size,
                        "logical_input_shape": input_tensor.shape,
                    },
                )
            )
            continue

        if op.kind == "avg_pool2d":
            input_tensor = tensor_map[op.inputs[0]]
            kernel_h, kernel_w = normalize_pair(op.attrs.get("kernel_size"), name="kernel_size")
            stride_h, stride_w = normalize_pair(op.attrs.get("stride", kernel_h), name="stride")
            pad_h, pad_w = normalize_pair(op.attrs.get("padding", 0), name="padding")
            lowered_steps.append(
                LoweredOp(
                    name=op.name,
                    source_kind=op.kind,
                    lowered_kind="elementwise_post_op",
                    inputs=op.inputs,
                    outputs=op.outputs,
                    attrs={
                        "kernel_size": (kernel_h, kernel_w),
                        "stride": (stride_h, stride_w),
                        "padding": (pad_h, pad_w),
                        "logical_input_shape": input_tensor.shape,
                    },
                )
            )
            continue

        if op.kind in ("sigmoid", "gelu"):
            lowered_steps.append(
                LoweredOp(
                    name=op.name,
                    source_kind=op.kind,
                    lowered_kind="elementwise_post_op",
                    inputs=op.inputs,
                    outputs=op.outputs,
                    attrs={},
                )
            )
            continue

        if op.kind == "mul":
            lowered_steps.append(
                LoweredOp(
                    name=op.name,
                    source_kind=op.kind,
                    lowered_kind="elementwise_post_op",
                    inputs=op.inputs,
                    outputs=op.outputs,
                    attrs={},
                )
            )
            continue

        raise ValueError(f"Unsupported mini IR op kind: {op.kind}")

    return lowered_steps


def export_program_package(
    output_dir: str | Path,
    program: Program,
    *,
    package_id: str = "l6_program_sequence_demo",
    tiled: bool = True,
    tensor_data: dict[str, Any] | None = None,
    schedule_metadata: dict[int, dict[str, Any]] | None = None,
) -> Path:
    validate_program(program)
    lowered_steps = lower_program_to_steps(program)
    runtime_tensors = None if tensor_data is None else _initialize_runtime_tensors(program, tensor_data)

    output_path = Path(output_dir)
    output_path.mkdir(parents=True, exist_ok=True)
    steps_dir = output_path / "steps"
    steps_dir.mkdir(exist_ok=True)

    root_manifest = {
        "manifest_version": "0.1",
        "package_id": package_id,
        "op_type": "program_sequence",
        "description": "L6 study package generated from a mini IR program sequence.",
        "step_count": len(lowered_steps),
        "files": {"steps": "steps.json"},
        "program": {
            "inputs": [asdict(tensor) for tensor in program.inputs],
            "outputs": list(program.outputs),
            "tensor_count": len(program.tensors),
        },
    }

    exported_steps: list[ProgramExportStep] = []
    for step_id, (op, step) in enumerate(zip(program.ops, lowered_steps, strict=True)):
        step_dir = steps_dir / f"step_{step_id:03d}_{step.name}"
        step_dir.mkdir(exist_ok=True)
        compute_package_dir: str | None = None
        linear_data: LinearData | None = None

        if runtime_tensors is not None:
            linear_data = _execute_program_op(op, runtime_tensors)

        if step.lowered_kind in {"gemm", "conv2d_im2col_gemm"}:
            compute_package_dir = "compute_package"
            compute_output_dir = step_dir / compute_package_dir
            logical_op = LinearOp(
                package_id=f"{package_id}_{step.name}",
                m=int(step.attrs["m"]),
                k=int(step.attrs["k"]),
                n=int(step.attrs["n"]),
                activation_mode=(EXPLICIT_TENSOR_MODE if linear_data is not None else "row_ramp"),
                weight_mode=(EXPLICIT_TENSOR_MODE if linear_data is not None else "constant_3"),
            )
            use_tiled_backend = tiled or (logical_op.m, logical_op.k, logical_op.n) != (16, 16, 16)
            step_tile_order = schedule_metadata.get(step_id, {}).get("tile_order") if schedule_metadata else None
            if use_tiled_backend:
                export_linear_tiled_package(compute_output_dir, logical_op, linear_data, tile_order=step_tile_order)
            else:
                export_linear_tile_package(compute_output_dir, logical_op, linear_data)

        step_manifest = {
            "manifest_version": "0.1",
            "package_id": f"{package_id}_{step.name}",
            "op_type": "program_step",
            "step_id": step_id,
            "name": step.name,
            "source_kind": step.source_kind,
            "lowered_kind": step.lowered_kind,
            "inputs": list(step.inputs),
            "outputs": list(step.outputs),
            "attrs": _json_safe(step.attrs),
            "files": {},
        }
        if compute_package_dir is not None:
            step_manifest["files"]["compute_package"] = compute_package_dir
        if schedule_metadata and step_id in schedule_metadata:
            step_meta = schedule_metadata[step_id]
            step_manifest["compiler"] = {
                k: v for k, v in step_meta.items() if k != "tile_order"
            }
        if runtime_tensors is not None:
            step_manifest["runtime"] = {
                "input_summary": _tensor_summary(runtime_tensors[op.inputs[0]]),
                "output_summary": _tensor_summary(runtime_tensors[op.outputs[0]]),
                "explicit_compute_data": linear_data is not None,
            }

        (step_dir / "manifest.json").write_text(json_dumps(step_manifest), encoding="utf-8")
        exported_steps.append(
            ProgramExportStep(
                step_id=step_id,
                name=step.name,
                lowered_kind=step.lowered_kind,
                dir=f"steps/step_{step_id:03d}_{step.name}",
                compute_package_dir=(f"steps/step_{step_id:03d}_{step.name}/{compute_package_dir}" if compute_package_dir else None),
            )
        )

    (output_path / "manifest.json").write_text(json_dumps(root_manifest), encoding="utf-8")
    (output_path / "steps.json").write_text(
        json_dumps({"steps": [step.to_dict() for step in exported_steps]}),
        encoding="utf-8",
    )
    (output_path / "README.md").write_text(
        (
            f"# {package_id}\n\n"
            "Generated by `l6_toolchain.export_program_package`.\n\n"
            f"- Program steps: {len(lowered_steps)}\n"
            f"- Inputs: {[tensor.name for tensor in program.inputs]}\n"
            f"- Outputs: {list(program.outputs)}\n\n"
            "This package is intended for L6 study of multi-op program lowering and per-step package emission.\n"
        ),
        encoding="utf-8",
    )

    return output_path


def _validate_op_node(op: OpNode, tensor_map: dict[str, TensorValue]) -> None:
    if op.kind == "linear":
        if len(op.inputs) != 1 or len(op.outputs) != 1:
            raise ValueError(f"Linear op {op.name} must have exactly one input and one output.")
        input_tensor = tensor_map[op.inputs[0]]
        output_tensor = tensor_map[op.outputs[0]]
        if len(input_tensor.shape) != 2 or len(output_tensor.shape) != 2:
            raise ValueError(f"Linear op {op.name} expects rank-2 input and output tensors.")
        in_features = _require_attr_int(op, "in_features")
        out_features = _require_attr_int(op, "out_features")
        if input_tensor.shape[1] != in_features:
            raise ValueError(f"Linear op {op.name} input shape does not match in_features.")
        if output_tensor.shape != (input_tensor.shape[0], out_features):
            raise ValueError(f"Linear op {op.name} output shape must be (batch, out_features).")
        return

    if op.kind == "conv2d":
        if len(op.inputs) != 1 or len(op.outputs) != 1:
            raise ValueError(f"Conv op {op.name} must have exactly one input and one output.")
        input_tensor = tensor_map[op.inputs[0]]
        output_tensor = tensor_map[op.outputs[0]]
        if len(input_tensor.shape) != 4 or len(output_tensor.shape) != 4:
            raise ValueError(f"Conv op {op.name} expects rank-4 NCHW input and output tensors.")
        in_channels = _require_attr_int(op, "in_channels")
        out_channels = _require_attr_int(op, "out_channels")
        groups = int(op.attrs.get("groups", 1))
        if input_tensor.shape[1] != in_channels:
            raise ValueError(f"Conv op {op.name} input channels do not match in_channels.")
        if output_tensor.shape[1] != out_channels:
            raise ValueError(f"Conv op {op.name} output channels do not match out_channels.")
        if groups <= 0:
            raise ValueError("Mini IR validation requires conv2d groups to be positive.")
        if in_channels % groups != 0 or out_channels % groups != 0:
            raise ValueError("Mini IR validation requires conv2d in_channels/out_channels to be divisible by groups.")
        normalize_pair(op.attrs.get("kernel_size"), name="kernel_size")
        normalize_pair(op.attrs.get("stride", 1), name="stride")
        normalize_pair(op.attrs.get("padding", 0), name="padding")
        normalize_pair(op.attrs.get("dilation", 1), name="dilation")
        return

    if op.kind == "flatten":
        if len(op.inputs) != 1 or len(op.outputs) != 1:
            raise ValueError(f"Flatten op {op.name} must have exactly one input and one output.")
        input_tensor = tensor_map[op.inputs[0]]
        output_tensor = tensor_map[op.outputs[0]]
        start_dim = int(op.attrs.get("start_dim", 1))
        if start_dim != 1:
            raise ValueError("Mini IR flatten currently supports only start_dim=1.")
        if len(output_tensor.shape) != 2:
            raise ValueError(f"Flatten op {op.name} output must be rank-2.")
        flattened = 1
        for dim in input_tensor.shape[1:]:
            flattened *= dim
        if output_tensor.shape != (input_tensor.shape[0], flattened):
            raise ValueError(f"Flatten op {op.name} output shape does not match the flattened input shape.")
        return

    if op.kind == "relu":
        if len(op.inputs) != 1 or len(op.outputs) != 1:
            raise ValueError(f"ReLU op {op.name} must have exactly one input and one output.")
        input_tensor = tensor_map[op.inputs[0]]
        output_tensor = tensor_map[op.outputs[0]]
        if input_tensor.shape != output_tensor.shape:
            raise ValueError(f"ReLU op {op.name} must preserve tensor shape in this mini IR prototype.")
        return

    if op.kind == "add":
        if len(op.inputs) != 2 or len(op.outputs) != 1:
            raise ValueError(f"Add op {op.name} must have exactly two inputs and one output.")
        lhs_tensor = tensor_map[op.inputs[0]]
        rhs_tensor = tensor_map[op.inputs[1]]
        output_tensor = tensor_map[op.outputs[0]]
        if lhs_tensor.shape != rhs_tensor.shape:
            raise ValueError(f"Add op {op.name} requires both inputs to have the same shape.")
        if lhs_tensor.shape != output_tensor.shape:
            raise ValueError(f"Add op {op.name} must preserve tensor shape.")
        return

    if op.kind == "batch_norm":
        if len(op.inputs) != 1 or len(op.outputs) != 1:
            raise ValueError(f"BatchNorm op {op.name} must have exactly one input and one output.")
        input_tensor = tensor_map[op.inputs[0]]
        output_tensor = tensor_map[op.outputs[0]]
        if len(input_tensor.shape) != 4:
            raise ValueError(f"BatchNorm op {op.name} expects rank-4 NCHW input tensor.")
        if input_tensor.shape != output_tensor.shape:
            raise ValueError(f"BatchNorm op {op.name} must preserve tensor shape.")
        _require_attr_int(op, "num_features")
        if input_tensor.shape[1] != _require_attr_int(op, "num_features"):
            raise ValueError(f"BatchNorm op {op.name} num_features must match input channels.")
        return

    if op.kind == "max_pool2d":
        if len(op.inputs) != 1 or len(op.outputs) != 1:
            raise ValueError(f"MaxPool op {op.name} must have exactly one input and one output.")
        input_tensor = tensor_map[op.inputs[0]]
        output_tensor = tensor_map[op.outputs[0]]
        if len(input_tensor.shape) != 4 or len(output_tensor.shape) != 4:
            raise ValueError(f"MaxPool op {op.name} expects rank-4 NCHW input and output tensors.")
        kernel_h, kernel_w = normalize_pair(op.attrs.get("kernel_size"), name="kernel_size")
        stride_h, stride_w = normalize_pair(op.attrs.get("stride", kernel_h), name="stride")
        pad_h, pad_w = normalize_pair(op.attrs.get("padding", 0), name="padding")
        batch, channels, in_h, in_w = input_tensor.shape
        expected_out_h = conv_output_dim(in_h, kernel_h, stride_h, pad_h, 1)
        expected_out_w = conv_output_dim(in_w, kernel_w, stride_w, pad_w, 1)
        if output_tensor.shape != (batch, channels, expected_out_h, expected_out_w):
            raise ValueError(f"MaxPool op {op.name} output shape does not match kernel/stride/padding.")
        return

    if op.kind == "adaptive_avg_pool2d":
        if len(op.inputs) != 1 or len(op.outputs) != 1:
            raise ValueError(f"AdaptiveAvgPool op {op.name} must have exactly one input and one output.")
        input_tensor = tensor_map[op.inputs[0]]
        output_tensor = tensor_map[op.outputs[0]]
        if len(input_tensor.shape) != 4 or len(output_tensor.shape) != 4:
            raise ValueError(f"AdaptiveAvgPool op {op.name} expects rank-4 NCHW input and output tensors.")
        out_h, out_w = normalize_pair(op.attrs.get("output_size"), name="output_size")
        if output_tensor.shape != (input_tensor.shape[0], input_tensor.shape[1], out_h, out_w):
            raise ValueError(f"AdaptiveAvgPool op {op.name} output shape does not match output_size.")
        return

    if op.kind == "avg_pool2d":
        if len(op.inputs) != 1 or len(op.outputs) != 1:
            raise ValueError(f"AvgPool op {op.name} must have exactly one input and one output.")
        input_tensor = tensor_map[op.inputs[0]]
        output_tensor = tensor_map[op.outputs[0]]
        if len(input_tensor.shape) != 4 or len(output_tensor.shape) != 4:
            raise ValueError(f"AvgPool op {op.name} expects rank-4 NCHW input and output tensors.")
        kernel_h, kernel_w = normalize_pair(op.attrs.get("kernel_size"), name="kernel_size")
        stride_h, stride_w = normalize_pair(op.attrs.get("stride", kernel_h), name="stride")
        pad_h, pad_w = normalize_pair(op.attrs.get("padding", 0), name="padding")
        batch, channels, in_h, in_w = input_tensor.shape
        expected_out_h = conv_output_dim(in_h, kernel_h, stride_h, pad_h, 1)
        expected_out_w = conv_output_dim(in_w, kernel_w, stride_w, pad_w, 1)
        if output_tensor.shape != (batch, channels, expected_out_h, expected_out_w):
            raise ValueError(f"AvgPool op {op.name} output shape does not match kernel/stride/padding.")
        return

    if op.kind in ("sigmoid", "gelu"):
        if len(op.inputs) != 1 or len(op.outputs) != 1:
            raise ValueError(f"{op.kind} op {op.name} must have exactly one input and one output.")
        input_tensor = tensor_map[op.inputs[0]]
        output_tensor = tensor_map[op.outputs[0]]
        if input_tensor.shape != output_tensor.shape:
            raise ValueError(f"{op.kind} op {op.name} must preserve tensor shape.")
        return

    if op.kind == "mul":
        if len(op.inputs) != 2 or len(op.outputs) != 1:
            raise ValueError(f"Mul op {op.name} must have exactly two inputs and one output.")
        lhs_tensor = tensor_map[op.inputs[0]]
        rhs_tensor = tensor_map[op.inputs[1]]
        output_tensor = tensor_map[op.outputs[0]]
        if lhs_tensor.shape != rhs_tensor.shape:
            raise ValueError(f"Mul op {op.name} requires both inputs to have the same shape.")
        if lhs_tensor.shape != output_tensor.shape:
            raise ValueError(f"Mul op {op.name} must preserve tensor shape.")
        return

    raise ValueError(f"Unsupported mini IR op kind: {op.kind}")


def _require_attr_int(op: OpNode, key: str) -> int:
    value = op.attrs.get(key)
    if not isinstance(value, int):
        raise ValueError(f"Op {op.name} must contain integer attr {key}.")
    return value


def _initialize_runtime_tensors(program: Program, tensor_data: dict[str, Any]) -> dict[str, np.ndarray]:
    tensor_map = program.tensor_map()
    runtime_tensors: dict[str, np.ndarray] = {}

    for tensor in program.inputs:
        if tensor.name not in tensor_data:
            raise ValueError(f"tensor_data must provide a value for program input {tensor.name}.")
        array = _to_numpy_array(tensor_data[tensor.name])
        _validate_runtime_tensor_shape(tensor.name, array, tensor.shape, context="Program input")
        runtime_tensors[tensor.name] = array

    for name in tensor_data:
        if name not in tensor_map:
            raise ValueError(f"tensor_data contains unknown tensor {name}.")

    return runtime_tensors


def _execute_program_op(op: OpNode, runtime_tensors: dict[str, np.ndarray]) -> LinearData | None:
    input_array = runtime_tensors[op.inputs[0]]

    if op.kind == "linear":
        in_features = _require_attr_int(op, "in_features")
        out_features = _require_attr_int(op, "out_features")
        if input_array.ndim != 2 or input_array.shape[1] != in_features:
            raise ValueError(f"Runtime tensor for linear op {op.name} must have shape (batch, {in_features}).")

        weight = _to_numpy_array(_require_attr_value(op, "weight"))
        if weight.shape != (out_features, in_features):
            raise ValueError(f"Linear op {op.name} weight must have shape ({out_features}, {in_features}).")
        bias = _optional_bias(op, expected_width=out_features)

        linear_data = LinearData(activations=input_array, weights=weight.T, bias=bias)
        output = linear_data.activations.astype(np.int32) @ linear_data.weights.astype(np.int32)
        if bias is not None:
            output = output + bias.astype(np.int32)
        runtime_tensors[op.outputs[0]] = output.astype(np.int32)
        return linear_data

    if op.kind == "conv2d":
        in_channels = _require_attr_int(op, "in_channels")
        out_channels = _require_attr_int(op, "out_channels")
        kernel_h, kernel_w = normalize_pair(op.attrs.get("kernel_size"), name="kernel_size")
        stride_h, stride_w = normalize_pair(op.attrs.get("stride", 1), name="stride")
        pad_h, pad_w = normalize_pair(op.attrs.get("padding", 0), name="padding")
        dilation_h, dilation_w = normalize_pair(op.attrs.get("dilation", 1), name="dilation")
        groups = int(op.attrs.get("groups", 1))
        if groups <= 0 or in_channels % groups != 0 or out_channels % groups != 0:
            raise ValueError("Mini IR real-data export requires grouped conv channel counts to divide evenly.")
        if input_array.ndim != 4 or input_array.shape[1] != in_channels:
            raise ValueError(f"Runtime tensor for conv op {op.name} must have shape (N, {in_channels}, H, W).")

        weight = _to_numpy_array(_require_attr_value(op, "weight"))
        expected_weight_shape = (out_channels, in_channels // groups, kernel_h, kernel_w)
        if weight.shape != expected_weight_shape:
            raise ValueError(f"Conv op {op.name} weight must have shape {expected_weight_shape}.")
        bias = _optional_bias(op, expected_width=out_channels)

        activations = _im2col_nchw(
            input_array,
            kernel_h=kernel_h,
            kernel_w=kernel_w,
            stride_h=stride_h,
            stride_w=stride_w,
            pad_h=pad_h,
            pad_w=pad_w,
            dilation_h=dilation_h,
            dilation_w=dilation_w,
        )
        weights = _grouped_conv_weight_matrix(
            weight,
            in_channels=in_channels,
            out_channels=out_channels,
            kernel_h=kernel_h,
            kernel_w=kernel_w,
            groups=groups,
        )
        linear_data = LinearData(activations=activations, weights=weights, bias=bias)

        output_matrix = linear_data.activations.astype(np.int32) @ linear_data.weights.astype(np.int32)
        if bias is not None:
            output_matrix = output_matrix + bias.astype(np.int32)

        batch, _, in_height, in_width = input_array.shape
        out_h = conv_output_dim(in_height, kernel_h, stride_h, pad_h, dilation_h)
        out_w = conv_output_dim(in_width, kernel_w, stride_w, pad_w, dilation_w)
        output = output_matrix.reshape(batch, out_h, out_w, out_channels).transpose(0, 3, 1, 2)
        runtime_tensors[op.outputs[0]] = output.astype(np.int32)
        return linear_data

    if op.kind == "relu":
        runtime_tensors[op.outputs[0]] = np.maximum(input_array, 0).astype(input_array.dtype, copy=False)
        return None

    if op.kind == "add":
        rhs_array = runtime_tensors[op.inputs[1]]
        runtime_tensors[op.outputs[0]] = (input_array.astype(np.int32) + rhs_array.astype(np.int32)).astype(np.int32)
        return None

    if op.kind == "batch_norm":
        num_features = _require_attr_int(op, "num_features")
        eps = float(op.attrs.get("eps", 1e-5))
        weight = _to_numpy_array(_require_attr_value(op, "weight")).astype(np.float64)
        bn_bias = _to_numpy_array(_require_attr_value(op, "bias")).astype(np.float64)
        running_mean = _to_numpy_array(_require_attr_value(op, "running_mean")).astype(np.float64)
        running_var = _to_numpy_array(_require_attr_value(op, "running_var")).astype(np.float64)
        x = input_array.astype(np.float64)
        scale = weight / np.sqrt(running_var + eps)
        shift = bn_bias - running_mean * scale
        result = x * scale.reshape(1, num_features, 1, 1) + shift.reshape(1, num_features, 1, 1)
        runtime_tensors[op.outputs[0]] = result.astype(np.int32)
        return None

    if op.kind == "max_pool2d":
        kernel_h, kernel_w = normalize_pair(op.attrs.get("kernel_size"), name="kernel_size")
        stride_h, stride_w = normalize_pair(op.attrs.get("stride", kernel_h), name="stride")
        pad_h, pad_w = normalize_pair(op.attrs.get("padding", 0), name="padding")
        batch, channels, in_h, in_w = input_array.shape
        out_h = conv_output_dim(in_h, kernel_h, stride_h, pad_h, 1)
        out_w = conv_output_dim(in_w, kernel_w, stride_w, pad_w, 1)
        padded = np.full((batch, channels, in_h + 2 * pad_h, in_w + 2 * pad_w), np.iinfo(np.int32).min, dtype=input_array.dtype)
        padded[:, :, pad_h:pad_h + in_h, pad_w:pad_w + in_w] = input_array
        output = np.empty((batch, channels, out_h, out_w), dtype=input_array.dtype)
        for oh in range(out_h):
            for ow in range(out_w):
                h_start = oh * stride_h
                w_start = ow * stride_w
                window = padded[:, :, h_start:h_start + kernel_h, w_start:w_start + kernel_w]
                output[:, :, oh, ow] = window.reshape(batch, channels, -1).max(axis=2)
        runtime_tensors[op.outputs[0]] = output
        return None

    if op.kind == "adaptive_avg_pool2d":
        out_h, out_w = normalize_pair(op.attrs.get("output_size"), name="output_size")
        batch, channels, in_h, in_w = input_array.shape
        output = np.empty((batch, channels, out_h, out_w), dtype=np.int32)
        for oh in range(out_h):
            for ow in range(out_w):
                h_start = (oh * in_h) // out_h
                h_end = ((oh + 1) * in_h) // out_h
                w_start = (ow * in_w) // out_w
                w_end = ((ow + 1) * in_w) // out_w
                window = input_array[:, :, h_start:h_end, w_start:w_end].astype(np.int64)
                output[:, :, oh, ow] = (window.sum(axis=(2, 3)) // ((h_end - h_start) * (w_end - w_start))).astype(np.int32)
        runtime_tensors[op.outputs[0]] = output
        return None

    if op.kind == "flatten":
        start_dim = int(op.attrs.get("start_dim", 1))
        if start_dim != 1:
            raise ValueError("Mini IR real-data export currently supports only start_dim=1 for flatten ops.")
        runtime_tensors[op.outputs[0]] = input_array.reshape(input_array.shape[0], -1)
        return None

    if op.kind == "avg_pool2d":
        kernel_h, kernel_w = normalize_pair(op.attrs.get("kernel_size"), name="kernel_size")
        stride_h, stride_w = normalize_pair(op.attrs.get("stride", kernel_h), name="stride")
        pad_h, pad_w = normalize_pair(op.attrs.get("padding", 0), name="padding")
        batch, channels, in_h, in_w = input_array.shape
        out_h = conv_output_dim(in_h, kernel_h, stride_h, pad_h, 1)
        out_w = conv_output_dim(in_w, kernel_w, stride_w, pad_w, 1)
        padded = np.zeros((batch, channels, in_h + 2 * pad_h, in_w + 2 * pad_w), dtype=np.int64)
        padded[:, :, pad_h:pad_h + in_h, pad_w:pad_w + in_w] = input_array
        output = np.empty((batch, channels, out_h, out_w), dtype=input_array.dtype)
        window_size = kernel_h * kernel_w
        for oh in range(out_h):
            for ow in range(out_w):
                h_start = oh * stride_h
                w_start = ow * stride_w
                window = padded[:, :, h_start:h_start + kernel_h, w_start:w_start + kernel_w]
                output[:, :, oh, ow] = (window.reshape(batch, channels, -1).sum(axis=2) // window_size).astype(input_array.dtype)
        runtime_tensors[op.outputs[0]] = output
        return None

    if op.kind == "sigmoid":
        x = input_array.astype(np.float64)
        result = 1.0 / (1.0 + np.exp(-x))
        runtime_tensors[op.outputs[0]] = (result * 127.0).astype(np.int32)
        return None

    if op.kind == "gelu":
        x = input_array.astype(np.float64)
        # Tanh-approximation: 0.5 * x * (1 + tanh(sqrt(2/pi) * (x + 0.044715 * x^3)))
        c = np.sqrt(2.0 / np.pi)
        result = 0.5 * x * (1.0 + np.tanh(c * (x + 0.044715 * np.power(x, 3))))
        runtime_tensors[op.outputs[0]] = result.astype(np.int32)
        return None

    if op.kind == "mul":
        rhs_array = runtime_tensors[op.inputs[1]]
        runtime_tensors[op.outputs[0]] = (input_array.astype(np.int32) * rhs_array.astype(np.int32)).astype(np.int32)
        return None

    raise ValueError(f"Unsupported mini IR op kind: {op.kind}")


def _optional_bias(op: OpNode, *, expected_width: int) -> np.ndarray | None:
    if "bias" not in op.attrs or op.attrs["bias"] is None:
        return None
    bias = _to_numpy_array(op.attrs["bias"])
    if bias.shape != (expected_width,):
        raise ValueError(f"Op {op.name} bias must have shape ({expected_width},).")
    return bias


def _require_attr_value(op: OpNode, key: str) -> Any:
    if key not in op.attrs:
        raise ValueError(f"Op {op.name} must contain attr {key} for real-data export.")
    return op.attrs[key]


def _validate_runtime_tensor_shape(name: str, array: np.ndarray, expected_shape: tuple[int, ...], *, context: str) -> None:
    if tuple(array.shape) != expected_shape:
        raise ValueError(f"{context} {name} must have shape {expected_shape}, got {tuple(array.shape)}.")


def _tensor_summary(array: np.ndarray) -> dict[str, object]:
    return {
        "shape": list(array.shape),
        "dtype": str(array.dtype),
        "min": int(array.min()) if array.size else None,
        "max": int(array.max()) if array.size else None,
    }


def _json_safe(value: Any) -> Any:
    if isinstance(value, tuple):
        return [_json_safe(item) for item in value]
    if isinstance(value, list):
        return [_json_safe(item) for item in value]
    if isinstance(value, dict):
        return {key: _json_safe(item) for key, item in value.items()}
    return value


__all__ = [
    "LoweredOp",
    "OpNode",
    "Program",
    "ProgramExportStep",
    "TensorValue",
    "export_program_package",
    "lower_program_to_steps",
    "validate_program",
]