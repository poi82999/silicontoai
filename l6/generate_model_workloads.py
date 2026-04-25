"""Generate real-model-layer workload packages (Track E-1).

Four model workloads:
  1. MobileNetV2 first layer: Conv2d(3,32,3,stride=2,padding=1) + BN + ReLU
  2. ResNet-18 residual block: Conv+BN+ReLU + Conv+BN + skip-add
  3. Transformer QKV projection: Linear(768, 2304)
  4. Transformer FFN block: Linear → GELU → Linear (broader op coverage)

Each is compiled via ``compile_program`` and written under ``workloads/``.
"""
from __future__ import annotations

import sys
from pathlib import Path

import numpy as np

# Ensure l6/src is importable
_SRC = Path(__file__).resolve().parent / "src"
if str(_SRC) not in sys.path:
    sys.path.insert(0, str(_SRC))

from l6_toolchain.compiler import CompilerOptions, compile_program
from l6_toolchain.ir import OpNode, Program, TensorValue


WORKLOADS_DIR = Path(__file__).resolve().parent.parent / "workloads"


# ---------------------------------------------------------------------------
# 1. MobileNetV2 first layer
# ---------------------------------------------------------------------------

def _mobilenet_v2_layer1_program() -> tuple[Program, dict[str, np.ndarray]]:
    """Conv2d(3,32,3,stride=2,padding=1) + BN + ReLU6 (treated as ReLU).

    Input: (1, 3, 32, 32) → Output: (1, 32, 16, 16)
    Scaled-down from 224×224 to keep tile count practical.
    """
    rng = np.random.default_rng(42)

    # Tensor shapes
    x_shape = (1, 3, 32, 32)
    conv_out_shape = (1, 32, 16, 16)

    # Random weights (INT8 range for NPU)
    conv_weight = rng.integers(-8, 8, size=(32, 3, 3, 3), dtype=np.int8)
    conv_bias = rng.integers(-16, 16, size=(32,), dtype=np.int8)
    bn_weight = np.ones(32, dtype=np.float32)
    bn_bias = np.zeros(32, dtype=np.float32)
    bn_running_mean = np.zeros(32, dtype=np.float32)
    bn_running_var = np.ones(32, dtype=np.float32)

    program = Program(
        inputs=(TensorValue("x", x_shape, "int8"),),
        tensors=(
            TensorValue("x", x_shape, "int8"),
            TensorValue("conv0_out", conv_out_shape, "int32"),
            TensorValue("bn0_out", conv_out_shape, "int8"),
            TensorValue("relu0_out", conv_out_shape, "int8"),
        ),
        ops=(
            OpNode("conv0", "conv2d", ("x",), ("conv0_out",), {
                "in_channels": 3, "out_channels": 32,
                "kernel_size": (3, 3), "stride": (2, 2),
                "padding": (1, 1), "dilation": (1, 1), "groups": 1,
                "weight": conv_weight.tolist(),
                "bias": conv_bias.tolist(),
            }),
            OpNode("bn0", "batch_norm", ("conv0_out",), ("bn0_out",), {
                "num_features": 32, "eps": 1e-5, "momentum": 0.1,
                "weight": bn_weight.tolist(),
                "bias": bn_bias.tolist(),
                "running_mean": bn_running_mean.tolist(),
                "running_var": bn_running_var.tolist(),
            }),
            OpNode("relu0", "relu", ("bn0_out",), ("relu0_out",)),
        ),
        outputs=("relu0_out",),
    )

    # Input tensor data
    tensor_data = {
        "x": rng.integers(-128, 127, size=x_shape, dtype=np.int8),
    }

    return program, tensor_data


def generate_mobilenet_v2_layer1() -> Path:
    print("Generating MobileNetV2 layer1 workload...")
    program, tensor_data = _mobilenet_v2_layer1_program()
    output_dir = WORKLOADS_DIR / "model_mobilenet_v2_layer1"
    options = CompilerOptions(
        package_id="model_mobilenet_v2_layer1",
        output_dir=output_dir,
        tiled=True,
        replay_enabled=True,
        tensor_data=tensor_data,
        enable_fusion=True,
    )
    result = compile_program(program, options=options)
    print(f"  Steps: {len(result.plan.step_plans)} ({result.plan.total_compute_steps} compute)")
    print(f"  Estimated cycles: {result.plan.total_estimated_cycles}")
    print(f"  Replay packages: {len(result.artifacts.replay_package_dirs)}")
    return output_dir


# ---------------------------------------------------------------------------
# 2. ResNet-18 residual block
# ---------------------------------------------------------------------------

