from __future__ import annotations

import os
import subprocess
from dataclasses import asdict, dataclass
from pathlib import Path

from .common import read_json_required, write_json


@dataclass(frozen=True)
class ReplayPackageArtifact:
    source_package_dir: str
    replay_package_dir: str
    package_id: str
    source_op_type: str

    def to_dict(self) -> dict[str, object]:
        return asdict(self)


@dataclass(frozen=True)
class SystemReplaySmokeResult:
    binary_path: str
    chain_summary_path: str
    replay_package_dirs: tuple[str, ...]
    stdout: str

    def to_dict(self) -> dict[str, object]:
        return asdict(self)


@dataclass(frozen=True)
class SystemReplayBuildResult:
    binary_path: str
    stdout: str

    def to_dict(self) -> dict[str, object]:
        return asdict(self)


def export_replay_packages(
    package_dir: str | Path,
    output_dir: str | Path,
    *,
    include_system: bool = True,
    weights_src_base: int = 0,
    activations_src_base: int = 8192,
) -> list[ReplayPackageArtifact]:
    package_path = Path(package_dir)
    output_path = Path(output_dir)
    output_path.mkdir(parents=True, exist_ok=True)

    manifest = read_json_required(package_path / "manifest.json")
    op_type = manifest.get("op_type")
    if op_type == "program_sequence":
        return _export_program_sequence_replay_packages(
            package_path,
            output_path,
            include_system=include_system,
            weights_src_base=weights_src_base,
            activations_src_base=activations_src_base,
        )
    if op_type == "gemm_tile":
        groups = [_build_single_tile_group(package_path, manifest)]
    elif op_type == "gemm_tiled":
        groups = _build_tiled_groups(package_path, manifest)
    else:
        raise ValueError(f"Replay bridge does not support source op_type: {op_type}")

    artifacts: list[ReplayPackageArtifact] = []
    for group in groups:
        replay_package_dir = output_path / group["package_id"]
        replay_package_dir.mkdir(parents=True, exist_ok=True)
        _write_replay_package(
            replay_package_dir,
            group,
            include_system=include_system,
            weights_src_base=weights_src_base,
            activations_src_base=activations_src_base,
        )
        artifacts.append(
            ReplayPackageArtifact(
                source_package_dir=str(package_path),
                replay_package_dir=str(replay_package_dir),
                package_id=group["package_id"],
                source_op_type=str(op_type),
            )
        )

    return artifacts


def export_and_run_system_replay_smoke(
    package_dir: str | Path,
    workloads_dir: str | Path,
    *,
    binary_path: str | Path | None = None,
    include_system: bool = True,
    weights_src_base: int = 0,
    activations_src_base: int = 8192,
) -> SystemReplaySmokeResult:
    replay_artifacts = export_replay_packages(
        package_dir,
        workloads_dir,
        include_system=include_system,
        weights_src_base=weights_src_base,
        activations_src_base=activations_src_base,
    )
    if not replay_artifacts:
        raise ValueError("System replay smoke requires at least one replay package artifact.")

    workloads_path = Path(workloads_dir)
    chain_summary_path = workloads_path / "replay_chain_summary.txt"
    return run_system_replay_packages(
        [artifact.replay_package_dir for artifact in replay_artifacts],
        chain_summary_path,
        binary_path=binary_path,
    )


def run_system_replay_packages(
    replay_package_dirs: list[str | Path] | tuple[str | Path, ...],
    chain_summary_path: str | Path,
    *,
    binary_path: str | Path | None = None,
) -> SystemReplaySmokeResult:
    if not replay_package_dirs:
        raise ValueError("System replay smoke requires at least one replay package directory.")

    resolved_binary = Path(binary_path) if binary_path is not None else Path(__file__).resolve().parents[3] / "build_system" / "Vnpu_system_top"
    if not resolved_binary.exists():
        raise ValueError(f"System replay binary is missing: {resolved_binary}")

    resolved_package_dirs = tuple(str(Path(package_dir)) for package_dir in replay_package_dirs)
    resolved_chain_summary_path = Path(chain_summary_path)
    resolved_chain_summary_path.parent.mkdir(parents=True, exist_ok=True)

    command = [str(resolved_binary), f"--chain-summary={resolved_chain_summary_path}", *resolved_package_dirs]
    try:
        completed = _run_system_command(command)
    except OSError as exc:
        raise RuntimeError(f"System replay binary is not runnable on this host: {resolved_binary}") from exc
    if completed.returncode != 0:
        stderr = completed.stderr.strip()
        stdout = completed.stdout.strip()
        detail = stderr or stdout or f"returncode={completed.returncode}"
        raise RuntimeError(f"System replay smoke failed: {detail}")

    return SystemReplaySmokeResult(
        binary_path=str(resolved_binary),
        chain_summary_path=str(resolved_chain_summary_path),
        replay_package_dirs=resolved_package_dirs,
        stdout=completed.stdout,
    )


