from __future__ import annotations

import json
from pathlib import Path

from l6_toolchain.api import (
    OpNode,
    Program,
    TensorValue,
    export_program_package,
    reconstruct_output_matrix,
    lower_program_to_steps,
    validate_package,
    validate_program,
)


def test_validate_program_accepts_linear_relu_flatten_sequence() -> None:
    program = Program(
        inputs=(TensorValue(name="x", shape=(1, 2, 2, 2), dtype="int8"),),
        tensors=(
            TensorValue(name="x", shape=(1, 2, 2, 2), dtype="int8"),
            TensorValue(name="relu0_out", shape=(1, 2, 2, 2), dtype="int8"),
            TensorValue(name="flat0_out", shape=(1, 8), dtype="int8"),
            TensorValue(name="fc0_out", shape=(1, 4), dtype="int32"),
        ),
        ops=(
            OpNode(name="relu0", kind="relu", inputs=("x",), outputs=("relu0_out",)),
            OpNode(name="flat0", kind="flatten", inputs=("relu0_out",), outputs=("flat0_out",), attrs={"start_dim": 1}),
            OpNode(
                name="fc0",
                kind="linear",
                inputs=("flat0_out",),
                outputs=("fc0_out",),
                attrs={"in_features": 8, "out_features": 4, "bias": True},
            ),
        ),
        outputs=("fc0_out",),
    )

    validate_program(program)


def test_validate_program_rejects_unknown_tensor_reference() -> None:
    import pytest

    program = Program(
        inputs=(TensorValue(name="x", shape=(1, 4), dtype="int8"),),
        tensors=(
            TensorValue(name="x", shape=(1, 4), dtype="int8"),
            TensorValue(name="fc0_out", shape=(1, 2), dtype="int32"),
        ),
        ops=(
            OpNode(
                name="fc0",
                kind="linear",
                inputs=("missing",),
                outputs=("fc0_out",),
                attrs={"in_features": 4, "out_features": 2},
            ),
        ),
        outputs=("fc0_out",),
    )

    with pytest.raises(ValueError, match="unknown input tensor"):
        validate_program(program)


def test_lower_program_to_steps_converts_conv_relu_flatten_linear_sequence() -> None:
    program = Program(
        inputs=(TensorValue(name="x", shape=(1, 1, 4, 4), dtype="int8"),),
        tensors=(
            TensorValue(name="x", shape=(1, 1, 4, 4), dtype="int8"),
            TensorValue(name="conv0_out", shape=(1, 2, 4, 4), dtype="int32"),
            TensorValue(name="relu0_out", shape=(1, 2, 4, 4), dtype="int32"),
            TensorValue(name="flat0_out", shape=(1, 32), dtype="int32"),
            TensorValue(name="fc0_out", shape=(1, 8), dtype="int32"),
        ),
        ops=(
            OpNode(
                name="conv0",
                kind="conv2d",
                inputs=("x",),
                outputs=("conv0_out",),
                attrs={
                    "in_channels": 1,
                    "out_channels": 2,
                    "kernel_size": (3, 3),
                    "stride": (1, 1),
                    "padding": (1, 1),
                    "dilation": (1, 1),
                    "groups": 1,
                },
            ),
            OpNode(name="relu0", kind="relu", inputs=("conv0_out",), outputs=("relu0_out",)),
            OpNode(name="flat0", kind="flatten", inputs=("relu0_out",), outputs=("flat0_out",), attrs={"start_dim": 1}),
            OpNode(
                name="fc0",
                kind="linear",
                inputs=("flat0_out",),
                outputs=("fc0_out",),
                attrs={"in_features": 32, "out_features": 8, "bias": True},
            ),
        ),
        outputs=("fc0_out",),
    )

    steps = lower_program_to_steps(program)

    assert [step.lowered_kind for step in steps] == [
        "conv2d_im2col_gemm",
        "elementwise_post_op",
        "shape_only",
        "gemm",
    ]
    assert steps[0].attrs["m"] == 16
    assert steps[0].attrs["k"] == 9
    assert steps[0].attrs["n"] == 2
    assert steps[3].attrs["m"] == 1
    assert steps[3].attrs["k"] == 32
    assert steps[3].attrs["n"] == 8
    assert steps[0].to_dict()["name"] == "conv0"


def test_lower_program_to_steps_supports_dilated_conv_shapes() -> None:
    program = Program(
        inputs=(TensorValue(name="x", shape=(1, 1, 5, 5), dtype="int8"),),
        tensors=(
            TensorValue(name="x", shape=(1, 1, 5, 5), dtype="int8"),
            TensorValue(name="conv0_out", shape=(1, 2, 3, 3), dtype="int32"),
        ),
        ops=(
            OpNode(
                name="conv0",
                kind="conv2d",
                inputs=("x",),
                outputs=("conv0_out",),
                attrs={
                    "in_channels": 1,
                    "out_channels": 2,
                    "kernel_size": (2, 2),
                    "stride": (1, 1),
                    "padding": (0, 0),
                    "dilation": (2, 2),
                    "groups": 1,
                },
            ),
        ),
        outputs=("conv0_out",),
    )

    steps = lower_program_to_steps(program)

    assert len(steps) == 1
    assert steps[0].lowered_kind == "conv2d_im2col_gemm"
    assert steps[0].attrs["m"] == 9
    assert steps[0].attrs["k"] == 4
    assert steps[0].attrs["n"] == 2


