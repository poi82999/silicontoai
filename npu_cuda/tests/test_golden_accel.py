"""Tests for CUDA golden accelerator — bit-accuracy and correctness."""

from __future__ import annotations

import numpy as np
import pytest
import sys
import os

# Add project root to path for cuda module import
sys.path.insert(0, os.path.join(os.path.dirname(__file__), "..", ".."))

from npu_cuda.golden_accel import (
    BatchResult,
    SplitKPass,
    TileInput,
    compute_golden_batch,
    compute_golden_single,
    compute_golden_splitk,
    force_backend,
    get_backend,
    make_identity_tile,
    make_random_tiles,
    make_ramp_tile,
    make_signed_edge_tile,
)


class TestComputeGoldenSingle:
    """Test single-tile golden computation."""

    def setup_method(self):
        force_backend("numpy")

    def test_identity_tile(self):
        """Identity × Identity = Identity."""
        tile = make_identity_tile(16)
        result = compute_golden_single(tile.activations, tile.weights)
        expected = np.eye(16, dtype=np.int32)
        np.testing.assert_array_equal(result, expected)

    def test_ramp_tile(self):
        """Ramp activations × constant-3 weights."""
        tile = make_ramp_tile(16)
        result = compute_golden_single(tile.activations, tile.weights)
        # Each row is [0..15], weights are all 3
        # result[i][j] = sum(k * 3 for k in range(16)) = 3 * 120 = 360
        assert result[0, 0] == 360
        assert result[15, 15] == 360

    def test_signed_edge_tile(self):
        """Extreme signed values: -128 × 127."""
        tile = make_signed_edge_tile(16)
        result = compute_golden_single(tile.activations, tile.weights)
        # Each element = sum(-128 * 127 for k in range(16)) = -128 * 127 * 16 = -260096
        expected_val = -128 * 127 * 16
        assert result[0, 0] == expected_val
        assert result[15, 15] == expected_val

    def test_npu_tb_scenario(self):
        """Replicate tb_system_top.sv test: weight=10, act=[0..15] → 1200."""
        # In the testbench: weight=10 for all PEs, act[lane]=lane
        # Expected per column: sum(lane * 10 for lane in range(16)) = 10 * 120 = 1200
        act = np.tile(np.arange(16, dtype=np.int8), (16, 1))
        wt = np.full((16, 16), 10, dtype=np.int8)
        result = compute_golden_single(act, wt)
        assert result[0, 0] == 1200
        assert np.all(result == 1200)

    def test_bias_addition(self):
        """Test bias is added correctly."""
        act = np.ones((16, 16), dtype=np.int8)
        wt = np.ones((16, 16), dtype=np.int8)
        bias = np.full((16, 16), 100, dtype=np.int32)
        result = compute_golden_single(act, wt, bias)
        # Without bias: 1*1*16 = 16. With bias: 16 + 100 = 116
        assert result[0, 0] == 116

    def test_bias_1d_broadcast(self):
        """Test 1D bias broadcast [N] → [M, N]."""
        act = np.ones((4, 4), dtype=np.int8)
        wt = np.ones((4, 4), dtype=np.int8)
        bias = np.array([10, 20, 30, 40], dtype=np.int32)
        result = compute_golden_single(act, wt, bias)
        # matmul = 4 per element, + broadcast bias
        assert result[0, 0] == 14  # 4 + 10
        assert result[0, 3] == 44  # 4 + 40

    def test_zero_inputs(self):
        """All zeros → all zeros."""
        act = np.zeros((16, 16), dtype=np.int8)
        wt = np.zeros((16, 16), dtype=np.int8)
        result = compute_golden_single(act, wt)
        np.testing.assert_array_equal(result, np.zeros((16, 16), dtype=np.int32))

    def test_non_square(self):
        """Non-square matrices."""
        act = np.ones((8, 32), dtype=np.int8) * 2
        wt = np.ones((32, 4), dtype=np.int8) * 3
        result = compute_golden_single(act, wt)
        # Each element = 2 * 3 * 32 = 192
        assert result.shape == (8, 4)
        assert result[0, 0] == 192


class TestComputeGoldenBatch:
    """Test batch golden computation."""

    def setup_method(self):
        force_backend("numpy")

    def test_empty_batch(self):
        """Empty batch returns empty."""
        result = compute_golden_batch([])
        assert result.tile_count == 0
        assert len(result.outputs) == 0

    def test_single_tile_batch(self):
        """Batch of 1 == single tile."""
        tile = make_ramp_tile()
        single = compute_golden_single(tile.activations, tile.weights)
        batch = compute_golden_batch([tile])
        assert batch.tile_count == 1
        np.testing.assert_array_equal(batch.outputs[0], single)

    def test_batch_matches_sequential(self):
        """Batch and sequential produce identical results."""
        tiles = make_random_tiles(50, seed=123)
        sequential = [compute_golden_single(t.activations, t.weights) for t in tiles]
        batch = compute_golden_batch(tiles)
        assert batch.tile_count == 50
        for i, (s, b) in enumerate(zip(sequential, batch.outputs)):
            np.testing.assert_array_equal(s, b, err_msg=f"Mismatch at tile {i}")

    def test_batch_reports_backend(self):
        """BatchResult reports the correct backend."""
        tiles = make_random_tiles(5)
        result = compute_golden_batch(tiles)
        assert result.backend == "numpy"


