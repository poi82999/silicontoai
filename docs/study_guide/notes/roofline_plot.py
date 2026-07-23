#!/usr/bin/env python3
"""Generate the sim_default Roofline figure as a dependency-free SVG.

Why no matplotlib: this repo ships the figure on a Jekyll/GitHub-Pages site, so a
hand-emitted SVG stays version-controllable (text, not a binary blob) and needs no
install. Re-implementing this in matplotlib is left as the hands-on exercise
(brief_01, Practice 1).

Run:  python docs/study_guide/notes/roofline_plot.py
Out:  docs/assets/roofline_sim_default.svg  + a markdown table on stdout.
"""
from __future__ import annotations
import math
from pathlib import Path

# --- machine (sim_default: rtl/include/npu_def_pkg.sv) -----------------------
PEAK_GOPS = 51.2          # 256 MAC x 2 ops x 100 MHz
BW_GBPS   = 3.2           # 256-bit AXI x 100 MHz / 8  (bytes/s)
RIDGE     = PEAK_GOPS / BW_GBPS   # = 16 ops/byte
# PYNQ-Z2 overlay: 32-bit control-plane -> BW 8x smaller, ridge slides right.
BW_PYNQ    = 0.4                  # 3.2 Gbit/s / 8
RIDGE_PYNQ = PEAK_GOPS / BW_PYNQ  # = 128 ops/byte


def ops(m, k, n):                       # 1 MAC = 2 ops
    return 2 * m * k * n


def bytes_(m, k, n, ie, we, oe):        # act + weight + output bytes
    return m * k * ie + k * n * we + m * n * oe


def analyse(m, k, n, ie, we, oe):
    oi = ops(m, k, n) / bytes_(m, k, n, ie, we, oe)
    perf = min(PEAK_GOPS, BW_GBPS * oi)
    return oi, perf


WORKLOADS = [
    ("16³",        16,   16,   16),
    ("64³",        64,   64,   64),
    ("256³",      256,  256,  256),
    ("1×2048²", 1, 2048, 2048),
]
# 16-bit slot (current) vs INT8 1-byte packing. Output stays INT32 (4B) either way.
SLOT = dict(ie=2, we=2, oe=4)
PACK = dict(ie=1, we=1, oe=4)

# --- log-log canvas ----------------------------------------------------------
W, H = 840, 560
ML, MR, MT, MB = 78, 34, 86, 92
PX0, PX1 = ML, W - MR
PY0, PY1 = MT, H - MB                    # top, bottom (pixels)
OI_MIN, OI_MAX = 0.5, 256.0
P_MIN, P_MAX = 1.0, 128.0
LXMIN, LXMAX = math.log10(OI_MIN), math.log10(OI_MAX)
LYMIN, LYMAX = math.log10(P_MIN), math.log10(P_MAX)


def X(oi):
    return PX0 + (math.log10(oi) - LXMIN) / (LXMAX - LXMIN) * (PX1 - PX0)


def Y(p):
    return PY1 - (math.log10(p) - LYMIN) / (LYMAX - LYMIN) * (PY1 - PY0)


# --- palette (dataviz reference, light surface) ------------------------------
SURFACE, INK, INK2, MUTED = "#fcfcfb", "#0b0b0b", "#52514e", "#898781"
GRID, AXIS = "#e1e0d9", "#c3c2b7"
S1, S2 = "#2a78d6", "#eb6834"            # slot1 blue = current, slot2 orange = packed

XTICKS = [0.5, 1, 2, 4, 8, 16, 32, 64, 128, 256]
YTICKS = [1, 2, 5, 10, 20, 50, 100]


def esc(s):
    return s.replace("×", "&#215;").replace("²", "&#178;").replace("³", "&#179;")


def txt(x, y, s, size=13, fill=INK, anchor="start", weight="400", style=""):
    return (f'<text x="{x:.1f}" y="{y:.1f}" font-size="{size}" fill="{fill}" '
            f'text-anchor="{anchor}" font-weight="{weight}" {style}>{esc(s)}</text>')


