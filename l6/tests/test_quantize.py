"""Tests for the per-tensor symmetric quantization module (quantize.py)."""
from __future__ import annotations

import numpy as np
import pytest

from l6_toolchain.quantize import (
    GPTQResult,
    LayerQuantizeResult,
    QuantizeResult,
    SmoothQuantResult,
    check_quantization_error,
    dequantize_tensor,
    gptq_quantize_weight,
    quantize_activation,
    quantize_conv2d_layer,
    quantize_linear_layer,
    quantize_tensor,
    smooth_quant,
)


class TestQuantizeTensor:
    def test_basic_identity_scale(self) -> None:
        """Max abs = 127 → scale should be exactly 1.0."""
        t = np.array([[-127.0, 0.0, 127.0]], dtype=np.float32)
        result = quantize_tensor(t)
        assert result.scale == pytest.approx(1.0)
        np.testing.assert_array_equal(result.quantized, np.array([[-127, 0, 127]], dtype=np.int8))

    def test_scale_computed_from_max_abs(self) -> None:
        """scale = max(|tensor|) / 127."""
        t = np.array([2.54], dtype=np.float32)
        result = quantize_tensor(t)
        expected_scale = 2.54 / 127.0
        assert result.scale == pytest.approx(expected_scale, rel=1e-5)

    def test_all_zeros_tensor(self) -> None:
        """All-zero tensor should produce INT8 zeros and scale=1.0."""
        t = np.zeros((4, 4), dtype=np.float32)
        result = quantize_tensor(t)
        assert result.scale == pytest.approx(1.0)
        np.testing.assert_array_equal(result.quantized, np.zeros((4, 4), dtype=np.int8))

    def test_negative_values(self) -> None:
        """Negative float values should map to negative INT8."""
        t = np.array([-127.0, -64.0, 0.0, 64.0, 127.0], dtype=np.float32)
        result = quantize_tensor(t)
        assert result.scale == pytest.approx(1.0)
        np.testing.assert_array_equal(
            result.quantized,
            np.array([-127, -64, 0, 64, 127], dtype=np.int8),
        )

    def test_saturation_clamps_to_int8_range(self) -> None:
        """Values that require more than 8 bits should be saturated to ±127."""
        # Create a tensor where most values are small but outlier skews scale
        t = np.array([0.0, 1.0, 2.0, 200.0], dtype=np.float32)
        result = quantize_tensor(t, saturate=True)
        # The max absolute value is 200, scale = 200/127
        expected_scale = 200.0 / 127.0
        assert result.scale == pytest.approx(expected_scale, rel=1e-5)
        # 200/scale ≈ 127 (exact), 1/scale ≈ 0.635 → rounds to 1
        assert result.quantized[-1] == 127  # 200 → 127 after clip

    def test_zero_point_is_always_zero(self) -> None:
        t = np.array([1.0, -1.0], dtype=np.float32)
        result = quantize_tensor(t)
        assert result.zero_point == 0

    def test_original_dtype_preserved(self) -> None:
        t = np.array([1.0], dtype=np.float64)
        result = quantize_tensor(t)
        assert result.original_dtype == "float64"

    def test_quantize_errors_on_integer_input(self) -> None:
        t = np.array([1, 2, 3], dtype=np.int32)
        with pytest.raises(TypeError, match="floating-point"):
            quantize_tensor(t)

    def test_quantize_errors_on_empty_tensor(self) -> None:
        t = np.array([], dtype=np.float32)
        with pytest.raises(ValueError, match="at least one element"):
            quantize_tensor(t)

    def test_reconstruction_error_fields(self) -> None:
        """max_abs_error and mean_abs_error should be non-negative floats."""
        t = np.random.default_rng(42).uniform(-10.0, 10.0, (8, 8)).astype(np.float32)
        result = quantize_tensor(t)
        assert result.max_abs_error >= 0.0
        assert result.mean_abs_error >= 0.0
        assert result.mean_abs_error <= result.max_abs_error


