# L6 Signed-Int8 Alignment Design Note

## Purpose

This note lists the concrete RTL, loader, and toolchain changes required to move the repository from the current byte-compatible replay subset to the long-term signed-int8 lane contract.

It is intentionally short and implementation-oriented.

---

## Current State Summary

- L6 package generation already models activation and weight tensors with `numpy.int8` on the Python side.
- Replay-ready committed assets stay in a non-negative byte-compatible subset.
- `host/replay_package.h` currently parses activation and weight rows into `uint8_t` lanes.
- `rtl/mac_pe.sv` currently declares `act_in`, `weight_in`, and `weight_reg` as unsigned `logic [7:0]`.

Because of that mismatch, negative lane values are meaningful in study packages but are not yet replay-safe architectural inputs.

---

## Required RTL Changes

### 1. MAC PE signedness alignment

Files:

- `rtl/mac_pe.sv`

Required changes:

- change activation and weight ports from unsigned `logic [7:0]` to signed 8-bit declarations or an equivalent explicit signed cast policy
- make `weight_reg` signed as well
- ensure the multiply path is a signed 8x8 -> signed 32 contribution before accumulation
- keep the 32-bit accumulation domain unchanged unless a wider accumulator policy is introduced separately

### 2. Datapath propagation audit

Files to inspect after PE change:

- `rtl/systolic_data_setup.sv`
- `rtl/systolic_array_16x16.sv`
- `rtl/npu_core_top.sv`
- `rtl/npu_system_top.sv`

Required checks:

- confirm that activation and weight buses preserve signed-lane intent without silent zero-extension
- confirm that preload and execute paths treat the stored lane bits consistently
- confirm that no intermediate unpack/pack step implicitly reinterprets signed lanes as unsigned arithmetic quantities

### 3. Accumulator contract stability check

Files:

- `rtl/psum_accumulator_buffer.sv`

Required outcome:

- accumulator storage can remain 32-bit lane-wise
- only verify that signed PE output contributions arrive correctly before buffer accumulation

---

## Required Loader And Replay Changes

### 1. Replay payload parsing

Files:

- `host/replay_package.h`

Required changes:

- replace `uint8_t` activation/weight lane storage with `int8_t` or an equivalent signed-lane representation
- preserve exact 8-bit bit patterns while ensuring arithmetic interpretation is signed at the point of DUT drive
- keep golden vectors as 32-bit signed integers

### 2. Manifest and payload interpretation

Decision to make explicitly:

- either keep the current layout names and redefine their lane semantics as signed-int8
- or add an explicit format marker such as signed lane encoding in the manifest

Recommended direction:

- prefer explicit format metadata if backward compatibility with older byte-compatible assets matters
- otherwise a repo-wide contract bump is simpler and less ambiguous

### 3. Replay regression split

Required test structure:

- keep current byte-compatible committed assets until the signed path is fully aligned
- add generated-only negative-lane smoke cases first
- promote signed-lane cases to committed assets only after RTL and loader alignment is complete

---

## Required L6 Toolchain Changes

### 1. Replay-bound validation policy

Files:

- `l6/src/l6_toolchain/replay_bridge.py`
- optionally `l6/src/l6_toolchain/validator.py`

Near-term:

- reject replay-bound negative lane values while the transition subset is active

After signed alignment:

- replace that restriction with signed-int8 range enforcement `[-128, 127]`

### 2. Documentation and asset policy

Files:

- `docs/l6_arithmetic_semantics_report.md`
- committed replay asset READMEs under `workloads/`
- `l6/regenerate_fixed_replay_assets.py`

Required outcome:

- fixed assets clearly state whether they are transition-mode or signed-int8 assets
- regenerate script remains the only source of truth for committed replay assets

---

## Recommended Execution Order

1. Add transition-mode replay-bound rejection for negative lanes.
2. Add generated-only negative-lane smoke cases that currently fail before replay execution.
3. Convert RTL lane arithmetic to signed-int8 semantics.
4. Convert replay loader row parsing and DUT drive semantics to signed-int8.
5. Add generated signed-int8 replay smoke that must pass.
6. Only then consider committed signed-int8 fixed replay assets.

This keeps current regression green while making the signed-int8 target explicit and testable.