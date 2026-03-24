// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpu_system_top.h for the primary calling header

#include "Vnpu_system_top__pch.h"
#include "Vnpu_system_top___024root.h"

VL_INLINE_OPT void Vnpu_system_top___024root___ico_sequent__TOP__0(Vnpu_system_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_system_top___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->arlen = vlSelf->mmio_burst_len;
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
}

void Vnpu_system_top___024root___eval_ico(Vnpu_system_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_system_top___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vnpu_system_top___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vnpu_system_top___024root___eval_triggers__ico(Vnpu_system_top___024root* vlSelf);

bool Vnpu_system_top___024root___eval_phase__ico(Vnpu_system_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_system_top___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vnpu_system_top___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vnpu_system_top___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vnpu_system_top___024root___eval_act(Vnpu_system_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_system_top___024root___eval_act\n"); );
}

extern const VlWide<8>/*255:0*/ Vnpu_system_top__ConstPool__CONST_h9e67c271_0;
extern const VlWide<9>/*287:0*/ Vnpu_system_top__ConstPool__CONST_h9a2fc1c8_0;
extern const VlWide<10>/*319:0*/ Vnpu_system_top__ConstPool__CONST_hab76c978_0;
extern const VlWide<11>/*351:0*/ Vnpu_system_top__ConstPool__CONST_h51f37808_0;
extern const VlWide<12>/*383:0*/ Vnpu_system_top__ConstPool__CONST_h997e551f_0;
extern const VlWide<13>/*415:0*/ Vnpu_system_top__ConstPool__CONST_h75d095d1_0;
extern const VlWide<14>/*447:0*/ Vnpu_system_top__ConstPool__CONST_hb0e0ad07_0;
extern const VlWide<15>/*479:0*/ Vnpu_system_top__ConstPool__CONST_hbd99daea_0;
extern const VlWide<16>/*511:0*/ Vnpu_system_top__ConstPool__CONST_h93e1b771_0;

VL_INLINE_OPT void Vnpu_system_top___024root___nba_sequent__TOP__0(Vnpu_system_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_system_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ __Vdly__npu_system_top__DOT__exec_cnt;
    __Vdly__npu_system_top__DOT__exec_cnt = 0;
    CData/*0:0*/ __Vdly__npu_system_top__DOT__u_dma__DOT__busy;
    __Vdly__npu_system_top__DOT__u_dma__DOT__busy = 0;
    SData/*15:0*/ __Vdly__npu_system_top__DOT__u_dma__DOT__req_cnt;
    __Vdly__npu_system_top__DOT__u_dma__DOT__req_cnt = 0;
    SData/*15:0*/ __Vdly__npu_system_top__DOT__u_dma__DOT__resp_cnt;
    __Vdly__npu_system_top__DOT__u_dma__DOT__resp_cnt = 0;
    CData/*7:0*/ __Vdly__npu_system_top__DOT__u_dma__DOT__outstanding_cnt;
    __Vdly__npu_system_top__DOT__u_dma__DOT__outstanding_cnt = 0;
    QData/*63:0*/ __Vdly__araddr;
    __Vdly__araddr = 0;
    IData/*30:0*/ __Vdly__npu_system_top__DOT__u_npu_core__DOT__acc_clear_pipe;
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__acc_clear_pipe = 0;
    VlWide<15>/*479:0*/ __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe;
    VL_ZERO_W(480, __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe);
    VlWide<14>/*447:0*/ __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe;
    VL_ZERO_W(448, __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe);
    VlWide<13>/*415:0*/ __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe;
    VL_ZERO_W(416, __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe);
    VlWide<12>/*383:0*/ __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe;
    VL_ZERO_W(384, __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe);
    VlWide<11>/*351:0*/ __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe;
    VL_ZERO_W(352, __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe);
    VlWide<10>/*319:0*/ __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe;
    VL_ZERO_W(320, __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe);
    VlWide<9>/*287:0*/ __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe;
    VL_ZERO_W(288, __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe);
    VlWide<8>/*255:0*/ __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe;
    VL_ZERO_W(256, __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe);
    VlWide<7>/*223:0*/ __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe;
    VL_ZERO_W(224, __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe);
    VlWide<6>/*191:0*/ __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe;
    VL_ZERO_W(192, __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe);
    VlWide<5>/*159:0*/ __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe;
    VL_ZERO_W(160, __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe);
    VlWide<4>/*127:0*/ __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__11__KET____DOT__genblk1__DOT__deskew_pipe;
    VL_ZERO_W(128, __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__11__KET____DOT__genblk1__DOT__deskew_pipe);
    VlWide<3>/*95:0*/ __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__12__KET____DOT__genblk1__DOT__deskew_pipe;
    VL_ZERO_W(96, __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__12__KET____DOT__genblk1__DOT__deskew_pipe);
    IData/*23:0*/ __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__3__KET____DOT__genblk1__DOT__delay_pipe;
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__3__KET____DOT__genblk1__DOT__delay_pipe = 0;
    IData/*31:0*/ __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__4__KET____DOT__genblk1__DOT__delay_pipe;
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__4__KET____DOT__genblk1__DOT__delay_pipe = 0;
    QData/*39:0*/ __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__5__KET____DOT__genblk1__DOT__delay_pipe;
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__5__KET____DOT__genblk1__DOT__delay_pipe = 0;
    QData/*47:0*/ __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__6__KET____DOT__genblk1__DOT__delay_pipe;
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__6__KET____DOT__genblk1__DOT__delay_pipe = 0;
    QData/*55:0*/ __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__7__KET____DOT__genblk1__DOT__delay_pipe;
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__7__KET____DOT__genblk1__DOT__delay_pipe = 0;
    QData/*63:0*/ __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__8__KET____DOT__genblk1__DOT__delay_pipe;
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__8__KET____DOT__genblk1__DOT__delay_pipe = 0;
    VlWide<3>/*71:0*/ __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe;
    VL_ZERO_W(72, __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe);
    VlWide<3>/*79:0*/ __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe;
    VL_ZERO_W(80, __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe);
    VlWide<3>/*87:0*/ __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe;
    VL_ZERO_W(88, __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe);
    VlWide<3>/*95:0*/ __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe;
    VL_ZERO_W(96, __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe);
    VlWide<4>/*103:0*/ __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe;
    VL_ZERO_W(104, __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe);
    VlWide<4>/*111:0*/ __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe;
    VL_ZERO_W(112, __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe);
    VlWide<4>/*119:0*/ __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe;
    VL_ZERO_W(120, __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe);
    // Body
    __Vdly__araddr = vlSelf->araddr;
    __Vdly__npu_system_top__DOT__u_dma__DOT__outstanding_cnt 
        = vlSelf->npu_system_top__DOT__u_dma__DOT__outstanding_cnt;
    __Vdly__npu_system_top__DOT__u_dma__DOT__resp_cnt 
        = vlSelf->npu_system_top__DOT__u_dma__DOT__resp_cnt;
    __Vdly__npu_system_top__DOT__u_dma__DOT__req_cnt 
        = vlSelf->npu_system_top__DOT__u_dma__DOT__req_cnt;
    __Vdly__npu_system_top__DOT__u_dma__DOT__busy = vlSelf->npu_system_top__DOT__u_dma__DOT__busy;
    vlSelf->__Vdly__npu_system_top__DOT__dma_sram_addr 
        = vlSelf->npu_system_top__DOT__dma_sram_addr;
    vlSelf->__Vdly__npu_system_top__DOT__npu_sram_raddr 
        = vlSelf->npu_system_top__DOT__npu_sram_raddr;
    __Vdly__npu_system_top__DOT__exec_cnt = vlSelf->npu_system_top__DOT__exec_cnt;
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__acc_clear_pipe 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_clear_pipe;
    vlSelf->__Vdly__npu_system_top__DOT__u_npu_core__DOT__acc_valid_pipe 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_valid_pipe;
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v0 = 0U;
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v1 = 0U;
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v2 = 0U;
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v3 = 0U;
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v4 = 0U;
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v5 = 0U;
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v6 = 0U;
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v7 = 0U;
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v8 = 0U;
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v9 = 0U;
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v10 = 0U;
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v11 = 0U;
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v12 = 0U;
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v13 = 0U;
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v14 = 0U;
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v15 = 0U;
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v16 = 0U;
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v17 = 0U;
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v18 = 0U;
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v19 = 0U;
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v20 = 0U;
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v21 = 0U;
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v22 = 0U;
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v23 = 0U;
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v24 = 0U;
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v25 = 0U;
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v26 = 0U;
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v27 = 0U;
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v28 = 0U;
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v29 = 0U;
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v30 = 0U;
    vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v31 = 0U;
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__8__KET____DOT__genblk1__DOT__delay_pipe 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__8__KET____DOT__genblk1__DOT__delay_pipe;
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__4__KET____DOT__genblk1__DOT__delay_pipe 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__4__KET____DOT__genblk1__DOT__delay_pipe;
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[0U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[1U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[2U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[3U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[0U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[1U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[2U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[3U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[0U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[1U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[2U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[3U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[0U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[1U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[2U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[0U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[1U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[2U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[0U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[1U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[2U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[0U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[1U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[2U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__7__KET____DOT__genblk1__DOT__delay_pipe 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__7__KET____DOT__genblk1__DOT__delay_pipe;
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__6__KET____DOT__genblk1__DOT__delay_pipe 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__6__KET____DOT__genblk1__DOT__delay_pipe;
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__5__KET____DOT__genblk1__DOT__delay_pipe 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__5__KET____DOT__genblk1__DOT__delay_pipe;
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__3__KET____DOT__genblk1__DOT__delay_pipe 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__3__KET____DOT__genblk1__DOT__delay_pipe;
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__11__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__11__KET____DOT__genblk1__DOT__deskew_pipe[0U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__11__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__11__KET____DOT__genblk1__DOT__deskew_pipe[1U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__11__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__11__KET____DOT__genblk1__DOT__deskew_pipe[2U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__11__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__11__KET____DOT__genblk1__DOT__deskew_pipe[3U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[0U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[1U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[2U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[3U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[4U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[5U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[6U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[7U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__12__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__12__KET____DOT__genblk1__DOT__deskew_pipe[0U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__12__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__12__KET____DOT__genblk1__DOT__deskew_pipe[1U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__12__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__12__KET____DOT__genblk1__DOT__deskew_pipe[2U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe[0U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe[1U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe[2U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe[3U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe[4U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[0U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[1U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[2U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[3U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[4U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[5U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[0U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[1U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[2U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[3U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[4U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[5U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[6U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[0U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[1U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[2U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[3U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[4U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[5U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[6U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[7U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[8U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[0U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[1U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[2U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[3U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[4U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[5U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[6U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[7U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[8U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[9U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[0U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[1U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[2U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[3U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[4U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[5U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[6U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[7U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[8U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[9U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[0xaU];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[0U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[1U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[2U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[3U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[4U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[5U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[6U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[7U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[8U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[9U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[0xaU];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[0xbU];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[0U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[1U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[2U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[3U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[4U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[5U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[6U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[7U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[8U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[9U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[0xaU];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[0xbU];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[0xcU];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[0U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[1U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[2U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[3U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[4U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[5U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[6U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[7U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[8U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[9U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[0xaU];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[0xbU];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[0xcU];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[0xdU];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[1U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[2U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[3U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[4U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[5U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[6U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[7U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[8U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[9U];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0xaU];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0xbU];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0xcU];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0xdU];
    __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0xeU];
    vlSelf->arvalid = ((IData)(vlSelf->rst_n) && ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelf->mmio_start_dma) 
                                                       & (~ (IData)(vlSelf->npu_system_top__DOT__u_dma__DOT__busy))))) 
                                                  && ((IData)(vlSelf->npu_system_top__DOT__u_dma__DOT__busy) 
                                                      && (((IData)(vlSelf->arvalid) 
                                                           & (~ (IData)(vlSelf->arready))) 
                                                          || (((0xffffU 
                                                                & ((IData)(vlSelf->npu_system_top__DOT__u_dma__DOT__req_cnt) 
                                                                   + (IData)(vlSelf->npu_system_top__DOT__u_dma__DOT__ar_fire))) 
                                                               < (IData)(vlSelf->mmio_total_bursts)) 
                                                              & (8U 
                                                                 > 
                                                                 (0xffU 
                                                                  & (((IData)(vlSelf->npu_system_top__DOT__u_dma__DOT__outstanding_cnt) 
                                                                      + (IData)(vlSelf->npu_system_top__DOT__u_dma__DOT__ar_fire)) 
                                                                     - (IData)(vlSelf->npu_system_top__DOT__u_dma__DOT__r_last_fire)))))))));
    if (vlSelf->rst_n) {
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 0xfU;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 0xeU;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 0xdU;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 0xcU;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 0xbU;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 0xaU;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 9U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 8U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 7U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 6U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__10__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 5U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__11__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 4U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__12__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 3U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__13__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 2U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__14__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 1U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__1__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 1U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__2__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 2U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__3__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 3U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__4__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 4U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__5__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 5U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__6__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 6U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__7__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 7U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__8__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 8U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 9U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 0xaU;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 0xbU;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 0xcU;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 0xdU;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 0xeU;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__unnamedblk1__DOT__k = 0xfU;
        if (((IData)(vlSelf->mmio_start_dma) & (~ (IData)(vlSelf->npu_system_top__DOT__u_dma__DOT__busy)))) {
            __Vdly__araddr = vlSelf->mmio_src_addr;
            vlSelf->__Vdly__npu_system_top__DOT__dma_sram_addr = 0U;
        } else {
            if (vlSelf->npu_system_top__DOT__u_dma__DOT__busy) {
                if (vlSelf->npu_system_top__DOT__u_dma__DOT__ar_fire) {
                    __Vdly__araddr = (vlSelf->araddr 
                                      + VL_SHIFTL_QQI(64,64,32, 
                                                      (1ULL 
                                                       + (QData)((IData)(vlSelf->mmio_burst_len))), 4U));
                }
            }
            if (vlSelf->npu_system_top__DOT__dma_sram_wen) {
                vlSelf->__Vdly__npu_system_top__DOT__dma_sram_addr 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->npu_system_top__DOT__dma_sram_addr)));
            }
        }
        if ((1U & (~ ((IData)(vlSelf->npu_system_top__DOT__state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->npu_system_top__DOT__state))) {
                if ((1U & (IData)(vlSelf->npu_system_top__DOT__state))) {
                    vlSelf->__Vdly__npu_system_top__DOT__npu_sram_raddr 
                        = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->npu_system_top__DOT__npu_sram_raddr)));
                    __Vdly__npu_system_top__DOT__exec_cnt 
                        = (0xffffU & ((IData)(1U) + (IData)(vlSelf->npu_system_top__DOT__exec_cnt)));
                }
                if ((1U & (~ (IData)(vlSelf->npu_system_top__DOT__state)))) {
                    vlSelf->npu_system_top__DOT__wait_cnt 
                        = (3U & ((IData)(1U) + (IData)(vlSelf->npu_system_top__DOT__wait_cnt)));
                }
            } else {
                if ((1U & (IData)(vlSelf->npu_system_top__DOT__state))) {
                    vlSelf->__Vdly__npu_system_top__DOT__npu_sram_raddr 
                        = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->npu_system_top__DOT__npu_sram_raddr)));
                    __Vdly__npu_system_top__DOT__exec_cnt 
                        = (0xffffU & ((IData)(1U) + (IData)(vlSelf->npu_system_top__DOT__exec_cnt)));
                } else if (vlSelf->mmio_start_npu) {
                    vlSelf->__Vdly__npu_system_top__DOT__npu_sram_raddr 
                        = (0x3ffU & 1U);
                    __Vdly__npu_system_top__DOT__exec_cnt 
                        = (0xffffU & 1U);
                } else {
                    vlSelf->__Vdly__npu_system_top__DOT__npu_sram_raddr 
                        = (0x3ffU & 0U);
                    __Vdly__npu_system_top__DOT__exec_cnt 
                        = (0xffffU & 0U);
                }
                if ((1U & (~ (IData)(vlSelf->npu_system_top__DOT__state)))) {
                    vlSelf->npu_system_top__DOT__wait_cnt = 0U;
                }
            }
        }
        if ((4U & (IData)(vlSelf->npu_system_top__DOT__state))) {
            if ((1U & (~ ((IData)(vlSelf->npu_system_top__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->npu_system_top__DOT__state)))) {
                    vlSelf->npu_system_top__DOT__flush_cnt 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelf->npu_system_top__DOT__flush_cnt)));
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->npu_system_top__DOT__state) 
                             >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->npu_system_top__DOT__state)))) {
                vlSelf->npu_system_top__DOT__flush_cnt = 0U;
            }
        }
    } else {
        __Vdly__araddr = 0ULL;
        vlSelf->__Vdly__npu_system_top__DOT__dma_sram_addr = 0U;
        vlSelf->__Vdly__npu_system_top__DOT__npu_sram_raddr = 0U;
        vlSelf->npu_system_top__DOT__wait_cnt = 0U;
        vlSelf->npu_system_top__DOT__flush_cnt = 0U;
        __Vdly__npu_system_top__DOT__exec_cnt = 0U;
    }
    if (vlSelf->rst_n) {
        vlSelf->__Vdly__npu_system_top__DOT__u_npu_core__DOT__acc_valid_pipe 
            = ((0x7ffffffeU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_valid_pipe 
                               << 1U)) | (IData)(vlSelf->npu_system_top__DOT__npu_valid_q));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__acc_clear_pipe 
            = ((0x7ffffffeU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_clear_pipe 
                               << 1U)) | ((IData)(vlSelf->mmio_npu_acc_clear) 
                                          & ((~ (IData)(vlSelf->mmio_test_one_shot_acc_clear_en)) 
                                             | (IData)(vlSelf->npu_system_top__DOT__one_shot_acc_clear_pending))));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__unnamedblk2__DOT__i = 0x1fU;
        vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v0 
            = vlSelf->npu_system_top__DOT__npu_acc_addr_q;
        vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v0 = 1U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
            [0U];
        vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v1 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0;
        vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v1 = 1U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
            [1U];
        vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v2 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0;
        vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v2 = 1U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
            [2U];
        vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v3 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0;
        vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v3 = 1U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
            [3U];
        vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v4 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0;
        vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v4 = 1U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
            [4U];
        vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v5 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0;
        vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v5 = 1U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
            [5U];
        vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v6 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0;
        vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v6 = 1U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
            [6U];
        vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v7 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0;
        vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v7 = 1U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
            [7U];
        vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v8 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0;
        vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v8 = 1U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
            [8U];
        vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v9 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0;
        vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v9 = 1U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
            [9U];
        vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v10 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0;
        vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v10 = 1U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
            [0xaU];
        vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v11 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0;
        vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v11 = 1U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
            [0xbU];
        vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v12 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0;
        vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v12 = 1U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
            [0xcU];
        vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v13 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0;
        vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v13 = 1U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
            [0xdU];
        vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v14 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0;
        vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v14 = 1U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
            [0xeU];
        vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v15 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0;
        vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v15 = 1U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
            [0xfU];
        vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v16 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0;
        vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v16 = 1U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
            [0x10U];
        vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v17 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0;
        vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v17 = 1U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
            [0x11U];
        vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v18 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0;
        vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v18 = 1U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
            [0x12U];
        vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v19 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0;
        vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v19 = 1U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
            [0x13U];
        vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v20 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0;
        vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v20 = 1U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
            [0x14U];
        vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v21 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0;
        vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v21 = 1U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
            [0x15U];
        vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v22 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0;
        vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v22 = 1U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
            [0x16U];
        vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v23 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0;
        vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v23 = 1U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
            [0x17U];
        vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v24 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0;
        vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v24 = 1U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
            [0x18U];
        vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v25 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0;
        vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v25 = 1U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
            [0x19U];
        vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v26 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0;
        vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v26 = 1U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
            [0x1aU];
        vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v27 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0;
        vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v27 = 1U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
            [0x1bU];
        vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v28 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0;
        vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v28 = 1U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
            [0x1cU];
        vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v29 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0;
        vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v29 = 1U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
            [0x1dU];
        vlSelf->__Vdlyvval__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v30 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT____Vlvbound_h8abf1851__0;
        vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v30 = 1U;
        if (VL_UNLIKELY((0x40000000U & vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_valid_pipe))) {
            VL_WRITEF("[SCB_PASS] [NPU CORE] Bottom Valid Output: Addr=%0#, Data0=%0#, Data15=%0#\n",
                      9,vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe
                      [0x1eU],32,vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_psum_bottom[0U],
                      32,vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_psum_bottom[0xfU]);
        }
    } else {
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__acc_clear_pipe = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__unnamedblk1__DOT__i = 0x1fU;
        vlSelf->__Vdly__npu_system_top__DOT__u_npu_core__DOT__acc_valid_pipe = 0U;
        vlSelf->__Vdlyvset__npu_system_top__DOT__u_npu_core__DOT__acc_addr_pipe__v31 = 1U;
    }
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_clear_q 
        = ((IData)(vlSelf->rst_n) && (1U & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_clear_pipe 
                                            >> 0x1eU)));
    vlSelf->araddr = __Vdly__araddr;
    vlSelf->npu_system_top__DOT__exec_cnt = __Vdly__npu_system_top__DOT__exec_cnt;
    if (vlSelf->rst_n) {
        if (vlSelf->mmio_swap_banks) {
            vlSelf->npu_system_top__DOT__bank_sel = 
                (1U & (~ (IData)(vlSelf->npu_system_top__DOT__bank_sel)));
        }
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__8__KET____DOT__genblk1__DOT__delay_pipe 
            = ((0xffffffffff000000ULL & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__8__KET____DOT__genblk1__DOT__delay_pipe) 
               | (IData)((IData)(((0xff0000U & ((IData)(
                                                        (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__8__KET____DOT__genblk1__DOT__delay_pipe 
                                                         >> 8U)) 
                                                << 0x10U)) 
                                  | ((0xff00U & ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__8__KET____DOT__genblk1__DOT__delay_pipe) 
                                                 << 8U)) 
                                     | (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_act_in[2U]))))));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__8__KET____DOT__genblk1__DOT__delay_pipe 
            = ((0xffffffULL & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__8__KET____DOT__genblk1__DOT__delay_pipe) 
               | (0xffffffffff000000ULL & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__8__KET____DOT__genblk1__DOT__delay_pipe 
                                           << 8U)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__8__KET____DOT__genblk1__DOT__delay_pipe 
            = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__8__KET____DOT__genblk1__DOT__delay_pipe;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__4__KET____DOT__genblk1__DOT__delay_pipe 
            = ((0xff000000U & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__4__KET____DOT__genblk1__DOT__delay_pipe) 
               | ((0xff0000U & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__4__KET____DOT__genblk1__DOT__delay_pipe 
                                << 8U)) | ((0xff00U 
                                            & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__4__KET____DOT__genblk1__DOT__delay_pipe 
                                               << 8U)) 
                                           | (0xffU 
                                              & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_act_in[1U]))));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__4__KET____DOT__genblk1__DOT__delay_pipe 
            = ((0xffffffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__4__KET____DOT__genblk1__DOT__delay_pipe) 
               | (0xff000000U & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__4__KET____DOT__genblk1__DOT__delay_pipe 
                                 << 8U)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__4__KET____DOT__genblk1__DOT__delay_pipe 
            = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__4__KET____DOT__genblk1__DOT__delay_pipe;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__2__KET____DOT__genblk1__DOT__delay_pipe 
            = ((0xff00U & ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__2__KET____DOT__genblk1__DOT__delay_pipe) 
                           << 8U)) | (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_act_in[0U] 
                                               >> 0x10U)));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[0U] 
            = ((0xffffff00U & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[0U]) 
               | (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_act_in[3U] 
                  >> 0x18U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h24e6ce08__0 
            = (0xffU & vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[0U]);
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[0U] 
            = ((0xffff00ffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[0U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h24e6ce08__0) 
                  << 8U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h24e6ce08__0 
            = (0xffU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[0U] 
                        >> 8U));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[0U] 
            = ((0xff00ffffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[0U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h24e6ce08__0) 
                  << 0x10U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h24e6ce08__0 
            = (0xffU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[0U] 
                        >> 0x10U));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[0U] 
            = ((0xffffffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[0U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h24e6ce08__0) 
                  << 0x18U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h24e6ce08__0 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[0U] 
               >> 0x18U);
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[1U] 
            = ((0xffffff00U & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[1U]) 
               | (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h24e6ce08__0));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h24e6ce08__0 
            = (0xffU & vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[1U]);
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[1U] 
            = ((0xffff00ffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[1U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h24e6ce08__0) 
                  << 8U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h24e6ce08__0 
            = (0xffU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[1U] 
                        >> 8U));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[1U] 
            = ((0xff00ffffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[1U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h24e6ce08__0) 
                  << 0x10U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h24e6ce08__0 
            = (0xffU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[1U] 
                        >> 0x10U));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[1U] 
            = ((0xffffffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[1U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h24e6ce08__0) 
                  << 0x18U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h24e6ce08__0 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[1U] 
               >> 0x18U);
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[2U] 
            = ((0xffffff00U & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[2U]) 
               | (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h24e6ce08__0));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h24e6ce08__0 
            = (0xffU & vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[2U]);
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[2U] 
            = ((0xffff00ffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[2U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h24e6ce08__0) 
                  << 8U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h24e6ce08__0 
            = (0xffU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[2U] 
                        >> 8U));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[2U] 
            = ((0xff00ffffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[2U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h24e6ce08__0) 
                  << 0x10U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h24e6ce08__0 
            = (0xffU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[2U] 
                        >> 0x10U));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[2U] 
            = ((0xffffffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[2U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h24e6ce08__0) 
                  << 0x18U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h24e6ce08__0 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[2U] 
               >> 0x18U);
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[3U] 
            = ((0xffff00U & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[3U]) 
               | (0xffffffU & (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h24e6ce08__0)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h24e6ce08__0 
            = (0xffU & vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[3U]);
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[3U] 
            = ((0xff00ffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[3U]) 
               | (0xffffffU & ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h24e6ce08__0) 
                               << 8U)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h24e6ce08__0 
            = (0xffU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[3U] 
                        >> 8U));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[3U] 
            = ((0xffffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[3U]) 
               | (0xffffffU & ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h24e6ce08__0) 
                               << 0x10U)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[0U] 
            = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[0U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[1U] 
            = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[1U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[2U] 
            = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[2U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[3U] 
            = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[3U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[0U] 
            = ((0xffffff00U & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[0U]) 
               | (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_act_in[3U] 
                           >> 0x10U)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hed9ea05b__0 
            = (0xffU & vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[0U]);
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[0U] 
            = ((0xffff00ffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[0U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hed9ea05b__0) 
                  << 8U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hed9ea05b__0 
            = (0xffU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[0U] 
                        >> 8U));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[0U] 
            = ((0xff00ffffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[0U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hed9ea05b__0) 
                  << 0x10U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hed9ea05b__0 
            = (0xffU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[0U] 
                        >> 0x10U));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[0U] 
            = ((0xffffffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[0U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hed9ea05b__0) 
                  << 0x18U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hed9ea05b__0 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[0U] 
               >> 0x18U);
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[1U] 
            = ((0xffffff00U & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[1U]) 
               | (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hed9ea05b__0));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hed9ea05b__0 
            = (0xffU & vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[1U]);
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[1U] 
            = ((0xffff00ffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[1U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hed9ea05b__0) 
                  << 8U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hed9ea05b__0 
            = (0xffU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[1U] 
                        >> 8U));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[1U] 
            = ((0xff00ffffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[1U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hed9ea05b__0) 
                  << 0x10U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hed9ea05b__0 
            = (0xffU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[1U] 
                        >> 0x10U));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[1U] 
            = ((0xffffffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[1U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hed9ea05b__0) 
                  << 0x18U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hed9ea05b__0 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[1U] 
               >> 0x18U);
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[2U] 
            = ((0xffffff00U & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[2U]) 
               | (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hed9ea05b__0));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hed9ea05b__0 
            = (0xffU & vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[2U]);
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[2U] 
            = ((0xffff00ffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[2U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hed9ea05b__0) 
                  << 8U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hed9ea05b__0 
            = (0xffU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[2U] 
                        >> 8U));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[2U] 
            = ((0xff00ffffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[2U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hed9ea05b__0) 
                  << 0x10U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hed9ea05b__0 
            = (0xffU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[2U] 
                        >> 0x10U));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[2U] 
            = ((0xffffffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[2U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hed9ea05b__0) 
                  << 0x18U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hed9ea05b__0 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[2U] 
               >> 0x18U);
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[3U] 
            = ((0xff00U & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[3U]) 
               | (0xffffU & (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hed9ea05b__0)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hed9ea05b__0 
            = (0xffU & vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[3U]);
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[3U] 
            = ((0xffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[3U]) 
               | (0xffffU & ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hed9ea05b__0) 
                             << 8U)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[0U] 
            = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[0U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[1U] 
            = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[1U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[2U] 
            = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[2U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[3U] 
            = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[3U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[0U] 
            = ((0xffffff00U & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[0U]) 
               | (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_act_in[3U] 
                           >> 8U)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h721aabf7__0 
            = (0xffU & vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[0U]);
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[0U] 
            = ((0xffff00ffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[0U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h721aabf7__0) 
                  << 8U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h721aabf7__0 
            = (0xffU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[0U] 
                        >> 8U));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[0U] 
            = ((0xff00ffffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[0U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h721aabf7__0) 
                  << 0x10U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h721aabf7__0 
            = (0xffU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[0U] 
                        >> 0x10U));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[0U] 
            = ((0xffffffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[0U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h721aabf7__0) 
                  << 0x18U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h721aabf7__0 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[0U] 
               >> 0x18U);
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[1U] 
            = ((0xffffff00U & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[1U]) 
               | (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h721aabf7__0));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h721aabf7__0 
            = (0xffU & vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[1U]);
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[1U] 
            = ((0xffff00ffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[1U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h721aabf7__0) 
                  << 8U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h721aabf7__0 
            = (0xffU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[1U] 
                        >> 8U));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[1U] 
            = ((0xff00ffffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[1U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h721aabf7__0) 
                  << 0x10U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h721aabf7__0 
            = (0xffU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[1U] 
                        >> 0x10U));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[1U] 
            = ((0xffffffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[1U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h721aabf7__0) 
                  << 0x18U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h721aabf7__0 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[1U] 
               >> 0x18U);
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[2U] 
            = ((0xffffff00U & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[2U]) 
               | (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h721aabf7__0));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h721aabf7__0 
            = (0xffU & vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[2U]);
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[2U] 
            = ((0xffff00ffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[2U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h721aabf7__0) 
                  << 8U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h721aabf7__0 
            = (0xffU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[2U] 
                        >> 8U));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[2U] 
            = ((0xff00ffffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[2U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h721aabf7__0) 
                  << 0x10U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h721aabf7__0 
            = (0xffU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[2U] 
                        >> 0x10U));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[2U] 
            = ((0xffffffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[2U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h721aabf7__0) 
                  << 0x18U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h721aabf7__0 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[2U] 
               >> 0x18U);
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[3U] 
            = (0xffU & (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h721aabf7__0));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[0U] 
            = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[0U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[1U] 
            = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[1U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[2U] 
            = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[2U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[3U] 
            = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[3U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[0U] 
            = ((0xffffff00U & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[0U]) 
               | (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_act_in[3U]));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h477e8f1d__0 
            = (0xffU & vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[0U]);
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[0U] 
            = ((0xffff00ffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[0U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h477e8f1d__0) 
                  << 8U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h477e8f1d__0 
            = (0xffU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[0U] 
                        >> 8U));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[0U] 
            = ((0xff00ffffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[0U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h477e8f1d__0) 
                  << 0x10U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h477e8f1d__0 
            = (0xffU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[0U] 
                        >> 0x10U));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[0U] 
            = ((0xffffffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[0U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h477e8f1d__0) 
                  << 0x18U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h477e8f1d__0 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[0U] 
               >> 0x18U);
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[1U] 
            = ((0xffffff00U & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[1U]) 
               | (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h477e8f1d__0));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h477e8f1d__0 
            = (0xffU & vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[1U]);
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[1U] 
            = ((0xffff00ffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[1U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h477e8f1d__0) 
                  << 8U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h477e8f1d__0 
            = (0xffU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[1U] 
                        >> 8U));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[1U] 
            = ((0xff00ffffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[1U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h477e8f1d__0) 
                  << 0x10U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h477e8f1d__0 
            = (0xffU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[1U] 
                        >> 0x10U));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[1U] 
            = ((0xffffffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[1U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h477e8f1d__0) 
                  << 0x18U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h477e8f1d__0 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[1U] 
               >> 0x18U);
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[2U] 
            = ((0xffffff00U & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[2U]) 
               | (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h477e8f1d__0));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h477e8f1d__0 
            = (0xffU & vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[2U]);
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[2U] 
            = ((0xffff00ffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[2U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h477e8f1d__0) 
                  << 8U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h477e8f1d__0 
            = (0xffU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[2U] 
                        >> 8U));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[2U] 
            = ((0xff00ffffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[2U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h477e8f1d__0) 
                  << 0x10U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h477e8f1d__0 
            = (0xffU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[2U] 
                        >> 0x10U));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[2U] 
            = ((0xffffffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[2U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h477e8f1d__0) 
                  << 0x18U));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[0U] 
            = ((0xffffff00U & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[0U]) 
               | (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_act_in[2U] 
                  >> 0x18U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_he720a66f__0 
            = (0xffU & vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[0U]);
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[0U] 
            = ((0xffff00ffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[0U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_he720a66f__0) 
                  << 8U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_he720a66f__0 
            = (0xffU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[0U] 
                        >> 8U));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[0U] 
            = ((0xff00ffffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[0U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_he720a66f__0) 
                  << 0x10U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_he720a66f__0 
            = (0xffU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[0U] 
                        >> 0x10U));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[0U] 
            = ((0xffffffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[0U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_he720a66f__0) 
                  << 0x18U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_he720a66f__0 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[0U] 
               >> 0x18U);
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[1U] 
            = ((0xffffff00U & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[1U]) 
               | (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_he720a66f__0));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_he720a66f__0 
            = (0xffU & vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[1U]);
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[1U] 
            = ((0xffff00ffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[1U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_he720a66f__0) 
                  << 8U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_he720a66f__0 
            = (0xffU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[1U] 
                        >> 8U));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[1U] 
            = ((0xff00ffffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[1U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_he720a66f__0) 
                  << 0x10U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_he720a66f__0 
            = (0xffU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[1U] 
                        >> 0x10U));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[1U] 
            = ((0xffffffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[1U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_he720a66f__0) 
                  << 0x18U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_he720a66f__0 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[1U] 
               >> 0x18U);
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[2U] 
            = ((0xffff00U & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[2U]) 
               | (0xffffffU & (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_he720a66f__0)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_he720a66f__0 
            = (0xffU & vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[2U]);
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[2U] 
            = ((0xff00ffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[2U]) 
               | (0xffffffU & ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_he720a66f__0) 
                               << 8U)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_he720a66f__0 
            = (0xffU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[2U] 
                        >> 8U));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[2U] 
            = ((0xffffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[2U]) 
               | (0xffffffU & ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_he720a66f__0) 
                               << 0x10U)));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[0U] 
            = ((0xffffff00U & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[0U]) 
               | (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_act_in[2U] 
                           >> 0x10U)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hb908c511__0 
            = (0xffU & vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[0U]);
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[0U] 
            = ((0xffff00ffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[0U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hb908c511__0) 
                  << 8U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hb908c511__0 
            = (0xffU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[0U] 
                        >> 8U));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[0U] 
            = ((0xff00ffffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[0U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hb908c511__0) 
                  << 0x10U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hb908c511__0 
            = (0xffU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[0U] 
                        >> 0x10U));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[0U] 
            = ((0xffffffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[0U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hb908c511__0) 
                  << 0x18U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hb908c511__0 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[0U] 
               >> 0x18U);
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[1U] 
            = ((0xffffff00U & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[1U]) 
               | (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hb908c511__0));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hb908c511__0 
            = (0xffU & vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[1U]);
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[1U] 
            = ((0xffff00ffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[1U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hb908c511__0) 
                  << 8U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hb908c511__0 
            = (0xffU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[1U] 
                        >> 8U));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[1U] 
            = ((0xff00ffffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[1U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hb908c511__0) 
                  << 0x10U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hb908c511__0 
            = (0xffU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[1U] 
                        >> 0x10U));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[1U] 
            = ((0xffffffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[1U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hb908c511__0) 
                  << 0x18U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hb908c511__0 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[1U] 
               >> 0x18U);
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[2U] 
            = ((0xff00U & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[2U]) 
               | (0xffffU & (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hb908c511__0)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hb908c511__0 
            = (0xffU & vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[2U]);
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[2U] 
            = ((0xffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[2U]) 
               | (0xffffU & ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hb908c511__0) 
                             << 8U)));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[0U] 
            = ((0xffffff00U & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[0U]) 
               | (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_act_in[2U] 
                           >> 8U)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hb8848007__0 
            = (0xffU & vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[0U]);
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[0U] 
            = ((0xffff00ffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[0U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hb8848007__0) 
                  << 8U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hb8848007__0 
            = (0xffU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[0U] 
                        >> 8U));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[0U] 
            = ((0xff00ffffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[0U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hb8848007__0) 
                  << 0x10U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hb8848007__0 
            = (0xffU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[0U] 
                        >> 0x10U));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[0U] 
            = ((0xffffffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[0U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hb8848007__0) 
                  << 0x18U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hb8848007__0 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[0U] 
               >> 0x18U);
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[1U] 
            = ((0xffffff00U & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[1U]) 
               | (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hb8848007__0));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hb8848007__0 
            = (0xffU & vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[1U]);
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[1U] 
            = ((0xffff00ffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[1U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hb8848007__0) 
                  << 8U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hb8848007__0 
            = (0xffU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[1U] 
                        >> 8U));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[1U] 
            = ((0xff00ffffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[1U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hb8848007__0) 
                  << 0x10U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hb8848007__0 
            = (0xffU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[1U] 
                        >> 0x10U));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[1U] 
            = ((0xffffffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[1U]) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hb8848007__0) 
                  << 0x18U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hb8848007__0 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[1U] 
               >> 0x18U);
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[2U] 
            = (0xffU & (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hb8848007__0));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__7__KET____DOT__genblk1__DOT__delay_pipe 
            = ((0xffffffffffff00ULL & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__7__KET____DOT__genblk1__DOT__delay_pipe) 
               | (IData)((IData)((vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_act_in[1U] 
                                  >> 0x18U))));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_ha0c6234e__0 
            = (0xffU & (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__7__KET____DOT__genblk1__DOT__delay_pipe));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__7__KET____DOT__genblk1__DOT__delay_pipe 
            = ((0xffffffffff00ffULL & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__7__KET____DOT__genblk1__DOT__delay_pipe) 
               | ((QData)((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_ha0c6234e__0)) 
                  << 8U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_ha0c6234e__0 
            = (0xffU & (IData)((vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__7__KET____DOT__genblk1__DOT__delay_pipe 
                                >> 8U)));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__7__KET____DOT__genblk1__DOT__delay_pipe 
            = ((0xffffffff00ffffULL & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__7__KET____DOT__genblk1__DOT__delay_pipe) 
               | ((QData)((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_ha0c6234e__0)) 
                  << 0x10U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_ha0c6234e__0 
            = (0xffU & (IData)((vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__7__KET____DOT__genblk1__DOT__delay_pipe 
                                >> 0x10U)));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__7__KET____DOT__genblk1__DOT__delay_pipe 
            = ((0xffffff00ffffffULL & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__7__KET____DOT__genblk1__DOT__delay_pipe) 
               | ((QData)((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_ha0c6234e__0)) 
                  << 0x18U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_ha0c6234e__0 
            = (0xffU & (IData)((vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__7__KET____DOT__genblk1__DOT__delay_pipe 
                                >> 0x18U)));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__7__KET____DOT__genblk1__DOT__delay_pipe 
            = ((0xffff00ffffffffULL & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__7__KET____DOT__genblk1__DOT__delay_pipe) 
               | ((QData)((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_ha0c6234e__0)) 
                  << 0x20U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_ha0c6234e__0 
            = (0xffU & (IData)((vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__7__KET____DOT__genblk1__DOT__delay_pipe 
                                >> 0x20U)));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__7__KET____DOT__genblk1__DOT__delay_pipe 
            = ((0xff00ffffffffffULL & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__7__KET____DOT__genblk1__DOT__delay_pipe) 
               | ((QData)((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_ha0c6234e__0)) 
                  << 0x28U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_ha0c6234e__0 
            = (0xffU & (IData)((vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__7__KET____DOT__genblk1__DOT__delay_pipe 
                                >> 0x28U)));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__7__KET____DOT__genblk1__DOT__delay_pipe 
            = ((0xffffffffffffULL & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__7__KET____DOT__genblk1__DOT__delay_pipe) 
               | ((QData)((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_ha0c6234e__0)) 
                  << 0x30U));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__6__KET____DOT__genblk1__DOT__delay_pipe 
            = ((0xffffffffff00ULL & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__6__KET____DOT__genblk1__DOT__delay_pipe) 
               | (IData)((IData)((0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_act_in[1U] 
                                           >> 0x10U)))));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_he5aabb6d__0 
            = (0xffU & (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__6__KET____DOT__genblk1__DOT__delay_pipe));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__6__KET____DOT__genblk1__DOT__delay_pipe 
            = ((0xffffffff00ffULL & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__6__KET____DOT__genblk1__DOT__delay_pipe) 
               | ((QData)((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_he5aabb6d__0)) 
                  << 8U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_he5aabb6d__0 
            = (0xffU & (IData)((vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__6__KET____DOT__genblk1__DOT__delay_pipe 
                                >> 8U)));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__6__KET____DOT__genblk1__DOT__delay_pipe 
            = ((0xffffff00ffffULL & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__6__KET____DOT__genblk1__DOT__delay_pipe) 
               | ((QData)((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_he5aabb6d__0)) 
                  << 0x10U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_he5aabb6d__0 
            = (0xffU & (IData)((vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__6__KET____DOT__genblk1__DOT__delay_pipe 
                                >> 0x10U)));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__6__KET____DOT__genblk1__DOT__delay_pipe 
            = ((0xffff00ffffffULL & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__6__KET____DOT__genblk1__DOT__delay_pipe) 
               | ((QData)((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_he5aabb6d__0)) 
                  << 0x18U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_he5aabb6d__0 
            = (0xffU & (IData)((vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__6__KET____DOT__genblk1__DOT__delay_pipe 
                                >> 0x18U)));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__6__KET____DOT__genblk1__DOT__delay_pipe 
            = ((0xff00ffffffffULL & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__6__KET____DOT__genblk1__DOT__delay_pipe) 
               | ((QData)((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_he5aabb6d__0)) 
                  << 0x20U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_he5aabb6d__0 
            = (0xffU & (IData)((vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__6__KET____DOT__genblk1__DOT__delay_pipe 
                                >> 0x20U)));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__6__KET____DOT__genblk1__DOT__delay_pipe 
            = ((0xffffffffffULL & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__6__KET____DOT__genblk1__DOT__delay_pipe) 
               | ((QData)((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_he5aabb6d__0)) 
                  << 0x28U));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__5__KET____DOT__genblk1__DOT__delay_pipe 
            = ((0xffffffff00ULL & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__5__KET____DOT__genblk1__DOT__delay_pipe) 
               | (IData)((IData)((0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_act_in[1U] 
                                           >> 8U)))));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h918926b1__0 
            = (0xffU & (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__5__KET____DOT__genblk1__DOT__delay_pipe));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__5__KET____DOT__genblk1__DOT__delay_pipe 
            = ((0xffffff00ffULL & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__5__KET____DOT__genblk1__DOT__delay_pipe) 
               | ((QData)((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h918926b1__0)) 
                  << 8U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h918926b1__0 
            = (0xffU & (IData)((vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__5__KET____DOT__genblk1__DOT__delay_pipe 
                                >> 8U)));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__5__KET____DOT__genblk1__DOT__delay_pipe 
            = ((0xffff00ffffULL & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__5__KET____DOT__genblk1__DOT__delay_pipe) 
               | ((QData)((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h918926b1__0)) 
                  << 0x10U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h918926b1__0 
            = (0xffU & (IData)((vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__5__KET____DOT__genblk1__DOT__delay_pipe 
                                >> 0x10U)));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__5__KET____DOT__genblk1__DOT__delay_pipe 
            = ((0xff00ffffffULL & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__5__KET____DOT__genblk1__DOT__delay_pipe) 
               | ((QData)((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h918926b1__0)) 
                  << 0x18U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h918926b1__0 
            = (0xffU & (IData)((vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__5__KET____DOT__genblk1__DOT__delay_pipe 
                                >> 0x18U)));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__5__KET____DOT__genblk1__DOT__delay_pipe 
            = ((0xffffffffULL & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__5__KET____DOT__genblk1__DOT__delay_pipe) 
               | ((QData)((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h918926b1__0)) 
                  << 0x20U));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__3__KET____DOT__genblk1__DOT__delay_pipe 
            = ((0xffff00U & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__3__KET____DOT__genblk1__DOT__delay_pipe) 
               | (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_act_in[0U] 
                  >> 0x18U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h39a248db__0 
            = (0xffU & vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__3__KET____DOT__genblk1__DOT__delay_pipe);
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__3__KET____DOT__genblk1__DOT__delay_pipe 
            = ((0xff00ffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__3__KET____DOT__genblk1__DOT__delay_pipe) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h39a248db__0) 
                  << 8U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h39a248db__0 
            = (0xffU & (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__3__KET____DOT__genblk1__DOT__delay_pipe 
                        >> 8U));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__3__KET____DOT__genblk1__DOT__delay_pipe 
            = ((0xffffU & __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__3__KET____DOT__genblk1__DOT__delay_pipe) 
               | ((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h39a248db__0) 
                  << 0x10U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__13__KET____DOT__genblk1__DOT__deskew_pipe 
            = (((QData)((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__13__KET____DOT__genblk1__DOT__deskew_pipe)) 
                << 0x20U) | (QData)((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0x10U]
                                            [0xdU])));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__11__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
            = (IData)((((QData)((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__11__KET____DOT__genblk1__DOT__deskew_pipe[0U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0x10U]
                                                    [0xbU]))));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__11__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
            = (IData)(((((QData)((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__11__KET____DOT__genblk1__DOT__deskew_pipe[0U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0x10U]
                                                     [0xbU]))) 
                       >> 0x20U));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__11__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
            = (IData)((((QData)((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__11__KET____DOT__genblk1__DOT__deskew_pipe[2U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__11__KET____DOT__genblk1__DOT__deskew_pipe[1U]))));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__11__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
            = (IData)(((((QData)((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__11__KET____DOT__genblk1__DOT__deskew_pipe[2U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__11__KET____DOT__genblk1__DOT__deskew_pipe[1U]))) 
                       >> 0x20U));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
            = (IData)((((QData)((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[0U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0x10U]
                                                    [7U]))));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
            = (IData)(((((QData)((IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[0U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0x10U]
                                                     [7U]))) 
                       >> 0x20U));
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[1U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[2U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[3U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[4U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[6U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[5U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[7U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[6U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__12__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
            [0x10U][0xcU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h749d7e7a__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__12__KET____DOT__genblk1__DOT__deskew_pipe[0U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__12__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h749d7e7a__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h749d7e7a__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__12__KET____DOT__genblk1__DOT__deskew_pipe[1U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__12__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h749d7e7a__0;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
            [0x10U][0xaU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_hac606717__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe[0U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_hac606717__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_hac606717__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe[1U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_hac606717__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_hac606717__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe[2U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_hac606717__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_hac606717__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe[3U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_hac606717__0;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
            [0x10U][9U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h257ac4e1__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[0U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h257ac4e1__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h257ac4e1__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[1U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h257ac4e1__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h257ac4e1__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[2U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h257ac4e1__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h257ac4e1__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[3U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h257ac4e1__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h257ac4e1__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[4U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h257ac4e1__0;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
            [0x10U][8U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h2aacc719__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[0U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h2aacc719__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h2aacc719__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[1U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h2aacc719__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h2aacc719__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[2U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h2aacc719__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h2aacc719__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[3U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h2aacc719__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h2aacc719__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[4U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h2aacc719__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h2aacc719__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[5U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[6U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h2aacc719__0;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
            [0x10U][6U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_hfc36f713__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[0U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_hfc36f713__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_hfc36f713__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[1U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_hfc36f713__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_hfc36f713__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[2U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_hfc36f713__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_hfc36f713__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[3U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_hfc36f713__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_hfc36f713__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[4U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_hfc36f713__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_hfc36f713__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[5U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[6U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_hfc36f713__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_hfc36f713__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[6U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[7U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_hfc36f713__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_hfc36f713__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[7U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[8U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_hfc36f713__0;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
            [0x10U][5U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_ha97057eb__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[0U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_ha97057eb__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_ha97057eb__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[1U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_ha97057eb__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_ha97057eb__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[2U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_ha97057eb__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_ha97057eb__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[3U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_ha97057eb__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_ha97057eb__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[4U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_ha97057eb__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_ha97057eb__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[5U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[6U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_ha97057eb__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_ha97057eb__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[6U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[7U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_ha97057eb__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_ha97057eb__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[7U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[8U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_ha97057eb__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_ha97057eb__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[8U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[9U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_ha97057eb__0;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
            [0x10U][4U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h5f885b3c__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[0U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h5f885b3c__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h5f885b3c__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[1U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h5f885b3c__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h5f885b3c__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[2U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h5f885b3c__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h5f885b3c__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[3U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h5f885b3c__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h5f885b3c__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[4U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h5f885b3c__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h5f885b3c__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[5U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[6U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h5f885b3c__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h5f885b3c__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[6U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[7U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h5f885b3c__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h5f885b3c__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[7U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[8U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h5f885b3c__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h5f885b3c__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[8U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[9U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h5f885b3c__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h5f885b3c__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[9U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[0xaU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h5f885b3c__0;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
            [0x10U][3U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h32c66709__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[0U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h32c66709__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h32c66709__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[1U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h32c66709__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h32c66709__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[2U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h32c66709__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h32c66709__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[3U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h32c66709__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h32c66709__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[4U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h32c66709__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h32c66709__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[5U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[6U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h32c66709__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h32c66709__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[6U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[7U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h32c66709__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h32c66709__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[7U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[8U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h32c66709__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h32c66709__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[8U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[9U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h32c66709__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h32c66709__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[9U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[0xaU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h32c66709__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h32c66709__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[0xaU];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[0xbU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h32c66709__0;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
            [0x10U][2U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h9710a7a1__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[0U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h9710a7a1__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h9710a7a1__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[1U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h9710a7a1__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h9710a7a1__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[2U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h9710a7a1__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h9710a7a1__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[3U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h9710a7a1__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h9710a7a1__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[4U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h9710a7a1__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h9710a7a1__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[5U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[6U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h9710a7a1__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h9710a7a1__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[6U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[7U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h9710a7a1__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h9710a7a1__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[7U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[8U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h9710a7a1__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h9710a7a1__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[8U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[9U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h9710a7a1__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h9710a7a1__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[9U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[0xaU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h9710a7a1__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h9710a7a1__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[0xaU];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[0xbU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h9710a7a1__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h9710a7a1__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[0xbU];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[0xcU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h9710a7a1__0;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
            [0x10U][1U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_heb5556dc__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[0U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_heb5556dc__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_heb5556dc__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[1U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_heb5556dc__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_heb5556dc__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[2U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_heb5556dc__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_heb5556dc__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[3U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_heb5556dc__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_heb5556dc__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[4U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_heb5556dc__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_heb5556dc__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[5U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[6U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_heb5556dc__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_heb5556dc__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[6U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[7U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_heb5556dc__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_heb5556dc__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[7U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[8U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_heb5556dc__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_heb5556dc__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[8U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[9U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_heb5556dc__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_heb5556dc__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[9U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[0xaU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_heb5556dc__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_heb5556dc__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[0xaU];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[0xbU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_heb5556dc__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_heb5556dc__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[0xbU];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[0xcU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_heb5556dc__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_heb5556dc__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[0xcU];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[0xdU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_heb5556dc__0;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
            [0x10U][0U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h0fccfa19__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h0fccfa19__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h0fccfa19__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[1U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h0fccfa19__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h0fccfa19__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[2U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h0fccfa19__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h0fccfa19__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[3U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h0fccfa19__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h0fccfa19__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[4U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h0fccfa19__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h0fccfa19__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[5U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[6U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h0fccfa19__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h0fccfa19__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[6U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[7U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h0fccfa19__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h0fccfa19__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[7U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[8U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h0fccfa19__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h0fccfa19__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[8U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[9U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h0fccfa19__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h0fccfa19__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[9U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0xaU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h0fccfa19__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h0fccfa19__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0xaU];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0xbU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h0fccfa19__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h0fccfa19__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0xbU];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0xcU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h0fccfa19__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h0fccfa19__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0xcU];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0xdU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h0fccfa19__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h0fccfa19__0 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0xdU];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0xeU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vlvbound_h0fccfa19__0;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[0U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_psum_bottom[0U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[1U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_psum_bottom[1U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[2U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_psum_bottom[2U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[3U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_psum_bottom[3U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[4U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_psum_bottom[4U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[5U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_psum_bottom[5U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[6U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_psum_bottom[6U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[7U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_psum_bottom[7U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[8U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_psum_bottom[8U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[9U] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_psum_bottom[9U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[0xaU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_psum_bottom[0xaU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[0xbU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_psum_bottom[0xbU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[0xcU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_psum_bottom[0xcU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[0xdU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_psum_bottom[0xdU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[0xeU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_psum_bottom[0xeU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[0xfU] 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__array_psum_bottom[0xfU];
        vlSelf->mmio_dma_done = 0U;
        if (((IData)(vlSelf->mmio_start_dma) & (~ (IData)(vlSelf->npu_system_top__DOT__u_dma__DOT__busy)))) {
            __Vdly__npu_system_top__DOT__u_dma__DOT__busy = 1U;
            __Vdly__npu_system_top__DOT__u_dma__DOT__req_cnt = 0U;
            __Vdly__npu_system_top__DOT__u_dma__DOT__resp_cnt = 0U;
            __Vdly__npu_system_top__DOT__u_dma__DOT__outstanding_cnt = 0U;
        } else if (vlSelf->npu_system_top__DOT__u_dma__DOT__busy) {
            __Vdly__npu_system_top__DOT__u_dma__DOT__outstanding_cnt 
                = (0xffU & (((IData)(vlSelf->npu_system_top__DOT__u_dma__DOT__outstanding_cnt) 
                             + (IData)(vlSelf->npu_system_top__DOT__u_dma__DOT__ar_fire)) 
                            - (IData)(vlSelf->npu_system_top__DOT__u_dma__DOT__r_last_fire)));
            if (vlSelf->npu_system_top__DOT__u_dma__DOT__ar_fire) {
                __Vdly__npu_system_top__DOT__u_dma__DOT__req_cnt 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelf->npu_system_top__DOT__u_dma__DOT__req_cnt)));
            }
            if (vlSelf->npu_system_top__DOT__u_dma__DOT__r_last_fire) {
                __Vdly__npu_system_top__DOT__u_dma__DOT__resp_cnt 
                    = (0xffffU & ((IData)(1U) + (IData)(vlSelf->npu_system_top__DOT__u_dma__DOT__resp_cnt)));
                if (((0xffffU & ((IData)(1U) + (IData)(vlSelf->npu_system_top__DOT__u_dma__DOT__resp_cnt))) 
                     == (IData)(vlSelf->mmio_total_bursts))) {
                    __Vdly__npu_system_top__DOT__u_dma__DOT__busy = 0U;
                    vlSelf->mmio_dma_done = 1U;
                }
            }
        }
        if ((4U & (IData)(vlSelf->npu_system_top__DOT__state))) {
            if ((1U & (~ ((IData)(vlSelf->npu_system_top__DOT__state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->npu_system_top__DOT__state))) {
                    vlSelf->mmio_npu_done = 1U;
                    if (vlSelf->mmio_clear_done) {
                        vlSelf->mmio_npu_done = 0U;
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->npu_system_top__DOT__state) 
                             >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->npu_system_top__DOT__state)))) {
                vlSelf->mmio_npu_done = 0U;
            }
        }
        if (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__drain_re_q) {
            vlSelf->psum_drain_out[0U] = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[0U];
            vlSelf->psum_drain_out[1U] = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[1U];
            vlSelf->psum_drain_out[2U] = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[2U];
            vlSelf->psum_drain_out[3U] = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[3U];
            vlSelf->psum_drain_out[4U] = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[4U];
            vlSelf->psum_drain_out[5U] = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[5U];
            vlSelf->psum_drain_out[6U] = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[6U];
            vlSelf->psum_drain_out[7U] = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[7U];
            vlSelf->psum_drain_out[8U] = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[8U];
            vlSelf->psum_drain_out[9U] = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[9U];
            vlSelf->psum_drain_out[0xaU] = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[0xaU];
            vlSelf->psum_drain_out[0xbU] = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[0xbU];
            vlSelf->psum_drain_out[0xcU] = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[0xcU];
            vlSelf->psum_drain_out[0xdU] = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[0xdU];
            vlSelf->psum_drain_out[0xeU] = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[0xeU];
            vlSelf->psum_drain_out[0xfU] = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__bram_rd_data[0xfU];
        }
        if (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_valid_q) {
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_valid = 1U;
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[0U] 
                = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[0U];
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[1U] 
                = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[1U];
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[2U] 
                = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[2U];
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[3U] 
                = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[3U];
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[4U] 
                = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[4U];
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[5U] 
                = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[5U];
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[6U] 
                = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[6U];
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[7U] 
                = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[7U];
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[8U] 
                = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[8U];
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[9U] 
                = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[9U];
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[0xaU] 
                = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[0xaU];
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[0xbU] 
                = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[0xbU];
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[0xcU] 
                = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[0xcU];
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[0xdU] 
                = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[0xdU];
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[0xeU] 
                = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[0xeU];
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[0xfU] 
                = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_write_data[0xfU];
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_addr 
                = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_addr_q;
        } else {
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_valid = 0U;
        }
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__1__KET____DOT__genblk1__DOT__delay_pipe 
            = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_act_in[0U] 
                        >> 8U));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__14__KET____DOT__genblk1__DOT__deskew_pipe 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
            [0x10U][0xeU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xfU][0xfU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xfU][0xeU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xfU][0xdU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xfU][0xcU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xfU][0xbU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xfU][0xaU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xfU][9U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xfU][8U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xfU][7U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xfU][6U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xfU][5U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xfU][4U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xfU][3U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xfU][2U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xfU][1U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xfU][0U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xeU][0xfU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xeU][0xeU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xeU][0xdU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xeU][0xcU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xeU][0xbU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xeU][0xaU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xeU][9U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xeU][8U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xeU][7U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xeU][6U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xeU][5U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xeU][4U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xeU][3U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xeU][2U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xeU][1U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xeU][0U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xdU][0xfU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xdU][0xeU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xdU][0xdU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xdU][0xcU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xdU][0xbU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xdU][0xaU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xdU][9U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xdU][8U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xdU][7U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xdU][6U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xdU][5U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xdU][4U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xdU][3U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xdU][2U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xdU][1U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xdU][0U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xcU][0xfU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xcU][0xeU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xcU][0xdU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xcU][0xcU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xcU][0xbU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xcU][0xaU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xcU][9U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xcU][8U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xcU][7U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xcU][6U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xcU][5U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xcU][4U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xcU][3U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xcU][2U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xcU][1U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xcU][0U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xbU][0xfU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xbU][0xeU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xbU][0xdU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xbU][0xcU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xbU][0xbU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xbU][0xaU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xbU][9U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xbU][8U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xbU][7U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xbU][6U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xbU][5U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xbU][4U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xbU][3U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xbU][2U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xbU][1U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xbU][0U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xaU][0xfU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xaU][0xeU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xaU][0xdU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xaU][0xcU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xaU][0xbU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xaU][0xaU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xaU][9U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xaU][8U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xaU][7U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xaU][6U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xaU][5U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xaU][4U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xaU][3U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xaU][2U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xaU][1U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xaU][0U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [9U][0xfU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [9U][0xeU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [9U][0xdU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [9U][0xcU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [9U][0xbU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [9U][0xaU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [9U][9U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [9U][8U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [9U][7U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [9U][6U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [9U][5U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [9U][4U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [9U][3U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [9U][2U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [9U][1U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [9U][0U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [8U][0xfU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [8U][0xeU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [8U][0xdU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [8U][0xcU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [8U][0xbU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [8U][0xaU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [8U][9U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [8U][8U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [8U][7U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [8U][6U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [8U][5U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [8U][4U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [8U][3U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [8U][2U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [8U][1U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [8U][0U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [7U][0xfU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [7U][0xeU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [7U][0xdU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [7U][0xcU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [7U][0xbU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [7U][0xaU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [7U][9U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [7U][8U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [7U][7U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [7U][6U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [7U][5U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [7U][4U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [7U][3U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [7U][2U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [7U][1U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [7U][0U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [6U][0xfU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [6U][0xeU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [6U][0xdU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [6U][0xcU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [6U][0xbU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [6U][0xaU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [6U][9U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [6U][8U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [6U][7U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [6U][6U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [6U][5U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [6U][4U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [6U][3U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [6U][2U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [6U][1U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [6U][0U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [5U][0xfU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [5U][0xeU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [5U][0xdU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [5U][0xcU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [5U][0xbU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [5U][0xaU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [5U][9U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [5U][8U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [5U][7U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [5U][6U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [5U][5U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [5U][4U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [5U][3U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [5U][2U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [5U][1U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [5U][0U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [4U][0xfU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [4U][0xeU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [4U][0xdU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [4U][0xcU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [4U][0xbU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [4U][0xaU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [4U][9U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [4U][8U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [4U][7U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [4U][6U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [4U][5U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [4U][4U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [4U][3U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [4U][2U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [4U][1U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [4U][0U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [3U][0xfU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [3U][0xeU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [3U][0xdU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [3U][0xcU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [3U][0xbU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [3U][0xaU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [3U][9U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [3U][8U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [3U][7U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [3U][6U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [3U][5U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [3U][4U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [3U][3U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [3U][2U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [3U][1U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [3U][0U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [2U][0xfU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [2U][0xeU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [2U][0xdU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [2U][0xcU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [2U][0xbU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [2U][0xaU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [2U][9U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [2U][8U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [2U][7U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [2U][6U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [2U][5U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [2U][4U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [2U][3U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [2U][2U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [2U][1U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [2U][0U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [1U][0xfU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [1U][0xeU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [1U][0xdU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [1U][0xcU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [1U][0xbU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [1U][0xaU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [1U][9U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [1U][8U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [1U][7U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [1U][6U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [1U][5U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [1U][4U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [1U][3U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [1U][2U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [1U][1U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [1U][0U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0U][0xfU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0U][0xeU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0U][0xdU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0U][0xcU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0U][0xbU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0U][0xaU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0U][9U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0U][8U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0U][7U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0U][6U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0U][5U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0U][4U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0U][3U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0U][2U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0U][1U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out 
            = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0U][0U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xfU][0xfU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xfU][0xfU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xfU][0xeU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xfU][0xeU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xfU][0xdU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xfU][0xdU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xfU][0xcU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xfU][0xcU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xfU][0xbU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xfU][0xbU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xfU][0xaU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xfU][0xaU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xfU][9U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xfU][9U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xfU][8U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xfU][8U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xfU][7U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xfU][7U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xfU][6U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xfU][6U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xfU][5U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xfU][5U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xfU][4U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xfU][4U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xfU][3U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xfU][3U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xfU][2U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xfU][2U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xfU][1U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xfU][1U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xfU][0U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xfU][0U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xeU][0xfU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xeU][0xfU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xeU][0xeU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xeU][0xeU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xeU][0xdU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xeU][0xdU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xeU][0xcU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xeU][0xcU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xeU][0xbU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xeU][0xbU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xeU][0xaU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xeU][0xaU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xeU][9U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xeU][9U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xeU][8U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xeU][8U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xeU][7U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xeU][7U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xeU][6U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xeU][6U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xeU][5U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xeU][5U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xeU][4U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xeU][4U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xeU][3U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xeU][3U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xeU][2U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xeU][2U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xeU][1U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xeU][1U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xeU][0U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xeU][0U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xdU][0xfU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xdU][0xfU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xdU][0xeU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xdU][0xeU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xdU][0xdU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xdU][0xdU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xdU][0xcU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xdU][0xcU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xdU][0xbU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xdU][0xbU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xdU][0xaU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xdU][0xaU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xdU][9U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xdU][9U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xdU][8U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xdU][8U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xdU][7U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xdU][7U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xdU][6U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xdU][6U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xdU][5U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xdU][5U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xdU][4U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xdU][4U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xdU][3U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xdU][3U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xdU][2U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xdU][2U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xdU][1U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xdU][1U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xdU][0U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xdU][0U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xcU][0xfU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xcU][0xfU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xcU][0xeU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xcU][0xeU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xcU][0xdU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xcU][0xdU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xcU][0xcU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xcU][0xcU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xcU][0xbU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xcU][0xbU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xcU][0xaU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xcU][0xaU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xcU][9U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xcU][9U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xcU][8U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xcU][8U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xcU][7U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xcU][7U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xcU][6U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xcU][6U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xcU][5U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xcU][5U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xcU][4U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xcU][4U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xcU][3U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xcU][3U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xcU][2U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xcU][2U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xcU][1U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xcU][1U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xcU][0U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xcU][0U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xbU][0xfU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xbU][0xfU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xbU][0xeU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xbU][0xeU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xbU][0xdU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xbU][0xdU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xbU][0xcU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xbU][0xcU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xbU][0xbU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xbU][0xbU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xbU][0xaU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xbU][0xaU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xbU][9U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xbU][9U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xbU][8U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xbU][8U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xbU][7U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xbU][7U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xbU][6U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xbU][6U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xbU][5U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xbU][5U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xbU][4U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xbU][4U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xbU][3U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xbU][3U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xbU][2U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xbU][2U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xbU][1U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xbU][1U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xbU][0U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xbU][0U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xaU][0xfU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xaU][0xfU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xaU][0xeU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xaU][0xeU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xaU][0xdU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xaU][0xdU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xaU][0xcU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xaU][0xcU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xaU][0xbU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xaU][0xbU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xaU][0xaU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xaU][0xaU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xaU][9U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xaU][9U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xaU][8U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xaU][8U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xaU][7U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xaU][7U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xaU][6U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xaU][6U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xaU][5U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xaU][5U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xaU][4U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xaU][4U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xaU][3U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xaU][3U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xaU][2U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xaU][2U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xaU][1U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xaU][1U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xaU][0U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0xaU][0U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [9U][0xfU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [9U][0xfU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [9U][0xeU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [9U][0xeU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [9U][0xdU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [9U][0xdU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [9U][0xcU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [9U][0xcU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [9U][0xbU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [9U][0xbU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [9U][0xaU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [9U][0xaU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [9U][9U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [9U][9U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [9U][8U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [9U][8U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [9U][7U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [9U][7U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [9U][6U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [9U][6U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [9U][5U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [9U][5U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [9U][4U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [9U][4U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [9U][3U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [9U][3U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [9U][2U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [9U][2U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [9U][1U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [9U][1U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [9U][0U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [9U][0U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [8U][0xfU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [8U][0xfU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [8U][0xeU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [8U][0xeU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [8U][0xdU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [8U][0xdU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [8U][0xcU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [8U][0xcU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [8U][0xbU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [8U][0xbU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [8U][0xaU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [8U][0xaU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [8U][9U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [8U][9U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [8U][8U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [8U][8U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [8U][7U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [8U][7U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [8U][6U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [8U][6U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [8U][5U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [8U][5U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [8U][4U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [8U][4U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [8U][3U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [8U][3U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [8U][2U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [8U][2U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [8U][1U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [8U][1U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [8U][0U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [8U][0U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [7U][0xfU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [7U][0xfU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [7U][0xeU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [7U][0xeU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [7U][0xdU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [7U][0xdU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [7U][0xcU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [7U][0xcU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [7U][0xbU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [7U][0xbU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [7U][0xaU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [7U][0xaU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [7U][9U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [7U][9U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [7U][8U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [7U][8U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [7U][7U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [7U][7U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [7U][6U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [7U][6U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [7U][5U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [7U][5U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [7U][4U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [7U][4U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [7U][3U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [7U][3U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [7U][2U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [7U][2U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [7U][1U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [7U][1U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [7U][0U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [7U][0U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [6U][0xfU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [6U][0xfU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [6U][0xeU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [6U][0xeU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [6U][0xdU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [6U][0xdU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [6U][0xcU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [6U][0xcU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [6U][0xbU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [6U][0xbU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [6U][0xaU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [6U][0xaU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [6U][9U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [6U][9U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [6U][8U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [6U][8U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [6U][7U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [6U][7U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [6U][6U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [6U][6U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [6U][5U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [6U][5U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [6U][4U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [6U][4U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [6U][3U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [6U][3U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [6U][2U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [6U][2U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [6U][1U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [6U][1U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [6U][0U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [6U][0U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [5U][0xfU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [5U][0xfU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [5U][0xeU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [5U][0xeU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [5U][0xdU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [5U][0xdU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [5U][0xcU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [5U][0xcU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [5U][0xbU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [5U][0xbU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [5U][0xaU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [5U][0xaU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [5U][9U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [5U][9U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [5U][8U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [5U][8U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [5U][7U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [5U][7U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [5U][6U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [5U][6U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [5U][5U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [5U][5U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [5U][4U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [5U][4U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [5U][3U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [5U][3U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [5U][2U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [5U][2U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [5U][1U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [5U][1U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [5U][0U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [5U][0U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [4U][0xfU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [4U][0xfU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [4U][0xeU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [4U][0xeU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [4U][0xdU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [4U][0xdU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [4U][0xcU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [4U][0xcU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [4U][0xbU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [4U][0xbU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [4U][0xaU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [4U][0xaU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [4U][9U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [4U][9U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [4U][8U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [4U][8U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [4U][7U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [4U][7U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [4U][6U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [4U][6U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [4U][5U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [4U][5U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [4U][4U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [4U][4U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [4U][3U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [4U][3U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [4U][2U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [4U][2U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [4U][1U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [4U][1U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [4U][0U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [4U][0U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [3U][0xfU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [3U][0xfU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [3U][0xeU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [3U][0xeU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [3U][0xdU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [3U][0xdU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [3U][0xcU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [3U][0xcU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [3U][0xbU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [3U][0xbU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [3U][0xaU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [3U][0xaU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [3U][9U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [3U][9U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [3U][8U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [3U][8U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [3U][7U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [3U][7U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [3U][6U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [3U][6U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [3U][5U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [3U][5U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [3U][4U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [3U][4U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [3U][3U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [3U][3U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [3U][2U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [3U][2U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [3U][1U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [3U][1U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [3U][0U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [3U][0U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [2U][0xfU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [2U][0xfU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [2U][0xeU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [2U][0xeU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [2U][0xdU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [2U][0xdU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [2U][0xcU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [2U][0xcU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [2U][0xbU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [2U][0xbU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [2U][0xaU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [2U][0xaU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [2U][9U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [2U][9U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [2U][8U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [2U][8U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [2U][7U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [2U][7U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [2U][6U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [2U][6U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [2U][5U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [2U][5U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [2U][4U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [2U][4U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [2U][3U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [2U][3U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [2U][2U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [2U][2U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [2U][1U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [2U][1U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [2U][0U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [2U][0U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [1U][0xfU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [1U][0xfU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [1U][0xeU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [1U][0xeU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [1U][0xdU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [1U][0xdU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [1U][0xcU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [1U][0xcU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [1U][0xbU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [1U][0xbU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [1U][0xaU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [1U][0xaU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [1U][9U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [1U][9U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [1U][8U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [1U][8U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [1U][7U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [1U][7U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [1U][6U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [1U][6U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [1U][5U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [1U][5U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [1U][4U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [1U][4U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [1U][3U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [1U][3U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [1U][2U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [1U][2U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [1U][1U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [1U][1U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [1U][0U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [1U][0U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0U][0xfU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0U][0xfU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0U][0xeU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0U][0xeU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0U][0xdU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0U][0xdU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0U][0xcU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0U][0xcU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0U][0xbU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0U][0xbU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0U][0xaU] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                             [0U][0xaU] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0U][9U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [0U][9U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0U][8U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [0U][8U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0U][7U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [0U][7U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0U][6U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [0U][6U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0U][5U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [0U][5U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0U][4U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [0U][4U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0U][3U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [0U][3U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0U][2U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [0U][2U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0U][1U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [0U][1U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out 
            = (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0U][0U] + (vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire
                           [0U][0U] * (IData)(vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg)));
        vlSelf->npu_system_top__DOT__npu_acc_addr_q 
            = (0x1ffU & ((IData)(vlSelf->mmio_test_acc_addr_override_en)
                          ? (IData)(vlSelf->mmio_test_acc_addr_override)
                          : (IData)(vlSelf->npu_system_top__DOT__npu_sram_raddr)));
        if (vlSelf->npu_system_top__DOT__npu_valid_q) {
            vlSelf->npu_system_top__DOT__one_shot_acc_clear_pending = 0U;
        }
        if ((1U & (~ ((IData)(vlSelf->npu_system_top__DOT__state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->npu_system_top__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->npu_system_top__DOT__state)))) {
                    vlSelf->npu_system_top__DOT__one_shot_acc_clear_pending 
                        = ((IData)(vlSelf->mmio_start_npu) 
                           && (((~ (IData)(vlSelf->mmio_npu_mode)) 
                                & (IData)(vlSelf->mmio_npu_acc_clear)) 
                               & (IData)(vlSelf->mmio_test_one_shot_acc_clear_en)));
                }
            }
        }
        if ((0x8000U & (IData)(vlSelf->npu_system_top__DOT__core_weight_load_en))) {
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U]);
        }
        if ((0x4000U & (IData)(vlSelf->npu_system_top__DOT__core_weight_load_en))) {
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U]);
        }
        if ((0x2000U & (IData)(vlSelf->npu_system_top__DOT__core_weight_load_en))) {
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U]);
        }
        if ((0x1000U & (IData)(vlSelf->npu_system_top__DOT__core_weight_load_en))) {
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U]);
        }
        if ((0x800U & (IData)(vlSelf->npu_system_top__DOT__core_weight_load_en))) {
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U]);
        }
        if ((0x400U & (IData)(vlSelf->npu_system_top__DOT__core_weight_load_en))) {
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U]);
        }
        if ((0x200U & (IData)(vlSelf->npu_system_top__DOT__core_weight_load_en))) {
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                            >> 8U));
        }
    } else {
        vlSelf->npu_system_top__DOT__bank_sel = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__8__KET____DOT__genblk1__DOT__delay_pipe = 0ULL;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__8__KET____DOT__genblk1__DOT__delay_pipe 
            = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__8__KET____DOT__genblk1__DOT__delay_pipe;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__4__KET____DOT__genblk1__DOT__delay_pipe = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__4__KET____DOT__genblk1__DOT__delay_pipe 
            = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__4__KET____DOT__genblk1__DOT__delay_pipe;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__2__KET____DOT__genblk1__DOT__delay_pipe = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[0U] = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[1U] = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[2U] = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[3U] = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[0U] 
            = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[0U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[1U] 
            = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[1U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[2U] 
            = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[2U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[3U] 
            = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[3U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[0U] = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[1U] = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[2U] = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[3U] = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[0U] 
            = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[0U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[1U] 
            = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[1U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[2U] 
            = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[2U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[3U] 
            = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[3U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[0U] = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[1U] = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[2U] = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[3U] = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[0U] 
            = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[0U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[1U] 
            = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[1U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[2U] 
            = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[2U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[3U] 
            = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[3U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[0U] = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[1U] = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[2U] = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[0U] = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[1U] = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[2U] = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[0U] = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[1U] = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[2U] = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[0U] = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[1U] = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[2U] = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__7__KET____DOT__genblk1__DOT__delay_pipe = 0ULL;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__6__KET____DOT__genblk1__DOT__delay_pipe = 0ULL;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__5__KET____DOT__genblk1__DOT__delay_pipe = 0ULL;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__3__KET____DOT__genblk1__DOT__delay_pipe = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__13__KET____DOT__genblk1__DOT__deskew_pipe = 0ULL;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__11__KET____DOT__genblk1__DOT__deskew_pipe[0U] = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__11__KET____DOT__genblk1__DOT__deskew_pipe[1U] = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__11__KET____DOT__genblk1__DOT__deskew_pipe[2U] = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__11__KET____DOT__genblk1__DOT__deskew_pipe[3U] = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
            = Vnpu_system_top__ConstPool__CONST_h9e67c271_0[0U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
            = Vnpu_system_top__ConstPool__CONST_h9e67c271_0[1U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
            = Vnpu_system_top__ConstPool__CONST_h9e67c271_0[2U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
            = Vnpu_system_top__ConstPool__CONST_h9e67c271_0[3U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
            = Vnpu_system_top__ConstPool__CONST_h9e67c271_0[4U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
            = Vnpu_system_top__ConstPool__CONST_h9e67c271_0[5U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[6U] 
            = Vnpu_system_top__ConstPool__CONST_h9e67c271_0[6U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[7U] 
            = Vnpu_system_top__ConstPool__CONST_h9e67c271_0[7U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__12__KET____DOT__genblk1__DOT__deskew_pipe[0U] = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__12__KET____DOT__genblk1__DOT__deskew_pipe[1U] = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__12__KET____DOT__genblk1__DOT__deskew_pipe[2U] = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe[0U] = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe[1U] = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe[2U] = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe[3U] = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe[4U] = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[0U] = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[1U] = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[2U] = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[3U] = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[4U] = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[5U] = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[0U] = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[1U] = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[2U] = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[3U] = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[4U] = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[5U] = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[6U] = 0U;
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
            = Vnpu_system_top__ConstPool__CONST_h9a2fc1c8_0[0U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
            = Vnpu_system_top__ConstPool__CONST_h9a2fc1c8_0[1U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
            = Vnpu_system_top__ConstPool__CONST_h9a2fc1c8_0[2U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
            = Vnpu_system_top__ConstPool__CONST_h9a2fc1c8_0[3U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
            = Vnpu_system_top__ConstPool__CONST_h9a2fc1c8_0[4U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
            = Vnpu_system_top__ConstPool__CONST_h9a2fc1c8_0[5U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[6U] 
            = Vnpu_system_top__ConstPool__CONST_h9a2fc1c8_0[6U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[7U] 
            = Vnpu_system_top__ConstPool__CONST_h9a2fc1c8_0[7U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[8U] 
            = Vnpu_system_top__ConstPool__CONST_h9a2fc1c8_0[8U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
            = Vnpu_system_top__ConstPool__CONST_hab76c978_0[0U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
            = Vnpu_system_top__ConstPool__CONST_hab76c978_0[1U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
            = Vnpu_system_top__ConstPool__CONST_hab76c978_0[2U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
            = Vnpu_system_top__ConstPool__CONST_hab76c978_0[3U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
            = Vnpu_system_top__ConstPool__CONST_hab76c978_0[4U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
            = Vnpu_system_top__ConstPool__CONST_hab76c978_0[5U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[6U] 
            = Vnpu_system_top__ConstPool__CONST_hab76c978_0[6U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[7U] 
            = Vnpu_system_top__ConstPool__CONST_hab76c978_0[7U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[8U] 
            = Vnpu_system_top__ConstPool__CONST_hab76c978_0[8U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[9U] 
            = Vnpu_system_top__ConstPool__CONST_hab76c978_0[9U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
            = Vnpu_system_top__ConstPool__CONST_h51f37808_0[0U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
            = Vnpu_system_top__ConstPool__CONST_h51f37808_0[1U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
            = Vnpu_system_top__ConstPool__CONST_h51f37808_0[2U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
            = Vnpu_system_top__ConstPool__CONST_h51f37808_0[3U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
            = Vnpu_system_top__ConstPool__CONST_h51f37808_0[4U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
            = Vnpu_system_top__ConstPool__CONST_h51f37808_0[5U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[6U] 
            = Vnpu_system_top__ConstPool__CONST_h51f37808_0[6U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[7U] 
            = Vnpu_system_top__ConstPool__CONST_h51f37808_0[7U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[8U] 
            = Vnpu_system_top__ConstPool__CONST_h51f37808_0[8U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[9U] 
            = Vnpu_system_top__ConstPool__CONST_h51f37808_0[9U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[0xaU] 
            = Vnpu_system_top__ConstPool__CONST_h51f37808_0[0xaU];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
            = Vnpu_system_top__ConstPool__CONST_h997e551f_0[0U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
            = Vnpu_system_top__ConstPool__CONST_h997e551f_0[1U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
            = Vnpu_system_top__ConstPool__CONST_h997e551f_0[2U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
            = Vnpu_system_top__ConstPool__CONST_h997e551f_0[3U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
            = Vnpu_system_top__ConstPool__CONST_h997e551f_0[4U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
            = Vnpu_system_top__ConstPool__CONST_h997e551f_0[5U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[6U] 
            = Vnpu_system_top__ConstPool__CONST_h997e551f_0[6U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[7U] 
            = Vnpu_system_top__ConstPool__CONST_h997e551f_0[7U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[8U] 
            = Vnpu_system_top__ConstPool__CONST_h997e551f_0[8U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[9U] 
            = Vnpu_system_top__ConstPool__CONST_h997e551f_0[9U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[0xaU] 
            = Vnpu_system_top__ConstPool__CONST_h997e551f_0[0xaU];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[0xbU] 
            = Vnpu_system_top__ConstPool__CONST_h997e551f_0[0xbU];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
            = Vnpu_system_top__ConstPool__CONST_h75d095d1_0[0U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
            = Vnpu_system_top__ConstPool__CONST_h75d095d1_0[1U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
            = Vnpu_system_top__ConstPool__CONST_h75d095d1_0[2U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
            = Vnpu_system_top__ConstPool__CONST_h75d095d1_0[3U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
            = Vnpu_system_top__ConstPool__CONST_h75d095d1_0[4U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
            = Vnpu_system_top__ConstPool__CONST_h75d095d1_0[5U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[6U] 
            = Vnpu_system_top__ConstPool__CONST_h75d095d1_0[6U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[7U] 
            = Vnpu_system_top__ConstPool__CONST_h75d095d1_0[7U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[8U] 
            = Vnpu_system_top__ConstPool__CONST_h75d095d1_0[8U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[9U] 
            = Vnpu_system_top__ConstPool__CONST_h75d095d1_0[9U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[0xaU] 
            = Vnpu_system_top__ConstPool__CONST_h75d095d1_0[0xaU];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[0xbU] 
            = Vnpu_system_top__ConstPool__CONST_h75d095d1_0[0xbU];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[0xcU] 
            = Vnpu_system_top__ConstPool__CONST_h75d095d1_0[0xcU];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
            = Vnpu_system_top__ConstPool__CONST_hb0e0ad07_0[0U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
            = Vnpu_system_top__ConstPool__CONST_hb0e0ad07_0[1U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
            = Vnpu_system_top__ConstPool__CONST_hb0e0ad07_0[2U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
            = Vnpu_system_top__ConstPool__CONST_hb0e0ad07_0[3U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
            = Vnpu_system_top__ConstPool__CONST_hb0e0ad07_0[4U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
            = Vnpu_system_top__ConstPool__CONST_hb0e0ad07_0[5U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[6U] 
            = Vnpu_system_top__ConstPool__CONST_hb0e0ad07_0[6U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[7U] 
            = Vnpu_system_top__ConstPool__CONST_hb0e0ad07_0[7U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[8U] 
            = Vnpu_system_top__ConstPool__CONST_hb0e0ad07_0[8U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[9U] 
            = Vnpu_system_top__ConstPool__CONST_hb0e0ad07_0[9U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[0xaU] 
            = Vnpu_system_top__ConstPool__CONST_hb0e0ad07_0[0xaU];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[0xbU] 
            = Vnpu_system_top__ConstPool__CONST_hb0e0ad07_0[0xbU];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[0xcU] 
            = Vnpu_system_top__ConstPool__CONST_hb0e0ad07_0[0xcU];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[0xdU] 
            = Vnpu_system_top__ConstPool__CONST_hb0e0ad07_0[0xdU];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
            = Vnpu_system_top__ConstPool__CONST_hbd99daea_0[0U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
            = Vnpu_system_top__ConstPool__CONST_hbd99daea_0[1U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
            = Vnpu_system_top__ConstPool__CONST_hbd99daea_0[2U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
            = Vnpu_system_top__ConstPool__CONST_hbd99daea_0[3U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
            = Vnpu_system_top__ConstPool__CONST_hbd99daea_0[4U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
            = Vnpu_system_top__ConstPool__CONST_hbd99daea_0[5U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[6U] 
            = Vnpu_system_top__ConstPool__CONST_hbd99daea_0[6U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[7U] 
            = Vnpu_system_top__ConstPool__CONST_hbd99daea_0[7U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[8U] 
            = Vnpu_system_top__ConstPool__CONST_hbd99daea_0[8U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[9U] 
            = Vnpu_system_top__ConstPool__CONST_hbd99daea_0[9U];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0xaU] 
            = Vnpu_system_top__ConstPool__CONST_hbd99daea_0[0xaU];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0xbU] 
            = Vnpu_system_top__ConstPool__CONST_hbd99daea_0[0xbU];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0xcU] 
            = Vnpu_system_top__ConstPool__CONST_hbd99daea_0[0xcU];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0xdU] 
            = Vnpu_system_top__ConstPool__CONST_hbd99daea_0[0xdU];
        __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0xeU] 
            = Vnpu_system_top__ConstPool__CONST_hbd99daea_0[0xeU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[0U] 
            = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[1U] 
            = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[2U] 
            = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[3U] 
            = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[4U] 
            = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[5U] 
            = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[6U] 
            = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[7U] 
            = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[8U] 
            = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[9U] 
            = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[0xaU] 
            = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[0xbU] 
            = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[0xcU] 
            = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[0xdU] 
            = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[0xeU] 
            = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__array_psum_q[0xfU] 
            = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[0xfU];
        __Vdly__npu_system_top__DOT__u_dma__DOT__req_cnt = 0U;
        __Vdly__npu_system_top__DOT__u_dma__DOT__resp_cnt = 0U;
        __Vdly__npu_system_top__DOT__u_dma__DOT__outstanding_cnt = 0U;
        __Vdly__npu_system_top__DOT__u_dma__DOT__busy = 0U;
        vlSelf->mmio_dma_done = 0U;
        vlSelf->mmio_npu_done = 0U;
        vlSelf->psum_drain_out[0U] = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->psum_drain_out[1U] = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->psum_drain_out[2U] = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->psum_drain_out[3U] = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->psum_drain_out[4U] = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->psum_drain_out[5U] = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->psum_drain_out[6U] = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->psum_drain_out[7U] = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->psum_drain_out[8U] = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->psum_drain_out[9U] = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->psum_drain_out[0xaU] = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->psum_drain_out[0xbU] = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->psum_drain_out[0xcU] = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->psum_drain_out[0xdU] = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->psum_drain_out[0xeU] = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->psum_drain_out[0xfU] = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[0U] 
            = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[1U] 
            = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[2U] 
            = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[3U] 
            = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[4U] 
            = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[5U] 
            = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[6U] 
            = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[7U] 
            = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[8U] 
            = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[9U] 
            = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[0xaU] 
            = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[0xbU] 
            = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[0xcU] 
            = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[0xdU] 
            = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[0xeU] 
            = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_data[0xfU] 
            = Vnpu_system_top__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_addr = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_valid = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__1__KET____DOT__genblk1__DOT__delay_pipe = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__14__KET____DOT__genblk1__DOT__deskew_pipe = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out = 0U;
        vlSelf->npu_system_top__DOT__npu_acc_addr_q = 0U;
        vlSelf->npu_system_top__DOT__one_shot_acc_clear_pending = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg = 0U;
    }
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[0U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[0U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[1U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[1U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[2U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[2U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[0U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[0U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[1U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[1U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[2U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[2U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[0U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[0U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[1U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[1U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[2U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[2U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[0U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[0U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[1U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[1U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[2U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[2U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__7__KET____DOT__genblk1__DOT__delay_pipe 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__7__KET____DOT__genblk1__DOT__delay_pipe;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__6__KET____DOT__genblk1__DOT__delay_pipe 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__6__KET____DOT__genblk1__DOT__delay_pipe;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__5__KET____DOT__genblk1__DOT__delay_pipe 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__5__KET____DOT__genblk1__DOT__delay_pipe;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__3__KET____DOT__genblk1__DOT__delay_pipe 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__3__KET____DOT__genblk1__DOT__delay_pipe;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__11__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__11__KET____DOT__genblk1__DOT__deskew_pipe[0U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__11__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__11__KET____DOT__genblk1__DOT__deskew_pipe[1U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__11__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__11__KET____DOT__genblk1__DOT__deskew_pipe[2U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__11__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__11__KET____DOT__genblk1__DOT__deskew_pipe[3U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[0U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[1U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[2U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[3U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[4U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[5U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[6U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[6U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[7U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[7U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__12__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__12__KET____DOT__genblk1__DOT__deskew_pipe[0U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__12__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__12__KET____DOT__genblk1__DOT__deskew_pipe[1U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__12__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__12__KET____DOT__genblk1__DOT__deskew_pipe[2U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe[0U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe[1U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe[2U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe[3U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe[4U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[0U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[1U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[2U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[3U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[4U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[5U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[0U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[1U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[2U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[3U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[4U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[5U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[6U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[6U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[0U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[1U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[2U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[3U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[4U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[5U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[6U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[6U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[7U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[7U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[8U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[8U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[0U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[1U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[2U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[3U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[4U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[5U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[6U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[6U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[7U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[7U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[8U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[8U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[9U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[9U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[0U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[1U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[2U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[3U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[4U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[5U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[6U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[6U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[7U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[7U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[8U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[8U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[9U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[9U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[0xaU] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[0xaU];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[0U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[1U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[2U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[3U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[4U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[5U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[6U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[6U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[7U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[7U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[8U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[8U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[9U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[9U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[0xaU] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[0xaU];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[0xbU] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[0xbU];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[0U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[1U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[2U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[3U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[4U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[5U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[6U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[6U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[7U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[7U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[8U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[8U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[9U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[9U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[0xaU] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[0xaU];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[0xbU] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[0xbU];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[0xcU] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[0xcU];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[0U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[1U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[2U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[3U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[4U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[5U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[6U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[6U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[7U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[7U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[8U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[8U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[9U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[9U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[0xaU] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[0xaU];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[0xbU] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[0xbU];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[0xcU] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[0xcU];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[0xdU] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[0xdU];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[1U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[2U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[3U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[4U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[5U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[6U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[6U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[7U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[7U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[8U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[8U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[9U] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[9U];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0xaU] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0xaU];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0xbU] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0xbU];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0xcU] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0xcU];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0xdU] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0xdU];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0xeU] 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__Psum_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0xeU];
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__acc_clear_pipe 
        = __Vdly__npu_system_top__DOT__u_npu_core__DOT__acc_clear_pipe;
    vlSelf->npu_system_top__DOT__u_dma__DOT__resp_cnt 
        = __Vdly__npu_system_top__DOT__u_dma__DOT__resp_cnt;
    vlSelf->npu_system_top__DOT__u_dma__DOT__outstanding_cnt 
        = __Vdly__npu_system_top__DOT__u_dma__DOT__outstanding_cnt;
    vlSelf->npu_system_top__DOT__u_dma__DOT__req_cnt 
        = __Vdly__npu_system_top__DOT__u_dma__DOT__req_cnt;
    vlSelf->npu_system_top__DOT__u_dma__DOT__busy = __Vdly__npu_system_top__DOT__u_dma__DOT__busy;
    vlSelf->npu_system_top__DOT__u_dma__DOT__ar_fire 
        = ((IData)(vlSelf->arready) & (IData)(vlSelf->arvalid));
    vlSelf->npu_system_top__DOT__dma_sram_wen = ((IData)(vlSelf->rst_n) 
                                                 && (IData)(vlSelf->rvalid));
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__drain_re_q 
        = ((IData)(vlSelf->rst_n) && (IData)(vlSelf->drain_re));
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][0x10U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][0x10U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][0x10U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][0x10U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][0x10U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][0x10U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[9U][0x10U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[9U][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[9U][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[9U][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[9U][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[9U][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[9U][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[9U][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[9U][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[9U][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[9U][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[9U][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[9U][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[9U][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[9U][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[9U][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[8U][0x10U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[8U][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[8U][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[8U][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[8U][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[8U][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[8U][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[8U][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[8U][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[8U][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[8U][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[8U][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[8U][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[8U][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[8U][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[8U][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[7U][0x10U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[7U][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[7U][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[7U][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[7U][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[7U][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[7U][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[7U][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[7U][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[7U][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[7U][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[7U][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[7U][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[7U][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[7U][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[7U][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[6U][0x10U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[6U][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[6U][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[6U][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[6U][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[6U][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[6U][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[6U][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[6U][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[6U][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[6U][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[6U][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[6U][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[6U][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[6U][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[6U][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[5U][0x10U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[5U][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[5U][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[5U][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[5U][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[5U][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[5U][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[5U][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[5U][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[5U][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[5U][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[5U][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[5U][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[5U][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[5U][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[5U][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[4U][0x10U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[4U][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[4U][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[4U][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[4U][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[4U][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[4U][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[4U][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[4U][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[4U][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[4U][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[4U][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[4U][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[4U][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[4U][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[4U][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[3U][0x10U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[3U][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[3U][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[3U][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[3U][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[3U][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[3U][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[3U][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[3U][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[3U][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[3U][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[3U][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[3U][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[3U][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[3U][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[3U][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[2U][0x10U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[2U][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[2U][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[2U][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[2U][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[2U][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[2U][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[2U][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[2U][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[2U][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[2U][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[2U][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[2U][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[2U][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[2U][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[2U][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[1U][0x10U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[1U][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[1U][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[1U][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[1U][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[1U][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[1U][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[1U][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[1U][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[1U][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[1U][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[1U][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[1U][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[1U][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[1U][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[1U][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0U][0x10U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0U][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0U][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0U][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0U][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0U][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0U][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0U][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0U][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0U][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0U][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0U][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0U][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0U][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0U][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_act_wire[0U][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__act_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out;
}

VL_INLINE_OPT void Vnpu_system_top___024root___nba_sequent__TOP__1(Vnpu_system_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_system_top___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[9U][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[9U][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[9U][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[9U][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[9U][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[9U][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[9U][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[9U][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[9U][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[9U][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[9U][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[9U][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[9U][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[9U][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[9U][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[9U][0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[8U][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[8U][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[8U][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[8U][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[8U][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[8U][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[8U][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[8U][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[8U][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[8U][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[8U][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[8U][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[8U][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[8U][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[8U][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[8U][0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[7U][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[7U][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[7U][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[7U][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[7U][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[7U][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[7U][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[7U][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[7U][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[7U][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[7U][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[7U][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[7U][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[7U][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[7U][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[7U][0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[6U][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[6U][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[6U][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[6U][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[6U][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[6U][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[6U][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[6U][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[6U][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[6U][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[6U][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[6U][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[6U][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[6U][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[6U][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[6U][0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[5U][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[5U][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[5U][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[5U][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[5U][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[5U][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[5U][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[5U][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[5U][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[5U][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[5U][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[5U][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[5U][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[5U][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[5U][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[5U][0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[4U][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[4U][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[4U][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[4U][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[4U][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[4U][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[4U][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[4U][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[4U][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[4U][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[4U][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[4U][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[4U][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[4U][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[4U][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[4U][0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[3U][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[3U][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[3U][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[3U][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[3U][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[3U][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[3U][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[3U][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[3U][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[3U][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[3U][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[3U][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[3U][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[3U][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[3U][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[3U][0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[2U][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[2U][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[2U][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[2U][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[2U][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[2U][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[2U][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[2U][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[2U][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[2U][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[2U][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[2U][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[2U][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[2U][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[2U][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[2U][0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[1U][0xfU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[1U][0xeU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[1U][0xdU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[1U][0xcU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[1U][0xbU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[1U][0xaU] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[1U][9U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[1U][8U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[1U][7U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[1U][6U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[1U][5U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[1U][4U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[1U][3U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[1U][2U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[1U][1U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__psum_out;
    vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__pe_psum_wire[1U][0U] 
        = vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__psum_out;
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
    vlSelf->npu_system_top__DOT__npu_valid_q = ((IData)(vlSelf->rst_n) 
                                                && ((IData)(vlSelf->npu_system_top__DOT__npu_sram_ren) 
                                                    & (((3U 
                                                         == (IData)(vlSelf->npu_system_top__DOT__next_state)) 
                                                        | (3U 
                                                           == (IData)(vlSelf->npu_system_top__DOT__state))) 
                                                       | (4U 
                                                          == (IData)(vlSelf->npu_system_top__DOT__next_state)))));
    if (vlSelf->rst_n) {
        if ((0x200U & (IData)(vlSelf->npu_system_top__DOT__core_weight_load_en))) {
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U]);
        }
        if ((0x100U & (IData)(vlSelf->npu_system_top__DOT__core_weight_load_en))) {
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U]);
        }
        if ((0x80U & (IData)(vlSelf->npu_system_top__DOT__core_weight_load_en))) {
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U]);
        }
        if ((0x40U & (IData)(vlSelf->npu_system_top__DOT__core_weight_load_en))) {
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U]);
        }
        if ((0x20U & (IData)(vlSelf->npu_system_top__DOT__core_weight_load_en))) {
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U]);
        }
        if ((0x10U & (IData)(vlSelf->npu_system_top__DOT__core_weight_load_en))) {
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U]);
        }
        if ((8U & (IData)(vlSelf->npu_system_top__DOT__core_weight_load_en))) {
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U]);
        }
        if ((4U & (IData)(vlSelf->npu_system_top__DOT__core_weight_load_en))) {
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U]);
        }
        if ((2U & (IData)(vlSelf->npu_system_top__DOT__core_weight_load_en))) {
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U]);
        }
        if ((1U & (IData)(vlSelf->npu_system_top__DOT__core_weight_load_en))) {
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[3U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[2U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[1U]);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg 
                = (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                   >> 0x18U);
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                            >> 0x10U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & (vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U] 
                            >> 8U));
            vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg 
                = (0xffU & vlSelf->npu_system_top__DOT____Vcellinp__u_npu_core__sram_weight_in[0U]);
        }
        vlSelf->npu_system_top__DOT__core_weight_load_en 
            = (((IData)(vlSelf->npu_system_top__DOT__npu_sram_ren) 
                & (((1U == (IData)(vlSelf->npu_system_top__DOT__next_state)) 
                    | (1U == (IData)(vlSelf->npu_system_top__DOT__state))) 
                   | (2U == (IData)(vlSelf->npu_system_top__DOT__next_state))))
                ? (IData)(vlSelf->npu_system_top__DOT__wt_load_shift)
                : 0U);
        if ((1U & (~ ((IData)(vlSelf->npu_system_top__DOT__state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->npu_system_top__DOT__state) 
                          >> 1U)))) {
                vlSelf->npu_system_top__DOT__wt_load_shift 
                    = ((1U & (IData)(vlSelf->npu_system_top__DOT__state))
                        ? (0xfffeU & ((IData)(vlSelf->npu_system_top__DOT__wt_load_shift) 
                                      << 1U)) : ((IData)(vlSelf->mmio_start_npu)
                                                  ? 
                                                 ((IData)(vlSelf->mmio_npu_mode)
                                                   ? 2U
                                                   : 1U)
                                                  : 1U));
            }
        }
        vlSelf->npu_system_top__DOT__state = vlSelf->npu_system_top__DOT__next_state;
    } else {
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__u_npu_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__u_pe__DOT__weight_reg = 0U;
        vlSelf->npu_system_top__DOT__wt_load_shift = 1U;
        vlSelf->npu_system_top__DOT__core_weight_load_en = 0U;
        vlSelf->npu_system_top__DOT__state = 0U;
    }
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
}
