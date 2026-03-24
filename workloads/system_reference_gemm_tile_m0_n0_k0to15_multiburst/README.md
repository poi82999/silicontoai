# system_reference_gemm_tile_m0_n0_k0to15_multiburst

## Purpose

This package reuses the baseline 16x16x16 payload but forces both DMA transfers to span two bursts.

## What It Stresses

1. Weight DMA address increment across a multi-burst transfer.
2. Activation DMA address increment across a multi-burst transfer.
3. End-to-end correctness after the same bank-swap and execute sequence as the baseline path.

## Expected Result

All drained vectors should still be exactly `1200` on every lane for drain addresses `0..15`.
