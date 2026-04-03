from __future__ import annotations

import argparse
import importlib
import json
from dataclasses import dataclass
from pathlib import Path
from typing import Any, Callable

import numpy as np

from .common import conv_output_dim, normalize_pair, read_json
from .lowering import TILE_SIZE

TorchLinear = Any
TorchConv2d = Any
EXPLICIT_TENSOR_MODE = "from_tensor"


@dataclass(frozen=True)
class LinearData:
    activations: np.ndarray
    weights: np.ndarray
    bias: np.ndarray | None = None


@dataclass(frozen=True)
class LinearOp:
    package_id: str = "linear16_l6_demo"
    m: int = TILE_SIZE
    k: int = TILE_SIZE
    n: int = TILE_SIZE
    activation_mode: str = "row_ramp"
    weight_mode: str = "constant_3"

    def validate_positive(self) -> None:
        if self.m <= 0 or self.k <= 0 or self.n <= 0:
            raise ValueError("All matrix dimensions must be positive.")

    def validate(self) -> None:
        self.validate_positive()
        if (self.m, self.k, self.n) != (TILE_SIZE, TILE_SIZE, TILE_SIZE):
            raise ValueError("The current single-tile export path only supports an exact 16x16x16 tile.")


def _to_numpy_array(value: Any) -> np.ndarray:
    if isinstance(value, np.ndarray):
        return value

    detach = getattr(value, "detach", None)
    if callable(detach):
        value = detach()

    cpu = getattr(value, "cpu", None)
    if callable(cpu):
        value = cpu()

    numpy_fn = getattr(value, "numpy", None)
    if callable(numpy_fn):
        return np.asarray(numpy_fn())

    return np.asarray(value)


def _load_input_json(path: str | Path) -> np.ndarray:
    payload = read_json(path)
    if isinstance(payload, dict):
        if "rows" in payload:
            payload = payload["rows"]
        elif "tensor" in payload:
            payload = payload["tensor"]
        else:
            raise ValueError("Input JSON must be a nested list or contain a 'rows' or 'tensor' field.")
    return _to_numpy_array(payload)


def linear_data_from_torch_linear(torch_linear: TorchLinear, input_tensor: Any) -> LinearData:
    input_array = _to_numpy_array(input_tensor)
    if input_array.ndim != 2:
        raise ValueError("Expected a 2D input tensor.")

    in_features = getattr(torch_linear, "in_features", None)
    out_features = getattr(torch_linear, "out_features", None)
    if not isinstance(in_features, int) or not isinstance(out_features, int):
        raise TypeError("Expected a torch.nn.Linear-compatible object with integer in_features and out_features.")
    if input_array.shape[1] != in_features:
        raise ValueError("Input tensor's second dimension must match torch_linear.in_features.")

    weight = getattr(torch_linear, "weight", None)
    if weight is None:
        raise TypeError("Expected torch_linear.weight to be present.")

    weight_array = _to_numpy_array(weight)
    if weight_array.ndim != 2 or weight_array.shape != (out_features, in_features):
        raise ValueError("torch_linear.weight must have shape (out_features, in_features).")

    weights = weight_array.T
    if weights.shape != (in_features, out_features):
        raise ValueError("Converted weight matrix must have shape (in_features, out_features).")

    bias_obj = getattr(torch_linear, "bias", None)
    bias = None if bias_obj is None else _to_numpy_array(bias_obj)
    if bias is not None and bias.shape != (out_features,):
        raise ValueError("Bias vector must have shape (out_features,).")

    return LinearData(activations=input_array, weights=weights, bias=bias)


def _im2col_nchw(
    input_array: np.ndarray,
    *,
    kernel_h: int,
    kernel_w: int,
    stride_h: int,
    stride_w: int,
    pad_h: int,
    pad_w: int,
    dilation_h: int,
    dilation_w: int,
) -> np.ndarray:
    batch, channels, height, width = input_array.shape
    padded = np.pad(input_array, ((0, 0), (0, 0), (pad_h, pad_h), (pad_w, pad_w)), mode="constant")

    out_h = conv_output_dim(height, kernel_h, stride_h, pad_h, dilation_h)
    out_w = conv_output_dim(width, kernel_w, stride_w, pad_w, dilation_w)
    if out_h <= 0 or out_w <= 0:
        raise ValueError("Conv output spatial dimensions must be positive after applying kernel/stride/padding/dilation.")
    patch_size = channels * kernel_h * kernel_w
    rows = np.zeros((batch * out_h * out_w, patch_size), dtype=input_array.dtype)

    row_index = 0
    for batch_index in range(batch):
        for out_row in range(out_h):
            input_row = out_row * stride_h
            for out_col in range(out_w):
                input_col = out_col * stride_w
                patch_values = []
                for channel_index in range(channels):
                    for kernel_row in range(kernel_h):
                        source_row = input_row + kernel_row * dilation_h
                        for kernel_col in range(kernel_w):
                            source_col = input_col + kernel_col * dilation_w
                            patch_values.append(padded[batch_index, channel_index, source_row, source_col])
                rows[row_index] = np.asarray(patch_values, dtype=input_array.dtype)
                row_index += 1

    return rows


