# Workload Package Report

## Scope

This document defines the L2 workload package concept for the current repository.

Its purpose is to answer four questions.

1. What a workload package is
2. What a manifest is responsible for
3. Which fields are required to replay one package on the current 16x16 NPU contract
4. How the package should be interpreted by core replay and system replay flows

This document does not redefine any hardware semantics from the functional contract.
Instead, it instantiates those semantics for one replayable workload tile.

---

## What A Workload Package Is

A workload package is the smallest self-contained bundle of files that allows one hardware workload tile to be replayed and checked without embedding workload-specific assumptions into the testbench.

In practical terms, a workload package contains two kinds of information.

1. Payload files
- activation data
- weight data
- golden output data
- optional auxiliary metadata such as model layer name or source tensor coordinates

2. Interpretation metadata
- file paths
- tensor and tile shapes
- execution order
- accumulator policy
- output coordinate mapping
- comparison rules

The interpretation metadata is the manifest.

---

## What The Manifest Does

The manifest is the execution contract for one workload package.

If the raw dump files are the parts box, the manifest is the assembly instruction sheet.

Without the manifest, the replay environment may have bytes, but it does not know:

- which file is activation data versus weight data
- whether the package represents one K-chunk or a full output tile
- which 16-column output group is being produced
- how many execute steps are required
- whether the first pass should overwrite or accumulate
- which accumulator addresses or output coordinates should be checked
- how drained vectors map back to global output tensor coordinates

The manifest therefore serves as the package entry point.

---

## L2 Design Goal

For this repository, L2 does not need a compiler-complete packaging format.

The immediate goal is narrower and more practical.

- define one replayable tile format
- make it possible to run that tile in core replay without hand-editing the testbench
- make output comparison deterministic and contract-driven
- make the same package concept extensible to later system replay

That means the first manifest schema should favor clarity and determinism over generality.

---

## Package Directory Structure

The recommended minimum directory layout is:

```text
workloads/
  <package_id>/
    manifest.json
    activations.bin
    weights.bin
    golden.json
```

Optional extensions may add files such as:

- `README.md`
- `tensor_meta.json`
- `source_trace.json`
- `expected_stats.json`

The manifest must remain the single required entry point.

For the first repository-hosted reference package, a human-readable JSON payload format is also acceptable.
That makes the package easy to inspect while the replay loader format is still being designed.

---

## Package Granularity

The current hardware contract naturally supports a package granularity of one output tile for one `n_tile` and one or more `k_tile` passes.

That means a package should normally represent:

$$
A[M \times K] \times W[K \times 16] \rightarrow C[M \times 16]
$$

where:

- `M` is the number of output rows covered by this package
- `K` may be represented internally as one or more 16-wide `k_tile` chunks
- the output width of one package is one 16-column tile

This is the cleanest fit for the current 16-lane drain interface and the current accumulator coordinate contract.

---

## Manifest Responsibilities

The manifest must provide enough information to answer the following.

### Identity

- Which package is this?
- Which model/layer/tile does it correspond to?

### Shape

- What are the logical `M`, `K`, and `N` values for this package?
- How many `k_tile` passes are needed?

### Mapping

- What is the global output row base?
- What is the global output column base for this 16-column tile?
- How do local accumulator outputs map to global output coordinates?

### Execution

- Which files contain activations and weights?
- In what order should weight preload and execute passes run?
- Which pass uses overwrite semantics and which passes use accumulate semantics?

### Checking

- Which drained addresses must be compared?
- Which global output coordinates do the drained lanes correspond to?
- Is comparison exact or tolerance-based?

---

## Required Manifest Fields

The following fields are the recommended minimum schema for L2.

### Top-level identity

- `manifest_version`
- `package_id`
- `op_type`
- `description`
- `data_mode` (optional, recommended)

`data_mode` guideline:

- `int8`: 현재 baseline sign-off 경로 (exact compare)
- `fp16`: 실험/스모크 경로 (tolerance compare metadata 권장)

### Logical shape

- `shape.m`
- `shape.k`
- `shape.n`

### Tile placement

- `tile.m_tile_base`
- `tile.n_tile_base`
- `tile.tile_rows`
- `tile.tile_cols`

### Data files

- `files.activations`
- `files.weights`
- `files.golden`

Rule:

- the first L2 reference package stored in this repository may use JSON payload files for readability
- later performance-oriented package variants may switch activation and weight payloads to binary without changing the manifest concept

