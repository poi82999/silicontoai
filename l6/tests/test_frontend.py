from __future__ import annotations

import json
from pathlib import Path

import numpy as np

from conftest import FakeTensor, FakeTorchConv2dWithParams, FakeTorchLinear, FakeTorchLinearWithParams, ROOT
from l6_toolchain.api import (
    LinearData,
    LinearOp,
    build_arg_parser,
    cli_frontend,
    conv_data_from_torch_conv2d,
    conv_from_torch_module,
    export_linear_tiled_package,
    frontend,
    linear_data_from_torch_linear,
    linear_op_from_cli_args,
    linear_op_from_torch_linear,
)


def test_build_arg_parser_supports_linear_op_and_tiled_flag() -> None:
    parser = build_arg_parser()
    args = parser.parse_args([
        "--output", "dummy_out", "--package-id", "cli_demo", "--m", "32", "--k", "20", "--n", "16",
        "--activation-mode", "column_ramp", "--weight-mode", "column_ramp", "--tiled",
    ])

    assert args.output == "dummy_out"
    assert args.package_id == "cli_demo"
    assert args.m == 32
    assert args.k == 20
    assert args.n == 16
    assert args.activation_mode == "column_ramp"
    assert args.weight_mode == "column_ramp"
    assert args.tiled is True


def test_build_arg_parser_accepts_input_json_for_torch_frontend() -> None:
    parser = build_arg_parser()
    args = parser.parse_args([
        "--output", "dummy_out", "--from-torch-linear", "--torch-in-features", "4", "--torch-out-features", "3", "--input-json", "input.json",
    ])

    assert args.from_torch_linear is True
    assert args.input_json == "input.json"


def test_build_arg_parser_accepts_conv_frontend_arguments() -> None:
    parser = build_arg_parser()
    args = parser.parse_args([
        "--output", "dummy_out", "--from-torch-conv2d", "--torch-conv-in-channels", "1", "--torch-conv-out-channels", "2",
        "--torch-conv-kernel-height", "3", "--torch-conv-kernel-width", "3", "--torch-conv-stride", "2", "--torch-conv-padding", "1",
        "--torch-conv-dilation", "2", "--torch-conv-groups", "2", "--input-json", "input.json",
    ])

    assert args.from_torch_conv2d is True
    assert args.torch_conv_in_channels == 1
    assert args.torch_conv_out_channels == 2
    assert args.torch_conv_kernel_height == 3
    assert args.torch_conv_kernel_width == 3
    assert args.torch_conv_stride == 2
    assert args.torch_conv_padding == 1
    assert args.torch_conv_dilation == 2
    assert args.torch_conv_groups == 2
    assert args.input_json == "input.json"


def test_linear_op_from_cli_args_uses_torch_frontend_factory() -> None:
    input_path = ROOT / "l6" / "tests" / "_tmp_cli_input.json"
    input_path.write_text(json.dumps([[1, 2, 3], [4, 5, 6]]) + "\n", encoding="utf-8")
    parser = build_arg_parser()
    try:
        args = parser.parse_args([
            "--output", "dummy_out", "--package-id", "torch_cli_demo", "--from-torch-linear", "--torch-in-features", "3",
            "--torch-out-features", "2", "--input-json", str(input_path),
        ])

        op = linear_op_from_cli_args(
            args,
            torch_linear_factory=lambda in_features, out_features: FakeTorchLinearWithParams(
                in_features=in_features,
                out_features=out_features,
                weight=[[1, 2, 3], [4, 5, 6]],
                bias=[7, 8],
            ),
        )

        assert op.package_id == "torch_cli_demo"
        assert op.m == 2
        assert op.k == 3
        assert op.n == 2
        assert op.activation_mode == "from_tensor"
        assert op.weight_mode == "from_tensor"
    finally:
        if input_path.exists():
            input_path.unlink()


