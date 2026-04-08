"""
Performance benchmark: NumPy (CPU) vs CuPy (GPU) golden reference generation.

Usage:
    python -m cuda.benchmark
    python -m cuda.benchmark --tiles 5000
    python -m cuda.benchmark --backend numpy
"""

from __future__ import annotations

import argparse
import sys
import time
from dataclasses import dataclass

import numpy as np

from .golden_accel import (
    BatchResult,
    SplitKPass,
    TileInput,
    compute_golden_batch,
    compute_golden_single,
    compute_golden_splitk,
    force_backend,
    get_backend,
    make_random_tiles,
)


@dataclass
class BenchmarkResult:
    name: str
    backend: str
    tile_count: int
    elapsed_ms: float
    throughput_tiles_per_sec: float


def benchmark_single(tiles: list[TileInput], *, warmup: int = 3) -> BenchmarkResult:
    """Benchmark sequential single-tile computation."""
    backend = get_backend()

    # Warmup
    for t in tiles[:warmup]:
        compute_golden_single(t.activations, t.weights, t.bias)

    start = time.perf_counter()
    for t in tiles:
        compute_golden_single(t.activations, t.weights, t.bias)
    elapsed = time.perf_counter() - start

    return BenchmarkResult(
        name="single",
        backend=backend,
        tile_count=len(tiles),
        elapsed_ms=elapsed * 1000,
        throughput_tiles_per_sec=len(tiles) / elapsed if elapsed > 0 else 0,
    )


def benchmark_batch(tiles: list[TileInput], *, warmup: int = 3) -> BenchmarkResult:
    """Benchmark batched tile computation."""
    backend = get_backend()

    # Warmup
    if warmup > 0:
        compute_golden_batch(tiles[:min(warmup, len(tiles))])

    start = time.perf_counter()
    result = compute_golden_batch(tiles)
    elapsed = time.perf_counter() - start

    return BenchmarkResult(
        name="batch",
        backend=result.backend,
        tile_count=result.tile_count,
        elapsed_ms=elapsed * 1000,
        throughput_tiles_per_sec=len(tiles) / elapsed if elapsed > 0 else 0,
    )


def benchmark_splitk(*, k_total: int = 64, k_tile: int = 16, count: int = 100, warmup: int = 3) -> BenchmarkResult:
    """Benchmark split-K accumulation."""
    backend = get_backend()
    rng = np.random.default_rng(99)
    num_passes = k_total // k_tile

    passes_list = []
    for _ in range(count):
        passes = []
        for p in range(num_passes):
            act = rng.integers(-128, 127, size=(16, k_tile), dtype=np.int8, endpoint=True)
            wt = rng.integers(-128, 127, size=(k_tile, 16), dtype=np.int8, endpoint=True)
            passes.append(SplitKPass(act, wt, acc_clear=(p == 0)))
        passes_list.append(passes)

    # Warmup
    for pl in passes_list[:warmup]:
        compute_golden_splitk(pl)

    start = time.perf_counter()
    for pl in passes_list:
        compute_golden_splitk(pl)
    elapsed = time.perf_counter() - start

    return BenchmarkResult(
        name=f"splitk_K{k_total}",
        backend=backend,
        tile_count=count,
        elapsed_ms=elapsed * 1000,
        throughput_tiles_per_sec=count / elapsed if elapsed > 0 else 0,
    )


def run_benchmark_suite(tile_counts: list[int] | None = None) -> list[BenchmarkResult]:
    """Run the full benchmark suite and return results."""
    if tile_counts is None:
        tile_counts = [1, 10, 100, 1000, 5000]

    results: list[BenchmarkResult] = []

    for count in tile_counts:
        tiles = make_random_tiles(count, seed=42)

        # Single tile loop
        r = benchmark_single(tiles)
        results.append(r)

        # Batch
        r = benchmark_batch(tiles)
        results.append(r)

    # Split-K
    r = benchmark_splitk(k_total=64, count=100)
    results.append(r)

    return results


