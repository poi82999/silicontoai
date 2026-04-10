"""
L6 Operator Fusion (Track B-1)

Applies compile-time IR rewrites that eliminate redundant compute steps.

Three passes are supported:
  - linear_relu_fusion:  Linear + ReLU → Linear(relu=True)
  - conv_relu_fusion:    Conv2d + ReLU → Conv2d(relu=True)
  - conv_bn_folding:     Conv2d + BatchNorm → Conv2d(bn_folded=True, folded weights/bias)

All passes operate on ``Program`` objects and return a new ``Program``.
The intermediate tensor produced by the consumed op is removed from
``program.tensors``.  The intermediate tensor must be used *only* by the
succeeding op; if it is a multi-consumer edge the pass skips the pair.

Usage::

    from l6_toolchain.fusion import apply_all_fusions
    result = apply_all_fusions(program, tensor_data=tensor_data)
    fused_program = result.program

When ``tensor_data`` is supplied, Conv+BN folding also computes the actual
folded weight and bias values and stores them in ``tensor_data`` so the
downstream emitter can use them directly.
"""

from __future__ import annotations

import math
from dataclasses import dataclass, replace
from typing import Any

import numpy as np

from .ir import OpNode, Program, TensorValue, validate_program


# ---------------------------------------------------------------------------
# Result container
# ---------------------------------------------------------------------------

@dataclass(frozen=True)
class FusionResult:
    """Returned by every fusion pass and by ``apply_all_fusions``."""
    program: Program
    fusions_applied: tuple[str, ...]


# ---------------------------------------------------------------------------
# Internal helpers
# ---------------------------------------------------------------------------

def _consumer_map(ops: tuple[OpNode, ...]) -> dict[str, list[int]]:
    """Map tensor name → list of op indices that consume it."""
    consumers: dict[str, list[int]] = {}
    for idx, op in enumerate(ops):
        for inp in op.inputs:
            consumers.setdefault(inp, []).append(idx)
    return consumers


def _single_consumer_ok(
    intermediate_name: str,
    consumer_map: dict[str, list[int]],
    expected_idx: int,
    program_outputs: tuple[str, ...],
) -> bool:
    """Return True only if the tensor has exactly one consumer and is not a
    program output (which would be a dangling reference after fusion)."""
    if intermediate_name in program_outputs:
        return False
    consumers = consumer_map.get(intermediate_name, [])
    return len(consumers) == 1 and consumers[0] == expected_idx


def _merge_tensors(
    tensors: tuple[TensorValue, ...],
    to_remove: set[str],
) -> tuple[TensorValue, ...]:
    return tuple(t for t in tensors if t.name not in to_remove)


# ---------------------------------------------------------------------------
# Pass 1: Linear + ReLU → Linear(relu=True)
# ---------------------------------------------------------------------------

def apply_linear_relu_fusion(program: Program) -> FusionResult:
    """Fuse consecutive Linear → ReLU pairs in *program*.

    The fused op is identical to the original Linear op except that the
    ``relu`` attribute is set to ``True`` and the output tensor is rewired to
    the ReLU output.  The intermediate activation tensor (linear output /
    relu input) is removed from ``program.tensors``.

    Returns a new :class:`FusionResult`.  If no pairs are found the returned
    ``program`` is the original object (identity).
    """
    ops = program.ops
    consumer_map = _consumer_map(ops)
    new_ops: list[OpNode] = []
    skip_indices: set[int] = set()
    removed_tensors: set[str] = set()
    fusion_names: list[str] = []

    for idx, op in enumerate(ops):
        if idx in skip_indices:
            continue
        if op.kind != "linear":
            new_ops.append(op)
            continue

        # Look for an immediately following relu that consumes op's sole output
        intermediate = op.outputs[0]
        if not _single_consumer_ok(intermediate, consumer_map, idx + 1, program.outputs):
            new_ops.append(op)
            continue

        # Peek at the next op
        if idx + 1 >= len(ops):
            new_ops.append(op)
            continue
        next_op = ops[idx + 1]
        if next_op.kind != "relu" or next_op.inputs != (intermediate,):
            new_ops.append(op)
            continue

        # Fuse: replace `op` output with `next_op` output, add relu=True
        fused = OpNode(
            name=op.name,
            kind="linear",
            inputs=op.inputs,
            outputs=next_op.outputs,
            attrs={**op.attrs, "relu": True},
        )
        new_ops.append(fused)
        skip_indices.add(idx + 1)
        removed_tensors.add(intermediate)
        fusion_names.append(f"linear_relu:{op.name}+{next_op.name}")

    if not fusion_names:
        return FusionResult(program=program, fusions_applied=())

    new_program = Program(
        inputs=program.inputs,
        tensors=_merge_tensors(program.tensors, removed_tensors),
        ops=tuple(new_ops),
        outputs=program.outputs,
    )
    validate_program(new_program)
    return FusionResult(program=new_program, fusions_applied=tuple(fusion_names))