def test_linear_op_from_torch_linear_reads_shape() -> None:
    fake_linear = FakeTorchLinear(in_features=20, out_features=32)

    op = linear_op_from_torch_linear(
        fake_linear,
        package_id="torch_demo",
        activation_mode="row_ramp",
        weight_mode="column_ramp",
        m=8,
    )

    assert op.package_id == "torch_demo"
    assert op.m == 8
    assert op.k == 20
    assert op.n == 32
    assert op.activation_mode == "row_ramp"
    assert op.weight_mode == "column_ramp"


def test_frontend_extracts_linear_op_and_data() -> None:
    fake_linear = FakeTorchLinearWithParams(in_features=3, out_features=2, weight=[[1, 2, 3], [4, 5, 6]], bias=[7, 8])
    input_tensor = FakeTensor([[10, 11, 12], [13, 14, 15]])

    op, data = frontend(fake_linear, input_tensor)

    assert op.m == 2
    assert op.k == 3
    assert op.n == 2
    assert op.activation_mode == "from_tensor"
    assert op.weight_mode == "from_tensor"
    assert data.activations.tolist() == [[10, 11, 12], [13, 14, 15]]
    assert data.weights.tolist() == [[1, 4], [2, 5], [3, 6]]
    assert data.bias.tolist() == [7, 8]


def test_linear_data_from_torch_linear_extracts_only_numeric_payloads() -> None:
    fake_linear = FakeTorchLinearWithParams(in_features=2, out_features=3, weight=[[1, 2], [3, 4], [5, 6]], bias=[7, 8, 9])
    input_tensor = FakeTensor([[10, 11], [12, 13]])

    data = linear_data_from_torch_linear(fake_linear, input_tensor)

    assert data.activations.tolist() == [[10, 11], [12, 13]]
    assert data.weights.tolist() == [[1, 3, 5], [2, 4, 6]]
    assert data.bias.tolist() == [7, 8, 9]


def test_export_linear_tiled_package_uses_frontend_data(tmp_path: Path) -> None:
    output_dir = tmp_path / "frontend_tiled"
    op = LinearOp(package_id="frontend_tiled", m=2, k=3, n=2, activation_mode="from_tensor", weight_mode="from_tensor")
    data = LinearData(
        activations=np.asarray([[1, 2, 3], [4, 5, 6]]),
        weights=np.asarray([[1, 4], [2, 5], [3, 6]]),
        bias=np.asarray([1, 2]),
    )

    export_linear_tiled_package(output_dir, op, data)

    activations = json.loads((output_dir / "tiles" / "tile_000" / "activations.json").read_text(encoding="utf-8"))
    weights = json.loads((output_dir / "tiles" / "tile_000" / "weights.json").read_text(encoding="utf-8"))
    golden = json.loads((output_dir / "tiles" / "tile_000" / "golden.json").read_text(encoding="utf-8"))

    assert activations["valid_rows"] == 2
    assert activations["valid_cols"] == 3
    assert activations["rows"][0][:3] == [1, 2, 3]
    assert weights["valid_rows"] == 3
    assert weights["valid_cols"] == 2
    assert weights["rows"][0][:2] == [1, 4]
    assert golden["outputs"][0]["vector"] == [15, 34]
    assert golden["outputs"][1]["vector"] == [33, 79]


def test_conv_data_from_torch_conv2d_generates_im2col_linear_data() -> None:
    fake_conv = FakeTorchConv2dWithParams(in_channels=1, out_channels=1, kernel_size=(2, 2), weight=[[[[1, 2], [3, 4]]]], bias=[5])
    input_tensor = FakeTensor([[[[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12], [13, 14, 15, 16]]]])

    data = conv_data_from_torch_conv2d(fake_conv, input_tensor)

    assert data.activations.shape == (9, 4)
    assert data.activations[0].tolist() == [1, 2, 5, 6]
    assert data.activations[1].tolist() == [2, 3, 6, 7]
    assert data.activations[8].tolist() == [11, 12, 15, 16]
    assert data.weights.shape == (4, 1)
    assert data.weights[:, 0].tolist() == [1, 2, 3, 4]
    assert data.bias.tolist() == [5]