def build_system_replay_binary(
    repo_root: str | Path | None = None,
    *,
    binary_path: str | Path | None = None,
) -> SystemReplayBuildResult:
    resolved_repo_root = Path(repo_root) if repo_root is not None else Path(__file__).resolve().parents[3]
    resolved_binary = Path(binary_path) if binary_path is not None else resolved_repo_root / "build_system" / "Vnpu_system_top"

    if os.name == "nt":
        bash_path = _find_bash_executable()
        if bash_path is None:
            raise RuntimeError("WSL bash.exe is not available on this Windows host.")
        scripts_dir_wsl = _to_wsl_path(resolved_repo_root / "scripts")
        command = [
            str(bash_path),
            "-lc",
            f"cd {scripts_dir_wsl} && make -f Makefile build-system",
        ]
        completed = subprocess.run(command, capture_output=True, text=True, check=False)
    else:
        completed = subprocess.run(
            ["make", "-f", "Makefile", "build-system"],
            cwd=str(resolved_repo_root / "scripts"),
            capture_output=True,
            text=True,
            check=False,
        )

    if completed.returncode != 0:
        detail = completed.stderr.strip() or completed.stdout.strip() or f"returncode={completed.returncode}"
        raise RuntimeError(f"Failed to build system replay binary: {detail}")
    if not resolved_binary.exists():
        raise RuntimeError(f"System replay binary was not produced: {resolved_binary}")

    return SystemReplayBuildResult(binary_path=str(resolved_binary), stdout=completed.stdout)


def _export_program_sequence_replay_packages(
    package_path: Path,
    output_path: Path,
    *,
    include_system: bool,
    weights_src_base: int,
    activations_src_base: int,
) -> list[ReplayPackageArtifact]:
    steps_index = read_json_required(package_path / "steps.json")
    steps = steps_index.get("steps")
    if not isinstance(steps, list):
        raise ValueError("Program sequence replay bridge requires steps.json to contain a steps list.")

    artifacts: list[ReplayPackageArtifact] = []
    for step in steps:
        if not isinstance(step, dict):
            raise ValueError("Program sequence step entries must be objects.")
        compute_package_dir = step.get("compute_package_dir")
        if compute_package_dir is None:
            continue
        if not isinstance(compute_package_dir, str) or not compute_package_dir:
            raise ValueError("Program sequence compute_package_dir must be a non-empty string.")
        step_name = step.get("name")
        if not isinstance(step_name, str) or not step_name:
            raise ValueError("Program sequence step name must be a non-empty string.")
        step_output_dir = output_path / f"step_{int(step['step_id']):03d}_{step_name}"
        artifacts.extend(
            export_replay_packages(
                package_path / compute_package_dir,
                step_output_dir,
                include_system=include_system,
                weights_src_base=weights_src_base,
                activations_src_base=activations_src_base,
            )
        )

    return artifacts


