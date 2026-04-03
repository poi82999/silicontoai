from __future__ import annotations

import json
import shutil
from pathlib import Path

from l6_toolchain.api import LinearOp, OpNode, Program, TensorValue, build_system_replay_binary, export_and_run_system_replay_smoke, export_linear_tile_package, export_linear_tiled_package, export_program_package, export_replay_packages, run_system_replay_packages


def test_export_replay_packages_from_single_tile_package(tmp_path: Path) -> None:
    source_dir = tmp_path / "single_tile_src"
    replay_dir = tmp_path / "single_tile_replay"
    export_linear_tile_package(source_dir, LinearOp(package_id="single_tile_src"))

    artifacts = export_replay_packages(source_dir, replay_dir)

    assert len(artifacts) == 1
    manifest = json.loads((Path(artifacts[0].replay_package_dir) / "manifest.json").read_text(encoding="utf-8"))
    activations = json.loads((Path(artifacts[0].replay_package_dir) / "activations.json").read_text(encoding="utf-8"))
    weights = json.loads((Path(artifacts[0].replay_package_dir) / "weights.json").read_text(encoding="utf-8"))

    assert manifest["execution"]["seq_len"] == 16
    assert manifest["execution"]["k_tile_count"] == 1
    assert manifest["system"]["execution"]["expected_dma_done_count"] == 2
    assert len(manifest["system"]["execution"]["passes"]) == 1
    assert len(activations["rows"]) == 16
    assert len(weights["rows"]) == 16


def test_export_replay_packages_from_splitk_tiled_package(tmp_path: Path) -> None:
    source_dir = tmp_path / "splitk_src"
    replay_dir = tmp_path / "splitk_replay"
    export_linear_tiled_package(source_dir, LinearOp(package_id="splitk_src", m=16, k=32, n=16))

    artifacts = export_replay_packages(source_dir, replay_dir)

    assert len(artifacts) == 1
    manifest = json.loads((Path(artifacts[0].replay_package_dir) / "manifest.json").read_text(encoding="utf-8"))
    activations = json.loads((Path(artifacts[0].replay_package_dir) / "activations.json").read_text(encoding="utf-8"))
    weights = json.loads((Path(artifacts[0].replay_package_dir) / "weights.json").read_text(encoding="utf-8"))

    assert manifest["execution"]["k_tile_count"] == 2
    assert manifest["execution"]["acc_clear_policy"] == "first_pass_overwrite"
    assert len(manifest["system"]["execution"]["passes"]) == 2
    assert manifest["system"]["execution"]["passes"][1]["acc_clear"] is False
    assert len(activations["rows"]) == 32
    assert len(weights["rows"]) == 32


def test_export_replay_packages_from_program_sequence(tmp_path: Path) -> None:
    source_dir = tmp_path / "program_src"
    replay_dir = tmp_path / "program_replay"
    program = Program(
        inputs=(TensorValue(name="x", shape=(1, 4), dtype="int8"),),
        tensors=(
            TensorValue(name="x", shape=(1, 4), dtype="int8"),
            TensorValue(name="hidden", shape=(1, 4), dtype="int8"),
            TensorValue(name="y", shape=(1, 16), dtype="int32"),
        ),
        ops=(
            OpNode(name="relu0", kind="relu", inputs=("x",), outputs=("hidden",)),
            OpNode(name="fc0", kind="linear", inputs=("hidden",), outputs=("y",), attrs={"in_features": 4, "out_features": 16}),
        ),
        outputs=("y",),
    )
    export_program_package(source_dir, program, package_id="program_src", tiled=False)

    artifacts = export_replay_packages(source_dir, replay_dir)

    assert len(artifacts) == 1
    replay_manifest_path = Path(artifacts[0].replay_package_dir) / "manifest.json"
    manifest = json.loads(replay_manifest_path.read_text(encoding="utf-8"))
    assert "step_001_fc0" in str(replay_manifest_path.parent)
    assert manifest["op_type"] == "gemm_tile"
    assert manifest["system"]["execution"]["expected_npu_done_count"] == 2