def _resnet18_block1_program() -> tuple[Program, dict[str, np.ndarray]]:
    """Conv+BN+ReLU + Conv+BN + skip-add.

    Block: x → Conv(64,64,3,pad=1)+BN+ReLU → Conv(64,64,3,pad=1)+BN → add(x, ·) → out
    Input: (1, 64, 8, 8)  (scaled-down from 56×56)
    """
    rng = np.random.default_rng(123)

    x_shape = (1, 64, 8, 8)
    mid_shape = (1, 64, 8, 8)  # same spatial dims

    # Conv1 weights
    conv1_weight = rng.integers(-8, 8, size=(64, 64, 3, 3), dtype=np.int8)
    conv1_bias = rng.integers(-16, 16, size=(64,), dtype=np.int8)
    bn1_weight = np.ones(64, dtype=np.float32)
    bn1_bias = np.zeros(64, dtype=np.float32)
    bn1_mean = np.zeros(64, dtype=np.float32)
    bn1_var = np.ones(64, dtype=np.float32)

    # Conv2 weights
    conv2_weight = rng.integers(-8, 8, size=(64, 64, 3, 3), dtype=np.int8)
    conv2_bias = rng.integers(-16, 16, size=(64,), dtype=np.int8)
    bn2_weight = np.ones(64, dtype=np.float32)
    bn2_bias = np.zeros(64, dtype=np.float32)
    bn2_mean = np.zeros(64, dtype=np.float32)
    bn2_var = np.ones(64, dtype=np.float32)

    program = Program(
        inputs=(TensorValue("x", x_shape, "int8"),),
        tensors=(
            TensorValue("x", x_shape, "int8"),
            TensorValue("conv1_out", mid_shape, "int32"),
            TensorValue("bn1_out", mid_shape, "int8"),
            TensorValue("relu1_out", mid_shape, "int8"),
            TensorValue("conv2_out", mid_shape, "int32"),
            TensorValue("bn2_out", mid_shape, "int8"),
            TensorValue("add_out", mid_shape, "int32"),
        ),
        ops=(
            OpNode("conv1", "conv2d", ("x",), ("conv1_out",), {
                "in_channels": 64, "out_channels": 64,
                "kernel_size": (3, 3), "stride": (1, 1),
                "padding": (1, 1), "dilation": (1, 1), "groups": 1,
                "weight": conv1_weight.tolist(),
                "bias": conv1_bias.tolist(),
            }),
            OpNode("bn1", "batch_norm", ("conv1_out",), ("bn1_out",), {
                "num_features": 64, "eps": 1e-5, "momentum": 0.1,
                "weight": bn1_weight.tolist(), "bias": bn1_bias.tolist(),
                "running_mean": bn1_mean.tolist(), "running_var": bn1_var.tolist(),
            }),
            OpNode("relu1", "relu", ("bn1_out",), ("relu1_out",)),
            OpNode("conv2", "conv2d", ("relu1_out",), ("conv2_out",), {
                "in_channels": 64, "out_channels": 64,
                "kernel_size": (3, 3), "stride": (1, 1),
                "padding": (1, 1), "dilation": (1, 1), "groups": 1,
                "weight": conv2_weight.tolist(),
                "bias": conv2_bias.tolist(),
            }),
            OpNode("bn2", "batch_norm", ("conv2_out",), ("bn2_out",), {
                "num_features": 64, "eps": 1e-5, "momentum": 0.1,
                "weight": bn2_weight.tolist(), "bias": bn2_bias.tolist(),
                "running_mean": bn2_mean.tolist(), "running_var": bn2_var.tolist(),
            }),
            OpNode("add0", "add", ("x", "bn2_out"), ("add_out",)),
        ),
        outputs=("add_out",),
    )

    tensor_data = {
        "x": rng.integers(-128, 127, size=x_shape, dtype=np.int8),
    }

    return program, tensor_data


def generate_resnet18_block1() -> Path:
    print("Generating ResNet-18 block1 workload...")
    program, tensor_data = _resnet18_block1_program()
    output_dir = WORKLOADS_DIR / "model_resnet18_block1"
    options = CompilerOptions(
        package_id="model_resnet18_block1",
        output_dir=output_dir,
        tiled=True,
        replay_enabled=True,
        tensor_data=tensor_data,
        enable_fusion=True,
    )
    result = compile_program(program, options=options)
    print(f"  Steps: {len(result.plan.step_plans)} ({result.plan.total_compute_steps} compute)")
    print(f"  Estimated cycles: {result.plan.total_estimated_cycles}")
    print(f"  Replay packages: {len(result.artifacts.replay_package_dirs)}")
    return output_dir


# ---------------------------------------------------------------------------
# 3. Transformer QKV projection
# ---------------------------------------------------------------------------