def test_export_program_package_emits_step_sequence_with_compute_packages(tmp_path: Path) -> None:
    output_dir = tmp_path / "program_export"
    program = Program(
        inputs=(TensorValue(name="x", shape=(1, 1, 4, 4), dtype="int8"),),
        tensors=(
            TensorValue(name="x", shape=(1, 1, 4, 4), dtype="int8"),
            TensorValue(name="conv0_out", shape=(1, 2, 4, 4), dtype="int32"),
            TensorValue(name="relu0_out", shape=(1, 2, 4, 4), dtype="int32"),
            TensorValue(name="flat0_out", shape=(1, 32), dtype="int32"),
            TensorValue(name="fc0_out", shape=(1, 8), dtype="int32"),
        ),
        ops=(
            OpNode(
                name="conv0",
                kind="conv2d",
                inputs=("x",),
                outputs=("conv0_out",),
                attrs={
                    "in_channels": 1,
                    "out_channels": 2,
                    "kernel_size": (3, 3),
                    "stride": (1, 1),
                    "padding": (1, 1),
                    "dilation": (1, 1),
                    "groups": 1,
                },
            ),
            OpNode(name="relu0", kind="relu", inputs=("conv0_out",), outputs=("relu0_out",)),
            OpNode(name="flat0", kind="flatten", inputs=("relu0_out",), outputs=("flat0_out",), attrs={"start_dim": 1}),
            OpNode(name="fc0", kind="linear", inputs=("flat0_out",), outputs=("fc0_out",), attrs={"in_features": 32, "out_features": 8}),
        ),
        outputs=("fc0_out",),
    )

    exported_path = export_program_package(output_dir, program, package_id="program_export_demo", tiled=True)

    assert exported_path == output_dir
    manifest = json.loads((output_dir / "manifest.json").read_text(encoding="utf-8"))
    steps_index = json.loads((output_dir / "steps.json").read_text(encoding="utf-8"))
    conv_step_manifest = json.loads((output_dir / "steps" / "step_000_conv0" / "manifest.json").read_text(encoding="utf-8"))
    relu_step_manifest = json.loads((output_dir / "steps" / "step_001_relu0" / "manifest.json").read_text(encoding="utf-8"))
    conv_compute_manifest = json.loads((output_dir / "steps" / "step_000_conv0" / "compute_package" / "manifest.json").read_text(encoding="utf-8"))
    fc_compute_manifest = json.loads((output_dir / "steps" / "step_003_fc0" / "compute_package" / "manifest.json").read_text(encoding="utf-8"))

    assert manifest["op_type"] == "program_sequence"
    assert manifest["step_count"] == 4
    assert manifest["program"]["outputs"] == ["fc0_out"]
    assert len(steps_index["steps"]) == 4
    assert steps_index["steps"][0]["lowered_kind"] == "conv2d_im2col_gemm"
    assert steps_index["steps"][1]["compute_package_dir"] is None
    assert steps_index["steps"][3]["compute_package_dir"] == "steps/step_003_fc0/compute_package"
    assert conv_step_manifest["files"]["compute_package"] == "compute_package"
    assert relu_step_manifest["lowered_kind"] == "elementwise_post_op"
    assert relu_step_manifest["files"] == {}
    assert conv_compute_manifest["shape"] == {"m": 16, "k": 9, "n": 2}
    assert fc_compute_manifest["shape"] == {"m": 1, "k": 32, "n": 8}

    validate_package(output_dir / "steps" / "step_000_conv0" / "compute_package")
    validate_package(output_dir / "steps" / "step_003_fc0" / "compute_package")


def test_export_program_package_supports_single_tile_compute_packages(tmp_path: Path) -> None:
    output_dir = tmp_path / "program_single_tile"
    program = Program(
        inputs=(TensorValue(name="x", shape=(1, 4), dtype="int8"),),
        tensors=(
            TensorValue(name="x", shape=(1, 4), dtype="int8"),
            TensorValue(name="y", shape=(1, 2), dtype="int32"),
        ),
        ops=(
            OpNode(name="fc0", kind="linear", inputs=("x",), outputs=("y",), attrs={"in_features": 4, "out_features": 2}),
        ),
        outputs=("y",),
    )

    export_program_package(output_dir, program, package_id="program_single_tile_demo", tiled=False)

    compute_manifest = json.loads((output_dir / "steps" / "step_000_fc0" / "compute_package" / "manifest.json").read_text(encoding="utf-8"))
    assert compute_manifest["op_type"] == "gemm_tiled"
    assert compute_manifest["shape"] == {"m": 1, "k": 4, "n": 2}