def test_export_replay_packages_supports_partial_n_tile_shapes(tmp_path: Path) -> None:
    source_dir = tmp_path / "n_tail_src"
    replay_dir = tmp_path / "n_tail_replay"
    export_linear_tiled_package(source_dir, LinearOp(package_id="n_tail_src", m=16, k=16, n=20))

    artifacts = export_replay_packages(source_dir, replay_dir)

    assert len(artifacts) == 2
    manifests = [json.loads((Path(artifact.replay_package_dir) / "manifest.json").read_text(encoding="utf-8")) for artifact in artifacts]
    assert sorted(manifest["tile"]["tile_cols"] for manifest in manifests) == [4, 16]


def test_export_replay_packages_rejects_out_of_signed_int8_lane_values(tmp_path: Path) -> None:
    import pytest

    source_dir = tmp_path / "signed_int8_range_src"
    replay_dir = tmp_path / "signed_int8_range_replay"
    export_linear_tile_package(source_dir, LinearOp(package_id="signed_int8_range_src"))

    weights_path = source_dir / "weights.json"
    weights_payload = json.loads(weights_path.read_text(encoding="utf-8"))
    weights_payload["rows"][0][0] = 128
    weights_path.write_text(json.dumps(weights_payload), encoding="utf-8")

    with pytest.raises(ValueError, match=r"signed-int8 subset requires activation/weight lanes to stay within \[-128, 127\]"):
        export_replay_packages(source_dir, replay_dir)


def test_export_and_run_system_replay_smoke_runs_generated_workload(tmp_path: Path) -> None:
    import pytest

    binary_path = Path(__file__).resolve().parents[2] / "build_system" / "Vnpu_system_top"
    try:
        build_system_replay_binary(Path(__file__).resolve().parents[2], binary_path=binary_path)
    except RuntimeError as exc:
        pytest.skip(str(exc))

    source_dir = tmp_path / "smoke_src"
    workloads_dir = tmp_path / "workloads" / "system_l6_bridge_smoke"
    export_linear_tile_package(source_dir, LinearOp(package_id="smoke_src"))

    result = export_and_run_system_replay_smoke(source_dir, workloads_dir, binary_path=binary_path)

    chain_summary = (workloads_dir / "replay_chain_summary.txt").read_text(encoding="utf-8")
    replay_report = Path(result.replay_package_dirs[0]) / "replay_report.txt"
    replay_report_text = replay_report.read_text(encoding="utf-8")

    assert replay_report.exists()
    assert "packages_total=1" in chain_summary
    assert "packages_failed=0" in chain_summary
    assert "status=PASS" in replay_report_text


def test_export_and_run_system_replay_smoke_runs_multi_step_program_sequence(tmp_path: Path) -> None:
    import pytest

    binary_path = Path(__file__).resolve().parents[2] / "build_system" / "Vnpu_system_top"
    try:
        build_system_replay_binary(Path(__file__).resolve().parents[2], binary_path=binary_path)
    except RuntimeError as exc:
        pytest.skip(str(exc))

    source_dir = tmp_path / "program_chain_src"
    workloads_dir = tmp_path / "workloads" / "system_l6_bridge_program_chain"
    identity16 = [[1 if row == col else 0 for col in range(16)] for row in range(16)]
    program = Program(
        inputs=(TensorValue(name="x", shape=(16, 16), dtype="int8"),),
        tensors=(
            TensorValue(name="x", shape=(16, 16), dtype="int8"),
            TensorValue(name="h0", shape=(16, 16), dtype="int32"),
            TensorValue(name="h1", shape=(16, 16), dtype="int32"),
            TensorValue(name="y", shape=(16, 16), dtype="int32"),
        ),
        ops=(
            OpNode(
                name="fc0",
                kind="linear",
                inputs=("x",),
                outputs=("h0",),
                attrs={
                    "in_features": 16,
                    "out_features": 16,
                    "weight": identity16,
                    "bias": [0] * 16,
                },
            ),
            OpNode(name="relu0", kind="relu", inputs=("h0",), outputs=("h1",)),
            OpNode(
                name="fc1",
                kind="linear",
                inputs=("h1",),
                outputs=("y",),
                attrs={
                    "in_features": 16,
                    "out_features": 16,
                    "weight": identity16,
                    "bias": [0] * 16,
                },
            ),
        ),
        outputs=("y",),
    )
    export_program_package(
        source_dir,
        program,
        package_id="program_chain_src",
        tiled=False,
        tensor_data={"x": [list(range(16)) for _ in range(16)]},
    )

    result = export_and_run_system_replay_smoke(source_dir, workloads_dir, binary_path=binary_path)

    chain_summary = (workloads_dir / "replay_chain_summary.txt").read_text(encoding="utf-8")
    assert len(result.replay_package_dirs) == 2
    assert "packages_total=2" in chain_summary
    assert "packages_failed=0" in chain_summary

    for replay_dir in result.replay_package_dirs:
        replay_report_text = (Path(replay_dir) / "replay_report.txt").read_text(encoding="utf-8")
        assert "status=PASS" in replay_report_text


