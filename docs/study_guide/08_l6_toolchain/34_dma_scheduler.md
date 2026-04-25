# 34. `dma_scheduler.py` — DMA 명령 시퀀스 생성

> **파일 위치**: `l6/src/l6_toolchain/dma_scheduler.py` (481줄)
> **역할**: TilePlanEntry → AXI 버스트 + DMA command + MMIO 레지스터 시퀀스
> **선수 지식**: [33_scheduler.md](33_scheduler.md), AXI4 burst 개념, ping-pong SRAM
> **공장 비유**: 지게차 운영팀 — 어떤 자재를 언제 어느 창고에서 어느 라인으로 옮길지 작업지시서 작성

---

## 이 파일이 중요한 이유

L6 컴파일러의 **하드웨어 가장 가까운 레이어**입니다. tile schedule은 추상적 ("이 16×16 곱셈을 해라")이지만 RTL에 실제 입력되는 건 MMIO 레지스터 값들입니다. 이 파일이 그 변환을 책임집니다.

---

## 큰 그림

```
TilePlanEntry sequence (lowering)
         │
         ▼
 generate_dma_commands  ──> AXI burst 분해 + bank 할당
         │
         ▼
 build_dma_schedule    ──> SRAM allocation 추적 + split-K 추적 + double-buffer 결정
         │
         ▼
 generate_mmio_sequence ──> MMIO 레지스터 쓰기 시퀀스
         │
         ▼
manifest.json의 "dma_schedule" 블록 + replay_bridge가 system_top에 전달
```

---

## 자료구조 (L43-130)

### `DMAAXIBurst` (L43-58) — 한 AXI 버스트

```python
AXI_BEAT_WIDTH = 256       # bits
AXI_BEAT_BYTES = 32
BYTES_PER_ELEMENT = 2

@dataclass(frozen=True)
class DMAAXIBurst:
    is_weight: bool
    src_addr: int
    burst_len: int    # AXI burst length (실제 beat 수 = burst_len + 1)

    @property
    def beats(self): return self.burst_len + 1
    @property
    def bytes_transferred(self): return self.beats * AXI_BEAT_BYTES
```

**왜 burst_len이 +1**: AXI4 spec — `AWLEN[7:0]`이 0이면 1 beat, 255면 256 beat. 그래서 항상 `burst_len + 1` = 실제 beat 수.

**왜 256 bit beat**: NPU의 weight bank 폭이 256 bit이라 한 beat에 16개 INT8 weight가 들어감.

### `DMACommand` (L61-77) — 한 논리적 로드

```python
@dataclass(frozen=True)
class DMACommand:
    is_weight: bool
    bursts: tuple[DMAAXIBurst, ...]    # 한 로드를 여러 burst로 분할 가능
    sram_bank_sel: int                  # 0 또는 1 (ping-pong)
    split_k_pass_index: int = 0
```

**왜 bursts가 tuple**: 한 weight load가 256 byte를 넘으면 여러 AXI burst로 분할.

**`sram_bank_sel`**: ping-pong 전략의 현재 bank.

### `SRAMAllocation` (L80-105)

```python
@dataclass(frozen=True)
class SRAMAllocation:
    bank_0_used_bytes: int = 0
    bank_1_used_bytes: int = 0
    max_capacity: int = 64 * 1024     # 64KB per bank

    def is_feasible(self):
        return self.bank_0_used_bytes <= self.max_capacity and self.bank_1_used_bytes <= self.max_capacity
```

**무엇**: 두 SRAM bank의 사용량을 추적. `is_feasible()`로 64KB 한도 검사.

**`scheduler.py`의 `MemoryBudget`과 차이**:
- `scheduler.MemoryBudget`: per-tile (한 타일이 한 bank에 들어가는가)
- `dma_scheduler.SRAMAllocation`: 전체 schedule에서 bank별 누적 사용량

### `DMAScheduleSequence` (L108-130)

```python
@dataclass(frozen=True)
class DMAScheduleSequence:
    commands: tuple[DMACommand, ...]
    double_buffer_enabled: bool
    bank_swap_strategy: str        # "ping-pong" 등
    sram_allocation: SRAMAllocation
    split_k_passes: int = 1
```

전체 schedule의 metadata + 모든 DMA 명령.

---

## 핵심 함수: `generate_dma_commands` (L150-220 부근)

```python
def generate_dma_commands(tiles, *, double_buffer=True):
    commands = []
    bank_counter = 0   # ping-pong용

    for tile in tiles:
        # 1) Weight payload 계산 (split-K 한 패스 분량)
        weight_bytes = calculate_weight_payload_bytes(tile)
        weight_bursts = calculate_axi_bursts_for_payload(weight_bytes, src_addr=...)
        commands.append(DMACommand(
            is_weight=True,
            bursts=tuple(weight_bursts),
            sram_bank_sel=bank_counter % 2,
            split_k_pass_index=tile.k_pass_index,
        ))

        # 2) Activation payload
        activation_bytes = calculate_activation_payload_bytes(tile)
        activation_bursts = calculate_axi_bursts_for_payload(activation_bytes, src_addr=...)
        commands.append(DMACommand(
            is_weight=False,
            bursts=tuple(activation_bursts),
            sram_bank_sel=bank_counter % 2,
            split_k_pass_index=tile.k_pass_index,
        ))

        bank_counter += 1   # 다음 타일은 반대 bank

    return tuple(commands)
```

**핵심 패턴**:
- 한 타일당 weight 1 + activation 1 = 2 commands
- bank는 매 타일마다 toggle (ping-pong)
- `split_k_pass_index`로 어느 패스인지 추적

### `calculate_weight_payload_bytes` (L130 근처)

