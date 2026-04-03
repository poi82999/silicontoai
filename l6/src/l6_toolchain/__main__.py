"""CLI entry point: python -m l6_toolchain compile ..."""
from __future__ import annotations

import argparse
import json
import sys
from pathlib import Path

from .compiler import CompilerOptions, CompilerResult, compile_program


def _build_parser() -> argparse.ArgumentParser:
    parser = argparse.ArgumentParser(
        prog="l6_toolchain",
        description="L6 NPU toolchain compiler.",
    )
    sub = parser.add_subparsers(dest="command")

    compile_p = sub.add_parser("compile", help="Compile a Program or nn.Module to NPU packages.")
    compile_p.add_argument("--output-dir", required=True, help="Root output directory.")
    compile_p.add_argument("--package-id", default="l6_compile", help="Package identifier.")
    compile_p.add_argument("--input-shape", type=str, default=None, help="Comma-separated input shape, e.g. 1,4.")
    compile_p.add_argument("--schedule-strategy", default="weight_reuse", choices=["default", "weight_reuse"])
    compile_p.add_argument("--no-replay", action="store_true", help="Skip replay package generation.")
    compile_p.add_argument("--no-schedule-metadata", action="store_true", help="Omit schedule metadata from manifests.")
    compile_p.add_argument("--program-json", type=str, default=None, help="Path to a Program JSON file.")

    return parser


def _parse_input_shape(raw: str | None) -> tuple[int, ...] | None:
    if raw is None:
        return None
    return tuple(int(x.strip()) for x in raw.split(","))


def _load_program_from_json(path: str) -> object:
    """Load a Program from a minimal JSON representation."""
    from .ir import OpNode, Program, TensorValue

    data = json.loads(Path(path).read_text(encoding="utf-8"))
    tensors = tuple(TensorValue(name=t["name"], shape=tuple(t["shape"]), dtype=t.get("dtype", "int8")) for t in data["tensors"])
    inputs = tuple(TensorValue(name=t["name"], shape=tuple(t["shape"]), dtype=t.get("dtype", "int8")) for t in data["inputs"])
    ops = tuple(
        OpNode(
            name=op["name"],
            kind=op["kind"],
            inputs=tuple(op["inputs"]),
            outputs=tuple(op["outputs"]),
            attrs=op.get("attrs", {}),
        )
        for op in data["ops"]
    )
    return Program(inputs=inputs, tensors=tensors, ops=ops, outputs=tuple(data["outputs"]))


def main(argv: list[str] | None = None) -> None:
    parser = _build_parser()
    args = parser.parse_args(argv)

    if args.command is None:
        parser.print_help()
        sys.exit(1)

    if args.command == "compile":
        if args.program_json is None:
            parser.error("--program-json is required (nn.Module loading from CLI is not yet supported).")

        source = _load_program_from_json(args.program_json)
        options = CompilerOptions(
            package_id=args.package_id,
            output_dir=args.output_dir,
            schedule_strategy=args.schedule_strategy,
            replay_enabled=not args.no_replay,
            include_schedule_metadata=not args.no_schedule_metadata,
            input_shape=_parse_input_shape(args.input_shape),
        )
        result = compile_program(source, options=options)

        print(f"Compiled: {result.plan.package_id}")
        print(f"  Steps: {len(result.plan.step_plans)} ({result.plan.total_compute_steps} compute)")
        print(f"  Estimated cycles: {result.plan.total_estimated_cycles}")
        print(f"  Program package: {result.artifacts.program_package_dir}")
        print(f"  Replay packages: {len(result.artifacts.replay_package_dirs)}")
        print(f"  Manifest: {result.artifacts.compile_manifest_path}")


if __name__ == "__main__":
    main()
