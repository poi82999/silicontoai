# 32. `lowering.py` — GEMM 타일링

> **파일 위치**: `l6/src/l6_toolchain/lowering.py` (68줄)
> **역할**: 큰 GEMM `(M, K, N)`을 16×16×16 타일들로 쪼개어 실행 순서를 만드는 함수
> **선수 지식**: [28_ir.md](28_ir.md), GEMM `(M,K,N)` 차원 의미, accumulator 개념
> **공장 비유**: 공정설계자 — 큰 주문(GEMM)을 16개씩 묶음(타일)으로 분할해서 작업 카드를 발행

---

## 이 파일이 중요한 이유

68줄밖에 안 되지만 **전체 시스템의 핵심 가정**이 들어 있습니다: NPU의 systolic array가 **16×16 한 사이즈만** 처리할 수 있다는 점, 따라서 모든 GEMM이 16의 배수가 아니면 **tail tile**이 발생한다는 점, 그리고 K축이 16보다 크면 **split-K** (여러 패스로 나눠서 누산)가 필요하다는 점.

---

## 📚 학술적 배경: GEMM tiling은 50년된 문제

### 1. Cache blocking의 역사 — Lam, Rothberg, Wolf (ASPLOS 1991)

> Lam, M., Rothberg, E., Wolf, M. — "The Cache Performance and Optimizations of Blocked Algorithms", *ASPLOS 1991*.

이 논문이 GEMM tiling의 학술적 출발점입니다. 핵심 통찰:
- 무지성 GEMM (3중 i-j-k 루프)은 매번 row/column을 처음부터 읽음 → cache miss 폭발
- **Tile size를 cache size에 맞게** 잡으면 한 tile 안의 모든 데이터가 cache에 들어감 → reuse
- 결과: ~10× speedup (당시 SUN SPARC 기준)

이 NPU는 cache 대신 **on-chip SRAM**이 같은 역할:
- Tile size = 16×16 = SRAM bank의 한 entry에 정확히 맞음
- Tile loop의 inner-most가 K → activation/weight tile을 SRAM에 한 번 올리고 모든 partial sum 계산
- → **GPU/CPU의 cache blocking을 NPU의 SRAM tiling으로 직접 번역한 것**

📖 참고: H&P Ch.4 (SIMD/Vector) §4.5 "Detecting and Enhancing Loop-Level Parallelism" — Phase 1 자료. P&H Ch.5 working set 분석.

### 2. Goto algorithm — Goto & van de Geijn (TOMS 2008)

> Goto, K., van de Geijn, R. — "Anatomy of High-Performance Matrix Multiplication", *ACM TOMS* 34(3), 2008.

OpenBLAS/GotoBLAS의 핵심 알고리즘. **3-level blocking**을 도입:

```
┌─ Mc × Nc       (L3 cache block)
│  ┌─ Mc × Kc    (L2 cache block, "panel")
│  │  ┌─ Mr × Nr (register block, micro-kernel)
│  │  │  ┌─ scalar MACs in registers
```

이 NPU의 hierarchy는 더 단순:
```
┌─ M × N         (전체 GEMM)
│  ┌─ Mc × Nc    (SRAM tile = K split scope)
│  │  ┌─ 16 × 16 (systolic array tile = micro-kernel)
```

Goto의 micro-kernel은 CPU register (~10개), 이 프로젝트는 256개 PE. 본질은 같음.

📖 참고: Goto TOMS'08 PDF (논문은 무료), 또는 Kazushige Goto 강의 노트. CMU 15-418 (Parallel Computing) Lec.5.

### 3. Split-K와 atomic reduction

K가 매우 크면 (예: BERT FFN의 hidden dim 3072), single-pass GEMM은 누산기가 정밀도 부족 + utilization 저하. 해법은 **K축을 분할**:
- 각 K-chunk를 다른 PE 또는 시간에 계산
- 결과를 **외부 atomic add**로 합침