def _build_single_tile_group(package_path: Path, manifest: dict[str, object]) -> dict[str, object]:
    tile = manifest.get("tile")
    execution = manifest.get("execution")
    files = manifest.get("files")
    if not isinstance(tile, dict) or not isinstance(execution, dict) or not isinstance(files, dict):
        raise ValueError("Single-tile replay bridge requires tile, execution, and files objects.")

    package_id = _require_str(manifest, "package_id", "Replay source manifest")
    tile_rows = _require_int(tile, "tile_rows", "Replay source tile")
    tile_cols = _require_int(tile, "tile_cols", "Replay source tile")
    seq_len = _require_int(execution, "seq_len", "Replay source execution")
    k_tile_count = _require_int(execution, "k_tile_count", "Replay source execution")
    if seq_len != tile_rows:
        raise ValueError("Replay bridge requires tile.tile_rows to match execution.seq_len.")

    return {
        "package_id": package_id,
        "shape": _require_shape(manifest),
        "tile_rows": tile_rows,
        "tile_cols": tile_cols,
        "m_tile_base": _require_int(tile, "m_tile_base", "Replay source tile"),
        "n_tile_base": _require_int(tile, "n_tile_base", "Replay source tile"),
        "seq_len": seq_len,
        "k_tile_count": k_tile_count,
        "passes": [
            {
                "pass_index": 0,
                "activation_payload": read_json_required(package_path / _require_str(files, "activations", "Replay source files")),
                "weight_payload": read_json_required(package_path / _require_str(files, "weights", "Replay source files")),
                "acc_clear": True,
            }
        ],
        "golden_payload": read_json_required(package_path / _require_str(files, "golden", "Replay source files")),
    }


def _build_tiled_groups(package_path: Path, manifest: dict[str, object]) -> list[dict[str, object]]:
    files = manifest.get("files")
    if not isinstance(files, dict):
        raise ValueError("Tiled replay bridge requires a files object.")
    package_id = _require_str(manifest, "package_id", "Replay source manifest")
    shape = _require_shape(manifest)

    tiles_index = read_json_required(package_path / _require_str(files, "tiles", "Replay source files"))
    tiles = tiles_index.get("tiles")
    if not isinstance(tiles, list) or not tiles:
        raise ValueError("Tiled replay bridge requires tiles.json with at least one tile entry.")

    grouped: dict[tuple[int, int], list[dict[str, object]]] = {}
    for entry in tiles:
        if not isinstance(entry, dict):
            raise ValueError("Tile index entries must be objects.")
        tile_dir = package_path / _require_str(entry, "dir", "Replay tile index entry")
        tile_manifest = read_json_required(tile_dir / "manifest.json")
        tile = tile_manifest.get("tile")
        execution = tile_manifest.get("execution")
        tile_files = tile_manifest.get("files")
        if not isinstance(tile, dict) or not isinstance(execution, dict) or not isinstance(tile_files, dict):
            raise ValueError("Replay tile manifests must contain tile, execution, and files objects.")

        key = (
            _require_int(tile, "m_tile_base", "Replay tile manifest"),
            _require_int(tile, "n_tile_base", "Replay tile manifest"),
        )
        grouped.setdefault(key, []).append(
            {
                "pass_index": _require_int(execution, "k_pass_index", "Replay tile execution"),
                "tile_depth": _require_int(tile, "tile_depth", "Replay tile manifest"),
                "tile_rows": _require_int(tile, "tile_rows", "Replay tile manifest"),
                "tile_cols": _require_int(tile, "tile_cols", "Replay tile manifest"),
                "k_tile_count": _require_int(execution, "k_tile_count", "Replay tile execution"),
                "activation_payload": read_json_required(tile_dir / _require_str(tile_files, "activations", "Replay tile files")),
                "weight_payload": read_json_required(tile_dir / _require_str(tile_files, "weights", "Replay tile files")),
                "golden_payload": None
                if "golden" not in tile_files
                else read_json_required(tile_dir / _require_str(tile_files, "golden", "Replay tile files")),
                "acc_clear": bool(execution.get("acc_clear", False)),
            }
        )

    groups: list[dict[str, object]] = []
    for (m_tile_base, n_tile_base), passes in sorted(grouped.items()):
        passes.sort(key=lambda item: int(item["pass_index"]))
        tile_rows = int(passes[0]["tile_rows"])
        tile_cols = int(passes[0]["tile_cols"])
        k_tile_count = int(passes[0]["k_tile_count"])
        if len(passes) != k_tile_count:
            raise ValueError("Replay bridge requires one complete k-pass set per (m_tile_base, n_tile_base) tile group.")
        if [int(item["pass_index"]) for item in passes] != list(range(k_tile_count)):
            raise ValueError("Replay bridge requires contiguous k_pass_index values starting from zero.")
        if any(int(item["tile_rows"]) != tile_rows or int(item["tile_cols"]) != tile_cols for item in passes):
            raise ValueError("Replay bridge requires all passes in one tile group to share tile_rows and tile_cols.")
        final_golden = next((item["golden_payload"] for item in reversed(passes) if item["golden_payload"] is not None), None)
        if final_golden is None:
            raise ValueError("Replay bridge requires the final tiled pass to provide golden payloads.")

        package_suffix = f"m{m_tile_base}_n{n_tile_base}"
        groups.append(
            {
                "package_id": f"{package_id}_{package_suffix}",
                "shape": shape,
                "tile_rows": tile_rows,
                "tile_cols": tile_cols,
                "m_tile_base": m_tile_base,
                "n_tile_base": n_tile_base,
                "seq_len": tile_rows,
                "k_tile_count": k_tile_count,
                "passes": [
                    {
                        "pass_index": int(item["pass_index"]),
                        "activation_payload": item["activation_payload"],
                        "weight_payload": item["weight_payload"],
                        "acc_clear": bool(item["acc_clear"]),
                    }
                    for item in passes
                ],
                "golden_payload": final_golden,
            }
        )

    return groups


