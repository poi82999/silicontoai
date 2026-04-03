from __future__ import annotations

from dataclasses import asdict, dataclass
from pathlib import Path

from .common import read_json_required


@dataclass(frozen=True)
class ValidationIssue:
    code: str
    message: str
    path: str | None = None


@dataclass(frozen=True)
class ValidationReport:
    package_dir: str
    is_valid: bool
    op_type: str | None
    shape: dict[str, int] | None
    tile_count: int | None
    issues: tuple[ValidationIssue, ...]

    def to_dict(self) -> dict[str, object]:
        return {
            "package_dir": self.package_dir,
            "is_valid": self.is_valid,
            "op_type": self.op_type,
            "shape": self.shape,
            "tile_count": self.tile_count,
            "issues": [asdict(issue) for issue in self.issues],
        }


def validate_package_report(package_dir: str | Path) -> ValidationReport:
    package_path = Path(package_dir)
    manifest_path = package_path / "manifest.json"
    issues: list[ValidationIssue] = []
    op_type: str | None = None
    shape_summary: dict[str, int] | None = None
    tile_count: int | None = None

    try:
        manifest = read_json_required(manifest_path)
    except ValueError as exc:
        issues.append(ValidationIssue(code="missing_manifest", message=str(exc), path=str(manifest_path)))
        return ValidationReport(
            package_dir=str(package_path),
            is_valid=False,
            op_type=None,
            shape=None,
            tile_count=None,
            issues=tuple(issues),
        )

    manifest_shape = manifest.get("shape")
    if isinstance(manifest_shape, dict):
        maybe_m = manifest_shape.get("m")
        maybe_k = manifest_shape.get("k")
        maybe_n = manifest_shape.get("n")
        if all(isinstance(value, int) for value in (maybe_m, maybe_k, maybe_n)):
            shape_summary = {"m": maybe_m, "k": maybe_k, "n": maybe_n}

    maybe_op_type = manifest.get("op_type")
    op_type = maybe_op_type if isinstance(maybe_op_type, str) else None
    maybe_tile_count = manifest.get("tile_count")
    tile_count = maybe_tile_count if isinstance(maybe_tile_count, int) else None

    try:
        shape = _validate_root_manifest(manifest)
    except ValueError as exc:
        issues.append(ValidationIssue(code="root_manifest", message=str(exc), path=str(manifest_path)))
        return ValidationReport(
            package_dir=str(package_path),
            is_valid=False,
            op_type=op_type,
            shape=shape_summary,
            tile_count=tile_count,
            issues=tuple(issues),
        )

    try:
        if op_type == "gemm_tile":
            _validate_single_tile_package(package_path, manifest, shape)
        elif op_type == "gemm_tiled":
            _validate_tiled_package(package_path, manifest, shape)
        elif op_type == "program_sequence":
            _validate_program_sequence_package(package_path, manifest)
        elif op_type == "program_step":
            _validate_program_step_package(package_path, manifest)
        else:
            raise ValueError(f"Unsupported package op_type: {op_type}")
    except ValueError as exc:
        issues.append(ValidationIssue(code="package_structure", message=str(exc), path=str(package_path)))

    return ValidationReport(
        package_dir=str(package_path),
        is_valid=not issues,
        op_type=op_type,
        shape=shape_summary,
        tile_count=tile_count,
        issues=tuple(issues),
    )


def validate_package(package_dir: str | Path) -> ValidationReport:
    report = validate_package_report(package_dir)
    if not report.is_valid:
        issue_lines = [issue.message if issue.path is None else f"{issue.message} [{issue.path}]" for issue in report.issues]
        raise ValueError("Package validation failed: " + "; ".join(issue_lines))
    return report


