# Core Replay Loader Report

## Scope

This document defines the recommended L4 core replay loader design for the current repository.

Its purpose is to bridge the gap between:

- the L2 workload package manifest
- the existing hand-written Verilator core testbench
- a future reusable core replay flow

This document answers three questions.

1. What the loader is responsible for
2. How it should interpret the current manifest schema
3. What execution sequence and mismatch reporting behavior it should implement

---

## Current Starting Point

The current core-level Verilator testbench is implemented in `tb/main.cpp`.

That testbench currently:

- resets the DUT
- loads one hard-coded weight tile
- drives one hard-coded activation pattern
- performs one overwrite pass and one accumulate pass
- waits a fixed flush interval
- drains one hard-coded address
- prints pass or fail text directly from hand-written logic

This is useful for sanity checking, but it is not a replay framework.

L4 requires the same flow to be driven by package metadata rather than by baked-in stimulus values.

---

## What The Core Replay Loader Is

The core replay loader is the component that reads one workload package manifest and turns it into a deterministic sequence of DUT-level operations for `npu_core_top`.

It is not a compiler.
It is not a system runtime.
It is not a DMA model.

It is a narrow adapter between:

- manifest fields
- payload files
- core-level DUT pins

In practical terms, the loader should replace hard-coded values in the current Verilator testbench with package-driven behavior.

---

## Loader Inputs

The first loader version should accept:

1. A package directory path
2. The package manifest file
3. The payload files referenced by that manifest

Optional later inputs may include:

- CLI flags for verbose tracing
- a specific drain subset override
- a mismatch limit override

But the first design should remain package-first.

---

## Loader Outputs

The loader should produce two classes of output.

### DUT-side output

- a deterministic sequence of pin-level operations on `npu_core_top`

### Human/reporting output

- package id
- phase progress
- pass/fail result
- mismatch details with global coordinates
- summary counters

The loader should also return a process exit code that distinguishes success from replay failure.

---

## Current DUT Pin Contract

At core level, the loader drives or observes the following interface on `npu_core_top`.

### Driven by the loader

- `sram_act_in`
- `sram_weight_in`
- `weight_load_en`
- `acc_valid`
- `acc_clear`
- `acc_addr`
- `drain_re`
- `drain_addr`
- `rst_n`
- `clk`

### Observed by the loader

- `psum_drain_out`

This is intentionally narrower than system replay because core replay bypasses DMA and bank management.

---

## Loader Responsibilities

The first loader version should be responsible for the following.

1. Parse and validate the manifest.
2. Load activation, weight, and golden payload files.
3. Validate that payload sizes are consistent with manifest shape metadata.
4. Reset the DUT into a known state.
5. For each required K pass:
   - preload the weight tile
   - drive activation rows
   - apply the correct overwrite or accumulate policy
6. Wait the contract-defined flush interval.
7. Drain the requested addresses.
8. Convert drained vectors into global output coordinates.
9. Compare against golden data.
10. Emit structured mismatch reports.

Anything outside those ten items should be treated as future scope unless required immediately.

---

## Loader Architecture

The first clean design is a small set of separable responsibilities.

### 1. Manifest parser

Purpose:

- parse `manifest.json`
- validate required fields
- expose typed values to the rest of the loader

### 2. Payload loader

Purpose:

- load activation rows
- load weight rows grouped by K pass
- load golden vectors indexed by drain address and global coordinates

### 3. Replay executor

Purpose:

- convert parsed metadata into actual DUT pin toggles and clock steps

### 4. Comparator

Purpose:

- compare drained vectors against expected vectors
- emit mismatch records

### 5. Reporter

Purpose:

- print concise replay progress and final status

This separation keeps the first implementation testable and prevents all logic from collapsing into one monolithic `main.cpp`.

---

## Recommended Execution Sequence

The loader should execute one package in the following order.

### 1. Reset phase

- drive `rst_n = 0`
- clear all driven data/control inputs
- tick for a small fixed reset interval
- drive `rst_n = 1`

### 2. Package validation phase

- verify required manifest fields exist
- verify payload files exist
- verify `execution.seq_len >= 1`
- verify `tile.tile_cols == 16`
- verify `shape.k` is compatible with `execution.k_tile_count`

If any check fails, stop with a package error before touching replay execution.

### 3. Per-K-pass replay phase

For each K pass `p` in the range `0..execution.k_tile_count-1`:

