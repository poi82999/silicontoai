# system_reference_forwarding_same_addr_m0_n0_k0to15

## Purpose

This package is a dedicated system-level forwarding stress case.

It reuses the baseline single-pass DMA, swap, preload, execute, flush, and drain flow, but the system replay runner enables a verification-only accumulator-address override during execute so that all 16 activation rows write to address `0`.

## Expected Result

Each activation row contributes `1200` per output lane.
With 16 consecutive writes to the same accumulator address, drain address `0` must produce `19200` on all 16 lanes.

## Coverage Intent

The package is expected to produce `cp_forwarding_hit_seen=HIT` in the system replay coverage artifact.

## Sign-Off Role

This package closes the system-level gap that remained after the core-only forwarding stress package was added.