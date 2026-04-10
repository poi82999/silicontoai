from __future__ import annotations

from pathlib import Path
import json

import numpy as np

from .common import read_json, read_json_required


def reconstruct_output_matrix(package_dir: str | Path) -> np.ndarray:
    package_path = Path(package_dir)
    manifest = read_json(package_path / "manifest.json")
    shape = manifest.get("shape")
    if not isinstance(shape, dict):
        raise ValueError("Package manifest must contain a shape object.")

    m = shape.get("m")
    n = shape.get("n")
    if not isinstance(m, int) or not isinstance(n, int):
        raise ValueError("Package manifest shape must contain integer m and n dimensions.")

    output = np.zeros((m, n), dtype=np.int32)
    op_type = manifest.get("op_type")

    if op_type == "gemm_tile":
        _apply_golden_payload(output, read_json(package_path / "golden.json"))
        return output

    if op_type == "gemm_tiled":
        tiles_index = read_json(package_path / "tiles.json")
        tiles = tiles_index.get("tiles")
        if not isinstance(tiles, list):
            raise ValueError("Tiled package tiles.json must contain a tiles list.")

        for tile in tiles:
            if not isinstance(tile, dict):
                raise ValueError("Each tile index entry must be an object.")
            tile_dir = tile.get("dir")
            if not isinstance(tile_dir, str):
                raise ValueError("Each tile index entry must contain a dir path.")

            manifest_path = package_path / tile_dir / "manifest.json"
            tile_manifest = read_json(manifest_path)
            files = tile_manifest.get("files")
            if not isinstance(files, dict) or "golden" not in files:
                continue

            golden_name = files["golden"]
            if not isinstance(golden_name, str):
                raise ValueError("Tile golden file entry must be a string path.")
            _apply_golden_payload(output, read_json(package_path / tile_dir / golden_name))
        return output

    raise ValueError(f"Unsupported package op_type: {op_type}")


def inspect_package_summary(package_dir: str | Path) -> dict[str, object]:
    package_path = Path(package_dir)
    manifest = read_json_required(package_path / "manifest.json")
    summary: dict[str, object] = {
        "package_dir": str(package_path),
        "package_id": manifest.get("package_id"),
        "op_type": manifest.get("op_type"),
        "shape": manifest.get("shape"),
    }

    compiler_meta = manifest.get("compiler")
    if isinstance(compiler_meta, dict):
        summary["compiler"] = compiler_meta

    op_type = manifest.get("op_type")
    if op_type == "program_sequence":
        steps_index = read_json_required(package_path / "steps.json")
        steps = steps_index.get("steps")
        if not isinstance(steps, list):
            raise ValueError("Program sequence steps.json must contain a steps list.")

        inspected_steps: list[dict[str, object]] = []
        for step in steps:
            if not isinstance(step, dict):
                raise ValueError("Program sequence step entries must be objects.")
            step_dir = step.get("dir")
            if not isinstance(step_dir, str):
                raise ValueError("Program sequence step entry must include a dir.")
            step_manifest = read_json_required(package_path / step_dir / "manifest.json")
            inspected_step: dict[str, object] = {
                "step_id": step_manifest.get("step_id"),
                "name": step_manifest.get("name"),
                "lowered_kind": step_manifest.get("lowered_kind"),
            }
            if isinstance(step_manifest.get("compiler"), dict):
                inspected_step["compiler"] = step_manifest["compiler"]
            inspected_steps.append(inspected_step)
        summary["steps"] = inspected_steps

    return summary


def inspect_compile_output_summary(output_dir: str | Path) -> dict[str, object]:
    output_path = Path(output_dir)
    manifest = read_json_required(output_path / "compile_manifest.json")
    summary: dict[str, object] = {
        "output_dir": str(output_path),
        "package_id": manifest.get("package_id"),
        "entry": manifest.get("entry"),
        "schedule_strategy": manifest.get("schedule_strategy"),
        "replay_enabled": manifest.get("replay_enabled"),
        "total_compute_steps": manifest.get("total_compute_steps"),
        "total_replay_packages": manifest.get("total_replay_packages"),
        "total_estimated_cycles": manifest.get("total_estimated_cycles"),
    }
    roofline_config = manifest.get("roofline_config")
    if isinstance(roofline_config, dict):
        summary["roofline_config"] = roofline_config

    steps = manifest.get("steps")
    if isinstance(steps, list):
        summary["steps"] = [
            {
                "step_id": step.get("step_id"),
                "name": step.get("name"),
                "lowered_kind": step.get("lowered_kind"),
                "estimated_cycles": step.get("estimated_cycles"),
                "roofline": step.get("roofline"),
            }
            for step in steps
            if isinstance(step, dict)
        ]
    return summary


