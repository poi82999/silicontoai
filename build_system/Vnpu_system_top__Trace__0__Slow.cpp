// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vnpu_system_top__Syms.h"


VL_ATTR_COLD void Vnpu_system_top___024root__trace_init_sub__TOP__0(Vnpu_system_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_system_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1694,0,"mmio_start_dma",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1695,0,"mmio_dma_target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1696,0,"mmio_src_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1698,0,"mmio_burst_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1699,0,"mmio_total_bursts",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1700,0,"mmio_dma_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1701,0,"mmio_swap_banks",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1702,0,"mmio_start_npu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"mmio_npu_mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1704,0,"mmio_npu_acc_clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1705,0,"mmio_test_acc_addr_override_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1706,0,"mmio_test_acc_addr_override",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+1707,0,"mmio_test_one_shot_acc_clear_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1708,0,"mmio_clear_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1709,0,"mmio_npu_seq_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1710,0,"mmio_npu_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1711,0,"arid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+1712,0,"araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1714,0,"arlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1715,0,"arsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1716,0,"arburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1717,0,"arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1718,0,"arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1719,0,"rid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declArray(c+1720,0,"rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1724,0,"rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1725,0,"rlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1726,0,"rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1727,0,"rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1728,0,"drain_re",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1729,0,"drain_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declArray(c+1730,0,"psum_drain_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->pushPrefix("npu_system_top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1760,0,"AXI_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1761,0,"AXI_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1762,0,"AXI_ID_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1763,0,"SRAM_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1694,0,"mmio_start_dma",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1695,0,"mmio_dma_target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1696,0,"mmio_src_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1698,0,"mmio_burst_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1699,0,"mmio_total_bursts",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1700,0,"mmio_dma_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1701,0,"mmio_swap_banks",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1702,0,"mmio_start_npu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"mmio_npu_mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1704,0,"mmio_npu_acc_clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1705,0,"mmio_test_acc_addr_override_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1706,0,"mmio_test_acc_addr_override",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+1707,0,"mmio_test_one_shot_acc_clear_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1708,0,"mmio_clear_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1709,0,"mmio_npu_seq_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1710,0,"mmio_npu_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1711,0,"arid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+1712,0,"araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1714,0,"arlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1715,0,"arsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1716,0,"arburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1717,0,"arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1718,0,"arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1719,0,"rid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declArray(c+1720,0,"rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1724,0,"rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1725,0,"rlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1726,0,"rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1727,0,"rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1728,0,"drain_re",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1729,0,"drain_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declArray(c+1730,0,"psum_drain_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBit(c+1,0,"bank_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"dma_sram_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1586,0,"dma_sram_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declArray(c+1587,0,"dma_sram_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1746,0,"act_b0_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1747,0,"act_b1_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1748,0,"wt_b0_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1749,0,"wt_b1_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1554,0,"act_b0_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1558,0,"act_b1_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1562,0,"wt_b0_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1566,0,"wt_b1_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1750,0,"npu_sram_ren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1591,0,"npu_sram_raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declArray(c+1628,0,"npu_act_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1632,0,"npu_wt_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+3,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1751,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+4,0,"exec_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+5,0,"flush_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+6,0,"wait_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+7,0,"wt_load_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+8,0,"npu_valid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"npu_acc_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+10,0,"core_weight_load_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1752,0,"npu_acc_addr_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+1753,0,"core_acc_clear",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"one_shot_acc_clear_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_act_bank0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1763,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1761,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1746,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1586,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declArray(c+1587,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1750,0,"ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1591,0,"raddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declArray(c+1554,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_act_bank1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1763,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1761,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1747,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1586,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declArray(c+1587,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1750,0,"ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1591,0,"raddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declArray(c+1558,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_dma", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1760,0,"AXI_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1761,0,"AXI_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1762,0,"AXI_ID_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1763,0,"SRAM_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1764,0,"MAX_OUTSTANDING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1694,0,"start_dma",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1696,0,"src_addr_base",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1698,0,"burst_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1699,0,"total_bursts",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1700,0,"dma_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1711,0,"arid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+1712,0,"araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1714,0,"arlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1715,0,"arsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1716,0,"arburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1717,0,"arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1718,0,"arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1719,0,"rid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declArray(c+1720,0,"rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1724,0,"rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1725,0,"rlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1726,0,"rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1727,0,"rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"sram_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1586,0,"sram_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declArray(c+1587,0,"sram_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1765,0,"AXI_BEAT_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1766,0,"AXI_ARSIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+1767,0,"AXI_BEAT_BYTES_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+12,0,"req_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+13,0,"resp_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+14,0,"outstanding_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+15,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1754,0,"ar_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1726,0,"r_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1755,0,"r_last_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1756,0,"next_req_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1757,0,"next_outstanding",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1758,0,"can_issue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_npu_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1628,0,"sram_act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1632,0,"sram_weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+10,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+8,0,"acc_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1753,0,"acc_clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"acc_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+1728,0,"drain_re",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1729,0,"drain_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declArray(c+1730,0,"psum_drain_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declArray(c+16,0,"array_psum_bottom",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declArray(c+1769,0,"zero_psum_top",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declArray(c+1636,0,"array_act_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1592,0,"acc_valid_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 30,0);
    tracep->declBus(c+32,0,"acc_clear_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 30,0);
    tracep->pushPrefix("acc_addr_pipe", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 31; ++i) {
        tracep->declBus(c+1593+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 8,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("u_psum_buffer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1785,0,"COLS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1786,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1787,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1624,0,"acc_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"acc_clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1625,0,"acc_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declArray(c+16,0,"array_psum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBit(c+1728,0,"drain_re",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1729,0,"drain_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declArray(c+1730,0,"drain_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBus(c+1788,0,"TOTAL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1570,0,"bram_rd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declArray(c+1640,0,"acc_rd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBit(c+1626,0,"acc_valid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"acc_clear_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1627,0,"acc_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declArray(c+35,0,"array_psum_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBit(c+51,0,"drain_re_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1656,0,"acc_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declArray(c+52,0,"last_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBus(c+68,0,"last_write_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+69,0,"last_write_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1759,0,"forward_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_systolic_array", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declArray(c+1632,0,"weight_bus",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1628,0,"act_in_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1769,0,"psum_in_top",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declArray(c+1636,0,"act_out_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+16,0,"psum_out_bottom",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declArray(c+1672,0,"act_skewed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("PE_ROW[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("PE_COL[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1676,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1298,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+71,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+73,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1677,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1299,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+75,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+77,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1678,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1300,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+79,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+81,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1679,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1301,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+83,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+85,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1680,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1302,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+87,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+89,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1681,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1303,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+91,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+93,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1682,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1304,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+95,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+97,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1683,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1305,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+99,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+101,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1684,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1306,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+103,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+105,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1685,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1307,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+107,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+109,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1686,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1308,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+111,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+113,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1687,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1309,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+115,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+117,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1688,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1310,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+119,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+121,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1689,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1311,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+123,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+125,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1690,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1312,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+127,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+129,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1691,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1313,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+131,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+132,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+133,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_ROW[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("PE_COL[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1676,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1314,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+136,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+138,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1677,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1315,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+140,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+142,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1678,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1316,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+144,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+146,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1679,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1317,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+148,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+150,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1680,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1318,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+152,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+154,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1681,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1319,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+156,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+157,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+158,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+159,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1682,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1320,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+160,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+161,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+162,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1683,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1321,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+164,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+165,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+166,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+167,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1684,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1322,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+168,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+169,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+170,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1685,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1323,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+172,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+174,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+175,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1686,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1324,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+176,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+178,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1687,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1325,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+180,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+181,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+182,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+183,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1688,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1326,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+184,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+185,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+186,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+187,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1689,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1327,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+188,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+190,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1690,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1328,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+192,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+194,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1691,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1329,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+196,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+197,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+198,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+199,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_ROW[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("PE_COL[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1676,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1330,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+201,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+202,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+203,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+204,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1677,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1331,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+205,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+206,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+207,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+208,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1678,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1332,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+209,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+210,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+211,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+212,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1679,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1333,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+213,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+214,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+215,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+216,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1680,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1334,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+217,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+218,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+219,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1681,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1335,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+221,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+222,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+223,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+224,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1682,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1336,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+225,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+226,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+227,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+228,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1683,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1337,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+229,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+230,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+231,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+232,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1684,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1338,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+233,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+234,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+235,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+236,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1685,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1339,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+237,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+238,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+239,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+240,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1686,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1340,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+241,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+242,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+243,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+244,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1687,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1341,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+245,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+246,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+247,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1688,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1342,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+249,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+250,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+251,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+252,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1689,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1343,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+253,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+254,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+255,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+256,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1690,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1344,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+257,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+258,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+259,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+260,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1691,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1345,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+261,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+263,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+264,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_ROW[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("PE_COL[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1676,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1346,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+266,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+267,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+268,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+269,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1677,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1347,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+270,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+271,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+272,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+273,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1678,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1348,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+274,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+275,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+276,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+277,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1679,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1349,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+278,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+279,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+280,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+281,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1680,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1350,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+282,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+283,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+284,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+285,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1681,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1351,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+286,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+287,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+288,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+289,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1682,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1352,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+290,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+291,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+292,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+293,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1683,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1353,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+294,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+295,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+296,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+297,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1684,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1354,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+298,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+300,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1685,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1355,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+302,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+303,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+304,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+305,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1686,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1356,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+306,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+307,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+308,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+309,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1687,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1357,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+310,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+311,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+312,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+313,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1688,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1358,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+314,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+315,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+316,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+317,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1689,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1359,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+318,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+319,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+320,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+321,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1690,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1360,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+322,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+323,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+324,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+325,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1691,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1361,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+326,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+327,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+328,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+329,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_ROW[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("PE_COL[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+330,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1676,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1362,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+331,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+332,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+333,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+334,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+330,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1677,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1363,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+335,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+336,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+337,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+338,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+330,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1678,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1364,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+339,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+340,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+341,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+342,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+330,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1679,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1365,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+343,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+344,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+345,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+346,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+330,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1680,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1366,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+347,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+348,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+349,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+350,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+330,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1681,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1367,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+351,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+352,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+353,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+354,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+330,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1682,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1368,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+355,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+356,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+357,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+358,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+330,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1683,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1369,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+359,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+360,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+361,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+362,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+330,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1684,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1370,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+363,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+364,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+365,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+366,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+330,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1685,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1371,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+367,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+368,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+369,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+370,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+330,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1686,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1372,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+371,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+372,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+373,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+374,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+330,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1687,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1373,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+375,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+376,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+377,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+378,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+330,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1688,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1374,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+379,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+380,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+381,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+382,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+330,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1689,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1375,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+383,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+384,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+385,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+386,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+330,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1690,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1376,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+387,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+388,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+389,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+390,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+330,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1691,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1377,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+391,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+392,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+393,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+394,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_ROW[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("PE_COL[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+395,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1676,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1378,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+396,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+397,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+398,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+399,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+395,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1677,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1379,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+400,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+401,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+402,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+403,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+395,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1678,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1380,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+404,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+405,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+406,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+407,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+395,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1679,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1381,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+408,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+409,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+410,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+411,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+395,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1680,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1382,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+412,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+413,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+414,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+415,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+395,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1681,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1383,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+416,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+417,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+418,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+419,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+395,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1682,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1384,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+420,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+421,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+422,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+423,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+395,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1683,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1385,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+424,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+425,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+426,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+427,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+395,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1684,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1386,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+428,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+429,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+430,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+431,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+395,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1685,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1387,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+432,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+433,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+434,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+435,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+395,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1686,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1388,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+436,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+437,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+438,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+439,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+395,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1687,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1389,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+440,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+441,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+442,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+443,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+395,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1688,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1390,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+444,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+445,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+446,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+447,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+395,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1689,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1391,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+448,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+449,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+450,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+451,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+395,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1690,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1392,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+452,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+453,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+454,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+455,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+395,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1691,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1393,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+456,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+457,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+458,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+459,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_ROW[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("PE_COL[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+460,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1676,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1394,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+461,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+462,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+463,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+464,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+460,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1677,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1395,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+465,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+466,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+467,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+468,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+460,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1678,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1396,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+469,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+470,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+471,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+472,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+460,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1679,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1397,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+473,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+474,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+475,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+476,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+460,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1680,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1398,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+477,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+478,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+479,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+480,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+460,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1681,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1399,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+481,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+482,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+483,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+484,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+460,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1682,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1400,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+485,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+486,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+487,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+488,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+460,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1683,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1401,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+489,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+490,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+491,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+492,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+460,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1684,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1402,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+493,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+494,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+495,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+496,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+460,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1685,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1403,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+497,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+498,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+499,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+500,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+460,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1686,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1404,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+501,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+502,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+503,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+504,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+460,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1687,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1405,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+505,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+506,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+507,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+508,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+460,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1688,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1406,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+509,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+510,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+511,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+512,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+460,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1689,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1407,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+513,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+514,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+515,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+516,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+460,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1690,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1408,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+517,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+518,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+519,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+520,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+460,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1691,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1409,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+521,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+522,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+523,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+524,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_ROW[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("PE_COL[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+525,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1676,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1410,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+526,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+527,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+528,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+529,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+525,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1677,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1411,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+530,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+531,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+532,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+533,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+525,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1678,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1412,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+534,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+535,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+536,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+537,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+525,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1679,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1413,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+538,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+539,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+540,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+541,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+525,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1680,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1414,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+542,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+543,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+544,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+545,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+525,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1681,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1415,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+546,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+547,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+548,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+549,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+525,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1682,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1416,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+550,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+551,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+552,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+553,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+525,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1683,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1417,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+554,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+555,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+556,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+557,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+525,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1684,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1418,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+558,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+559,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+560,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+561,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+525,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1685,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1419,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+562,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+563,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+564,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+565,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+525,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1686,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1420,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+566,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+567,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+568,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+569,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+525,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1687,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1421,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+570,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+571,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+572,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+573,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+525,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1688,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1422,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+574,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+575,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+576,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+577,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+525,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1689,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1423,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+578,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+579,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+580,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+581,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+525,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1690,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1424,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+582,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+583,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+584,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+585,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+525,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1691,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1425,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+586,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+587,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+588,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+589,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_ROW[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("PE_COL[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+590,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1676,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1426,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+591,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+592,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+593,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+594,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+590,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1677,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1427,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+595,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+596,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+597,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+598,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+590,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1678,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1428,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+599,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+600,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+601,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+602,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+590,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1679,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1429,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+603,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+604,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+605,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+606,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+590,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1680,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1430,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+607,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+608,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+609,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+610,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+590,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1681,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1431,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+611,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+612,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+613,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+614,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+590,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1682,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1432,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+615,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+616,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+617,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+618,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+590,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1683,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1433,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+619,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+620,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+621,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+622,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+590,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1684,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1434,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+623,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+624,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+625,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+626,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+590,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1685,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1435,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+627,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+628,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+629,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+630,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+590,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1686,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1436,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+631,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+632,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+633,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+634,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+590,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1687,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1437,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+635,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+636,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+637,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+638,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+590,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1688,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1438,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+639,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+640,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+641,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+642,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+590,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1689,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1439,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+643,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+644,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+645,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+646,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+590,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1690,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1440,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+647,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+648,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+649,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+650,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+590,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1691,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1441,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+651,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+652,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+653,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+654,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_ROW[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("PE_COL[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+655,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1676,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1442,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+656,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+657,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+658,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+659,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+655,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1677,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1443,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+660,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+661,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+662,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+663,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+655,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1678,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1444,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+664,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+665,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+666,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+667,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+655,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1679,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1445,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+668,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+669,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+670,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+671,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+655,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1680,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1446,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+672,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+673,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+674,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+675,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+655,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1681,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1447,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+676,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+677,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+678,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+679,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+655,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1682,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1448,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+680,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+681,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+682,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+683,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+655,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1683,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1449,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+684,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+685,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+686,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+687,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+655,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1684,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1450,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+688,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+689,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+690,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+691,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+655,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1685,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1451,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+692,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+693,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+694,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+695,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+655,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1686,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1452,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+696,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+697,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+698,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+699,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+655,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1687,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1453,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+700,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+701,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+702,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+703,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+655,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1688,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1454,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+704,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+705,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+706,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+707,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+655,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1689,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1455,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+708,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+709,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+710,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+711,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+655,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1690,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1456,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+712,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+713,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+714,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+715,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+655,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1691,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1457,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+716,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+717,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+718,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+719,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_ROW[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("PE_COL[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+720,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1676,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1458,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+721,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+722,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+723,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+724,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+720,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1677,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1459,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+725,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+726,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+727,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+728,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+720,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1678,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1460,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+729,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+730,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+731,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+732,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+720,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1679,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1461,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+733,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+734,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+735,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+736,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+720,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1680,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1462,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+737,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+738,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+739,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+740,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+720,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1681,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1463,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+741,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+742,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+743,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+744,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+720,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1682,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1464,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+745,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+746,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+747,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+748,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+720,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1683,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1465,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+749,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+750,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+751,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+752,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+720,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1684,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1466,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+753,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+754,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+755,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+756,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+720,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1685,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1467,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+757,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+758,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+759,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+760,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+720,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1686,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1468,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+761,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+762,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+763,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+764,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+720,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1687,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1469,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+765,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+766,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+767,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+768,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+720,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1688,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1470,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+769,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+770,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+771,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+772,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+720,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1689,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1471,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+773,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+774,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+775,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+776,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+720,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1690,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1472,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+777,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+778,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+779,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+780,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+720,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1691,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1473,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+781,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+782,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+783,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+784,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_ROW[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("PE_COL[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1676,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1474,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+786,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+787,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+788,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+789,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1677,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1475,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+790,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+791,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+792,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+793,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1678,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1476,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+794,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+795,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+796,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+797,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1679,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1477,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+798,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+799,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+800,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+801,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1680,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1478,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+802,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+803,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+804,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+805,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1681,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1479,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+806,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+807,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+808,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+809,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1682,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1480,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+810,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+811,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+812,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+813,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1683,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1481,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+814,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+815,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+816,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+817,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1684,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1482,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+818,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+819,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+820,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+821,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1685,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1483,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+822,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+823,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+824,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+825,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1686,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1484,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+826,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+827,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+828,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+829,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1687,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1485,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+830,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+831,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+832,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+833,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1688,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1486,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+834,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+835,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+836,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+837,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1689,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1487,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+838,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+839,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+840,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+841,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1690,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1488,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+842,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+843,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+844,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+845,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1691,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1489,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+846,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+847,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+848,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+849,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_ROW[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("PE_COL[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+850,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1676,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1490,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+851,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+852,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+853,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+854,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+850,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1677,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1491,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+855,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+856,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+857,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+858,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+850,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1678,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1492,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+859,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+860,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+861,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+862,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+850,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1679,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1493,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+863,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+864,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+865,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+866,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+850,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1680,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1494,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+867,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+868,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+869,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+870,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+850,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1681,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1495,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+871,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+872,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+873,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+874,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+850,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1682,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1496,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+875,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+876,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+877,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+878,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+850,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1683,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1497,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+879,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+880,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+881,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+882,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+850,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1684,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1498,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+883,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+884,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+885,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+886,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+850,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1685,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1499,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+887,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+888,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+889,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+890,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+850,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1686,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1500,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+891,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+892,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+893,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+894,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+850,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1687,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1501,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+895,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+896,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+897,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+898,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+850,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1688,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1502,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+899,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+900,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+901,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+902,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+850,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1689,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1503,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+903,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+904,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+905,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+906,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+850,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1690,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1504,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+907,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+908,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+909,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+910,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+850,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1691,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1505,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+911,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+912,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+913,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+914,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_ROW[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("PE_COL[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+915,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1676,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1506,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+916,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+917,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+918,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+919,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+915,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1677,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1507,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+920,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+921,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+922,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+923,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+915,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1678,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1508,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+924,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+925,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+926,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+927,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+915,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1679,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1509,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+928,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+929,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+930,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+931,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+915,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1680,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1510,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+932,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+933,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+934,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+935,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+915,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1681,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1511,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+936,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+937,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+938,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+939,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+915,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1682,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1512,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+940,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+941,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+942,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+943,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+915,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1683,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1513,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+944,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+945,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+946,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+947,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+915,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1684,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1514,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+948,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+949,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+950,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+951,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+915,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1685,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1515,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+952,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+953,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+954,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+955,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+915,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1686,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1516,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+956,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+957,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+958,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+959,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+915,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1687,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1517,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+960,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+961,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+962,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+963,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+915,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1688,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1518,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+964,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+965,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+966,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+967,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+915,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1689,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1519,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+968,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+969,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+970,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+971,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+915,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1690,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1520,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+972,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+973,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+974,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+975,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+915,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1691,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1521,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+976,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+977,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+978,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+979,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_ROW[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("PE_COL[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+980,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1676,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1522,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+981,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+982,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+983,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+984,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+980,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1677,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1523,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+985,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+986,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+987,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+988,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+980,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1678,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1524,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+989,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+990,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+991,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+992,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+980,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1679,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1525,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+993,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+994,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+995,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+996,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+980,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1680,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1526,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+997,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+998,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+999,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1000,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+980,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1681,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1527,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1001,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1002,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1003,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1004,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+980,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1682,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1528,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1005,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1006,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1007,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1008,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+980,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1683,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1529,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1009,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1010,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1011,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1012,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+980,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1684,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1530,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1013,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1014,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1015,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1016,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+980,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1685,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1531,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1017,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1018,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1019,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1020,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+980,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1686,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1532,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1021,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1022,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1023,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1024,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+980,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1687,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1533,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1025,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1026,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1027,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1028,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+980,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1688,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1534,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1029,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1030,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1031,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1032,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+980,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1689,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1535,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1033,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1034,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1035,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1036,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+980,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1690,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1536,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1037,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1038,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1039,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1040,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+980,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1691,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1537,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1041,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1042,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1043,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1044,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_ROW[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("PE_COL[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1045,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1676,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1538,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1046,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1047,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1048,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1049,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1045,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1677,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1539,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1050,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1051,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1052,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1053,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1045,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1678,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1540,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1054,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1055,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1056,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1057,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1045,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1679,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1541,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1058,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1059,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1060,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1061,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1045,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1680,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1542,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1062,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1063,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1064,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1065,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1045,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1681,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1543,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1066,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1067,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1068,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1069,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1045,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1682,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1544,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1070,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1071,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1072,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1073,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1045,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1683,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1545,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1074,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1075,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1076,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1077,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1045,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1684,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1546,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1078,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1079,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1080,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1081,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1045,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1685,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1547,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1082,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1083,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1084,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1085,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1045,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1686,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1548,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1086,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1087,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1088,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1089,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1045,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1687,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1549,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1090,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1091,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1092,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1093,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1045,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1688,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1550,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1094,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1095,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1096,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1097,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1045,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1689,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1551,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1098,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1099,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1100,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1101,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1045,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1690,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1552,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1102,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1103,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1104,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1105,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PE_COL[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1045,0,"weight_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1691,0,"weight_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1553,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1106,0,"psum_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1107,0,"act_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1108,0,"psum_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1109,0,"weight_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("Psum_DESKEW[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1789,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1110,0,"deskew_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 479,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1125,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("Psum_DESKEW[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1790,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1126,0,"deskew_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 159,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1131,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("Psum_DESKEW[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1762,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1132,0,"deskew_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1136,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("Psum_DESKEW[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1791,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1137,0,"deskew_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1140,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("Psum_DESKEW[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1792,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+1141,0,"deskew_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1143,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("Psum_DESKEW[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1793,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1144,0,"deskew_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1145,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("Psum_DESKEW[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1794,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1146,0,"deskew_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 447,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1160,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("Psum_DESKEW[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1795,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1161,0,"deskew_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 415,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1174,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("Psum_DESKEW[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1796,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1175,0,"deskew_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 383,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1187,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("Psum_DESKEW[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1797,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1188,0,"deskew_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 351,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1199,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("Psum_DESKEW[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1763,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1200,0,"deskew_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 319,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1210,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("Psum_DESKEW[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1787,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1211,0,"deskew_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 287,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1220,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("Psum_DESKEW[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1764,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1221,0,"deskew_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1229,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("Psum_DESKEW[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1798,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1230,0,"deskew_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 223,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1237,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("Psum_DESKEW[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1799,0,"DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1238,0,"deskew_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 191,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1244,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_skew", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1785,0,"ROWS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1764,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1693,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1628,0,"act_in_raw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1672,0,"act_in_skewed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("ROW_SKEW[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1245,0,"delay_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1248,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ROW_SKEW[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1249,0,"delay_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 87,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1252,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ROW_SKEW[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1253,0,"delay_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1256,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ROW_SKEW[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1257,0,"delay_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 103,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1261,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ROW_SKEW[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1262,0,"delay_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 111,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1266,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ROW_SKEW[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1267,0,"delay_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 119,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1271,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ROW_SKEW[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1272,0,"delay_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1273,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ROW_SKEW[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1274,0,"delay_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1275,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ROW_SKEW[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1276,0,"delay_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1277,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ROW_SKEW[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1278,0,"delay_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1279,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ROW_SKEW[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+1280,0,"delay_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1282,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ROW_SKEW[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+1283,0,"delay_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1285,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ROW_SKEW[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+1286,0,"delay_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1288,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ROW_SKEW[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+1289,0,"delay_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1291,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ROW_SKEW[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1292,0,"delay_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1295,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1296,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1297,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_wt_bank0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1763,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1761,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1748,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1586,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declArray(c+1587,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1750,0,"ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1591,0,"raddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declArray(c+1562,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_wt_bank1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1763,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1761,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1692,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1749,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1586,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declArray(c+1587,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1750,0,"ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1591,0,"raddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declArray(c+1566,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vnpu_system_top___024root__trace_init_top(Vnpu_system_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_system_top___024root__trace_init_top\n"); );
    // Body
    Vnpu_system_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vnpu_system_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vnpu_system_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vnpu_system_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vnpu_system_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vnpu_system_top___024root__trace_register(Vnpu_system_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_system_top___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vnpu_system_top___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vnpu_system_top___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vnpu_system_top___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vnpu_system_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vnpu_system_top___024root__trace_const_0_sub_0(Vnpu_system_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vnpu_system_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_system_top___024root__trace_const_0\n"); );
    // Init
    Vnpu_system_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnpu_system_top___024root*>(voidSelf);
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vnpu_system_top___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlWide<16>/*511:0*/ Vnpu_system_top__ConstPool__CONST_h93e1b771_0;

VL_ATTR_COLD void Vnpu_system_top___024root__trace_const_0_sub_0(Vnpu_system_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_system_top___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1760,(0x40U),32);
    bufp->fullIData(oldp+1761,(0x80U),32);
    bufp->fullIData(oldp+1762,(4U),32);
    bufp->fullIData(oldp+1763,(0xaU),32);
    bufp->fullIData(oldp+1764,(8U),32);
    bufp->fullIData(oldp+1765,(0x10U),32);
    bufp->fullCData(oldp+1766,(4U),3);
    bufp->fullQData(oldp+1767,(0x10ULL),64);
    bufp->fullWData(oldp+1769,(Vnpu_system_top__ConstPool__CONST_h93e1b771_0),512);
    bufp->fullIData(oldp+1785,(0x10U),32);
    bufp->fullIData(oldp+1786,(0x20U),32);
    bufp->fullIData(oldp+1787,(9U),32);
    bufp->fullIData(oldp+1788,(0x200U),32);
    bufp->fullIData(oldp+1789,(0xfU),32);
    bufp->fullIData(oldp+1790,(5U),32);
    bufp->fullIData(oldp+1791,(3U),32);
    bufp->fullIData(oldp+1792,(2U),32);
    bufp->fullIData(oldp+1793,(1U),32);
    bufp->fullIData(oldp+1794,(0xeU),32);
    bufp->fullIData(oldp+1795,(0xdU),32);
    bufp->fullIData(oldp+1796,(0xcU),32);
    bufp->fullIData(oldp+1797,(0xbU),32);
    bufp->fullIData(oldp+1798,(7U),32);
    bufp->fullIData(oldp+1799,(6U),32);
}

VL_ATTR_COLD void Vnpu_system_top___024root__trace_full_0_sub_0(Vnpu_system_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vnpu_system_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_system_top___024root__trace_full_0\n"); );
    // Init
    Vnpu_system_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnpu_system_top___024root*>(voidSelf);
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vnpu_system_top___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vnpu_system_top___024root__trace_full_0_sub_0(Vnpu_system_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_system_top___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->npu_system_top__DOT__bank_sel));
    bufp->fullBit(oldp+2,(vlSelf->npu_system_top__DOT__dma_sram_wen));
    bufp->fullCData(oldp+3,(vlSelf->npu_system_top__DOT__state),3);
    bufp->fullSData(oldp+4,(vlSelf->npu_system_top__DOT__exec_cnt),16);
    bufp->fullCData(oldp+5,(vlSelf->npu_system_top__DOT__flush_cnt),6);
    bufp->fullCData(oldp+6,(vlSelf->npu_system_top__DOT__wait_cnt),2);
    bufp->fullSData(oldp+7,(vlSelf->npu_system_top__DOT__wt_load_shift),16);
    bufp->fullBit(oldp+8,(vlSelf->npu_system_top__DOT__npu_valid_q));
    bufp->fullSData(oldp+9,(vlSelf->npu_system_top__DOT__npu_acc_addr_q),9);
    bufp->fullSData(oldp+10,(vlSelf->npu_system_top__DOT__core_weight_load_en),16);
    bufp->fullBit(oldp+11,(vlSelf->npu_system_top__DOT__one_shot_acc_clear_pending));
    bufp->fullSData(oldp+12,(vlSelf->npu_system_top__DOT__u_dma__DOT__req_cnt),16);
    bufp->fullSData(oldp+13,(vlSelf->npu_system_top__DOT__u_dma__DOT__resp_cnt),16);
    bufp->fullCData(oldp+14,(vlSelf->npu_system_top__DOT__u_dma__DOT__outstanding_cnt),8);
    bufp->fullBit(oldp+15,(vlSelf->npu_system_top__DOT__u_dma__DOT__busy));
    bufp->fullWData(oldp+16,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_psum_bottom),512);
    bufp->fullIData(oldp+32,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_clear_pipe),31);
    bufp->fullBit(oldp+33,((1U & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_clear_pipe 
                                  >> 0x1eU))));
    bufp->fullBit(oldp+34,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_clear_q));
    bufp->fullWData(oldp+35,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q),512);
    bufp->fullBit(oldp+51,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__drain_re_q));
    bufp->fullWData(oldp+52,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data),512);
    bufp->fullSData(oldp+68,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_addr),9);
    bufp->fullBit(oldp+69,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_valid));
    bufp->fullBit(oldp+70,((1U & (IData)(vlSelf->npu_system_top__DOT__core_weight_load_en))));
    bufp->fullIData(oldp+71,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                             [0U][0U]),32);
    bufp->fullCData(oldp+72,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+73,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+74,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+75,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                             [0U][0xaU]),32);
    bufp->fullCData(oldp+76,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+77,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+78,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+79,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                             [0U][0xbU]),32);
    bufp->fullCData(oldp+80,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+81,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+82,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+83,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                             [0U][0xcU]),32);
    bufp->fullCData(oldp+84,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+85,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+86,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+87,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                             [0U][0xdU]),32);
    bufp->fullCData(oldp+88,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+89,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+90,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+91,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                             [0U][0xeU]),32);
    bufp->fullCData(oldp+92,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+93,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+94,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+95,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                             [0U][0xfU]),32);
    bufp->fullCData(oldp+96,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+97,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+98,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+99,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                             [0U][1U]),32);
    bufp->fullCData(oldp+100,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+101,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+102,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+103,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0U][2U]),32);
    bufp->fullCData(oldp+104,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+105,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+106,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+107,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0U][3U]),32);
    bufp->fullCData(oldp+108,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+109,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+110,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+111,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0U][4U]),32);
    bufp->fullCData(oldp+112,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+113,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+114,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+115,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0U][5U]),32);
    bufp->fullCData(oldp+116,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+117,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+118,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+119,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0U][6U]),32);
    bufp->fullCData(oldp+120,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+121,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+122,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+123,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0U][7U]),32);
    bufp->fullCData(oldp+124,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+125,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+126,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+127,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0U][8U]),32);
    bufp->fullCData(oldp+128,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+129,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+130,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+131,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0U][9U]),32);
    bufp->fullCData(oldp+132,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+133,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+134,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullBit(oldp+135,((1U & ((IData)(vlSelf->npu_system_top__DOT__core_weight_load_en) 
                                   >> 0xaU))));
    bufp->fullIData(oldp+136,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xaU][0U]),32);
    bufp->fullCData(oldp+137,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+138,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+139,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+140,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xaU][0xaU]),32);
    bufp->fullCData(oldp+141,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+142,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+143,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+144,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xaU][0xbU]),32);
    bufp->fullCData(oldp+145,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+146,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+147,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+148,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xaU][0xcU]),32);
    bufp->fullCData(oldp+149,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+150,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+151,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+152,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xaU][0xdU]),32);
    bufp->fullCData(oldp+153,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+154,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+155,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+156,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xaU][0xeU]),32);
    bufp->fullCData(oldp+157,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+158,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+159,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+160,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xaU][0xfU]),32);
    bufp->fullCData(oldp+161,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+162,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+163,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+164,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xaU][1U]),32);
    bufp->fullCData(oldp+165,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+166,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+167,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+168,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xaU][2U]),32);
    bufp->fullCData(oldp+169,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+170,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+171,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+172,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xaU][3U]),32);
    bufp->fullCData(oldp+173,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+174,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+175,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+176,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xaU][4U]),32);
    bufp->fullCData(oldp+177,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+178,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+179,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+180,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xaU][5U]),32);
    bufp->fullCData(oldp+181,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+182,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+183,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+184,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xaU][6U]),32);
    bufp->fullCData(oldp+185,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+186,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+187,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+188,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xaU][7U]),32);
    bufp->fullCData(oldp+189,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+190,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+191,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+192,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xaU][8U]),32);
    bufp->fullCData(oldp+193,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+194,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+195,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+196,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xaU][9U]),32);
    bufp->fullCData(oldp+197,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+198,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+199,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullBit(oldp+200,((1U & ((IData)(vlSelf->npu_system_top__DOT__core_weight_load_en) 
                                   >> 0xbU))));
    bufp->fullIData(oldp+201,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xbU][0U]),32);
    bufp->fullCData(oldp+202,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+203,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+204,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+205,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xbU][0xaU]),32);
    bufp->fullCData(oldp+206,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+207,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+208,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+209,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xbU][0xbU]),32);
    bufp->fullCData(oldp+210,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+211,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+212,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+213,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xbU][0xcU]),32);
    bufp->fullCData(oldp+214,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+215,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+216,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+217,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xbU][0xdU]),32);
    bufp->fullCData(oldp+218,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+219,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+220,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+221,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xbU][0xeU]),32);
    bufp->fullCData(oldp+222,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+223,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+224,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+225,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xbU][0xfU]),32);
    bufp->fullCData(oldp+226,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+227,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+228,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+229,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xbU][1U]),32);
    bufp->fullCData(oldp+230,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+231,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+232,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+233,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xbU][2U]),32);
    bufp->fullCData(oldp+234,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+235,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+236,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+237,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xbU][3U]),32);
    bufp->fullCData(oldp+238,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+239,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+240,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+241,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xbU][4U]),32);
    bufp->fullCData(oldp+242,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+243,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+244,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+245,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xbU][5U]),32);
    bufp->fullCData(oldp+246,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+247,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+248,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+249,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xbU][6U]),32);
    bufp->fullCData(oldp+250,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+251,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+252,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+253,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xbU][7U]),32);
    bufp->fullCData(oldp+254,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+255,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+256,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+257,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xbU][8U]),32);
    bufp->fullCData(oldp+258,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+259,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+260,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+261,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xbU][9U]),32);
    bufp->fullCData(oldp+262,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+263,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+264,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullBit(oldp+265,((1U & ((IData)(vlSelf->npu_system_top__DOT__core_weight_load_en) 
                                   >> 0xcU))));
    bufp->fullIData(oldp+266,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xcU][0U]),32);
    bufp->fullCData(oldp+267,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+268,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+269,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+270,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xcU][0xaU]),32);
    bufp->fullCData(oldp+271,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+272,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+273,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+274,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xcU][0xbU]),32);
    bufp->fullCData(oldp+275,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+276,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+277,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+278,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xcU][0xcU]),32);
    bufp->fullCData(oldp+279,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+280,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+281,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+282,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xcU][0xdU]),32);
    bufp->fullCData(oldp+283,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+284,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+285,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+286,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xcU][0xeU]),32);
    bufp->fullCData(oldp+287,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+288,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+289,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+290,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xcU][0xfU]),32);
    bufp->fullCData(oldp+291,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+292,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+293,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+294,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xcU][1U]),32);
    bufp->fullCData(oldp+295,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+296,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+297,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+298,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xcU][2U]),32);
    bufp->fullCData(oldp+299,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+300,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+301,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+302,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xcU][3U]),32);
    bufp->fullCData(oldp+303,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+304,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+305,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+306,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xcU][4U]),32);
    bufp->fullCData(oldp+307,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+308,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+309,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+310,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xcU][5U]),32);
    bufp->fullCData(oldp+311,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+312,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+313,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+314,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xcU][6U]),32);
    bufp->fullCData(oldp+315,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+316,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+317,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+318,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xcU][7U]),32);
    bufp->fullCData(oldp+319,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+320,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+321,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+322,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xcU][8U]),32);
    bufp->fullCData(oldp+323,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+324,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+325,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+326,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xcU][9U]),32);
    bufp->fullCData(oldp+327,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+328,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+329,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullBit(oldp+330,((1U & ((IData)(vlSelf->npu_system_top__DOT__core_weight_load_en) 
                                   >> 0xdU))));
    bufp->fullIData(oldp+331,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xdU][0U]),32);
    bufp->fullCData(oldp+332,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+333,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+334,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+335,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xdU][0xaU]),32);
    bufp->fullCData(oldp+336,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+337,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+338,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+339,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xdU][0xbU]),32);
    bufp->fullCData(oldp+340,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+341,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+342,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+343,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xdU][0xcU]),32);
    bufp->fullCData(oldp+344,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+345,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+346,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+347,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xdU][0xdU]),32);
    bufp->fullCData(oldp+348,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+349,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+350,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+351,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xdU][0xeU]),32);
    bufp->fullCData(oldp+352,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+353,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+354,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+355,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xdU][0xfU]),32);
    bufp->fullCData(oldp+356,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+357,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+358,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+359,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xdU][1U]),32);
    bufp->fullCData(oldp+360,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+361,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+362,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+363,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xdU][2U]),32);
    bufp->fullCData(oldp+364,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+365,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+366,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+367,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xdU][3U]),32);
    bufp->fullCData(oldp+368,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+369,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+370,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+371,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xdU][4U]),32);
    bufp->fullCData(oldp+372,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+373,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+374,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+375,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xdU][5U]),32);
    bufp->fullCData(oldp+376,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+377,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+378,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+379,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xdU][6U]),32);
    bufp->fullCData(oldp+380,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+381,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+382,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+383,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xdU][7U]),32);
    bufp->fullCData(oldp+384,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+385,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+386,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+387,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xdU][8U]),32);
    bufp->fullCData(oldp+388,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+389,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+390,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+391,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xdU][9U]),32);
    bufp->fullCData(oldp+392,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+393,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+394,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullBit(oldp+395,((1U & ((IData)(vlSelf->npu_system_top__DOT__core_weight_load_en) 
                                   >> 0xeU))));
    bufp->fullIData(oldp+396,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xeU][0U]),32);
    bufp->fullCData(oldp+397,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+398,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+399,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+400,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xeU][0xaU]),32);
    bufp->fullCData(oldp+401,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+402,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+403,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+404,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xeU][0xbU]),32);
    bufp->fullCData(oldp+405,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+406,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+407,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+408,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xeU][0xcU]),32);
    bufp->fullCData(oldp+409,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+410,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+411,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+412,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xeU][0xdU]),32);
    bufp->fullCData(oldp+413,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+414,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+415,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+416,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xeU][0xeU]),32);
    bufp->fullCData(oldp+417,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+418,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+419,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+420,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xeU][0xfU]),32);
    bufp->fullCData(oldp+421,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+422,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+423,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+424,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xeU][1U]),32);
    bufp->fullCData(oldp+425,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+426,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+427,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+428,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xeU][2U]),32);
    bufp->fullCData(oldp+429,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+430,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+431,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+432,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xeU][3U]),32);
    bufp->fullCData(oldp+433,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+434,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+435,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+436,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xeU][4U]),32);
    bufp->fullCData(oldp+437,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+438,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+439,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+440,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xeU][5U]),32);
    bufp->fullCData(oldp+441,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+442,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+443,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+444,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xeU][6U]),32);
    bufp->fullCData(oldp+445,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+446,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+447,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+448,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xeU][7U]),32);
    bufp->fullCData(oldp+449,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+450,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+451,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+452,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xeU][8U]),32);
    bufp->fullCData(oldp+453,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+454,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+455,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+456,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xeU][9U]),32);
    bufp->fullCData(oldp+457,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+458,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+459,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullBit(oldp+460,((1U & ((IData)(vlSelf->npu_system_top__DOT__core_weight_load_en) 
                                   >> 0xfU))));
    bufp->fullIData(oldp+461,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xfU][0U]),32);
    bufp->fullCData(oldp+462,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+463,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+464,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+465,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xfU][0xaU]),32);
    bufp->fullCData(oldp+466,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+467,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+468,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+469,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xfU][0xbU]),32);
    bufp->fullCData(oldp+470,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+471,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+472,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+473,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xfU][0xcU]),32);
    bufp->fullCData(oldp+474,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+475,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+476,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+477,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xfU][0xdU]),32);
    bufp->fullCData(oldp+478,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+479,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+480,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+481,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xfU][0xeU]),32);
    bufp->fullCData(oldp+482,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+483,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+484,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+485,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xfU][0xfU]),32);
    bufp->fullCData(oldp+486,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+487,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+488,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+489,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xfU][1U]),32);
    bufp->fullCData(oldp+490,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+491,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+492,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+493,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xfU][2U]),32);
    bufp->fullCData(oldp+494,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+495,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+496,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+497,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xfU][3U]),32);
    bufp->fullCData(oldp+498,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+499,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+500,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+501,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xfU][4U]),32);
    bufp->fullCData(oldp+502,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+503,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+504,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+505,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xfU][5U]),32);
    bufp->fullCData(oldp+506,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+507,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+508,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+509,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xfU][6U]),32);
    bufp->fullCData(oldp+510,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+511,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+512,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+513,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xfU][7U]),32);
    bufp->fullCData(oldp+514,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+515,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+516,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+517,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xfU][8U]),32);
    bufp->fullCData(oldp+518,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+519,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+520,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+521,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [0xfU][9U]),32);
    bufp->fullCData(oldp+522,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+523,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+524,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullBit(oldp+525,((1U & ((IData)(vlSelf->npu_system_top__DOT__core_weight_load_en) 
                                   >> 1U))));
    bufp->fullIData(oldp+526,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [1U][0U]),32);
    bufp->fullCData(oldp+527,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+528,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+529,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+530,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [1U][0xaU]),32);
    bufp->fullCData(oldp+531,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+532,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+533,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+534,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [1U][0xbU]),32);
    bufp->fullCData(oldp+535,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+536,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+537,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+538,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [1U][0xcU]),32);
    bufp->fullCData(oldp+539,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+540,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+541,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+542,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [1U][0xdU]),32);
    bufp->fullCData(oldp+543,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+544,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+545,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+546,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [1U][0xeU]),32);
    bufp->fullCData(oldp+547,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+548,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+549,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+550,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [1U][0xfU]),32);
    bufp->fullCData(oldp+551,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+552,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+553,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+554,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [1U][1U]),32);
    bufp->fullCData(oldp+555,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+556,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+557,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+558,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [1U][2U]),32);
    bufp->fullCData(oldp+559,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+560,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+561,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+562,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [1U][3U]),32);
    bufp->fullCData(oldp+563,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+564,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+565,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+566,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [1U][4U]),32);
    bufp->fullCData(oldp+567,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+568,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+569,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+570,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [1U][5U]),32);
    bufp->fullCData(oldp+571,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+572,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+573,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+574,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [1U][6U]),32);
    bufp->fullCData(oldp+575,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+576,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+577,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+578,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [1U][7U]),32);
    bufp->fullCData(oldp+579,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+580,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+581,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+582,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [1U][8U]),32);
    bufp->fullCData(oldp+583,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+584,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+585,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+586,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [1U][9U]),32);
    bufp->fullCData(oldp+587,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+588,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+589,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullBit(oldp+590,((1U & ((IData)(vlSelf->npu_system_top__DOT__core_weight_load_en) 
                                   >> 2U))));
    bufp->fullIData(oldp+591,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [2U][0U]),32);
    bufp->fullCData(oldp+592,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+593,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+594,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+595,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [2U][0xaU]),32);
    bufp->fullCData(oldp+596,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+597,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+598,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+599,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [2U][0xbU]),32);
    bufp->fullCData(oldp+600,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+601,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+602,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+603,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [2U][0xcU]),32);
    bufp->fullCData(oldp+604,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+605,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+606,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+607,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [2U][0xdU]),32);
    bufp->fullCData(oldp+608,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+609,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+610,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+611,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [2U][0xeU]),32);
    bufp->fullCData(oldp+612,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+613,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+614,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+615,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [2U][0xfU]),32);
    bufp->fullCData(oldp+616,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+617,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+618,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+619,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [2U][1U]),32);
    bufp->fullCData(oldp+620,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+621,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+622,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+623,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [2U][2U]),32);
    bufp->fullCData(oldp+624,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+625,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+626,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+627,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [2U][3U]),32);
    bufp->fullCData(oldp+628,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+629,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+630,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+631,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [2U][4U]),32);
    bufp->fullCData(oldp+632,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+633,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+634,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+635,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [2U][5U]),32);
    bufp->fullCData(oldp+636,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+637,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+638,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+639,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [2U][6U]),32);
    bufp->fullCData(oldp+640,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+641,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+642,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+643,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [2U][7U]),32);
    bufp->fullCData(oldp+644,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+645,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+646,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+647,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [2U][8U]),32);
    bufp->fullCData(oldp+648,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+649,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+650,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+651,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [2U][9U]),32);
    bufp->fullCData(oldp+652,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+653,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+654,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullBit(oldp+655,((1U & ((IData)(vlSelf->npu_system_top__DOT__core_weight_load_en) 
                                   >> 3U))));
    bufp->fullIData(oldp+656,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [3U][0U]),32);
    bufp->fullCData(oldp+657,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+658,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+659,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+660,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [3U][0xaU]),32);
    bufp->fullCData(oldp+661,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+662,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+663,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+664,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [3U][0xbU]),32);
    bufp->fullCData(oldp+665,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+666,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+667,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+668,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [3U][0xcU]),32);
    bufp->fullCData(oldp+669,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+670,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+671,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+672,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [3U][0xdU]),32);
    bufp->fullCData(oldp+673,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+674,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+675,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+676,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [3U][0xeU]),32);
    bufp->fullCData(oldp+677,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+678,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+679,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+680,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [3U][0xfU]),32);
    bufp->fullCData(oldp+681,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+682,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+683,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+684,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [3U][1U]),32);
    bufp->fullCData(oldp+685,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+686,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+687,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+688,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [3U][2U]),32);
    bufp->fullCData(oldp+689,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+690,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+691,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+692,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [3U][3U]),32);
    bufp->fullCData(oldp+693,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+694,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+695,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+696,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [3U][4U]),32);
    bufp->fullCData(oldp+697,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+698,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+699,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+700,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [3U][5U]),32);
    bufp->fullCData(oldp+701,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+702,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+703,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+704,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [3U][6U]),32);
    bufp->fullCData(oldp+705,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+706,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+707,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+708,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [3U][7U]),32);
    bufp->fullCData(oldp+709,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+710,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+711,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+712,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [3U][8U]),32);
    bufp->fullCData(oldp+713,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+714,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+715,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+716,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [3U][9U]),32);
    bufp->fullCData(oldp+717,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+718,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+719,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullBit(oldp+720,((1U & ((IData)(vlSelf->npu_system_top__DOT__core_weight_load_en) 
                                   >> 4U))));
    bufp->fullIData(oldp+721,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [4U][0U]),32);
    bufp->fullCData(oldp+722,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+723,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+724,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+725,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [4U][0xaU]),32);
    bufp->fullCData(oldp+726,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+727,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+728,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+729,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [4U][0xbU]),32);
    bufp->fullCData(oldp+730,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+731,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+732,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+733,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [4U][0xcU]),32);
    bufp->fullCData(oldp+734,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+735,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+736,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+737,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [4U][0xdU]),32);
    bufp->fullCData(oldp+738,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+739,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+740,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+741,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [4U][0xeU]),32);
    bufp->fullCData(oldp+742,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+743,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+744,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+745,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [4U][0xfU]),32);
    bufp->fullCData(oldp+746,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+747,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+748,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+749,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [4U][1U]),32);
    bufp->fullCData(oldp+750,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+751,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+752,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+753,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [4U][2U]),32);
    bufp->fullCData(oldp+754,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+755,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+756,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+757,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [4U][3U]),32);
    bufp->fullCData(oldp+758,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+759,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+760,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+761,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [4U][4U]),32);
    bufp->fullCData(oldp+762,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+763,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+764,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+765,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [4U][5U]),32);
    bufp->fullCData(oldp+766,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+767,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+768,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+769,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [4U][6U]),32);
    bufp->fullCData(oldp+770,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+771,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+772,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+773,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [4U][7U]),32);
    bufp->fullCData(oldp+774,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+775,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+776,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+777,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [4U][8U]),32);
    bufp->fullCData(oldp+778,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+779,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+780,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+781,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [4U][9U]),32);
    bufp->fullCData(oldp+782,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+783,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+784,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullBit(oldp+785,((1U & ((IData)(vlSelf->npu_system_top__DOT__core_weight_load_en) 
                                   >> 5U))));
    bufp->fullIData(oldp+786,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [5U][0U]),32);
    bufp->fullCData(oldp+787,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+788,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+789,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+790,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [5U][0xaU]),32);
    bufp->fullCData(oldp+791,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+792,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+793,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+794,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [5U][0xbU]),32);
    bufp->fullCData(oldp+795,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+796,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+797,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+798,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [5U][0xcU]),32);
    bufp->fullCData(oldp+799,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+800,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+801,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+802,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [5U][0xdU]),32);
    bufp->fullCData(oldp+803,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+804,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+805,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+806,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [5U][0xeU]),32);
    bufp->fullCData(oldp+807,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+808,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+809,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+810,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [5U][0xfU]),32);
    bufp->fullCData(oldp+811,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+812,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+813,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+814,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [5U][1U]),32);
    bufp->fullCData(oldp+815,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+816,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+817,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+818,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [5U][2U]),32);
    bufp->fullCData(oldp+819,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+820,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+821,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+822,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [5U][3U]),32);
    bufp->fullCData(oldp+823,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+824,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+825,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+826,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [5U][4U]),32);
    bufp->fullCData(oldp+827,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+828,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+829,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+830,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [5U][5U]),32);
    bufp->fullCData(oldp+831,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+832,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+833,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+834,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [5U][6U]),32);
    bufp->fullCData(oldp+835,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+836,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+837,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+838,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [5U][7U]),32);
    bufp->fullCData(oldp+839,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+840,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+841,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+842,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [5U][8U]),32);
    bufp->fullCData(oldp+843,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+844,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+845,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+846,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [5U][9U]),32);
    bufp->fullCData(oldp+847,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+848,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+849,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullBit(oldp+850,((1U & ((IData)(vlSelf->npu_system_top__DOT__core_weight_load_en) 
                                   >> 6U))));
    bufp->fullIData(oldp+851,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [6U][0U]),32);
    bufp->fullCData(oldp+852,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+853,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+854,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+855,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [6U][0xaU]),32);
    bufp->fullCData(oldp+856,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+857,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+858,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+859,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [6U][0xbU]),32);
    bufp->fullCData(oldp+860,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+861,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+862,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+863,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [6U][0xcU]),32);
    bufp->fullCData(oldp+864,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+865,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+866,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+867,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [6U][0xdU]),32);
    bufp->fullCData(oldp+868,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+869,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+870,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+871,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [6U][0xeU]),32);
    bufp->fullCData(oldp+872,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+873,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+874,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+875,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [6U][0xfU]),32);
    bufp->fullCData(oldp+876,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+877,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+878,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+879,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [6U][1U]),32);
    bufp->fullCData(oldp+880,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+881,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+882,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+883,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [6U][2U]),32);
    bufp->fullCData(oldp+884,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+885,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+886,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+887,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [6U][3U]),32);
    bufp->fullCData(oldp+888,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+889,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+890,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+891,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [6U][4U]),32);
    bufp->fullCData(oldp+892,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+893,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+894,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+895,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [6U][5U]),32);
    bufp->fullCData(oldp+896,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+897,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+898,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+899,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [6U][6U]),32);
    bufp->fullCData(oldp+900,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+901,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+902,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+903,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [6U][7U]),32);
    bufp->fullCData(oldp+904,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+905,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+906,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+907,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [6U][8U]),32);
    bufp->fullCData(oldp+908,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+909,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+910,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+911,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [6U][9U]),32);
    bufp->fullCData(oldp+912,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+913,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+914,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullBit(oldp+915,((1U & ((IData)(vlSelf->npu_system_top__DOT__core_weight_load_en) 
                                   >> 7U))));
    bufp->fullIData(oldp+916,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [7U][0U]),32);
    bufp->fullCData(oldp+917,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+918,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+919,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+920,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [7U][0xaU]),32);
    bufp->fullCData(oldp+921,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+922,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+923,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+924,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [7U][0xbU]),32);
    bufp->fullCData(oldp+925,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+926,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+927,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+928,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [7U][0xcU]),32);
    bufp->fullCData(oldp+929,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+930,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+931,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+932,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [7U][0xdU]),32);
    bufp->fullCData(oldp+933,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+934,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+935,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+936,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [7U][0xeU]),32);
    bufp->fullCData(oldp+937,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+938,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+939,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+940,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [7U][0xfU]),32);
    bufp->fullCData(oldp+941,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+942,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+943,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+944,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [7U][1U]),32);
    bufp->fullCData(oldp+945,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+946,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+947,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+948,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [7U][2U]),32);
    bufp->fullCData(oldp+949,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+950,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+951,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+952,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [7U][3U]),32);
    bufp->fullCData(oldp+953,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+954,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+955,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+956,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [7U][4U]),32);
    bufp->fullCData(oldp+957,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+958,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+959,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+960,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [7U][5U]),32);
    bufp->fullCData(oldp+961,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+962,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+963,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+964,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [7U][6U]),32);
    bufp->fullCData(oldp+965,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+966,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+967,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+968,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [7U][7U]),32);
    bufp->fullCData(oldp+969,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+970,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+971,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+972,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [7U][8U]),32);
    bufp->fullCData(oldp+973,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+974,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+975,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+976,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [7U][9U]),32);
    bufp->fullCData(oldp+977,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+978,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+979,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullBit(oldp+980,((1U & ((IData)(vlSelf->npu_system_top__DOT__core_weight_load_en) 
                                   >> 8U))));
    bufp->fullIData(oldp+981,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [8U][0U]),32);
    bufp->fullCData(oldp+982,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+983,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+984,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+985,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [8U][0xaU]),32);
    bufp->fullCData(oldp+986,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+987,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+988,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+989,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [8U][0xbU]),32);
    bufp->fullCData(oldp+990,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+991,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+992,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+993,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [8U][0xcU]),32);
    bufp->fullCData(oldp+994,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+995,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+996,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+997,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                              [8U][0xdU]),32);
    bufp->fullCData(oldp+998,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+999,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+1000,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+1001,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [8U][0xeU]),32);
    bufp->fullCData(oldp+1002,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+1003,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+1004,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+1005,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [8U][0xfU]),32);
    bufp->fullCData(oldp+1006,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+1007,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+1008,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+1009,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [8U][1U]),32);
    bufp->fullCData(oldp+1010,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+1011,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+1012,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+1013,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [8U][2U]),32);
    bufp->fullCData(oldp+1014,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+1015,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+1016,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+1017,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [8U][3U]),32);
    bufp->fullCData(oldp+1018,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+1019,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+1020,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+1021,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [8U][4U]),32);
    bufp->fullCData(oldp+1022,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+1023,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+1024,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+1025,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [8U][5U]),32);
    bufp->fullCData(oldp+1026,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+1027,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+1028,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+1029,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [8U][6U]),32);
    bufp->fullCData(oldp+1030,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+1031,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+1032,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+1033,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [8U][7U]),32);
    bufp->fullCData(oldp+1034,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+1035,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+1036,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+1037,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [8U][8U]),32);
    bufp->fullCData(oldp+1038,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+1039,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+1040,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+1041,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [8U][9U]),32);
    bufp->fullCData(oldp+1042,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+1043,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+1044,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullBit(oldp+1045,((1U & ((IData)(vlSelf->npu_system_top__DOT__core_weight_load_en) 
                                    >> 9U))));
    bufp->fullIData(oldp+1046,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [9U][0U]),32);
    bufp->fullCData(oldp+1047,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+1048,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+1049,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+1050,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [9U][0xaU]),32);
    bufp->fullCData(oldp+1051,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+1052,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+1053,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+1054,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [9U][0xbU]),32);
    bufp->fullCData(oldp+1055,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+1056,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+1057,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+1058,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [9U][0xcU]),32);
    bufp->fullCData(oldp+1059,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+1060,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+1061,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+1062,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [9U][0xdU]),32);
    bufp->fullCData(oldp+1063,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+1064,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+1065,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+1066,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [9U][0xeU]),32);
    bufp->fullCData(oldp+1067,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+1068,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+1069,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+1070,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [9U][0xfU]),32);
    bufp->fullCData(oldp+1071,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+1072,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+1073,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+1074,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [9U][1U]),32);
    bufp->fullCData(oldp+1075,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+1076,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+1077,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+1078,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [9U][2U]),32);
    bufp->fullCData(oldp+1079,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+1080,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+1081,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+1082,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [9U][3U]),32);
    bufp->fullCData(oldp+1083,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+1084,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+1085,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+1086,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [9U][4U]),32);
    bufp->fullCData(oldp+1087,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+1088,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+1089,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+1090,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [9U][5U]),32);
    bufp->fullCData(oldp+1091,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+1092,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+1093,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+1094,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [9U][6U]),32);
    bufp->fullCData(oldp+1095,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+1096,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+1097,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+1098,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [9U][7U]),32);
    bufp->fullCData(oldp+1099,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+1100,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+1101,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+1102,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [9U][8U]),32);
    bufp->fullCData(oldp+1103,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+1104,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+1105,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullIData(oldp+1106,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [9U][9U]),32);
    bufp->fullCData(oldp+1107,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out),8);
    bufp->fullIData(oldp+1108,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out),32);
    bufp->fullCData(oldp+1109,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg),8);
    bufp->fullWData(oldp+1110,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe),480);
    bufp->fullIData(oldp+1125,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k),32);
    bufp->fullWData(oldp+1126,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe),160);
    bufp->fullIData(oldp+1131,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__10__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k),32);
    bufp->fullWData(oldp+1132,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__11__KET____DOT__genblk1__DOT__deskew_pipe),128);
    bufp->fullIData(oldp+1136,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__11__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k),32);
    bufp->fullWData(oldp+1137,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__12__KET____DOT__genblk1__DOT__deskew_pipe),96);
    bufp->fullIData(oldp+1140,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__12__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k),32);
    bufp->fullQData(oldp+1141,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__13__KET____DOT__genblk1__DOT__deskew_pipe),64);
    bufp->fullIData(oldp+1143,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__13__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k),32);
    bufp->fullIData(oldp+1144,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__14__KET____DOT__genblk1__DOT__deskew_pipe),32);
    bufp->fullIData(oldp+1145,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__14__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k),32);
    bufp->fullWData(oldp+1146,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe),448);
    bufp->fullIData(oldp+1160,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k),32);
    bufp->fullWData(oldp+1161,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe),416);
    bufp->fullIData(oldp+1174,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k),32);
    bufp->fullWData(oldp+1175,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe),384);
    bufp->fullIData(oldp+1187,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k),32);
    bufp->fullWData(oldp+1188,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe),352);
    bufp->fullIData(oldp+1199,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k),32);
    bufp->fullWData(oldp+1200,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe),320);
    bufp->fullIData(oldp+1210,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k),32);
    bufp->fullWData(oldp+1211,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe),288);
    bufp->fullIData(oldp+1220,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k),32);
    bufp->fullWData(oldp+1221,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe),256);
    bufp->fullIData(oldp+1229,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k),32);
    bufp->fullWData(oldp+1230,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe),224);
    bufp->fullIData(oldp+1237,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k),32);
    bufp->fullWData(oldp+1238,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe),192);
    bufp->fullIData(oldp+1244,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k),32);
    bufp->fullWData(oldp+1245,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe),80);
    bufp->fullIData(oldp+1248,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k),32);
    bufp->fullWData(oldp+1249,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe),88);
    bufp->fullIData(oldp+1252,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k),32);
    bufp->fullWData(oldp+1253,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe),96);
    bufp->fullIData(oldp+1256,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k),32);
    bufp->fullWData(oldp+1257,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe),104);
    bufp->fullIData(oldp+1261,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k),32);
    bufp->fullWData(oldp+1262,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe),112);
    bufp->fullIData(oldp+1266,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k),32);
    bufp->fullWData(oldp+1267,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe),120);
    bufp->fullIData(oldp+1271,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k),32);
    bufp->fullCData(oldp+1272,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__1__KET____DOT__genblk1__DOT__delay_pipe),8);
    bufp->fullIData(oldp+1273,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__1__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k),32);
    bufp->fullSData(oldp+1274,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__2__KET____DOT__genblk1__DOT__delay_pipe),16);
    bufp->fullIData(oldp+1275,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__2__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k),32);
    bufp->fullIData(oldp+1276,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__3__KET____DOT__genblk1__DOT__delay_pipe),24);
    bufp->fullIData(oldp+1277,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__3__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k),32);
    bufp->fullIData(oldp+1278,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__4__KET____DOT__genblk1__DOT__delay_pipe),32);
    bufp->fullIData(oldp+1279,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__4__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k),32);
    bufp->fullQData(oldp+1280,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__5__KET____DOT__genblk1__DOT__delay_pipe),40);
    bufp->fullIData(oldp+1282,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__5__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k),32);
    bufp->fullQData(oldp+1283,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__6__KET____DOT__genblk1__DOT__delay_pipe),48);
    bufp->fullIData(oldp+1285,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__6__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k),32);
    bufp->fullQData(oldp+1286,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__7__KET____DOT__genblk1__DOT__delay_pipe),56);
    bufp->fullIData(oldp+1288,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__7__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k),32);
    bufp->fullQData(oldp+1289,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__8__KET____DOT__genblk1__DOT__delay_pipe),64);
    bufp->fullIData(oldp+1291,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__8__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k),32);
    bufp->fullWData(oldp+1292,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe),72);
    bufp->fullIData(oldp+1295,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k),32);
    bufp->fullIData(oldp+1296,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+1297,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__unnamedblk2__DOT__i),32);
    bufp->fullCData(oldp+1298,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0U][0U]),8);
    bufp->fullCData(oldp+1299,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0U][0xaU]),8);
    bufp->fullCData(oldp+1300,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0U][0xbU]),8);
    bufp->fullCData(oldp+1301,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0U][0xcU]),8);
    bufp->fullCData(oldp+1302,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0U][0xdU]),8);
    bufp->fullCData(oldp+1303,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0U][0xeU]),8);
    bufp->fullCData(oldp+1304,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0U][0xfU]),8);
    bufp->fullCData(oldp+1305,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0U][1U]),8);
    bufp->fullCData(oldp+1306,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0U][2U]),8);
    bufp->fullCData(oldp+1307,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0U][3U]),8);
    bufp->fullCData(oldp+1308,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0U][4U]),8);
    bufp->fullCData(oldp+1309,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0U][5U]),8);
    bufp->fullCData(oldp+1310,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0U][6U]),8);
    bufp->fullCData(oldp+1311,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0U][7U]),8);
    bufp->fullCData(oldp+1312,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0U][8U]),8);
    bufp->fullCData(oldp+1313,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0U][9U]),8);
    bufp->fullCData(oldp+1314,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xaU][0U]),8);
    bufp->fullCData(oldp+1315,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xaU][0xaU]),8);
    bufp->fullCData(oldp+1316,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xaU][0xbU]),8);
    bufp->fullCData(oldp+1317,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xaU][0xcU]),8);
    bufp->fullCData(oldp+1318,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xaU][0xdU]),8);
    bufp->fullCData(oldp+1319,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xaU][0xeU]),8);
    bufp->fullCData(oldp+1320,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xaU][0xfU]),8);
    bufp->fullCData(oldp+1321,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xaU][1U]),8);
    bufp->fullCData(oldp+1322,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xaU][2U]),8);
    bufp->fullCData(oldp+1323,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xaU][3U]),8);
    bufp->fullCData(oldp+1324,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xaU][4U]),8);
    bufp->fullCData(oldp+1325,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xaU][5U]),8);
    bufp->fullCData(oldp+1326,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xaU][6U]),8);
    bufp->fullCData(oldp+1327,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xaU][7U]),8);
    bufp->fullCData(oldp+1328,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xaU][8U]),8);
    bufp->fullCData(oldp+1329,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xaU][9U]),8);
    bufp->fullCData(oldp+1330,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xbU][0U]),8);
    bufp->fullCData(oldp+1331,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xbU][0xaU]),8);
    bufp->fullCData(oldp+1332,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xbU][0xbU]),8);
    bufp->fullCData(oldp+1333,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xbU][0xcU]),8);
    bufp->fullCData(oldp+1334,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xbU][0xdU]),8);
    bufp->fullCData(oldp+1335,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xbU][0xeU]),8);
    bufp->fullCData(oldp+1336,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xbU][0xfU]),8);
    bufp->fullCData(oldp+1337,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xbU][1U]),8);
    bufp->fullCData(oldp+1338,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xbU][2U]),8);
    bufp->fullCData(oldp+1339,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xbU][3U]),8);
    bufp->fullCData(oldp+1340,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xbU][4U]),8);
    bufp->fullCData(oldp+1341,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xbU][5U]),8);
    bufp->fullCData(oldp+1342,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xbU][6U]),8);
    bufp->fullCData(oldp+1343,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xbU][7U]),8);
    bufp->fullCData(oldp+1344,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xbU][8U]),8);
    bufp->fullCData(oldp+1345,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xbU][9U]),8);
    bufp->fullCData(oldp+1346,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xcU][0U]),8);
    bufp->fullCData(oldp+1347,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xcU][0xaU]),8);
    bufp->fullCData(oldp+1348,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xcU][0xbU]),8);
    bufp->fullCData(oldp+1349,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xcU][0xcU]),8);
    bufp->fullCData(oldp+1350,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xcU][0xdU]),8);
    bufp->fullCData(oldp+1351,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xcU][0xeU]),8);
    bufp->fullCData(oldp+1352,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xcU][0xfU]),8);
    bufp->fullCData(oldp+1353,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xcU][1U]),8);
    bufp->fullCData(oldp+1354,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xcU][2U]),8);
    bufp->fullCData(oldp+1355,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xcU][3U]),8);
    bufp->fullCData(oldp+1356,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xcU][4U]),8);
    bufp->fullCData(oldp+1357,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xcU][5U]),8);
    bufp->fullCData(oldp+1358,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xcU][6U]),8);
    bufp->fullCData(oldp+1359,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xcU][7U]),8);
    bufp->fullCData(oldp+1360,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xcU][8U]),8);
    bufp->fullCData(oldp+1361,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xcU][9U]),8);
    bufp->fullCData(oldp+1362,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xdU][0U]),8);
    bufp->fullCData(oldp+1363,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xdU][0xaU]),8);
    bufp->fullCData(oldp+1364,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xdU][0xbU]),8);
    bufp->fullCData(oldp+1365,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xdU][0xcU]),8);
    bufp->fullCData(oldp+1366,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xdU][0xdU]),8);
    bufp->fullCData(oldp+1367,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xdU][0xeU]),8);
    bufp->fullCData(oldp+1368,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xdU][0xfU]),8);
    bufp->fullCData(oldp+1369,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xdU][1U]),8);
    bufp->fullCData(oldp+1370,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xdU][2U]),8);
    bufp->fullCData(oldp+1371,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xdU][3U]),8);
    bufp->fullCData(oldp+1372,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xdU][4U]),8);
    bufp->fullCData(oldp+1373,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xdU][5U]),8);
    bufp->fullCData(oldp+1374,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xdU][6U]),8);
    bufp->fullCData(oldp+1375,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xdU][7U]),8);
    bufp->fullCData(oldp+1376,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xdU][8U]),8);
    bufp->fullCData(oldp+1377,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xdU][9U]),8);
    bufp->fullCData(oldp+1378,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xeU][0U]),8);
    bufp->fullCData(oldp+1379,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xeU][0xaU]),8);
    bufp->fullCData(oldp+1380,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xeU][0xbU]),8);
    bufp->fullCData(oldp+1381,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xeU][0xcU]),8);
    bufp->fullCData(oldp+1382,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xeU][0xdU]),8);
    bufp->fullCData(oldp+1383,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xeU][0xeU]),8);
    bufp->fullCData(oldp+1384,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xeU][0xfU]),8);
    bufp->fullCData(oldp+1385,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xeU][1U]),8);
    bufp->fullCData(oldp+1386,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xeU][2U]),8);
    bufp->fullCData(oldp+1387,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xeU][3U]),8);
    bufp->fullCData(oldp+1388,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xeU][4U]),8);
    bufp->fullCData(oldp+1389,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xeU][5U]),8);
    bufp->fullCData(oldp+1390,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xeU][6U]),8);
    bufp->fullCData(oldp+1391,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xeU][7U]),8);
    bufp->fullCData(oldp+1392,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xeU][8U]),8);
    bufp->fullCData(oldp+1393,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xeU][9U]),8);
    bufp->fullCData(oldp+1394,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xfU][0U]),8);
    bufp->fullCData(oldp+1395,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xfU][0xaU]),8);
    bufp->fullCData(oldp+1396,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xfU][0xbU]),8);
    bufp->fullCData(oldp+1397,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xfU][0xcU]),8);
    bufp->fullCData(oldp+1398,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xfU][0xdU]),8);
    bufp->fullCData(oldp+1399,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xfU][0xeU]),8);
    bufp->fullCData(oldp+1400,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xfU][0xfU]),8);
    bufp->fullCData(oldp+1401,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xfU][1U]),8);
    bufp->fullCData(oldp+1402,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xfU][2U]),8);
    bufp->fullCData(oldp+1403,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xfU][3U]),8);
    bufp->fullCData(oldp+1404,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xfU][4U]),8);
    bufp->fullCData(oldp+1405,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xfU][5U]),8);
    bufp->fullCData(oldp+1406,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xfU][6U]),8);
    bufp->fullCData(oldp+1407,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xfU][7U]),8);
    bufp->fullCData(oldp+1408,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xfU][8U]),8);
    bufp->fullCData(oldp+1409,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xfU][9U]),8);
    bufp->fullCData(oldp+1410,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [1U][0U]),8);
    bufp->fullCData(oldp+1411,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [1U][0xaU]),8);
    bufp->fullCData(oldp+1412,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [1U][0xbU]),8);
    bufp->fullCData(oldp+1413,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [1U][0xcU]),8);
    bufp->fullCData(oldp+1414,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [1U][0xdU]),8);
    bufp->fullCData(oldp+1415,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [1U][0xeU]),8);
    bufp->fullCData(oldp+1416,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [1U][0xfU]),8);
    bufp->fullCData(oldp+1417,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [1U][1U]),8);
    bufp->fullCData(oldp+1418,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [1U][2U]),8);
    bufp->fullCData(oldp+1419,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [1U][3U]),8);
    bufp->fullCData(oldp+1420,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [1U][4U]),8);
    bufp->fullCData(oldp+1421,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [1U][5U]),8);
    bufp->fullCData(oldp+1422,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [1U][6U]),8);
    bufp->fullCData(oldp+1423,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [1U][7U]),8);
    bufp->fullCData(oldp+1424,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [1U][8U]),8);
    bufp->fullCData(oldp+1425,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [1U][9U]),8);
    bufp->fullCData(oldp+1426,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [2U][0U]),8);
    bufp->fullCData(oldp+1427,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [2U][0xaU]),8);
    bufp->fullCData(oldp+1428,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [2U][0xbU]),8);
    bufp->fullCData(oldp+1429,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [2U][0xcU]),8);
    bufp->fullCData(oldp+1430,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [2U][0xdU]),8);
    bufp->fullCData(oldp+1431,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [2U][0xeU]),8);
    bufp->fullCData(oldp+1432,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [2U][0xfU]),8);
    bufp->fullCData(oldp+1433,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [2U][1U]),8);
    bufp->fullCData(oldp+1434,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [2U][2U]),8);
    bufp->fullCData(oldp+1435,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [2U][3U]),8);
    bufp->fullCData(oldp+1436,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [2U][4U]),8);
    bufp->fullCData(oldp+1437,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [2U][5U]),8);
    bufp->fullCData(oldp+1438,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [2U][6U]),8);
    bufp->fullCData(oldp+1439,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [2U][7U]),8);
    bufp->fullCData(oldp+1440,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [2U][8U]),8);
    bufp->fullCData(oldp+1441,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [2U][9U]),8);
    bufp->fullCData(oldp+1442,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [3U][0U]),8);
    bufp->fullCData(oldp+1443,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [3U][0xaU]),8);
    bufp->fullCData(oldp+1444,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [3U][0xbU]),8);
    bufp->fullCData(oldp+1445,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [3U][0xcU]),8);
    bufp->fullCData(oldp+1446,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [3U][0xdU]),8);
    bufp->fullCData(oldp+1447,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [3U][0xeU]),8);
    bufp->fullCData(oldp+1448,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [3U][0xfU]),8);
    bufp->fullCData(oldp+1449,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [3U][1U]),8);
    bufp->fullCData(oldp+1450,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [3U][2U]),8);
    bufp->fullCData(oldp+1451,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [3U][3U]),8);
    bufp->fullCData(oldp+1452,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [3U][4U]),8);
    bufp->fullCData(oldp+1453,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [3U][5U]),8);
    bufp->fullCData(oldp+1454,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [3U][6U]),8);
    bufp->fullCData(oldp+1455,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [3U][7U]),8);
    bufp->fullCData(oldp+1456,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [3U][8U]),8);
    bufp->fullCData(oldp+1457,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [3U][9U]),8);
    bufp->fullCData(oldp+1458,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [4U][0U]),8);
    bufp->fullCData(oldp+1459,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [4U][0xaU]),8);
    bufp->fullCData(oldp+1460,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [4U][0xbU]),8);
    bufp->fullCData(oldp+1461,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [4U][0xcU]),8);
    bufp->fullCData(oldp+1462,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [4U][0xdU]),8);
    bufp->fullCData(oldp+1463,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [4U][0xeU]),8);
    bufp->fullCData(oldp+1464,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [4U][0xfU]),8);
    bufp->fullCData(oldp+1465,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [4U][1U]),8);
    bufp->fullCData(oldp+1466,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [4U][2U]),8);
    bufp->fullCData(oldp+1467,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [4U][3U]),8);
    bufp->fullCData(oldp+1468,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [4U][4U]),8);
    bufp->fullCData(oldp+1469,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [4U][5U]),8);
    bufp->fullCData(oldp+1470,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [4U][6U]),8);
    bufp->fullCData(oldp+1471,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [4U][7U]),8);
    bufp->fullCData(oldp+1472,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [4U][8U]),8);
    bufp->fullCData(oldp+1473,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [4U][9U]),8);
    bufp->fullCData(oldp+1474,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [5U][0U]),8);
    bufp->fullCData(oldp+1475,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [5U][0xaU]),8);
    bufp->fullCData(oldp+1476,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [5U][0xbU]),8);
    bufp->fullCData(oldp+1477,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [5U][0xcU]),8);
    bufp->fullCData(oldp+1478,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [5U][0xdU]),8);
    bufp->fullCData(oldp+1479,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [5U][0xeU]),8);
    bufp->fullCData(oldp+1480,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [5U][0xfU]),8);
    bufp->fullCData(oldp+1481,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [5U][1U]),8);
    bufp->fullCData(oldp+1482,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [5U][2U]),8);
    bufp->fullCData(oldp+1483,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [5U][3U]),8);
    bufp->fullCData(oldp+1484,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [5U][4U]),8);
    bufp->fullCData(oldp+1485,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [5U][5U]),8);
    bufp->fullCData(oldp+1486,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [5U][6U]),8);
    bufp->fullCData(oldp+1487,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [5U][7U]),8);
    bufp->fullCData(oldp+1488,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [5U][8U]),8);
    bufp->fullCData(oldp+1489,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [5U][9U]),8);
    bufp->fullCData(oldp+1490,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [6U][0U]),8);
    bufp->fullCData(oldp+1491,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [6U][0xaU]),8);
    bufp->fullCData(oldp+1492,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [6U][0xbU]),8);
    bufp->fullCData(oldp+1493,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [6U][0xcU]),8);
    bufp->fullCData(oldp+1494,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [6U][0xdU]),8);
    bufp->fullCData(oldp+1495,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [6U][0xeU]),8);
    bufp->fullCData(oldp+1496,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [6U][0xfU]),8);
    bufp->fullCData(oldp+1497,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [6U][1U]),8);
    bufp->fullCData(oldp+1498,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [6U][2U]),8);
    bufp->fullCData(oldp+1499,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [6U][3U]),8);
    bufp->fullCData(oldp+1500,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [6U][4U]),8);
    bufp->fullCData(oldp+1501,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [6U][5U]),8);
    bufp->fullCData(oldp+1502,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [6U][6U]),8);
    bufp->fullCData(oldp+1503,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [6U][7U]),8);
    bufp->fullCData(oldp+1504,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [6U][8U]),8);
    bufp->fullCData(oldp+1505,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [6U][9U]),8);
    bufp->fullCData(oldp+1506,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [7U][0U]),8);
    bufp->fullCData(oldp+1507,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [7U][0xaU]),8);
    bufp->fullCData(oldp+1508,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [7U][0xbU]),8);
    bufp->fullCData(oldp+1509,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [7U][0xcU]),8);
    bufp->fullCData(oldp+1510,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [7U][0xdU]),8);
    bufp->fullCData(oldp+1511,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [7U][0xeU]),8);
    bufp->fullCData(oldp+1512,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [7U][0xfU]),8);
    bufp->fullCData(oldp+1513,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [7U][1U]),8);
    bufp->fullCData(oldp+1514,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [7U][2U]),8);
    bufp->fullCData(oldp+1515,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [7U][3U]),8);
    bufp->fullCData(oldp+1516,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [7U][4U]),8);
    bufp->fullCData(oldp+1517,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [7U][5U]),8);
    bufp->fullCData(oldp+1518,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [7U][6U]),8);
    bufp->fullCData(oldp+1519,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [7U][7U]),8);
    bufp->fullCData(oldp+1520,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [7U][8U]),8);
    bufp->fullCData(oldp+1521,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [7U][9U]),8);
    bufp->fullCData(oldp+1522,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [8U][0U]),8);
    bufp->fullCData(oldp+1523,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [8U][0xaU]),8);
    bufp->fullCData(oldp+1524,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [8U][0xbU]),8);
    bufp->fullCData(oldp+1525,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [8U][0xcU]),8);
    bufp->fullCData(oldp+1526,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [8U][0xdU]),8);
    bufp->fullCData(oldp+1527,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [8U][0xeU]),8);
    bufp->fullCData(oldp+1528,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [8U][0xfU]),8);
    bufp->fullCData(oldp+1529,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [8U][1U]),8);
    bufp->fullCData(oldp+1530,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [8U][2U]),8);
    bufp->fullCData(oldp+1531,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [8U][3U]),8);
    bufp->fullCData(oldp+1532,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [8U][4U]),8);
    bufp->fullCData(oldp+1533,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [8U][5U]),8);
    bufp->fullCData(oldp+1534,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [8U][6U]),8);
    bufp->fullCData(oldp+1535,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [8U][7U]),8);
    bufp->fullCData(oldp+1536,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [8U][8U]),8);
    bufp->fullCData(oldp+1537,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [8U][9U]),8);
    bufp->fullCData(oldp+1538,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [9U][0U]),8);
    bufp->fullCData(oldp+1539,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [9U][0xaU]),8);
    bufp->fullCData(oldp+1540,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [9U][0xbU]),8);
    bufp->fullCData(oldp+1541,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [9U][0xcU]),8);
    bufp->fullCData(oldp+1542,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [9U][0xdU]),8);
    bufp->fullCData(oldp+1543,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [9U][0xeU]),8);
    bufp->fullCData(oldp+1544,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [9U][0xfU]),8);
    bufp->fullCData(oldp+1545,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [9U][1U]),8);
    bufp->fullCData(oldp+1546,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [9U][2U]),8);
    bufp->fullCData(oldp+1547,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [9U][3U]),8);
    bufp->fullCData(oldp+1548,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [9U][4U]),8);
    bufp->fullCData(oldp+1549,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [9U][5U]),8);
    bufp->fullCData(oldp+1550,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [9U][6U]),8);
    bufp->fullCData(oldp+1551,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [9U][7U]),8);
    bufp->fullCData(oldp+1552,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [9U][8U]),8);
    bufp->fullCData(oldp+1553,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [9U][9U]),8);
    bufp->fullWData(oldp+1554,(vlSelf->npu_system_top__DOT__act_b0_rdata),128);
    bufp->fullWData(oldp+1558,(vlSelf->npu_system_top__DOT__act_b1_rdata),128);
    bufp->fullWData(oldp+1562,(vlSelf->npu_system_top__DOT__wt_b0_rdata),128);
    bufp->fullWData(oldp+1566,(vlSelf->npu_system_top__DOT__wt_b1_rdata),128);
    bufp->fullWData(oldp+1570,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data),512);
    bufp->fullSData(oldp+1586,(vlSelf->npu_system_top__DOT__dma_sram_addr),10);
    bufp->fullWData(oldp+1587,(vlSelf->npu_system_top__DOT__dma_sram_wdata),128);
    bufp->fullSData(oldp+1591,(vlSelf->npu_system_top__DOT__npu_sram_raddr),10);
    bufp->fullIData(oldp+1592,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_valid_pipe),31);
    bufp->fullSData(oldp+1593,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[0]),9);
    bufp->fullSData(oldp+1594,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[1]),9);
    bufp->fullSData(oldp+1595,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[2]),9);
    bufp->fullSData(oldp+1596,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[3]),9);
    bufp->fullSData(oldp+1597,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[4]),9);
    bufp->fullSData(oldp+1598,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[5]),9);
    bufp->fullSData(oldp+1599,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[6]),9);
    bufp->fullSData(oldp+1600,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[7]),9);
    bufp->fullSData(oldp+1601,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[8]),9);
    bufp->fullSData(oldp+1602,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[9]),9);
    bufp->fullSData(oldp+1603,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[10]),9);
    bufp->fullSData(oldp+1604,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[11]),9);
    bufp->fullSData(oldp+1605,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[12]),9);
    bufp->fullSData(oldp+1606,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[13]),9);
    bufp->fullSData(oldp+1607,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[14]),9);
    bufp->fullSData(oldp+1608,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[15]),9);
    bufp->fullSData(oldp+1609,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[16]),9);
    bufp->fullSData(oldp+1610,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[17]),9);
    bufp->fullSData(oldp+1611,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[18]),9);
    bufp->fullSData(oldp+1612,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[19]),9);
    bufp->fullSData(oldp+1613,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[20]),9);
    bufp->fullSData(oldp+1614,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[21]),9);
    bufp->fullSData(oldp+1615,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[22]),9);
    bufp->fullSData(oldp+1616,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[23]),9);
    bufp->fullSData(oldp+1617,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[24]),9);
    bufp->fullSData(oldp+1618,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[25]),9);
    bufp->fullSData(oldp+1619,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[26]),9);
    bufp->fullSData(oldp+1620,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[27]),9);
    bufp->fullSData(oldp+1621,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[28]),9);
    bufp->fullSData(oldp+1622,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[29]),9);
    bufp->fullSData(oldp+1623,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[30]),9);
    bufp->fullBit(oldp+1624,((1U & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_valid_pipe 
                                    >> 0x1eU))));
    bufp->fullSData(oldp+1625,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
                               [0x1eU]),9);
    bufp->fullBit(oldp+1626,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_valid_q));
    bufp->fullSData(oldp+1627,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_addr_q),9);
    bufp->fullWData(oldp+1628,(vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_act_in),128);
    bufp->fullWData(oldp+1632,(vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in),128);
    bufp->fullWData(oldp+1636,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_act_right),128);
    bufp->fullWData(oldp+1640,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data),512);
    bufp->fullWData(oldp+1656,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data),512);
    bufp->fullWData(oldp+1672,(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__act_skewed),128);
    bufp->fullCData(oldp+1676,((0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U])),8);
    bufp->fullCData(oldp+1677,((0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1678,((vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                                >> 0x18U)),8);
    bufp->fullCData(oldp+1679,((0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U])),8);
    bufp->fullCData(oldp+1680,((0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                                         >> 8U))),8);
    bufp->fullCData(oldp+1681,((0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1682,((vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                                >> 0x18U)),8);
    bufp->fullCData(oldp+1683,((0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                                         >> 8U))),8);
    bufp->fullCData(oldp+1684,((0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1685,((vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                                >> 0x18U)),8);
    bufp->fullCData(oldp+1686,((0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U])),8);
    bufp->fullCData(oldp+1687,((0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                                         >> 8U))),8);
    bufp->fullCData(oldp+1688,((0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1689,((vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                                >> 0x18U)),8);
    bufp->fullCData(oldp+1690,((0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U])),8);
    bufp->fullCData(oldp+1691,((0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                                         >> 8U))),8);
    bufp->fullBit(oldp+1692,(vlSelf->clk));
    bufp->fullBit(oldp+1693,(vlSelf->rst_n));
    bufp->fullBit(oldp+1694,(vlSelf->mmio_start_dma));
    bufp->fullBit(oldp+1695,(vlSelf->mmio_dma_target));
    bufp->fullQData(oldp+1696,(vlSelf->mmio_src_addr),64);
    bufp->fullCData(oldp+1698,(vlSelf->mmio_burst_len),8);
    bufp->fullSData(oldp+1699,(vlSelf->mmio_total_bursts),16);
    bufp->fullBit(oldp+1700,(vlSelf->mmio_dma_done));
    bufp->fullBit(oldp+1701,(vlSelf->mmio_swap_banks));
    bufp->fullBit(oldp+1702,(vlSelf->mmio_start_npu));
    bufp->fullBit(oldp+1703,(vlSelf->mmio_npu_mode));
    bufp->fullBit(oldp+1704,(vlSelf->mmio_npu_acc_clear));
    bufp->fullBit(oldp+1705,(vlSelf->mmio_test_acc_addr_override_en));
    bufp->fullSData(oldp+1706,(vlSelf->mmio_test_acc_addr_override),9);
    bufp->fullBit(oldp+1707,(vlSelf->mmio_test_one_shot_acc_clear_en));
    bufp->fullBit(oldp+1708,(vlSelf->mmio_clear_done));
    bufp->fullSData(oldp+1709,(vlSelf->mmio_npu_seq_len),16);
    bufp->fullBit(oldp+1710,(vlSelf->mmio_npu_done));
    bufp->fullCData(oldp+1711,(vlSelf->arid),4);
    bufp->fullQData(oldp+1712,(vlSelf->araddr),64);
    bufp->fullCData(oldp+1714,(vlSelf->arlen),8);
    bufp->fullCData(oldp+1715,(vlSelf->arsize),3);
    bufp->fullCData(oldp+1716,(vlSelf->arburst),2);
    bufp->fullBit(oldp+1717,(vlSelf->arvalid));
    bufp->fullBit(oldp+1718,(vlSelf->arready));
    bufp->fullCData(oldp+1719,(vlSelf->rid),4);
    bufp->fullWData(oldp+1720,(vlSelf->rdata),128);
    bufp->fullCData(oldp+1724,(vlSelf->rresp),2);
    bufp->fullBit(oldp+1725,(vlSelf->rlast));
    bufp->fullBit(oldp+1726,(vlSelf->rvalid));
    bufp->fullBit(oldp+1727,(vlSelf->rready));
    bufp->fullBit(oldp+1728,(vlSelf->drain_re));
    bufp->fullSData(oldp+1729,(vlSelf->drain_addr),9);
    bufp->fullWData(oldp+1730,(vlSelf->psum_drain_out),512);
    bufp->fullBit(oldp+1746,(((~ (IData)(vlSelf->mmio_dma_target)) 
                              & (IData)(vlSelf->npu_system_top__DOT____VdfgTmp_h14588a4c__0))));
    bufp->fullBit(oldp+1747,(((~ (IData)(vlSelf->mmio_dma_target)) 
                              & (IData)(vlSelf->npu_system_top__DOT____VdfgTmp_h51e62fb4__0))));
    bufp->fullBit(oldp+1748,(((IData)(vlSelf->npu_system_top__DOT____VdfgTmp_h14588a4c__0) 
                              & (IData)(vlSelf->mmio_dma_target))));
    bufp->fullBit(oldp+1749,(((IData)(vlSelf->npu_system_top__DOT____VdfgTmp_h51e62fb4__0) 
                              & (IData)(vlSelf->mmio_dma_target))));
    bufp->fullBit(oldp+1750,(vlSelf->npu_system_top__DOT__npu_sram_ren));
    bufp->fullCData(oldp+1751,(vlSelf->npu_system_top__DOT__next_state),3);
    bufp->fullSData(oldp+1752,((0x1ffU & ((IData)(vlSelf->mmio_test_acc_addr_override_en)
                                           ? (IData)(vlSelf->mmio_test_acc_addr_override)
                                           : (IData)(vlSelf->npu_system_top__DOT__npu_sram_raddr)))),9);
    bufp->fullBit(oldp+1753,(((IData)(vlSelf->mmio_npu_acc_clear) 
                              & ((~ (IData)(vlSelf->mmio_test_one_shot_acc_clear_en)) 
                                 | (IData)(vlSelf->npu_system_top__DOT__one_shot_acc_clear_pending)))));
    bufp->fullBit(oldp+1754,(vlSelf->npu_system_top__DOT__u_dma__DOT__ar_fire));
    bufp->fullBit(oldp+1755,(vlSelf->npu_system_top__DOT__u_dma__DOT__r_last_fire));
    bufp->fullSData(oldp+1756,((0xffffU & ((IData)(vlSelf->npu_system_top__DOT__u_dma__DOT__req_cnt) 
                                           + (IData)(vlSelf->npu_system_top__DOT__u_dma__DOT__ar_fire)))),16);
    bufp->fullCData(oldp+1757,((0xffU & (((IData)(vlSelf->npu_system_top__DOT__u_dma__DOT__outstanding_cnt) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_dma__DOT__ar_fire)) 
                                         - (IData)(vlSelf->npu_system_top__DOT__u_dma__DOT__r_last_fire)))),8);
    bufp->fullBit(oldp+1758,((((0xffffU & ((IData)(vlSelf->npu_system_top__DOT__u_dma__DOT__req_cnt) 
                                           + (IData)(vlSelf->npu_system_top__DOT__u_dma__DOT__ar_fire))) 
                               < (IData)(vlSelf->mmio_total_bursts)) 
                              & (8U > (0xffU & (((IData)(vlSelf->npu_system_top__DOT__u_dma__DOT__outstanding_cnt) 
                                                 + (IData)(vlSelf->npu_system_top__DOT__u_dma__DOT__ar_fire)) 
                                                - (IData)(vlSelf->npu_system_top__DOT__u_dma__DOT__r_last_fire)))))));
    bufp->fullBit(oldp+1759,(((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_valid_q) 
                              & ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_valid) 
                                 & ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_addr_q) 
                                    == (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_addr))))));
}