class TestComputeGoldenSplitK:
    """Test split-K accumulation."""

    def setup_method(self):
        force_backend("numpy")

    def test_single_pass(self):
        """Single pass with acc_clear=True."""
        act = np.ones((16, 16), dtype=np.int8) * 2
        wt = np.ones((16, 16), dtype=np.int8) * 3
        result = compute_golden_splitk([SplitKPass(act, wt, acc_clear=True)])
        assert result[0, 0] == 96  # 2 * 3 * 16

    def test_two_pass_accumulate(self):
        """Two passes: clear then accumulate."""
        act1 = np.ones((16, 16), dtype=np.int8) * 2
        wt1 = np.ones((16, 16), dtype=np.int8) * 3
        act2 = np.ones((16, 16), dtype=np.int8) * 4
        wt2 = np.ones((16, 16), dtype=np.int8) * 5
        result = compute_golden_splitk([
            SplitKPass(act1, wt1, acc_clear=True),
            SplitKPass(act2, wt2, acc_clear=False),
        ])
        # Pass 1: 2*3*16 = 96, Pass 2: 4*5*16 = 320, Total: 416
        assert result[0, 0] == 416

    def test_splitk_equivalent_to_full(self):
        """Split K=32 into 2×16 should equal single K=32."""
        rng = np.random.default_rng(77)
        act_full = rng.integers(-128, 127, size=(16, 32), dtype=np.int8, endpoint=True)
        wt_full = rng.integers(-128, 127, size=(32, 16), dtype=np.int8, endpoint=True)

        full_result = compute_golden_single(act_full, wt_full)
        split_result = compute_golden_splitk([
            SplitKPass(act_full[:, :16], wt_full[:16, :], acc_clear=True),
            SplitKPass(act_full[:, 16:], wt_full[16:, :], acc_clear=False),
        ])
        np.testing.assert_array_equal(full_result, split_result)

    def test_overwrite_semantics(self):
        """acc_clear=True in second pass overwrites first pass result."""
        act1 = np.ones((4, 4), dtype=np.int8) * 10
        wt1 = np.ones((4, 4), dtype=np.int8) * 10
        act2 = np.ones((4, 4), dtype=np.int8) * 1
        wt2 = np.ones((4, 4), dtype=np.int8) * 1
        result = compute_golden_splitk([
            SplitKPass(act1, wt1, acc_clear=True),
            SplitKPass(act2, wt2, acc_clear=True),  # overwrite!
        ])
        # Second pass overwrites: 1*1*4 = 4
        assert result[0, 0] == 4

    def test_empty_raises(self):
        """Empty passes raises ValueError."""
        with pytest.raises(ValueError):
            compute_golden_splitk([])


class TestBackendSelection:
    """Test automatic and forced backend selection."""

    def test_force_numpy(self):
        force_backend("numpy")
        assert get_backend() == "numpy"

    def test_force_invalid_raises(self):
        with pytest.raises(ValueError):
            force_backend("tensorflow")

    def test_numpy_fallback(self):
        """NumPy backend always available."""
        force_backend("numpy")
        tile = make_ramp_tile()
        result = compute_golden_single(tile.activations, tile.weights)
        assert result.dtype == np.int32


class TestBitAccuracyEdgeCases:
    """Test signed INT8 edge cases matching NPU RTL."""

    def setup_method(self):
        force_backend("numpy")

    def test_max_positive(self):
        """127 × 127 × 16 = 258064."""
        act = np.full((1, 16), 127, dtype=np.int8)
        wt = np.full((16, 1), 127, dtype=np.int8)
        result = compute_golden_single(act, wt)
        assert result[0, 0] == 127 * 127 * 16  # 258064

    def test_max_negative(self):
        """-128 × -128 × 16 = 262144."""
        act = np.full((1, 16), -128, dtype=np.int8)
        wt = np.full((16, 1), -128, dtype=np.int8)
        result = compute_golden_single(act, wt)
        assert result[0, 0] == 128 * 128 * 16  # 262144 (positive, -128*-128=+16384)

    def test_mixed_sign(self):
        """-128 × 127 × 16 = -260096."""
        act = np.full((1, 16), -128, dtype=np.int8)
        wt = np.full((16, 1), 127, dtype=np.int8)
        result = compute_golden_single(act, wt)
        assert result[0, 0] == -128 * 127 * 16  # -260096

    def test_no_overflow_int32(self):
        """Worst case: -128 × -128 × 256 lanes = 4194304, well within int32."""
        act = np.full((1, 256), -128, dtype=np.int8)
        wt = np.full((256, 1), -128, dtype=np.int8)
        result = compute_golden_single(act, wt)
        expected = 128 * 128 * 256  # 4194304
        assert result[0, 0] == expected
        assert result[0, 0] < np.iinfo(np.int32).max
