# L6 Arithmetic And Golden Semantics Report

## Scope

This document defines the current arithmetic, saturation, overflow, and golden-generation semantics for the L6 toolchain in this repository.

Its purpose is to make the following items explicit.

- which numeric domains are assumed by the Python L6 toolchain
- which arithmetic rules are currently replay-verified against RTL
- how tiled, split-K, and tail-tile results become golden payloads
- which parts of the current behavior are closed policy versus temporary limitation

This document is not a replacement for the functional contract or the workload package report.
Instead, it binds those documents to the concrete numeric behavior of the current L6 path.

---

## Current Policy Status

The current repository already has one stable and useful policy surface.

1. L6 compute-package generation uses integer arithmetic with `numpy.int32` accumulation.
2. Replay comparison is exact for the current supported path.
3. Split-K and tail-tile replay are supported and regression-tested.
4. Saturation is not part of the current contract.
5. The replay-verified subset should use non-negative activation and weight lane values until a signed 8-bit hardware contract is explicitly introduced and documented.

That means the current policy is precise enough for deterministic package generation and replay regression, but it is not yet the final production-grade arithmetic contract for all possible future workloads.

---

## Direction Decision

The arithmetic direction for this repository is:

- **architectural lane contract: signed-int8 for activations and weights**

This decision is implemented and tied to the project's full-stack goal.

Why signed-int8 is the right target:

1. The L6 frontend already reasons in terms of model-side tensors, where negative weights and intermediate values are normal.
2. A compiler/backend path that stops at unsigned-byte-only semantics would remain educational but would be artificially narrower than realistic quantized inference flows.
3. `conv2d`, grouped convolution, and broader framework import all become more natural once lane semantics match ordinary signed quantized tensor assumptions.
4. The current RTL/replay stack is strong enough that aligning signedness end-to-end is a tractable follow-up, whereas redesigning the frontend around unsigned-only assumptions would create long-term technical debt.

### Signed-Int8 Implementation Status

The following components are now aligned to signed-int8 semantics:

1. **RTL MAC PE** (`rtl/mac_pe.sv`): uses `$signed(act_in) * $signed(weight_reg)` for signed multiplication.
2. **Replay bridge validator** (`l6/src/l6_toolchain/replay_bridge.py`): enforces `[-128, 127]` range for activation and weight lane values.
3. **DUT drive boundaries** (`tb/main.cpp`, `sim/system/system_replay_main.cpp`): apply `prepareLaneForDutDrive()` signed-to-byte conversion at drive boundaries.
4. **L6 golden generation**: uses `numpy.int32` arithmetic throughout, compatible with signed inputs.

The repository now has a single-level statement: the **active contract** is signed-int8 lane semantics for activations and weights.

---

## Supported Semantic Scope

This report applies to the current L6-supported path:

- `linear`
- `conv2d` lowered through `im2col`
- `relu`
- `flatten`
- `gemm_tile`
- `gemm_tiled`
- `program_sequence`
- replay-bridge output packages generated from the above

The main implementation points are:

- `l6/src/l6_toolchain/emitter.py`
- `l6/src/l6_toolchain/ir.py`
- `l6/src/l6_toolchain/replay_bridge.py`
- `host/replay_package.h`
- `rtl/mac_pe.sv`
- `rtl/psum_accumulator_buffer.sv`

---

## Numeric Domain Policy

### Activation And Weight Lanes

At the L6 package level, activation and weight tensors are modeled as signed 8-bit lane values.

Current Python-side behavior:

- study generators create activation and weight matrices using `numpy.int8`
- explicit frontend tensors are accepted as arrays and then consumed through the same 8-bit package layouts
- tiled payloads are padded with zero-valued lanes outside the logical valid region

Current replay-side behavior:

- replay payload rows are parsed into 16-lane byte arrays
- replay bridge validates lane values are within `[-128, 127]`
- RTL MAC PE interprets lanes as signed via `$signed()` casts
- DUT drive boundaries apply `prepareLaneForDutDrive()` for correct bit representation

Architectural lane contract:

- activation and weight lane values are **signed-int8**: range `[-128, 127]`
- committed replay assets may use any value in this range
- the signed interpretation is end-to-end: Python golden, replay bridge, drive boundary, and RTL MAC all agree on signedness

### Accumulator And Golden Lanes

At the accumulator and golden level, one output lane is a 32-bit integer quantity.

Current repository contract:

- the MAC PE produces a 32-bit product contribution and adds it to a 32-bit partial sum
- the accumulator stores 16 lanes of 32-bit data per address
- golden payload vectors are emitted as 32-bit integer lane values
- replay comparison reads observed lanes and compares them exactly against the golden values

