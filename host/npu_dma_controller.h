#pragma once
#include <cstddef>
#include <cstdint>
#include <stdexcept>

// Verilator가 생성할 하드웨어 제어 레지스터 헤더
#include "Vdma_controller.h"

class NpuDmaController {
private:
  Vdma_controller *hw_regs;
  size_t axi_bus_width_bytes;
  uint8_t fixed_burst_len;

public:
  explicit NpuDmaController(Vdma_controller *dut,
                            size_t axi_bus_width_bytes_ = 64,
                            uint8_t fixed_burst_len_ = 3)
      : hw_regs(dut),
        axi_bus_width_bytes(axi_bus_width_bytes_),
        fixed_burst_len(fixed_burst_len_) {
    if (!hw_regs)
      throw std::invalid_argument("Hardware pointer is null");
    hw_regs->start_dma = 0;
  }

  void fetch(uint64_t phys_addr, size_t total_bytes) {
    size_t bytes_per_burst = (fixed_burst_len + 1) * axi_bus_width_bytes;
    uint16_t total_bursts =
        (total_bytes + bytes_per_burst - 1) / bytes_per_burst;

    hw_regs->src_addr_base = phys_addr;
    hw_regs->burst_len = fixed_burst_len;
    hw_regs->total_bursts = total_bursts;

    hw_regs->start_dma = 1; // 트리거 펄스 On
  }

  void clear_trigger() {
    hw_regs->start_dma = 0; // 트리거 펄스 Off
  }

  bool is_done() const volatile { return hw_regs->dma_done == 1; }
};

