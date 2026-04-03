from __future__ import annotations

import json
from pathlib import Path
from typing import Any


def conv_output_dim(input_size: int, kernel_size: int, stride: int, padding: int, dilation: int) -> int:
    return ((input_size + 2 * padding - dilation * (kernel_size - 1) - 1) // stride) + 1


def json_dumps(payload: dict[str, object]) -> str:
    return json.dumps(payload, indent=2) + "\n"


def normalize_pair(value: Any, *, name: str, error_cls: type[Exception] = ValueError) -> tuple[int, int]:
    if isinstance(value, int):
        return value, value
    if isinstance(value, tuple) and len(value) == 2 and all(isinstance(item, int) for item in value):
        return value
    raise error_cls(f"Expected {name} to be an int or a tuple of two ints.")


def read_json(path: str | Path) -> dict[str, object]:
    return json.loads(Path(path).read_text(encoding="utf-8"))


def read_json_required(path: str | Path) -> dict[str, object]:
    resolved = Path(path)
    if not resolved.exists():
        raise ValueError(f"Required package file is missing: {resolved}")
    return read_json(resolved)


def write_json(path: str | Path, payload: dict[str, object]) -> None:
    Path(path).write_text(json_dumps(payload), encoding="utf-8")


__all__ = [
    "conv_output_dim",
    "json_dumps",
    "normalize_pair",
    "read_json",
    "read_json_required",
    "write_json",
]