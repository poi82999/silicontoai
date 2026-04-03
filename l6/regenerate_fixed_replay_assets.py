from __future__ import annotations

import filecmp
import shutil
import sys
import tempfile
from dataclasses import dataclass
from pathlib import Path


REPO_ROOT = Path(__file__).resolve().parents[1]
L6_SRC = REPO_ROOT / "l6" / "src"
if str(L6_SRC) not in sys.path:
    sys.path.insert(0, str(L6_SRC))

from l6_toolchain.api import OpNode, Program, TensorValue, export_program_package, export_replay_packages


@dataclass(frozen=True)
class FixedReplayAssetSpec:
    workload_dir_name: str
    package_id: str
    program: Program
    tensor_data: dict[str, object]
    summary_line: str


def _identity16() -> list[list[int]]:
    return [[1 if row == col else 0 for col in range(16)] for row in range(16)]


def _build_identity_chain_spec() -> FixedReplayAssetSpec:
    identity16 = _identity16()
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
                attrs={"in_features": 16, "out_features": 16, "weight": identity16, "bias": [0] * 16},
            ),
            OpNode(name="relu0", kind="relu", inputs=("h0",), outputs=("h1",)),
            OpNode(
                name="fc1",
                kind="linear",
                inputs=("h1",),
                outputs=("y",),
                attrs={"in_features": 16, "out_features": 16, "weight": identity16, "bias": [0] * 16},
            ),
        ),
        outputs=("y",),
    )
    return FixedReplayAssetSpec(
        workload_dir_name="system_l6_bridge_program_chain",
        package_id="program_chain_src",
        program=program,
        tensor_data={"x": [list(range(16)) for _ in range(16)]},
        summary_line="Source shape flow: `(16x16) -> fc0(16x16) -> relu -> fc1(16x16)`",
    )


def _build_splitk_tail_chain_spec() -> FixedReplayAssetSpec:
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
    return FixedReplayAssetSpec(
        workload_dir_name="system_l6_bridge_program_chain_splitk_tail",
        package_id="program_chain_splitk_tail_src",
        program=program,
        tensor_data={"x": [[column % 8 for column in range(32)] for _ in range(16)]},
        summary_line="Source shape flow: `(16x32) -> fc0(16x16, split-K=2) -> relu -> fc1(16x20, tail-n=4)`",
    )


def _build_signed_edge_case_spec() -> FixedReplayAssetSpec:
    identity16 = _identity16()
    # Use activation values that exercise signed-int8 edges: -128, -1, 0, 1, 127
    signed_activations = [
        [-128, -1, 0, 1, 127, -64, 64, -32, 32, -16, 16, -8, 8, -4, 4, -2],
        [127, -128, 1, -1, 0, 63, -63, 31, -31, 15, -15, 7, -7, 3, -3, 2],
    ] + [
        [((row * 16 + col + 50) % 256) - 128 for col in range(16)]
        for row in range(2, 16)
    ]
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
                attrs={"in_features": 16, "out_features": 16, "weight": identity16, "bias": [0] * 16},
            ),
            OpNode(name="relu0", kind="relu", inputs=("h0",), outputs=("h1",)),
            OpNode(
                name="fc1",
                kind="linear",
                inputs=("h1",),
                outputs=("y",),
                attrs={"in_features": 16, "out_features": 16, "weight": identity16, "bias": [0] * 16},
            ),
        ),
        outputs=("y",),
    )
    return FixedReplayAssetSpec(
        workload_dir_name="system_l6_bridge_program_chain_signed_edge",
        package_id="program_chain_signed_edge_src",
        program=program,
        tensor_data={"x": signed_activations},
        summary_line="Source shape flow: `(16x16) -> fc0(identity) -> relu -> fc1(identity)` with signed-int8 edge values",
    )