This is the closed numeric domain for current exact replay:

$$
\text{activation lane} \in 8\text{-bit value}, \quad
\text{weight lane} \in 8\text{-bit value}, \quad
\text{output lane} \in 32\text{-bit value}
$$

---

## Saturation And Overflow Policy

### Current Policy

The current repository does **not** define any saturation behavior in the L6 or replay contract.

Current arithmetic policy is:

- no clamp on activation lanes during package generation
- no clamp on weight lanes during package generation
- no clamp on 32-bit accumulation results
- no tolerance-based compare in replay

### Overflow Interpretation

The intended current interpretation is wraparound 32-bit arithmetic rather than saturation.

Why this is the right current reading:

- `rtl/mac_pe.sv` performs a 32-bit multiply contribution and a 32-bit add into `psum_out`
- `rtl/psum_accumulator_buffer.sv` accumulates 32-bit lane values into 32-bit storage
- `l6/src/l6_toolchain/emitter.py` and `l6/src/l6_toolchain/ir.py` compute products and bias adds through `numpy.int32`

So the current closed policy is:

$$
\text{golden} = \operatorname{int32}(A) @ \operatorname{int32}(W) + \operatorname{int32}(b)
$$

with 32-bit arithmetic semantics and no saturation stage.

### Practical Guidance

Even though wraparound is the correct current interpretation, replay-ready and sign-off-oriented assets should preferably remain in a numerically safe range where overflow does not occur.

Reason:

- current exact compare is easier to inspect and debug when arithmetic stays well within the 32-bit range
- signed-versus-unsigned presentation in reports becomes less ambiguous when values do not cross the wrap boundary

So there are two different statements that must not be confused.

1. The current contract does not saturate and therefore wraparound is the correct arithmetic interpretation.
2. The recommended regression style is still to avoid unnecessary overflow in committed reference assets.

### Overflow Bounds Analysis

For signed-int8 inputs, the worst-case single-lane accumulation per tile pass is:

$$
\max\left|\sum_{i=0}^{K_{\text{tile}}-1} a_i \times w_i\right| = K_{\text{tile}} \times 128 \times 128 = K_{\text{tile}} \times 16{,}384
$$

Since the hardware tile size is 16 ($K_{\text{tile}} = 16$):

$$
\text{max per-pass} = 16 \times 16{,}384 = 262{,}144
$$

For split-K with $P$ passes:

$$
\text{max accumulated} = P \times 262{,}144
$$

The signed int32 range is $[-2{,}147{,}483{,}648, +2{,}147{,}483{,}647]$, so overflow cannot occur unless:

$$
P > \frac{2{,}147{,}483{,}647}{262{,}144} \approx 8{,}192 \text{ passes}
$$

For any realistic split-K depth ($P \leq 256$), the maximum accumulation is $67{,}108{,}864$, which is safe by a margin of $32\times$.

**Conclusion**: for all practical workloads in this repository, 32-bit integer accumulation is overflow-safe without saturation. Overflow detection is not needed for current assets.

---

## Golden Generation Policy

### Linear

For `linear`, the current L6 golden is defined as:

$$
Y = A \times W + b
$$

where:

- `A` has logical shape `M x K`
- `W` has logical shape `K x N`
- `b` is optional and has width `N`
- all arithmetic is performed in the current 32-bit accumulation domain

Bias policy:

- bias is added after the matrix product
- bias is broadcast across rows
- bias participates in the same exact golden that replay compares against

### Conv2d

For `conv2d`, the current L6 path is not a separate hardware arithmetic contract.
It is defined as:

1. lower NCHW input to an `im2col` activation matrix
2. lower kernel weights to a GEMM-compatible weight matrix
3. apply the same 32-bit GEMM-plus-bias rule as `linear`
4. reshape the result back to the logical output tensor shape

Grouped convolution policy:

- grouped conv is lowered by building a block-structured weight matrix
- channels outside the active group contribute zero
- resulting golden values are still defined by the same exact 32-bit matrix rule

### ReLU

For `relu`, the current policy is:

$$
Y = \max(X, 0)
$$

with elementwise application and no additional scaling, saturation, or quantization step.

Practical consequence in current `program_sequence` export:

- when `relu` follows `linear` or `conv2d`, it usually operates on 32-bit integer tensors
- its output remains in that same integer domain