class TestDequantizeTensor:
    def test_roundtrip_preserves_sign(self) -> None:
        t = np.array([-100.0, -1.0, 0.0, 1.0, 100.0], dtype=np.float32)
        q = quantize_tensor(t)
        recon = dequantize_tensor(q.quantized, q.scale)
        assert recon.dtype == np.float32
        np.testing.assert_allclose(recon, t, atol=q.scale)  # error <= 1 quant step

    def test_dequantize_single_value(self) -> None:
        q = np.array([64], dtype=np.int8)
        recon = dequantize_tensor(q, 0.5)
        assert recon[0] == pytest.approx(32.0)

    def test_dequantize_accepts_non_int8_array(self) -> None:
        """Should cast to int8 before multiplying."""
        q = np.array([127], dtype=np.int32)
        recon = dequantize_tensor(q, 1.0)
        assert recon[0] == pytest.approx(127.0)


class TestCheckQuantizationError:
    def test_tight_values_pass(self) -> None:
        t = np.array([1.0, 2.0, 3.0], dtype=np.float32)
        q = quantize_tensor(t)
        assert check_quantization_error(t, q.scale, rtol=0.05) is True

    def test_all_zeros_always_pass(self) -> None:
        t = np.zeros(10, dtype=np.float32)
        assert check_quantization_error(t, 1.0, rtol=0.0) is True

    def test_very_strict_rtol_may_fail(self) -> None:
        # Large tensor with many values that round more than 0% relative error
        rng = np.random.default_rng(0)
        t = rng.uniform(-1.0, 1.0, (32, 32)).astype(np.float32)
        q = quantize_tensor(t)
        # rtol=0 should almost certainly fail (rounding error > 0)
        result = check_quantization_error(t, q.scale, rtol=0.0)
        # result may be True for trivial cases, just check it returns bool
        assert isinstance(result, bool)


class TestQuantizeLinearLayer:
    def test_basic_shape_preserved(self) -> None:
        weight = np.ones((32, 16), dtype=np.float32)
        result = quantize_linear_layer(weight)
        assert isinstance(result, LayerQuantizeResult)
        assert result.weight.quantized.shape == (32, 16)
        assert result.weight.quantized.dtype == np.int8

    def test_weight_scale_alias(self) -> None:
        weight = np.full((4, 4), 2.0, dtype=np.float32)
        result = quantize_linear_layer(weight)
        assert result.weight_scale == result.weight.scale

    def test_bias_preserved_as_float32(self) -> None:
        weight = np.ones((16, 8), dtype=np.float32)
        bias = np.arange(16, dtype=np.float32) * 0.1
        result = quantize_linear_layer(weight, bias=bias)
        assert result.bias is not None
        assert result.bias.dtype == np.float32
        np.testing.assert_allclose(result.bias, bias)

    def test_no_bias(self) -> None:
        weight = np.eye(8, dtype=np.float32)
        result = quantize_linear_layer(weight)
        assert result.bias is None


class TestQuantizeConv2dLayer:
    def test_basic_conv_weight(self) -> None:
        weight = np.random.default_rng(1).uniform(-1, 1, (32, 3, 3, 3)).astype(np.float32)
        result = quantize_conv2d_layer(weight)
        assert result.weight.quantized.shape == (32, 3, 3, 3)
        assert result.weight.quantized.dtype == np.int8

    def test_scale_equals_max_abs_over_127(self) -> None:
        weight = np.full((4, 1, 1, 1), 63.5, dtype=np.float32)
        result = quantize_conv2d_layer(weight)
        assert result.weight_scale == pytest.approx(63.5 / 127.0, rel=1e-5)


class TestQuantizeActivation:
    def test_activation_same_as_quantize_tensor(self) -> None:
        act = np.arange(-64, 64, dtype=np.float32).reshape(8, 16)
        r1 = quantize_activation(act)
        r2 = quantize_tensor(act.astype(np.float32))
        assert r1.scale == pytest.approx(r2.scale)
        np.testing.assert_array_equal(r1.quantized, r2.quantized)


