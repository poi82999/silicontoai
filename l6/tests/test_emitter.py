from __future__ import annotations

import json
from pathlib import Path

from l6_toolchain.api import LinearOp, export_linear_tile_package, export_linear_tiled_package, plan_linear_tiles


def test_linear_export_generates_expected_golden(tmp_path: Path) -> None:
    output_dir = tmp_path / "linear_demo"
    export_linear_tile_package(output_dir, LinearOp())

    manifest = json.loads((output_dir / "manifest.json").read_text(encoding="utf-8"))
    golden = json.loads((output_dir / "golden.json").read_text(encoding="utf-8"))

    assert manifest["shape"] == {"m": 16, "k": 16, "n": 16}
    assert manifest["l6_study"]["logical_op"] == "linear"
    assert len(golden["outputs"]) == 16
    assert golden["outputs"][0]["vector"] == [360] * 16


def test_column_ramp_mode_generates_expected_golden(tmp_path: Path) -> None:
    output_dir = tmp_path / "column_ramp_demo"
    spec = LinearOp(package_id="column_ramp_demo", activation_mode="column_ramp")
    export_linear_tile_package(output_dir, spec)

    activations = json.loads((output_dir / "activations.json").read_text(encoding="utf-8"))
    golden = json.loads((output_dir / "golden.json").read_text(encoding="utf-8"))

    assert activations["rows"][0] == [0] * 16
    assert activations["rows"][1] == [1] * 16
    assert activations["rows"][15] == [15] * 16
    assert golden["outputs"][0]["vector"] == [0] * 16
    assert golden["outputs"][1]["vector"] == [48] * 16
    assert golden["outputs"][15]["vector"] == [720] * 16


def test_identity_modes_round_trip(tmp_path: Path) -> None:
    output_dir = tmp_path / "identity_demo"
    spec = LinearOp(package_id="identity_demo", activation_mode="identity", weight_mode="identity")
    export_linear_tile_package(output_dir, spec)

    golden = json.loads((output_dir / "golden.json").read_text(encoding="utf-8"))
    assert golden["outputs"][0]["vector"] == [1] + [0] * 15
    assert golden["outputs"][1]["vector"] == [0, 1] + [0] * 14


def test_weight_column_ramp_mode_generates_expected_golden(tmp_path: Path) -> None:
    output_dir = tmp_path / "column_ramp_demo"
    spec = LinearOp(package_id="column_ramp_demo", activation_mode="row_ramp", weight_mode="column_ramp")
    export_linear_tile_package(output_dir, spec)

    activations = json.loads((output_dir / "activations.json").read_text(encoding="utf-8"))
    weights = json.loads((output_dir / "weights.json").read_text(encoding="utf-8"))
    golden = json.loads((output_dir / "golden.json").read_text(encoding="utf-8"))

    assert activations["rows"][0] == list(range(16))
    assert activations["rows"][1] == list(range(16))
    assert activations["rows"][15] == list(range(16))
    assert weights["rows"][0] == list(range(16))
    assert weights["rows"][1] == list(range(16))
    assert weights["rows"][15] == list(range(16))
    assert golden["outputs"][0]["vector"] == [120 * c for c in range(16)]
    assert golden["outputs"][1]["vector"] == [120 * c for c in range(16)]
    assert golden["outputs"][15]["vector"] == [120 * c for c in range(16)]


def test_plan_linear_tiles_single_tile() -> None:
    plan = plan_linear_tiles(LinearOp(m=16, k=16, n=16))

    assert len(plan) == 1
    assert plan[0].m_tile_base == 0
    assert plan[0].n_tile_base == 0
    assert plan[0].k_tile_base == 0
    assert plan[0].tile_m == 16
    assert plan[0].tile_k == 16
    assert plan[0].tile_n == 16
    assert plan[0].k_pass_index == 0
    assert plan[0].k_tile_count == 1
    assert plan[0].acc_clear is True
    assert plan[0].emit_drain_after is True


def test_plan_linear_tiles_m_tail() -> None:
    plan = plan_linear_tiles(LinearOp(m=20, k=16, n=16))

    assert len(plan) == 2
    assert plan[0].m_tile_base == 0
    assert plan[0].tile_m == 16
    assert plan[0].acc_clear is True
    assert plan[0].emit_drain_after is True
    assert plan[1].m_tile_base == 16
    assert plan[1].n_tile_base == 0
    assert plan[1].k_tile_base == 0
    assert plan[1].tile_m == 4
    assert plan[1].tile_k == 16
    assert plan[1].tile_n == 16
    assert plan[1].acc_clear is True
    assert plan[1].emit_drain_after is True