def test_run_system_replay_packages_runs_fixed_regression_asset(tmp_path: Path) -> None:
    import pytest

    binary_path = Path(__file__).resolve().parents[2] / "build_system" / "Vnpu_system_top"
    try:
        build_system_replay_binary(Path(__file__).resolve().parents[2], binary_path=binary_path)
    except RuntimeError as exc:
        pytest.skip(str(exc))

    repo_root = Path(__file__).resolve().parents[2]
    committed_workload_dir = repo_root / "workloads" / "system_l6_bridge_program_chain"
    copied_workload_dir = tmp_path / "system_l6_bridge_program_chain"
    shutil.copytree(committed_workload_dir, copied_workload_dir)

    replay_package_dirs = [
        copied_workload_dir / "step_000_fc0" / "program_chain_src_fc0",
        copied_workload_dir / "step_002_fc1" / "program_chain_src_fc1",
    ]
    result = run_system_replay_packages(
        replay_package_dirs,
        tmp_path / "fixed_asset_chain_summary.txt",
        binary_path=binary_path,
    )

    chain_summary = Path(result.chain_summary_path).read_text(encoding="utf-8")
    assert "packages_total=2" in chain_summary
    assert "packages_failed=0" in chain_summary

    for replay_dir in result.replay_package_dirs:
        replay_report_text = (Path(replay_dir) / "replay_report.txt").read_text(encoding="utf-8")
        assert "status=PASS" in replay_report_text


def test_export_and_run_system_replay_smoke_runs_splitk_tail_multi_step_program_sequence(tmp_path: Path) -> None:
    import pytest

    binary_path = Path(__file__).resolve().parents[2] / "build_system" / "Vnpu_system_top"
    try:
        build_system_replay_binary(Path(__file__).resolve().parents[2], binary_path=binary_path)
    except RuntimeError as exc:
        pytest.skip(str(exc))

    source_dir = tmp_path / "program_chain_splitk_tail_src"
    workloads_dir = tmp_path / "workloads" / "system_l6_bridge_program_chain_splitk_tail"
    weight_fc0 = [[1 if col == (row % 16) or col == (row % 16) + 16 else 0 for col in range(32)] for row in range(16)]
    weight_fc1 = [[1 if col == (row % 16) else 0 for col in range(16)] for row in range(20)]
    program = Program(
        inputs=(TensorValue(name="x", shape=(16, 32), dtype="int8"),),
        tensors=(
            TensorValue(name="x", shape=(16, 32), dtype="int8"),
            TensorValue(name="h0", shape=(16, 16), dtype="int32"),
            TensorValue(name="h1", shape=(16, 16), dtype="int32"),
            TensorValue(name="y", shape=(16, 20), dtype="int32"),
        ),
        ops=(
            OpNode(
                name="fc0",
                kind="linear",
                inputs=("x",),
                outputs=("h0",),
                attrs={"in_features": 32, "out_features": 16, "weight": weight_fc0, "bias": [0] * 16},
            ),
            OpNode(name="relu0", kind="relu", inputs=("h0",), outputs=("h1",)),
            OpNode(
                name="fc1",
                kind="linear",
                inputs=("h1",),
                outputs=("y",),
                attrs={"in_features": 16, "out_features": 20, "weight": weight_fc1, "bias": [0] * 20},
            ),
        ),
        outputs=("y",),
    )
    export_program_package(
        source_dir,
        program,
        package_id="program_chain_splitk_tail_src",
        tiled=False,
        tensor_data={"x": [[column % 8 for column in range(32)] for _ in range(16)]},
    )

    result = export_and_run_system_replay_smoke(source_dir, workloads_dir, binary_path=binary_path)

    chain_summary = (workloads_dir / "replay_chain_summary.txt").read_text(encoding="utf-8")
    assert len(result.replay_package_dirs) == 3
    assert "packages_total=3" in chain_summary
    assert "packages_failed=0" in chain_summary
    assert "cp_split_k_seen=HIT" in chain_summary
    assert "cp_n_tile_seen=HIT" in chain_summary

    for replay_dir in result.replay_package_dirs:
        replay_report_text = (Path(replay_dir) / "replay_report.txt").read_text(encoding="utf-8")
        assert "status=PASS" in replay_report_text