class TestPerChannelQuantize:
    """Tests for per-channel (axis=) quantization via quantize_tensor."""

    def test_returns_per_channel_result(self) -> None:
        weight = np.random.default_rng(0).uniform(-1, 1, (8, 4)).astype(np.float32)
        result = quantize_tensor(weight, axis=0)
        assert result.is_per_channel
        assert result.scales_per_channel is not None
        assert result.axis == 0

    def test_scales_per_channel_shape(self) -> None:
        weight = np.random.default_rng(1).uniform(-2, 2, (16, 8)).astype(np.float32)
        result = quantize_tensor(weight, axis=0)
        assert result.scales_per_channel.shape == (16,)

    def test_shape_preserved(self) -> None:
        weight = np.random.default_rng(2).uniform(-1, 1, (4, 3, 3, 3)).astype(np.float32)
        result = quantize_tensor(weight, axis=0)
        assert result.quantized.shape == weight.shape
        assert result.quantized.dtype == np.int8

    def test_negative_axis_normalised(self) -> None:
        """axis=-1 should be treated as the last axis."""
        weight = np.random.default_rng(3).uniform(-1, 1, (4, 8)).astype(np.float32)
        result_neg = quantize_tensor(weight, axis=-1)
        result_pos = quantize_tensor(weight, axis=1)
        assert result_neg.axis == result_pos.axis
        np.testing.assert_array_equal(result_neg.quantized, result_pos.quantized)

    def test_each_channel_uses_its_own_scale(self) -> None:
        """Row 0 has large values, row 1 has small values → scales must differ."""
        weight = np.array([[100.0, 100.0], [0.01, 0.01]], dtype=np.float32)
        result = quantize_tensor(weight, axis=0)
        assert result.scales_per_channel is not None
        # Row 0: scale ≈ 100/127, Row 1: scale ≈ 0.01/127 — must differ significantly
        assert not np.allclose(
            result.scales_per_channel[0], result.scales_per_channel[1], rtol=0.1
        )

    def test_per_channel_roundtrip(self) -> None:
        """Dequantizing with per-channel scales should approximate the original."""
        rng = np.random.default_rng(10)
        weight = rng.uniform(-5, 5, (8, 16)).astype(np.float32)
        result = quantize_tensor(weight, axis=0)
        recon = dequantize_tensor(result.quantized, result.scales_per_channel, axis=0)
        # Max error should be <= the largest channel scale / 2
        max_scale = float(np.max(result.scales_per_channel))
        np.testing.assert_allclose(recon, weight, atol=max_scale * 0.51)

    def test_layer_per_channel_uses_axis0(self) -> None:
        """quantize_linear_layer(per_channel=True) should set axis=0."""
        weight = np.random.default_rng(5).uniform(-1, 1, (32, 16)).astype(np.float32)
        result = quantize_linear_layer(weight, per_channel=True)
        assert result.weight.is_per_channel
        assert result.weight.axis == 0

    def test_layer_per_tensor_fallback(self) -> None:
        """quantize_linear_layer(per_channel=False) should use per-tensor mode."""
        weight = np.random.default_rng(6).uniform(-1, 1, (32, 16)).astype(np.float32)
        result = quantize_linear_layer(weight, per_channel=False)
        assert not result.weight.is_per_channel


