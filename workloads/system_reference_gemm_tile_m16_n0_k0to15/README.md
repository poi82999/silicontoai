# system_reference_gemm_tile_m16_n0_k0to15

This package reuses the baseline system replay payload values but shifts the output tile to global row base `16`.

Its purpose is to prove that the system replay runner preserves global row mapping for an adjacent M-tile package.