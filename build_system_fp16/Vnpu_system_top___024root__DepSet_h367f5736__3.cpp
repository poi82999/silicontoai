// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpu_system_top.h for the primary calling header

#include "Vnpu_system_top__pch.h"
#include "Vnpu_system_top__Syms.h"
#include "Vnpu_system_top___024root.h"

VL_INLINE_OPT void Vnpu_system_top___024root___nba_sequent__TOP__7(Vnpu_system_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_system_top___024root___nba_sequent__TOP__7\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<5>/*159:0*/ __Vtemp_3;
    VlWide<6>/*191:0*/ __Vtemp_4;
    VlWide<7>/*223:0*/ __Vtemp_5;
    VlWide<8>/*255:0*/ __Vtemp_6;
    VlWide<9>/*287:0*/ __Vtemp_7;
    VlWide<10>/*319:0*/ __Vtemp_8;
    VlWide<11>/*351:0*/ __Vtemp_9;
    VlWide<12>/*383:0*/ __Vtemp_10;
    VlWide<13>/*415:0*/ __Vtemp_11;
    VlWide<14>/*447:0*/ __Vtemp_12;
    VlWide<15>/*479:0*/ __Vtemp_13;
    // Body
    if (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_clear_q) {
        __Vtemp_1[0U] = vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xdU];
        __Vtemp_2[0U] = vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xcU];
        __Vtemp_3[0U] = vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xbU];
        __Vtemp_4[0U] = vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xaU];
        __Vtemp_5[0U] = vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[9U];
        __Vtemp_6[0U] = vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[8U];
        __Vtemp_7[0U] = vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[7U];
        __Vtemp_8[0U] = vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[6U];
        __Vtemp_9[0U] = vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[5U];
        __Vtemp_10[0U] = vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[4U];
        __Vtemp_11[0U] = vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[3U];
        __Vtemp_12[0U] = vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[2U];
        __Vtemp_13[0U] = vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[1U];
        vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_write_data[0U] 
            = vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0U];
    } else {
        __Vtemp_1[0U] = (((IData)(((0x7f800000U == 
                                    (0x7f800000U & 
                                     vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xdU])) 
                                   & (0U != (0x7fffffU 
                                             & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xdU])))) 
                          | (IData)(((0x7f800000U == 
                                      (0x7f800000U 
                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xdU])) 
                                     & (0U != (0x7fffffU 
                                               & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xdU])))))
                          ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__13__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf) 
                                            & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__13__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf))
                                            ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xdU] 
                                                 >> 0x1fU) 
                                                != 
                                                (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xdU] 
                                                 >> 0x1fU))
                                                ? 0x7fc00000U
                                                : (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xdU])))
                                            : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__13__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf)
                                                ? (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xdU]))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__13__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xdU]))
                                                    : 
                                                   (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__13__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero) 
                                                     & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__13__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero))
                                                     ? 
                                                    (0x80000000U 
                                                     & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xdU] 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xdU]))
                                                     : 
                                                    ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__13__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero)
                                                      ? 
                                                     vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xdU]
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__13__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero)
                                                       ? 
                                                      vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xdU]
                                                       : 
                                                      (((0U 
                                                         == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__13__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_exp)) 
                                                        & (0U 
                                                           == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__13__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_mant))
                                                        ? 0U
                                                        : 
                                                       ((0xffU 
                                                         <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__13__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp))
                                                         ? 
                                                        (0x7f800000U 
                                                         | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__13__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                            << 0x1fU))
                                                         : 
                                                        (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__13__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                          << 0x1fU) 
                                                         | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__13__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp) 
                                                             << 0x17U) 
                                                            | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__13__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__rounded_mant)))))))))));
        __Vtemp_2[0U] = (((IData)(((0x7f800000U == 
                                    (0x7f800000U & 
                                     vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xcU])) 
                                   & (0U != (0x7fffffU 
                                             & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xcU])))) 
                          | (IData)(((0x7f800000U == 
                                      (0x7f800000U 
                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xcU])) 
                                     & (0U != (0x7fffffU 
                                               & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xcU])))))
                          ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__12__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf) 
                                            & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__12__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf))
                                            ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xcU] 
                                                 >> 0x1fU) 
                                                != 
                                                (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xcU] 
                                                 >> 0x1fU))
                                                ? 0x7fc00000U
                                                : (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xcU])))
                                            : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__12__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf)
                                                ? (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xcU]))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__12__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xcU]))
                                                    : 
                                                   (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__12__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero) 
                                                     & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__12__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero))
                                                     ? 
                                                    (0x80000000U 
                                                     & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xcU] 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xcU]))
                                                     : 
                                                    ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__12__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero)
                                                      ? 
                                                     vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xcU]
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__12__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero)
                                                       ? 
                                                      vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xcU]
                                                       : 
                                                      (((0U 
                                                         == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__12__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_exp)) 
                                                        & (0U 
                                                           == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__12__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_mant))
                                                        ? 0U
                                                        : 
                                                       ((0xffU 
                                                         <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__12__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp))
                                                         ? 
                                                        (0x7f800000U 
                                                         | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__12__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                            << 0x1fU))
                                                         : 
                                                        (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__12__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                          << 0x1fU) 
                                                         | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__12__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp) 
                                                             << 0x17U) 
                                                            | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__12__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__rounded_mant)))))))))));
        __Vtemp_3[0U] = (((IData)(((0x7f800000U == 
                                    (0x7f800000U & 
                                     vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xbU])) 
                                   & (0U != (0x7fffffU 
                                             & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xbU])))) 
                          | (IData)(((0x7f800000U == 
                                      (0x7f800000U 
                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xbU])) 
                                     & (0U != (0x7fffffU 
                                               & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xbU])))))
                          ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__11__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf) 
                                            & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__11__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf))
                                            ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xbU] 
                                                 >> 0x1fU) 
                                                != 
                                                (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xbU] 
                                                 >> 0x1fU))
                                                ? 0x7fc00000U
                                                : (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xbU])))
                                            : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__11__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf)
                                                ? (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xbU]))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__11__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xbU]))
                                                    : 
                                                   (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__11__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero) 
                                                     & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__11__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero))
                                                     ? 
                                                    (0x80000000U 
                                                     & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xbU] 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xbU]))
                                                     : 
                                                    ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__11__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero)
                                                      ? 
                                                     vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xbU]
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__11__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero)
                                                       ? 
                                                      vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xbU]
                                                       : 
                                                      (((0U 
                                                         == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__11__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_exp)) 
                                                        & (0U 
                                                           == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__11__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_mant))
                                                        ? 0U
                                                        : 
                                                       ((0xffU 
                                                         <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__11__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp))
                                                         ? 
                                                        (0x7f800000U 
                                                         | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__11__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                            << 0x1fU))
                                                         : 
                                                        (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__11__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                          << 0x1fU) 
                                                         | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__11__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp) 
                                                             << 0x17U) 
                                                            | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__11__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__rounded_mant)))))))))));
        __Vtemp_4[0U] = (((IData)(((0x7f800000U == 
                                    (0x7f800000U & 
                                     vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xaU])) 
                                   & (0U != (0x7fffffU 
                                             & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xaU])))) 
                          | (IData)(((0x7f800000U == 
                                      (0x7f800000U 
                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xaU])) 
                                     & (0U != (0x7fffffU 
                                               & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xaU])))))
                          ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__10__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf) 
                                            & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__10__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf))
                                            ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xaU] 
                                                 >> 0x1fU) 
                                                != 
                                                (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xaU] 
                                                 >> 0x1fU))
                                                ? 0x7fc00000U
                                                : (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xaU])))
                                            : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__10__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf)
                                                ? (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xaU]))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__10__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xaU]))
                                                    : 
                                                   (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__10__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero) 
                                                     & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__10__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero))
                                                     ? 
                                                    (0x80000000U 
                                                     & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xaU] 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xaU]))
                                                     : 
                                                    ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__10__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero)
                                                      ? 
                                                     vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xaU]
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__10__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero)
                                                       ? 
                                                      vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xaU]
                                                       : 
                                                      (((0U 
                                                         == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__10__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_exp)) 
                                                        & (0U 
                                                           == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__10__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_mant))
                                                        ? 0U
                                                        : 
                                                       ((0xffU 
                                                         <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__10__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp))
                                                         ? 
                                                        (0x7f800000U 
                                                         | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__10__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                            << 0x1fU))
                                                         : 
                                                        (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__10__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                          << 0x1fU) 
                                                         | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__10__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp) 
                                                             << 0x17U) 
                                                            | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__10__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__rounded_mant)))))))))));
        __Vtemp_5[0U] = (((IData)(((0x7f800000U == 
                                    (0x7f800000U & 
                                     vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[9U])) 
                                   & (0U != (0x7fffffU 
                                             & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[9U])))) 
                          | (IData)(((0x7f800000U == 
                                      (0x7f800000U 
                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[9U])) 
                                     & (0U != (0x7fffffU 
                                               & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[9U])))))
                          ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__9__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf) 
                                            & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__9__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf))
                                            ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[9U] 
                                                 >> 0x1fU) 
                                                != 
                                                (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[9U] 
                                                 >> 0x1fU))
                                                ? 0x7fc00000U
                                                : (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[9U])))
                                            : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__9__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf)
                                                ? (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[9U]))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__9__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[9U]))
                                                    : 
                                                   (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__9__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero) 
                                                     & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__9__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero))
                                                     ? 
                                                    (0x80000000U 
                                                     & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[9U] 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[9U]))
                                                     : 
                                                    ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__9__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero)
                                                      ? 
                                                     vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[9U]
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__9__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero)
                                                       ? 
                                                      vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[9U]
                                                       : 
                                                      (((0U 
                                                         == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__9__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_exp)) 
                                                        & (0U 
                                                           == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__9__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_mant))
                                                        ? 0U
                                                        : 
                                                       ((0xffU 
                                                         <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__9__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp))
                                                         ? 
                                                        (0x7f800000U 
                                                         | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__9__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                            << 0x1fU))
                                                         : 
                                                        (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__9__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                          << 0x1fU) 
                                                         | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__9__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp) 
                                                             << 0x17U) 
                                                            | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__9__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__rounded_mant)))))))))));
        __Vtemp_6[0U] = (((IData)(((0x7f800000U == 
                                    (0x7f800000U & 
                                     vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[8U])) 
                                   & (0U != (0x7fffffU 
                                             & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[8U])))) 
                          | (IData)(((0x7f800000U == 
                                      (0x7f800000U 
                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[8U])) 
                                     & (0U != (0x7fffffU 
                                               & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[8U])))))
                          ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__8__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf) 
                                            & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__8__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf))
                                            ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[8U] 
                                                 >> 0x1fU) 
                                                != 
                                                (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[8U] 
                                                 >> 0x1fU))
                                                ? 0x7fc00000U
                                                : (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[8U])))
                                            : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__8__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf)
                                                ? (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[8U]))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__8__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[8U]))
                                                    : 
                                                   (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__8__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero) 
                                                     & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__8__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero))
                                                     ? 
                                                    (0x80000000U 
                                                     & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[8U] 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[8U]))
                                                     : 
                                                    ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__8__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero)
                                                      ? 
                                                     vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[8U]
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__8__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero)
                                                       ? 
                                                      vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[8U]
                                                       : 
                                                      (((0U 
                                                         == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__8__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_exp)) 
                                                        & (0U 
                                                           == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__8__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_mant))
                                                        ? 0U
                                                        : 
                                                       ((0xffU 
                                                         <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__8__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp))
                                                         ? 
                                                        (0x7f800000U 
                                                         | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__8__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                            << 0x1fU))
                                                         : 
                                                        (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__8__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                          << 0x1fU) 
                                                         | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__8__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp) 
                                                             << 0x17U) 
                                                            | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__8__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__rounded_mant)))))))))));
        __Vtemp_7[0U] = (((IData)(((0x7f800000U == 
                                    (0x7f800000U & 
                                     vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[7U])) 
                                   & (0U != (0x7fffffU 
                                             & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[7U])))) 
                          | (IData)(((0x7f800000U == 
                                      (0x7f800000U 
                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[7U])) 
                                     & (0U != (0x7fffffU 
                                               & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[7U])))))
                          ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__7__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf) 
                                            & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__7__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf))
                                            ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[7U] 
                                                 >> 0x1fU) 
                                                != 
                                                (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[7U] 
                                                 >> 0x1fU))
                                                ? 0x7fc00000U
                                                : (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[7U])))
                                            : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__7__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf)
                                                ? (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[7U]))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__7__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[7U]))
                                                    : 
                                                   (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__7__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero) 
                                                     & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__7__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero))
                                                     ? 
                                                    (0x80000000U 
                                                     & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[7U] 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[7U]))
                                                     : 
                                                    ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__7__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero)
                                                      ? 
                                                     vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[7U]
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__7__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero)
                                                       ? 
                                                      vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[7U]
                                                       : 
                                                      (((0U 
                                                         == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__7__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_exp)) 
                                                        & (0U 
                                                           == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__7__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_mant))
                                                        ? 0U
                                                        : 
                                                       ((0xffU 
                                                         <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__7__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp))
                                                         ? 
                                                        (0x7f800000U 
                                                         | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__7__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                            << 0x1fU))
                                                         : 
                                                        (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__7__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                          << 0x1fU) 
                                                         | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__7__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp) 
                                                             << 0x17U) 
                                                            | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__7__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__rounded_mant)))))))))));
        __Vtemp_8[0U] = (((IData)(((0x7f800000U == 
                                    (0x7f800000U & 
                                     vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[6U])) 
                                   & (0U != (0x7fffffU 
                                             & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[6U])))) 
                          | (IData)(((0x7f800000U == 
                                      (0x7f800000U 
                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[6U])) 
                                     & (0U != (0x7fffffU 
                                               & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[6U])))))
                          ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__6__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf) 
                                            & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__6__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf))
                                            ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[6U] 
                                                 >> 0x1fU) 
                                                != 
                                                (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[6U] 
                                                 >> 0x1fU))
                                                ? 0x7fc00000U
                                                : (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[6U])))
                                            : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__6__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf)
                                                ? (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[6U]))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__6__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[6U]))
                                                    : 
                                                   (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__6__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero) 
                                                     & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__6__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero))
                                                     ? 
                                                    (0x80000000U 
                                                     & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[6U] 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[6U]))
                                                     : 
                                                    ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__6__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero)
                                                      ? 
                                                     vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[6U]
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__6__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero)
                                                       ? 
                                                      vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[6U]
                                                       : 
                                                      (((0U 
                                                         == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__6__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_exp)) 
                                                        & (0U 
                                                           == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__6__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_mant))
                                                        ? 0U
                                                        : 
                                                       ((0xffU 
                                                         <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__6__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp))
                                                         ? 
                                                        (0x7f800000U 
                                                         | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__6__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                            << 0x1fU))
                                                         : 
                                                        (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__6__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                          << 0x1fU) 
                                                         | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__6__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp) 
                                                             << 0x17U) 
                                                            | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__6__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__rounded_mant)))))))))));
        __Vtemp_9[0U] = (((IData)(((0x7f800000U == 
                                    (0x7f800000U & 
                                     vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[5U])) 
                                   & (0U != (0x7fffffU 
                                             & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[5U])))) 
                          | (IData)(((0x7f800000U == 
                                      (0x7f800000U 
                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[5U])) 
                                     & (0U != (0x7fffffU 
                                               & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[5U])))))
                          ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__5__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf) 
                                            & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__5__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf))
                                            ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[5U] 
                                                 >> 0x1fU) 
                                                != 
                                                (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[5U] 
                                                 >> 0x1fU))
                                                ? 0x7fc00000U
                                                : (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[5U])))
                                            : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__5__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf)
                                                ? (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[5U]))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__5__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[5U]))
                                                    : 
                                                   (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__5__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero) 
                                                     & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__5__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero))
                                                     ? 
                                                    (0x80000000U 
                                                     & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[5U] 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[5U]))
                                                     : 
                                                    ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__5__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero)
                                                      ? 
                                                     vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[5U]
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__5__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero)
                                                       ? 
                                                      vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[5U]
                                                       : 
                                                      (((0U 
                                                         == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__5__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_exp)) 
                                                        & (0U 
                                                           == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__5__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_mant))
                                                        ? 0U
                                                        : 
                                                       ((0xffU 
                                                         <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__5__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp))
                                                         ? 
                                                        (0x7f800000U 
                                                         | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__5__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                            << 0x1fU))
                                                         : 
                                                        (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__5__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                          << 0x1fU) 
                                                         | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__5__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp) 
                                                             << 0x17U) 
                                                            | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__5__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__rounded_mant)))))))))));
        __Vtemp_10[0U] = (((IData)(((0x7f800000U == 
                                     (0x7f800000U & 
                                      vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[4U])) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[4U])))) 
                           | (IData)(((0x7f800000U 
                                       == (0x7f800000U 
                                           & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[4U])) 
                                      & (0U != (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[4U])))))
                           ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__4__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf) 
                                             & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__4__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf))
                                             ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[4U] 
                                                  >> 0x1fU) 
                                                 != 
                                                 (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[4U] 
                                                  >> 0x1fU))
                                                 ? 0x7fc00000U
                                                 : 
                                                (0x7f800000U 
                                                 | (0x80000000U 
                                                    & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[4U])))
                                             : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__4__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf)
                                                 ? 
                                                (0x7f800000U 
                                                 | (0x80000000U 
                                                    & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[4U]))
                                                 : 
                                                ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__4__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf)
                                                  ? 
                                                 (0x7f800000U 
                                                  | (0x80000000U 
                                                     & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[4U]))
                                                  : 
                                                 (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__4__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__4__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero))
                                                   ? 
                                                  (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[4U] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[4U]))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__4__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero)
                                                    ? 
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[4U]
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__4__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[4U]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__4__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__4__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__4__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__4__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__4__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__4__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__4__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__rounded_mant)))))))))));
        __Vtemp_11[0U] = (((IData)(((0x7f800000U == 
                                     (0x7f800000U & 
                                      vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[3U])) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[3U])))) 
                           | (IData)(((0x7f800000U 
                                       == (0x7f800000U 
                                           & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[3U])) 
                                      & (0U != (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[3U])))))
                           ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__3__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf) 
                                             & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__3__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf))
                                             ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[3U] 
                                                  >> 0x1fU) 
                                                 != 
                                                 (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[3U] 
                                                  >> 0x1fU))
                                                 ? 0x7fc00000U
                                                 : 
                                                (0x7f800000U 
                                                 | (0x80000000U 
                                                    & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[3U])))
                                             : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__3__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf)
                                                 ? 
                                                (0x7f800000U 
                                                 | (0x80000000U 
                                                    & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[3U]))
                                                 : 
                                                ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__3__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf)
                                                  ? 
                                                 (0x7f800000U 
                                                  | (0x80000000U 
                                                     & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[3U]))
                                                  : 
                                                 (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__3__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__3__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero))
                                                   ? 
                                                  (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[3U] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[3U]))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__3__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero)
                                                    ? 
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[3U]
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__3__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[3U]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__3__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__3__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__3__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__3__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__3__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__3__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__3__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__rounded_mant)))))))))));
        __Vtemp_12[0U] = (((IData)(((0x7f800000U == 
                                     (0x7f800000U & 
                                      vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[2U])) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[2U])))) 
                           | (IData)(((0x7f800000U 
                                       == (0x7f800000U 
                                           & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[2U])) 
                                      & (0U != (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[2U])))))
                           ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__2__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf) 
                                             & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__2__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf))
                                             ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[2U] 
                                                  >> 0x1fU) 
                                                 != 
                                                 (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[2U] 
                                                  >> 0x1fU))
                                                 ? 0x7fc00000U
                                                 : 
                                                (0x7f800000U 
                                                 | (0x80000000U 
                                                    & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[2U])))
                                             : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__2__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf)
                                                 ? 
                                                (0x7f800000U 
                                                 | (0x80000000U 
                                                    & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[2U]))
                                                 : 
                                                ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__2__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf)
                                                  ? 
                                                 (0x7f800000U 
                                                  | (0x80000000U 
                                                     & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[2U]))
                                                  : 
                                                 (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__2__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__2__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero))
                                                   ? 
                                                  (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[2U] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[2U]))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__2__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero)
                                                    ? 
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[2U]
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__2__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[2U]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__2__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__2__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__2__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__2__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__2__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__2__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__2__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__rounded_mant)))))))))));
        __Vtemp_13[0U] = (((IData)(((0x7f800000U == 
                                     (0x7f800000U & 
                                      vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[1U])) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[1U])))) 
                           | (IData)(((0x7f800000U 
                                       == (0x7f800000U 
                                           & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[1U])) 
                                      & (0U != (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[1U])))))
                           ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__1__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf) 
                                             & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__1__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf))
                                             ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[1U] 
                                                  >> 0x1fU) 
                                                 != 
                                                 (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[1U] 
                                                  >> 0x1fU))
                                                 ? 0x7fc00000U
                                                 : 
                                                (0x7f800000U 
                                                 | (0x80000000U 
                                                    & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[1U])))
                                             : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__1__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf)
                                                 ? 
                                                (0x7f800000U 
                                                 | (0x80000000U 
                                                    & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[1U]))
                                                 : 
                                                ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__1__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf)
                                                  ? 
                                                 (0x7f800000U 
                                                  | (0x80000000U 
                                                     & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[1U]))
                                                  : 
                                                 (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__1__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__1__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero))
                                                   ? 
                                                  (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[1U] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[1U]))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__1__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero)
                                                    ? 
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[1U]
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__1__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[1U]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__1__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__1__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__1__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__1__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__1__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__1__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__1__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__rounded_mant)))))))))));
        vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_write_data[0U] 
            = (((IData)(((0x7f800000U == (0x7f800000U 
                                          & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0U])) 
                         & (0U != (0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0U])))) 
                | (IData)(((0x7f800000U == (0x7f800000U 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0U])) 
                           & (0U != (0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0U])))))
                ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__0__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf) 
                                  & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__0__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf))
                                  ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0U] 
                                       >> 0x1fU) != 
                                      (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0U] 
                                       >> 0x1fU)) ? 0x7fc00000U
                                      : (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0U])))
                                  : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__0__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf)
                                      ? (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0U]))
                                      : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__0__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf)
                                          ? (0x7f800000U 
                                             | (0x80000000U 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0U]))
                                          : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__0__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero) 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__0__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero))
                                              ? (0x80000000U 
                                                 & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0U] 
                                                    & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0U]))
                                              : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__0__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero)
                                                  ? 
                                                 vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0U]
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__0__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0U]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__0__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__0__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__0__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__0__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__0__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__0__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__0__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__rounded_mant)))))))))));
    }
    __Vtemp_1[1U] = (IData)((((QData)((IData)(((IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_clear_q)
                                                ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xfU]
                                                : (
                                                   ((IData)(
                                                            ((0x7f800000U 
                                                              == 
                                                              (0x7f800000U 
                                                               & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xfU])) 
                                                             & (0U 
                                                                != 
                                                                (0x7fffffU 
                                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xfU])))) 
                                                    | (IData)(
                                                              ((0x7f800000U 
                                                                == 
                                                                (0x7f800000U 
                                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xfU])) 
                                                               & (0U 
                                                                  != 
                                                                  (0x7fffffU 
                                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xfU])))))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf) 
                                                     & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf))
                                                     ? 
                                                    (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xfU] 
                                                       >> 0x1fU) 
                                                      != 
                                                      (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xfU] 
                                                       >> 0x1fU))
                                                      ? 0x7fc00000U
                                                      : 
                                                     (0x7f800000U 
                                                      | (0x80000000U 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xfU])))
                                                     : 
                                                    ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf)
                                                      ? 
                                                     (0x7f800000U 
                                                      | (0x80000000U 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xfU]))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf)
                                                       ? 
                                                      (0x7f800000U 
                                                       | (0x80000000U 
                                                          & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xfU]))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero) 
                                                        & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero))
                                                        ? 
                                                       (0x80000000U 
                                                        & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xfU] 
                                                           & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xfU]))
                                                        : 
                                                       ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero)
                                                         ? 
                                                        vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xfU]
                                                         : 
                                                        ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero)
                                                          ? 
                                                         vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xfU]
                                                          : 
                                                         (((0U 
                                                            == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_exp)) 
                                                           & (0U 
                                                              == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_mant))
                                                           ? 0U
                                                           : 
                                                          ((0xffU 
                                                            <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp))
                                                            ? 
                                                           (0x7f800000U 
                                                            | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                               << 0x1fU))
                                                            : 
                                                           (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                             << 0x1fU) 
                                                            | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp) 
                                                                << 0x17U) 
                                                               | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__rounded_mant)))))))))))))) 
                              << 0x20U) | (QData)((IData)(
                                                          ((IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_clear_q)
                                                            ? 
                                                           vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xeU]
                                                            : 
                                                           (((IData)(
                                                                     ((0x7f800000U 
                                                                       == 
                                                                       (0x7f800000U 
                                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xeU])) 
                                                                      & (0U 
                                                                         != 
                                                                         (0x7fffffU 
                                                                          & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xeU])))) 
                                                             | (IData)(
                                                                       ((0x7f800000U 
                                                                         == 
                                                                         (0x7f800000U 
                                                                          & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xeU])) 
                                                                        & (0U 
                                                                           != 
                                                                           (0x7fffffU 
                                                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xeU])))))
                                                             ? 0x7fc00000U
                                                             : 
                                                            (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf) 
                                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf))
                                                              ? 
                                                             (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xeU] 
                                                                >> 0x1fU) 
                                                               != 
                                                               (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xeU] 
                                                                >> 0x1fU))
                                                               ? 0x7fc00000U
                                                               : 
                                                              (0x7f800000U 
                                                               | (0x80000000U 
                                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xeU])))
                                                              : 
                                                             ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf)
                                                               ? 
                                                              (0x7f800000U 
                                                               | (0x80000000U 
                                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xeU]))
                                                               : 
                                                              ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf)
                                                                ? 
                                                               (0x7f800000U 
                                                                | (0x80000000U 
                                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xeU]))
                                                                : 
                                                               (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero) 
                                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero))
                                                                 ? 
                                                                (0x80000000U 
                                                                 & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xeU] 
                                                                    & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xeU]))
                                                                 : 
                                                                ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero)
                                                                  ? 
                                                                 vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xeU]
                                                                  : 
                                                                 ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero)
                                                                   ? 
                                                                  vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xeU]
                                                                   : 
                                                                  (((0U 
                                                                     == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_exp)) 
                                                                    & (0U 
                                                                       == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_mant))
                                                                    ? 0U
                                                                    : 
                                                                   ((0xffU 
                                                                     <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp))
                                                                     ? 
                                                                    (0x7f800000U 
                                                                     | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                                        << 0x1fU))
                                                                     : 
                                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                                      << 0x1fU) 
                                                                     | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp) 
                                                                         << 0x17U) 
                                                                        | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__rounded_mant))))))))))))))));
    __Vtemp_1[2U] = (IData)(((((QData)((IData)(((IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_clear_q)
                                                 ? 
                                                vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xfU]
                                                 : 
                                                (((IData)(
                                                          ((0x7f800000U 
                                                            == 
                                                            (0x7f800000U 
                                                             & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xfU])) 
                                                           & (0U 
                                                              != 
                                                              (0x7fffffU 
                                                               & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xfU])))) 
                                                  | (IData)(
                                                            ((0x7f800000U 
                                                              == 
                                                              (0x7f800000U 
                                                               & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xfU])) 
                                                             & (0U 
                                                                != 
                                                                (0x7fffffU 
                                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xfU])))))
                                                  ? 0x7fc00000U
                                                  : 
                                                 (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xfU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xfU] 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xfU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xfU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xfU]))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xfU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xfU]))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero)
                                                       ? 
                                                      vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xfU]
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xfU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__rounded_mant)))))))))))))) 
                               << 0x20U) | (QData)((IData)(
                                                           ((IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_clear_q)
                                                             ? 
                                                            vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xeU]
                                                             : 
                                                            (((IData)(
                                                                      ((0x7f800000U 
                                                                        == 
                                                                        (0x7f800000U 
                                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xeU])) 
                                                                       & (0U 
                                                                          != 
                                                                          (0x7fffffU 
                                                                           & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xeU])))) 
                                                              | (IData)(
                                                                        ((0x7f800000U 
                                                                          == 
                                                                          (0x7f800000U 
                                                                           & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xeU])) 
                                                                         & (0U 
                                                                            != 
                                                                            (0x7fffffU 
                                                                             & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xeU])))))
                                                              ? 0x7fc00000U
                                                              : 
                                                             (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf) 
                                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf))
                                                               ? 
                                                              (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xeU] 
                                                                 >> 0x1fU) 
                                                                != 
                                                                (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xeU] 
                                                                 >> 0x1fU))
                                                                ? 0x7fc00000U
                                                                : 
                                                               (0x7f800000U 
                                                                | (0x80000000U 
                                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xeU])))
                                                               : 
                                                              ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf)
                                                                ? 
                                                               (0x7f800000U 
                                                                | (0x80000000U 
                                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xeU]))
                                                                : 
                                                               ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf)
                                                                 ? 
                                                                (0x7f800000U 
                                                                 | (0x80000000U 
                                                                    & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xeU]))
                                                                 : 
                                                                (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero) 
                                                                  & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero))
                                                                  ? 
                                                                 (0x80000000U 
                                                                  & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xeU] 
                                                                     & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xeU]))
                                                                  : 
                                                                 ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero)
                                                                   ? 
                                                                  vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__array_psum_q[0xeU]
                                                                   : 
                                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero)
                                                                    ? 
                                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_rd_data[0xeU]
                                                                    : 
                                                                   (((0U 
                                                                      == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_exp)) 
                                                                     & (0U 
                                                                        == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_mant))
                                                                     ? 0U
                                                                     : 
                                                                    ((0xffU 
                                                                      <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp))
                                                                      ? 
                                                                     (0x7f800000U 
                                                                      | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                                         << 0x1fU))
                                                                      : 
                                                                     (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                                       << 0x1fU) 
                                                                      | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp) 
                                                                          << 0x17U) 
                                                                         | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__rounded_mant))))))))))))))) 
                             >> 0x20U));
    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_write_data[1U] 
        = __Vtemp_13[0U];
    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_write_data[2U] 
        = __Vtemp_12[0U];
    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_write_data[3U] 
        = __Vtemp_11[0U];
    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_write_data[4U] 
        = __Vtemp_10[0U];
    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_write_data[5U] 
        = __Vtemp_9[0U];
    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_write_data[6U] 
        = __Vtemp_8[0U];
    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_write_data[7U] 
        = __Vtemp_7[0U];
    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_write_data[8U] 
        = __Vtemp_6[0U];
    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_write_data[9U] 
        = __Vtemp_5[0U];
    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_write_data[0xaU] 
        = __Vtemp_4[0U];
    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_write_data[0xbU] 
        = __Vtemp_3[0U];
    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_write_data[0xcU] 
        = __Vtemp_2[0U];
    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_write_data[0xdU] 
        = __Vtemp_1[0U];
    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_write_data[0xeU] 
        = __Vtemp_1[1U];
    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__acc_write_data[0xfU] 
        = __Vtemp_1[2U];
}

