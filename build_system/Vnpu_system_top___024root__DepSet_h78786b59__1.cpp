// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpu_system_top.h for the primary calling header

#include "Vnpu_system_top__pch.h"
#include "Vnpu_system_top___024root.h"

VL_INLINE_OPT void Vnpu_system_top___024root___nba_sequent__TOP__2(Vnpu_system_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_system_top___024root___nba_sequent__TOP__2\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__npu_system_top__DOT__u_act_bank0__DOT__mem__v0;
    __Vdlyvdim0__npu_system_top__DOT__u_act_bank0__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__npu_system_top__DOT__u_act_bank0__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__npu_system_top__DOT__u_act_bank0__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__npu_system_top__DOT__u_act_bank0__DOT__mem__v0;
    __Vdlyvset__npu_system_top__DOT__u_act_bank0__DOT__mem__v0 = 0;
    SData/*9:0*/ __Vdlyvdim0__npu_system_top__DOT__u_act_bank1__DOT__mem__v0;
    __Vdlyvdim0__npu_system_top__DOT__u_act_bank1__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__npu_system_top__DOT__u_act_bank1__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__npu_system_top__DOT__u_act_bank1__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__npu_system_top__DOT__u_act_bank1__DOT__mem__v0;
    __Vdlyvset__npu_system_top__DOT__u_act_bank1__DOT__mem__v0 = 0;
    SData/*9:0*/ __Vdlyvdim0__npu_system_top__DOT__u_wt_bank0__DOT__mem__v0;
    __Vdlyvdim0__npu_system_top__DOT__u_wt_bank0__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__npu_system_top__DOT__u_wt_bank0__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__npu_system_top__DOT__u_wt_bank0__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__npu_system_top__DOT__u_wt_bank0__DOT__mem__v0;
    __Vdlyvset__npu_system_top__DOT__u_wt_bank0__DOT__mem__v0 = 0;
    SData/*9:0*/ __Vdlyvdim0__npu_system_top__DOT__u_wt_bank1__DOT__mem__v0;
    __Vdlyvdim0__npu_system_top__DOT__u_wt_bank1__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__npu_system_top__DOT__u_wt_bank1__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__npu_system_top__DOT__u_wt_bank1__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__npu_system_top__DOT__u_wt_bank1__DOT__mem__v0;
    __Vdlyvset__npu_system_top__DOT__u_wt_bank1__DOT__mem__v0 = 0;
    SData/*8:0*/ __Vdlyvdim0__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0;
    __Vdlyvdim0__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0 = 0;
    VlWide<16>/*511:0*/ __Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0;
    VL_ZERO_W(512, __Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0);
    CData/*0:0*/ __Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0;
    __Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0 = 0;
    // Body
    __Vdlyvset__npu_system_top__DOT__u_wt_bank1__DOT__mem__v0 = 0U;
    __Vdlyvset__npu_system_top__DOT__u_wt_bank0__DOT__mem__v0 = 0U;
    __Vdlyvset__npu_system_top__DOT__u_act_bank1__DOT__mem__v0 = 0U;
    __Vdlyvset__npu_system_top__DOT__u_act_bank0__DOT__mem__v0 = 0U;
    __Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0 = 0U;
    if (((IData)(vlSelf->npu_system_top__DOT____VdfgTmp_h51e62fb4__0) 
         & (IData)(vlSelf->mmio_dma_target))) {
        __Vdlyvval__npu_system_top__DOT__u_wt_bank1__DOT__mem__v0[0U] 
            = vlSelf->npu_system_top__DOT__dma_sram_wdata[0U];
        __Vdlyvval__npu_system_top__DOT__u_wt_bank1__DOT__mem__v0[1U] 
            = vlSelf->npu_system_top__DOT__dma_sram_wdata[1U];
        __Vdlyvval__npu_system_top__DOT__u_wt_bank1__DOT__mem__v0[2U] 
            = vlSelf->npu_system_top__DOT__dma_sram_wdata[2U];
        __Vdlyvval__npu_system_top__DOT__u_wt_bank1__DOT__mem__v0[3U] 
            = vlSelf->npu_system_top__DOT__dma_sram_wdata[3U];
        __Vdlyvset__npu_system_top__DOT__u_wt_bank1__DOT__mem__v0 = 1U;
        __Vdlyvdim0__npu_system_top__DOT__u_wt_bank1__DOT__mem__v0 
            = vlSelf->npu_system_top__DOT__dma_sram_addr;
    }
    if (((IData)(vlSelf->npu_system_top__DOT____VdfgTmp_h14588a4c__0) 
         & (IData)(vlSelf->mmio_dma_target))) {
        __Vdlyvval__npu_system_top__DOT__u_wt_bank0__DOT__mem__v0[0U] 
            = vlSelf->npu_system_top__DOT__dma_sram_wdata[0U];
        __Vdlyvval__npu_system_top__DOT__u_wt_bank0__DOT__mem__v0[1U] 
            = vlSelf->npu_system_top__DOT__dma_sram_wdata[1U];
        __Vdlyvval__npu_system_top__DOT__u_wt_bank0__DOT__mem__v0[2U] 
            = vlSelf->npu_system_top__DOT__dma_sram_wdata[2U];
        __Vdlyvval__npu_system_top__DOT__u_wt_bank0__DOT__mem__v0[3U] 
            = vlSelf->npu_system_top__DOT__dma_sram_wdata[3U];
        __Vdlyvset__npu_system_top__DOT__u_wt_bank0__DOT__mem__v0 = 1U;
        __Vdlyvdim0__npu_system_top__DOT__u_wt_bank0__DOT__mem__v0 
            = vlSelf->npu_system_top__DOT__dma_sram_addr;
    }
    if (((~ (IData)(vlSelf->mmio_dma_target)) & (IData)(vlSelf->npu_system_top__DOT____VdfgTmp_h51e62fb4__0))) {
        __Vdlyvval__npu_system_top__DOT__u_act_bank1__DOT__mem__v0[0U] 
            = vlSelf->npu_system_top__DOT__dma_sram_wdata[0U];
        __Vdlyvval__npu_system_top__DOT__u_act_bank1__DOT__mem__v0[1U] 
            = vlSelf->npu_system_top__DOT__dma_sram_wdata[1U];
        __Vdlyvval__npu_system_top__DOT__u_act_bank1__DOT__mem__v0[2U] 
            = vlSelf->npu_system_top__DOT__dma_sram_wdata[2U];
        __Vdlyvval__npu_system_top__DOT__u_act_bank1__DOT__mem__v0[3U] 
            = vlSelf->npu_system_top__DOT__dma_sram_wdata[3U];
        __Vdlyvset__npu_system_top__DOT__u_act_bank1__DOT__mem__v0 = 1U;
        __Vdlyvdim0__npu_system_top__DOT__u_act_bank1__DOT__mem__v0 
            = vlSelf->npu_system_top__DOT__dma_sram_addr;
    }
    if (((~ (IData)(vlSelf->mmio_dma_target)) & (IData)(vlSelf->npu_system_top__DOT____VdfgTmp_h14588a4c__0))) {
        __Vdlyvval__npu_system_top__DOT__u_act_bank0__DOT__mem__v0[0U] 
            = vlSelf->npu_system_top__DOT__dma_sram_wdata[0U];
        __Vdlyvval__npu_system_top__DOT__u_act_bank0__DOT__mem__v0[1U] 
            = vlSelf->npu_system_top__DOT__dma_sram_wdata[1U];
        __Vdlyvval__npu_system_top__DOT__u_act_bank0__DOT__mem__v0[2U] 
            = vlSelf->npu_system_top__DOT__dma_sram_wdata[2U];
        __Vdlyvval__npu_system_top__DOT__u_act_bank0__DOT__mem__v0[3U] 
            = vlSelf->npu_system_top__DOT__dma_sram_wdata[3U];
        __Vdlyvset__npu_system_top__DOT__u_act_bank0__DOT__mem__v0 = 1U;
        __Vdlyvdim0__npu_system_top__DOT__u_act_bank0__DOT__mem__v0 
            = vlSelf->npu_system_top__DOT__dma_sram_addr;
    }
    if (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_valid_q) {
        __Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0[0U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[0U];
        __Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0[1U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[1U];
        __Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0[2U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[2U];
        __Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0[3U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[3U];
        __Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0[4U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[4U];
        __Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0[5U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[5U];
        __Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0[6U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[6U];
        __Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0[7U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[7U];
        __Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0[8U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[8U];
        __Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0[9U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[9U];
        __Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0[0xaU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[0xaU];
        __Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0[0xbU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[0xbU];
        __Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0[0xcU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[0xcU];
        __Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0[0xdU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[0xdU];
        __Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0[0xeU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[0xeU];
        __Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0[0xfU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[0xfU];
        __Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0 = 1U;
        __Vdlyvdim0__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_addr_q;
    }
    if (vlSelf->npu_system_top__DOT__npu_sram_ren) {
        vlSelf->npu_system_top__DOT__wt_b1_rdata[0U] 
            = vlSelf->npu_system_top__DOT__u_wt_bank1__DOT__mem
            [vlSelf->npu_system_top__DOT__npu_sram_raddr][0U];
        vlSelf->npu_system_top__DOT__wt_b1_rdata[1U] 
            = vlSelf->npu_system_top__DOT__u_wt_bank1__DOT__mem
            [vlSelf->npu_system_top__DOT__npu_sram_raddr][1U];
        vlSelf->npu_system_top__DOT__wt_b1_rdata[2U] 
            = vlSelf->npu_system_top__DOT__u_wt_bank1__DOT__mem
            [vlSelf->npu_system_top__DOT__npu_sram_raddr][2U];
        vlSelf->npu_system_top__DOT__wt_b1_rdata[3U] 
            = vlSelf->npu_system_top__DOT__u_wt_bank1__DOT__mem
            [vlSelf->npu_system_top__DOT__npu_sram_raddr][3U];
        vlSelf->npu_system_top__DOT__wt_b0_rdata[0U] 
            = vlSelf->npu_system_top__DOT__u_wt_bank0__DOT__mem
            [vlSelf->npu_system_top__DOT__npu_sram_raddr][0U];
        vlSelf->npu_system_top__DOT__wt_b0_rdata[1U] 
            = vlSelf->npu_system_top__DOT__u_wt_bank0__DOT__mem
            [vlSelf->npu_system_top__DOT__npu_sram_raddr][1U];
        vlSelf->npu_system_top__DOT__wt_b0_rdata[2U] 
            = vlSelf->npu_system_top__DOT__u_wt_bank0__DOT__mem
            [vlSelf->npu_system_top__DOT__npu_sram_raddr][2U];
        vlSelf->npu_system_top__DOT__wt_b0_rdata[3U] 
            = vlSelf->npu_system_top__DOT__u_wt_bank0__DOT__mem
            [vlSelf->npu_system_top__DOT__npu_sram_raddr][3U];
        vlSelf->npu_system_top__DOT__act_b1_rdata[0U] 
            = vlSelf->npu_system_top__DOT__u_act_bank1__DOT__mem
            [vlSelf->npu_system_top__DOT__npu_sram_raddr][0U];
        vlSelf->npu_system_top__DOT__act_b1_rdata[1U] 
            = vlSelf->npu_system_top__DOT__u_act_bank1__DOT__mem
            [vlSelf->npu_system_top__DOT__npu_sram_raddr][1U];
        vlSelf->npu_system_top__DOT__act_b1_rdata[2U] 
            = vlSelf->npu_system_top__DOT__u_act_bank1__DOT__mem
            [vlSelf->npu_system_top__DOT__npu_sram_raddr][2U];
        vlSelf->npu_system_top__DOT__act_b1_rdata[3U] 
            = vlSelf->npu_system_top__DOT__u_act_bank1__DOT__mem
            [vlSelf->npu_system_top__DOT__npu_sram_raddr][3U];
        vlSelf->npu_system_top__DOT__act_b0_rdata[0U] 
            = vlSelf->npu_system_top__DOT__u_act_bank0__DOT__mem
            [vlSelf->npu_system_top__DOT__npu_sram_raddr][0U];
        vlSelf->npu_system_top__DOT__act_b0_rdata[1U] 
            = vlSelf->npu_system_top__DOT__u_act_bank0__DOT__mem
            [vlSelf->npu_system_top__DOT__npu_sram_raddr][1U];
        vlSelf->npu_system_top__DOT__act_b0_rdata[2U] 
            = vlSelf->npu_system_top__DOT__u_act_bank0__DOT__mem
            [vlSelf->npu_system_top__DOT__npu_sram_raddr][2U];
        vlSelf->npu_system_top__DOT__act_b0_rdata[3U] 
            = vlSelf->npu_system_top__DOT__u_act_bank0__DOT__mem
            [vlSelf->npu_system_top__DOT__npu_sram_raddr][3U];
    }
    if (vlSelf->drain_re) {
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[0U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram
            [vlSelf->drain_addr][0U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[1U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram
            [vlSelf->drain_addr][1U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[2U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram
            [vlSelf->drain_addr][2U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[3U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram
            [vlSelf->drain_addr][3U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[4U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram
            [vlSelf->drain_addr][4U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[5U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram
            [vlSelf->drain_addr][5U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[6U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram
            [vlSelf->drain_addr][6U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[7U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram
            [vlSelf->drain_addr][7U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[8U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram
            [vlSelf->drain_addr][8U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[9U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram
            [vlSelf->drain_addr][9U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[0xaU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram
            [vlSelf->drain_addr][0xaU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[0xbU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram
            [vlSelf->drain_addr][0xbU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[0xcU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram
            [vlSelf->drain_addr][0xcU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[0xdU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram
            [vlSelf->drain_addr][0xdU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[0xeU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram
            [vlSelf->drain_addr][0xeU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[0xfU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram
            [vlSelf->drain_addr][0xfU];
    } else {
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[0U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram
            [vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
            [0x1eU]][0U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[1U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram
            [vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
            [0x1eU]][1U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[2U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram
            [vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
            [0x1eU]][2U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[3U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram
            [vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
            [0x1eU]][3U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[4U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram
            [vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
            [0x1eU]][4U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[5U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram
            [vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
            [0x1eU]][5U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[6U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram
            [vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
            [0x1eU]][6U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[7U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram
            [vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
            [0x1eU]][7U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[8U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram
            [vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
            [0x1eU]][8U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[9U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram
            [vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
            [0x1eU]][9U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[0xaU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram
            [vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
            [0x1eU]][0xaU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[0xbU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram
            [vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
            [0x1eU]][0xbU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[0xcU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram
            [vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
            [0x1eU]][0xcU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[0xdU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram
            [vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
            [0x1eU]][0xdU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[0xeU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram
            [vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
            [0x1eU]][0xeU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[0xfU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram
            [vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
            [0x1eU]][0xfU];
    }
    if (__Vdlyvset__npu_system_top__DOT__u_wt_bank1__DOT__mem__v0) {
        vlSelf->npu_system_top__DOT__u_wt_bank1__DOT__mem[__Vdlyvdim0__npu_system_top__DOT__u_wt_bank1__DOT__mem__v0][0U] 
            = __Vdlyvval__npu_system_top__DOT__u_wt_bank1__DOT__mem__v0[0U];
        vlSelf->npu_system_top__DOT__u_wt_bank1__DOT__mem[__Vdlyvdim0__npu_system_top__DOT__u_wt_bank1__DOT__mem__v0][1U] 
            = __Vdlyvval__npu_system_top__DOT__u_wt_bank1__DOT__mem__v0[1U];
        vlSelf->npu_system_top__DOT__u_wt_bank1__DOT__mem[__Vdlyvdim0__npu_system_top__DOT__u_wt_bank1__DOT__mem__v0][2U] 
            = __Vdlyvval__npu_system_top__DOT__u_wt_bank1__DOT__mem__v0[2U];
        vlSelf->npu_system_top__DOT__u_wt_bank1__DOT__mem[__Vdlyvdim0__npu_system_top__DOT__u_wt_bank1__DOT__mem__v0][3U] 
            = __Vdlyvval__npu_system_top__DOT__u_wt_bank1__DOT__mem__v0[3U];
    }
    if (__Vdlyvset__npu_system_top__DOT__u_wt_bank0__DOT__mem__v0) {
        vlSelf->npu_system_top__DOT__u_wt_bank0__DOT__mem[__Vdlyvdim0__npu_system_top__DOT__u_wt_bank0__DOT__mem__v0][0U] 
            = __Vdlyvval__npu_system_top__DOT__u_wt_bank0__DOT__mem__v0[0U];
        vlSelf->npu_system_top__DOT__u_wt_bank0__DOT__mem[__Vdlyvdim0__npu_system_top__DOT__u_wt_bank0__DOT__mem__v0][1U] 
            = __Vdlyvval__npu_system_top__DOT__u_wt_bank0__DOT__mem__v0[1U];
        vlSelf->npu_system_top__DOT__u_wt_bank0__DOT__mem[__Vdlyvdim0__npu_system_top__DOT__u_wt_bank0__DOT__mem__v0][2U] 
            = __Vdlyvval__npu_system_top__DOT__u_wt_bank0__DOT__mem__v0[2U];
        vlSelf->npu_system_top__DOT__u_wt_bank0__DOT__mem[__Vdlyvdim0__npu_system_top__DOT__u_wt_bank0__DOT__mem__v0][3U] 
            = __Vdlyvval__npu_system_top__DOT__u_wt_bank0__DOT__mem__v0[3U];
    }
    if (__Vdlyvset__npu_system_top__DOT__u_act_bank1__DOT__mem__v0) {
        vlSelf->npu_system_top__DOT__u_act_bank1__DOT__mem[__Vdlyvdim0__npu_system_top__DOT__u_act_bank1__DOT__mem__v0][0U] 
            = __Vdlyvval__npu_system_top__DOT__u_act_bank1__DOT__mem__v0[0U];
        vlSelf->npu_system_top__DOT__u_act_bank1__DOT__mem[__Vdlyvdim0__npu_system_top__DOT__u_act_bank1__DOT__mem__v0][1U] 
            = __Vdlyvval__npu_system_top__DOT__u_act_bank1__DOT__mem__v0[1U];
        vlSelf->npu_system_top__DOT__u_act_bank1__DOT__mem[__Vdlyvdim0__npu_system_top__DOT__u_act_bank1__DOT__mem__v0][2U] 
            = __Vdlyvval__npu_system_top__DOT__u_act_bank1__DOT__mem__v0[2U];
        vlSelf->npu_system_top__DOT__u_act_bank1__DOT__mem[__Vdlyvdim0__npu_system_top__DOT__u_act_bank1__DOT__mem__v0][3U] 
            = __Vdlyvval__npu_system_top__DOT__u_act_bank1__DOT__mem__v0[3U];
    }
    if (__Vdlyvset__npu_system_top__DOT__u_act_bank0__DOT__mem__v0) {
        vlSelf->npu_system_top__DOT__u_act_bank0__DOT__mem[__Vdlyvdim0__npu_system_top__DOT__u_act_bank0__DOT__mem__v0][0U] 
            = __Vdlyvval__npu_system_top__DOT__u_act_bank0__DOT__mem__v0[0U];
        vlSelf->npu_system_top__DOT__u_act_bank0__DOT__mem[__Vdlyvdim0__npu_system_top__DOT__u_act_bank0__DOT__mem__v0][1U] 
            = __Vdlyvval__npu_system_top__DOT__u_act_bank0__DOT__mem__v0[1U];
        vlSelf->npu_system_top__DOT__u_act_bank0__DOT__mem[__Vdlyvdim0__npu_system_top__DOT__u_act_bank0__DOT__mem__v0][2U] 
            = __Vdlyvval__npu_system_top__DOT__u_act_bank0__DOT__mem__v0[2U];
        vlSelf->npu_system_top__DOT__u_act_bank0__DOT__mem[__Vdlyvdim0__npu_system_top__DOT__u_act_bank0__DOT__mem__v0][3U] 
            = __Vdlyvval__npu_system_top__DOT__u_act_bank0__DOT__mem__v0[3U];
    }
    if (__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0) {
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram[__Vdlyvdim0__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0][0U] 
            = __Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0[0U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram[__Vdlyvdim0__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0][1U] 
            = __Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0[1U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram[__Vdlyvdim0__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0][2U] 
            = __Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0[2U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram[__Vdlyvdim0__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0][3U] 
            = __Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0[3U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram[__Vdlyvdim0__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0][4U] 
            = __Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0[4U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram[__Vdlyvdim0__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0][5U] 
            = __Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0[5U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram[__Vdlyvdim0__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0][6U] 
            = __Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0[6U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram[__Vdlyvdim0__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0][7U] 
            = __Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0[7U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram[__Vdlyvdim0__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0][8U] 
            = __Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0[8U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram[__Vdlyvdim0__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0][9U] 
            = __Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0[9U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram[__Vdlyvdim0__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0][0xaU] 
            = __Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0[0xaU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram[__Vdlyvdim0__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0][0xbU] 
            = __Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0[0xbU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram[__Vdlyvdim0__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0][0xcU] 
            = __Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0[0xcU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram[__Vdlyvdim0__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0][0xdU] 
            = __Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0[0xdU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram[__Vdlyvdim0__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0][0xeU] 
            = __Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0[0xeU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram[__Vdlyvdim0__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0][0xfU] 
            = __Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram__v0[0xfU];
    }
}

VL_INLINE_OPT void Vnpu_system_top___024root___nba_sequent__TOP__3(Vnpu_system_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_system_top___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->npu_system_top__DOT____VdfgTmp_h51e62fb4__0 
        = ((IData)(vlSelf->npu_system_top__DOT__bank_sel) 
           & (IData)(vlSelf->npu_system_top__DOT__dma_sram_wen));
    vlSelf->npu_system_top__DOT____VdfgTmp_h14588a4c__0 
        = ((~ (IData)(vlSelf->npu_system_top__DOT__bank_sel)) 
           & (IData)(vlSelf->npu_system_top__DOT__dma_sram_wen));
    vlSelf->npu_system_top__DOT__dma_sram_addr = vlSelf->__Vdly__npu_system_top__DOT__dma_sram_addr;
    vlSelf->npu_system_top__DOT__npu_sram_raddr = vlSelf->__Vdly__npu_system_top__DOT__npu_sram_raddr;
    vlSelf->npu_system_top__DOT__npu_sram_ren = (((0U 
                                                   == (IData)(vlSelf->npu_system_top__DOT__state)) 
                                                  & (IData)(vlSelf->mmio_start_npu)) 
                                                 | (((1U 
                                                      == (IData)(vlSelf->npu_system_top__DOT__state)) 
                                                     & (0x10U 
                                                        > (IData)(vlSelf->npu_system_top__DOT__exec_cnt))) 
                                                    | ((3U 
                                                        == (IData)(vlSelf->npu_system_top__DOT__state)) 
                                                       & ((IData)(vlSelf->npu_system_top__DOT__exec_cnt) 
                                                          < (IData)(vlSelf->mmio_npu_seq_len)))));
    if (vlSelf->rst_n) {
        if (vlSelf->rvalid) {
            vlSelf->npu_system_top__DOT__dma_sram_wdata[0U] 
                = vlSelf->rdata[0U];
            vlSelf->npu_system_top__DOT__dma_sram_wdata[1U] 
                = vlSelf->rdata[1U];
            vlSelf->npu_system_top__DOT__dma_sram_wdata[2U] 
                = vlSelf->rdata[2U];
            vlSelf->npu_system_top__DOT__dma_sram_wdata[3U] 
                = vlSelf->rdata[3U];
        }
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_addr_q 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
            [0x1eU];
    } else {
        vlSelf->npu_system_top__DOT__dma_sram_wdata[0U] = 0U;
        vlSelf->npu_system_top__DOT__dma_sram_wdata[1U] = 0U;
        vlSelf->npu_system_top__DOT__dma_sram_wdata[2U] = 0U;
        vlSelf->npu_system_top__DOT__dma_sram_wdata[3U] = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_addr_q = 0U;
    }
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_valid_q 
        = ((IData)(vlSelf->rst_n) && (1U & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_valid_pipe 
                                            >> 0x1eU)));
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_valid_pipe 
        = vlSelf->__Vdly__npu_system_top__DOT__u_npu_core__DOT__acc_valid_pipe;
    if (vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v0) {
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[0U] 
            = vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v0;
    }
    if (vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v1) {
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[1U] 
            = vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v1;
    }
    if (vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v2) {
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[2U] 
            = vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v2;
    }
    if (vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v3) {
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[3U] 
            = vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v3;
    }
    if (vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v4) {
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[4U] 
            = vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v4;
    }
    if (vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v5) {
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[5U] 
            = vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v5;
    }
    if (vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v6) {
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[6U] 
            = vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v6;
    }
    if (vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v7) {
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[7U] 
            = vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v7;
    }
    if (vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v8) {
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[8U] 
            = vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v8;
    }
    if (vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v9) {
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[9U] 
            = vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v9;
    }
    if (vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v10) {
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[0xaU] 
            = vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v10;
    }
    if (vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v11) {
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[0xbU] 
            = vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v11;
    }
    if (vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v12) {
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[0xcU] 
            = vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v12;
    }
    if (vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v13) {
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[0xdU] 
            = vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v13;
    }
    if (vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v14) {
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[0xeU] 
            = vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v14;
    }
    if (vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v15) {
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[0xfU] 
            = vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v15;
    }
    if (vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v16) {
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[0x10U] 
            = vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v16;
    }
    if (vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v17) {
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[0x11U] 
            = vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v17;
    }
    if (vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v18) {
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[0x12U] 
            = vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v18;
    }
    if (vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v19) {
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[0x13U] 
            = vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v19;
    }
    if (vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v20) {
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[0x14U] 
            = vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v20;
    }
    if (vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v21) {
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[0x15U] 
            = vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v21;
    }
    if (vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v22) {
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[0x16U] 
            = vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v22;
    }
    if (vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v23) {
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[0x17U] 
            = vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v23;
    }
    if (vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v24) {
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[0x18U] 
            = vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v24;
    }
    if (vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v25) {
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[0x19U] 
            = vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v25;
    }
    if (vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v26) {
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[0x1aU] 
            = vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v26;
    }
    if (vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v27) {
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[0x1bU] 
            = vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v27;
    }
    if (vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v28) {
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[0x1cU] 
            = vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v28;
    }
    if (vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v29) {
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[0x1dU] 
            = vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v29;
    }
    if (vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v30) {
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[0x1eU] 
            = vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v30;
    }
    if (vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v31) {
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[0U] = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[1U] = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[2U] = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[3U] = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[4U] = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[5U] = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[6U] = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[7U] = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[8U] = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[9U] = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[0xaU] = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[0xbU] = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[0xcU] = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[0xdU] = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[0xeU] = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[0xfU] = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[0x10U] = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[0x11U] = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[0x12U] = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[0x13U] = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[0x14U] = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[0x15U] = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[0x16U] = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[0x17U] = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[0x18U] = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[0x19U] = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[0x1aU] = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[0x1bU] = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[0x1cU] = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[0x1dU] = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[0x1eU] = 0U;
    }
}

VL_INLINE_OPT void Vnpu_system_top___024root___nba_comb__TOP__0(Vnpu_system_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_system_top___024root___nba_comb__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    if (vlSelf->npu_system_top__DOT__bank_sel) {
        vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
            = vlSelf->npu_system_top__DOT__wt_b0_rdata[0U];
        vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
            = vlSelf->npu_system_top__DOT__wt_b0_rdata[1U];
        vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
            = vlSelf->npu_system_top__DOT__wt_b0_rdata[2U];
        vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
            = vlSelf->npu_system_top__DOT__wt_b0_rdata[3U];
        vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_act_in[0U] 
            = vlSelf->npu_system_top__DOT__act_b0_rdata[0U];
        vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_act_in[1U] 
            = vlSelf->npu_system_top__DOT__act_b0_rdata[1U];
        vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_act_in[2U] 
            = vlSelf->npu_system_top__DOT__act_b0_rdata[2U];
        vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_act_in[3U] 
            = vlSelf->npu_system_top__DOT__act_b0_rdata[3U];
    } else {
        vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
            = vlSelf->npu_system_top__DOT__wt_b1_rdata[0U];
        vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
            = vlSelf->npu_system_top__DOT__wt_b1_rdata[1U];
        vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
            = vlSelf->npu_system_top__DOT__wt_b1_rdata[2U];
        vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
            = vlSelf->npu_system_top__DOT__wt_b1_rdata[3U];
        vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_act_in[0U] 
            = vlSelf->npu_system_top__DOT__act_b1_rdata[0U];
        vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_act_in[1U] 
            = vlSelf->npu_system_top__DOT__act_b1_rdata[1U];
        vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_act_in[2U] 
            = vlSelf->npu_system_top__DOT__act_b1_rdata[2U];
        vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_act_in[3U] 
            = vlSelf->npu_system_top__DOT__act_b1_rdata[3U];
    }
    if (((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_valid_q) 
         & ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_valid) 
            & ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_addr_q) 
               == (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_addr))))) {
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[0U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[0U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[1U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[1U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[2U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[2U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[3U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[3U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[4U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[4U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[5U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[5U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[6U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[6U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[7U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[7U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[8U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[8U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[9U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[9U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xaU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[0xaU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xbU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[0xbU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xcU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[0xcU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xdU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[0xdU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xeU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[0xeU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xfU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[0xfU];
    } else {
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[0U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[0U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[1U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[1U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[2U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[2U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[3U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[3U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[4U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[4U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[5U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[5U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[6U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[6U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[7U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[7U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[8U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[8U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[9U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[9U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xaU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[0xaU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xbU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[0xbU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xcU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[0xcU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xdU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[0xdU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xeU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[0xeU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xfU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[0xfU];
    }
    __Vtemp_2[0U] = (IData)((((QData)((IData)((0xffU 
                                               & (IData)(
                                                         (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__7__KET____DOT__genblk1__DOT__delay_pipe 
                                                          >> 0x30U))))) 
                              << 0x38U) | (((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__6__KET____DOT__genblk1__DOT__delay_pipe 
                                                                        >> 0x28U))))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(
                                                                          (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__5__KET____DOT__genblk1__DOT__delay_pipe 
                                                                           >> 0x20U))))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__4__KET____DOT__genblk1__DOT__delay_pipe 
                                                                   >> 0x18U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((0xff000000U 
                                                                     & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__3__KET____DOT__genblk1__DOT__delay_pipe 
                                                                        << 8U)) 
                                                                    | ((0xff0000U 
                                                                        & ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__2__KET____DOT__genblk1__DOT__delay_pipe) 
                                                                           << 8U)) 
                                                                       | (((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__1__KET____DOT__genblk1__DOT__delay_pipe) 
                                                                           << 8U) 
                                                                          | (0xffU 
                                                                             & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_act_in[0U])))))))))));
    __Vtemp_2[1U] = (IData)(((((QData)((IData)((0xffU 
                                                & (IData)(
                                                          (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__7__KET____DOT__genblk1__DOT__delay_pipe 
                                                           >> 0x30U))))) 
                               << 0x38U) | (((QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(
                                                                        (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__6__KET____DOT__genblk1__DOT__delay_pipe 
                                                                         >> 0x28U))))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(
                                                                           (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__5__KET____DOT__genblk1__DOT__delay_pipe 
                                                                            >> 0x20U))))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__4__KET____DOT__genblk1__DOT__delay_pipe 
                                                                    >> 0x18U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((0xff000000U 
                                                                      & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__3__KET____DOT__genblk1__DOT__delay_pipe 
                                                                         << 8U)) 
                                                                     | ((0xff0000U 
                                                                         & ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__2__KET____DOT__genblk1__DOT__delay_pipe) 
                                                                            << 8U)) 
                                                                        | (((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__1__KET____DOT__genblk1__DOT__delay_pipe) 
                                                                            << 8U) 
                                                                           | (0xffU 
                                                                              & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_act_in[0U])))))))))) 
                             >> 0x20U));
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__act_skewed[0U] 
        = __Vtemp_2[0U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__act_skewed[1U] 
        = __Vtemp_2[1U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__act_skewed[2U] 
        = ((0xff000000U & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[2U] 
                           << 8U)) | ((0xff0000U & 
                                       (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[2U] 
                                        << 8U)) | (
                                                   (0xff00U 
                                                    & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[2U] 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & (IData)(
                                                                (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__8__KET____DOT__genblk1__DOT__delay_pipe 
                                                                 >> 0x38U))))));
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__act_skewed[3U] 
        = ((0xff000000U & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[3U] 
                           << 8U)) | ((0xff0000U & 
                                       (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[3U] 
                                        << 8U)) | (
                                                   (0xff00U 
                                                    & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[3U] 
                                                       << 8U)) 
                                                   | (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[2U] 
                                                      >> 0x18U))));
    if (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_clear_q) {
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[0U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[0U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[1U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[1U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[2U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[2U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[3U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[3U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[4U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[4U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[5U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[5U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[6U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[6U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[7U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[7U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[8U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[8U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[9U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[9U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[0xaU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[0xaU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[0xbU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[0xbU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[0xcU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[0xcU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[0xdU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[0xdU];
    } else {
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[0U] 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[0U] 
               + vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[0U]);
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[1U] 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[1U] 
               + vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[1U]);
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[2U] 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[2U] 
               + vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[2U]);
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[3U] 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[3U] 
               + vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[3U]);
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[4U] 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[4U] 
               + vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[4U]);
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[5U] 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[5U] 
               + vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[5U]);
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[6U] 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[6U] 
               + vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[6U]);
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[7U] 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[7U] 
               + vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[7U]);
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[8U] 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[8U] 
               + vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[8U]);
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[9U] 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[9U] 
               + vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[9U]);
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[0xaU] 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xaU] 
               + vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[0xaU]);
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[0xbU] 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xbU] 
               + vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[0xbU]);
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[0xcU] 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xcU] 
               + vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[0xcU]);
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[0xdU] 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xdU] 
               + vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[0xdU]);
    }
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[0xeU] 
        = (IData)((((QData)((IData)(((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_clear_q)
                                      ? vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[0xfU]
                                      : (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xfU] 
                                         + vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[0xfU])))) 
                    << 0x20U) | (QData)((IData)(((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_clear_q)
                                                  ? 
                                                 vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[0xeU]
                                                  : 
                                                 (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xeU] 
                                                  + 
                                                  vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[0xeU]))))));
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[0xfU] 
        = (IData)(((((QData)((IData)(((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_clear_q)
                                       ? vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[0xfU]
                                       : (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xfU] 
                                          + vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[0xfU])))) 
                     << 0x20U) | (QData)((IData)(((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_clear_q)
                                                   ? 
                                                  vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[0xeU]
                                                   : 
                                                  (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xeU] 
                                                   + 
                                                   vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[0xeU]))))) 
                   >> 0x20U));
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0U][0U] 
        = (0xffU & vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__act_skewed[0U]);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[1U][0U] 
        = (0xffU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__act_skewed[0U] 
                    >> 8U));
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[2U][0U] 
        = (0xffU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__act_skewed[0U] 
                    >> 0x10U));
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[3U][0U] 
        = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__act_skewed[0U] 
           >> 0x18U);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[4U][0U] 
        = (0xffU & vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__act_skewed[1U]);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[5U][0U] 
        = (0xffU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__act_skewed[1U] 
                    >> 8U));
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[6U][0U] 
        = (0xffU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__act_skewed[1U] 
                    >> 0x10U));
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[7U][0U] 
        = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__act_skewed[1U] 
           >> 0x18U);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[8U][0U] 
        = (0xffU & vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__act_skewed[2U]);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[9U][0U] 
        = (0xffU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__act_skewed[2U] 
                    >> 8U));
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][0U] 
        = (0xffU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__act_skewed[2U] 
                    >> 0x10U));
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][0U] 
        = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__act_skewed[2U] 
           >> 0x18U);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][0U] 
        = (0xffU & vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__act_skewed[3U]);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][0U] 
        = (0xffU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__act_skewed[3U] 
                    >> 8U));
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][0U] 
        = (0xffU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__act_skewed[3U] 
                    >> 0x10U));
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][0U] 
        = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__act_skewed[3U] 
           >> 0x18U);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_act_right[0U] 
        = ((0xffff0000U & vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_act_right[0U]) 
           | ((vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
               [1U][0x10U] << 8U) | vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
              [0U][0x10U]));
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_act_right[0U] 
        = ((0xffffU & vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_act_right[0U]) 
           | (0xffff0000U & ((vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                              [3U][0x10U] << 0x18U) 
                             | (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [2U][0x10U] << 0x10U))));
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_act_right[1U] 
        = ((0xffff0000U & vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_act_right[1U]) 
           | ((vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
               [5U][0x10U] << 8U) | vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
              [4U][0x10U]));
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_act_right[1U] 
        = ((0xffffU & vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_act_right[1U]) 
           | (0xffff0000U & ((vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                              [7U][0x10U] << 0x18U) 
                             | (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [6U][0x10U] << 0x10U))));
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_act_right[2U] 
        = ((0xffff0000U & vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_act_right[2U]) 
           | ((vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
               [9U][0x10U] << 8U) | vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
              [8U][0x10U]));
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_act_right[2U] 
        = ((0xffffU & vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_act_right[2U]) 
           | (0xffff0000U & ((vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                              [0xbU][0x10U] << 0x18U) 
                             | (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0xaU][0x10U] << 0x10U))));
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_act_right[3U] 
        = ((0xffff0000U & vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_act_right[3U]) 
           | ((vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
               [0xdU][0x10U] << 8U) | vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
              [0xcU][0x10U]));
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_act_right[3U] 
        = ((0xffffU & vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_act_right[3U]) 
           | (0xffff0000U & ((vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                              [0xfU][0x10U] << 0x18U) 
                             | (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0xeU][0x10U] << 0x10U))));
}

void Vnpu_system_top___024root___nba_sequent__TOP__0(Vnpu_system_top___024root* vlSelf);
void Vnpu_system_top___024root___nba_sequent__TOP__1(Vnpu_system_top___024root* vlSelf);

void Vnpu_system_top___024root___eval_nba(Vnpu_system_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_system_top___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vnpu_system_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vnpu_system_top___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vnpu_system_top___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vnpu_system_top___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vnpu_system_top___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
}

void Vnpu_system_top___024root___eval_triggers__act(Vnpu_system_top___024root* vlSelf);
void Vnpu_system_top___024root___eval_act(Vnpu_system_top___024root* vlSelf);

bool Vnpu_system_top___024root___eval_phase__act(Vnpu_system_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_system_top___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vnpu_system_top___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vnpu_system_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vnpu_system_top___024root___eval_phase__nba(Vnpu_system_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_system_top___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vnpu_system_top___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpu_system_top___024root___dump_triggers__ico(Vnpu_system_top___024root* vlSelf);
#endif  // VL_DEBUG
bool Vnpu_system_top___024root___eval_phase__ico(Vnpu_system_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpu_system_top___024root___dump_triggers__nba(Vnpu_system_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpu_system_top___024root___dump_triggers__act(Vnpu_system_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vnpu_system_top___024root___eval(Vnpu_system_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_system_top___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vnpu_system_top___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../rtl/npu_system_top.sv", 3, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vnpu_system_top___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vnpu_system_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../rtl/npu_system_top.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vnpu_system_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../rtl/npu_system_top.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vnpu_system_top___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vnpu_system_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vnpu_system_top___024root___eval_debug_assertions(Vnpu_system_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_system_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->mmio_start_dma & 0xfeU))) {
        Verilated::overWidthError("mmio_start_dma");}
    if (VL_UNLIKELY((vlSelf->mmio_dma_target & 0xfeU))) {
        Verilated::overWidthError("mmio_dma_target");}
    if (VL_UNLIKELY((vlSelf->mmio_swap_banks & 0xfeU))) {
        Verilated::overWidthError("mmio_swap_banks");}
    if (VL_UNLIKELY((vlSelf->mmio_start_npu & 0xfeU))) {
        Verilated::overWidthError("mmio_start_npu");}
    if (VL_UNLIKELY((vlSelf->mmio_npu_mode & 0xfeU))) {
        Verilated::overWidthError("mmio_npu_mode");}
    if (VL_UNLIKELY((vlSelf->mmio_npu_acc_clear & 0xfeU))) {
        Verilated::overWidthError("mmio_npu_acc_clear");}
    if (VL_UNLIKELY((vlSelf->mmio_test_acc_addr_override_en 
                     & 0xfeU))) {
        Verilated::overWidthError("mmio_test_acc_addr_override_en");}
    if (VL_UNLIKELY((vlSelf->mmio_test_acc_addr_override 
                     & 0xfe00U))) {
        Verilated::overWidthError("mmio_test_acc_addr_override");}
    if (VL_UNLIKELY((vlSelf->mmio_test_one_shot_acc_clear_en 
                     & 0xfeU))) {
        Verilated::overWidthError("mmio_test_one_shot_acc_clear_en");}
    if (VL_UNLIKELY((vlSelf->mmio_clear_done & 0xfeU))) {
        Verilated::overWidthError("mmio_clear_done");}
    if (VL_UNLIKELY((vlSelf->arready & 0xfeU))) {
        Verilated::overWidthError("arready");}
    if (VL_UNLIKELY((vlSelf->rid & 0xf0U))) {
        Verilated::overWidthError("rid");}
    if (VL_UNLIKELY((vlSelf->rresp & 0xfcU))) {
        Verilated::overWidthError("rresp");}
    if (VL_UNLIKELY((vlSelf->rlast & 0xfeU))) {
        Verilated::overWidthError("rlast");}
    if (VL_UNLIKELY((vlSelf->rvalid & 0xfeU))) {
        Verilated::overWidthError("rvalid");}
    if (VL_UNLIKELY((vlSelf->drain_re & 0xfeU))) {
        Verilated::overWidthError("drain_re");}
    if (VL_UNLIKELY((vlSelf->drain_addr & 0xfe00U))) {
        Verilated::overWidthError("drain_addr");}
}
#endif  // VL_DEBUG
