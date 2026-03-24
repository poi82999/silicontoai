# system_reference_gemm_tile_m0_n16_k0to15

This package reuses the baseline system replay payload values but shifts the output tile to global column base `16`.

Its purpose is to prove that the system replay runner preserves global column mapping for an adjacent N-tile package.