# reference_acc_forwarding_same_addr_core

## Purpose

This package is a dedicated core-level forwarding stress case.

It forces four consecutive accumulation writes to the same accumulator address.
The first write overwrites address `0`, and the next three writes accumulate into the same address without any intervening address change.

## Why This Exists

Normal row-major replay increments `acc_addr` every cycle, so it does not naturally create the back-to-back same-address write hazard that the accumulator forwarding path is meant to handle.

This package adds an explicit `acc_addr_sequence` and `acc_clear_sequence` so the core replay runner can exercise that hazard directly.

## Expected Result

Each write contributes `1200` per lane.
After one overwrite plus three accumulations to the same address, drain address `0` must contain `4800` on all 16 lanes.

## Coverage Intent

The package is intended to produce `cp_forwarding_hit_seen=HIT` in the core replay coverage artifact.