def test_conv_from_torch_module_lowers_to_linear_op() -> None:
    fake_conv = FakeTorchConv2dWithParams(
        in_channels=1,
        out_channels=2,
        kernel_size=(2, 2),
        weight=[[[[1, 2], [3, 4]]], [[[5, 6], [7, 8]]]],
        bias=[1, 2],
    )
    input_tensor = FakeTensor([[[[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12], [13, 14, 15, 16]]]])

    op, data = conv_from_torch_module(fake_conv, input_tensor, package_id="conv_demo")

    assert op.package_id == "conv_demo"
    assert op.m == 9
    assert op.k == 4
    assert op.n == 2
    assert op.activation_mode == "from_tensor"
    assert op.weight_mode == "from_tensor"
    assert data.activations.shape == (9, 4)
    assert data.weights.shape == (4, 2)


def test_conv_data_from_torch_conv2d_stride_padding_fixes_output_m_dimension() -> None:
    fake_conv = FakeTorchConv2dWithParams(
        in_channels=1,
        out_channels=2,
        kernel_size=(3, 3),
        weight=[[[[1, 2, 3], [4, 5, 6], [7, 8, 9]]], [[[9, 8, 7], [6, 5, 4], [3, 2, 1]]]],
        bias=[1, -1],
        stride=2,
        padding=1,
    )
    input_tensor = FakeTensor([
        [[[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12], [13, 14, 15, 16]]],
        [[[17, 18, 19, 20], [21, 22, 23, 24], [25, 26, 27, 28], [29, 30, 31, 32]]],
    ])

    data = conv_data_from_torch_conv2d(fake_conv, input_tensor)

    assert data.activations.shape == (8, 9)
    assert data.weights.shape == (9, 2)
    assert data.activations[0].tolist() == [0, 0, 0, 0, 1, 2, 0, 5, 6]
    assert data.activations[3].tolist() == [6, 7, 8, 10, 11, 12, 14, 15, 16]
    assert data.activations[4].tolist() == [0, 0, 0, 0, 17, 18, 0, 21, 22]


def test_conv_from_torch_module_maps_m_to_batch_times_output_spatial() -> None:
    fake_conv = FakeTorchConv2dWithParams(
        in_channels=1,
        out_channels=2,
        kernel_size=(3, 3),
        weight=[[[[1, 0, 1], [0, 1, 0], [1, 0, 1]]], [[[0, 1, 0], [1, 0, 1], [0, 1, 0]]]],
        stride=2,
        padding=1,
    )
    input_tensor = FakeTensor([
        [[[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12], [13, 14, 15, 16]]],
        [[[17, 18, 19, 20], [21, 22, 23, 24], [25, 26, 27, 28], [29, 30, 31, 32]]],
    ])

    op, data = conv_from_torch_module(fake_conv, input_tensor, package_id="conv_stride_pad_demo")

    assert op.package_id == "conv_stride_pad_demo"
    assert op.m == 8
    assert op.k == 9
    assert op.n == 2
    assert data.activations.shape == (8, 9)
    assert data.weights.shape == (9, 2)


def test_conv_data_from_torch_conv2d_supports_dilation() -> None:
    fake_conv = FakeTorchConv2dWithParams(in_channels=1, out_channels=1, kernel_size=(2, 2), weight=[[[[1, 2], [3, 4]]]], bias=[0], dilation=2)
    input_tensor = FakeTensor([[[[1, 2, 3, 4, 5], [6, 7, 8, 9, 10], [11, 12, 13, 14, 15], [16, 17, 18, 19, 20], [21, 22, 23, 24, 25]]]])

    data = conv_data_from_torch_conv2d(fake_conv, input_tensor)

    assert data.activations.shape == (9, 4)
    assert data.weights.shape == (4, 1)
    assert data.activations[0].tolist() == [1, 3, 11, 13]
    assert data.activations[1].tolist() == [2, 4, 12, 14]
    assert data.activations[8].tolist() == [13, 15, 23, 25]