def main():
    p = []
    p.append(f'<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 {W} {H}" '
             f'font-family="system-ui,-apple-system,Segoe UI,sans-serif">')
    p.append(f'<rect x="0" y="0" width="{W}" height="{H}" fill="{SURFACE}" '
             f'stroke="rgba(11,11,11,0.10)"/>')

    # title
    p.append(txt(ML, 34, "Roofline — this NPU (sim_default)", 19, INK, weight="600"))
    p.append(txt(ML, 56, "16×16 INT8 @100 MHz, 256-bit AXI · "
                          "Peak 51.2 GOPS · BW 3.2 GB/s · Ridge = 16 ops/byte",
                 13, INK2))

    # gridlines + ticks
    for oi in XTICKS:
        x = X(oi)
        p.append(f'<line x1="{x:.1f}" y1="{PY0}" x2="{x:.1f}" y2="{PY1}" stroke="{GRID}"/>')
        lab = ("%g" % oi) if oi >= 1 else "0.5"
        p.append(txt(x, PY1 + 20, lab, 12, MUTED, "middle"))
    for pp in YTICKS:
        y = Y(pp)
        p.append(f'<line x1="{PX0}" y1="{y:.1f}" x2="{PX1}" y2="{y:.1f}" stroke="{GRID}"/>')
        p.append(txt(PX0 - 10, y + 4, "%g" % pp, 12, MUTED, "end"))

    # axis frame
    p.append(f'<line x1="{PX0}" y1="{PY1}" x2="{PX1}" y2="{PY1}" stroke="{AXIS}" stroke-width="1.5"/>')
    p.append(f'<line x1="{PX0}" y1="{PY0}" x2="{PX0}" y2="{PY1}" stroke="{AXIS}" stroke-width="1.5"/>')
    p.append(txt((PX0 + PX1) / 2, H - 34, "Operational Intensity  (ops / byte, log)", 13, INK2, "middle"))
    p.append(f'<text x="22" y="{(PY0 + PY1) / 2:.1f}" font-size="13" fill="{INK2}" '
             f'text-anchor="middle" transform="rotate(-90 22 {(PY0 + PY1) / 2:.1f})">'
             f'Performance  (GOPS, log)</text>')

    # --- PYNQ overlay: same peak, 8x smaller BW -> ridge slides 16 -> 128 -----
    # shade the band where sim is compute-bound but PYNQ is still memory-bound
    bx0, bx1 = X(RIDGE), X(RIDGE_PYNQ)
    p.append(f'<rect x="{bx0:.1f}" y="{PY0}" width="{bx1 - bx0:.1f}" height="{PY1 - PY0}" '
             f'fill="{MUTED}" opacity="0.06"/>')
    p.append(txt((bx0 + bx1) / 2, PY0 + 34, "sim: compute-bound", 11, MUTED, "middle"))
    p.append(txt((bx0 + bx1) / 2, PY0 + 49, "PYNQ: still memory-bound", 11, MUTED, "middle"))
    # PYNQ memory diagonal (parallel to sim, shifted right x8; enters plot at y=1)
    pynq = [(1.0 / BW_PYNQ, 1.0), (RIDGE_PYNQ, PEAK_GOPS)]
    pp_pts = " ".join(f"{X(oi):.1f},{Y(pf):.1f}" for oi, pf in pynq)
    p.append(f'<polyline points="{pp_pts}" fill="none" stroke="{MUTED}" stroke-width="1.8" '
             f'stroke-dasharray="7 4"/>')
    p.append(txt(X(19), Y(BW_PYNQ * 19) - 7, "PYNQ overlay · BW 0.4 GB/s",
                 11.5, MUTED, "start", style='font-style="italic"'))

    # sim roofline (primary, bold): diagonal to ridge, then flat
    rl = [(OI_MIN, min(PEAK_GOPS, BW_GBPS * OI_MIN)), (RIDGE, PEAK_GOPS), (OI_MAX, PEAK_GOPS)]
    pts = " ".join(f"{X(oi):.1f},{Y(pf):.1f}" for oi, pf in rl)
    p.append(f'<polyline points="{pts}" fill="none" stroke="{INK}" stroke-width="2.6" '
             f'stroke-linejoin="round"/>')
    p.append(txt(X(150), Y(PEAK_GOPS) - 9, "Peak Compute 51.2", 12, INK2, "middle"))

    # ridge guides: sim (16) and PYNQ (128)
    for oi_r, lab, dash in ((RIDGE, "Ridge = 16 (sim)", "5 4"),
                            (RIDGE_PYNQ, "Ridge = 128 (PYNQ)", "2 4")):
        xr = X(oi_r)
        p.append(f'<line x1="{xr:.1f}" y1="{Y(PEAK_GOPS):.1f}" x2="{xr:.1f}" y2="{PY1}" '
                 f'stroke="{MUTED}" stroke-width="1.3" stroke-dasharray="{dash}"/>')
        p.append(txt(xr - 7, PY1 - 8, lab, 11.5, INK2, "end", style='font-style="italic"'))

    # region labels (primary sim ceiling)
    p.append(txt(X(2.4), PY1 - 26, "memory-bound", 12, MUTED, "middle"))

    # workload points: 16-bit slot (filled blue) -> INT8 packed (hollow orange)
    rows = []
    lblpos = {  # per-shape label offset (dx, dy, anchor) to dodge collisions
        "16³": (-12, -12, "end"),
        "64³": (10, 24, "start"),
        "256³": (10, 24, "start"),
        "1×2048²": (12, -10, "start"),
    }
    for name, m, k, n in WORKLOADS:
        oi2, pf2 = analyse(m, k, n, **SLOT)
        oi1, pf1 = analyse(m, k, n, **PACK)
        rows.append((name, oi2, pf2, oi1, pf1))
        x2, y2, x1, y1 = X(oi2), Y(pf2), X(oi1), Y(pf1)
        # connector 2B -> packed
        p.append(f'<line x1="{x2:.1f}" y1="{y2:.1f}" x2="{x1:.1f}" y2="{y1:.1f}" '
                 f'stroke="{S2}" stroke-width="1.4" stroke-dasharray="3 3" opacity="0.8"/>')
        # packed (hollow)
        p.append(f'<circle cx="{x1:.1f}" cy="{y1:.1f}" r="6" fill="{SURFACE}" '
                 f'stroke="{S2}" stroke-width="2.2"/>')
        # current (filled) — 2px surface ring so overlaps stay legible
        p.append(f'<circle cx="{x2:.1f}" cy="{y2:.1f}" r="6.5" fill="{S1}" '
                 f'stroke="{SURFACE}" stroke-width="2"/>')
        dx, dy, anc = lblpos[name]
        p.append(txt(x2 + dx, y2 + dy, name, 12.5, INK, anc, weight="600"))

    # legend (top-left inside plot)
    lx, ly = PX0 + 14, PY0 + 16
    p.append(f'<circle cx="{lx}" cy="{ly}" r="6.5" fill="{S1}" stroke="{SURFACE}" stroke-width="2"/>')
    p.append(txt(lx + 14, ly + 4, "16-bit slot (current)", 12.5, INK2))
    p.append(f'<circle cx="{lx}" cy="{ly + 22}" r="6" fill="{SURFACE}" stroke="{S2}" stroke-width="2.2"/>')
    p.append(txt(lx + 14, ly + 26, "INT8 1-byte packed → OI rises", 12.5, INK2))

    p.append("</svg>")

    out = Path(__file__).resolve().parents[2] / "assets" / "roofline_sim_default.svg"
    out.write_text("\n".join(p), encoding="utf-8")
    print(f"wrote {out}")

    # markdown table for the analysis doc
    print("\n| shape | OI (16-bit) | perf | OI (packed) | perf | OI gain |")
    print("|---|---|---|---|---|---|")
    for name, oi2, pf2, oi1, pf1 in rows:
        print(f"| {name} | {oi2:.3g} | {pf2:.4g} | {oi1:.3g} | {pf1:.4g} | {oi1/oi2:.3f}× |")


if __name__ == "__main__":
    main()