def conv_data_from_torch_conv2d(torch_conv: TorchConv2d, input_tensor: Any) -> LinearData:
    input_array = _to_numpy_array(input_tensor)
    if input_array.ndim != 4:
        raise ValueError("Expected a 4D input tensor in NCHW layout.")

    in_channels = getattr(torch_conv, "in_channels", None)
    out_channels = getattr(torch_conv, "out_channels", None)
    kernel_size = normalize_pair(getattr(torch_conv, "kernel_size", None), name="kernel_size", error_cls=TypeError)
    stride = normalize_pair(getattr(torch_conv, "stride", 1), name="stride", error_cls=TypeError)
    padding = normalize_pair(getattr(torch_conv, "padding", 0), name="padding", error_cls=TypeError)
    dilation = normalize_pair(getattr(torch_conv, "dilation", 1), name="dilation", error_cls=TypeError)
    groups = getattr(torch_conv, "groups", 1)

    if not isinstance(in_channels, int) or not isinstance(out_channels, int):
        raise TypeError("Expected a torch.nn.Conv2d-compatible object with integer in_channels and out_channels.")
    if not isinstance(groups, int) or groups <= 0:
        raise ValueError("torch_conv.groups must be a positive integer.")
    if in_channels % groups != 0 or out_channels % groups != 0:
        raise ValueError("Grouped conv requires in_channels and out_channels to be divisible by groups.")
    if input_array.shape[1] != in_channels:
        raise ValueError("Input tensor channel dimension must match torch_conv.in_channels.")

    weight = getattr(torch_conv, "weight", None)
    if weight is None:
        raise TypeError("Expected torch_conv.weight to be present.")

    kernel_h, kernel_w = kernel_size
    stride_h, stride_w = stride
    pad_h, pad_w = padding
    dilation_h, dilation_w = dilation

    weight_array = _to_numpy_array(weight)
    expected_weight_shape = (out_channels, in_channels // groups, kernel_h, kernel_w)
    if weight_array.shape != expected_weight_shape:
        raise ValueError("torch_conv.weight must have shape (out_channels, in_channels/groups, kernel_h, kernel_w).")

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
        weight_array,
        in_channels=in_channels,
        out_channels=out_channels,
        kernel_h=kernel_h,
        kernel_w=kernel_w,
        groups=groups,
    )

    bias_obj = getattr(torch_conv, "bias", None)
    bias = None if bias_obj is None else _to_numpy_array(bias_obj)
    if bias is not None and bias.shape != (out_channels,):
        raise ValueError("Bias vector must have shape (out_channels,).")

    return LinearData(activations=activations, weights=weights, bias=bias)


def linear_op_from_torch_linear(
    linear: TorchLinear | object,
    *,
    package_id: str = "torch_linear_l6_demo",
    activation_mode: str = EXPLICIT_TENSOR_MODE,
    weight_mode: str = EXPLICIT_TENSOR_MODE,
    m: int = TILE_SIZE,
) -> LinearOp:
    in_features = getattr(linear, "in_features", None)
    out_features = getattr(linear, "out_features", None)
    if not isinstance(in_features, int) or not isinstance(out_features, int):
        raise TypeError("Expected a torch.nn.Linear-compatible object with integer in_features and out_features.")

    return LinearOp(
        package_id=package_id,
        m=m,
        k=in_features,
        n=out_features,
        activation_mode=activation_mode,
        weight_mode=weight_mode,
    )


def frontend(
    torch_linear: TorchLinear,
    input_tensor: Any,
    *,
    package_id: str = "torch_linear_export",
) -> tuple[LinearOp, LinearData]:
    data = linear_data_from_torch_linear(torch_linear, input_tensor)
    op = linear_op_from_torch_linear(
        torch_linear,
        package_id=package_id,
        activation_mode=EXPLICIT_TENSOR_MODE,
        weight_mode=EXPLICIT_TENSOR_MODE,
        m=data.activations.shape[0],
    )
    return op, data