def _write_asset_readme(asset_dir: Path, spec: FixedReplayAssetSpec, replay_package_dirs: list[Path]) -> None:
    package_order = "\n".join(f"  - `{path.as_posix()}`" for path in replay_package_dirs)
    readme = (
        f"# {spec.workload_dir_name}\n\n"
        "Committed L6 replay-bridge regression asset for chained system replay.\n\n"
        f"- {spec.summary_line}\n"
        f"- Replay package count: {len(replay_package_dirs)}\n"
        "- Package order:\n"
        f"{package_order}\n"
        "- Purpose: exercise a fixed repo-hosted multi-step `program_sequence` bridge output without regenerating inputs during smoke tests.\n\n"
        "The checked-in payloads were generated from the L6 `export_program_package()` + `export_replay_packages()` path by `l6/regenerate_fixed_replay_assets.py`.\n"
    )
    (asset_dir / "README.md").write_text(readme, encoding="utf-8")


def regenerate_fixed_replay_assets() -> None:
    generated_root = REPO_ROOT / "l6" / "generated" / "_fixed_replay_asset_sources"
    workloads_root = REPO_ROOT / "workloads"
    specs = [_build_identity_chain_spec(), _build_splitk_tail_chain_spec(), _build_signed_edge_case_spec()]

    if generated_root.exists():
        shutil.rmtree(generated_root)
    generated_root.mkdir(parents=True, exist_ok=True)

    for spec in specs:
        source_dir = generated_root / spec.package_id
        workload_dir = workloads_root / spec.workload_dir_name
        if workload_dir.exists():
            shutil.rmtree(workload_dir)

        export_program_package(source_dir, spec.program, package_id=spec.package_id, tiled=False, tensor_data=spec.tensor_data)
        artifacts = export_replay_packages(source_dir, workload_dir)
        replay_package_dirs = [Path(artifact.replay_package_dir).relative_to(workload_dir) for artifact in artifacts]
        _write_asset_readme(workload_dir, spec, replay_package_dirs)
        print(f"generated {spec.workload_dir_name}: {len(replay_package_dirs)} replay packages")


def _dirs_are_equal(dir1: Path, dir2: Path) -> bool:
    comparison = filecmp.dircmp(str(dir1), str(dir2))
    if comparison.diff_files or comparison.left_only or comparison.right_only:
        return False
    for subdir in comparison.common_dirs:
        if not _dirs_are_equal(dir1 / subdir, dir2 / subdir):
            return False
    return True


def check_fixed_replay_assets() -> bool:
    workloads_root = REPO_ROOT / "workloads"
    specs = [_build_identity_chain_spec(), _build_splitk_tail_chain_spec(), _build_signed_edge_case_spec()]
    all_match = True

    with tempfile.TemporaryDirectory(prefix="l6_check_") as tmp_dir:
        tmp_path = Path(tmp_dir)
        generated_root = tmp_path / "_fixed_replay_asset_sources"
        generated_root.mkdir(parents=True, exist_ok=True)

        for spec in specs:
            source_dir = generated_root / spec.package_id
            fresh_workload_dir = tmp_path / "workloads" / spec.workload_dir_name
            committed_workload_dir = workloads_root / spec.workload_dir_name

            export_program_package(source_dir, spec.program, package_id=spec.package_id, tiled=False, tensor_data=spec.tensor_data)
            artifacts = export_replay_packages(source_dir, fresh_workload_dir)
            replay_package_dirs = [Path(artifact.replay_package_dir).relative_to(fresh_workload_dir) for artifact in artifacts]
            _write_asset_readme(fresh_workload_dir, spec, replay_package_dirs)

            if not committed_workload_dir.exists():
                print(f"DRIFT: {spec.workload_dir_name} — committed workload directory is missing")
                all_match = False
                continue

            if _dirs_are_equal(fresh_workload_dir, committed_workload_dir):
                print(f"OK: {spec.workload_dir_name}")
            else:
                print(f"DRIFT: {spec.workload_dir_name} — committed files differ from freshly generated")
                all_match = False

    return all_match


def main() -> int:
    if "--check" in sys.argv:
        ok = check_fixed_replay_assets()
        return 0 if ok else 1
    regenerate_fixed_replay_assets()
    return 0


if __name__ == "__main__":
    raise SystemExit(main())