void Vnpu_system_top___024root___nba_sequent__TOP__0(Vnpu_system_top___024root* vlSelf);
void Vnpu_system_top___024root___nba_sequent__TOP__1(Vnpu_system_top___024root* vlSelf);
void Vnpu_system_top___024root___nba_sequent__TOP__2(Vnpu_system_top___024root* vlSelf);
void Vnpu_system_top___024root___nba_sequent__TOP__3(Vnpu_system_top___024root* vlSelf);
void Vnpu_system_top___024root___nba_sequent__TOP__4(Vnpu_system_top___024root* vlSelf);
void Vnpu_system_top___024root___nba_sequent__TOP__5(Vnpu_system_top___024root* vlSelf);
void Vnpu_system_top___024root___nba_sequent__TOP__6(Vnpu_system_top___024root* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__0__KET____DOT__MODE_FP16__DOT__u_acc_adder__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__1__KET____DOT__MODE_FP16__DOT__u_acc_adder__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__2__KET____DOT__MODE_FP16__DOT__u_acc_adder__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__3__KET____DOT__MODE_FP16__DOT__u_acc_adder__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__4__KET____DOT__MODE_FP16__DOT__u_acc_adder__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__5__KET____DOT__MODE_FP16__DOT__u_acc_adder__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__6__KET____DOT__MODE_FP16__DOT__u_acc_adder__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__7__KET____DOT__MODE_FP16__DOT__u_acc_adder__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__8__KET____DOT__MODE_FP16__DOT__u_acc_adder__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__9__KET____DOT__MODE_FP16__DOT__u_acc_adder__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__10__KET____DOT__MODE_FP16__DOT__u_acc_adder__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__11__KET____DOT__MODE_FP16__DOT__u_acc_adder__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__12__KET____DOT__MODE_FP16__DOT__u_acc_adder__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__13__KET____DOT__MODE_FP16__DOT__u_acc_adder__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);
void Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_system_top_fp32_adder* vlSelf);