def conv_from_torch_module(
    torch_conv: TorchConv2d,
    input_tensor: Any,
    *,
    package_id: str = "torch_conv_im2col_export",
) -> tuple[LinearOp, LinearData]:
    data = conv_data_from_torch_conv2d(torch_conv, input_tensor)
    op = LinearOp(
        package_id=package_id,
        m=data.activations.shape[0],
        k=data.activations.shape[1],
        n=data.weights.shape[1],
        activation_mode=EXPLICIT_TENSOR_MODE,
        weight_mode=EXPLICIT_TENSOR_MODE,
    )
    return op, data


def _create_torch_linear(in_features: int, out_features: int) -> object:
    try:
        torch = importlib.import_module("torch")
    except ImportError as exc:
        raise RuntimeError(
            "--from-torch-linear requires PyTorch to be installed in the active Python environment."
        ) from exc

    linear = torch.nn.Linear(in_features, out_features)
    with torch.no_grad():
        weight = torch.arange(out_features * in_features, dtype=torch.float32).reshape(out_features, in_features)
        linear.weight.copy_(weight.remainder(8) - 4)
        if linear.bias is not None:
            linear.bias.copy_(torch.arange(out_features, dtype=torch.float32))
    return linear


def _create_torch_conv2d(
    in_channels: int,
    out_channels: int,
    kernel_size: tuple[int, int],
    stride: tuple[int, int],
    padding: tuple[int, int],
    dilation: tuple[int, int],
    groups: int,
) -> object:
    try:
        torch = importlib.import_module("torch")
    except ImportError as exc:
        raise RuntimeError(
            "--from-torch-conv2d requires PyTorch to be installed in the active Python environment."
        ) from exc

    conv = torch.nn.Conv2d(
        in_channels=in_channels,
        out_channels=out_channels,
        kernel_size=kernel_size,
        stride=stride,
        padding=padding,
        dilation=dilation,
        groups=groups,
        bias=True,
    )
    with torch.no_grad():
        weight_count = out_channels * (in_channels // groups) * kernel_size[0] * kernel_size[1]
        weight = torch.arange(weight_count, dtype=torch.float32).reshape(
            out_channels, in_channels // groups, kernel_size[0], kernel_size[1]
        )
        conv.weight.copy_(weight.remainder(8) - 4)
        if conv.bias is not None:
            conv.bias.copy_(torch.arange(out_channels, dtype=torch.float32))
    return conv


def build_arg_parser() -> argparse.ArgumentParser:
    parser = argparse.ArgumentParser(description="Export Linear packages for L6 study.")
    parser.add_argument("--output", required=True, help="Output directory for the generated package")
    parser.add_argument("--package-id", default="linear16_l6_demo", help="Package identifier to write into the manifest")
    parser.add_argument("--m", type=int, default=TILE_SIZE, help="Logical M dimension")
    parser.add_argument("--k", type=int, default=TILE_SIZE, help="Logical K dimension")
    parser.add_argument("--n", type=int, default=TILE_SIZE, help="Logical N dimension")
    parser.add_argument(
        "--activation-mode",
        choices=["row_ramp", "column_ramp", "identity", EXPLICIT_TENSOR_MODE],
        default="row_ramp",
        help="Pattern used to generate or interpret the activation matrix",
    )
    parser.add_argument(
        "--weight-mode",
        choices=["constant_3", "identity", "column_ramp", EXPLICIT_TENSOR_MODE],
        default="constant_3",
        help="Pattern used to generate or interpret the weight matrix",
    )
    parser.add_argument("--tiled", action="store_true", help="Export a tiled multi-pass package instead of a single tile package")
    parser.add_argument("--from-torch-linear", action="store_true", help="Build a torch.nn.Linear frontend object and export its real parameters")
    parser.add_argument("--from-torch-conv2d", action="store_true", help="Build a torch.nn.Conv2d frontend object, apply im2col, and export its real parameters")
    parser.add_argument("--torch-in-features", type=int, help="Input feature size for the generated torch.nn.Linear")
    parser.add_argument("--torch-out-features", type=int, help="Output feature size for the generated torch.nn.Linear")
    parser.add_argument("--torch-conv-in-channels", type=int, help="Input channel count for the generated torch.nn.Conv2d")
    parser.add_argument("--torch-conv-out-channels", type=int, help="Output channel count for the generated torch.nn.Conv2d")
    parser.add_argument("--torch-conv-kernel-height", type=int, help="Kernel height for the generated torch.nn.Conv2d")
    parser.add_argument("--torch-conv-kernel-width", type=int, help="Kernel width for the generated torch.nn.Conv2d")
    parser.add_argument("--torch-conv-stride", type=int, default=1, help="Stride for the generated torch.nn.Conv2d")
    parser.add_argument("--torch-conv-padding", type=int, default=0, help="Padding for the generated torch.nn.Conv2d")
    parser.add_argument("--torch-conv-dilation", type=int, default=1, help="Dilation for the generated torch.nn.Conv2d")
    parser.add_argument("--torch-conv-groups", type=int, default=1, help="Groups for the generated torch.nn.Conv2d")
    parser.add_argument("--input-json", help="Path to a JSON file containing a 2D input tensor as nested lists or a {\"rows\": ...} object")
    return parser


def cli_frontend(
    args: argparse.Namespace,
    torch_linear_factory: Callable[[int, int], object] | None = None,
    torch_conv_factory: Callable[[int, int, tuple[int, int], tuple[int, int], tuple[int, int], tuple[int, int], int], object] | None = None,
) -> tuple[LinearOp, LinearData | None]:
    if args.from_torch_linear:
        if args.torch_in_features is None or args.torch_out_features is None:
            raise ValueError("--from-torch-linear requires --torch-in-features and --torch-out-features.")
        if args.input_json is None:
            raise ValueError("--from-torch-linear requires --input-json to provide a real activation tensor.")

        factory = torch_linear_factory or _create_torch_linear
        torch_linear = factory(args.torch_in_features, args.torch_out_features)
        input_tensor = _load_input_json(args.input_json)
        return frontend(torch_linear, input_tensor, package_id=args.package_id)

    if args.from_torch_conv2d:
        required = [
            args.torch_conv_in_channels,
            args.torch_conv_out_channels,
            args.torch_conv_kernel_height,
            args.torch_conv_kernel_width,
        ]
        if any(value is None for value in required):
            raise ValueError(
                "--from-torch-conv2d requires --torch-conv-in-channels, --torch-conv-out-channels, "
                "--torch-conv-kernel-height, and --torch-conv-kernel-width."
            )
        if args.input_json is None:
            raise ValueError("--from-torch-conv2d requires --input-json to provide a real NCHW activation tensor.")

        factory = torch_conv_factory or _create_torch_conv2d
        torch_conv = factory(
            args.torch_conv_in_channels,
            args.torch_conv_out_channels,
            (args.torch_conv_kernel_height, args.torch_conv_kernel_width),
            (args.torch_conv_stride, args.torch_conv_stride),
            (args.torch_conv_padding, args.torch_conv_padding),
            (args.torch_conv_dilation, args.torch_conv_dilation),
            args.torch_conv_groups,
        )
        input_tensor = _load_input_json(args.input_json)
        return conv_from_torch_module(torch_conv, input_tensor, package_id=args.package_id)

    op = LinearOp(
        package_id=args.package_id,
        m=args.m,
        k=args.k,
        n=args.n,
        activation_mode=args.activation_mode,
        weight_mode=args.weight_mode,
    )
    return op, None


def linear_op_from_cli_args(
    args: argparse.Namespace,
    torch_linear_factory: Callable[[int, int], object] | None = None,
    torch_conv_factory: Callable[[int, int, tuple[int, int], tuple[int, int], tuple[int, int], tuple[int, int], int], object] | None = None,
) -> LinearOp:
    op, _ = cli_frontend(args, torch_linear_factory=torch_linear_factory, torch_conv_factory=torch_conv_factory)
    return op


def _grouped_conv_weight_matrix(
    weight_array: np.ndarray,
    *,
    in_channels: int,
    out_channels: int,
    kernel_h: int,
    kernel_w: int,
    groups: int,
) -> np.ndarray:
    channels_per_group = in_channels // groups
    out_channels_per_group = out_channels // groups
    full_weights = np.zeros((in_channels * kernel_h * kernel_w, out_channels), dtype=weight_array.dtype)

    for group_index in range(groups):
        in_channel_base = group_index * channels_per_group
        out_channel_base = group_index * out_channels_per_group
        for out_offset in range(out_channels_per_group):
            out_channel = out_channel_base + out_offset
            for in_offset in range(channels_per_group):
                in_channel = in_channel_base + in_offset
                row_base = in_channel * kernel_h * kernel_w
                kernel_values = weight_array[out_channel, in_offset].reshape(-1)
                full_weights[row_base : row_base + kernel_h * kernel_w, out_channel] = kernel_values

    return full_weights


__all__ = [
    "EXPLICIT_TENSOR_MODE",
    "LinearData",
    "LinearOp",
    "TorchConv2d",
    "TorchLinear",
    "build_arg_parser",
    "cli_frontend",
    "conv_data_from_torch_conv2d",
    "conv_from_torch_module",
    "frontend",
    "linear_data_from_torch_linear",
    "linear_op_from_cli_args",
    "linear_op_from_torch_linear",
]