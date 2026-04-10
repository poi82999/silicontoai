# L6 Signed-Int8 Design And Checklist

> Consolidated from `l6_signed_int8_alignment_design_note.md` (design) and `l6_signed_int8_rtl_loader_checklist.md` (execution checklist).

## Purpose

This document records the concrete RTL, loader, and toolchain changes required to move the repository from the byte-compatible replay subset to the signed-int8 lane contract, and tracks their execution status.

---

## Current State (Post-Alignment)

The signed-int8 path is **active**:

- `rtl/mac_pe.sv` performs signed 8×8 MAC.
- `tb/main.cpp` and `tb/system_replay_main.cpp` apply a signed-interpretation helper at DUT drive boundaries while preserving raw two's-complement lane bits.
- L6 package generation models activation and weight tensors with `numpy.int8`.
- Replay-ready committed assets include signed-int8 edge cases (`system_int8_edge_*`).

---

## RTL Changes (Complete)

### MAC PE signedness alignment

File: `rtl/mac_pe.sv`

- [x] Activation and weight ports use signed 8-bit lane intent
- [x] `weight_reg` stores signed values
- [x] Multiply path is signed 8×8 → signed 32-bit before accumulation
- [x] No unintended zero-extension remains in the MAC path

### Datapath propagation

Files: `rtl/systolic_data_setup.sv`, `rtl/systolic_array_16x16.sv`, `rtl/npu_core_top.sv`, `rtl/npu_system_top.sv`

- [x] Activation and weight buses preserve signed-lane intent
- [x] Preload and execute paths treat stored lane bits consistently
- [x] No intermediate unpack/pack step reinterprets signed lanes as unsigned

### Accumulator stability

File: `rtl/psum_accumulator_buffer.sv`

- [x] 32-bit lane-wise accumulator storage unchanged
- [x] Signed PE output contributions arrive correctly before accumulation

---

## Loader And Replay Changes (Complete)

### Replay payload parsing

File: `host/replay_package.h`

- [x] Signed-lane representation with explicit signed-interpretation helper
- [x] Exact 8-bit bit patterns preserved; arithmetic interpretation is signed at DUT drive point
- [x] Golden vectors remain 32-bit signed integers

### Signed interpretation helper

Files: `tb/main.cpp`, `tb/system_replay_main.cpp`

- [x] Canonical helper for converting raw 8-bit lane bits to signed-int8 at DUT drive boundaries
- [x] Current byte-compatible mode available alongside signed mode

---

## L6 Toolchain Changes (Complete)

### Replay-bound validation

Files: `l6/src/l6_toolchain/replay_bridge.py`, `l6/src/l6_toolchain/validator.py`

- [x] Signed-int8 range enforcement [-128, 127] active

### Committed assets

- [x] Fixed assets clearly state signed-int8 status
- [x] `l6/regenerate_fixed_replay_assets.py` is the single source of truth for committed replay assets
- [x] Generated signed-int8 smoke cases pass end-to-end

---

## Execution History

The original recommended execution order was followed:

1. ~~Add transition-mode replay-bound rejection for negative lanes~~
2. ~~Add generated-only negative-lane smoke cases~~
3. ~~Convert RTL lane arithmetic to signed-int8~~
4. ~~Convert replay loader to signed-int8~~
5. ~~Add generated signed-int8 replay smoke (passing)~~
6. ~~Promote committed signed-int8 fixed replay assets~~

All steps complete. The signed-int8 contract is now the active default.