def _validate_root_manifest(manifest: dict[str, object]) -> tuple[int, int, int] | None:
    op_type = manifest.get("op_type")
    if op_type not in {"gemm_tile", "gemm_tiled", "program_sequence", "program_step"}:
        raise ValueError("Package manifest op_type must be 'gemm_tile', 'gemm_tiled', 'program_sequence', or 'program_step'.")

    if op_type in {"program_sequence", "program_step"}:
        return None

    shape = manifest.get("shape")
    if not isinstance(shape, dict):
        raise ValueError("Package manifest must contain a shape object.")

    m = shape.get("m")
    k = shape.get("k")
    n = shape.get("n")
    if not isinstance(m, int) or not isinstance(k, int) or not isinstance(n, int):
        raise ValueError("Package manifest shape must contain integer m, k, and n dimensions.")
    if m <= 0 or k <= 0 or n <= 0:
        raise ValueError("Package manifest shape dimensions must be positive.")
    return m, k, n


def _validate_single_tile_package(package_path: Path, manifest: dict[str, object], shape: tuple[int, int, int]) -> None:
    m, k, n = shape
    files = manifest.get("files")
    if not isinstance(files, dict):
        raise ValueError("Single-tile manifest must contain a files object.")

    activations = read_json_required(package_path / _require_str(files, "activations", "Single-tile files"))
    weights = read_json_required(package_path / _require_str(files, "weights", "Single-tile files"))
    golden = read_json_required(package_path / _require_str(files, "golden", "Single-tile files"))

    _validate_activation_payload(activations, expected_valid_rows=m, expected_valid_cols=k)
    _validate_weight_payload(weights, expected_valid_rows=k, expected_valid_cols=n)
    _validate_golden_payload(golden, expected_rows=m, expected_cols=n)


def _validate_tiled_package(package_path: Path, manifest: dict[str, object], shape: tuple[int, int, int]) -> None:
    m, k, n = shape
    tile_count = manifest.get("tile_count")
    if not isinstance(tile_count, int) or tile_count <= 0:
        raise ValueError("Tiled manifest must contain a positive integer tile_count.")

    files = manifest.get("files")
    if not isinstance(files, dict):
        raise ValueError("Tiled manifest must contain a files object.")
    tiles_index_path = package_path / _require_str(files, "tiles", "Tiled files")
    tiles_index = read_json_required(tiles_index_path)
    tiles = tiles_index.get("tiles")
    if not isinstance(tiles, list):
        raise ValueError("tiles.json must contain a tiles list.")
    if len(tiles) != tile_count:
        raise ValueError("Root tile_count does not match the number of tile index entries.")

    golden_coverage: set[tuple[int, int]] = set()
    for tile in tiles:
        if not isinstance(tile, dict):
            raise ValueError("Each tile index entry must be an object.")
        tile_dir = package_path / _require_str(tile, "dir", "Tile index entry")
        tile_manifest = read_json_required(tile_dir / "manifest.json")
        _validate_tile_manifest(tile_manifest, shape)

        tile_shape = tile_manifest["tile"]
        tile_m = tile_shape["tile_rows"]
        tile_k = tile_shape["tile_depth"]
        tile_n = tile_shape["tile_cols"]
        m_base = tile_shape["m_tile_base"]
        n_base = tile_shape["n_tile_base"]

        tile_files = tile_manifest.get("files")
        if not isinstance(tile_files, dict):
            raise ValueError("Tile manifest must contain a files object.")

        activations = read_json_required(tile_dir / _require_str(tile_files, "activations", "Tile files"))
        weights = read_json_required(tile_dir / _require_str(tile_files, "weights", "Tile files"))
        _validate_activation_payload(activations, expected_valid_rows=tile_m, expected_valid_cols=tile_k)
        _validate_weight_payload(weights, expected_valid_rows=tile_k, expected_valid_cols=tile_n)

        has_golden = "golden" in tile_files
        emit_drain_after = tile_manifest["execution"]["emit_drain_after"]
        if has_golden != emit_drain_after:
            raise ValueError("Tile golden presence must match execution.emit_drain_after.")

        if has_golden:
            golden = read_json_required(tile_dir / _require_str(tile_files, "golden", "Tile files"))
            _validate_golden_payload(golden, expected_rows=tile_m, expected_cols=tile_n)
            for output in golden["outputs"]:
                global_row = output["global_row"]
                global_col_base = output["global_col_base"]
                vector_len = len(output["vector"])
                for column in range(global_col_base, global_col_base + vector_len):
                    golden_coverage.add((global_row, column))

            if golden["outputs"]:
                first_row = golden["outputs"][0]["global_row"]
                first_col = golden["outputs"][0]["global_col_base"]
                if first_row != m_base or first_col != n_base:
                    raise ValueError("Tile golden rows must start at the tile's m/n base coordinates.")

    expected_coverage = {(row, col) for row in range(m) for col in range(n)}
    if golden_coverage != expected_coverage:
        raise ValueError("Tiled package golden payloads do not cover the full logical output matrix.")


