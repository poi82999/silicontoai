from __future__ import annotations

import json
from pathlib import Path

from conftest import FakeTensor, FakeTorchConv2dWithParams
from l6_toolchain.api import (
    LinearOp,
    OpNode,
    Program,
    TensorValue,
    conv_from_torch_module,
    export_linear_tile_package,
    export_linear_tiled_package,
    export_program_package,
    reconstruct_output_matrix,
    validate_package,
    validate_package_report,
)


def test_reconstruct_output_matrix_reads_single_tile_package(tmp_path: Path) -> None:
    output_dir = tmp_path / "single_tile_reconstruct"
    export_linear_tile_package(output_dir, LinearOp(package_id="single_tile_reconstruct"))

    output = reconstruct_output_matrix(output_dir)

    assert output.shape == (16, 16)
    assert output[0].tolist() == [360] * 16
    assert output[15].tolist() == [360] * 16


def test_validate_package_accepts_single_tile_package(tmp_path: Path) -> None:
    output_dir = tmp_path / "single_tile_validate"
    export_linear_tile_package(output_dir, LinearOp(package_id="single_tile_validate"))

    report = validate_package(output_dir)

    assert report.is_valid is True
    assert report.op_type == "gemm_tile"
    assert report.shape == {"m": 16, "k": 16, "n": 16}
    assert report.issues == ()


def test_reconstruct_output_matrix_stitches_tiled_splitk_package(tmp_path: Path) -> None:
    output_dir = tmp_path / "tiled_reconstruct"
    spec = LinearOp(package_id="tiled_reconstruct", m=20, k=20, n=20, activation_mode="column_ramp", weight_mode="column_ramp")
    export_linear_tiled_package(output_dir, spec)

    output = reconstruct_output_matrix(output_dir)

    assert output.shape == (20, 20)
    assert output[0].tolist() == [0] * 20
    assert output[1].tolist() == [20 * column for column in range(20)]
    assert output[19].tolist() == [20 * 19 * column for column in range(20)]


def test_validate_package_accepts_tiled_package(tmp_path: Path) -> None:
    output_dir = tmp_path / "tiled_validate"
    export_linear_tiled_package(output_dir, LinearOp(package_id="tiled_validate", m=20, k=20, n=20))

    report = validate_package_report(output_dir)

    assert report.is_valid is True
    assert report.op_type == "gemm_tiled"
    assert report.shape == {"m": 20, "k": 20, "n": 20}
    assert report.tile_count == 8
    assert report.to_dict()["is_valid"] is True


def test_validate_package_rejects_wrong_tile_count(tmp_path: Path) -> None:
    import pytest

    output_dir = tmp_path / "invalid_tile_count"
    export_linear_tiled_package(output_dir, LinearOp(package_id="invalid_tile_count", m=20, k=16, n=16))

    manifest_path = output_dir / "manifest.json"
    manifest = json.loads(manifest_path.read_text(encoding="utf-8"))
    manifest["tile_count"] = 999
    manifest_path.write_text(json.dumps(manifest, indent=2) + "\n", encoding="utf-8")

    with pytest.raises(ValueError, match="tile_count"):
        validate_package(output_dir)

    report = validate_package_report(output_dir)

    assert report.is_valid is False
    assert report.tile_count == 999
    assert report.issues[0].code == "package_structure"
    assert "tile_count" in report.issues[0].message


def test_validate_package_rejects_missing_tiled_golden_when_emit_drain_after(tmp_path: Path) -> None:
    import pytest

    output_dir = tmp_path / "invalid_missing_golden"
    export_linear_tiled_package(output_dir, LinearOp(package_id="invalid_missing_golden", m=20, k=16, n=16))

    tile_manifest_path = output_dir / "tiles" / "tile_001" / "manifest.json"
    tile_manifest = json.loads(tile_manifest_path.read_text(encoding="utf-8"))
    del tile_manifest["files"]["golden"]
    tile_manifest_path.write_text(json.dumps(tile_manifest, indent=2) + "\n", encoding="utf-8")

    with pytest.raises(ValueError, match="golden presence"):
        validate_package(output_dir)

    report = validate_package_report(output_dir)

    assert report.is_valid is False
    assert report.issues[0].code == "package_structure"
    assert "golden presence" in report.issues[0].message


