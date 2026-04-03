from __future__ import annotations

from pathlib import Path

import numpy as np

from .common import read_json


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


__all__ = ["reconstruct_output_matrix"]