def _validate_program_sequence_package(package_path: Path, manifest: dict[str, object]) -> None:
    step_count = manifest.get("step_count")
    if not isinstance(step_count, int) or step_count < 0:
        raise ValueError("Program sequence manifest must contain a non-negative integer step_count.")

    files = manifest.get("files")
    if not isinstance(files, dict):
        raise ValueError("Program sequence manifest must contain a files object.")
    steps_index = read_json_required(package_path / _require_str(files, "steps", "Program sequence files"))
    steps = steps_index.get("steps")
    if not isinstance(steps, list):
        raise ValueError("steps.json must contain a steps list.")
    if len(steps) != step_count:
        raise ValueError("Program sequence step_count does not match the number of steps.json entries.")

    program = manifest.get("program")
    if not isinstance(program, dict):
        raise ValueError("Program sequence manifest must contain a program object.")
    if not isinstance(program.get("inputs"), list):
        raise ValueError("Program sequence manifest program.inputs must be a list.")
    if not isinstance(program.get("outputs"), list):
        raise ValueError("Program sequence manifest program.outputs must be a list.")
    tensor_count = program.get("tensor_count")
    if not isinstance(tensor_count, int) or tensor_count <= 0:
        raise ValueError("Program sequence manifest program.tensor_count must be a positive integer.")

    for expected_step_id, entry in enumerate(steps):
        if not isinstance(entry, dict):
            raise ValueError("Each steps.json entry must be an object.")
        step_id = _require_int(entry, "step_id", "Program step index entry")
        if step_id != expected_step_id:
            raise ValueError("Program steps must have contiguous step_id values starting from zero.")
        step_dir_rel = _require_str(entry, "dir", "Program step index entry")
        step_dir = package_path / step_dir_rel
        step_manifest = read_json_required(step_dir / "manifest.json")

        if step_manifest.get("op_type") != "program_step":
            raise ValueError("Each step manifest must declare op_type 'program_step'.")
        if step_manifest.get("step_id") != step_id:
            raise ValueError("Step manifest step_id must match steps.json.")
        if step_manifest.get("name") != entry.get("name"):
            raise ValueError("Step manifest name must match steps.json.")
        if step_manifest.get("lowered_kind") != entry.get("lowered_kind"):
            raise ValueError("Step manifest lowered_kind must match steps.json.")

        _validate_program_step_package(step_dir, step_manifest)

        expected_compute_package_dir = entry.get("compute_package_dir")
        files = step_manifest.get("files")
        if not isinstance(files, dict):
            raise ValueError("Program step manifest must contain a files object.")
        step_compute_package = files.get("compute_package")
        if expected_compute_package_dir is None:
            if step_compute_package is not None:
                raise ValueError("Non-compute steps must not declare a compute package.")
        else:
            if not isinstance(expected_compute_package_dir, str) or not expected_compute_package_dir:
                raise ValueError("Program step index compute_package_dir must be a non-empty string when present.")
            if step_compute_package != "compute_package":
                raise ValueError("Compute-backed program steps must declare files.compute_package='compute_package'.")
            if expected_compute_package_dir != f"{step_dir_rel}/compute_package":
                raise ValueError("steps.json compute_package_dir must point to the step's compute_package directory.")


