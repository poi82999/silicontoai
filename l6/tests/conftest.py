from __future__ import annotations

import sys
from pathlib import Path

import numpy as np


ROOT = Path(__file__).resolve().parents[2]
SRC = ROOT / "l6" / "src"
if str(SRC) not in sys.path:
    sys.path.insert(0, str(SRC))


class FakeTorchLinear:
    def __init__(self, in_features: int, out_features: int) -> None:
        self.in_features = in_features
        self.out_features = out_features


class FakeTensor:
    def __init__(self, array: list[list[int]] | list[int]) -> None:
        self._array = np.asarray(array)

    def detach(self) -> FakeTensor:
        return self

    def cpu(self) -> FakeTensor:
        return self

    def numpy(self) -> np.ndarray:
        return self._array


class FakeTorchLinearWithParams:
    def __init__(self, in_features: int, out_features: int, weight: list[list[int]], bias: list[int] | None = None) -> None:
        self.in_features = in_features
        self.out_features = out_features
        self.weight = FakeTensor(weight)
        self.bias = None if bias is None else FakeTensor(bias)


class FakeTorchConv2dWithParams:
    def __init__(
        self,
        *,
        in_channels: int,
        out_channels: int,
        kernel_size: tuple[int, int],
        weight: list[list[list[list[int]]]],
        bias: list[int] | None = None,
        stride: int | tuple[int, int] = 1,
        padding: int | tuple[int, int] = 0,
        dilation: int | tuple[int, int] = 1,
        groups: int = 1,
    ) -> None:
        self.in_channels = in_channels
        self.out_channels = out_channels
        self.kernel_size = kernel_size
        self.weight = FakeTensor(weight)
        self.bias = None if bias is None else FakeTensor(bias)
        self.stride = stride
        self.padding = padding
        self.dilation = dilation
        self.groups = groups