void Vnpu_system_top___024root___eval_nba(Vnpu_system_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_system_top___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vnpu_system_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vnpu_system_top___024root___nba_sequent__TOP__1(vlSelf);
        Vnpu_system_top___024root___nba_sequent__TOP__2(vlSelf);
        Vnpu_system_top___024root___nba_sequent__TOP__3(vlSelf);
        Vnpu_system_top___024root___nba_sequent__TOP__4(vlSelf);
        Vnpu_system_top___024root___nba_sequent__TOP__5(vlSelf);
        Vnpu_system_top___024root___nba_sequent__TOP__6(vlSelf);
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__0__KET____DOT__MODE_FP16__DOT__u_acc_adder__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__0__KET____DOT__MODE_FP16__DOT__u_acc_adder));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__1__KET____DOT__MODE_FP16__DOT__u_acc_adder__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__1__KET____DOT__MODE_FP16__DOT__u_acc_adder));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__2__KET____DOT__MODE_FP16__DOT__u_acc_adder__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__2__KET____DOT__MODE_FP16__DOT__u_acc_adder));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__3__KET____DOT__MODE_FP16__DOT__u_acc_adder__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__3__KET____DOT__MODE_FP16__DOT__u_acc_adder));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__4__KET____DOT__MODE_FP16__DOT__u_acc_adder__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__4__KET____DOT__MODE_FP16__DOT__u_acc_adder));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__5__KET____DOT__MODE_FP16__DOT__u_acc_adder__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__5__KET____DOT__MODE_FP16__DOT__u_acc_adder));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__6__KET____DOT__MODE_FP16__DOT__u_acc_adder__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__6__KET____DOT__MODE_FP16__DOT__u_acc_adder));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__7__KET____DOT__MODE_FP16__DOT__u_acc_adder__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__7__KET____DOT__MODE_FP16__DOT__u_acc_adder));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__8__KET____DOT__MODE_FP16__DOT__u_acc_adder__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__8__KET____DOT__MODE_FP16__DOT__u_acc_adder));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__9__KET____DOT__MODE_FP16__DOT__u_acc_adder__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__9__KET____DOT__MODE_FP16__DOT__u_acc_adder));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__10__KET____DOT__MODE_FP16__DOT__u_acc_adder__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__10__KET____DOT__MODE_FP16__DOT__u_acc_adder));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__11__KET____DOT__MODE_FP16__DOT__u_acc_adder__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__11__KET____DOT__MODE_FP16__DOT__u_acc_adder));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__12__KET____DOT__MODE_FP16__DOT__u_acc_adder__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__12__KET____DOT__MODE_FP16__DOT__u_acc_adder));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__13__KET____DOT__MODE_FP16__DOT__u_acc_adder__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__13__KET____DOT__MODE_FP16__DOT__u_acc_adder));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top_fp32_adder___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0((&vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add));
        Vnpu_system_top___024root___nba_sequent__TOP__7(vlSelf);
    }
}
