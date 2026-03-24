# Reference GEMM Tile Package

This package is the first human-readable L2 reference workload bundle for the current 16x16 NPU contract.

It matches the same logical data pattern used by the directed system test.

- weights: all lanes contain value `10`
- activations: each row is the vector `[0, 1, 2, ..., 15]`
- expected output: every drained lane for every checked row equals `1200`

Logical interpretation:

$$
A[16 \times 16] \times W[16 \times 16] \rightarrow C[16 \times 16]
$$

For each output element:

$$
\sum_{k=0}^{15} k \cdot 10 = 1200
$$

This package is intentionally JSON-based so the data can be inspected without a binary parser.