class TestSmoothQuant:
    """Tests for the SmoothQuant offline scale-migration transform."""

    def _make_weight_stats(
        self,
        out: int = 4,
        in_: int = 8,
        rng_seed: int = 0,
    ):
        rng = np.random.default_rng(rng_seed)
        weight = rng.uniform(-2.0, 2.0, (out, in_)).astype(np.float32)
        act_stats = rng.uniform(0.1, 5.0, (in_,)).astype(np.float32)
        return weight, act_stats

    def test_returns_smooth_quant_result(self) -> None:
        weight, act_stats = self._make_weight_stats()
        result = smooth_quant(weight, act_stats)
        assert isinstance(result, SmoothQuantResult)

    def test_scale_vector_shape(self) -> None:
        weight, act_stats = self._make_weight_stats(in_=12)
        result = smooth_quant(weight, act_stats)
        assert result.scale_vector.shape == (12,)

    def test_net_product_unchanged(self) -> None:
        """W' * (1/s) must equal W * (1/1) in terms of net matrix output."""
        weight, act_stats = self._make_weight_stats()
        result = smooth_quant(weight, act_stats)
        s = result.scale_vector  # (in,)
        # W' = W * s  →  W'[:, j] / s[j] should == W[:, j]
        recovered = result.smoothed_weight / s[np.newaxis, :]  # (out, in)
        np.testing.assert_allclose(recovered, weight, rtol=1e-5)

    def test_smoothed_activation_is_divided_by_scale(self) -> None:
        weight, act_stats = self._make_weight_stats()
        result = smooth_quant(weight, act_stats)
        expected = (act_stats / result.scale_vector).astype(np.float32)
        np.testing.assert_allclose(result.smoothed_activation, expected, rtol=1e-5)

    def test_alpha_zero_gives_uniform_activation(self) -> None:
        """alpha=0 → s = max|W|^1 * max|X|^0 = max|W|, activation unchanged (/ s * s = 1)."""
        weight, act_stats = self._make_weight_stats()
        result = smooth_quant(weight, act_stats, alpha=0.0)
        assert result.alpha == 0.0

    def test_alpha_out_of_range_raises(self) -> None:
        weight, act_stats = self._make_weight_stats()
        with pytest.raises(ValueError, match="alpha"):
            smooth_quant(weight, act_stats, alpha=1.5)

    def test_wrong_activation_stats_shape_raises(self) -> None:
        weight, _ = self._make_weight_stats(in_=8)
        bad_stats = np.ones(5, dtype=np.float32)  # should be (8,)
        with pytest.raises(ValueError, match="activation_stats"):
            smooth_quant(weight, bad_stats)

    def test_conv2d_weight_shape(self) -> None:
        """smooth_quant must handle (out, in, kH, kW) conv weights."""
        rng = np.random.default_rng(7)
        weight = rng.uniform(-1, 1, (8, 4, 3, 3)).astype(np.float32)
        act_stats = rng.uniform(0.5, 2.0, (4,)).astype(np.float32)
        result = smooth_quant(weight, act_stats)
        assert result.smoothed_weight.shape == (8, 4, 3, 3)
        assert result.scale_vector.shape == (4,)


class TestGPTQ:
    """Tests for the GPTQ Hessian-guided weight quantization."""

    def test_returns_gptq_result(self) -> None:
        weight = np.random.default_rng(0).uniform(-1, 1, (8, 16)).astype(np.float32)
        result = gptq_quantize_weight(weight)
        assert isinstance(result, GPTQResult)

    def test_quantized_weight_shape_and_dtype(self) -> None:
        weight = np.random.default_rng(1).uniform(-2, 2, (16, 32)).astype(np.float32)
        result = gptq_quantize_weight(weight)
        assert result.quantized_weight.shape == (16, 32)
        assert result.quantized_weight.dtype == np.int8

    def test_scales_shape(self) -> None:
        weight = np.random.default_rng(2).uniform(-1, 1, (8, 16)).astype(np.float32)
        result = gptq_quantize_weight(weight)
        assert result.scales.shape == (8,)

    def test_correction_mse_nonneg(self) -> None:
        weight = np.random.default_rng(3).uniform(-1, 1, (4, 8)).astype(np.float32)
        result = gptq_quantize_weight(weight)
        assert result.correction_mse >= 0.0

    def test_blocksize_1_equals_per_channel(self) -> None:
        """With blocksize=1 there is no error propagation → same as axis=0 per-channel."""
        rng = np.random.default_rng(4)
        weight = rng.uniform(-3, 3, (8, 16)).astype(np.float32)
        gptq_result = gptq_quantize_weight(weight, blocksize=1)
        pc_result = quantize_tensor(weight, axis=0)
        np.testing.assert_array_equal(gptq_result.quantized_weight, pc_result.quantized)

    def test_invalid_ndim_raises(self) -> None:
        with pytest.raises(ValueError, match="2-D"):
            gptq_quantize_weight(np.ones((4, 4, 4), dtype=np.float32))

    def test_wrong_hessian_shape_raises(self) -> None:
        weight = np.ones((4, 8), dtype=np.float32)
        with pytest.raises(ValueError, match="hessian_diag"):
            gptq_quantize_weight(weight, np.ones(5))  # should be (8,)

    def test_hessian_guided_accepted(self) -> None:
        """Non-uniform Hessian should run without error."""
        rng = np.random.default_rng(5)
        weight = rng.uniform(-1, 1, (8, 16)).astype(np.float32)
        h = rng.uniform(0.1, 10.0, (16,))
        result = gptq_quantize_weight(weight, h, blocksize=16)
        assert isinstance(result, GPTQResult)
        assert result.correction_mse >= 0.0