Golden scope: ReLU is applied in the L6 golden computation (`_execute_program_op` in `ir.py`) and therefore participates in the replay-verified golden chain when it appears between compute steps. The hardware systolic array does not contain a ReLU unit; ReLU is modeled as a post-processor operation between chained GEMM steps.

### Bias Handling

Bias policy across the stack:

- **L6 golden**: bias is added after the matrix product as `output = A @ W + b`, where `b` is broadcast across rows
- **RTL accumulator**: the current RTL `psum_accumulator_buffer.sv` stores 32-bit lane values but has no dedicated bias-add path
- **Current implementation**: bias is folded into the golden payload by the L6 Python-side computation. The replay loader receives the final post-bias golden for comparison.
- **Consequence**: bias does not require any RTL support beyond the existing 32-bit accumulator. It is entirely a host/toolchain concern.

### Flatten

`flatten` is shape-only in the current L6 prototype.

Policy:

- no arithmetic is applied
- tensor contents are preserved
- only shape and indexing interpretation change

---

## Tiling, Split-K, And Tail Policy

### Tiled Golden Meaning

For `gemm_tiled`, each tile manifest represents only one part of the full logical output.

Current policy:

- zero padding exists only to satisfy fixed 16-lane storage layout
- `valid_rows`, `valid_cols`, `tile_rows`, `tile_cols`, and `tile_depth` define the semantic region
- padded zeros outside the valid region are storage artifacts, not logical results

### Split-K Policy

Split-K means one logical output tile is produced by multiple K passes.

Current policy mapping:

- first pass uses overwrite semantics
- later passes accumulate into the same accumulator address region
- only the final pass emits the golden payload for replay comparison

This matches the current replay contract documented in `docs/core_replay_loader_report.md` and implemented in `host/replay_package.h`.

### Tail Tile Policy

Tail tiles are supported when logical dimensions are smaller than the fixed 16-lane storage block.

Current policy:

- replay package manifests record the true logical `tile_rows` and `tile_cols`
- payload storage may still be padded to 16 lanes
- replay compare checks only valid output lanes
- for a tail output width, only the first `tile_cols` lanes are architecturally compared

---

## Replay Compare Semantics

Replay compare is currently exact.

Manifest-level rule:

- `compare.mode = exact`
- `compare.require_exact_match = true`

Operational meaning:

- any lane mismatch is a failure
- any wrong drain-address mapping is a failure
- any overwrite-versus-accumulate mismatch is a failure
- any tail-lane handling mistake inside the valid lane region is a failure

Global coordinate interpretation follows the existing replay mapping:

$$
\text{global row} = \text{tile.m\_tile\_base} + \text{drain\_addr}
$$

$$
\text{global col} = \text{tile.n\_tile\_base} + \text{lane}
$$

This policy is already used by the loader and replay reporting path.

---

## What Is Closed Versus Still Open

### Closed For The Current Repository

- exact compare semantics for replay-ready packages
- overwrite-versus-accumulate meaning for split-K replay
- tail-lane compare policy for `tile_cols < 16`
- 32-bit non-saturating accumulation as the current golden rule
- bias-after-matmul policy for current `linear` and lowered `conv2d`
- `relu` and `flatten` semantics inside `program_sequence`
- signed-int8 lane semantics: RTL MAC, replay bridge, drive boundaries, and L6 golden all agree
- overflow bounds: proven safe for all practical split-K depths ($P \leq 8{,}192$)
- bias handling: host/toolchain-only, no RTL bias path needed
- ReLU golden scope: applied in L6 golden chain, not modeled in RTL

### Not Yet Closed For Future Expansion

- saturation/clamp behavior for future quantized or bounded arithmetic modes
- tolerance-based compare modes
- broader operator set beyond the current supported path (`add`, `batch_norm`, `max_pool2d`, `adaptive_avg_pool2d`)
- automatic torch.fx tracing from PyTorch modules to L6 IR

---

## M1 Closure Status

M1 (Arithmetic Semantics Closure) is complete. The following items are resolved:

1. **Signed-int8 alignment**: MAC PE uses `$signed()`, replay bridge validates `[-128, 127]`, drive boundaries apply `prepareLaneForDutDrive()`.
2. **Overflow bounds analysis**: worst-case accumulation is $262{,}144$ per tile pass, safe within int32 for up to $8{,}192$ split-K passes.
3. **Saturation policy**: explicitly documented as "no saturation, int32 wrapping" — matching RTL behavior.
4. **ReLU golden scope**: documented as L6-side post-processor, not modeled in RTL.
5. **Bias handling scope**: documented as host/toolchain-only, no RTL bias path exists or is needed.

This document is the authoritative statement of the current semantics.