### Hardware execution contract

- `execution.seq_len`
- `execution.k_tile_count`
- `execution.require_weight_preload`
- `execution.acc_clear_policy`
- `execution.drain_addresses`

Optional core-stress extensions:

- `execution.acc_addr_sequence`
- `execution.acc_clear_sequence`

Optional system-replay verification extensions:

- `system.execution.verification_acc_addr_override`
- `system.execution.verification_one_shot_acc_clear`
- `system.execution.expect_forwarding_hit`

### Format metadata

- `format.activation_layout`
- `format.weight_layout`
- `format.golden_layout`
- `format.lane_order`
- `format.endianness`

### Comparison metadata

- `compare.mode`
- `compare.require_exact_match`

Recommended extension fields for tolerance mode:

- `compare.abs_tolerance`
- `compare.relative_tolerance`

Policy guideline:

- INT8 baseline: `compare.mode = exact`
- FP16 exploratory path: `compare.mode = tolerance` with explicit tolerance fields

---

## Recommended Field Semantics

### `manifest_version`

Purpose:

- version the package schema independently of the RTL

Rule:

- this must change when package interpretation rules change incompatibly

### `package_id`

Purpose:

- uniquely identify one replay bundle

Rule:

- this should be stable enough to appear in replay logs and mismatch reports

### `op_type`

Purpose:

- identify the logical operation class such as `gemm_tile` or `conv_im2col_tile`

Rule:

- L2 should start with `gemm_tile` unless a real convolution-origin package is already available

### `shape.m`, `shape.k`, `shape.n`

Purpose:

- capture the logical matrix sizes represented by this package before hardware tiling interpretation

Rule:

- for the first L2 iteration, `shape.n` should normally be `16` because one package should cover one 16-column output tile

### `tile.m_tile_base`, `tile.n_tile_base`

Purpose:

- provide the global output coordinate base required by the L0 mapping contract

Rule:

- these fields are mandatory even when their value is `0`

### `tile.tile_rows`, `tile.tile_cols`

Purpose:

- state the local tile extent represented by this package

Rule:

- `tile.tile_cols` should be `16` in the current architecture unless a later packed-multi-tile format is introduced

### `execution.seq_len`

Purpose:

- define the number of activation vectors to execute in each pass

Rule:

- this maps directly to `mmio_npu_seq_len`
- it must be at least `1`
- for the simplest package design, `execution.seq_len == tile.tile_rows`

### `execution.k_tile_count`

Purpose:

- state how many 16-wide reduction passes are required

Rule:

- `execution.k_tile_count = shape.k / 16` for fully packed 16-wide K chunks in the current format
- if partial K tails are later allowed, the manifest must explicitly say so rather than assuming padding silently

### `execution.require_weight_preload`

Purpose:

- state whether each pass requires a weight preload phase

Rule:

- for the current RTL-driven contract, this should normally be `true`

### `execution.acc_clear_policy`

Purpose:

- define overwrite versus accumulate behavior across K passes

Recommended encoding:

- `first_pass_overwrite`
- `subsequent_pass_accumulate`

Rule:

- the manifest should describe policy declaratively rather than duplicating low-level MMIO waveforms

### `execution.drain_addresses`

Purpose:

- identify which accumulator rows must be drained for checking

Rule:

- for the first L2 design, this should normally be a contiguous list from `0` to `tile.tile_rows - 1`

### `execution.acc_addr_sequence`

Purpose:

- override the default row-major accumulator address progression in the core replay runner

Rule:

- this field is optional and intended for dedicated core-stress packages rather than normal GEMM tiles
- when present, its length must equal `execution.seq_len`
- it allows back-to-back writes to the same accumulator address so same-address forwarding can be exercised directly

### `execution.acc_clear_sequence`

Purpose:

- override the pass-level clear policy on a per-row basis in the core replay runner

Rule:

- this field is optional and intended for dedicated core-stress packages rather than normal GEMM tiles
- when present, its length must equal `execution.seq_len`
- it is useful for patterns such as one overwrite followed by repeated accumulations to the same address

### `format.activation_layout`

Purpose:

- define how activation vectors are serialized in the payload file

Recommended initial value:

- `row_major_16xint8_vectors`

### `format.weight_layout`

Purpose:

- define how weight data is serialized relative to preload order

Recommended initial value:

- `k_major_rows_of_16_columns`

Interpretation:

