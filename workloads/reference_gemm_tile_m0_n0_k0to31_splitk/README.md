# Split-K Reference GEMM Tile Package

This package is the first split-K reference workload for the current 16x16 NPU core replay flow.

Logical interpretation:

$$
A[16 \times 32] \times W[32 \times 16] \rightarrow C[16 \times 16]
$$

Execution interpretation:

- K pass 0 uses weights filled with `10`
- K pass 1 also uses weights filled with `10`
- both passes use the same activation rows `[0, 1, ..., 15]`
- pass 0 uses overwrite semantics
- pass 1 uses accumulate semantics

Per pass, each output element is:

$$
\sum_{k=0}^{15} k \cdot 10 = 1200
$$

Across two passes, each output element is:

$$
1200 + 1200 = 2400
$$

So the expected final drained value is `2400` for every checked lane.