def test_reconstruct_output_matrix_reads_conv_frontend_tiled_package(tmp_path: Path) -> None:
    output_dir = tmp_path / "conv_frontend_reconstruct"
    fake_conv = FakeTorchConv2dWithParams(
        in_channels=1,
        out_channels=2,
        kernel_size=(2, 2),
        weight=[[[[1, 2], [3, 4]]], [[[5, 6], [7, 8]]]],
        bias=[1, 2],
    )
    input_tensor = FakeTensor([[[[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12], [13, 14, 15, 16]]]])

    op, data = conv_from_torch_module(fake_conv, input_tensor, package_id="conv_frontend_reconstruct")
    export_linear_tiled_package(output_dir, op, data)

    output = reconstruct_output_matrix(output_dir)

    assert output.shape == (9, 2)
    assert output[0].tolist() == [45, 102]
    assert output[-1].tolist() == [145, 362]


def test_validate_package_accepts_conv_frontend_tiled_package(tmp_path: Path) -> None:
    output_dir = tmp_path / "conv_frontend_validate"
    fake_conv = FakeTorchConv2dWithParams(
        in_channels=1,
        out_channels=2,
        kernel_size=(2, 2),
        weight=[[[[1, 2], [3, 4]]], [[[5, 6], [7, 8]]]],
        bias=[1, 2],
    )
    input_tensor = FakeTensor([[[[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12], [13, 14, 15, 16]]]])

    op, data = conv_from_torch_module(fake_conv, input_tensor, package_id="conv_frontend_validate")
    export_linear_tiled_package(output_dir, op, data)

    report = validate_package_report(output_dir)

    assert report.is_valid is True
    assert report.op_type == "gemm_tiled"
    assert report.shape == {"m": 9, "k": 4, "n": 2}


def test_validate_package_accepts_program_sequence_package(tmp_path: Path) -> None:
    output_dir = tmp_path / "program_sequence_validate"
    program = Program(
        inputs=(TensorValue(name="x", shape=(1, 4), dtype="int8"),),
        tensors=(
            TensorValue(name="x", shape=(1, 4), dtype="int8"),
            TensorValue(name="hidden", shape=(1, 4), dtype="int8"),
            TensorValue(name="y", shape=(1, 2), dtype="int32"),
        ),
        ops=(
            OpNode(name="relu0", kind="relu", inputs=("x",), outputs=("hidden",)),
            OpNode(name="fc0", kind="linear", inputs=("hidden",), outputs=("y",), attrs={"in_features": 4, "out_features": 2}),
        ),
        outputs=("y",),
    )

    export_program_package(output_dir, program, package_id="program_sequence_validate", tiled=False)

    report = validate_package_report(output_dir)

    assert report.is_valid is True
    assert report.op_type == "program_sequence"
    assert report.shape is None
    assert report.tile_count is None
    assert report.issues == ()


def test_validate_package_rejects_program_sequence_with_wrong_compute_dir(tmp_path: Path) -> None:
    import pytest

    output_dir = tmp_path / "program_sequence_invalid_compute_dir"
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

    export_program_package(output_dir, program, package_id="program_sequence_invalid_compute_dir", tiled=False)

    steps_path = output_dir / "steps.json"
    steps_index = json.loads(steps_path.read_text(encoding="utf-8"))
    steps_index["steps"][0]["compute_package_dir"] = "steps/step_000_fc0/not_compute_package"
    steps_path.write_text(json.dumps(steps_index, indent=2) + "\n", encoding="utf-8")

    with pytest.raises(ValueError, match="compute_package_dir"):
        validate_package(output_dir)

    report = validate_package_report(output_dir)

    assert report.is_valid is False
    assert report.op_type == "program_sequence"
    assert report.issues[0].code == "package_structure"
    assert "compute_package_dir" in report.issues[0].message