def format_performance_summary(path: str | Path) -> str:
    target = Path(path)
    if (target / "compile_manifest.json").exists():
        summary = inspect_compile_output_summary(target)
        lines = [
            f"Package: {summary.get('package_id')}",
            f"Entry: {summary.get('entry')}",
            f"Schedule: {summary.get('schedule_strategy')}",
            f"Compute steps: {summary.get('total_compute_steps')}",
            f"Replay packages: {summary.get('total_replay_packages')}",
            f"Estimated cycles: {summary.get('total_estimated_cycles')}",
        ]
        roofline_config = summary.get("roofline_config")
        if isinstance(roofline_config, dict):
            lines.append(
                "Roofline config: "
                f"profile={roofline_config.get('profile')} "
                f"bw={roofline_config.get('dma_bandwidth_gbps')} Gbit/s "
                f"mac/cycle={roofline_config.get('mac_throughput')} "
                f"clock={roofline_config.get('clock_mhz')} MHz"
            )
        steps = summary.get("steps")
        if isinstance(steps, list) and steps:
            lines.append("Steps:")
            for step in steps:
                if not isinstance(step, dict):
                    continue
                line = (
                    f"- step_{step.get('step_id'):03d} {step.get('name')} "
                    f"({step.get('lowered_kind')}), cycles={step.get('estimated_cycles')}"
                )
                roofline = step.get("roofline")
                if isinstance(roofline, dict):
                    line += (
                        f", bottleneck={roofline.get('bottleneck')}"
                        f", achieved={_format_float(roofline.get('achieved_gops'))} GOPS"
                        f", util={_format_float(roofline.get('utilization_percent'))}%"
                    )
                lines.append(line)
        return "\n".join(lines)

    if (target / "manifest.json").exists():
        summary = inspect_package_summary(target)
        lines = [
            f"Package: {summary.get('package_id')}",
            f"Type: {summary.get('op_type')}",
            f"Shape: {summary.get('shape')}",
        ]
        compiler_meta = summary.get("compiler")
        if isinstance(compiler_meta, dict) and isinstance(compiler_meta.get("roofline"), dict):
            roofline = compiler_meta["roofline"]
            lines.append(
                "Roofline: "
                f"profile={roofline.get('profile')} "
                f"bottleneck={roofline.get('bottleneck')} "
                f"achieved={_format_float(roofline.get('achieved_gops'))} GOPS"
            )
        steps = summary.get("steps")
        if isinstance(steps, list) and steps:
            lines.append("Steps:")
            for step in steps:
                if not isinstance(step, dict):
                    continue
                line = f"- step_{step.get('step_id'):03d} {step.get('name')} ({step.get('lowered_kind')})"
                compiler = step.get("compiler")
                if isinstance(compiler, dict) and isinstance(compiler.get("roofline"), dict):
                    roofline = compiler["roofline"]
                    line += (
                        f", bottleneck={roofline.get('bottleneck')}"
                        f", achieved={_format_float(roofline.get('achieved_gops'))} GOPS"
                        f", util={_format_float(roofline.get('utilization_percent'))}%"
                    )
                lines.append(line)
        return "\n".join(lines)

    raise ValueError(f"No compile_manifest.json or manifest.json found under {target}")


def _format_float(value: object) -> str:
    if isinstance(value, (int, float)):
        return f"{float(value):.3f}".rstrip("0").rstrip(".")
    return "n/a"


def _apply_golden_payload(output: np.ndarray, payload: dict[str, object]) -> None:
    outputs = payload.get("outputs")
    if not isinstance(outputs, list):
        raise ValueError("Golden payload must contain an outputs list.")

    for entry in outputs:
        if not isinstance(entry, dict):
            raise ValueError("Each golden output entry must be an object.")

        global_row = entry.get("global_row")
        global_col_base = entry.get("global_col_base")
        vector = entry.get("vector")
        if not isinstance(global_row, int) or not isinstance(global_col_base, int) or not isinstance(vector, list):
            raise ValueError("Golden output entries must contain integer global_row/global_col_base and a vector list.")

        vector_array = np.asarray(vector, dtype=np.int32)
        output[global_row, global_col_base : global_col_base + vector_array.shape[0]] = vector_array


__all__ = [
    "format_performance_summary",
    "inspect_compile_output_summary",
    "inspect_package_summary",
    "reconstruct_output_matrix",
]