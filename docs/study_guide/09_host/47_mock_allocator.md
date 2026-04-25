# 47. `host/mock_allocator.h` — 시뮬용 메모리 할당 헬퍼

> **파일 위치**: `host/mock_allocator.h` (28줄)
> **역할**: aligned heap memory 할당 + (모의) physical address 반환
> **선수 지식**: `posix_memalign`, virtual vs physical address 개념
> **공장 비유**: 가상 자재창고 — 실제 창고 없이 "이 주소에 자재를 두었다고 치자"

---

## 이 파일이 중요한 이유

실제 FPGA 구동 시 host에서 NPU에 데이터를 보내려면:
1. host가 **physical address**를 알아야 함 (DMA 엔진이 사용)
2. 가상↔물리 변환은 OS 커널 도움 필요 (`mlock`, `/dev/mem`, IOMMU 등)

Verilator 시뮬에서는 그게 의미 없으므로 **VA == PA**로 단순화 → 이 파일.

---

## 전체 코드

```cpp
#pragma once
#include <stddef.h>
#include <cstddef>
#include <cstdlib>
#include <cstdint>
#include <stdexcept>

class MockAllocator {
public:
    static void* allocate_tensor(std::size_t size) {
        void* ptr = nullptr;
        // 64-byte 정렬 (AVX-512 및 캐시 라인 최적화)
        if (posix_memalign(&ptr, 64, size) != 0) {
            throw std::bad_alloc();
        }
        return ptr;
    }

    static uint64_t get_phys_addr(void* virtual_addr) {
        // 실제 커널이 없으므로 VA를 PA로 단순 캐스팅
        return reinterpret_cast<uint64_t>(virtual_addr);
    }

    static void free_tensor(void* ptr) {
        free(ptr);
    }
};
```

---

## 함수별 분석

### `allocate_tensor(size)`

```cpp
posix_memalign(&ptr, 64, size);
```

**`posix_memalign`**: malloc과 같지만 **alignment 강제**. 64-byte aligned 주소 반환.

**왜 64-byte**:
- 캐시 라인 크기 (64 byte) = false sharing 회피
- AVX-512 256/512-bit SIMD가 aligned access 요구
- AXI 256-bit beat (32 byte)의 2배 → DMA fetch 효율적

→ 보통의 `new uint8_t[size]`는 alignment 보장 안 됨.

### `get_phys_addr(virtual_addr)`

```cpp
return reinterpret_cast<uint64_t>(virtual_addr);
```

**Mock**: 정말 그냥 cast. 시뮬에서는 VA == PA 가정 OK.

**실제 시스템에서는**:
- Linux: `/proc/self/pagemap` 읽거나 IOMMU 통해 IOVA 매핑
- PYNQ: `xlnk_alloc_aligned` (DMA-coherent buffer)
- 베어메탈: identity mapped (VA = PA)

### `free_tensor(ptr)`

```cpp
free(ptr);
```

**`posix_memalign`도 `free`로 해제**. ANSI 규약.

---

## 사용 패턴 (Phase 1 unit test 같은 곳)

```cpp
#include "mock_allocator.h"

constexpr size_t TENSOR_SIZE = 4096;
void* buffer = MockAllocator::allocate_tensor(TENSOR_SIZE);

// 테스트 데이터 채우기
auto* data = static_cast<uint8_t*>(buffer);
for (size_t i = 0; i < TENSOR_SIZE; ++i) data[i] = static_cast<uint8_t>(i);

// DMA가 사용할 PA
uint64_t phys = MockAllocator::get_phys_addr(buffer);

// AXI memory model에 등록
axi_model->addRegion(phys, std::vector<uint8_t>(data, data + TENSOR_SIZE));

ctrl->fetch(phys, TENSOR_SIZE);
// ... DMA 진행 ...

MockAllocator::free_tensor(buffer);
```

---

## 실제 보드와의 차이

| | Mock (이 파일) | 실제 PYNQ-Z2 / Arty |
|---|---|---|
| 할당 | `posix_memalign` | `xlnk_alloc_aligned` (DMA-coherent) |
| PA 변환 | VA cast | IOMMU/SMMU + `xlnk_get_phys` |
| Coherency | 의미 없음 | cache flush 필요 |
| 한도 | host RAM | Linux contiguous 영역 (적음) |

→ 이 파일은 **Verilator 환경 전용**. 실제 보드에선 다른 allocator 필요.

---

## 핵심 개념 정리

| 개념 | 의미 |
|---|---|
| **Aligned allocation** | `posix_memalign` — 64-byte 정렬 |
| **Mock VA = PA** | 시뮬용 단순화 |
| **Cache coherency** | 실제 시스템에선 중요, 시뮬에선 N/A |
| **Static methods** | 인스턴스 없이 call. utility class 패턴 |

---

## 연습 문제

1. `posix_memalign`이 64-byte alignment를 못 줄 수 있는 경우가 있나? (size 조건 등)
2. 실제 PYNQ에서 `get_phys_addr`을 cast로 하면 어떤 문제? (가상 주소 != 물리 주소)
3. malloc 대신 posix_memalign을 쓰는 이유 1가지 더는? (DMA가 unaligned access 안 받는 경우)
4. C++의 `std::aligned_alloc` (C++17)은 같은 효과를 주는가? 왜 안 썼을까?

---

## 다음 파일로 넘어가기

→ [48_replay_package.md](48_replay_package.md): JSON manifest를 C++로 파싱하는 핵심 헤더
