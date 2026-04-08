#!/usr/bin/env python3

import argparse
import json
import struct
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
WORKLOADS = ROOT / "workloads"


def read_json(path: Path):
    return json.loads(path.read_text(encoding="utf-8"))


def write_json(path: Path, data):
    path.write_text(json.dumps(data, indent=2) + "\n", encoding="utf-8")


def make_row_major_16x16(value_fn):
    rows = []
    for r in range(16):
        row = []
        for c in range(16):
            row.append(int(value_fn(r, c)))
        rows.append(row)
    return rows


def compute_golden_int8(acts, weights):
    # acts[k][row], weights[k][col]
    out = []
    for row in range(16):
        out_row = []
        for col in range(16):
            total = 0
            for k in range(16):
                total += int(acts[k][row]) * int(weights[k][col])
            out_row.append(total)
        out.append(out_row)
    return out


def fp16_bits_to_float(value):
    return struct.unpack(">e", int(value & 0xFFFF).to_bytes(2, byteorder="big", signed=False))[0]


def float_to_fp32(value):
    # Force IEEE-754 binary32 rounding at each arithmetic step.
    return struct.unpack(">f", struct.pack(">f", float(value)))[0]


def fp32_to_u32(value):
    return int.from_bytes(struct.pack(">f", float(value)), byteorder="big", signed=False)


def float_to_fp16_bits(value):
    return int.from_bytes(struct.pack(">e", float(value)), byteorder="big", signed=False)


def compute_golden_fp16_fp32_bits(acts, weights):
    # acts[k][row], weights[k][col]
    # Arithmetic policy: fp16 lane decode -> fp32 mul -> fp32 accumulate (round each step).
    out = []
    for row in range(16):
        out_row = []
        for col in range(16):
            acc = float_to_fp32(0.0)
            for k in range(16):
                act = fp16_bits_to_float(acts[k][row])
                wt = fp16_bits_to_float(weights[k][col])
                prod = float_to_fp32(act * wt)
                acc = float_to_fp32(acc + prod)
            out_row.append(fp32_to_u32(acc))
        out.append(out_row)
    return out


def write_golden_from_matrix(path: Path, mat):
    outputs = []
    for drain_addr in range(16):
        outputs.append(
            {
                "drain_addr": drain_addr,
                "global_row": drain_addr,
                "global_col_base": 0,
                "vector": [int(v) for v in mat[drain_addr]],
            }
        )
    write_json(path, {"layout": "drain_address_to_16xint32_vector_map", "outputs": outputs})


def build_manifest(package_id: str, description: str, compare: dict, source_notes: str):
    return {
        "manifest_version": "0.2-draft",
        "package_id": package_id,
        "op_type": "gemm_tile",
        "description": description,
        "source": {
            "origin": "streamlined_signoff_package_generator",
            "notes": source_notes,
        },
        "shape": {"m": 16, "k": 16, "n": 16},
        "tile": {"m_tile_base": 0, "n_tile_base": 0, "tile_rows": 16, "tile_cols": 16},
        "files": {"activations": "activations.json", "weights": "weights.json", "golden": "golden.json"},
        "execution": {
            "seq_len": 16,
            "k_tile_count": 1,
            "require_weight_preload": True,
            "acc_clear_policy": "first_pass_overwrite",
            "drain_addresses": list(range(16)),
        },
        "format": {
            "activation_layout": "row_major_16xint8_vectors",
            "weight_layout": "k_major_rows_of_16_columns",
            "golden_layout": "drain_address_to_16xint32_vector_map",
            "lane_order": "lane0_to_lowest_column_offset",
            "endianness": "little",
            "payload_encoding": "json",
        },
        "compare": compare,
        "system": {
            "memory": {
                "weights_src_addr": 0,
                "activations_src_addr": 8192,
                "weights_total_bytes": 256,
                "activations_total_bytes": 256,
            },
            "dma": {
                "weight_burst_len": 15,
                "weight_total_bursts": 1,
                "activation_burst_len": 15,
                "activation_total_bursts": 1,
            },
            "banks": {
                "initial_bank_sel": 0,
                "swap_before_weight_preload": True,
                "swap_before_execute": True,
            },
            "execution": {
                "weight_target": "inactive_weight_bank_then_pe_preload",
                "activation_target": "inactive_activation_bank_then_execute",
                "phase_sequence": [
                    "dma_weights",
                    "swap_banks",
                    "preload_weights",
                    "dma_activations",
                    "swap_banks",
                    "execute",
                    "flush",
                    "drain",
                ],
                "expected_dma_done_count": 2,
                "expected_npu_done_count": 1,
                "flush_cycles": 35,
            },
        },
    }


