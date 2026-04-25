# 32. `lowering.py` — GEMM 타일링

> **파일 위치**: `l6/src/l6_toolchain/lowering.py` (68줄)
> **역할**: 큰 GEMM `(M, K, N)`을 16×16×16 타일들로 쪼개어 실행 순서를 만드는 함수
> **선수 지식**: [28_ir.md](28_ir.md), GEMM `(M,K,N)` 차원 의미, accumulator 개념
> **공장 비유**: 공정설계자 — 큰 주문(GEMM)을 16개씩 묶음(타일)으로 분할해서 작업 카드를 발행

---

## 이 파일이 중요한 이유

68줄밖에 안 되지만 **전체 시스템의 핵심 가정**이 들어 있습니다: NPU의 systolic array가 **16×16 한 사이즈만** 처리할 수 있다는 점, 따라서 모든 GEMM이 16의 배수가 아니면 **tail tile**이 발생한다는 점, 그리고 K축이 16보다 크면 **split-K** (여러 패스로 나눠서 누산)가 필요하다는 점.

---

## 전체 코드 한눈에

```python
TILE_SIZE = 16

class SupportsLinearShape(Protocol):
    m: int; k: int; n: int

@dataclass(frozen=True)
class TilePlanEntry:
    m_tile_base: int = 0      # 이 타일의 M축 시작 좌표
    n_tile_base: int = 0      # N축 시작 좌표
    k_tile_base: int = 0      # K축 시작 좌표
    tile_m: int = TILE_SIZE   # 이 타일의 실제 m 크기 (≤16, tail이면 더 작음)
    tile_k: int = TILE_SIZE
    tile_n: int = TILE_SIZE
    k_pass_index: int = 0     # split-K 시 몇 번째 K 패스인지
    k_tile_count: int = 1     # K가 몇 패스로 나뉘는지
    acc_clear: bool = False   # 누산기를 처음에 0으로 만들지
    emit_drain_after: bool = False  # 마지막 K 패스 후 결과 drain
```

---

## 핵심 함수: `plan_linear_tiles` (L33-66)

```python
def plan_linear_tiles(spec: SupportsLinearShape) -> list[TilePlanEntry]:
    m_tile_count = _tile_count(spec.m)   # ceil(M/16)
    k_tile_count = _tile_count(spec.k)
    n_tile_count = _tile_count(spec.n)

    for m_tile in range(m_tile_count):
        for n_tile in range(n_tile_count):
            for k_pass_index in range(k_tile_count):
                ...
                output_tiles.append(TilePlanEntry(
                    m_tile_base=m_tile_base,
                    n_tile_base=n_tile_base,
                    k_tile_base=k_tile_base,
                    tile_m=tile_m,    # min(16, M - base)
                    tile_k=tile_k,
                    tile_n=tile_n,
                    k_pass_index=k_pass_index,
                    k_tile_count=k_tile_count,
                    acc_clear=k_pass_index == 0,
                    emit_drain_after=k_pass_index == k_tile_count - 1,
                ))
```

### 3중 루프 순서: `m → n → k`

이 순서가 **기본 default**입니다. `scheduler.py`에서 `weight_reuse` 전략을 쓰면 순서가 재배열됩니다 (다음 가이드 참조).

### 왜 이 순서?

GEMM `C[m,n] = Σ_k A[m,k] * B[k,n]`을 16×16 타일로 자르면:
- **하나의 (m_tile, n_tile) 출력 블록**이 완성되려면 **모든 k_pass의 결과를 누산**해야 함
- 그래서 `k_pass_index`가 가장 안쪽 → 같은 (m, n) 출력 블록의 K 패스들이 연속해서 실행됨

### `acc_clear`와 `emit_drain_after` 신호

- `k_pass_index == 0` → 새 (m, n) 블록의 첫 K 패스 → 누산기를 0으로 초기화
- `k_pass_index == k_tile_count - 1` → 마지막 K 패스 → 누산기 결과를 drain

이 두 비트가 **NPU 하드웨어 제어 신호로 직접 매핑**됩니다 (RTL의 `acc_clear_o`, `drain_request_o`).

---

## Tail Tile 처리

```python
tile_m = min(TILE_SIZE, spec.m - m_tile_base)
tile_k = min(TILE_SIZE, spec.k - k_tile_base)
tile_n = min(TILE_SIZE, spec.n - n_tile_base)
```

**무엇**: 마지막 타일이 16에 못 미치면 작아짐.

**예시**: M=20, K=16, N=16 → m_tile_count=2 → 첫 타일 tile_m=16, 두 번째 tile_m=4 (tail).

**왜 중요**: tail tile에서는 **패딩으로 채운 부분의 결과를 무시**해야 함. 시스템 검증 시 valid_lane compare가 이걸 처리.

---

## Split-K

**상황**: K=32 → k_tile_count=2 → 한 출력 블록당 2 K-패스 필요.

**시퀀스 예시** (M=K=N=16, K=32):
```
TilePlanEntry(m_base=0, n_base=0, k_base=0,  k_pass_index=0, acc_clear=True,  emit_drain_after=False)
TilePlanEntry(m_base=0, n_base=0, k_base=16, k_pass_index=1, acc_clear=False, emit_drain_after=True)
```

**동작**:
1. 첫 패스: 누산기 0으로 초기화 후 K[0:16] 부분 계산 + 누산
2. 둘째 패스: 누산기에 K[16:32] 부분 계산 결과 추가 → 마지막에 drain

**왜 split-K가 어려운지**: 첫 패스 결과를 잊지 말고 두 번째 패스 때 그 위에 더해야 함 → 누산기 forwarding 회로가 필요.

---

## `TilePlanEntry`가 어디로 흘러가나

```
plan_linear_tiles(LinearOp)
       │ list[TilePlanEntry]
       ▼
scheduler.py: estimate_schedule_cost / reorder_tiles
       │
       ▼
emitter.py: 타일별 activation/weight slice 생성 + golden 계산
       │
       ▼
dma_scheduler.py: 각 타일을 DMA command로 변환
       │
       ▼
manifest.json + activation/weight/golden binary
```

→ **TilePlanEntry는 L6 컴파일러의 가장 핵심 unit-of-work**입니다.

---

## 핵심 개념 정리

| 개념 | 의미 | 어디서 |
|---|---|---|
| **TILE_SIZE = 16** | systolic array의 고정 사이즈 | L6 |
| **`m → n → k` 순서** | 같은 출력 블록의 K-패스 그룹화 | L40-42 |
| **tail tile** | 마지막 타일 ≤ 16 (with `tile_m < 16`) | L47-49 |
| **split-K** | K > 16일 때 여러 패스로 분할 누산 | `k_pass_index`, `k_tile_count` |
| **`acc_clear`/`emit_drain_after`** | 누산기 초기화 + drain 신호 비트 | L61-62 |

---

## 연습 문제

1. `LinearOp(m=16, k=16, n=16)`은 몇 개의 TilePlanEntry로 분할되는가? `acc_clear`/`emit_drain_after` 값은?
2. `LinearOp(m=20, k=32, n=24)`로 호출하면 총 타일 개수는? 그 중 tail tile은 몇 개?
3. K=48일 때 split-K는 몇 패스? 첫/마지막 패스의 `acc_clear`와 `emit_drain_after`는?
4. 만약 m → k → n 순서로 루프를 바꾸면 (acc 누산이 잘못 동작) 어떤 버그가 발생할까?

---

## 다음 파일로 넘어가기

→ [33_scheduler.md](33_scheduler.md): `scheduler.py` — TilePlanEntry 시퀀스의 사이클을 추정하고 weight_reuse 전략으로 재배열
