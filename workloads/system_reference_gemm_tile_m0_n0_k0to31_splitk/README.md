# system_reference_gemm_tile_m0_n0_k0to31_splitk

## Purpose

This is the first draft split-K system replay package.

It extends the baseline system package by turning one `K=32` logical tile into two `K=16` system passes.
The package is meant for the future L5 system replay runner, not for the current core-only runner.

---

## What It Proves

This package is the end-to-end split-K accumulation scenario.

For each K pass, the system runner should do the following.

1. DMA the weight chunk for that pass.
2. Swap banks.
3. Preload weights into the core.
4. DMA the activation chunk for that pass.
5. Swap banks.
6. Execute one 16-step sequence.

Pass 0 uses overwrite semantics.
Pass 1 uses accumulate semantics.

After both passes, the runner flushes, drains 16 rows, and compares against the expected `2400` vectors.

---

## External Memory Plan

The package assumes contiguous external-memory placement.

- weights pass 0 start at byte address `0`
- weights pass 1 start at byte address `256`
- activations pass 0 start at byte address `8192`
- activations pass 1 start at byte address `8448`

Each pass transfers `256` bytes for weights and `256` bytes for activations.