def _transformer_qkv_program() -> tuple[Program, dict[str, np.ndarray]]:
    """Linear(128, 384) — scaled-down QKV projection (128-dim, 3 heads).

    Input: (1, 128) → Output: (1, 384)
    Scaled from 768→128 to keep tile count manageable.
    """
    rng = np.random.default_rng(999)

    x_shape = (1, 128)
    out_shape = (1, 384)

    weight = rng.integers(-8, 8, size=(384, 128), dtype=np.int8)
    bias = rng.integers(-16, 16, size=(384,), dtype=np.int8)

    program = Program(
        inputs=(TensorValue("x", x_shape, "int8"),),
        tensors=(
            TensorValue("x", x_shape, "int8"),
            TensorValue("qkv_out", out_shape, "int32"),
        ),
        ops=(
            OpNode("qkv_proj", "linear", ("x",), ("qkv_out",), {
                "in_features": 128, "out_features": 384,
                "weight": weight.tolist(),
                "bias": bias.tolist(),
            }),
        ),
        outputs=("qkv_out",),
    )

    tensor_data = {
        "x": rng.integers(-128, 127, size=x_shape, dtype=np.int8),
    }

    return program, tensor_data


def generate_transformer_qkv() -> Path:
    print("Generating Transformer QKV workload...")
    program, tensor_data = _transformer_qkv_program()
    output_dir = WORKLOADS_DIR / "model_transformer_qkv"
    options = CompilerOptions(
        package_id="model_transformer_qkv",
        output_dir=output_dir,
        tiled=True,
        replay_enabled=True,
        tensor_data=tensor_data,
        enable_fusion=True,
    )
    result = compile_program(program, options=options)
    print(f"  Steps: {len(result.plan.step_plans)} ({result.plan.total_compute_steps} compute)")
    print(f"  Estimated cycles: {result.plan.total_estimated_cycles}")
    print(f"  Replay packages: {len(result.artifacts.replay_package_dirs)}")
    return output_dir


# ---------------------------------------------------------------------------
# 4. Transformer FFN block (Linear -> GELU -> Linear)
# ---------------------------------------------------------------------------

def _transformer_ffn_program() -> tuple[Program, dict[str, np.ndarray]]:
    """Standard Transformer FFN: Linear(d, 4d) -> GELU -> Linear(4d, d).

    Exercises the broader op coverage path: linear chain + GELU activation.
    Input: (1, 64) -> hidden (1, 256) -> output (1, 64).
    """
    rng = np.random.default_rng(2026)

    d_model = 64
    d_ff = 256
    x_shape = (1, d_model)
    hidden_shape = (1, d_ff)
    out_shape = (1, d_model)

    fc1_weight = rng.integers(-8, 8, size=(d_ff, d_model), dtype=np.int8)
    fc1_bias = rng.integers(-16, 16, size=(d_ff,), dtype=np.int8)
    fc2_weight = rng.integers(-8, 8, size=(d_model, d_ff), dtype=np.int8)
    fc2_bias = rng.integers(-16, 16, size=(d_model,), dtype=np.int8)

    program = Program(
        inputs=(TensorValue("x", x_shape, "int8"),),
        tensors=(
            TensorValue("x", x_shape, "int8"),
            TensorValue("fc1_out", hidden_shape, "int32"),
            TensorValue("gelu_out", hidden_shape, "int32"),
            TensorValue("fc2_out", out_shape, "int32"),
        ),
        ops=(
            OpNode("fc1", "linear", ("x",), ("fc1_out",), {
                "in_features": d_model, "out_features": d_ff,
                "weight": fc1_weight.tolist(),
                "bias": fc1_bias.tolist(),
            }),
            OpNode("gelu0", "gelu", ("fc1_out",), ("gelu_out",)),
            OpNode("fc2", "linear", ("gelu_out",), ("fc2_out",), {
                "in_features": d_ff, "out_features": d_model,
                "weight": fc2_weight.tolist(),
                "bias": fc2_bias.tolist(),
            }),
        ),
        outputs=("fc2_out",),
    )

    tensor_data = {
        "x": rng.integers(-8, 8, size=x_shape, dtype=np.int8),
    }

    return program, tensor_data


def generate_transformer_ffn() -> Path:
    print("Generating Transformer FFN workload...")
    program, tensor_data = _transformer_ffn_program()
    output_dir = WORKLOADS_DIR / "model_transformer_ffn"
    options = CompilerOptions(
        package_id="model_transformer_ffn",
        output_dir=output_dir,
        tiled=True,
        replay_enabled=True,
        tensor_data=tensor_data,
        enable_fusion=True,
    )
    result = compile_program(program, options=options)
    print(f"  Steps: {len(result.plan.step_plans)} ({result.plan.total_compute_steps} compute)")
    print(f"  Estimated cycles: {result.plan.total_estimated_cycles}")
    print(f"  Replay packages: {len(result.artifacts.replay_package_dirs)}")
    return output_dir


# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------

def main() -> None:
    print(f"Output directory: {WORKLOADS_DIR}\n")

    dirs: list[Path] = []
    dirs.append(generate_mobilenet_v2_layer1())
    print()
    dirs.append(generate_resnet18_block1())
    print()
    dirs.append(generate_transformer_qkv())
    print()
    dirs.append(generate_transformer_ffn())

    print("\n=== Summary ===")
    for d in dirs:
        print(f"  {d.relative_to(WORKLOADS_DIR.parent)}")
    print(f"\nDone. {len(dirs)} model workload packages generated.")


if __name__ == "__main__":
    main()
