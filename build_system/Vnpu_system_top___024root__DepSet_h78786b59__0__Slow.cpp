// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpu_system_top.h for the primary calling header

#include "Vnpu_system_top__pch.h"
#include "Vnpu_system_top___024root.h"

VL_ATTR_COLD void Vnpu_system_top___024root___eval_static(Vnpu_system_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_system_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vnpu_system_top___024root___eval_initial__TOP(Vnpu_system_top___024root* vlSelf);

VL_ATTR_COLD void Vnpu_system_top___024root___eval_initial(Vnpu_system_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_system_top___024root___eval_initial\n"); );
    // Body
    Vnpu_system_top___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = vlSelf->rst_n;
}

VL_ATTR_COLD void Vnpu_system_top___024root___eval_initial__TOP(Vnpu_system_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_system_top___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0U][0U] = 0U;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0U][1U] = 0U;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0U][2U] = 0U;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0U][3U] = 0U;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0U][4U] = 0U;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0U][5U] = 0U;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0U][6U] = 0U;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0U][7U] = 0U;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0U][8U] = 0U;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0U][9U] = 0U;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0U][0xaU] = 0U;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0U][0xbU] = 0U;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0U][0xcU] = 0U;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0U][0xdU] = 0U;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0U][0xeU] = 0U;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0U][0xfU] = 0U;
    vlSelf->arsize = 4U;
    vlSelf->arburst = 1U;
    vlSelf->arid = 1U;
    vlSelf->rready = 1U;
}

