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

