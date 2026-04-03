from __future__ import annotations

import operator
from typing import Any

import numpy as np

from .ir import OpNode, Program, TensorValue

_OPERATOR_ADD = operator.add


def trace_torch_module(model: Any, input_shape: tuple[int, ...]) -> Program:
    """Trace a PyTorch nn.Module via torch.fx and convert to an L6 Program.

    Supported ops: linear, conv2d, relu, add, batch_norm, max_pool2d,
    adaptive_avg_pool2d, flatten.
    """
    import torch
    import torch.fx
    import torch.nn as nn

    traced = torch.fx.symbolic_trace(model)
    graph = traced.graph

    tensor_shapes: dict[str, tuple[int, ...]] = {}
    tensor_dtypes: dict[str, str] = {}

    # Run a shape inference pass with a dummy input
    model.eval()
    dummy = torch.zeros(input_shape, dtype=torch.float32)
    env: dict[str, torch.Tensor] = {}

    tensors: list[TensorValue] = []
    ops: list[OpNode] = []
    inputs: list[TensorValue] = []
    output_names: list[str] = []

    def _tensor_name(node: torch.fx.Node) -> str:
        return str(node.name)

    def _record_tensor(name: str, shape: tuple[int, ...], dtype: str = "int8") -> None:
        if name not in tensor_shapes:
            tensor_shapes[name] = shape
            tensor_dtypes[name] = dtype
            tensors.append(TensorValue(name=name, shape=shape, dtype=dtype))

    def _extract_params(module: nn.Module, param_name: str) -> list[Any]:
        param = getattr(module, param_name, None)
        if param is None:
            return []
        return param.detach().cpu().numpy().tolist()

    for node in graph.nodes:
        if node.op == "placeholder":
            name = _tensor_name(node)
            env[name] = dummy
            _record_tensor(name, tuple(dummy.shape))
            inputs.append(TensorValue(name=name, shape=tuple(dummy.shape)))

        elif node.op == "call_module":
            target_module = traced.get_submodule(str(node.target))
            input_names = tuple(_tensor_name(arg) for arg in node.args if isinstance(arg, torch.fx.Node))
            output_name = _tensor_name(node)

            input_tensors = [env[n] for n in input_names]
            with torch.no_grad():
                out = target_module(*input_tensors)
            env[output_name] = out

            if isinstance(target_module, nn.Linear):
                out_dtype = "int32"
                _record_tensor(output_name, tuple(out.shape), out_dtype)
                attrs: dict[str, Any] = {
                    "in_features": target_module.in_features,
                    "out_features": target_module.out_features,
                    "weight": _extract_params(target_module, "weight"),
                }
                if target_module.bias is not None:
                    attrs["bias"] = _extract_params(target_module, "bias")
                ops.append(OpNode(name=output_name, kind="linear", inputs=input_names, outputs=(output_name,), attrs=attrs))

            elif isinstance(target_module, nn.Conv2d):
                out_dtype = "int32"
                _record_tensor(output_name, tuple(out.shape), out_dtype)
                attrs = {
                    "in_channels": target_module.in_channels,
                    "out_channels": target_module.out_channels,
                    "kernel_size": target_module.kernel_size,
                    "stride": target_module.stride,
                    "padding": target_module.padding,
                    "dilation": target_module.dilation,
                    "groups": target_module.groups,
                    "weight": _extract_params(target_module, "weight"),
                }
                if target_module.bias is not None:
                    attrs["bias"] = _extract_params(target_module, "bias")
                ops.append(OpNode(name=output_name, kind="conv2d", inputs=input_names, outputs=(output_name,), attrs=attrs))

            elif isinstance(target_module, nn.ReLU):
                _record_tensor(output_name, tuple(out.shape), tensor_dtypes.get(input_names[0], "int8"))
                ops.append(OpNode(name=output_name, kind="relu", inputs=input_names, outputs=(output_name,)))

            elif isinstance(target_module, nn.BatchNorm2d):
                _record_tensor(output_name, tuple(out.shape), tensor_dtypes.get(input_names[0], "int8"))
                attrs = {
                    "num_features": target_module.num_features,
                    "eps": target_module.eps,
                    "momentum": target_module.momentum,
                    "weight": _extract_params(target_module, "weight"),
                    "bias": _extract_params(target_module, "bias"),
                    "running_mean": _extract_params(target_module, "running_mean"),
                    "running_var": _extract_params(target_module, "running_var"),
                }
                ops.append(OpNode(name=output_name, kind="batch_norm", inputs=input_names, outputs=(output_name,), attrs=attrs))

            elif isinstance(target_module, nn.MaxPool2d):
                _record_tensor(output_name, tuple(out.shape), tensor_dtypes.get(input_names[0], "int8"))
                attrs = {
                    "kernel_size": target_module.kernel_size if isinstance(target_module.kernel_size, tuple) else (target_module.kernel_size, target_module.kernel_size),
                    "stride": target_module.stride if isinstance(target_module.stride, tuple) else (target_module.stride, target_module.stride),
                    "padding": target_module.padding if isinstance(target_module.padding, tuple) else (target_module.padding, target_module.padding),
                }
                ops.append(OpNode(name=output_name, kind="max_pool2d", inputs=input_names, outputs=(output_name,), attrs=attrs))

            elif isinstance(target_module, nn.AdaptiveAvgPool2d):
                _record_tensor(output_name, tuple(out.shape), tensor_dtypes.get(input_names[0], "int8"))
                output_size = target_module.output_size
                if isinstance(output_size, int):
                    output_size = (output_size, output_size)
                attrs = {"output_size": output_size}
                ops.append(OpNode(name=output_name, kind="adaptive_avg_pool2d", inputs=input_names, outputs=(output_name,), attrs=attrs))

            elif isinstance(target_module, nn.Flatten):
                _record_tensor(output_name, tuple(out.shape), tensor_dtypes.get(input_names[0], "int8"))
                attrs = {"start_dim": target_module.start_dim}
                ops.append(OpNode(name=output_name, kind="flatten", inputs=input_names, outputs=(output_name,), attrs=attrs))

            else:
                raise ValueError(f"Unsupported module type in torch.fx trace: {type(target_module).__name__}")

        elif node.op == "call_function":
            input_names = tuple(_tensor_name(arg) for arg in node.args if isinstance(arg, torch.fx.Node))
            output_name = _tensor_name(node)

            if node.target is torch.add or node.target is _OPERATOR_ADD:
                input_tensors = [env[n] for n in input_names]
                out = input_tensors[0] + input_tensors[1]
                env[output_name] = out
                _record_tensor(output_name, tuple(out.shape), tensor_dtypes.get(input_names[0], "int8"))
                ops.append(OpNode(name=output_name, kind="add", inputs=input_names, outputs=(output_name,)))

            elif node.target is torch.flatten:
                start_dim = node.args[1] if len(node.args) > 1 else node.kwargs.get("start_dim", 1)
                input_tensors = [env[n] for n in input_names]
                out = torch.flatten(input_tensors[0], int(start_dim))
                env[output_name] = out
                _record_tensor(output_name, tuple(out.shape), tensor_dtypes.get(input_names[0], "int8"))
                ops.append(OpNode(name=output_name, kind="flatten", inputs=input_names, outputs=(output_name,), attrs={"start_dim": int(start_dim)}))

            elif node.target is torch.relu or node.target is torch.nn.functional.relu:
                input_tensors = [env[n] for n in input_names]
                out = torch.relu(input_tensors[0])
                env[output_name] = out
                _record_tensor(output_name, tuple(out.shape), tensor_dtypes.get(input_names[0], "int8"))
                ops.append(OpNode(name=output_name, kind="relu", inputs=input_names, outputs=(output_name,)))

            elif node.target is torch.nn.functional.adaptive_avg_pool2d:
                input_tensors = [env[n] for n in input_names]
                output_size = node.args[1] if len(node.args) > 1 else node.kwargs.get("output_size")
                out = torch.nn.functional.adaptive_avg_pool2d(input_tensors[0], output_size)
                env[output_name] = out
                if isinstance(output_size, int):
                    output_size = (output_size, output_size)
                _record_tensor(output_name, tuple(out.shape), tensor_dtypes.get(input_names[0], "int8"))
                ops.append(OpNode(name=output_name, kind="adaptive_avg_pool2d", inputs=input_names, outputs=(output_name,), attrs={"output_size": output_size}))

            else:
                raise ValueError(f"Unsupported function in torch.fx trace: {node.target}")

        elif node.op == "call_method":
            input_names = tuple(_tensor_name(arg) for arg in node.args if isinstance(arg, torch.fx.Node))
            output_name = _tensor_name(node)

            if node.target == "flatten":
                start_dim = node.args[1] if len(node.args) > 1 else node.kwargs.get("start_dim", 1)
                out = env[input_names[0]].flatten(int(start_dim))
                env[output_name] = out
                _record_tensor(output_name, tuple(out.shape), tensor_dtypes.get(input_names[0], "int8"))
                ops.append(OpNode(name=output_name, kind="flatten", inputs=input_names, outputs=(output_name,), attrs={"start_dim": int(start_dim)}))

            elif node.target == "add" or node.target == "__add__":
                input_tensors = [env[n] for n in input_names]
                out = input_tensors[0] + input_tensors[1]
                env[output_name] = out
                _record_tensor(output_name, tuple(out.shape), tensor_dtypes.get(input_names[0], "int8"))
                ops.append(OpNode(name=output_name, kind="add", inputs=input_names, outputs=(output_name,)))

            else:
                raise ValueError(f"Unsupported method in torch.fx trace: {node.target}")

        elif node.op == "output":
            for arg in node.args:
                if isinstance(arg, torch.fx.Node):
                    output_names.append(_tensor_name(arg))
                elif isinstance(arg, (tuple, list)):
                    for item in arg:
                        if isinstance(item, torch.fx.Node):
                            output_names.append(_tensor_name(item))

    return Program(
        inputs=tuple(inputs),
        tensors=tuple(tensors),
        ops=tuple(ops),
        outputs=tuple(output_names),
    )


