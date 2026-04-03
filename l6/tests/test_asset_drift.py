from __future__ import annotations

import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
L6_DIR = ROOT / "l6"
if str(L6_DIR) not in sys.path:
    sys.path.insert(0, str(L6_DIR))

from regenerate_fixed_replay_assets import check_fixed_replay_assets


def test_committed_replay_assets_match_freshly_generated() -> None:
    assert check_fixed_replay_assets(), "Committed replay assets have drifted from regenerated output. Run: python l6/regenerate_fixed_replay_assets.py"