# ---------------------------------------------------------------------------
# Pass 2: Conv2d + ReLU → Conv2d(relu=True)
# ---------------------------------------------------------------------------

def apply_conv_relu_fusion(program: Program) -> FusionResult:
    """Fuse consecutive Conv2d → ReLU pairs in *program*.

    Semantics are identical to :func:`apply_linear_relu_fusion` but for the
    ``conv2d`` kind.
    """
    ops = program.ops
    consumer_map = _consumer_map(ops)
    new_ops: list[OpNode] = []
    skip_indices: set[int] = set()
    removed_tensors: set[str] = set()
    fusion_names: list[str] = []

    for idx, op in enumerate(ops):
        if idx in skip_indices:
            continue
        if op.kind != "conv2d":
            new_ops.append(op)
            continue

        intermediate = op.outputs[0]
        if not _single_consumer_ok(intermediate, consumer_map, idx + 1, program.outputs):
            new_ops.append(op)
            continue

        if idx + 1 >= len(ops):
            new_ops.append(op)
            continue
        next_op = ops[idx + 1]
        if next_op.kind != "relu" or next_op.inputs != (intermediate,):
            new_ops.append(op)
            continue

        fused = OpNode(
            name=op.name,
            kind="conv2d",
            inputs=op.inputs,
            outputs=next_op.outputs,
            attrs={**op.attrs, "relu": True},
        )
        new_ops.append(fused)
        skip_indices.add(idx + 1)
        removed_tensors.add(intermediate)
        fusion_names.append(f"conv_relu:{op.name}+{next_op.name}")

    if not fusion_names:
        return FusionResult(program=program, fusions_applied=())

    new_program = Program(
        inputs=program.inputs,
        tensors=_merge_tensors(program.tensors, removed_tensors),
        ops=tuple(new_ops),
        outputs=program.outputs,
    )
    validate_program(new_program)
    return FusionResult(program=new_program, fusions_applied=tuple(fusion_names))


# ---------------------------------------------------------------------------
# Pass 3: Conv2d + BatchNorm → Conv2d(bn_folded=True)
# ---------------------------------------------------------------------------

def _fold_bn_into_conv(
    conv_attrs: dict[str, Any],
    bn_attrs: dict[str, Any],
    tensor_data: dict[str, Any] | None,
    conv_op_name: str,
    bn_op_name: str,
) -> dict[str, Any]:
    """Compute folded Conv attributes.

    When *tensor_data* is provided and contains the required BN parameters
    (``{bn_op_name}_weight``, ``{bn_op_name}_bias``, ``{bn_op_name}_running_mean``,
    ``{bn_op_name}_running_var``), the actual folded weight and bias are
    computed and stored in *tensor_data* under the keys
    ``{conv_op_name}_weight`` and ``{conv_op_name}_bias``.

    The returned attrs dict extends ``conv_attrs`` with ``bn_folded=True``
    and, if tensor_data was not available, structural BN parameter keys
    (``bn_num_features``, ``bn_eps``).
    """
    eps = float(bn_attrs.get("eps", 1e-5))
    extra: dict[str, Any] = {
        "bn_folded": True,
        "bn_num_features": bn_attrs.get("num_features"),
        "bn_eps": eps,
    }

    if tensor_data is not None:
        gamma = tensor_data.get(f"{bn_op_name}_weight")
        beta = tensor_data.get(f"{bn_op_name}_bias")
        mean = tensor_data.get(f"{bn_op_name}_running_mean")
        var = tensor_data.get(f"{bn_op_name}_running_var")
        conv_weight = tensor_data.get(f"{conv_op_name}_weight")

        if all(v is not None for v in (gamma, beta, mean, var, conv_weight)):
            gamma = np.asarray(gamma, dtype=np.float32)
            beta = np.asarray(beta, dtype=np.float32)
            mean = np.asarray(mean, dtype=np.float32)
            var = np.asarray(var, dtype=np.float32)
            conv_weight = np.asarray(conv_weight, dtype=np.float32)

            scale = gamma / np.sqrt(var + eps)  # shape: (out_channels,)
            conv_bias_raw = tensor_data.get(f"{conv_op_name}_bias")
            if conv_bias_raw is not None:
                b = np.asarray(conv_bias_raw, dtype=np.float32)
            else:
                b = np.zeros_like(mean)

            # Fold: W_new[c] = W[c] * scale[c],  b_new = scale * (b - mean) + beta
            # conv_weight shape: (out_channels, in_channels/groups, kH, kW)
            folded_weight = conv_weight * scale[:, None, None, None]
            folded_bias = scale * (b - mean) + beta

            tensor_data[f"{conv_op_name}_weight"] = folded_weight
            tensor_data[f"{conv_op_name}_bias"] = folded_bias
            extra["bn_weights_folded_numerically"] = True

    return {**conv_attrs, **extra}