def generate_edge_packages():
    specs = [
        (
            "system_int8_edge_all_max_pos",
            "INT8 boundary: all activations and weights at +127.",
            lambda r, c: 127,
            lambda r, c: 127,
        ),
        (
            "system_int8_edge_all_min_neg",
            "INT8 boundary: all activations and weights at -128.",
            lambda r, c: -128,
            lambda r, c: -128,
        ),
        (
            "system_int8_edge_mixed_sign_checker",
            "INT8 boundary: mixed sign checker pattern using +/-127/128 extremes.",
            lambda r, c: 127 if ((r + c) % 2 == 0) else -128,
            lambda r, c: -128 if ((r * 3 + c) % 2 == 0) else 127,
        ),
    ]

    for package_id, desc, act_fn, wt_fn in specs:
        pkg = WORKLOADS / package_id
        if not pkg.exists():
            pkg.mkdir(parents=True)

        manifest = build_manifest(
            package_id=package_id,
            description=desc,
            compare={"mode": "exact", "require_exact_match": True},
            source_notes="Generated for INT8 edge-case signoff baseline.",
        )

        acts = make_row_major_16x16(act_fn)
        wts = make_row_major_16x16(wt_fn)
        golden = compute_golden_int8(acts, wts)

        write_json(pkg / "manifest.json", manifest)
        write_json(pkg / "activations.json", {"layout": "row_major_16xint8_vectors", "rows": acts})
        write_json(pkg / "weights.json", {"layout": "k_major_rows_of_16_columns", "rows": wts})
        write_golden_from_matrix(pkg / "golden.json", golden)


def generate_fp16_numeric_smoke_package():
    package_id = "system_fp16_numeric_smoke"
    pkg = WORKLOADS / package_id
    if not pkg.exists():
        pkg.mkdir(parents=True)

    manifest = build_manifest(
        package_id=package_id,
        description="FP16 numeric smoke package with FP16xFP16->FP32 golden accumulation.",
        compare={
            "mode": "tolerance",
            "require_exact_match": False,
            "abs_tolerance": 0.001,
            "relative_tolerance": 0.001,
        },
        source_notes="Generated for fp16 numeric smoke; golden uses fp16 decode and fp32 accumulation semantics.",
    )
    manifest["data_mode"] = "fp16"
    manifest["format"]["activation_layout"] = "row_major_16xint16_vectors"
    manifest["format"]["weight_layout"] = "k_major_rows_of_16_int16_columns"
    manifest["format"]["golden_layout"] = "drain_address_to_16xfp32_bits_vector_map"

    # Deterministic low-magnitude fp16 input patterns with exact representability.
    acts = make_row_major_16x16(lambda r, c: float_to_fp16_bits((((r * 3 + c * 5) % 9) - 4) / 2.0))
    wts = make_row_major_16x16(lambda r, c: float_to_fp16_bits((((r * 5 + c * 2) % 7) - 3) / 2.0))
    golden = compute_golden_fp16_fp32_bits(acts, wts)

    write_json(pkg / "manifest.json", manifest)
    write_json(pkg / "activations.json", {"layout": "row_major_16xint16_vectors", "rows": acts})
    write_json(pkg / "weights.json", {"layout": "k_major_rows_of_16_int16_columns", "rows": wts})
    write_golden_from_matrix(pkg / "golden.json", golden)


def update_splitk_and_forwarding_baseline():
    splitk_manifest = WORKLOADS / "system_reference_gemm_tile_m0_n0_k0to31_splitk" / "manifest.json"
    bankstress_manifest = WORKLOADS / "system_reference_gemm_tile_m0_n0_k0to31_splitk_bankstress" / "manifest.json"
    splitk_golden = WORKLOADS / "system_reference_gemm_tile_m0_n0_k0to31_splitk" / "golden.json"
    forwarding_manifest = WORKLOADS / "system_reference_forwarding_same_addr_m0_n0_k0to15" / "manifest.json"
    forwarding_golden = WORKLOADS / "system_reference_forwarding_same_addr_m0_n0_k0to15" / "golden.json"

    splitk = read_json(splitk_manifest)
    splitk_exec = splitk["system"]["execution"]
    splitk_exec["expected_npu_done_count"] = 2
    splitk_exec["passes"][1]["weights_src_addr"] = 512
    splitk_exec["passes"][1]["activations_src_addr"] = 8704
    write_json(splitk_manifest, splitk)

    bankstress = read_json(bankstress_manifest)
    bankstress_exec = bankstress["system"]["execution"]
    bankstress_exec["expected_npu_done_count"] = 2
    bankstress_exec["passes"][1]["weights_src_addr"] = 512
    bankstress_exec["passes"][1]["activations_src_addr"] = 8704
    write_json(bankstress_manifest, bankstress)

    # INT8 baseline after accumulator int32 fix:
    # split-k package drains 16 rows x 16 cols, each lane expected to 2400.
    write_golden_from_matrix(splitk_golden, [[2400] * 16 for _ in range(16)])

    forwarding = read_json(forwarding_manifest)
    forwarding["system"]["execution"]["expected_npu_done_count"] = 1
    write_json(forwarding_manifest, forwarding)
    write_json(
        forwarding_golden,
        {
            "layout": "drain_address_to_16xint32_vector_map",
            "outputs": [
                {
                    "drain_addr": 0,
                    "global_row": 0,
                    "global_col_base": 0,
                    "vector": [19200] * 16,
                }
            ],
        },
    )


def parse_args():
    parser = argparse.ArgumentParser(description="Generate streamlined L5 signoff package set.")
    parser.add_argument("--mode", choices=["int8", "fp16"], default="int8", help="Data mode package profile")
    return parser.parse_args()


def main():
    args = parse_args()
    if args.mode == "int8":
        generate_edge_packages()
        update_splitk_and_forwarding_baseline()
        print("[SIGNOFF PKG GEN] mode=int8 baseline updated")
    else:
        generate_fp16_numeric_smoke_package()
        print("[SIGNOFF PKG GEN] mode=fp16 numeric smoke package generated")


if __name__ == "__main__":
    main()