- one serialized unit corresponds to the 16-lane `weight_bus` vector consumed during one preload step

### `format.golden_layout`

Purpose:

- define how expected outputs are encoded

Recommended initial value:

- `drain_address_to_16xint32_vector_map`

### `format.lane_order`

Purpose:

- remove ambiguity in lane-to-column mapping

Recommended initial value:

- `lane0_to_lowest_column_offset`

### `compare.mode`

Purpose:

- define comparison semantics

Recommended initial value:

- `exact`

### `compare.require_exact_match`

Purpose:

- make the L0-to-L2 hard gate explicit

Recommended initial value:

- `true`

---

## Example Manifest

The following JSON example matches the current RTL contract for one 16x16 GEMM-style tile.

```json
{
  "manifest_version": "0.1",
  "package_id": "gemm_tile_m0_n0_k0to15",
  "op_type": "gemm_tile",
  "description": "One 16x16 output tile with a single K tile on the current 16x16 NPU.",
  "shape": {
    "m": 16,
    "k": 16,
    "n": 16
  },
  "tile": {
    "m_tile_base": 0,
    "n_tile_base": 0,
    "tile_rows": 16,
    "tile_cols": 16
  },
  "files": {
    "activations": "activations.json",
    "weights": "weights.json",
    "golden": "golden.json"
  },
  "execution": {
    "seq_len": 16,
    "k_tile_count": 1,
    "require_weight_preload": true,
    "acc_clear_policy": "first_pass_overwrite",
    "drain_addresses": [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15]
  },
  "format": {
    "activation_layout": "row_major_16xint8_vectors",
    "weight_layout": "k_major_rows_of_16_columns",
    "golden_layout": "drain_address_to_16xint32_vector_map",
    "lane_order": "lane0_to_lowest_column_offset",
    "endianness": "little"
  },
  "compare": {
    "mode": "exact",
    "require_exact_match": true
  }
}
```

---

## Split-K Example

For `shape.k > 16`, one package still represents one output tile, but execution requires multiple K passes.

Example:

$$
A[16 \times 32] \times W[32 \times 16] \rightarrow C[16 \times 16]
$$

In that case:

- `shape.k = 32`
- `execution.k_tile_count = 2`
- pass 0 uses overwrite semantics
- pass 1 uses accumulate semantics

The manifest does not need to spell out every low-level signal pulse.
It only needs to state enough policy that the replay loader can derive the required phase sequence.

---

## N-Tile Example

For `shape.n > 16`, one package should still cover only one 16-column tile in the first L2 format.

Example full logical problem:

$$
A[16 \times 16] \times W[16 \times 48] \rightarrow C[16 \times 48]
$$

Recommended L2 packaging:

- package 0 covers columns `0..15`
- package 1 covers columns `16..31`
- package 2 covers columns `32..47`

That means:

- each package keeps `tile.tile_cols = 16`
- each package has a different `tile.n_tile_base`
- each package has its own weight dump and golden mapping for that column block

This keeps the first L2 design aligned with the current hardware drain width and avoids premature multi-tile complexity.

---

## Core Replay Interpretation

For core replay, the manifest should be interpreted as follows.

1. Load the activation and weight payload files named by the manifest.
2. For each required K pass:
   - preload the corresponding weight vectors
   - set the overwrite/accumulate policy according to `execution.acc_clear_policy`
   - execute `execution.seq_len` activation vectors
3. Wait for the documented flush latency.
4. Drain the addresses listed in `execution.drain_addresses`.
5. Map each drained lane to global output coordinates using:

$$
\text{global row} = tile.m\_tile\_base + drain\_addr
$$

$$
\text{global col} = tile.n\_tile\_base + lane
$$

6. Compare against golden data using the declared comparison mode.

Core replay should not require DMA-specific metadata if data is injected directly at the core-facing interface.

---

## System Replay Interpretation

For system replay, the same package concept remains valid, but additional placement metadata will eventually be required.

Examples of future system-specific extensions:

- source memory addresses for activation payloads
- source memory addresses for weight payloads
- SRAM bank placement intent
- DMA burst planning metadata

Those fields should be added as L5-specific extensions, not forced into the first L2 core-replay manifest unless they are immediately needed.

That keeps L2 focused on replayability instead of full runtime orchestration.

---

## Validation Rules For The First Manifest Version

The first manifest version should be accepted only if all of the following are true.

