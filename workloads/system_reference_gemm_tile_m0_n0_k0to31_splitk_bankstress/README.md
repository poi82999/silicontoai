# system_reference_gemm_tile_m0_n0_k0to31_splitk_bankstress

## Purpose

This package extends the split-K system path into a stronger bank-stress scenario.

## What It Stresses

1. Two full preload and execute passes through the ping-pong banks.
2. A bank swap before every preload and every execute phase.
3. Two-burst weight and activation DMA planning inside each pass.
4. Correct overwrite on pass 0 and accumulation on pass 1.

## Expected Result

All drained vectors should be exactly `2400` on every lane for drain addresses `0..15`.
