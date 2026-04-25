# 47. `memory_planner.py` — 멀티레이어 SRAM 계획

> **파일 위치**: `l6/src/l6_toolchain/memory_planner.py` (378줄)
> **역할**: 다단계 프로그램의 중간 텐서 lifetime 분석 + SRAM 배치 전략 결정
> **선수 지식**: [37_compiler.md](37_compiler.md), [34_dma_scheduler.md](34_dma_scheduler.md), liveness analysis 개념
> **공장 비유**: 창고 관리자 — 어떤 부품을 in-house 창고(SRAM)에 둘지, 외부 창고(DDR)로 보낼지 결정

---

## 이 파일이 중요한 이유

L6 컴파일러는 step-by-step으로 NPU에 일을 시킵니다. 매 step마다 입력을 외부 메모리(DDR)에서 읽고 출력을 다시 외부에 쓰면 **DMA 트래픽이 폭발**. 이 모듈이 **"이 중간 텐서는 다음 step에서 바로 쓰니 SRAM에 남겨두자"** 같은 결정을 내립니다.

---

## 큰 그림: 3가지 단계

```
1. Liveness analysis
   각 텐서의 birth_step (생산), death_step (마지막 소비) 추출
        │
        ▼
2. Strategy 결정
   각 텐서마다 in_place / ping_pong / evict 중 선택
        │
        ▼
3. Bandwidth/peak SRAM 계산
   total_sram_peak_bytes, total_external_bytes 산출
        │
        ▼
   MemoryPlan 반환 → compiler가 manifest에 기록
```

---

## 자료구조 (L31-100)

### Hardware 상수

```python
SRAM_BANK_BYTES = 65_536        # 64 KB per bank
SRAM_TOTAL_BYTES = 131_072      # 128 KB (두 bank)
BYTES_PER_INT8 = 1
BYTES_PER_INT32 = 4
```

### `TensorLifetime` (L41-65)

```python
@dataclass(frozen=True)
class TensorLifetime:
    name: str
    size_bytes: int
    birth_step: int       # 이 step에서 생산
    death_step: int       # 이 step 이후 더 안 쓰임

    @property
    def live_steps(self) -> int:
        return self.death_step - self.birth_step + 1
```

**핵심**: `birth_step == death_step`이면 produce + consume이 같은 step → 즉시 회수 가능.

### `TensorPlacement` (L67-85)

```python
@dataclass(frozen=True)
class TensorPlacement:
    name: str
    strategy: str          # "in_place", "ping_pong", "evict"
    bank: int | None       # 0/1 또는 None (evicted)
    sram_bytes: int
    external_bytes: int    # DDR 왕복 byte
```

### `MemoryPlan` (L87-110 부근)

```python
@dataclass(frozen=True)
class MemoryPlan:
    lifetimes: tuple[TensorLifetime, ...]
    placements: tuple[TensorPlacement, ...]
    total_sram_peak_bytes: int
    total_external_bytes: int
```

---

## ① Liveness Analysis (`extract_lifetimes`)

```python
def extract_lifetimes(steps: Sequence[StepDescriptor]) -> tuple[TensorLifetime, ...]:
    birth: dict[str, int] = {}
    death: dict[str, int] = {}
    sizes: dict[str, int] = {}

    for step_idx, step in enumerate(steps):
        for input_name in step.inputs:
            death[input_name] = step_idx       # 마지막 사용 step 갱신
        for output_name, output_size in step.outputs.items():
            birth[output_name] = step_idx
            sizes[output_name] = output_size

    return tuple(TensorLifetime(
        name=name,
        size_bytes=sizes[name],
        birth_step=birth[name],
        death_step=death.get(name, birth[name]),
    ) for name in birth)
```

**핵심 algorithm**: 그래프를 한 번 훑으며
- 출력 등장 → birth 기록
- 입력 등장 → death 갱신 (덮어쓰기 → 마지막 사용까지 보존)

→ 컴파일러 표준 SSA liveness analysis와 같은 패턴.

---

## ② Strategy 결정: 3가지 전략

### `in_place` 전략

```python
def _can_in_place(producer_step, input_lifetime, output_lifetime):
    return (input_lifetime.death_step == producer_step
            and input_lifetime.size_bytes >= output_lifetime.size_bytes)
```