def _validate_program_step_package(package_path: Path, manifest: dict[str, object]) -> None:
    step_id = manifest.get("step_id")
    if not isinstance(step_id, int) or step_id < 0:
        raise ValueError("Program step manifest must contain a non-negative integer step_id.")
    name = manifest.get("name")
    source_kind = manifest.get("source_kind")
    lowered_kind = manifest.get("lowered_kind")
    if not isinstance(name, str) or not name:
        raise ValueError("Program step manifest must contain a non-empty string name.")
    if not isinstance(source_kind, str) or not source_kind:
        raise ValueError("Program step manifest must contain a non-empty string source_kind.")
    if not isinstance(lowered_kind, str) or not lowered_kind:
        raise ValueError("Program step manifest must contain a non-empty string lowered_kind.")
    if not isinstance(manifest.get("inputs"), list) or not isinstance(manifest.get("outputs"), list):
        raise ValueError("Program step manifest inputs and outputs must be lists.")
    if not isinstance(manifest.get("attrs"), dict):
        raise ValueError("Program step manifest must contain an attrs object.")

    files = manifest.get("files")
    if not isinstance(files, dict):
        raise ValueError("Program step manifest must contain a files object.")

    needs_compute_package = lowered_kind in {"gemm", "conv2d_im2col_gemm"}
    has_compute_package = "compute_package" in files
    if needs_compute_package != has_compute_package:
        raise ValueError("Program step compute package presence must match lowered_kind.")

    if has_compute_package:
        compute_package_dir = package_path / _require_str(files, "compute_package", "Program step files")
        compute_report = validate_package_report(compute_package_dir)
        if not compute_report.is_valid:
            raise ValueError("Program step compute package is invalid.")


def _validate_tile_manifest(manifest: dict[str, object], shape: tuple[int, int, int]) -> None:
    _, k, n = shape
    tile = manifest.get("tile")
    execution = manifest.get("execution")
    if not isinstance(tile, dict) or not isinstance(execution, dict):
        raise ValueError("Tile manifest must contain tile and execution objects.")

    m_base = _require_int(tile, "m_tile_base", "Tile manifest")
    n_base = _require_int(tile, "n_tile_base", "Tile manifest")
    k_base = _require_int(tile, "k_tile_base", "Tile manifest")
    tile_rows = _require_int(tile, "tile_rows", "Tile manifest")
    tile_cols = _require_int(tile, "tile_cols", "Tile manifest")
    tile_depth = _require_int(tile, "tile_depth", "Tile manifest")

    if tile_rows <= 0 or tile_cols <= 0 or tile_depth <= 0:
        raise ValueError("Tile manifest dimensions must be positive.")
    if k_base + tile_depth > k or n_base + tile_cols > n:
        raise ValueError("Tile manifest exceeds root shape bounds.")
    if execution.get("seq_len") != tile_depth:
        raise ValueError("Tile execution.seq_len must match tile_depth.")
    k_tile_count = _require_int(execution, "k_tile_count", "Tile execution")
    k_pass_index = _require_int(execution, "k_pass_index", "Tile execution")
    if k_tile_count <= 0 or not (0 <= k_pass_index < k_tile_count):
        raise ValueError("Tile k_pass_index must be within [0, k_tile_count).")