이 프로젝트는 시간 분할 (`k_pass_index`로 순차 누산). NVIDIA cuBLAS는 공간 분할 (다른 SM에서 partial → atomic add). 둘 다 유효.

→ **Tile order는 단지 reordering이 아니라 hardware execution semantics를 결정**합니다 (`acc_clear`, `emit_drain_after`가 RTL 신호로 직결).

📖 참고: NVIDIA CUTLASS docs "Efficient GEMM" (Phase 4 자료), "FlashAttention" Dao'22 §3 (split-K + softmax).

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

## 🔬 전문가 관점: tile order 선택의 trade-off

| Loop order | 무엇이 reuse되나 | 단점 |
|---|---|---|
| **m → n → k** (이 프로젝트 default) | output (m,n) tile + accumulator | weight reload 자주 |
| m → k → n | input activation row | output write 자주 |
| k → m → n | weight matrix | output 누산 위치 분산 (atomic 필요) |
| **n → m → k** (`scheduler.py` weight_reuse) | **weight column** (16개 row 동안 weight 한 번만 로드) | activation reload 자주 |

→ 이 프로젝트의 default는 **output reuse 우선** (가장 단순). 그러나 weight가 큰 transformer FFN에서는 `n → m → k` (weight reuse)가 훨씬 효율적. 그래서 [`scheduler.py`](../../../l6/src/l6_toolchain/scheduler.py)에서 `weight_reuse` 모드로 reorder.

**산업급 컴파일러의 진화** (Ansor, OSDI'20):
- **Auto-tuning**: 모든 loop order × tile size를 탐색 (`auto_tile.py`가 mini-version)
- **Cost model**: 각 schedule의 사이클을 ML model로 예측 (cycle_sim.py가 mini-version)
- **Random search → Evolutionary**: 100~1000 schedule을 자동 비교

이 프로젝트는 hand-tuned heuristic (default + weight_reuse). 다음 진화 step이 auto-tuning. 이미 [`auto_tile.py`](../../../l6/src/l6_toolchain/auto_tile.py)에서 시작됨.

📖 참고: Zheng et al. — "Ansor: Generating High-Performance Tensor Programs", OSDI 2020 (Phase 7).

---

## 📖 더 깊이 공부하기

| 깊이 | 자료 | 어느 부분 |
|---|---|---|
| 🟢 입문 | P&H Ch.5 (Phase 1) | locality, tiling 개념 |
| 🟢 입문 | CMU 15-213 Cache Lab (Phase 1) | tiling을 직접 구현하며 cache miss 측정 |
| 🟡 중급 | H&P Ch.4 (Phase 1) | Loop-level parallelism, tiling 변형 |
| 🟡 중급 | Goto & van de Geijn TOMS'08 | hierarchical blocking 정수 |
| 🟡 중급 | Lam-Rothberg-Wolf ASPLOS'91 | cache blocking 정량 분석 |
| 🔴 심화 | Halide PLDI'13 (Phase 7) | tile = schedule decision |
| 🔴 심화 | Ansor OSDI'20 (Phase 7) | auto-tuning의 산업적 표준 |
| 🔴 심화 | NVIDIA CUTLASS docs (Phase 4) | GEMM micro-kernel 산업급 구현 |

---

## 연습 문제

1. `LinearOp(m=16, k=16, n=16)`은 몇 개의 TilePlanEntry로 분할되는가? `acc_clear`/`emit_drain_after` 값은?
2. `LinearOp(m=20, k=32, n=24)`로 호출하면 총 타일 개수는? 그 중 tail tile은 몇 개?
3. K=48일 때 split-K는 몇 패스? 첫/마지막 패스의 `acc_clear`와 `emit_drain_after`는?
4. 만약 m → k → n 순서로 루프를 바꾸면 (acc 누산이 잘못 동작) 어떤 버그가 발생할까?

---

## 다음 파일로 넘어가기

→ [33_scheduler.md](33_scheduler.md): `scheduler.py` — TilePlanEntry 시퀀스의 사이클을 추정하고 weight_reuse 전략으로 재배열