def _write_replay_package(
    output_dir: Path,
    group: dict[str, object],
    *,
    include_system: bool,
    weights_src_base: int,
    activations_src_base: int,
) -> None:
    tile_rows = int(group["tile_rows"])
    tile_cols = int(group["tile_cols"])
    if tile_rows <= 0 or tile_rows > 16:
        raise ValueError("Replay bridge currently supports only tile_rows in the range [1, 16].")
    if tile_cols <= 0 or tile_cols > 16:
        raise ValueError("Replay bridge currently supports only tile_cols in the range [1, 16].")

    k_tile_count = int(group["k_tile_count"])
    passes = group["passes"]
    if not isinstance(passes, list) or len(passes) != k_tile_count:
        raise ValueError("Replay bridge internal error: pass count mismatch.")

    activation_rows: list[list[int]] = []
    weight_rows: list[list[int]] = []
    acc_clear_pattern: list[bool] = []
    for item in passes:
        if not isinstance(item, dict):
            raise ValueError("Replay bridge pass entries must be objects.")
        activation_payload = item["activation_payload"]
        weight_payload = item["weight_payload"]
        activation_rows.extend(_trim_rows(_extract_rows(activation_payload), tile_rows))
        weight_rows.extend(_trim_rows(_extract_rows(weight_payload), 16))
        acc_clear_pattern.append(bool(item["acc_clear"]))

    acc_clear_policy = _derive_acc_clear_policy(acc_clear_pattern)
    golden_outputs = _extract_outputs(group["golden_payload"])
    drain_addresses = [int(entry["drain_addr"]) for entry in golden_outputs]
    if drain_addresses != list(range(tile_rows)):
        raise ValueError("Replay bridge requires golden drain_addr values to be contiguous from zero to tile_rows-1.")

    manifest = {
        "manifest_version": "0.2-draft",
        "package_id": group["package_id"],
        "op_type": "gemm_tile",
        "description": "Replay-ready package exported from an L6 compute package.",
        "source": {
            "origin": "l6_replay_bridge",
            "notes": "Generated from an L6 compute package for direct core/system replay.",
        },
        "shape": dict(group["shape"]),
        "tile": {
            "m_tile_base": int(group["m_tile_base"]),
            "n_tile_base": int(group["n_tile_base"]),
            "tile_rows": tile_rows,
            "tile_cols": tile_cols,
        },
        "files": {
            "activations": "activations.json",
            "weights": "weights.json",
            "golden": "golden.json",
        },
        "execution": {
            "seq_len": tile_rows,
            "k_tile_count": k_tile_count,
            "require_weight_preload": True,
            "acc_clear_policy": acc_clear_policy,
            "drain_addresses": drain_addresses,
        },
        "format": {
            "activation_layout": "row_major_16xint8_vectors",
            "weight_layout": "k_major_rows_of_16_columns",
            "golden_layout": "drain_address_to_16xint32_vector_map",
            "lane_order": "lane0_to_lowest_column_offset",
            "endianness": "little",
            "payload_encoding": "json",
        },
        "compare": {"mode": "exact", "require_exact_match": True},
    }
    if include_system:
        manifest["system"] = _build_system_metadata(
            tile_rows=tile_rows,
            k_tile_count=k_tile_count,
            weights_src_base=weights_src_base,
            activations_src_base=activations_src_base,
            acc_clear_pattern=acc_clear_pattern,
        )

    write_json(output_dir / "manifest.json", manifest)
    write_json(output_dir / "activations.json", {"layout": "row_major_16xint8_vectors", "rows": activation_rows})
    write_json(output_dir / "weights.json", {"layout": "k_major_rows_of_16_columns", "rows": weight_rows})
    write_json(
        output_dir / "golden.json",
        {
            "layout": "drain_address_to_16xint32_vector_map",
            "outputs": golden_outputs,
        },
    )