def _validate_activation_payload(payload: dict[str, object], *, expected_valid_rows: int, expected_valid_cols: int) -> None:
    rows = payload.get("rows")
    if not isinstance(rows, list):
        raise ValueError("Activation payload must contain a rows list.")
    valid_rows = payload.get("valid_rows", len(rows))
    valid_cols = payload.get("valid_cols", len(rows[0]) if rows else 0)
    if not isinstance(valid_rows, int) or not isinstance(valid_cols, int):
        raise ValueError("Activation payload must contain integer valid_rows and valid_cols.")
    if valid_rows != expected_valid_rows or valid_cols != expected_valid_cols:
        raise ValueError("Activation payload valid_rows/valid_cols do not match the expected tile shape.")
    if len(rows) < valid_rows:
        raise ValueError("Activation payload does not contain enough rows for valid_rows.")
    for row in rows[:valid_rows]:
        if not isinstance(row, list) or len(row) < valid_cols:
            raise ValueError("Activation payload row width is smaller than valid_cols.")


def _validate_weight_payload(payload: dict[str, object], *, expected_valid_rows: int, expected_valid_cols: int) -> None:
    rows = payload.get("rows")
    if not isinstance(rows, list):
        raise ValueError("Weight payload must contain a rows list.")
    valid_rows = payload.get("valid_rows", len(rows))
    valid_cols = payload.get("valid_cols", len(rows[0]) if rows else 0)
    if not isinstance(valid_rows, int) or not isinstance(valid_cols, int):
        raise ValueError("Weight payload must contain integer valid_rows and valid_cols.")
    if valid_rows != expected_valid_rows or valid_cols != expected_valid_cols:
        raise ValueError("Weight payload valid_rows/valid_cols do not match the expected tile shape.")
    if len(rows) < valid_rows:
        raise ValueError("Weight payload does not contain enough rows for valid_rows.")
    for row in rows[:valid_rows]:
        if not isinstance(row, list) or len(row) < valid_cols:
            raise ValueError("Weight payload row width is smaller than valid_cols.")


def _validate_golden_payload(payload: dict[str, object], *, expected_rows: int, expected_cols: int) -> None:
    outputs = payload.get("outputs")
    if not isinstance(outputs, list):
        raise ValueError("Golden payload must contain an outputs list.")
    valid_rows = payload.get("valid_rows", len(outputs))
    first_vector = outputs[0].get("vector") if outputs and isinstance(outputs[0], dict) else None
    valid_cols = payload.get("valid_cols", len(first_vector) if isinstance(first_vector, list) else 0)
    if not isinstance(valid_rows, int) or not isinstance(valid_cols, int):
        raise ValueError("Golden payload must contain integer valid_rows and valid_cols.")
    if valid_rows != expected_rows or valid_cols != expected_cols:
        raise ValueError("Golden payload valid_rows/valid_cols do not match the expected output shape.")
    if len(outputs) != valid_rows:
        raise ValueError("Golden payload output count must match valid_rows.")

    for drain_addr, entry in enumerate(outputs):
        if not isinstance(entry, dict):
            raise ValueError("Each golden output entry must be an object.")
        if entry.get("drain_addr") != drain_addr:
            raise ValueError("Golden output drain_addr values must be contiguous and start from zero.")
        vector = entry.get("vector")
        if not isinstance(vector, list) or len(vector) != valid_cols:
            raise ValueError("Each golden output vector must have width valid_cols.")
        if not isinstance(entry.get("global_row"), int) or not isinstance(entry.get("global_col_base"), int):
            raise ValueError("Golden outputs must contain integer global_row and global_col_base values.")


def _require_int(payload: dict[str, object], key: str, context: str) -> int:
    value = payload.get(key)
    if not isinstance(value, int):
        raise ValueError(f"{context} must contain integer {key}.")
    return value


def _require_str(payload: dict[str, object], key: str, context: str) -> str:
    value = payload.get(key)
    if not isinstance(value, str) or not value:
        raise ValueError(f"{context} must contain a non-empty string {key}.")
    return value


__all__ = ["ValidationIssue", "ValidationReport", "validate_package", "validate_package_report"]