**조건**: 입력 텐서의 death_step == 현재 step → 다음 step에서 안 쓰이니, 이 입력 SRAM 슬롯을 출력으로 재사용 가능. 단, 출력이 입력보다 작거나 같아야 함.

**예시**: ReLU `y = max(x, 0)` — x가 더 안 쓰이면 y를 같은 SRAM 슬롯에 쓰기.

**효과**: SRAM peak 사용량 절반.

### `ping_pong` 전략

기본 (in_place 안 되는 경우): 두 bank를 alternating으로 사용 → DMA와 compute overlap.

```python
def _allocate_ping_pong(lifetimes, ...):
    bank = 0
    for lt in lifetimes:
        bank_used[bank] += lt.size_bytes
        if bank_used[bank] > SRAM_BANK_BYTES:
            # 이 bank 가득 — 다른 bank 시도
            ...
        bank = 1 - bank   # toggle
```

### `evict` 전략 (fallback)

```python
def _evict(lifetime):
    return TensorPlacement(
        name=lifetime.name,
        strategy="evict",
        bank=None,
        sram_bytes=0,
        external_bytes=2 * lifetime.size_bytes,   # 쓰기+읽기 왕복
    )
```

**언제**: SRAM이 가득 차면 외부 DDR로 spill. **2× 비용** (왕복).

---

## ③ Top-level: `plan_memory`

```python
def plan_memory(steps: Sequence[StepDescriptor]) -> MemoryPlan:
    lifetimes = extract_lifetimes(steps)

    placements = []
    bank_used = [0, 0]
    peak_sram = 0
    total_external = 0

    for lt in lifetimes:
        # 1) in_place 가능?
        if _can_in_place(...):
            placements.append(TensorPlacement(name=lt.name, strategy="in_place", ...))
            continue

        # 2) ping_pong: 어느 bank가 여유 있나
        target_bank = 0 if bank_used[0] + lt.size_bytes <= SRAM_BANK_BYTES else 1
        if bank_used[target_bank] + lt.size_bytes <= SRAM_BANK_BYTES:
            bank_used[target_bank] += lt.size_bytes
            peak_sram = max(peak_sram, sum(bank_used))
            placements.append(TensorPlacement(strategy="ping_pong", bank=target_bank, ...))
            continue

        # 3) evict
        placements.append(_evict(lt))
        total_external += 2 * lt.size_bytes

    return MemoryPlan(...)
```

**전략 우선순위**: in_place > ping_pong > evict.

---

## `estimate_external_transfers` — Bandwidth 추정

```python
def estimate_external_transfers(plan: MemoryPlan) -> int:
    return plan.total_external_bytes
```

→ Roofline 분석에 입력으로 들어감. `total_external_bytes / dma_bandwidth_gbps` = DMA 시간 추정.

---

## `compiler.py`와의 통합

```python
# compiler가 사용
from l6_toolchain.api import plan_memory, StepDescriptor

step_descriptors = [
    StepDescriptor(
        step_id=i,
        inputs=tuple(op.inputs),
        outputs={op.outputs[0]: tensor_size_bytes(...)},
    )
    for i, op in enumerate(program.ops)
]
plan = plan_memory(step_descriptors)
```

manifest의 `compiler.memory_plan` 블록에 결과 기록 → inspector가 보여줌.

---

## 핵심 개념 정리

| 개념 | 의미 |
|---|---|
| **Liveness analysis** | 각 텐서의 birth/death step 추출 |
| **SRAM 64KB × 2** | bank별 한도, ping-pong용 |
| **3가지 전략** | in_place / ping_pong / evict |
| **In-place 조건** | input의 death == producer step |
| **Eviction 비용** | 2× (write + read 왕복) |

---

## 연습 문제

1. ResNet block (Conv→BN→ReLU→Conv→BN→Add)에서 `bn_out` 텐서의 birth/death는?
2. SRAM bank가 32KB이고 텐서 사이즈가 16KB이면 ping-pong으로 몇 개 동시 보관 가능?
3. evict 전략이 자주 발동되는 모델은 어떤 특징? (힌트: 텐서 크기 vs SRAM)
4. `in_place` 전략이 fusion과 어떻게 시너지를 내는가? (힌트: BN-folded conv는 ReLU도 같이 합쳐서 중간 텐서 사라짐)

---

## 다음 파일로 넘어가기

→ [48_cycle_sim.md](48_cycle_sim.md): `cycle_sim.py` — 2-stream double-buffered 사이클 시뮬레이터