def test_plan_linear_tiles_k_tail_splitk() -> None:
    plan = plan_linear_tiles(LinearOp(m=16, k=20, n=16))

    assert len(plan) == 2
    assert plan[0].k_tile_base == 0
    assert plan[0].tile_k == 16
    assert plan[0].k_pass_index == 0
    assert plan[0].k_tile_count == 2
    assert plan[0].acc_clear is True
    assert plan[0].emit_drain_after is False
    assert plan[1].k_tile_base == 16
    assert plan[1].tile_k == 4
    assert plan[1].k_pass_index == 1
    assert plan[1].k_tile_count == 2
    assert plan[1].acc_clear is False
    assert plan[1].emit_drain_after is True


def test_plan_linear_tiles_32_cube_schedule_order() -> None:
    plan = plan_linear_tiles(LinearOp(m=32, k=32, n=32))

    expected = [
        (0, 0, 0, True, False),
        (0, 0, 16, False, True),
        (0, 16, 0, True, False),
        (0, 16, 16, False, True),
        (16, 0, 0, True, False),
        (16, 0, 16, False, True),
        (16, 16, 0, True, False),
        (16, 16, 16, False, True),
    ]

    actual = [
        (tile.m_tile_base, tile.n_tile_base, tile.k_tile_base, tile.acc_clear, tile.emit_drain_after)
        for tile in plan
    ]
    assert len(plan) == 8
    assert actual == expected


def test_export_linear_tiled_package_m_tail(tmp_path: Path) -> None:
    output_dir = tmp_path / "m_tail_tiled_demo"
    spec = LinearOp(package_id="m_tail_tiled_demo", m=20, k=16, n=16)
    export_linear_tiled_package(output_dir, spec)

    manifest = json.loads((output_dir / "manifest.json").read_text(encoding="utf-8"))
    tiles_index = json.loads((output_dir / "tiles.json").read_text(encoding="utf-8"))
    tail_activations = json.loads((output_dir / "tiles" / "tile_001" / "activations.json").read_text(encoding="utf-8"))
    tail_golden = json.loads((output_dir / "tiles" / "tile_001" / "golden.json").read_text(encoding="utf-8"))

    assert manifest["tile_count"] == 2
    assert len(tiles_index["tiles"]) == 2
    assert tiles_index["tiles"][1]["m_tile_base"] == 16
    assert tiles_index["tiles"][1]["tile_m"] == 4
    assert tail_activations["valid_rows"] == 4
    assert tail_activations["rows"][0] == list(range(16))
    assert tail_activations["rows"][3] == list(range(16))
    assert tail_activations["rows"][4] == [0] * 16
    assert tail_golden["valid_rows"] == 4
    assert len(tail_golden["outputs"]) == 4
    assert tail_golden["outputs"][0]["global_row"] == 16
    assert tail_golden["outputs"][0]["vector"] == [360] * 16


def test_export_linear_tiled_package_k_tail_splitk(tmp_path: Path) -> None:
    output_dir = tmp_path / "k_tail_tiled_demo"
    spec = LinearOp(package_id="k_tail_tiled_demo", m=16, k=20, n=16)
    export_linear_tiled_package(output_dir, spec)

    tiles_index = json.loads((output_dir / "tiles.json").read_text(encoding="utf-8"))
    first_manifest = json.loads((output_dir / "tiles" / "tile_000" / "manifest.json").read_text(encoding="utf-8"))
    second_manifest = json.loads((output_dir / "tiles" / "tile_001" / "manifest.json").read_text(encoding="utf-8"))
    second_weights = json.loads((output_dir / "tiles" / "tile_001" / "weights.json").read_text(encoding="utf-8"))
    second_golden = json.loads((output_dir / "tiles" / "tile_001" / "golden.json").read_text(encoding="utf-8"))

    assert len(tiles_index["tiles"]) == 2
    assert first_manifest["execution"]["acc_clear"] is True
    assert first_manifest["execution"]["emit_drain_after"] is False
    assert "golden" not in first_manifest["files"]
    assert second_manifest["execution"]["acc_clear"] is False
    assert second_manifest["execution"]["emit_drain_after"] is True
    assert second_weights["valid_rows"] == 4
    assert second_weights["rows"][0] == [3] * 16
    assert second_weights["rows"][3] == [3] * 16
    assert second_weights["rows"][4] == [0] * 16
    assert second_golden["valid_rows"] == 16
    assert second_golden["outputs"][0]["vector"] == [570] * 16