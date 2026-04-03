# L6 Signed-Int8 RTL And Loader Checklist

## Purpose

This checklist breaks the signed-int8 alignment work into the smallest concrete file-level tasks for the RTL and replay loader path.

It is the execution companion to `docs/l6_signed_int8_alignment_design_note.md`.

---

## A. RTL Signedness Checklist

### A1. PE lane declarations

Files:

- `rtl/mac_pe.sv`

Checklist:

- [ ] change `act_in` to signed 8-bit lane intent
- [ ] change `weight_in` to signed 8-bit lane intent
- [ ] change `weight_reg` to signed 8-bit storage
- [ ] confirm multiply expression is explicitly signed before 32-bit accumulation
- [ ] confirm no unintended zero-extension remains in the MAC path

### A2. Array propagation audit

Files:

- `rtl/systolic_data_setup.sv`
- `rtl/systolic_array_16x16.sv`
- `rtl/npu_core_top.sv`

Checklist:

- [ ] trace activation lane signedness from SRAM-fed input to PE input
- [ ] trace weight lane signedness from preload path to PE storage
- [ ] verify packed/unpacked array declarations preserve signed intent
- [ ] verify generated Verilator warnings do not increase after signedness change

### A3. System integration audit

Files:

- `rtl/npu_system_top.sv`

Checklist:

- [ ] confirm system-level SRAM read data reaches core without signedness loss
- [ ] confirm execute/preload mode behavior is unchanged except lane interpretation
- [ ] re-check split-K, forwarding, and drain paths after signedness change

### A4. Accumulator stability check

Files:

- `rtl/psum_accumulator_buffer.sv`

Checklist:

- [ ] keep accumulator lane width at 32-bit unless a separate width decision is made
- [ ] verify PE output signed contributions are accumulated as intended
- [ ] verify same-address forwarding behavior is unchanged numerically

---

## B. Loader Signed-Int8 Preparation Checklist

### B1. Raw lane storage abstraction

Files:

- `host/replay_package.h`

Checklist:

- [x] stop hard-wiring row storage usage directly to raw `uint8_t` spellings everywhere
- [x] introduce explicit replay row aliases/helpers that separate raw stored bits from future signed interpretation
- [ ] introduce a manifest-visible or loader-visible signed-lane mode decision when contract is ready

### B2. Signed interpretation helper path

Files:

- `host/replay_package.h`
- `tb/main.cpp`
- `tb/system_replay_main.cpp`

Checklist:

- [ ] add one canonical helper for converting raw 8-bit lane bits to signed-int8 values
- [ ] use that helper at DUT drive boundaries when signed mode is enabled
- [ ] keep current byte-compatible mode available until RTL signedness lands

### B3. Memory model and pack path audit

Files:

- `tb/main.cpp`
- `tb/system_replay_main.cpp`

Checklist:

- [x] replace direct row type spellings with replay row aliases where practical
- [ ] verify pack/write helpers still preserve exact 8-bit patterns
- [ ] verify signed interpretation happens only at intended arithmetic boundaries, not during byte transport

---

## C. Regression Gate Checklist

Checklist:

- [x] current replay bridge rejects negative replay-bound lane values in transition mode
- [x] generated-only signed-int8 alignment probe exists and currently fails before replay execution
- [ ] add generated signed-int8 replay PASS case after RTL and loader alignment lands
- [ ] promote signed-int8 case to committed fixed asset only after end-to-end replay is green

---

## Exit Condition For This Checklist

This checklist is complete when:

- RTL lane arithmetic is signed-int8 aligned
- replay loader can interpret payload lanes in signed-int8 mode without ambiguity
- generated signed-int8 smoke passes end-to-end
- current transition subset is no longer needed for new replay-ready assets