def _build_system_metadata(
    *,
    tile_rows: int,
    k_tile_count: int,
    weights_src_base: int,
    activations_src_base: int,
    acc_clear_pattern: list[bool],
) -> dict[str, object]:
    phase_sequence: list[str] = []
    passes: list[dict[str, object]] = []
    per_pass_activation_bytes = tile_rows * 16
    per_pass_weight_bytes = 16 * 16

    for pass_index, acc_clear in enumerate(acc_clear_pattern):
        weight_src_addr = weights_src_base + pass_index * per_pass_weight_bytes
        activation_src_addr = activations_src_base + pass_index * per_pass_activation_bytes
        passes.append(
            {
                "pass_index": pass_index,
                "weights_src_addr": weight_src_addr,
                "activations_src_addr": activation_src_addr,
                "weight_burst_len": 15,
                "weight_total_bursts": 1,
                "activation_burst_len": tile_rows - 1,
                "activation_total_bursts": 1,
                "acc_clear": acc_clear,
            }
        )
        phase_sequence.extend([
            "dma_weights",
            "swap_banks",
            "preload_weights",
            "dma_activations",
            "swap_banks",
            "execute",
        ])
    phase_sequence.extend(["flush", "drain"])

    return {
        "memory": {
            "weights_src_addr": weights_src_base,
            "activations_src_addr": activations_src_base,
            "weights_total_bytes": per_pass_weight_bytes * k_tile_count,
            "activations_total_bytes": per_pass_activation_bytes * k_tile_count,
        },
        "dma": {
            "weight_burst_len": 15,
            "weight_total_bursts": k_tile_count,
            "activation_burst_len": tile_rows - 1,
            "activation_total_bursts": k_tile_count,
        },
        "banks": {
            "initial_bank_sel": 0,
            "swap_before_weight_preload": True,
            "swap_before_execute": True,
        },
        "execution": {
            "weight_target": "inactive_weight_bank_then_pe_preload",
            "activation_target": "inactive_activation_bank_then_execute",
            "phase_sequence": phase_sequence,
            "expected_dma_done_count": 2 * k_tile_count,
            "expected_npu_done_count": 2 * k_tile_count,
            "flush_cycles": 35,
            "passes": passes,
        },
    }


def _derive_acc_clear_policy(acc_clear_pattern: list[bool]) -> str:
    if acc_clear_pattern == [True] + [False] * (len(acc_clear_pattern) - 1):
        return "first_pass_overwrite"
    if all(acc_clear_pattern):
        return "always_overwrite"
    if not any(acc_clear_pattern):
        return "always_accumulate"
    raise ValueError("Replay bridge requires acc_clear behavior to map cleanly to a supported replay acc_clear_policy.")


def _extract_rows(payload: object) -> list[list[int]]:
    if not isinstance(payload, dict):
        raise ValueError("Replay bridge payload must be an object.")
    rows = payload.get("rows")
    if not isinstance(rows, list):
        raise ValueError("Replay bridge payload must contain a rows list.")
    extracted: list[list[int]] = []
    for row_index, row in enumerate(rows):
        if not isinstance(row, list) or len(row) < 16:
            raise ValueError("Replay bridge rows must contain at least 16 elements.")
        normalized_row: list[int] = []
        for lane_index, value in enumerate(row[:16]):
            lane_value = int(value)
            _validate_replay_transition_lane_value(lane_value, row_index=row_index, lane_index=lane_index)
            normalized_row.append(lane_value)
        extracted.append(normalized_row)
    return extracted


