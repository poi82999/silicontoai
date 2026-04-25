# 46. `host/npu_dma_controller.h` — C++ DMA 제어 클래스

> **파일 위치**: `host/npu_dma_controller.h` (45줄)
> **역할**: Verilator로 빌드된 `dma_controller` RTL 모듈을 C++ 객체로 wrap, fetch/done 인터페이스 제공
> **선수 지식**: [13_dma_controller.md](../05_rtl_system/13_dma_controller.md), Verilator 클래스 생성, AXI4 burst 개념
> **공장 비유**: 지게차 리모컨 — "주소 X에서 N바이트 가져와" 한 명령으로 호출, 끝나면 LED(`dma_done`)로 알림

---

## 이 파일이 중요한 이유

L4/L5 검증 단계에서 **Verilator C++ 코드가 RTL DMA 컨트롤러를 직접 제어**해야 합니다. RTL signal `start_dma`, `src_addr_base`, `burst_len`, `total_bursts`, `dma_done`을 매번 수동 조작하면 실수가 많습니다. 이 클래스가 그 디테일을 숨기고 **`fetch(addr, size)` + `is_done()`** 두 함수로 단순화합니다.

---

## 전체 코드 분석

### 1. Header dependencies

```cpp
#pragma once
#include <cstddef>
#include <cstdint>
#include <stdexcept>
#include "Vdma_controller.h"   // Verilator 자동 생성 헤더
```

**`Vdma_controller.h`**: Verilator가 `dma_controller.sv`를 컴파일하면서 만드는 C++ 클래스. RTL의 모든 input/output port가 멤버 변수가 됨.

### 2. 멤버 변수

```cpp
private:
    Vdma_controller* hw_regs;       // RTL 모듈 핸들
    size_t axi_bus_width_bytes;     // AXI 데이터 폭 (64 = 512-bit, 32 = 256-bit)
    uint8_t fixed_burst_len;        // 항상 같은 burst_len 사용 (단순화)
```

**`hw_regs`**: 이름이 "register"지만 실제로는 RTL 시뮬 객체 포인터.

### 3. 생성자

```cpp
explicit NpuDmaController(Vdma_controller* dut,
                          size_t axi_bus_width_bytes_ = 64,
                          uint8_t fixed_burst_len_ = 3)
    : hw_regs(dut),
      axi_bus_width_bytes(axi_bus_width_bytes_),
      fixed_burst_len(fixed_burst_len_) {
    if (!hw_regs)
        throw std::invalid_argument("Hardware pointer is null");
    hw_regs->start_dma = 0;
}
```

**디테일**:
- `axi_bus_width_bytes=64`: AXI 데이터 폭 64 byte = 512-bit (실제 NPU는 32 byte = 256-bit지만 default는 보수적)
- `fixed_burst_len=3`: 매 burst가 4 beat (`burst_len + 1`)
- `start_dma = 0`: 시작 직후 안 트리거 상태로 둠

### 4. `fetch` — DMA 시작

```cpp
void fetch(uint64_t phys_addr, size_t total_bytes) {
    size_t bytes_per_burst = (fixed_burst_len + 1) * axi_bus_width_bytes;
    uint16_t total_bursts = (total_bytes + bytes_per_burst - 1) / bytes_per_burst;

    hw_regs->src_addr_base = phys_addr;
    hw_regs->burst_len = fixed_burst_len;
    hw_regs->total_bursts = total_bursts;
    hw_regs->start_dma = 1;   // 트리거 펄스 ON
}
```

**핵심 계산**:
- `bytes_per_burst = (burst_len + 1) × bus_width = 4 × 64 = 256 byte/burst`
- `total_bursts = ceil(total_bytes / bytes_per_burst)`
- 1024 byte 요청 → 4 burst

**왜 ceil**: `+ bytes_per_burst - 1`은 **integer ceiling** 표준 패턴. 마지막 burst가 partial이라도 1 burst로 카운트.

### 5. `clear_trigger` — 트리거 해제

```cpp
void clear_trigger() {
    hw_regs->start_dma = 0;
}
```

**왜 따로 필요**: `start_dma`는 **pulse**라 1 cycle만 high여야 함. RTL FSM이 한 번 잡으면 그 다음 cycle에서 0으로 돌려야 또 다른 transaction이 안 시작됨.

→ 사용자 패턴:
```cpp
ctrl.fetch(addr, bytes);   // start_dma = 1
tick();                    // RTL이 잡음
ctrl.clear_trigger();      // start_dma = 0
while (!ctrl.is_done()) tick();
```

### 6. `is_done`

```cpp
bool is_done() const volatile { return hw_regs->dma_done == 1; }
```

**`const volatile`**:
- `const`: 객체 상태 안 바꿈
- `volatile`: RTL 시뮬 결과는 매 호출마다 새로 읽어야 (캐시되면 안 됨)

→ Verilator 객체와 상호작용하는 read-only 메서드의 표준 패턴.

---

## 사용 예시

```cpp
auto ctrl = std::make_unique<NpuDmaController>(dut.get(), /*bus_w*/ 32, /*burst_len*/ 7);

// 4096 byte 가져오기 (8 burst, 32×8=256 byte/burst)
ctrl->fetch(0x80000000, 4096);
tick(dut.get(), ctx.get());      // start_dma=1을 RTL이 잡음
ctrl->clear_trigger();           // start_dma=0
while (!ctrl->is_done()) {
    tick(dut.get(), ctx.get());
}
```

---

## main.cpp / system_replay_main.cpp와의 관계

system_replay_main.cpp는 이 클래스를 **사용하지 않음** — 직접 MMIO 신호 (`mmio_start_dma`, `mmio_src_addr` 등)를 토글. 왜?

- `npu_dma_controller.h`는 **`dma_controller` 인스턴스 직접 제어** (low-level)
- system replay는 **`npu_system_top` 통째로** 시뮬 → MMIO bridge를 거쳐야 함

→ 이 클래스는 **Phase 1 unit test** (DMA 단독 검증) 같은 use case에 적합. 풀 시스템 회귀에는 직접 사용 안 됨.

---

## 핵심 개념 정리

| 개념 | 의미 |
|---|---|
| **Verilator class wrap** | RTL 모듈 → C++ 객체 (`Vmodule.h`) |
| **AXI burst 계산** | `bytes_per_burst = (burst_len+1) × bus_width` |
| **Integer ceiling** | `(a + b - 1) / b` |
| **Pulse 신호 패턴** | trigger=1 → tick → trigger=0 |
| **`const volatile`** | 시뮬 객체 read-only 인터페이스 |

---

## 연습 문제

1. `axi_bus_width_bytes=32, fixed_burst_len=7, total_bytes=2048`이면 `total_bursts`는?
2. `clear_trigger`를 안 호출하면 어떤 일이 일어나는가?
3. `fetch`를 dma가 진행 중일 때 다시 호출하면? (방어 로직이 없음)
4. `Vdma_controller.h`에 `start_dma`, `dma_done` 외에 어떤 멤버가 있을까? (RTL의 input/output 모두 멤버화)

---

## 다음 파일로 넘어가기

→ [47_mock_allocator.md](47_mock_allocator.md): 메모리 할당 모킹 헬퍼