def test_run_system_replay_packages_runs_fixed_splitk_tail_regression_asset(tmp_path: Path) -> None:
    import pytest

    binary_path = Path(__file__).resolve().parents[2] / "build_system" / "Vnpu_system_top"
    try:
        build_system_replay_binary(Path(__file__).resolve().parents[2], binary_path=binary_path)
    except RuntimeError as exc:
        pytest.skip(str(exc))

    repo_root = Path(__file__).resolve().parents[2]
    committed_workload_dir = repo_root / "workloads" / "system_l6_bridge_program_chain_splitk_tail"
    copied_workload_dir = tmp_path / "system_l6_bridge_program_chain_splitk_tail"
    shutil.copytree(committed_workload_dir, copied_workload_dir)

    replay_package_dirs = [
        copied_workload_dir / "step_000_fc0" / "program_chain_splitk_tail_src_fc0_m0_n0",
        copied_workload_dir / "step_002_fc1" / "program_chain_splitk_tail_src_fc1_m0_n0",
        copied_workload_dir / "step_002_fc1" / "program_chain_splitk_tail_src_fc1_m0_n16",
    ]
    result = run_system_replay_packages(
        replay_package_dirs,
        tmp_path / "fixed_asset_splitk_tail_chain_summary.txt",
        binary_path=binary_path,
    )

    chain_summary = Path(result.chain_summary_path).read_text(encoding="utf-8")
    assert "packages_total=3" in chain_summary
    assert "packages_failed=0" in chain_summary
    assert "cp_split_k_seen=HIT" in chain_summary
    assert "cp_n_tile_seen=HIT" in chain_summary

    for replay_dir in result.replay_package_dirs:
        replay_report_text = (Path(replay_dir) / "replay_report.txt").read_text(encoding="utf-8")
        assert "status=PASS" in replay_report_text


def test_export_and_run_system_replay_smoke_runs_generated_signed_int8_alignment_case(tmp_path: Path) -> None:
    import pytest

    binary_path = Path(__file__).resolve().parents[2] / "build_system" / "Vnpu_system_top"
    try:
        build_system_replay_binary(Path(__file__).resolve().parents[2], binary_path=binary_path)
    except RuntimeError as exc:
        pytest.skip(str(exc))

    source_dir = tmp_path / "signed_int8_alignment_src"
    workloads_dir = tmp_path / "workloads" / "system_l6_bridge_signed_int8_alignment_probe"
    program = Program(
        inputs=(TensorValue(name="x", shape=(16, 16), dtype="int8"),),
        tensors=(
            TensorValue(name="x", shape=(16, 16), dtype="int8"),
            TensorValue(name="y", shape=(16, 16), dtype="int32"),
        ),
        ops=(
            OpNode(
                name="fc0",
                kind="linear",
                inputs=("x",),
                outputs=("y",),
                attrs={
                    "in_features": 16,
                    "out_features": 16,
                    "weight": [[-1 if row == col else 0 for col in range(16)] for row in range(16)],
                    "bias": [0] * 16,
                },
            ),
        ),
        outputs=("y",),
    )
    export_program_package(
        source_dir,
        program,
        package_id="signed_int8_alignment_src",
        tiled=False,
        tensor_data={"x": [list(range(-8, 8)) for _ in range(16)]},
    )

    result = export_and_run_system_replay_smoke(source_dir, workloads_dir, binary_path=binary_path)

    chain_summary = (workloads_dir / "replay_chain_summary.txt").read_text(encoding="utf-8")
    replay_report = Path(result.replay_package_dirs[0]) / "replay_report.txt"
    replay_report_text = replay_report.read_text(encoding="utf-8")

    assert replay_report.exists()
    assert "packages_total=1" in chain_summary
    assert "packages_failed=0" in chain_summary
    assert "status=PASS" in replay_report_text