1. Load the 16 preload rows for that pass into `sram_weight_in`.
2. Assert one-hot `weight_load_en` across 16 cycles.
3. Clear weight inputs after preload.
4. For each activation row `r` in the range `0..execution.seq_len-1`:
   - drive the row vector on `sram_act_in`
   - assert `acc_valid = 1`
   - drive `acc_addr = r`
   - drive `acc_clear` according to pass policy
   - tick once
5. Deassert `acc_valid` and clear activation inputs after the row loop.

### 4. Flush phase

- tick for the contract-defined flush interval

Current recommendation:

- use 35 cycles to align with the current system-level contract and existing directed flows

### 5. Drain phase

For each drain address listed in `execution.drain_addresses`:

1. drive `drain_addr`
2. assert `drain_re = 1`
3. tick once to issue the request
4. deassert `drain_re`
5. tick once for the documented one-cycle drain latency
6. sample `psum_drain_out`

### 6. Compare phase

- map the drained vector to global coordinates using manifest tile bases
- compare all 16 lanes against golden data
- record mismatches

---

## Mapping Rules Used By The Loader

The loader should use the following output mapping rules, inherited from the L0 contract.

For a drained vector sampled from `drain_addr` with lane `j`:

$$
\text{global row} = tile.m\_tile\_base + drain\_addr
$$

$$
\text{global col} = tile.n\_tile\_base + j
$$

The loader must not invent a different output mapping.

---

## Overwrite And Accumulate Policy Interpretation

The first loader version should interpret `execution.acc_clear_policy` declaratively.

Recommended policy mapping:

- `first_pass_overwrite`
  - K pass `0`: `acc_clear = 1`
  - K pass `1..end`: `acc_clear = 0`

- `always_overwrite`
  - all K passes: `acc_clear = 1`

- `always_accumulate`
  - all K passes: `acc_clear = 0`

The first repository reference package uses `first_pass_overwrite`.

---

## Payload Interpretation Rules

### Activation payload

For `row_major_16xint8_vectors`:

- one entry corresponds to one execute step
- the loader maps 16 scalar lane values into `sram_act_in`

### Weight payload

For `k_major_rows_of_16_columns`:

- one entry corresponds to one preload step
- 16 entries are required for one K pass
- for multiple K passes, the loader consumes the next group of 16 preload rows per pass

### Golden payload

For `drain_address_to_16xint32_vector_map`:

- the loader should build a lookup table indexed by `drain_addr`
- each record must also carry enough metadata to reconstruct global output coordinates in reports

---

## Mismatch Report Format

The first mismatch report should be plain text and must include at least:

- package id
- drain address
- lane index
- global row
- global col
- expected value
- observed value

Recommended format:

```text
[MISMATCH] package=<id> drain_addr=<addr> lane=<lane> global=(row=<r>, col=<c>) expected=<exp> observed=<obs>
```

This is enough to debug contract errors without yet requiring a database or machine-readable result schema.

---

## Success Report Format

On success, the loader should print a concise summary including:

- package id
- number of K passes executed
- number of drained rows checked
- number of vector lanes checked
- pass status

Recommended format:

```text
[REPLAY PASS] package=<id> k_passes=<k> drained_rows=<rows> checked_lanes=<lanes>
```

---

## Error Classes

The loader should distinguish failures into three categories.

### 1. Package errors

Examples:

- missing manifest field
- incompatible shapes
- missing payload file
- unsupported payload layout

Interpretation:

- replay cannot begin because the package is malformed

### 2. Replay driver errors

Examples:

- unsupported policy encoding
- attempt to drive an illegal sequence according to L0 rules

Interpretation:

- the loader implementation or package-to-driver mapping is wrong

### 3. DUT mismatches

Examples:

- replay runs to completion but drained values do not match golden data

Interpretation:

- the hardware behavior, data interpretation, or contract assumptions disagree with the expected result

---

## First Implementation Recommendation

The first code implementation should modify `tb/main.cpp` as little as possible structurally.

Recommended path:

1. keep the existing Verilator DUT/tick scaffolding
2. move hard-coded stimulus into helper functions or small helper classes
3. add a manifest-and-payload parser for the repository reference package
4. preserve a single executable entry point

This avoids premature framework complexity while still creating a real manifest-driven replay flow.

---

## L4 Entry Criteria

L4 may begin implementation when all of the following are true.

1. L0 signal semantics are closed.
2. One L2 manifest schema is fixed.
3. One reference package exists in the repository.
4. The loader execution sequence is documented clearly enough to code directly.

Those conditions are now satisfied by the current document set.

---

## Immediate Next Step

The immediate next step after this document is not another schema discussion.

It is to implement the first manifest-driven replay path against the repository reference package in the Verilator core testbench.

That implementation should target correctness and readability first.