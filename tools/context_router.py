#!/usr/bin/env python3
"""Convenience wrapper for the SiliconToAI context router skill."""

from __future__ import annotations

import runpy
from pathlib import Path


SCRIPT = Path(__file__).resolve().parents[1] / ".agents" / "skills" / "context-router" / "scripts" / "context_router.py"


if __name__ == "__main__":
    runpy.run_path(str(SCRIPT), run_name="__main__")