VL_ATTR_COLD void Vnpu_system_top___024root___eval_final(Vnpu_system_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_system_top___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpu_system_top___024root___dump_triggers__stl(Vnpu_system_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vnpu_system_top___024root___eval_phase__stl(Vnpu_system_top___024root* vlSelf);

VL_ATTR_COLD void Vnpu_system_top___024root___eval_settle(Vnpu_system_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_system_top___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vnpu_system_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../rtl/npu_system_top.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vnpu_system_top___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpu_system_top___024root___dump_triggers__stl(Vnpu_system_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_system_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vnpu_system_top___024root___stl_sequent__TOP__0(Vnpu_system_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_system_top___024root___stl_sequent__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_28;
    // Body
    vlSelf->arlen = vlSelf->mmio_burst_len;
    vlSelf->npu_system_top__DOT____VdfgTmp_h14588a4c__0 
        = ((~ (IData)(vlSelf->npu_system_top__DOT__bank_sel)) 
           & (IData)(vlSelf->npu_system_top__DOT__dma_sram_wen));
    vlSelf->npu_system_top__DOT____VdfgTmp_h51e62fb4__0 
        = ((IData)(vlSelf->npu_system_top__DOT__bank_sel) 
           & (IData)(vlSelf->npu_system_top__DOT__dma_sram_wen));
    vlSelf->npu_system_top__DOT__u_dma__DOT__ar_fire 
        = ((IData)(vlSelf->arready) & (IData)(vlSelf->arvalid));
    vlSelf->npu_system_top__DOT__u_dma__DOT__r_last_fire 
        = ((IData)(vlSelf->rlast) & (IData)(vlSelf->rvalid));
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
    vlSelf->npu_system_top__DOT__next_state = vlSelf->npu_system_top__DOT__state;
    if ((4U & (IData)(vlSelf->npu_system_top__DOT__state))) {
        if ((2U & (IData)(vlSelf->npu_system_top__DOT__state))) {
            vlSelf->npu_system_top__DOT__next_state = 0U;
        } else if ((1U & (IData)(vlSelf->npu_system_top__DOT__state))) {
            if (vlSelf->mmio_clear_done) {
                vlSelf->npu_system_top__DOT__next_state = 0U;
            }
        } else if ((0x22U == (IData)(vlSelf->npu_system_top__DOT__flush_cnt))) {
            vlSelf->npu_system_top__DOT__next_state = 5U;
        }
    } else if ((2U & (IData)(vlSelf->npu_system_top__DOT__state))) {
        if ((1U & (IData)(vlSelf->npu_system_top__DOT__state))) {
            if (((IData)(vlSelf->npu_system_top__DOT__exec_cnt) 
                 >= ((IData)(vlSelf->mmio_npu_seq_len) 
                     - (IData)(1U)))) {
                vlSelf->npu_system_top__DOT__next_state = 4U;
            }
        } else if ((1U == (IData)(vlSelf->npu_system_top__DOT__wait_cnt))) {
            vlSelf->npu_system_top__DOT__next_state = 5U;
        }
    } else if ((1U & (IData)(vlSelf->npu_system_top__DOT__state))) {
        if ((0xfU == (IData)(vlSelf->npu_system_top__DOT__exec_cnt))) {
            vlSelf->npu_system_top__DOT__next_state = 2U;
        }
    } else if (vlSelf->mmio_start_npu) {
        vlSelf->npu_system_top__DOT__next_state = ((IData)(vlSelf->mmio_npu_mode)
                                                    ? 1U
                                                    : 3U);
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
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[1U][0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[1U][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[1U][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[1U][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[1U][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[1U][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[1U][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[1U][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[1U][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[1U][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[1U][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[1U][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out;
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
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[1U][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[1U][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[1U][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[1U][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[2U][0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[2U][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[2U][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[2U][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[2U][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[2U][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[2U][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[2U][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[2U][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[2U][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[2U][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[2U][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[2U][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[2U][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[2U][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[2U][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[3U][0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[3U][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[3U][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[3U][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[3U][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[3U][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[3U][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[3U][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[3U][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[3U][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[3U][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[3U][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[3U][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[3U][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[3U][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[3U][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[4U][0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[4U][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[4U][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[4U][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[4U][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[4U][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[4U][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[4U][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[4U][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[4U][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[4U][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[4U][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[4U][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[4U][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[4U][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[4U][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[5U][0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[5U][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[5U][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[5U][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[5U][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[5U][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[5U][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[5U][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[5U][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[5U][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[5U][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[5U][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[5U][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[5U][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[5U][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[5U][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[6U][0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[6U][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[6U][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[6U][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[6U][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[6U][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[6U][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[6U][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[6U][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[6U][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[6U][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[6U][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[6U][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[6U][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[6U][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[6U][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[7U][0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[7U][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[7U][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[7U][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[7U][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[7U][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[7U][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[7U][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[7U][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[7U][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[7U][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[7U][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[7U][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[7U][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[7U][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[7U][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[8U][0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[8U][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[8U][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[8U][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[8U][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[8U][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[8U][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[8U][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[8U][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[8U][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[8U][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[8U][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[8U][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[8U][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[8U][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[8U][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[9U][0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[9U][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[9U][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[9U][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[9U][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[9U][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[9U][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[9U][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[9U][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[9U][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[9U][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[9U][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[9U][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[9U][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[9U][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[9U][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0U][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0U][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0U][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0U][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0U][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0U][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0U][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0U][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0U][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0U][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0U][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0U][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0U][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0U][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0U][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0U][0x10U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[1U][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[1U][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[1U][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[1U][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[1U][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[1U][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[1U][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[1U][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[1U][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[1U][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[1U][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[1U][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[1U][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[1U][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[1U][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[1U][0x10U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[2U][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[2U][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[2U][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[2U][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[2U][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[2U][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[2U][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[2U][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[2U][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[2U][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[2U][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[2U][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[2U][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[2U][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[2U][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[2U][0x10U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[3U][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[3U][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[3U][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[3U][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[3U][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[3U][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[3U][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[3U][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[3U][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[3U][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[3U][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[3U][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[3U][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[3U][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[3U][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[3U][0x10U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[4U][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[4U][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[4U][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[4U][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[4U][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[4U][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[4U][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[4U][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[4U][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[4U][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[4U][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[4U][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[4U][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[4U][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[4U][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[4U][0x10U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[5U][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[5U][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[5U][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[5U][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[5U][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[5U][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[5U][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[5U][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[5U][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[5U][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[5U][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[5U][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[5U][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[5U][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[5U][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[5U][0x10U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[6U][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[6U][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[6U][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[6U][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[6U][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[6U][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[6U][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[6U][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[6U][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[6U][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[6U][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[6U][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[6U][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[6U][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[6U][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[6U][0x10U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[7U][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[7U][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[7U][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[7U][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[7U][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[7U][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[7U][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[7U][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[7U][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[7U][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[7U][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[7U][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[7U][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[7U][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[7U][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[7U][0x10U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[8U][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[8U][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[8U][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[8U][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[8U][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[8U][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[8U][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[8U][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[8U][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[8U][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[8U][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[8U][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[8U][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[8U][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[8U][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[8U][0x10U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[9U][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[9U][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[9U][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[9U][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[9U][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[9U][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[9U][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[9U][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[9U][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[9U][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[9U][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[9U][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[9U][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[9U][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[9U][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[9U][0x10U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][0x10U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][0x10U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][0x10U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][0x10U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][0x10U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][0x10U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out;
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
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_psum_bottom[0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0xeU];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_psum_bottom[1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[0xdU];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_psum_bottom[2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[0xcU];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_psum_bottom[3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[0xbU];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_psum_bottom[4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[0xaU];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_psum_bottom[5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[9U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_psum_bottom[6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[8U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_psum_bottom[7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[7U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_psum_bottom[8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[6U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_psum_bottom[9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[5U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_psum_bottom[0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe[4U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_psum_bottom[0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__11__KET____DOT__genblk1__DOT__deskew_pipe[3U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_psum_bottom[0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__12__KET____DOT__genblk1__DOT__deskew_pipe[2U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_psum_bottom[0xdU] 
        = (IData)((vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__13__KET____DOT__genblk1__DOT__deskew_pipe 
                   >> 0x20U));
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_psum_bottom[0xeU] 
        = (IData)((((QData)((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                    [0x10U][0xfU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__14__KET____DOT__genblk1__DOT__deskew_pipe))));
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_psum_bottom[0xfU] 
        = (IData)(((((QData)((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [0x10U][0xfU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__14__KET____DOT__genblk1__DOT__deskew_pipe))) 
                   >> 0x20U));
    __Vtemp_28[0U] = (IData)((((QData)((IData)((0xffU 
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
    __Vtemp_28[1U] = (IData)(((((QData)((IData)((0xffU 
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
        = __Vtemp_28[0U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__act_skewed[1U] 
        = __Vtemp_28[1U];
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

VL_ATTR_COLD void Vnpu_system_top___024root___eval_stl(Vnpu_system_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_system_top___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vnpu_system_top___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vnpu_system_top___024root___eval_triggers__stl(Vnpu_system_top___024root* vlSelf);

VL_ATTR_COLD bool Vnpu_system_top___024root___eval_phase__stl(Vnpu_system_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_system_top___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vnpu_system_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vnpu_system_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpu_system_top___024root___dump_triggers__ico(Vnpu_system_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_system_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpu_system_top___024root___dump_triggers__act(Vnpu_system_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_system_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or negedge rst_n)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpu_system_top___024root___dump_triggers__nba(Vnpu_system_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_system_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or negedge rst_n)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vnpu_system_top___024root___ctor_var_reset(Vnpu_system_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_system_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->mmio_start_dma = VL_RAND_RESET_I(1);
    vlSelf->mmio_dma_target = VL_RAND_RESET_I(1);
    vlSelf->mmio_src_addr = VL_RAND_RESET_Q(64);
    vlSelf->mmio_burst_len = VL_RAND_RESET_I(8);
    vlSelf->mmio_total_bursts = VL_RAND_RESET_I(16);
    vlSelf->mmio_dma_done = VL_RAND_RESET_I(1);
    vlSelf->mmio_swap_banks = VL_RAND_RESET_I(1);
    vlSelf->mmio_start_npu = VL_RAND_RESET_I(1);
    vlSelf->mmio_npu_mode = VL_RAND_RESET_I(1);
    vlSelf->mmio_npu_acc_clear = VL_RAND_RESET_I(1);
    vlSelf->mmio_test_acc_addr_override_en = VL_RAND_RESET_I(1);
    vlSelf->mmio_test_acc_addr_override = VL_RAND_RESET_I(9);
    vlSelf->mmio_test_one_shot_acc_clear_en = VL_RAND_RESET_I(1);
    vlSelf->mmio_clear_done = VL_RAND_RESET_I(1);
    vlSelf->mmio_npu_seq_len = VL_RAND_RESET_I(16);
    vlSelf->mmio_npu_done = VL_RAND_RESET_I(1);
    vlSelf->arid = VL_RAND_RESET_I(4);
    vlSelf->araddr = VL_RAND_RESET_Q(64);
    vlSelf->arlen = VL_RAND_RESET_I(8);
    vlSelf->arsize = VL_RAND_RESET_I(3);
    vlSelf->arburst = VL_RAND_RESET_I(2);
    vlSelf->arvalid = VL_RAND_RESET_I(1);
    vlSelf->arready = VL_RAND_RESET_I(1);
    vlSelf->rid = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(128, vlSelf->rdata);
    vlSelf->rresp = VL_RAND_RESET_I(2);
    vlSelf->rlast = VL_RAND_RESET_I(1);
    vlSelf->rvalid = VL_RAND_RESET_I(1);
    vlSelf->rready = VL_RAND_RESET_I(1);
    vlSelf->drain_re = VL_RAND_RESET_I(1);
    vlSelf->drain_addr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, vlSelf->psum_drain_out);
    vlSelf->npu_system_top__DOT__bank_sel = VL_RAND_RESET_I(1);
    vlSelf->npu_system_top__DOT__dma_sram_wen = VL_RAND_RESET_I(1);
    vlSelf->npu_system_top__DOT__dma_sram_addr = VL_RAND_RESET_I(10);
    VL_RAND_RESET_W(128, vlSelf->npu_system_top__DOT__dma_sram_wdata);
    VL_RAND_RESET_W(128, vlSelf->npu_system_top__DOT__act_b0_rdata);
    VL_RAND_RESET_W(128, vlSelf->npu_system_top__DOT__act_b1_rdata);
    VL_RAND_RESET_W(128, vlSelf->npu_system_top__DOT__wt_b0_rdata);
    VL_RAND_RESET_W(128, vlSelf->npu_system_top__DOT__wt_b1_rdata);
    vlSelf->npu_system_top__DOT__npu_sram_ren = VL_RAND_RESET_I(1);
    vlSelf->npu_system_top__DOT__npu_sram_raddr = VL_RAND_RESET_I(10);
    vlSelf->npu_system_top__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->npu_system_top__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->npu_system_top__DOT__exec_cnt = VL_RAND_RESET_I(16);
    vlSelf->npu_system_top__DOT__flush_cnt = VL_RAND_RESET_I(6);
    vlSelf->npu_system_top__DOT__wait_cnt = VL_RAND_RESET_I(2);
    vlSelf->npu_system_top__DOT__wt_load_shift = VL_RAND_RESET_I(16);
    vlSelf->npu_system_top__DOT__npu_valid_q = VL_RAND_RESET_I(1);
    vlSelf->npu_system_top__DOT__npu_acc_addr_q = VL_RAND_RESET_I(9);
    vlSelf->npu_system_top__DOT__core_weight_load_en = VL_RAND_RESET_I(16);
    vlSelf->npu_system_top__DOT__one_shot_acc_clear_pending = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in);
    VL_RAND_RESET_W(128, vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_act_in);
    vlSelf->npu_system_top__DOT____VdfgTmp_h14588a4c__0 = 0;
    vlSelf->npu_system_top__DOT____VdfgTmp_h51e62fb4__0 = 0;
    vlSelf->npu_system_top__DOT__u_dma__DOT__req_cnt = VL_RAND_RESET_I(16);
    vlSelf->npu_system_top__DOT__u_dma__DOT__resp_cnt = VL_RAND_RESET_I(16);
    vlSelf->npu_system_top__DOT__u_dma__DOT__outstanding_cnt = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_dma__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->npu_system_top__DOT__u_dma__DOT__ar_fire = VL_RAND_RESET_I(1);
    vlSelf->npu_system_top__DOT__u_dma__DOT__r_last_fire = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->npu_system_top__DOT__u_act_bank0__DOT__mem[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->npu_system_top__DOT__u_act_bank1__DOT__mem[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->npu_system_top__DOT__u_wt_bank0__DOT__mem[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->npu_system_top__DOT__u_wt_bank1__DOT__mem[__Vi0]);
    }
    VL_RAND_RESET_W(512, vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_psum_bottom);
    VL_RAND_RESET_W(128, vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_act_right);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_valid_pipe = VL_RAND_RESET_I(31);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_clear_pipe = VL_RAND_RESET_I(31);
    for (int __Vi0 = 0; __Vi0 < 31; ++__Vi0) {
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe[__Vi0] = VL_RAND_RESET_I(9);
    }
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0 = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(128, vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__act_skewed);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 17; ++__Vi1) {
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(480, vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 0;
    VL_RAND_RESET_W(448, vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 0;
    VL_RAND_RESET_W(416, vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 0;
    VL_RAND_RESET_W(384, vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 0;
    VL_RAND_RESET_W(352, vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 0;
    VL_RAND_RESET_W(320, vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 0;
    VL_RAND_RESET_W(288, vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 0;
    VL_RAND_RESET_W(256, vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 0;
    VL_RAND_RESET_W(224, vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 0;
    VL_RAND_RESET_W(192, vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 0;
    VL_RAND_RESET_W(160, vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__10__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 0;
    VL_RAND_RESET_W(128, vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__11__KET____DOT__genblk1__DOT__deskew_pipe);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__11__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 0;
    VL_RAND_RESET_W(96, vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__12__KET____DOT__genblk1__DOT__deskew_pipe);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__12__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 0;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__13__KET____DOT__genblk1__DOT__deskew_pipe = VL_RAND_RESET_Q(64);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__13__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 0;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__14__KET____DOT__genblk1__DOT__deskew_pipe = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__14__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 0;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h0fccfa19__0 = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_heb5556dc__0 = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h9710a7a1__0 = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h32c66709__0 = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h5f885b3c__0 = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_ha97057eb__0 = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_hfc36f713__0 = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h2aacc719__0 = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h257ac4e1__0 = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_hac606717__0 = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h749d7e7a__0 = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__1__KET____DOT__genblk1__DOT__delay_pipe = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__1__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 0;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__2__KET____DOT__genblk1__DOT__delay_pipe = VL_RAND_RESET_I(16);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__2__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 0;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__3__KET____DOT__genblk1__DOT__delay_pipe = VL_RAND_RESET_I(24);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__3__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 0;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__4__KET____DOT__genblk1__DOT__delay_pipe = VL_RAND_RESET_I(32);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__4__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 0;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__5__KET____DOT__genblk1__DOT__delay_pipe = VL_RAND_RESET_Q(40);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__5__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 0;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__6__KET____DOT__genblk1__DOT__delay_pipe = VL_RAND_RESET_Q(48);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__6__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 0;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__7__KET____DOT__genblk1__DOT__delay_pipe = VL_RAND_RESET_Q(56);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__7__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 0;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__8__KET____DOT__genblk1__DOT__delay_pipe = VL_RAND_RESET_Q(64);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__8__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 0;
    VL_RAND_RESET_W(72, vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 0;
    VL_RAND_RESET_W(80, vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 0;
    VL_RAND_RESET_W(88, vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 0;
    VL_RAND_RESET_W(96, vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 0;
    VL_RAND_RESET_W(104, vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 0;
    VL_RAND_RESET_W(112, vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 0;
    VL_RAND_RESET_W(120, vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 0;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h39a248db__0 = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h918926b1__0 = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_he5aabb6d__0 = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_ha0c6234e__0 = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hb8848007__0 = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hb908c511__0 = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_he720a66f__0 = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h477e8f1d__0 = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h721aabf7__0 = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hed9ea05b__0 = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h24e6ce08__0 = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        VL_RAND_RESET_W(512, vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram[__Vi0]);
    }
    VL_RAND_RESET_W(512, vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data);
    VL_RAND_RESET_W(512, vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_rd_data);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_valid_q = VL_RAND_RESET_I(1);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_clear_q = VL_RAND_RESET_I(1);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_addr_q = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__drain_re_q = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512, vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data);
    VL_RAND_RESET_W(512, vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_addr = VL_RAND_RESET_I(9);
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__npu_system_top__DOT__npu_sram_raddr = VL_RAND_RESET_I(10);
    vlSelf->__Vdly__npu_system_top__DOT__dma_sram_addr = VL_RAND_RESET_I(10);
    vlSelf->__Vdly__npu_system_top__DOT__u_npu_core__DOT__acc_valid_pipe = VL_RAND_RESET_I(31);
    vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v0 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v0 = 0;
    vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v1 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v1 = 0;
    vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v2 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v2 = 0;
    vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v3 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v3 = 0;
    vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v4 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v4 = 0;
    vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v5 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v5 = 0;
    vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v6 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v6 = 0;
    vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v7 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v7 = 0;
    vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v8 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v8 = 0;
    vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v9 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v9 = 0;
    vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v10 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v10 = 0;
    vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v11 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v11 = 0;
    vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v12 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v12 = 0;
    vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v13 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v13 = 0;
    vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v14 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v14 = 0;
    vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v15 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v15 = 0;
    vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v16 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v16 = 0;
    vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v17 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v17 = 0;
    vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v18 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v18 = 0;
    vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v19 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v19 = 0;
    vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v20 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v20 = 0;
    vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v21 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v21 = 0;
    vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v22 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v22 = 0;
    vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v23 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v23 = 0;
    vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v24 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v24 = 0;
    vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v25 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v25 = 0;
    vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v26 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v26 = 0;
    vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v27 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v27 = 0;
    vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v28 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v28 = 0;
    vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v29 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v29 = 0;
    vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v30 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v30 = 0;
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v31 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