def print_results(results: list[BenchmarkResult]) -> None:
    """Print benchmark results as a formatted table."""
    print()
    print(f"{'Test':<25} {'Backend':<8} {'Tiles':>7} {'Time (ms)':>12} {'Tiles/sec':>14}")
    print("-" * 70)
    for r in results:
        print(f"{r.name:<25} {r.backend:<8} {r.tile_count:>7} {r.elapsed_ms:>12.2f} {r.throughput_tiles_per_sec:>14.0f}")
    print()


def run_comparison() -> None:
    """Run NumPy vs CuPy side-by-side comparison."""
    tile_counts = [10, 100, 1000, 5000]

    print("=" * 80)
    print("  NPU Golden Reference Generator — Performance Benchmark")
    print("=" * 80)

    # NumPy
    print("\n--- NumPy (CPU) ---")
    force_backend("numpy")
    numpy_results = run_benchmark_suite(tile_counts)
    print_results(numpy_results)

    # CuPy (if available)
    try:
        import cupy  # noqa: F401
        print("\n--- CuPy (GPU) ---")
        force_backend("cupy")
        cupy_results = run_benchmark_suite(tile_counts)
        print_results(cupy_results)

        # Speedup comparison
        print("\n--- Speedup (CuPy batch / NumPy batch) ---")
        numpy_batch = {r.tile_count: r for r in numpy_results if r.name == "batch"}
        cupy_batch = {r.tile_count: r for r in cupy_results if r.name == "batch"}
        for count in tile_counts:
            if count in numpy_batch and count in cupy_batch:
                speedup = numpy_batch[count].elapsed_ms / max(cupy_batch[count].elapsed_ms, 0.001)
                print(f"  {count:>5} tiles: {speedup:>6.1f}x speedup")

    except ImportError:
        print("\n[INFO] CuPy not installed. Run: pip install cupy-cuda12x")
        print("       GPU benchmark skipped.")

    # Verify bit-accuracy
    print("\n--- Bit-Accuracy Verification ---")
    force_backend("numpy")
    tiles = make_random_tiles(100, seed=42)
    numpy_outputs = [compute_golden_single(t.activations, t.weights) for t in tiles]

    try:
        force_backend("cupy")
        cupy_outputs = [compute_golden_single(t.activations, t.weights) for t in tiles]
        mismatches = sum(1 for a, b in zip(numpy_outputs, cupy_outputs) if not np.array_equal(a, b))
        print(f"  100 tiles compared: {mismatches} mismatches → {'PASS ✅' if mismatches == 0 else 'FAIL ❌'}")
    except Exception:
        print("  GPU not available, skipping bit-accuracy check.")

    print()


def main() -> None:
    parser = argparse.ArgumentParser(description="NPU Golden Generator Benchmark")
    parser.add_argument("--tiles", type=int, default=0, help="Custom tile count (0 = full suite)")
    parser.add_argument("--backend", choices=["numpy", "cupy", "auto"], default="auto")
    args = parser.parse_args()

    if args.backend != "auto":
        force_backend(args.backend)

    if args.tiles > 0:
        tiles = make_random_tiles(args.tiles, seed=42)
        print(f"\nBackend: {get_backend()}")
        print(f"Tiles:   {args.tiles}")

        r_single = benchmark_single(tiles)
        r_batch = benchmark_batch(tiles)
        print(f"\nSingle loop: {r_single.elapsed_ms:.2f} ms ({r_single.throughput_tiles_per_sec:.0f} tiles/sec)")
        print(f"Batch:       {r_batch.elapsed_ms:.2f} ms ({r_batch.throughput_tiles_per_sec:.0f} tiles/sec)")
        speedup = r_single.elapsed_ms / max(r_batch.elapsed_ms, 0.001)
        print(f"Batch speedup: {speedup:.1f}x")
    else:
        run_comparison()


if __name__ == "__main__":
    main()
