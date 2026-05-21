#!/usr/bin/env python3
"""Route SiliconToAI requests to a minimal project context."""

from __future__ import annotations

import argparse
import json
from dataclasses import dataclass


@dataclass(frozen=True)
class Route:
    name: str
    keywords: tuple[str, ...]
    allowed: tuple[str, ...]
    denied: tuple[str, ...]
    skills: tuple[str, ...]
    workflows: tuple[str, ...]
    seed_files: tuple[str, ...]


ROUTES: tuple[Route, ...] = (
    Route(
        "rtl-core",
        ("mac", "pe", "systolic", "array", "datapath", "npu_core", "mxe", "valid timing"),
        ("rtl/core/**", "rtl/include/**", "docs/study_guide/01_rtl_include/**", "docs/study_guide/02_rtl_core/**"),
        ("l6/**", "host/**", "rtl/fpga/**", "unrelated tb/**"),
        ("rtl-coding-guide",),
        ("verify-all.md",),
        ("rtl/core/systolic_array.sv", "docs/study_guide/02_rtl_core/06_systolic_array.md"),
    ),
    Route(
        "rtl-memory",
        ("sram", "bank", "psum", "accumulator", "memory", "buffer"),
        ("rtl/memory/**", "rtl/include/**", "docs/study_guide/04_rtl_memory/**"),
        ("l6/**", "host/**", "rtl/fpga/**", "unrelated rtl/core/**"),
        ("rtl-coding-guide",),
        ("verify-all.md",),
        ("rtl/memory/dp_sram_bank.sv", "docs/study_guide/04_rtl_memory/11_dp_sram_bank.md"),
    ),
    Route(
        "rtl-system",
        ("dma", "axi", "mmio", "system_top", "npu_system", "burst"),
        ("rtl/system/**", "rtl/include/**", "rtl/core/*top*", "docs/study_guide/05_rtl_system/**"),
        ("l6/** except replay boundary", "rtl/fpga/**"),
        ("rtl-coding-guide", "run-simulation"),
        ("verify-all.md",),
        ("rtl/system/dma_controller.sv", "docs/study_guide/05_rtl_system/13_dma_controller.md"),
    ),
    Route(
        "tb-verification",
        ("uvm", "testbench", "tb", "assert", "scoreboard", "verilator", "xsim", "coverage", "replay"),
        ("tb/**", "docs/study_guide/07_tb/**", "direct DUT files only"),
        ("l6/** except replay package boundary", "unrelated rtl internals"),
        ("run-simulation", "verification-debug"),
        ("verify-all.md",),
        ("tb/npu_uvm_pkg.sv", "docs/study_guide/07_tb/22_npu_uvm_pkg.md"),
    ),
    Route(
        "l6-toolchain",
        ("l6", "compiler", "ir", "fusion", "lowering", "scheduler", "quantize", "emitter", "cycle_sim", "roofline"),
        ("l6/src/l6_toolchain/**", "l6/tests/**", "docs/study_guide/08_l6_toolchain/**"),
        ("rtl/** except hardware contract docs", "tb/**", "host/**"),
        ("l6-compiler",),
        ("l6-export.md",),
        ("l6/src/l6_toolchain/ir.py", "docs/study_guide/08_l6_toolchain/28_ir.md"),
    ),
    Route(
        "fpga",
        ("fpga", "vivado", "pynq", "arty", "bitstream", "wrapper"),
        ("rtl/fpga/**", "vivado/** summaries", "docs/study_guide/06_rtl_fpga/**"),
        ("l6/**", "deep tb/**"),
        ("fpga-build",),
        (),
        ("rtl/fpga/fpga_core_bringup_top.sv", "docs/study_guide/06_rtl_fpga/README.md"),
    ),
    Route(
        "host",
        ("host", "driver", "allocator", "mmap", "replay_package", "pynq demo"),
        ("host/**", "docs/study_guide/09_host/**", "rtl/system/dma_controller.sv only if needed"),
        ("deep rtl/core/**", "l6/** unless replay format is asked"),
        ("workload-package",),
        (),
        ("host/npu_dma_controller.h", "docs/study_guide/09_host/46_npu_dma_controller.md"),
    ),
    Route(
        "study-roadmap",
        ("roadmap", "로드맵", "study", "학습", "교재", "강의", "pdf", "bookmark", "북마크"),
        ("docs/study_guide/README.md", "docs/study_guide/자료_수집_관리_계획.md", "selected roadmap docs"),
        ("source code unless explicitly requested",),
        ("doc-update",),
        (),
        ("docs/study_guide/README.md", "docs/study_guide/자료_수집_관리_계획.md"),
    ),
)


def score(route: Route, query: str) -> int:
    return sum(1 for keyword in route.keywords if keyword.lower() in query)


def choose_route(query: str) -> Route:
    q = query.lower()
    scored = sorted(((score(route, q), route) for route in ROUTES), key=lambda item: item[0], reverse=True)
    if scored[0][0] == 0:
        return next(route for route in ROUTES if route.name == "study-roadmap")
    return scored[0][1]


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--query", required=True, help="User request or topic to classify.")
    parser.add_argument("--pretty", action="store_true", help="Print indented JSON.")
    args = parser.parse_args()

    route = choose_route(args.query)
    result = {
        "route": route.name,
        "allowed_context": list(route.allowed),
        "denied_context": list(route.denied),
        "skills": list(route.skills),
        "workflows": list(route.workflows),
        "seed_files": list(route.seed_files),
        "policy": "Do not read denied context unless a boundary escalation is explicitly justified.",
    }
    print(json.dumps(result, ensure_ascii=False, indent=2 if args.pretty else None))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