def _validate_replay_transition_lane_value(value: int, *, row_index: int, lane_index: int) -> None:
    if value < -128 or value > 127:
        raise ValueError(
            "Replay bridge signed-int8 subset requires activation/weight lanes to stay within [-128, 127]; "
            f"found value={value} at row={row_index}, lane={lane_index}."
        )


def _run_system_command(command: list[str]) -> subprocess.CompletedProcess[str]:
    binary_path = Path(command[0])
    if os.name == "nt" and _looks_like_elf_binary(binary_path):
        bash_path = _find_bash_executable()
        if bash_path is None:
            raise OSError("ELF binary requires WSL bash.exe on Windows")
        wsl_command = [_shell_quote_wsl_arg(argument, treat_as_binary=(index == 0)) for index, argument in enumerate(command)]
        return subprocess.run(
            [str(bash_path), "-lc", " ".join(wsl_command)],
            capture_output=True,
            text=True,
            check=False,
        )
    return subprocess.run(command, capture_output=True, text=True, check=False)


def _looks_like_elf_binary(path: Path) -> bool:
    try:
        with path.open("rb") as handle:
            return handle.read(4) == b"\x7fELF"
    except OSError:
        return False


def _find_bash_executable() -> Path | None:
    candidate = Path.home() / "AppData" / "Local" / "Microsoft" / "WindowsApps" / "bash.exe"
    if candidate.exists():
        return candidate
    return None


def _to_wsl_path(path: Path) -> str:
    resolved = path.resolve()
    drive = resolved.drive.rstrip(":").lower()
    parts = [part for part in resolved.parts[1:] if part not in {resolved.drive, "\\"}]
    return "/mnt/" + drive + "/" + "/".join(part.replace("\\", "/") for part in parts)


def _shell_quote_wsl_arg(arg: str, *, treat_as_binary: bool = False) -> str:
    if treat_as_binary:
        return "'" + _to_wsl_path(Path(arg)) + "'"
    if arg.startswith("--chain-summary="):
        path_part = arg.split("=", 1)[1]
        return "'--chain-summary=" + _to_wsl_path(Path(path_part)) + "'"
    if not arg.startswith("-") and ("/" in arg or "\\" in arg or ":" in arg):
        try:
            return "'" + _to_wsl_path(Path(arg)) + "'"
        except OSError:
            pass
    return "'" + arg.replace("'", "'\"'\"'") + "'"


def _trim_rows(rows: list[list[int]], count: int) -> list[list[int]]:
    if len(rows) < count:
        raise ValueError("Replay bridge payload does not contain enough rows for the requested count.")
    return rows[:count]


def _extract_outputs(payload: object) -> list[dict[str, object]]:
    if not isinstance(payload, dict):
        raise ValueError("Replay bridge golden payload must be an object.")
    outputs = payload.get("outputs")
    if not isinstance(outputs, list) or not outputs:
        raise ValueError("Replay bridge golden payload must contain a non-empty outputs list.")
    extracted: list[dict[str, object]] = []
    for output in outputs:
        if not isinstance(output, dict):
            raise ValueError("Replay bridge golden entries must be objects.")
        vector = output.get("vector")
        if not isinstance(vector, list) or not (1 <= len(vector) <= 16):
            raise ValueError("Replay bridge requires golden vectors to contain between 1 and 16 values.")
        extracted.append(
            {
                "drain_addr": int(output.get("drain_addr", -1)),
                "global_row": int(output.get("global_row", -1)),
                "global_col_base": int(output.get("global_col_base", -1)),
                "vector": [int(value) for value in vector],
            }
        )
    return extracted


def _require_shape(manifest: dict[str, object]) -> dict[str, int]:
    shape = manifest.get("shape")
    if not isinstance(shape, dict):
        raise ValueError("Replay bridge source manifest must contain a shape object.")
    return {
        "m": _require_int(shape, "m", "Replay source shape"),
        "k": _require_int(shape, "k", "Replay source shape"),
        "n": _require_int(shape, "n", "Replay source shape"),
    }


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


__all__ = [
    "ReplayPackageArtifact",
    "SystemReplayBuildResult",
    "SystemReplaySmokeResult",
    "build_system_replay_binary",
    "export_and_run_system_replay_smoke",
    "export_replay_packages",
    "run_system_replay_packages",
]