# system_reference_gemm_tile_m0_n0_k0to15

## Purpose

This is the first draft system replay reference package.

It mirrors the current directed system test intent in `tb_system_top.sv`, but expresses that intent as package metadata instead of as hard-coded testbench values.

The package is designed for L5 planning and future system replay implementation.
It is not yet consumed by an automated system replay runner.

---

## What It Proves

This package is the baseline end-to-end smoke scenario.

It is meant to prove the following flow.

1. DMA weight payload from external memory into the inactive weight bank.
2. Swap banks.
3. Preload weights into the core.
4. DMA activation payload from external memory into the inactive activation bank.
5. Swap banks.
6. Execute one 16-step activation sequence with overwrite semantics.
7. Flush the pipeline.
8. Drain 16 rows and compare against the expected 16x16 output tile.

---

## Intended External Memory Layout

The package follows the same source-address convention as the current directed system test.

- weights start at byte address `0`
- activations start at byte address `8192`

Those addresses correspond to 16-byte words in the dummy AXI memory used by the current system test.

---

## Why The Payloads Are JSON

The first repository-hosted system replay package stays human-readable.

That keeps review simple while the L5 runner is still being designed.
The system replay flow can later switch the payload encoding without changing the package concept.

---

## Expected Result

Each drained 16-lane output vector should be exactly `1200` on all lanes for drain addresses `0..15`.