```python
def calculate_weight_payload_bytes(tile):
    return TILE_SIZE * TILE_SIZE * BYTES_PER_ELEMENT   # 16 * 16 * 2 = 512 B
```

**주의**: 항상 16×16 weight (tail tile이라도 패딩되어 16×16). 실제 INT8은 1 byte지만 `BYTES_PER_ELEMENT=2`인 이유는 **FP16 호환을 위해 2 byte 정렬**로 패킹되기 때문.

### `calculate_activation_payload_bytes`

```python
def calculate_activation_payload_bytes(tile):
    return tile.tile_m * TILE_SIZE * BYTES_PER_ELEMENT   # tail이면 더 작음
```

### `calculate_axi_bursts_for_payload` (L130-150 근처)

```python
def calculate_axi_bursts_for_payload(payload_bytes, *, src_addr):
    bursts = []
    remaining = payload_bytes
    addr = src_addr
    while remaining > 0:
        beats = min(remaining // AXI_BEAT_BYTES, 256)   # 한 burst 최대 256 beat
        if beats == 0: beats = 1   # 안전장치
        bursts.append(DMAAXIBurst(is_weight=False, src_addr=addr, burst_len=beats - 1))
        addr += beats * AXI_BEAT_BYTES
        remaining -= beats * AXI_BEAT_BYTES
    return bursts
```

**큰 payload를 여러 burst로 분할**: AXI 표준은 한 burst 최대 256 beat (= 8KB at 256-bit). 그 이상은 여러 burst 필요.

---

## `build_dma_schedule` (L240-320 근처) — Top-level

```python
def build_dma_schedule(tiles, *, double_buffer=True, bank_strategy="ping-pong"):
    commands = generate_dma_commands(tiles, double_buffer=double_buffer)

    # SRAM 할당량 누적 추적
    bank0_total = 0; bank1_total = 0
    for cmd in commands:
        if cmd.sram_bank_sel == 0:
            bank0_total += cmd.total_bytes
        else:
            bank1_total += cmd.total_bytes
    allocation = SRAMAllocation(
        bank_0_used_bytes=bank0_total,
        bank_1_used_bytes=bank1_total,
    )

    # split-K 패스 수 (max k_pass_index + 1)
    split_k_passes = max(c.split_k_pass_index for c in commands) + 1

    return DMAScheduleSequence(
        commands=commands,
        double_buffer_enabled=double_buffer,
        bank_swap_strategy=bank_strategy,
        sram_allocation=allocation,
        split_k_passes=split_k_passes,
    )
```

**왜 SRAM 누적**: validator가 "이 schedule이 64KB 안에 들어갈까"를 검사할 때 사용.

---

## `generate_mmio_sequence` (L350-481) — MMIO 레지스터 쓰기

이게 **하드웨어가 직접 받는 형식**.

```python
@dataclass(frozen=True)
class MMIORegisterWrite:
    register_name: str    # "DMA_SRC_ADDR", "DMA_LEN", "DMA_GO", ...
    value: int

def generate_mmio_sequence(schedule):
    writes = []
    for cmd in schedule.commands:
        for burst in cmd.bursts:
            writes.append(MMIORegisterWrite("DMA_SRC_ADDR", burst.src_addr))
            writes.append(MMIORegisterWrite("DMA_LEN", burst.burst_len))
            writes.append(MMIORegisterWrite("DMA_BANK_SEL", cmd.sram_bank_sel))
            writes.append(MMIORegisterWrite("DMA_GO", 1))
            # 다음 NPU FSM phase 신호
            ...
    return tuple(writes)
```

**replay 시 흐름**:
1. host (Verilator C++) 가 manifest의 mmio_sequence를 읽어옴
2. `axi_lite_mmio_bridge.sv`로 한 줄씩 register write
3. RTL FSM이 DMA를 시작

---

## 통합 그림

```
TilePlanEntry list
        │
        ▼
generate_dma_commands  → DMACommand list (per-tile DMA pair)
        │
        ▼
build_dma_schedule   → DMAScheduleSequence (with SRAM allocation, split-K passes)
        │
        ▼
generate_mmio_sequence → list[MMIORegisterWrite]
        │
        ▼
replay_bridge.py  → manifest.json의 "dma_schedule" + "mmio_sequence" 블록
        │
        ▼
host/replay_package.h → MMIO writes를 RTL에 적용
```

---

## 핵심 개념 정리

| 개념 | 의미 | 어디서 |
|---|---|---|
| **AXI burst 분해** | 큰 payload → 256-beat 청크들 | `calculate_axi_bursts_for_payload` |
| **Ping-pong bank 할당** | 매 타일마다 bank toggle | `generate_dma_commands` |
| **SRAM 누적 추적** | bank별 byte 합산 → 64KB 검사 | `SRAMAllocation`, `is_feasible` |
| **Split-K pass 추적** | `k_pass_index` 보존 → forwarding 가능 | `DMACommand.split_k_pass_index` |
| **MMIO write sequence** | 추상 schedule → 하드웨어 register write | `generate_mmio_sequence` |

---

## 연습 문제

1. 16×16×16 single tile의 weight payload bytes는? (BYTES_PER_ELEMENT 고려)
2. 8KB payload를 256-bit beat로 옮기면 burst가 몇 개?
3. M=32, K=32, N=16 (4 tiles, split-K 1 pass each)에서 ping-pong bank 사용 패턴은?
4. `split_k_pass_index`가 잘못 기록되면 어떤 RTL 동작이 깨질까? (힌트: accumulator forwarding)

---

## 다음 파일로 넘어가기

→ [35_emitter.md](35_emitter.md): `emitter.py` — 타일별 activation/weight 슬라이스 + golden 계산 + JSON 패키지 출력