def test_export_program_package_uses_real_tensor_data_for_chained_compute_steps(tmp_path: Path) -> None:
    output_dir = tmp_path / "program_real_data"
    program = Program(
        inputs=(TensorValue(name="x", shape=(1, 3), dtype="int8"),),
        tensors=(
            TensorValue(name="x", shape=(1, 3), dtype="int8"),
            TensorValue(name="fc0_out", shape=(1, 2), dtype="int32"),
            TensorValue(name="relu0_out", shape=(1, 2), dtype="int32"),
            TensorValue(name="y", shape=(1, 1), dtype="int32"),
        ),
        ops=(
            OpNode(
                name="fc0",
                kind="linear",
                inputs=("x",),
                outputs=("fc0_out",),
                attrs={
                    "in_features": 3,
                    "out_features": 2,
                    "weight": [[1, 0, 1], [0, 1, 1]],
                    "bias": [1, -2],
                },
            ),
            OpNode(name="relu0", kind="relu", inputs=("fc0_out",), outputs=("relu0_out",)),
            OpNode(
                name="fc1",
                kind="linear",
                inputs=("relu0_out",),
                outputs=("y",),
                attrs={
                    "in_features": 2,
                    "out_features": 1,
                    "weight": [[2, -1]],
                    "bias": [3],
                },
            ),
        ),
        outputs=("y",),
    )

    export_program_package(
        output_dir,
        program,
        package_id="program_real_data_demo",
        tiled=False,
        tensor_data={"x": [[1, -2, 3]]},
    )

    fc0_output = reconstruct_output_matrix(output_dir / "steps" / "step_000_fc0" / "compute_package")
    fc1_output = reconstruct_output_matrix(output_dir / "steps" / "step_002_fc1" / "compute_package")
    fc1_activations = json.loads(
        (output_dir / "steps" / "step_002_fc1" / "compute_package" / "tiles" / "tile_000" / "activations.json").read_text(
            encoding="utf-8"
        )
    )
    fc1_step_manifest = json.loads((output_dir / "steps" / "step_002_fc1" / "manifest.json").read_text(encoding="utf-8"))

    assert fc0_output.tolist() == [[5, -1]]
    assert fc1_output.tolist() == [[13]]
    assert fc1_activations["valid_rows"] == 1
    assert fc1_activations["valid_cols"] == 2
    assert fc1_activations["rows"][0][:2] == [5, 0]
    assert fc1_step_manifest["runtime"]["input_summary"]["shape"] == [1, 2]
    assert fc1_step_manifest["runtime"]["output_summary"]["shape"] == [1, 1]
    assert fc1_step_manifest["runtime"]["explicit_compute_data"] is True

    validate_package(output_dir)


def test_export_program_package_supports_grouped_conv_real_data(tmp_path: Path) -> None:
    output_dir = tmp_path / "program_grouped_conv_real_data"
    program = Program(
        inputs=(TensorValue(name="x", shape=(1, 4, 2, 2), dtype="int8"),),
        tensors=(
            TensorValue(name="x", shape=(1, 4, 2, 2), dtype="int8"),
            TensorValue(name="y", shape=(1, 4, 2, 2), dtype="int32"),
        ),
        ops=(
            OpNode(
                name="conv0",
                kind="conv2d",
                inputs=("x",),
                outputs=("y",),
                attrs={
                    "in_channels": 4,
                    "out_channels": 4,
                    "kernel_size": (1, 1),
                    "stride": (1, 1),
                    "padding": (0, 0),
                    "dilation": (1, 1),
                    "groups": 2,
                    "weight": [[[[1]], [[10]]], [[[2]], [[20]]], [[[3]], [[30]]], [[[4]], [[40]]]],
                    "bias": [0, 0, 0, 0],
                },
            ),
        ),
        outputs=("y",),
    )

    export_program_package(
        output_dir,
        program,
        package_id="program_grouped_conv_real_data_demo",
        tiled=False,
        tensor_data={
            "x": [
                [
                    [[1, 2], [3, 4]],
                    [[5, 6], [7, 8]],
                    [[9, 10], [11, 12]],
                    [[13, 14], [15, 16]],
                ]
            ]
        },
    )

    conv_output = reconstruct_output_matrix(output_dir / "steps" / "step_000_conv0" / "compute_package")
    conv_step_manifest = json.loads((output_dir / "steps" / "step_000_conv0" / "manifest.json").read_text(encoding="utf-8"))

    assert conv_output.tolist() == [
        [51, 102, 417, 556],
        [62, 124, 450, 600],
        [73, 146, 483, 644],
        [84, 168, 516, 688],
    ]
    assert conv_step_manifest["runtime"]["input_summary"]["shape"] == [1, 4, 2, 2]
    assert conv_step_manifest["runtime"]["output_summary"]["shape"] == [1, 4, 2, 2]
    assert conv_step_manifest["runtime"]["output_summary"]["max"] == 688

    validate_package(output_dir)