def apply_conv_bn_folding(
    program: Program,
    tensor_data: dict[str, Any] | None = None,
) -> FusionResult:
    """Fold consecutive Conv2d → BatchNorm pairs in *program*.

    The BatchNorm is eliminated from the op list.  When *tensor_data*
    contains the BN running statistics and affine parameters, the conv
    weights are updated in-place in *tensor_data* to reflect the folded
    computation (see :func:`_fold_bn_into_conv`).

    The fused op is the original Conv2d op with ``bn_folded=True`` added to
    its attrs.  The intermediate activation tensor (conv output / bn input)
    is removed from ``program.tensors``.
    """
    ops = program.ops
    consumer_map = _consumer_map(ops)
    new_ops: list[OpNode] = []
    skip_indices: set[int] = set()
    removed_tensors: set[str] = set()
    fusion_names: list[str] = []

    for idx, op in enumerate(ops):
        if idx in skip_indices:
            continue
        if op.kind != "conv2d":
            new_ops.append(op)
            continue

        intermediate = op.outputs[0]
        if not _single_consumer_ok(intermediate, consumer_map, idx + 1, program.outputs):
            new_ops.append(op)
            continue

        if idx + 1 >= len(ops):
            new_ops.append(op)
            continue
        next_op = ops[idx + 1]
        if next_op.kind != "batch_norm" or next_op.inputs[0] != intermediate:
            new_ops.append(op)
            continue

        new_attrs = _fold_bn_into_conv(
            conv_attrs=dict(op.attrs),
            bn_attrs=dict(next_op.attrs),
            tensor_data=tensor_data,
            conv_op_name=op.name,
            bn_op_name=next_op.name,
        )
        fused = OpNode(
            name=op.name,
            kind="conv2d",
            inputs=op.inputs,
            outputs=next_op.outputs,
            attrs=new_attrs,
        )
        new_ops.append(fused)
        skip_indices.add(idx + 1)
        removed_tensors.add(intermediate)
        fusion_names.append(f"conv_bn:{op.name}+{next_op.name}")

    if not fusion_names:
        return FusionResult(program=program, fusions_applied=())

    new_program = Program(
        inputs=program.inputs,
        tensors=_merge_tensors(program.tensors, removed_tensors),
        ops=tuple(new_ops),
        outputs=program.outputs,
    )
    validate_program(new_program)
    return FusionResult(program=new_program, fusions_applied=tuple(fusion_names))


# ---------------------------------------------------------------------------
# Composite: apply all passes in order
# ---------------------------------------------------------------------------

def apply_all_fusions(
    program: Program,
    tensor_data: dict[str, Any] | None = None,
    *,
    enable_linear_relu: bool = True,
    enable_conv_relu: bool = True,
    enable_conv_bn: bool = True,
) -> FusionResult:
    """Apply all fusion passes to *program* in a fixed order.

    Pass order:

    1. Conv2d + BatchNorm folding (must run before Conv+ReLU so that
       a Conv+BN+ReLU sequence can become Conv(bn_folded)+ReLU which is
       then folded further to Conv(bn_folded, relu=True)).
    2. Conv2d + ReLU fusion.
    3. Linear + ReLU fusion.

    Returns a :class:`FusionResult` whose ``fusions_applied`` field
    concatenates the names from all successful sub-passes.
    """
    all_fusions: list[str] = []
    current = program

    if enable_conv_bn:
        r = apply_conv_bn_folding(current, tensor_data=tensor_data)
        current = r.program
        all_fusions.extend(r.fusions_applied)

    if enable_conv_relu:
        r = apply_conv_relu_fusion(current)
        current = r.program
        all_fusions.extend(r.fusions_applied)

    if enable_linear_relu:
        r = apply_linear_relu_fusion(current)
        current = r.program
        all_fusions.extend(r.fusions_applied)

    return FusionResult(program=current, fusions_applied=tuple(all_fusions))


__all__ = [
    "FusionResult",
    "apply_linear_relu_fusion",
    "apply_conv_relu_fusion",
    "apply_conv_bn_folding",
    "apply_all_fusions",
]
