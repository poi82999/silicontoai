from __future__ import annotations

from dataclasses import dataclass
from typing import Protocol

TILE_SIZE = 16


class SupportsLinearShape(Protocol):
    m: int
    k: int
    n: int


@dataclass(frozen=True)
class TilePlanEntry:
    m_tile_base: int = 0
    n_tile_base: int = 0
    k_tile_base: int = 0
    tile_m: int = TILE_SIZE
    tile_k: int = TILE_SIZE
    tile_n: int = TILE_SIZE
    k_pass_index: int = 0
    k_tile_count: int = 1
    acc_clear: bool = False
    emit_drain_after: bool = False


def _tile_count(dim: int) -> int:
    return (dim + TILE_SIZE - 1) // TILE_SIZE


def plan_linear_tiles(spec: SupportsLinearShape) -> list[TilePlanEntry]:
    output_tiles: list[TilePlanEntry] = []

    m_tile_count = _tile_count(spec.m)
    k_tile_count = _tile_count(spec.k)
    n_tile_count = _tile_count(spec.n)

    for m_tile in range(m_tile_count):
        for n_tile in range(n_tile_count):
            for k_pass_index in range(k_tile_count):
                m_tile_base = m_tile * TILE_SIZE
                n_tile_base = n_tile * TILE_SIZE
                k_tile_base = k_pass_index * TILE_SIZE

                tile_m = min(TILE_SIZE, spec.m - m_tile_base)
                tile_k = min(TILE_SIZE, spec.k - k_tile_base)
                tile_n = min(TILE_SIZE, spec.n - n_tile_base)

                output_tiles.append(
                    TilePlanEntry(
                        m_tile_base=m_tile_base,
                        n_tile_base=n_tile_base,
                        k_tile_base=k_tile_base,
                        tile_m=tile_m,
                        tile_k=tile_k,
                        tile_n=tile_n,
                        k_pass_index=k_pass_index,
                        k_tile_count=k_tile_count,
                        acc_clear=k_pass_index == 0,
                        emit_drain_after=k_pass_index == k_tile_count - 1,
                    )
                )

    return output_tiles


__all__ = ["SupportsLinearShape", "TILE_SIZE", "TilePlanEntry", "plan_linear_tiles"]