def test_conv_from_torch_module_maps_dilated_output_to_linear_shape() -> None:
    fake_conv = FakeTorchConv2dWithParams(
        in_channels=1,
        out_channels=2,
        kernel_size=(2, 2),
        weight=[[[[1, 0], [0, 1]]], [[[0, 1], [1, 0]]]],
        dilation=2,
    )
    input_tensor = FakeTensor([[[[1, 2, 3, 4, 5], [6, 7, 8, 9, 10], [11, 12, 13, 14, 15], [16, 17, 18, 19, 20], [21, 22, 23, 24, 25]]]])

    op, data = conv_from_torch_module(fake_conv, input_tensor, package_id="conv_dilated_demo")

    assert op.package_id == "conv_dilated_demo"
    assert op.m == 9
    assert op.k == 4
    assert op.n == 2
    assert data.activations.shape == (9, 4)
    assert data.weights.shape == (4, 2)


def test_conv_data_from_torch_conv2d_supports_groups() -> None:
    fake_conv = FakeTorchConv2dWithParams(
        in_channels=4,
        out_channels=4,
        kernel_size=(1, 1),
        groups=2,
        weight=[[[[1]], [[10]]], [[[2]], [[20]]], [[[3]], [[30]]], [[[4]], [[40]]]],
        bias=[0, 0, 0, 0],
    )
    input_tensor = FakeTensor([
        [
            [[1, 2], [3, 4]],
            [[5, 6], [7, 8]],
            [[9, 10], [11, 12]],
            [[13, 14], [15, 16]],
        ]
    ])

    data = conv_data_from_torch_conv2d(fake_conv, input_tensor)

    assert data.activations.shape == (4, 4)
    assert data.weights.shape == (4, 4)
    assert data.weights[:, 0].tolist() == [1, 10, 0, 0]
    assert data.weights[:, 1].tolist() == [2, 20, 0, 0]
    assert data.weights[:, 2].tolist() == [0, 0, 3, 30]
    assert data.weights[:, 3].tolist() == [0, 0, 4, 40]


def test_cli_frontend_passes_conv_groups_to_factory(tmp_path: Path) -> None:
    input_path = tmp_path / "conv_input_groups.json"
    input_path.write_text(json.dumps({"tensor": [[[[1]], [[2]], [[3]], [[4]]]]}) + "\n", encoding="utf-8")

    parser = build_arg_parser()
    args = parser.parse_args([
        "--output", str(tmp_path / "out"), "--package-id", "conv_group_cli_demo", "--from-torch-conv2d", "--torch-conv-in-channels", "4",
        "--torch-conv-out-channels", "4", "--torch-conv-kernel-height", "1", "--torch-conv-kernel-width", "1", "--torch-conv-groups", "2",
        "--input-json", str(input_path),
    ])

    captured: dict[str, int] = {}

    op, data = cli_frontend(
        args,
        torch_conv_factory=lambda in_channels, out_channels, kernel_size, stride, padding, dilation, groups: (
            captured.update({"groups": groups})
            or FakeTorchConv2dWithParams(
                in_channels=in_channels,
                out_channels=out_channels,
                kernel_size=kernel_size,
                groups=groups,
                weight=[[[[1]], [[2]]], [[[3]], [[4]]], [[[5]], [[6]]], [[[7]], [[8]]]],
                bias=[0, 0, 0, 0],
                stride=stride,
                padding=padding,
                dilation=dilation,
            )
        ),
    )

    assert captured["groups"] == 2
    assert op.k == 4
    assert op.n == 4
    assert data is not None


