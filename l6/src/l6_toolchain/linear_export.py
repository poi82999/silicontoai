from __future__ import annotations

from . import api as _api
from .api import *
from .emitter import export_linear_tile_package, export_linear_tiled_package
from .frontend import build_arg_parser, cli_frontend


def main() -> int:
    parser = build_arg_parser()
    args = parser.parse_args()

    spec, data = cli_frontend(args)
    output_path = export_linear_tiled_package(args.output, spec, data) if args.tiled else export_linear_tile_package(args.output, spec, data)
    print(f"Generated L6 study package at {output_path}")
    return 0


__all__ = [*_api.__all__, "main"]


if __name__ == "__main__":
    raise SystemExit(main())