1. Required top-level fields are present.
2. `shape.k` is compatible with the declared `execution.k_tile_count`.
3. `execution.seq_len >= 1`.
4. `tile.tile_cols == 16`.
5. `tile.n_tile_base` is present even if equal to `0`.
6. `execution.drain_addresses` are within the legal accumulator address range.
7. Golden data can reconstruct global output coordinates for every drained lane.
8. The declared layouts do not contradict the current L0 signal contract.

Any violation should be classified as a package error, not as a DUT mismatch.

---

## Recommended L2 Exit Criteria

L2 should be treated as materially established when the following are true.

1. One manifest schema is fixed and documented.
2. At least one package can replay one real tile without hand-editing the testbench for workload-specific behavior.
3. Golden mismatch reporting identifies package id, global output coordinate, expected value, and observed value.
4. Split-K semantics are representable, even if only one initial package uses `k_tile_count = 1`.
5. The manifest is stable enough that L4 can implement a loader against it.

---

## Practical Recommendation

Do not start L2 by designing a universal compiler IR.

Start with one narrow but correct package format that is clearly aligned with the current 16x16 hardware contract.

For this repository, the right first step is:

- one package equals one 16-column output tile
- activation payloads are row-major 16-lane vectors
- weight payloads are serialized in preload order
- golden data is stored as drain-address to 16-lane vector mappings
- the manifest provides `m_tile_base`, `n_tile_base`, `seq_len`, `k_tile_count`, and overwrite/accumulate policy

If this narrow format works, broader formats can be layered on top without invalidating the L0 contract.

---

## Repository Reference Package

This repository now includes a first human-readable reference package under:

- `workloads/reference_gemm_tile_m0_n0_k0to15/`
- `workloads/reference_gemm_tile_m0_n0_k0to31_splitk/`

Its purpose is:

- provide one concrete manifest instance aligned with the current directed system test values
- make payload layout and golden mapping easy to inspect before a binary loader is implemented
- serve as the initial L2 package shape for L4 core replay bring-up

The split-K reference package extends that baseline by proving that one output tile can be accumulated across multiple K passes using `k_tile_count > 1` and `first_pass_overwrite` policy.

---

## L5 System Replay Extension Fields

The first L2 manifest intentionally stops at core replay semantics.
For L5 system replay, additional fields should extend the package rather than redefining it.

Recommended future extension namespace:

- `system.memory.activations_src_addr`
- `system.memory.weights_src_addr`
- `system.memory.activations_total_bytes`
- `system.memory.weights_total_bytes`
- `system.dma.activation_burst_len`
- `system.dma.activation_total_bursts`
- `system.dma.weight_burst_len`
- `system.dma.weight_total_bursts`
- `system.banks.initial_bank_sel`
- `system.banks.swap_before_weight_preload`
- `system.banks.swap_before_execute`
- `system.execution.weight_target`
- `system.execution.activation_target`

These fields should answer system-level questions that core replay does not need:

- where payloads live in external memory
- how DMA should fetch them
- which bank group should receive them
- when bank swaps are required between phases

Recommended design rule:

- keep all L5-specific metadata under a dedicated `system` namespace
- do not move or rename the L2 core replay fields
- make system replay an extension of the package, not a different package concept

That allows one workload package family to support both L4 core replay and L5 system replay with progressively richer metadata.

---

## Repository System Replay Draft Package

This repository now also includes a first draft system replay package under:

- `workloads/system_reference_gemm_tile_m0_n0_k0to15/`
- `workloads/system_reference_gemm_tile_m0_n0_k0to31_splitk/`

Its purpose is different from the existing core replay reference packages.

- the existing reference packages prove core replay interpretation
- the draft system replay package captures the same workload as a future end-to-end MMIO + DMA + bank-swap + execute scenario

The draft package currently uses the same human-readable activation, weight, and golden payload style as the core replay packages.
The important difference is that its manifest extends the package with `system.memory.*`, `system.dma.*`, `system.banks.*`, and `system.execution.*` metadata so a future L5 runner can derive the full system sequence from package content.

For split-K system replay, the repository draft package also demonstrates a useful extension pattern.

- aggregate `system.memory.*` and `system.dma.*` fields describe the whole package footprint
- `system.execution.passes[]` provides per-pass source addresses, per-pass transfer counts, and per-pass overwrite/accumulate intent

This keeps the top-level package concept stable while still giving the phase executor enough detail to expand one logical package into multiple system passes.