def test_cli_frontend_returns_conv_real_data_from_input_json(tmp_path: Path) -> None:
    input_path = tmp_path / "conv_input.json"
    input_path.write_text(json.dumps({"tensor": [[[[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12], [13, 14, 15, 16]]]]}) + "\n", encoding="utf-8")

    parser = build_arg_parser()
    args = parser.parse_args([
        "--output", str(tmp_path / "out"), "--package-id", "conv_cli_demo", "--from-torch-conv2d", "--torch-conv-in-channels", "1",
        "--torch-conv-out-channels", "2", "--torch-conv-kernel-height", "2", "--torch-conv-kernel-width", "2", "--torch-conv-stride", "1",
        "--torch-conv-padding", "0", "--torch-conv-dilation", "2", "--input-json", str(input_path),
    ])

    op, data = cli_frontend(
        args,
        torch_conv_factory=lambda in_channels, out_channels, kernel_size, stride, padding, dilation, groups: FakeTorchConv2dWithParams(
            in_channels=in_channels,
            out_channels=out_channels,
            kernel_size=kernel_size,
            weight=[[[[1, 2], [3, 4]]], [[[5, 6], [7, 8]]]],
            bias=[1, 2],
            stride=stride,
            padding=padding,
            dilation=dilation,
            groups=groups,
        ),
    )

    assert op.package_id == "conv_cli_demo"
    assert op.m == 4
    assert op.k == 4
    assert op.n == 2
    assert data is not None
    assert data.activations.shape == (4, 4)
    assert data.weights.shape == (4, 2)


def test_export_linear_tiled_package_uses_conv_frontend_data(tmp_path: Path) -> None:
    output_dir = tmp_path / "conv_frontend_tiled"
    fake_conv = FakeTorchConv2dWithParams(
        in_channels=1,
        out_channels=2,
        kernel_size=(2, 2),
        weight=[[[[1, 2], [3, 4]]], [[[5, 6], [7, 8]]]],
        bias=[1, 2],
    )
    input_tensor = FakeTensor([[[[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12], [13, 14, 15, 16]]]])

    op, data = conv_from_torch_module(fake_conv, input_tensor, package_id="conv_frontend_tiled")
    export_linear_tiled_package(output_dir, op, data)

    activations = json.loads((output_dir / "tiles" / "tile_000" / "activations.json").read_text(encoding="utf-8"))
    weights = json.loads((output_dir / "tiles" / "tile_000" / "weights.json").read_text(encoding="utf-8"))
    golden = json.loads((output_dir / "tiles" / "tile_000" / "golden.json").read_text(encoding="utf-8"))

    assert activations["valid_rows"] == 9
    assert activations["valid_cols"] == 4
    assert activations["rows"][0][:4] == [1, 2, 5, 6]
    assert weights["valid_rows"] == 4
    assert weights["valid_cols"] == 2
    assert weights["rows"][0][:2] == [1, 5]
    assert golden["outputs"][0]["vector"] == [45, 102]


def test_cli_frontend_returns_real_data_from_input_json(tmp_path: Path) -> None:
    input_path = tmp_path / "input.json"
    input_path.write_text(json.dumps({"rows": [[1, 2, 3], [4, 5, 6]]}) + "\n", encoding="utf-8")

    parser = build_arg_parser()
    args = parser.parse_args([
        "--output", str(tmp_path / "out"), "--package-id", "cli_frontend_demo", "--from-torch-linear", "--torch-in-features", "3",
        "--torch-out-features", "2", "--input-json", str(input_path),
    ])

    op, data = cli_frontend(
        args,
        torch_linear_factory=lambda in_features, out_features: FakeTorchLinearWithParams(
            in_features=in_features,
            out_features=out_features,
            weight=[[1, 2, 3], [4, 5, 6]],
            bias=[7, 8],
        ),
    )

    assert op.package_id == "cli_frontend_demo"
    assert op.m == 2
    assert op.k == 3
    assert op.n == 2
    assert data is not None
    assert data.activations.tolist() == [[1, 2, 3], [4, 5, 6]]
    assert data.weights.tolist() == [[1, 4], [2, 5], [3, 6]]
    assert data.bias.tolist() == [7, 8]