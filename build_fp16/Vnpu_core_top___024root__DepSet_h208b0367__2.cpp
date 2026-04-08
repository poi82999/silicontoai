// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpu_core_top.h for the primary calling header

#include "Vnpu_core_top__pch.h"
#include "Vnpu_core_top__Syms.h"
#include "Vnpu_core_top___024root.h"

VL_INLINE_OPT void Vnpu_core_top___024root___nba_sequent__TOP__2(Vnpu_core_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_core_top___024root___nba_sequent__TOP__2\n"); );
    // Init
    VlWide<8>/*255:0*/ npu_core_top__DOT__u_systolic_array__DOT__act_skewed;
    VL_ZERO_W(256, npu_core_top__DOT__u_systolic_array__DOT__act_skewed);
    // Body
    if (vlSelf->rst_n) {
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__psum_out 
            = ((((0xffU == (0xffU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [2U][9U] >> 0x17U))) 
                 & (0U != (0x7fffffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                           [2U][9U]))) | (IData)(((0x7f800000U 
                                                   == 
                                                   (0x7f800000U 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                                  & (0U 
                                                     != 
                                                     (0x7fffffU 
                                                      & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                  & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                  ? (((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                       [2U][9U] >> 0x1fU) 
                                      != (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                          >> 0x1fU))
                                      ? 0x7fc00000U
                                      : (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [2U][9U])))
                                  : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                      ? (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [2U][9U]))
                                      : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                          ? (0x7f800000U 
                                             | (0x80000000U 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                          : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                              & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                              ? (0x80000000U 
                                                 & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [2U]
                                                    [9U] 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                              : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [2U]
                                                  [9U]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))));
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__psum_out 
            = ((((0xffU == (0xffU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [2U][8U] >> 0x17U))) 
                 & (0U != (0x7fffffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                           [2U][8U]))) | (IData)(((0x7f800000U 
                                                   == 
                                                   (0x7f800000U 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                                  & (0U 
                                                     != 
                                                     (0x7fffffU 
                                                      & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                  & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                  ? (((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                       [2U][8U] >> 0x1fU) 
                                      != (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                          >> 0x1fU))
                                      ? 0x7fc00000U
                                      : (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [2U][8U])))
                                  : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                      ? (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [2U][8U]))
                                      : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                          ? (0x7f800000U 
                                             | (0x80000000U 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                          : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                              & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                              ? (0x80000000U 
                                                 & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [2U]
                                                    [8U] 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                              : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [2U]
                                                  [8U]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))));
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__psum_out 
            = ((((0xffU == (0xffU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [2U][7U] >> 0x17U))) 
                 & (0U != (0x7fffffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                           [2U][7U]))) | (IData)(((0x7f800000U 
                                                   == 
                                                   (0x7f800000U 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                                  & (0U 
                                                     != 
                                                     (0x7fffffU 
                                                      & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                  & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                  ? (((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                       [2U][7U] >> 0x1fU) 
                                      != (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                          >> 0x1fU))
                                      ? 0x7fc00000U
                                      : (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [2U][7U])))
                                  : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                      ? (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [2U][7U]))
                                      : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                          ? (0x7f800000U 
                                             | (0x80000000U 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                          : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                              & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                              ? (0x80000000U 
                                                 & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [2U]
                                                    [7U] 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                              : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [2U]
                                                  [7U]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))));
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__psum_out 
            = ((((0xffU == (0xffU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [2U][6U] >> 0x17U))) 
                 & (0U != (0x7fffffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                           [2U][6U]))) | (IData)(((0x7f800000U 
                                                   == 
                                                   (0x7f800000U 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                                  & (0U 
                                                     != 
                                                     (0x7fffffU 
                                                      & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                  & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                  ? (((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                       [2U][6U] >> 0x1fU) 
                                      != (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                          >> 0x1fU))
                                      ? 0x7fc00000U
                                      : (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [2U][6U])))
                                  : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                      ? (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [2U][6U]))
                                      : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                          ? (0x7f800000U 
                                             | (0x80000000U 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                          : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                              & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                              ? (0x80000000U 
                                                 & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [2U]
                                                    [6U] 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                              : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [2U]
                                                  [6U]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))));
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__psum_out 
            = ((((0xffU == (0xffU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [2U][5U] >> 0x17U))) 
                 & (0U != (0x7fffffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                           [2U][5U]))) | (IData)(((0x7f800000U 
                                                   == 
                                                   (0x7f800000U 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                                  & (0U 
                                                     != 
                                                     (0x7fffffU 
                                                      & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                  & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                  ? (((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                       [2U][5U] >> 0x1fU) 
                                      != (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                          >> 0x1fU))
                                      ? 0x7fc00000U
                                      : (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [2U][5U])))
                                  : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                      ? (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [2U][5U]))
                                      : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                          ? (0x7f800000U 
                                             | (0x80000000U 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                          : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                              & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                              ? (0x80000000U 
                                                 & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [2U]
                                                    [5U] 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                              : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [2U]
                                                  [5U]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))));
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__psum_out 
            = ((((0xffU == (0xffU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [2U][4U] >> 0x17U))) 
                 & (0U != (0x7fffffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                           [2U][4U]))) | (IData)(((0x7f800000U 
                                                   == 
                                                   (0x7f800000U 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                                  & (0U 
                                                     != 
                                                     (0x7fffffU 
                                                      & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                  & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                  ? (((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                       [2U][4U] >> 0x1fU) 
                                      != (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                          >> 0x1fU))
                                      ? 0x7fc00000U
                                      : (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [2U][4U])))
                                  : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                      ? (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [2U][4U]))
                                      : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                          ? (0x7f800000U 
                                             | (0x80000000U 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                          : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                              & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                              ? (0x80000000U 
                                                 & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [2U]
                                                    [4U] 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                              : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [2U]
                                                  [4U]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))));
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__psum_out 
            = ((((0xffU == (0xffU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [2U][3U] >> 0x17U))) 
                 & (0U != (0x7fffffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                           [2U][3U]))) | (IData)(((0x7f800000U 
                                                   == 
                                                   (0x7f800000U 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                                  & (0U 
                                                     != 
                                                     (0x7fffffU 
                                                      & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                  & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                  ? (((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                       [2U][3U] >> 0x1fU) 
                                      != (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                          >> 0x1fU))
                                      ? 0x7fc00000U
                                      : (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [2U][3U])))
                                  : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                      ? (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [2U][3U]))
                                      : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                          ? (0x7f800000U 
                                             | (0x80000000U 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                          : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                              & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                              ? (0x80000000U 
                                                 & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [2U]
                                                    [3U] 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                              : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [2U]
                                                  [3U]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))));
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__psum_out 
            = ((((0xffU == (0xffU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [2U][2U] >> 0x17U))) 
                 & (0U != (0x7fffffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                           [2U][2U]))) | (IData)(((0x7f800000U 
                                                   == 
                                                   (0x7f800000U 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                                  & (0U 
                                                     != 
                                                     (0x7fffffU 
                                                      & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                  & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                  ? (((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                       [2U][2U] >> 0x1fU) 
                                      != (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                          >> 0x1fU))
                                      ? 0x7fc00000U
                                      : (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [2U][2U])))
                                  : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                      ? (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [2U][2U]))
                                      : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                          ? (0x7f800000U 
                                             | (0x80000000U 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                          : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                              & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                              ? (0x80000000U 
                                                 & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [2U]
                                                    [2U] 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                              : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [2U]
                                                  [2U]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))));
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__psum_out 
            = ((((0xffU == (0xffU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [2U][1U] >> 0x17U))) 
                 & (0U != (0x7fffffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                           [2U][1U]))) | (IData)(((0x7f800000U 
                                                   == 
                                                   (0x7f800000U 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                                  & (0U 
                                                     != 
                                                     (0x7fffffU 
                                                      & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                  & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                  ? (((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                       [2U][1U] >> 0x1fU) 
                                      != (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                          >> 0x1fU))
                                      ? 0x7fc00000U
                                      : (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [2U][1U])))
                                  : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                      ? (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [2U][1U]))
                                      : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                          ? (0x7f800000U 
                                             | (0x80000000U 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                          : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                              & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                              ? (0x80000000U 
                                                 & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [2U]
                                                    [1U] 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                              : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [2U]
                                                  [1U]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))));
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__psum_out 
            = ((((0xffU == (0xffU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [2U][0U] >> 0x17U))) 
                 & (0U != (0x7fffffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                           [2U][0U]))) | (IData)(((0x7f800000U 
                                                   == 
                                                   (0x7f800000U 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                                  & (0U 
                                                     != 
                                                     (0x7fffffU 
                                                      & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                  & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                  ? (((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                       [2U][0U] >> 0x1fU) 
                                      != (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                          >> 0x1fU))
                                      ? 0x7fc00000U
                                      : (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [2U][0U])))
                                  : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                      ? (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [2U][0U]))
                                      : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                          ? (0x7f800000U 
                                             | (0x80000000U 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                          : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                              & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                              ? (0x80000000U 
                                                 & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [2U]
                                                    [0U] 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                              : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [2U]
                                                  [0U]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))));
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__psum_out 
            = ((((0xffU == (0xffU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [1U][0xfU] >> 0x17U))) 
                 & (0U != (0x7fffffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                           [1U][0xfU]))) | (IData)(
                                                   ((0x7f800000U 
                                                     == 
                                                     (0x7f800000U 
                                                      & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                                    & (0U 
                                                       != 
                                                       (0x7fffffU 
                                                        & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                  & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                  ? (((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                       [1U][0xfU] >> 0x1fU) 
                                      != (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                          >> 0x1fU))
                                      ? 0x7fc00000U
                                      : (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][0xfU])))
                                  : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                      ? (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][0xfU]))
                                      : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                          ? (0x7f800000U 
                                             | (0x80000000U 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                          : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                              & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                              ? (0x80000000U 
                                                 & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [1U]
                                                    [0xfU] 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                              : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [1U]
                                                  [0xfU]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))));
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__psum_out 
            = ((((0xffU == (0xffU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [1U][0xeU] >> 0x17U))) 
                 & (0U != (0x7fffffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                           [1U][0xeU]))) | (IData)(
                                                   ((0x7f800000U 
                                                     == 
                                                     (0x7f800000U 
                                                      & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                                    & (0U 
                                                       != 
                                                       (0x7fffffU 
                                                        & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                  & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                  ? (((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                       [1U][0xeU] >> 0x1fU) 
                                      != (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                          >> 0x1fU))
                                      ? 0x7fc00000U
                                      : (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][0xeU])))
                                  : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                      ? (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][0xeU]))
                                      : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                          ? (0x7f800000U 
                                             | (0x80000000U 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                          : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                              & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                              ? (0x80000000U 
                                                 & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [1U]
                                                    [0xeU] 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                              : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [1U]
                                                  [0xeU]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))));
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__psum_out 
            = ((((0xffU == (0xffU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [1U][0xdU] >> 0x17U))) 
                 & (0U != (0x7fffffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                           [1U][0xdU]))) | (IData)(
                                                   ((0x7f800000U 
                                                     == 
                                                     (0x7f800000U 
                                                      & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                                    & (0U 
                                                       != 
                                                       (0x7fffffU 
                                                        & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                  & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                  ? (((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                       [1U][0xdU] >> 0x1fU) 
                                      != (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                          >> 0x1fU))
                                      ? 0x7fc00000U
                                      : (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][0xdU])))
                                  : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                      ? (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][0xdU]))
                                      : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                          ? (0x7f800000U 
                                             | (0x80000000U 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                          : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                              & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                              ? (0x80000000U 
                                                 & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [1U]
                                                    [0xdU] 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                              : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [1U]
                                                  [0xdU]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))));
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__psum_out 
            = ((((0xffU == (0xffU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [1U][0xcU] >> 0x17U))) 
                 & (0U != (0x7fffffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                           [1U][0xcU]))) | (IData)(
                                                   ((0x7f800000U 
                                                     == 
                                                     (0x7f800000U 
                                                      & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                                    & (0U 
                                                       != 
                                                       (0x7fffffU 
                                                        & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                  & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                  ? (((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                       [1U][0xcU] >> 0x1fU) 
                                      != (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                          >> 0x1fU))
                                      ? 0x7fc00000U
                                      : (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][0xcU])))
                                  : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                      ? (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][0xcU]))
                                      : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                          ? (0x7f800000U 
                                             | (0x80000000U 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                          : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                              & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                              ? (0x80000000U 
                                                 & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [1U]
                                                    [0xcU] 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                              : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [1U]
                                                  [0xcU]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))));
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__psum_out 
            = ((((0xffU == (0xffU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [1U][0xbU] >> 0x17U))) 
                 & (0U != (0x7fffffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                           [1U][0xbU]))) | (IData)(
                                                   ((0x7f800000U 
                                                     == 
                                                     (0x7f800000U 
                                                      & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                                    & (0U 
                                                       != 
                                                       (0x7fffffU 
                                                        & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                  & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                  ? (((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                       [1U][0xbU] >> 0x1fU) 
                                      != (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                          >> 0x1fU))
                                      ? 0x7fc00000U
                                      : (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][0xbU])))
                                  : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                      ? (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][0xbU]))
                                      : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                          ? (0x7f800000U 
                                             | (0x80000000U 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                          : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                              & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                              ? (0x80000000U 
                                                 & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [1U]
                                                    [0xbU] 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                              : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [1U]
                                                  [0xbU]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))));
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__psum_out 
            = ((((0xffU == (0xffU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [1U][0xaU] >> 0x17U))) 
                 & (0U != (0x7fffffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                           [1U][0xaU]))) | (IData)(
                                                   ((0x7f800000U 
                                                     == 
                                                     (0x7f800000U 
                                                      & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                                    & (0U 
                                                       != 
                                                       (0x7fffffU 
                                                        & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                  & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                  ? (((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                       [1U][0xaU] >> 0x1fU) 
                                      != (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                          >> 0x1fU))
                                      ? 0x7fc00000U
                                      : (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][0xaU])))
                                  : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                      ? (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][0xaU]))
                                      : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                          ? (0x7f800000U 
                                             | (0x80000000U 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                          : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                              & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                              ? (0x80000000U 
                                                 & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [1U]
                                                    [0xaU] 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                              : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [1U]
                                                  [0xaU]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))));
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__psum_out 
            = ((((0xffU == (0xffU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [1U][9U] >> 0x17U))) 
                 & (0U != (0x7fffffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                           [1U][9U]))) | (IData)(((0x7f800000U 
                                                   == 
                                                   (0x7f800000U 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                                  & (0U 
                                                     != 
                                                     (0x7fffffU 
                                                      & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                  & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                  ? (((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                       [1U][9U] >> 0x1fU) 
                                      != (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                          >> 0x1fU))
                                      ? 0x7fc00000U
                                      : (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][9U])))
                                  : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                      ? (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][9U]))
                                      : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                          ? (0x7f800000U 
                                             | (0x80000000U 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                          : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                              & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                              ? (0x80000000U 
                                                 & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [1U]
                                                    [9U] 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                              : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [1U]
                                                  [9U]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))));
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__psum_out 
            = ((((0xffU == (0xffU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [1U][8U] >> 0x17U))) 
                 & (0U != (0x7fffffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                           [1U][8U]))) | (IData)(((0x7f800000U 
                                                   == 
                                                   (0x7f800000U 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                                  & (0U 
                                                     != 
                                                     (0x7fffffU 
                                                      & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                  & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                  ? (((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                       [1U][8U] >> 0x1fU) 
                                      != (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                          >> 0x1fU))
                                      ? 0x7fc00000U
                                      : (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][8U])))
                                  : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                      ? (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][8U]))
                                      : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                          ? (0x7f800000U 
                                             | (0x80000000U 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                          : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                              & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                              ? (0x80000000U 
                                                 & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [1U]
                                                    [8U] 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                              : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [1U]
                                                  [8U]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))));
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__psum_out 
            = ((((0xffU == (0xffU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [1U][7U] >> 0x17U))) 
                 & (0U != (0x7fffffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                           [1U][7U]))) | (IData)(((0x7f800000U 
                                                   == 
                                                   (0x7f800000U 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                                  & (0U 
                                                     != 
                                                     (0x7fffffU 
                                                      & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                  & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                  ? (((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                       [1U][7U] >> 0x1fU) 
                                      != (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                          >> 0x1fU))
                                      ? 0x7fc00000U
                                      : (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][7U])))
                                  : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                      ? (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][7U]))
                                      : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                          ? (0x7f800000U 
                                             | (0x80000000U 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                          : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                              & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                              ? (0x80000000U 
                                                 & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [1U]
                                                    [7U] 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                              : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [1U]
                                                  [7U]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))));
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__psum_out 
            = ((((0xffU == (0xffU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [1U][6U] >> 0x17U))) 
                 & (0U != (0x7fffffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                           [1U][6U]))) | (IData)(((0x7f800000U 
                                                   == 
                                                   (0x7f800000U 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                                  & (0U 
                                                     != 
                                                     (0x7fffffU 
                                                      & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                  & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                  ? (((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                       [1U][6U] >> 0x1fU) 
                                      != (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                          >> 0x1fU))
                                      ? 0x7fc00000U
                                      : (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][6U])))
                                  : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                      ? (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][6U]))
                                      : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                          ? (0x7f800000U 
                                             | (0x80000000U 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                          : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                              & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                              ? (0x80000000U 
                                                 & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [1U]
                                                    [6U] 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                              : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [1U]
                                                  [6U]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))));
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__psum_out 
            = ((((0xffU == (0xffU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [1U][5U] >> 0x17U))) 
                 & (0U != (0x7fffffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                           [1U][5U]))) | (IData)(((0x7f800000U 
                                                   == 
                                                   (0x7f800000U 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                                  & (0U 
                                                     != 
                                                     (0x7fffffU 
                                                      & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                  & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                  ? (((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                       [1U][5U] >> 0x1fU) 
                                      != (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                          >> 0x1fU))
                                      ? 0x7fc00000U
                                      : (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][5U])))
                                  : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                      ? (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][5U]))
                                      : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                          ? (0x7f800000U 
                                             | (0x80000000U 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                          : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                              & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                              ? (0x80000000U 
                                                 & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [1U]
                                                    [5U] 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                              : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [1U]
                                                  [5U]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))));
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__psum_out 
            = ((((0xffU == (0xffU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [1U][4U] >> 0x17U))) 
                 & (0U != (0x7fffffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                           [1U][4U]))) | (IData)(((0x7f800000U 
                                                   == 
                                                   (0x7f800000U 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                                  & (0U 
                                                     != 
                                                     (0x7fffffU 
                                                      & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                  & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                  ? (((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                       [1U][4U] >> 0x1fU) 
                                      != (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                          >> 0x1fU))
                                      ? 0x7fc00000U
                                      : (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][4U])))
                                  : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                      ? (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][4U]))
                                      : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                          ? (0x7f800000U 
                                             | (0x80000000U 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                          : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                              & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                              ? (0x80000000U 
                                                 & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [1U]
                                                    [4U] 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                              : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [1U]
                                                  [4U]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))));
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__psum_out 
            = ((((0xffU == (0xffU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [1U][3U] >> 0x17U))) 
                 & (0U != (0x7fffffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                           [1U][3U]))) | (IData)(((0x7f800000U 
                                                   == 
                                                   (0x7f800000U 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                                  & (0U 
                                                     != 
                                                     (0x7fffffU 
                                                      & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                  & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                  ? (((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                       [1U][3U] >> 0x1fU) 
                                      != (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                          >> 0x1fU))
                                      ? 0x7fc00000U
                                      : (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][3U])))
                                  : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                      ? (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][3U]))
                                      : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                          ? (0x7f800000U 
                                             | (0x80000000U 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                          : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                              & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                              ? (0x80000000U 
                                                 & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [1U]
                                                    [3U] 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                              : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [1U]
                                                  [3U]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))));
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__psum_out 
            = ((((0xffU == (0xffU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [1U][2U] >> 0x17U))) 
                 & (0U != (0x7fffffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                           [1U][2U]))) | (IData)(((0x7f800000U 
                                                   == 
                                                   (0x7f800000U 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                                  & (0U 
                                                     != 
                                                     (0x7fffffU 
                                                      & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                  & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                  ? (((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                       [1U][2U] >> 0x1fU) 
                                      != (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                          >> 0x1fU))
                                      ? 0x7fc00000U
                                      : (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][2U])))
                                  : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                      ? (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][2U]))
                                      : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                          ? (0x7f800000U 
                                             | (0x80000000U 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                          : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                              & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                              ? (0x80000000U 
                                                 & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [1U]
                                                    [2U] 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                              : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [1U]
                                                  [2U]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))));
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__psum_out 
            = ((((0xffU == (0xffU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [1U][1U] >> 0x17U))) 
                 & (0U != (0x7fffffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                           [1U][1U]))) | (IData)(((0x7f800000U 
                                                   == 
                                                   (0x7f800000U 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                                  & (0U 
                                                     != 
                                                     (0x7fffffU 
                                                      & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                  & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                  ? (((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                       [1U][1U] >> 0x1fU) 
                                      != (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                          >> 0x1fU))
                                      ? 0x7fc00000U
                                      : (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][1U])))
                                  : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                      ? (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][1U]))
                                      : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                          ? (0x7f800000U 
                                             | (0x80000000U 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                          : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                              & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                              ? (0x80000000U 
                                                 & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [1U]
                                                    [1U] 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                              : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [1U]
                                                  [1U]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))));
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__psum_out 
            = ((((0xffU == (0xffU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [1U][0U] >> 0x17U))) 
                 & (0U != (0x7fffffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                           [1U][0U]))) | (IData)(((0x7f800000U 
                                                   == 
                                                   (0x7f800000U 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                                  & (0U 
                                                     != 
                                                     (0x7fffffU 
                                                      & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                  & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                  ? (((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                       [1U][0U] >> 0x1fU) 
                                      != (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                          >> 0x1fU))
                                      ? 0x7fc00000U
                                      : (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][0U])))
                                  : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                      ? (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][0U]))
                                      : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                          ? (0x7f800000U 
                                             | (0x80000000U 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                          : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                              & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                              ? (0x80000000U 
                                                 & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [1U]
                                                    [0U] 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                              : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [1U]
                                                  [0U]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))));
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__psum_out 
            = ((((0xffU == (0xffU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [0U][0xfU] >> 0x17U))) 
                 & (0U != (0x7fffffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                           [0U][0xfU]))) | (IData)(
                                                   ((0x7f800000U 
                                                     == 
                                                     (0x7f800000U 
                                                      & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                                    & (0U 
                                                       != 
                                                       (0x7fffffU 
                                                        & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                  & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                  ? (((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                       [0U][0xfU] >> 0x1fU) 
                                      != (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                          >> 0x1fU))
                                      ? 0x7fc00000U
                                      : (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0U][0xfU])))
                                  : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                      ? (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0U][0xfU]))
                                      : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                          ? (0x7f800000U 
                                             | (0x80000000U 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                          : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                              & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                              ? (0x80000000U 
                                                 & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0U]
                                                    [0xfU] 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                              : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0U]
                                                  [0xfU]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))));
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__psum_out 
            = ((((0xffU == (0xffU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [0U][0xeU] >> 0x17U))) 
                 & (0U != (0x7fffffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                           [0U][0xeU]))) | (IData)(
                                                   ((0x7f800000U 
                                                     == 
                                                     (0x7f800000U 
                                                      & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                                    & (0U 
                                                       != 
                                                       (0x7fffffU 
                                                        & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                  & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                  ? (((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                       [0U][0xeU] >> 0x1fU) 
                                      != (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                          >> 0x1fU))
                                      ? 0x7fc00000U
                                      : (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0U][0xeU])))
                                  : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                      ? (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0U][0xeU]))
                                      : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                          ? (0x7f800000U 
                                             | (0x80000000U 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                          : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                              & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                              ? (0x80000000U 
                                                 & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0U]
                                                    [0xeU] 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                              : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0U]
                                                  [0xeU]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))));
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__psum_out 
            = ((((0xffU == (0xffU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [0U][0xdU] >> 0x17U))) 
                 & (0U != (0x7fffffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                           [0U][0xdU]))) | (IData)(
                                                   ((0x7f800000U 
                                                     == 
                                                     (0x7f800000U 
                                                      & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                                    & (0U 
                                                       != 
                                                       (0x7fffffU 
                                                        & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                  & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                  ? (((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                       [0U][0xdU] >> 0x1fU) 
                                      != (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                          >> 0x1fU))
                                      ? 0x7fc00000U
                                      : (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0U][0xdU])))
                                  : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                      ? (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0U][0xdU]))
                                      : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                          ? (0x7f800000U 
                                             | (0x80000000U 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                          : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                              & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                              ? (0x80000000U 
                                                 & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0U]
                                                    [0xdU] 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                              : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0U]
                                                  [0xdU]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))));
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__psum_out 
            = ((((0xffU == (0xffU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [0U][0xcU] >> 0x17U))) 
                 & (0U != (0x7fffffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                           [0U][0xcU]))) | (IData)(
                                                   ((0x7f800000U 
                                                     == 
                                                     (0x7f800000U 
                                                      & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                                    & (0U 
                                                       != 
                                                       (0x7fffffU 
                                                        & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                  & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                  ? (((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                       [0U][0xcU] >> 0x1fU) 
                                      != (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                          >> 0x1fU))
                                      ? 0x7fc00000U
                                      : (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0U][0xcU])))
                                  : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                      ? (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0U][0xcU]))
                                      : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                          ? (0x7f800000U 
                                             | (0x80000000U 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                          : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                              & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                              ? (0x80000000U 
                                                 & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0U]
                                                    [0xcU] 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                              : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0U]
                                                  [0xcU]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))));
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__psum_out 
            = ((((0xffU == (0xffU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [0U][0xbU] >> 0x17U))) 
                 & (0U != (0x7fffffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                           [0U][0xbU]))) | (IData)(
                                                   ((0x7f800000U 
                                                     == 
                                                     (0x7f800000U 
                                                      & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                                    & (0U 
                                                       != 
                                                       (0x7fffffU 
                                                        & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                  & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                  ? (((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                       [0U][0xbU] >> 0x1fU) 
                                      != (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                          >> 0x1fU))
                                      ? 0x7fc00000U
                                      : (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0U][0xbU])))
                                  : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                      ? (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0U][0xbU]))
                                      : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                          ? (0x7f800000U 
                                             | (0x80000000U 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                          : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                              & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                              ? (0x80000000U 
                                                 & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0U]
                                                    [0xbU] 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                              : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0U]
                                                  [0xbU]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))));
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__psum_out 
            = ((((0xffU == (0xffU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [0U][0xaU] >> 0x17U))) 
                 & (0U != (0x7fffffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                           [0U][0xaU]))) | (IData)(
                                                   ((0x7f800000U 
                                                     == 
                                                     (0x7f800000U 
                                                      & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                                    & (0U 
                                                       != 
                                                       (0x7fffffU 
                                                        & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                  & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                  ? (((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                       [0U][0xaU] >> 0x1fU) 
                                      != (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                          >> 0x1fU))
                                      ? 0x7fc00000U
                                      : (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0U][0xaU])))
                                  : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                      ? (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0U][0xaU]))
                                      : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                          ? (0x7f800000U 
                                             | (0x80000000U 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                          : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                              & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                              ? (0x80000000U 
                                                 & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0U]
                                                    [0xaU] 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                              : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0U]
                                                  [0xaU]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))));
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__psum_out 
            = ((((0xffU == (0xffU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [0U][9U] >> 0x17U))) 
                 & (0U != (0x7fffffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                           [0U][9U]))) | (IData)(((0x7f800000U 
                                                   == 
                                                   (0x7f800000U 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                                  & (0U 
                                                     != 
                                                     (0x7fffffU 
                                                      & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                  & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                  ? (((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                       [0U][9U] >> 0x1fU) 
                                      != (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                          >> 0x1fU))
                                      ? 0x7fc00000U
                                      : (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0U][9U])))
                                  : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                      ? (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0U][9U]))
                                      : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                          ? (0x7f800000U 
                                             | (0x80000000U 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                          : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                              & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                              ? (0x80000000U 
                                                 & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0U]
                                                    [9U] 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                              : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0U]
                                                  [9U]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))));
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__psum_out 
            = ((((0xffU == (0xffU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [0U][8U] >> 0x17U))) 
                 & (0U != (0x7fffffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                           [0U][8U]))) | (IData)(((0x7f800000U 
                                                   == 
                                                   (0x7f800000U 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                                  & (0U 
                                                     != 
                                                     (0x7fffffU 
                                                      & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                  & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                  ? (((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                       [0U][8U] >> 0x1fU) 
                                      != (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                          >> 0x1fU))
                                      ? 0x7fc00000U
                                      : (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0U][8U])))
                                  : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                      ? (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0U][8U]))
                                      : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                          ? (0x7f800000U 
                                             | (0x80000000U 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                          : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                              & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                              ? (0x80000000U 
                                                 & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0U]
                                                    [8U] 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                              : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0U]
                                                  [8U]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))));
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__psum_out 
            = ((((0xffU == (0xffU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [0U][7U] >> 0x17U))) 
                 & (0U != (0x7fffffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                           [0U][7U]))) | (IData)(((0x7f800000U 
                                                   == 
                                                   (0x7f800000U 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                                  & (0U 
                                                     != 
                                                     (0x7fffffU 
                                                      & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                  & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                  ? (((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                       [0U][7U] >> 0x1fU) 
                                      != (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                          >> 0x1fU))
                                      ? 0x7fc00000U
                                      : (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0U][7U])))
                                  : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                      ? (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0U][7U]))
                                      : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                          ? (0x7f800000U 
                                             | (0x80000000U 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                          : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                              & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                              ? (0x80000000U 
                                                 & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0U]
                                                    [7U] 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                              : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0U]
                                                  [7U]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))));
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__psum_out 
            = ((((0xffU == (0xffU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [0U][6U] >> 0x17U))) 
                 & (0U != (0x7fffffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                           [0U][6U]))) | (IData)(((0x7f800000U 
                                                   == 
                                                   (0x7f800000U 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                                  & (0U 
                                                     != 
                                                     (0x7fffffU 
                                                      & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                  & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                  ? (((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                       [0U][6U] >> 0x1fU) 
                                      != (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                          >> 0x1fU))
                                      ? 0x7fc00000U
                                      : (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0U][6U])))
                                  : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                      ? (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0U][6U]))
                                      : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                          ? (0x7f800000U 
                                             | (0x80000000U 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                          : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                              & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                              ? (0x80000000U 
                                                 & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0U]
                                                    [6U] 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                              : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0U]
                                                  [6U]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))));
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__psum_out 
            = ((((0xffU == (0xffU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [0U][5U] >> 0x17U))) 
                 & (0U != (0x7fffffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                           [0U][5U]))) | (IData)(((0x7f800000U 
                                                   == 
                                                   (0x7f800000U 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                                  & (0U 
                                                     != 
                                                     (0x7fffffU 
                                                      & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                  & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                  ? (((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                       [0U][5U] >> 0x1fU) 
                                      != (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                          >> 0x1fU))
                                      ? 0x7fc00000U
                                      : (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0U][5U])))
                                  : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                      ? (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0U][5U]))
                                      : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                          ? (0x7f800000U 
                                             | (0x80000000U 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                          : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                              & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                              ? (0x80000000U 
                                                 & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0U]
                                                    [5U] 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                              : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0U]
                                                  [5U]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))));
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__psum_out 
            = ((((0xffU == (0xffU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [0U][4U] >> 0x17U))) 
                 & (0U != (0x7fffffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                           [0U][4U]))) | (IData)(((0x7f800000U 
                                                   == 
                                                   (0x7f800000U 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                                  & (0U 
                                                     != 
                                                     (0x7fffffU 
                                                      & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                  & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                  ? (((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                       [0U][4U] >> 0x1fU) 
                                      != (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                          >> 0x1fU))
                                      ? 0x7fc00000U
                                      : (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0U][4U])))
                                  : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                      ? (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0U][4U]))
                                      : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                          ? (0x7f800000U 
                                             | (0x80000000U 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                          : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                              & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                              ? (0x80000000U 
                                                 & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0U]
                                                    [4U] 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                              : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0U]
                                                  [4U]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))));
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__psum_out 
            = ((((0xffU == (0xffU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [0U][3U] >> 0x17U))) 
                 & (0U != (0x7fffffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                           [0U][3U]))) | (IData)(((0x7f800000U 
                                                   == 
                                                   (0x7f800000U 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                                  & (0U 
                                                     != 
                                                     (0x7fffffU 
                                                      & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                  & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                  ? (((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                       [0U][3U] >> 0x1fU) 
                                      != (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                          >> 0x1fU))
                                      ? 0x7fc00000U
                                      : (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0U][3U])))
                                  : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                      ? (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0U][3U]))
                                      : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                          ? (0x7f800000U 
                                             | (0x80000000U 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                          : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                              & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                              ? (0x80000000U 
                                                 & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0U]
                                                    [3U] 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                              : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0U]
                                                  [3U]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))));
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__psum_out 
            = ((((0xffU == (0xffU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [0U][2U] >> 0x17U))) 
                 & (0U != (0x7fffffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                           [0U][2U]))) | (IData)(((0x7f800000U 
                                                   == 
                                                   (0x7f800000U 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                                  & (0U 
                                                     != 
                                                     (0x7fffffU 
                                                      & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                  & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                  ? (((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                       [0U][2U] >> 0x1fU) 
                                      != (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                          >> 0x1fU))
                                      ? 0x7fc00000U
                                      : (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0U][2U])))
                                  : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                      ? (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0U][2U]))
                                      : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                          ? (0x7f800000U 
                                             | (0x80000000U 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                          : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                              & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                              ? (0x80000000U 
                                                 & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0U]
                                                    [2U] 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                              : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0U]
                                                  [2U]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))));
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__psum_out 
            = ((((0xffU == (0xffU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [0U][1U] >> 0x17U))) 
                 & (0U != (0x7fffffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                           [0U][1U]))) | (IData)(((0x7f800000U 
                                                   == 
                                                   (0x7f800000U 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                                  & (0U 
                                                     != 
                                                     (0x7fffffU 
                                                      & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                  & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                  ? (((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                       [0U][1U] >> 0x1fU) 
                                      != (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                          >> 0x1fU))
                                      ? 0x7fc00000U
                                      : (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0U][1U])))
                                  : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                      ? (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0U][1U]))
                                      : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                          ? (0x7f800000U 
                                             | (0x80000000U 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                          : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                              & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                              ? (0x80000000U 
                                                 & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0U]
                                                    [1U] 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                              : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0U]
                                                  [1U]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))));
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__psum_out 
            = ((((0xffU == (0xffU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [0U][0U] >> 0x17U))) 
                 & (0U != (0x7fffffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                           [0U][0U]))) | (IData)(((0x7f800000U 
                                                   == 
                                                   (0x7f800000U 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                                  & (0U 
                                                     != 
                                                     (0x7fffffU 
                                                      & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                  & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                  ? (((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                       [0U][0U] >> 0x1fU) 
                                      != (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                          >> 0x1fU))
                                      ? 0x7fc00000U
                                      : (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0U][0U])))
                                  : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                      ? (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0U][0U]))
                                      : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                          ? (0x7f800000U 
                                             | (0x80000000U 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                          : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                              & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                              ? (0x80000000U 
                                                 & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0U]
                                                    [0U] 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                              : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0U]
                                                  [0U]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))));
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xfU][0xfU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xfU][0xeU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xfU][0xdU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xfU][0xcU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xfU][0xbU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xfU][0xaU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xfU][9U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xfU][8U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xfU][7U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xfU][6U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xfU][5U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xfU][4U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xfU][3U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xfU][2U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xfU][1U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xfU][0U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xeU][0xfU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xeU][0xeU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xeU][0xdU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xeU][0xcU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xeU][0xbU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xeU][0xaU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xeU][9U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xeU][8U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xeU][7U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xeU][6U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xeU][5U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xeU][4U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xeU][3U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xeU][2U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xeU][1U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xeU][0U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xdU][0xfU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xdU][0xeU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xdU][0xdU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xdU][0xcU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xdU][0xbU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xdU][0xaU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xdU][9U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xdU][8U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xdU][7U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xdU][6U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xdU][5U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xdU][4U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xdU][3U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xdU][2U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xdU][1U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xdU][0U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xcU][0xfU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xcU][0xeU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xcU][0xdU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xcU][0xcU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xcU][0xbU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xcU][0xaU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xcU][9U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xcU][8U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xcU][7U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xcU][6U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xcU][5U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xcU][4U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xcU][3U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xcU][2U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xcU][1U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xcU][0U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xbU][0xfU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xbU][0xeU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xbU][0xdU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xbU][0xcU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xbU][0xbU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xbU][0xaU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xbU][9U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xbU][8U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xbU][7U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xbU][6U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xbU][5U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xbU][4U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xbU][3U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xbU][2U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xbU][1U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xbU][0U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xaU][0xfU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xaU][0xeU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xaU][0xdU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xaU][0xcU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xaU][0xbU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xaU][0xaU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xaU][9U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xaU][8U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xaU][7U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xaU][6U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xaU][5U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xaU][4U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xaU][3U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xaU][2U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xaU][1U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0xaU][0U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [9U][0xfU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [9U][0xeU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [9U][0xdU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [9U][0xcU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [9U][0xbU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [9U][0xaU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [9U][9U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [9U][8U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [9U][7U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [9U][6U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [9U][5U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [9U][4U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [9U][3U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [9U][2U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [9U][1U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [9U][0U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [8U][0xfU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [8U][0xeU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [8U][0xdU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [8U][0xcU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [8U][0xbU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [8U][0xaU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [8U][9U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [8U][8U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [8U][7U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [8U][6U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [8U][5U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [8U][4U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [8U][3U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [8U][2U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [8U][1U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [8U][0U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [7U][0xfU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [7U][0xeU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [7U][0xdU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [7U][0xcU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [7U][0xbU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [7U][0xaU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [7U][9U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [7U][8U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [7U][7U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [7U][6U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [7U][5U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [7U][4U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [7U][3U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [7U][2U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [7U][1U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [7U][0U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [6U][0xfU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [6U][0xeU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [6U][0xdU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [6U][0xcU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [6U][0xbU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [6U][0xaU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [6U][9U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [6U][8U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [6U][7U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [6U][6U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [6U][5U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [6U][4U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [6U][3U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [6U][2U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [6U][1U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [6U][0U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [5U][0xfU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [5U][0xeU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [5U][0xdU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [5U][0xcU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [5U][0xbU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [5U][0xaU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [5U][9U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [5U][8U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [5U][7U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [5U][6U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [5U][5U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [5U][4U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [5U][3U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [5U][2U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [5U][1U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [5U][0U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [4U][0xfU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [4U][0xeU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [4U][0xdU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [4U][0xcU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [4U][0xbU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [4U][0xaU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [4U][9U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [4U][8U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [4U][7U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [4U][6U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [4U][5U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [4U][4U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [4U][3U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [4U][2U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [4U][1U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [4U][0U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [3U][0xfU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [3U][0xeU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [3U][0xdU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [3U][0xcU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [3U][0xbU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [3U][0xaU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [3U][9U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [3U][8U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [3U][7U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [3U][6U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [3U][5U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [3U][4U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [3U][3U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [3U][2U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [3U][1U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [3U][0U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [2U][0xfU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [2U][0xeU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [2U][0xdU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [2U][0xcU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [2U][0xbU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [2U][0xaU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [2U][9U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [2U][8U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [2U][7U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [2U][6U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [2U][5U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [2U][4U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [2U][3U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [2U][2U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [2U][1U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [2U][0U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [1U][0xfU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [1U][0xeU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [1U][0xdU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [1U][0xcU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [1U][0xbU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [1U][0xaU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [1U][9U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [1U][8U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [1U][7U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [1U][6U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [1U][5U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [1U][4U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [1U][3U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [1U][2U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [1U][1U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [1U][0U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0U][0xfU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0U][0xeU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0U][0xdU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0U][0xcU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0U][0xbU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0U][0xaU];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0U][9U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0U][8U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0U][7U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0U][6U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0U][5U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0U][4U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0U][3U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0U][2U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0U][1U];
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out 
            = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
            [0U][0U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_addr_q 
            = vlSelf->npu_core_top__DOT__acc_addr_pipe
            [0x1eU];
    } else {
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out = 0U;
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_addr_q = 0U;
    }
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__11__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__11__KET____DOT__genblk1__DOT__deskew_pipe[0U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__11__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__11__KET____DOT__genblk1__DOT__deskew_pipe[1U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__11__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__11__KET____DOT__genblk1__DOT__deskew_pipe[2U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__11__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__11__KET____DOT__genblk1__DOT__deskew_pipe[3U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[0U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[1U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[2U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[3U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[4U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[5U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[6U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[6U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[7U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[7U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__12__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__12__KET____DOT__genblk1__DOT__deskew_pipe[0U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__12__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__12__KET____DOT__genblk1__DOT__deskew_pipe[1U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__12__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__12__KET____DOT__genblk1__DOT__deskew_pipe[2U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe[0U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe[1U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe[2U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe[3U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe[4U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[0U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[1U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[2U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[3U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[4U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[5U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[0U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[1U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[2U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[3U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[4U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[5U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[6U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[6U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[0U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[1U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[2U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[3U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[4U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[5U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[6U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[6U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[7U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[7U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[8U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[8U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[0U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[1U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[2U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[3U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[4U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[5U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[6U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[6U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[7U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[7U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[8U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[8U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[9U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[9U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[0U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[1U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[2U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[3U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[4U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[5U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[6U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[6U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[7U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[7U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[8U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[8U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[9U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[9U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[0xaU] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[0xaU];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[0U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[1U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[2U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[3U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[4U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[5U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[6U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[6U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[7U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[7U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[8U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[8U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[9U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[9U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[0xaU] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[0xaU];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[0xbU] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[0xbU];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[0U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[1U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[2U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[3U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[4U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[5U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[6U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[6U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[7U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[7U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[8U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[8U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[9U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[9U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[0xaU] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[0xaU];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[0xbU] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[0xbU];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[0xcU] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[0xcU];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[0U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[1U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[2U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[3U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[4U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[5U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[6U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[6U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[7U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[7U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[8U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[8U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[9U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[9U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[0xaU] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[0xaU];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[0xbU] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[0xbU];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[0xcU] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[0xcU];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[0xdU] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[0xdU];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[1U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[1U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[2U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[2U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[3U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[3U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[4U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[4U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[5U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[5U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[6U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[6U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[7U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[7U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[8U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[8U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[9U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[9U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0xaU] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0xaU];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0xbU] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0xbU];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0xcU] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0xcU];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0xdU] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0xdU];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0xeU] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0xeU];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__8__KET____DOT__genblk1__DOT__delay_pipe[0U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__8__KET____DOT__genblk1__DOT__delay_pipe[0U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__8__KET____DOT__genblk1__DOT__delay_pipe[1U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__8__KET____DOT__genblk1__DOT__delay_pipe[1U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__8__KET____DOT__genblk1__DOT__delay_pipe[2U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__8__KET____DOT__genblk1__DOT__delay_pipe[2U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__8__KET____DOT__genblk1__DOT__delay_pipe[3U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__8__KET____DOT__genblk1__DOT__delay_pipe[3U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__4__KET____DOT__genblk1__DOT__delay_pipe 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__4__KET____DOT__genblk1__DOT__delay_pipe;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[0U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[0U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[1U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[1U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[2U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[2U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[3U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[3U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[4U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[4U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[5U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[5U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[6U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[6U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[7U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[7U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[0U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[0U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[1U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[1U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[2U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[2U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[3U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[3U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[4U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[4U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[5U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[5U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[6U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[6U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[0U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[0U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[1U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[1U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[2U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[2U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[3U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[3U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[4U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[4U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[5U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[5U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[6U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[6U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[0U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[0U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[1U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[1U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[2U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[2U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[3U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[3U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[4U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[4U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[5U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[5U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[0U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[0U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[1U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[1U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[2U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[2U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[3U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[3U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[4U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[4U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[5U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[5U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[0U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[0U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[1U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[1U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[2U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[2U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[3U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[3U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[4U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[4U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[0U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[0U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[1U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[1U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[2U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[2U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[3U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[3U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[4U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[4U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__7__KET____DOT__genblk1__DOT__delay_pipe[0U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__7__KET____DOT__genblk1__DOT__delay_pipe[0U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__7__KET____DOT__genblk1__DOT__delay_pipe[1U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__7__KET____DOT__genblk1__DOT__delay_pipe[1U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__7__KET____DOT__genblk1__DOT__delay_pipe[2U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__7__KET____DOT__genblk1__DOT__delay_pipe[2U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__7__KET____DOT__genblk1__DOT__delay_pipe[3U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__7__KET____DOT__genblk1__DOT__delay_pipe[3U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__6__KET____DOT__genblk1__DOT__delay_pipe[0U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__6__KET____DOT__genblk1__DOT__delay_pipe[0U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__6__KET____DOT__genblk1__DOT__delay_pipe[1U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__6__KET____DOT__genblk1__DOT__delay_pipe[1U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__6__KET____DOT__genblk1__DOT__delay_pipe[2U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__6__KET____DOT__genblk1__DOT__delay_pipe[2U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__5__KET____DOT__genblk1__DOT__delay_pipe[0U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__5__KET____DOT__genblk1__DOT__delay_pipe[0U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__5__KET____DOT__genblk1__DOT__delay_pipe[1U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__5__KET____DOT__genblk1__DOT__delay_pipe[1U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__5__KET____DOT__genblk1__DOT__delay_pipe[2U] 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__5__KET____DOT__genblk1__DOT__delay_pipe[2U];
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__3__KET____DOT__genblk1__DOT__delay_pipe 
        = vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__3__KET____DOT__genblk1__DOT__delay_pipe;
    vlSelf->npu_core_top__DOT__acc_clear_pipe = vlSelf->__Vdly__npu_core_top__DOT__acc_clear_pipe;
    vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__drain_re_q 
        = ((IData)(vlSelf->rst_n) && (IData)(vlSelf->drain_re));
    if (vlSelf->drain_re) {
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[0U] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram
            [vlSelf->drain_addr][0U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[1U] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram
            [vlSelf->drain_addr][1U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[2U] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram
            [vlSelf->drain_addr][2U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[3U] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram
            [vlSelf->drain_addr][3U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[4U] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram
            [vlSelf->drain_addr][4U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[5U] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram
            [vlSelf->drain_addr][5U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[6U] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram
            [vlSelf->drain_addr][6U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[7U] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram
            [vlSelf->drain_addr][7U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[8U] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram
            [vlSelf->drain_addr][8U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[9U] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram
            [vlSelf->drain_addr][9U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[0xaU] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram
            [vlSelf->drain_addr][0xaU];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[0xbU] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram
            [vlSelf->drain_addr][0xbU];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[0xcU] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram
            [vlSelf->drain_addr][0xcU];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[0xdU] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram
            [vlSelf->drain_addr][0xdU];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[0xeU] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram
            [vlSelf->drain_addr][0xeU];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[0xfU] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram
            [vlSelf->drain_addr][0xfU];
    } else {
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[0U] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram
            [vlSelf->npu_core_top__DOT__acc_addr_pipe
            [0x1eU]][0U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[1U] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram
            [vlSelf->npu_core_top__DOT__acc_addr_pipe
            [0x1eU]][1U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[2U] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram
            [vlSelf->npu_core_top__DOT__acc_addr_pipe
            [0x1eU]][2U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[3U] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram
            [vlSelf->npu_core_top__DOT__acc_addr_pipe
            [0x1eU]][3U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[4U] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram
            [vlSelf->npu_core_top__DOT__acc_addr_pipe
            [0x1eU]][4U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[5U] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram
            [vlSelf->npu_core_top__DOT__acc_addr_pipe
            [0x1eU]][5U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[6U] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram
            [vlSelf->npu_core_top__DOT__acc_addr_pipe
            [0x1eU]][6U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[7U] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram
            [vlSelf->npu_core_top__DOT__acc_addr_pipe
            [0x1eU]][7U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[8U] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram
            [vlSelf->npu_core_top__DOT__acc_addr_pipe
            [0x1eU]][8U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[9U] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram
            [vlSelf->npu_core_top__DOT__acc_addr_pipe
            [0x1eU]][9U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[0xaU] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram
            [vlSelf->npu_core_top__DOT__acc_addr_pipe
            [0x1eU]][0xaU];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[0xbU] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram
            [vlSelf->npu_core_top__DOT__acc_addr_pipe
            [0x1eU]][0xbU];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[0xcU] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram
            [vlSelf->npu_core_top__DOT__acc_addr_pipe
            [0x1eU]][0xcU];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[0xdU] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram
            [vlSelf->npu_core_top__DOT__acc_addr_pipe
            [0x1eU]][0xdU];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[0xeU] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram
            [vlSelf->npu_core_top__DOT__acc_addr_pipe
            [0x1eU]][0xeU];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[0xfU] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram
            [vlSelf->npu_core_top__DOT__acc_addr_pipe
            [0x1eU]][0xfU];
    }
    vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_valid_q 
        = ((IData)(vlSelf->rst_n) && (1U & (vlSelf->npu_core_top__DOT__acc_valid_pipe 
                                            >> 0x1eU)));
    npu_core_top__DOT__u_systolic_array__DOT__act_skewed[0U] 
        = (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__1__KET____DOT__genblk1__DOT__delay_pipe) 
            << 0x10U) | (0xffffU & vlSelf->sram_act_in[0U]));
    npu_core_top__DOT__u_systolic_array__DOT__act_skewed[1U] 
        = (((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__2__KET____DOT__genblk1__DOT__delay_pipe 
             | (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__1__KET____DOT__genblk1__DOT__delay_pipe)) 
            >> 0x10U) | ((IData)((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__3__KET____DOT__genblk1__DOT__delay_pipe 
                                  >> 0x20U)) << 0x10U));
    npu_core_top__DOT__u_systolic_array__DOT__act_skewed[2U] 
        = ((0xffffU & (IData)((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__4__KET____DOT__genblk1__DOT__delay_pipe 
                               >> 0x30U))) | (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__5__KET____DOT__genblk1__DOT__delay_pipe[2U] 
                                              << 0x10U));
    npu_core_top__DOT__u_systolic_array__DOT__act_skewed[3U] 
        = ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__6__KET____DOT__genblk1__DOT__delay_pipe[2U] 
            >> 0x10U) | (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__7__KET____DOT__genblk1__DOT__delay_pipe[3U] 
                         << 0x10U));
    npu_core_top__DOT__u_systolic_array__DOT__act_skewed[4U] 
        = ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__8__KET____DOT__genblk1__DOT__delay_pipe[3U] 
            >> 0x10U) | (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe[4U] 
                         << 0x10U));
    npu_core_top__DOT__u_systolic_array__DOT__act_skewed[5U] 
        = ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe[4U] 
            >> 0x10U) | ((IData)((((QData)((IData)(
                                                   ((0xffff0000U 
                                                     & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[6U]) 
                                                    | (0xffffU 
                                                       & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[6U])))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((0xffff0000U 
                                                                 & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[5U]) 
                                                                | (0xffffU 
                                                                   & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[5U])))))) 
                         << 0x10U));
    npu_core_top__DOT__u_systolic_array__DOT__act_skewed[6U] 
        = (((IData)((((QData)((IData)(((0xffff0000U 
                                        & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[6U]) 
                                       | (0xffffU & 
                                          vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[6U])))) 
                      << 0x20U) | (QData)((IData)((
                                                   (0xffff0000U 
                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[5U]) 
                                                   | (0xffffU 
                                                      & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[5U])))))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((0xffff0000U 
                                                      & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[6U]) 
                                                     | (0xffffU 
                                                        & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[6U])))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((0xffff0000U 
                                                                  & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[5U]) 
                                                                 | (0xffffU 
                                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[5U]))))) 
                                  >> 0x20U)) << 0x10U));
    npu_core_top__DOT__u_systolic_array__DOT__act_skewed[7U] 
        = ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe[7U] 
            << 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((0xffff0000U 
                                                      & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe[6U]) 
                                                     | (0xffffU 
                                                        & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe[6U])))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((0xffff0000U 
                                                                  & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe[5U]) 
                                                                 | (0xffffU 
                                                                    & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe[5U]))))) 
                                  >> 0x20U)) >> 0x10U));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][0xfU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][0xeU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][0xdU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][0xcU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][0xbU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][0xaU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][9U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][8U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][7U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][6U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][5U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][4U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][3U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][2U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][1U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0x10U][0U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][0xfU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][0xeU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][0xdU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][0xcU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][0xbU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][0xaU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][9U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][8U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][7U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][6U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][5U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][4U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][3U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][2U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][1U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xfU][0U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][0xfU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][0xeU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][0xdU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][0xcU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][0xbU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][0xaU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][9U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][8U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][7U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][6U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][5U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][4U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][3U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][2U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][1U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xeU][0U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][0xfU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][0xeU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][0xdU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][0xcU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][0xbU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][0xaU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][9U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][8U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][7U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][6U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][5U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][4U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][3U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][2U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][1U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xdU][0U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][0xfU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][0xeU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][0xdU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][0xcU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][0xbU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][0xaU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][9U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][8U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][7U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][6U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][5U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][4U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][3U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][2U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][1U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xcU][0U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][0xfU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][0xeU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][0xdU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][0xcU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][0xbU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][0xaU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][9U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][8U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][7U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][6U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][5U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][4U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][3U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][2U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][1U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xbU][0U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][0xfU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][0xeU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][0xdU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][0xcU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][0xbU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][0xaU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][9U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][8U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][7U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][6U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][5U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][4U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][3U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][2U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][1U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[0xaU][0U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[9U][0xfU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[9U][0xeU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[9U][0xdU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[9U][0xcU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[9U][0xbU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[9U][0xaU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[9U][9U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[9U][8U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[9U][7U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[9U][6U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[9U][5U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[9U][4U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[9U][3U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[9U][2U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[9U][1U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[9U][0U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[8U][0xfU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[8U][0xeU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[8U][0xdU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[8U][0xcU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[8U][0xbU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[8U][0xaU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[8U][9U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[8U][8U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[8U][7U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[8U][6U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[8U][5U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[8U][4U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[8U][3U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[8U][2U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[8U][1U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[8U][0U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[7U][0xfU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[7U][0xeU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[7U][0xdU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[7U][0xcU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[7U][0xbU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[7U][0xaU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[7U][9U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[7U][8U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[7U][7U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[7U][6U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[7U][5U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[7U][4U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[7U][3U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[7U][2U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[7U][1U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[7U][0U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[6U][0xfU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[6U][0xeU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[6U][0xdU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[6U][0xcU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[6U][0xbU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[6U][0xaU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[6U][9U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[6U][8U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[6U][7U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[6U][6U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[6U][5U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[6U][4U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[6U][3U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[6U][2U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[6U][1U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[6U][0U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[5U][0xfU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[5U][0xeU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[5U][0xdU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[5U][0xcU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[5U][0xbU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[5U][0xaU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[5U][9U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[5U][8U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[5U][7U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[5U][6U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[5U][5U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[5U][4U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[5U][3U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[5U][2U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[5U][1U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[5U][0U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[4U][0xfU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[4U][0xeU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[4U][0xdU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[4U][0xcU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[4U][0xbU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[4U][0xaU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[4U][9U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[4U][8U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[4U][7U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[4U][6U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[4U][5U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[4U][4U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[4U][3U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[4U][2U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[4U][1U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[4U][0U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[3U][0xfU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[3U][0xeU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[3U][0xdU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[3U][0xcU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[3U][0xbU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[3U][0xaU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[3U][9U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[3U][8U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[3U][7U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[3U][6U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[3U][5U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[3U][4U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[3U][3U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[3U][2U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[3U][1U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[3U][0U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[2U][0xfU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[2U][0xeU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[2U][0xdU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[2U][0xcU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[2U][0xbU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[2U][0xaU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[2U][9U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[2U][8U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[2U][7U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[2U][6U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[2U][5U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[2U][4U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[2U][3U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[2U][2U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[2U][1U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[2U][0U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[1U][0xfU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[1U][0xeU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[1U][0xdU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[1U][0xcU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[1U][0xbU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[1U][0xaU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[1U][9U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[1U][8U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[1U][7U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[1U][6U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[1U][5U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[1U][4U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[1U][3U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[1U][2U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[1U][1U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[1U][0U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__psum_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][0x10U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][0xfU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][0xeU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][0xdU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][0xcU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][0xbU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][0xaU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][9U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][8U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][7U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][6U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][5U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][4U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][3U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][2U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][1U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][0x10U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][0xfU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][0xeU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][0xdU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][0xcU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][0xbU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][0xaU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][9U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][8U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][7U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][6U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][5U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][4U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][3U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][2U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][1U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][0x10U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][0xfU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][0xeU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][0xdU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][0xcU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][0xbU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][0xaU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][9U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][8U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][7U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][6U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][5U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][4U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][3U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][2U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][1U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][0x10U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][0xfU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][0xeU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][0xdU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][0xcU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][0xbU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][0xaU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][9U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][8U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][7U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][6U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][5U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][4U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][3U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][2U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][1U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][0x10U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][0xfU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][0xeU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][0xdU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][0xcU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][0xbU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][0xaU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][9U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][8U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][7U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][6U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][5U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][4U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][3U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][2U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][1U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][0x10U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][0xfU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][0xeU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][0xdU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][0xcU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][0xbU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][0xaU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][9U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][8U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][7U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][6U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][5U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][4U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][3U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][2U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][1U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[9U][0x10U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[9U][0xfU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[9U][0xeU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[9U][0xdU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[9U][0xcU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[9U][0xbU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[9U][0xaU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[9U][9U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[9U][8U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[9U][7U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[9U][6U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[9U][5U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[9U][4U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[9U][3U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[9U][2U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[9U][1U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[8U][0x10U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[8U][0xfU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[8U][0xeU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[8U][0xdU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[8U][0xcU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[8U][0xbU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[8U][0xaU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[8U][9U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[8U][8U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[8U][7U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[8U][6U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[8U][5U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[8U][4U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[8U][3U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[8U][2U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[8U][1U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[7U][0x10U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[7U][0xfU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[7U][0xeU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[7U][0xdU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[7U][0xcU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[7U][0xbU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[7U][0xaU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[7U][9U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[7U][8U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[7U][7U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[7U][6U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[7U][5U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[7U][4U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[7U][3U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[7U][2U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[7U][1U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[6U][0x10U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[6U][0xfU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[6U][0xeU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[6U][0xdU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[6U][0xcU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[6U][0xbU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[6U][0xaU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[6U][9U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[6U][8U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[6U][7U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[6U][6U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[6U][5U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[6U][4U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[6U][3U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[6U][2U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[6U][1U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[5U][0x10U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[5U][0xfU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[5U][0xeU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[5U][0xdU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[5U][0xcU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[5U][0xbU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[5U][0xaU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[5U][9U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[5U][8U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[5U][7U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[5U][6U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[5U][5U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[5U][4U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[5U][3U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[5U][2U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[5U][1U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[4U][0x10U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[4U][0xfU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[4U][0xeU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[4U][0xdU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[4U][0xcU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[4U][0xbU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[4U][0xaU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[4U][9U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[4U][8U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[4U][7U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[4U][6U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[4U][5U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[4U][4U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[4U][3U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[4U][2U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[4U][1U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[3U][0x10U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[3U][0xfU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[3U][0xeU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[3U][0xdU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[3U][0xcU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[3U][0xbU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[3U][0xaU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[3U][9U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[3U][8U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[3U][7U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[3U][6U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[3U][5U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[3U][4U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[3U][3U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[3U][2U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[3U][1U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[2U][0x10U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[2U][0xfU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[2U][0xeU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[2U][0xdU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[2U][0xcU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[2U][0xbU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[2U][0xaU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[2U][9U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[2U][8U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[2U][7U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[2U][6U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[2U][5U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[2U][4U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[2U][3U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[2U][2U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[2U][1U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[1U][0x10U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[1U][0xfU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[1U][0xeU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[1U][0xdU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[1U][0xcU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[1U][0xbU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[1U][0xaU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[1U][9U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[1U][8U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[1U][7U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[1U][6U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[1U][5U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[1U][4U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[1U][3U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[1U][2U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[1U][1U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0U][0x10U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0U][0xfU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0U][0xeU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0U][0xdU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0U][0xcU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0U][0xbU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0U][0xaU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0U][9U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0U][8U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0U][7U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0U][6U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0U][5U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0U][4U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0U][3U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0U][2U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0U][1U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out;
    if (vlSelf->__Vdlyvset__npu_core_top__DOT__u_psum_buffer__DOT__bram__v0) {
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram[vlSelf->__Vdlyvdim0__npu_core_top__DOT__u_psum_buffer__DOT__bram__v0][0U] 
            = vlSelf->__Vdlyvval__npu_core_top__DOT__u_psum_buffer__DOT__bram__v0[0U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram[vlSelf->__Vdlyvdim0__npu_core_top__DOT__u_psum_buffer__DOT__bram__v0][1U] 
            = vlSelf->__Vdlyvval__npu_core_top__DOT__u_psum_buffer__DOT__bram__v0[1U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram[vlSelf->__Vdlyvdim0__npu_core_top__DOT__u_psum_buffer__DOT__bram__v0][2U] 
            = vlSelf->__Vdlyvval__npu_core_top__DOT__u_psum_buffer__DOT__bram__v0[2U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram[vlSelf->__Vdlyvdim0__npu_core_top__DOT__u_psum_buffer__DOT__bram__v0][3U] 
            = vlSelf->__Vdlyvval__npu_core_top__DOT__u_psum_buffer__DOT__bram__v0[3U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram[vlSelf->__Vdlyvdim0__npu_core_top__DOT__u_psum_buffer__DOT__bram__v0][4U] 
            = vlSelf->__Vdlyvval__npu_core_top__DOT__u_psum_buffer__DOT__bram__v0[4U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram[vlSelf->__Vdlyvdim0__npu_core_top__DOT__u_psum_buffer__DOT__bram__v0][5U] 
            = vlSelf->__Vdlyvval__npu_core_top__DOT__u_psum_buffer__DOT__bram__v0[5U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram[vlSelf->__Vdlyvdim0__npu_core_top__DOT__u_psum_buffer__DOT__bram__v0][6U] 
            = vlSelf->__Vdlyvval__npu_core_top__DOT__u_psum_buffer__DOT__bram__v0[6U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram[vlSelf->__Vdlyvdim0__npu_core_top__DOT__u_psum_buffer__DOT__bram__v0][7U] 
            = vlSelf->__Vdlyvval__npu_core_top__DOT__u_psum_buffer__DOT__bram__v0[7U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram[vlSelf->__Vdlyvdim0__npu_core_top__DOT__u_psum_buffer__DOT__bram__v0][8U] 
            = vlSelf->__Vdlyvval__npu_core_top__DOT__u_psum_buffer__DOT__bram__v0[8U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram[vlSelf->__Vdlyvdim0__npu_core_top__DOT__u_psum_buffer__DOT__bram__v0][9U] 
            = vlSelf->__Vdlyvval__npu_core_top__DOT__u_psum_buffer__DOT__bram__v0[9U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram[vlSelf->__Vdlyvdim0__npu_core_top__DOT__u_psum_buffer__DOT__bram__v0][0xaU] 
            = vlSelf->__Vdlyvval__npu_core_top__DOT__u_psum_buffer__DOT__bram__v0[0xaU];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram[vlSelf->__Vdlyvdim0__npu_core_top__DOT__u_psum_buffer__DOT__bram__v0][0xbU] 
            = vlSelf->__Vdlyvval__npu_core_top__DOT__u_psum_buffer__DOT__bram__v0[0xbU];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram[vlSelf->__Vdlyvdim0__npu_core_top__DOT__u_psum_buffer__DOT__bram__v0][0xcU] 
            = vlSelf->__Vdlyvval__npu_core_top__DOT__u_psum_buffer__DOT__bram__v0[0xcU];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram[vlSelf->__Vdlyvdim0__npu_core_top__DOT__u_psum_buffer__DOT__bram__v0][0xdU] 
            = vlSelf->__Vdlyvval__npu_core_top__DOT__u_psum_buffer__DOT__bram__v0[0xdU];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram[vlSelf->__Vdlyvdim0__npu_core_top__DOT__u_psum_buffer__DOT__bram__v0][0xeU] 
            = vlSelf->__Vdlyvval__npu_core_top__DOT__u_psum_buffer__DOT__bram__v0[0xeU];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram[vlSelf->__Vdlyvdim0__npu_core_top__DOT__u_psum_buffer__DOT__bram__v0][0xfU] 
            = vlSelf->__Vdlyvval__npu_core_top__DOT__u_psum_buffer__DOT__bram__v0[0xfU];
    }
    vlSelf->npu_core_top__DOT__acc_valid_pipe = vlSelf->__Vdly__npu_core_top__DOT__acc_valid_pipe;
    if (vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v0) {
        vlSelf->npu_core_top__DOT__acc_addr_pipe[0U] 
            = vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v0;
    }
    if (vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v1) {
        vlSelf->npu_core_top__DOT__acc_addr_pipe[1U] 
            = vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v1;
    }
    if (vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v2) {
        vlSelf->npu_core_top__DOT__acc_addr_pipe[2U] 
            = vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v2;
    }
    if (vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v3) {
        vlSelf->npu_core_top__DOT__acc_addr_pipe[3U] 
            = vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v3;
    }
    if (vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v4) {
        vlSelf->npu_core_top__DOT__acc_addr_pipe[4U] 
            = vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v4;
    }
    if (vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v5) {
        vlSelf->npu_core_top__DOT__acc_addr_pipe[5U] 
            = vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v5;
    }
    if (vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v6) {
        vlSelf->npu_core_top__DOT__acc_addr_pipe[6U] 
            = vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v6;
    }
    if (vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v7) {
        vlSelf->npu_core_top__DOT__acc_addr_pipe[7U] 
            = vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v7;
    }
    if (vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v8) {
        vlSelf->npu_core_top__DOT__acc_addr_pipe[8U] 
            = vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v8;
    }
    if (vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v9) {
        vlSelf->npu_core_top__DOT__acc_addr_pipe[9U] 
            = vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v9;
    }
    if (vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v10) {
        vlSelf->npu_core_top__DOT__acc_addr_pipe[0xaU] 
            = vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v10;
    }
    if (vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v11) {
        vlSelf->npu_core_top__DOT__acc_addr_pipe[0xbU] 
            = vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v11;
    }
    if (vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v12) {
        vlSelf->npu_core_top__DOT__acc_addr_pipe[0xcU] 
            = vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v12;
    }
    if (vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v13) {
        vlSelf->npu_core_top__DOT__acc_addr_pipe[0xdU] 
            = vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v13;
    }
    if (vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v14) {
        vlSelf->npu_core_top__DOT__acc_addr_pipe[0xeU] 
            = vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v14;
    }
    if (vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v15) {
        vlSelf->npu_core_top__DOT__acc_addr_pipe[0xfU] 
            = vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v15;
    }
    if (vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v16) {
        vlSelf->npu_core_top__DOT__acc_addr_pipe[0x10U] 
            = vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v16;
    }
    if (vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v17) {
        vlSelf->npu_core_top__DOT__acc_addr_pipe[0x11U] 
            = vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v17;
    }
    if (vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v18) {
        vlSelf->npu_core_top__DOT__acc_addr_pipe[0x12U] 
            = vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v18;
    }
    if (vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v19) {
        vlSelf->npu_core_top__DOT__acc_addr_pipe[0x13U] 
            = vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v19;
    }
    if (vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v20) {
        vlSelf->npu_core_top__DOT__acc_addr_pipe[0x14U] 
            = vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v20;
    }
    if (vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v21) {
        vlSelf->npu_core_top__DOT__acc_addr_pipe[0x15U] 
            = vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v21;
    }
    if (vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v22) {
        vlSelf->npu_core_top__DOT__acc_addr_pipe[0x16U] 
            = vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v22;
    }
    if (vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v23) {
        vlSelf->npu_core_top__DOT__acc_addr_pipe[0x17U] 
            = vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v23;
    }
    if (vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v24) {
        vlSelf->npu_core_top__DOT__acc_addr_pipe[0x18U] 
            = vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v24;
    }
    if (vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v25) {
        vlSelf->npu_core_top__DOT__acc_addr_pipe[0x19U] 
            = vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v25;
    }
    if (vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v26) {
        vlSelf->npu_core_top__DOT__acc_addr_pipe[0x1aU] 
            = vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v26;
    }
    if (vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v27) {
        vlSelf->npu_core_top__DOT__acc_addr_pipe[0x1bU] 
            = vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v27;
    }
    if (vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v28) {
        vlSelf->npu_core_top__DOT__acc_addr_pipe[0x1cU] 
            = vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v28;
    }
    if (vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v29) {
        vlSelf->npu_core_top__DOT__acc_addr_pipe[0x1dU] 
            = vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v29;
    }
    if (vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v30) {
        vlSelf->npu_core_top__DOT__acc_addr_pipe[0x1eU] 
            = vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v30;
    }
    if (vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v31) {
        vlSelf->npu_core_top__DOT__acc_addr_pipe[0U] = 0U;
        vlSelf->npu_core_top__DOT__acc_addr_pipe[1U] = 0U;
        vlSelf->npu_core_top__DOT__acc_addr_pipe[2U] = 0U;
        vlSelf->npu_core_top__DOT__acc_addr_pipe[3U] = 0U;
        vlSelf->npu_core_top__DOT__acc_addr_pipe[4U] = 0U;
        vlSelf->npu_core_top__DOT__acc_addr_pipe[5U] = 0U;
        vlSelf->npu_core_top__DOT__acc_addr_pipe[6U] = 0U;
        vlSelf->npu_core_top__DOT__acc_addr_pipe[7U] = 0U;
        vlSelf->npu_core_top__DOT__acc_addr_pipe[8U] = 0U;
        vlSelf->npu_core_top__DOT__acc_addr_pipe[9U] = 0U;
        vlSelf->npu_core_top__DOT__acc_addr_pipe[0xaU] = 0U;
        vlSelf->npu_core_top__DOT__acc_addr_pipe[0xbU] = 0U;
        vlSelf->npu_core_top__DOT__acc_addr_pipe[0xcU] = 0U;
        vlSelf->npu_core_top__DOT__acc_addr_pipe[0xdU] = 0U;
        vlSelf->npu_core_top__DOT__acc_addr_pipe[0xeU] = 0U;
        vlSelf->npu_core_top__DOT__acc_addr_pipe[0xfU] = 0U;
        vlSelf->npu_core_top__DOT__acc_addr_pipe[0x10U] = 0U;
        vlSelf->npu_core_top__DOT__acc_addr_pipe[0x11U] = 0U;
        vlSelf->npu_core_top__DOT__acc_addr_pipe[0x12U] = 0U;
        vlSelf->npu_core_top__DOT__acc_addr_pipe[0x13U] = 0U;
        vlSelf->npu_core_top__DOT__acc_addr_pipe[0x14U] = 0U;
        vlSelf->npu_core_top__DOT__acc_addr_pipe[0x15U] = 0U;
        vlSelf->npu_core_top__DOT__acc_addr_pipe[0x16U] = 0U;
        vlSelf->npu_core_top__DOT__acc_addr_pipe[0x17U] = 0U;
        vlSelf->npu_core_top__DOT__acc_addr_pipe[0x18U] = 0U;
        vlSelf->npu_core_top__DOT__acc_addr_pipe[0x19U] = 0U;
        vlSelf->npu_core_top__DOT__acc_addr_pipe[0x1aU] = 0U;
        vlSelf->npu_core_top__DOT__acc_addr_pipe[0x1bU] = 0U;
        vlSelf->npu_core_top__DOT__acc_addr_pipe[0x1cU] = 0U;
        vlSelf->npu_core_top__DOT__acc_addr_pipe[0x1dU] = 0U;
        vlSelf->npu_core_top__DOT__acc_addr_pipe[0x1eU] = 0U;
    }
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0U][0U] 
        = (0xffffU & npu_core_top__DOT__u_systolic_array__DOT__act_skewed[0U]);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[1U][0U] 
        = (npu_core_top__DOT__u_systolic_array__DOT__act_skewed[0U] 
           >> 0x10U);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[2U][0U] 
        = (0xffffU & npu_core_top__DOT__u_systolic_array__DOT__act_skewed[1U]);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[3U][0U] 
        = (npu_core_top__DOT__u_systolic_array__DOT__act_skewed[1U] 
           >> 0x10U);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[4U][0U] 
        = (0xffffU & npu_core_top__DOT__u_systolic_array__DOT__act_skewed[2U]);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[5U][0U] 
        = (npu_core_top__DOT__u_systolic_array__DOT__act_skewed[2U] 
           >> 0x10U);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[6U][0U] 
        = (0xffffU & npu_core_top__DOT__u_systolic_array__DOT__act_skewed[3U]);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[7U][0U] 
        = (npu_core_top__DOT__u_systolic_array__DOT__act_skewed[3U] 
           >> 0x10U);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[8U][0U] 
        = (0xffffU & npu_core_top__DOT__u_systolic_array__DOT__act_skewed[4U]);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[9U][0U] 
        = (npu_core_top__DOT__u_systolic_array__DOT__act_skewed[4U] 
           >> 0x10U);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xaU][0U] 
        = (0xffffU & npu_core_top__DOT__u_systolic_array__DOT__act_skewed[5U]);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xbU][0U] 
        = (npu_core_top__DOT__u_systolic_array__DOT__act_skewed[5U] 
           >> 0x10U);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xcU][0U] 
        = (0xffffU & npu_core_top__DOT__u_systolic_array__DOT__act_skewed[6U]);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xdU][0U] 
        = (npu_core_top__DOT__u_systolic_array__DOT__act_skewed[6U] 
           >> 0x10U);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xeU][0U] 
        = (0xffffU & npu_core_top__DOT__u_systolic_array__DOT__act_skewed[7U]);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[0xfU][0U] 
        = (npu_core_top__DOT__u_systolic_array__DOT__act_skewed[7U] 
           >> 0x10U);
    vlSelf->npu_core_top__DOT__array_psum_bottom[0U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe[0xeU];
    vlSelf->npu_core_top__DOT__array_psum_bottom[1U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe[0xdU];
    vlSelf->npu_core_top__DOT__array_psum_bottom[2U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe[0xcU];
    vlSelf->npu_core_top__DOT__array_psum_bottom[3U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe[0xbU];
    vlSelf->npu_core_top__DOT__array_psum_bottom[4U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe[0xaU];
    vlSelf->npu_core_top__DOT__array_psum_bottom[5U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe[9U];
    vlSelf->npu_core_top__DOT__array_psum_bottom[6U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe[8U];
    vlSelf->npu_core_top__DOT__array_psum_bottom[7U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe[7U];
    vlSelf->npu_core_top__DOT__array_psum_bottom[8U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe[6U];
    vlSelf->npu_core_top__DOT__array_psum_bottom[9U] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe[5U];
    vlSelf->npu_core_top__DOT__array_psum_bottom[0xaU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe[4U];
    vlSelf->npu_core_top__DOT__array_psum_bottom[0xbU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__11__KET____DOT__genblk1__DOT__deskew_pipe[3U];
    vlSelf->npu_core_top__DOT__array_psum_bottom[0xcU] 
        = vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__12__KET____DOT__genblk1__DOT__deskew_pipe[2U];
    vlSelf->npu_core_top__DOT__array_psum_bottom[0xdU] 
        = (IData)((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__13__KET____DOT__genblk1__DOT__deskew_pipe 
                   >> 0x20U));
    vlSelf->npu_core_top__DOT__array_psum_bottom[0xeU] 
        = (IData)((((QData)((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                    [0x10U][0xfU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__14__KET____DOT__genblk1__DOT__deskew_pipe))));
    vlSelf->npu_core_top__DOT__array_psum_bottom[0xfU] 
        = (IData)(((((QData)((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [0x10U][0xfU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__14__KET____DOT__genblk1__DOT__deskew_pipe))) 
                   >> 0x20U));
    if (((IData)(vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_valid_q) 
         & ((IData)(vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__last_write_valid) 
            & ((IData)(vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_addr_q) 
               == (IData)(vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__last_write_addr))))) {
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0U] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__last_write_data[0U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[1U] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__last_write_data[1U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[2U] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__last_write_data[2U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[3U] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__last_write_data[3U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[4U] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__last_write_data[4U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[5U] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__last_write_data[5U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[6U] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__last_write_data[6U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[7U] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__last_write_data[7U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[8U] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__last_write_data[8U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[9U] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__last_write_data[9U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xaU] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__last_write_data[0xaU];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xbU] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__last_write_data[0xbU];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xcU] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__last_write_data[0xcU];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xdU] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__last_write_data[0xdU];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xeU] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__last_write_data[0xeU];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xfU] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__last_write_data[0xfU];
    } else {
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0U] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[0U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[1U] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[1U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[2U] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[2U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[3U] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[3U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[4U] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[4U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[5U] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[5U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[6U] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[6U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[7U] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[7U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[8U] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[8U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[9U] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[9U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xaU] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[0xaU];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xbU] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[0xbU];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xcU] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[0xcU];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xdU] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[0xdU];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xeU] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[0xeU];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xfU] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data[0xfU];
    }
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [0U][0U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [0U][0U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [0U][0U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [0U][1U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [0U][1U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [0U][1U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [0U][2U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [0U][2U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [0U][2U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [0U][3U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [0U][3U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [0U][3U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [0U][4U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [0U][4U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [0U][4U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [0U][5U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [0U][5U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [0U][5U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [0U][6U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [0U][6U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [0U][6U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [0U][7U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [0U][7U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [0U][7U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [0U][8U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [0U][8U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [0U][8U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [0U][9U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [0U][9U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [0U][9U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [0U][0xaU] >> 0xaU))) 
            & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                      [0U][0xaU]))) | (IData)((0U == 
                                               (0x7fffU 
                                                & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [0U][0xaU] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [0U][0xbU] >> 0xaU))) 
            & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                      [0U][0xbU]))) | (IData)((0U == 
                                               (0x7fffU 
                                                & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [0U][0xbU] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [0U][0xcU] >> 0xaU))) 
            & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                      [0U][0xcU]))) | (IData)((0U == 
                                               (0x7fffU 
                                                & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [0U][0xcU] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [0U][0xdU] >> 0xaU))) 
            & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                      [0U][0xdU]))) | (IData)((0U == 
                                               (0x7fffU 
                                                & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [0U][0xdU] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [0U][0xeU] >> 0xaU))) 
            & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                      [0U][0xeU]))) | (IData)((0U == 
                                               (0x7fffU 
                                                & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [0U][0xeU] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [0U][0xfU] >> 0xaU))) 
            & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                      [0U][0xfU]))) | (IData)((0U == 
                                               (0x7fffU 
                                                & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [0U][0xfU] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [1U][0U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [1U][0U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [1U][0U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [1U][1U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [1U][1U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [1U][1U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [1U][2U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [1U][2U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [1U][2U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [1U][3U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [1U][3U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [1U][3U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [1U][4U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [1U][4U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [1U][4U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [1U][5U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [1U][5U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [1U][5U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [1U][6U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [1U][6U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [1U][6U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [1U][7U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [1U][7U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [1U][7U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [1U][8U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [1U][8U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [1U][8U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [1U][9U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [1U][9U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [1U][9U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [1U][0xaU] >> 0xaU))) 
            & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                      [1U][0xaU]))) | (IData)((0U == 
                                               (0x7fffU 
                                                & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [1U][0xaU] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [1U][0xbU] >> 0xaU))) 
            & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                      [1U][0xbU]))) | (IData)((0U == 
                                               (0x7fffU 
                                                & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [1U][0xbU] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [1U][0xcU] >> 0xaU))) 
            & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                      [1U][0xcU]))) | (IData)((0U == 
                                               (0x7fffU 
                                                & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [1U][0xcU] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [1U][0xdU] >> 0xaU))) 
            & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                      [1U][0xdU]))) | (IData)((0U == 
                                               (0x7fffU 
                                                & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [1U][0xdU] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [1U][0xeU] >> 0xaU))) 
            & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                      [1U][0xeU]))) | (IData)((0U == 
                                               (0x7fffU 
                                                & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [1U][0xeU] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [1U][0xfU] >> 0xaU))) 
            & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                      [1U][0xfU]))) | (IData)((0U == 
                                               (0x7fffU 
                                                & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [1U][0xfU] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [2U][0U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [2U][0U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [2U][0U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [2U][1U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [2U][1U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [2U][1U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [2U][2U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [2U][2U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [2U][2U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [2U][3U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [2U][3U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [2U][3U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [2U][4U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [2U][4U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [2U][4U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [2U][5U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [2U][5U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [2U][5U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [2U][6U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [2U][6U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [2U][6U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [2U][7U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [2U][7U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [2U][7U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [2U][8U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [2U][8U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [2U][8U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [2U][9U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [2U][9U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [2U][9U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [2U][0xaU] >> 0xaU))) 
            & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                      [2U][0xaU]))) | (IData)((0U == 
                                               (0x7fffU 
                                                & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [2U][0xaU] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [2U][0xbU] >> 0xaU))) 
            & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                      [2U][0xbU]))) | (IData)((0U == 
                                               (0x7fffU 
                                                & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [2U][0xbU] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [2U][0xcU] >> 0xaU))) 
            & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                      [2U][0xcU]))) | (IData)((0U == 
                                               (0x7fffU 
                                                & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [2U][0xcU] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [2U][0xdU] >> 0xaU))) 
            & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                      [2U][0xdU]))) | (IData)((0U == 
                                               (0x7fffU 
                                                & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [2U][0xdU] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [2U][0xeU] >> 0xaU))) 
            & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                      [2U][0xeU]))) | (IData)((0U == 
                                               (0x7fffU 
                                                & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [2U][0xeU] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [2U][0xfU] >> 0xaU))) 
            & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                      [2U][0xfU]))) | (IData)((0U == 
                                               (0x7fffU 
                                                & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [2U][0xfU] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [3U][0U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [3U][0U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [3U][0U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [3U][1U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [3U][1U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [3U][1U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [3U][2U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [3U][2U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [3U][2U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [3U][3U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [3U][3U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [3U][3U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [3U][4U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [3U][4U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [3U][4U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [3U][5U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [3U][5U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [3U][5U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [3U][6U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [3U][6U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [3U][6U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [3U][7U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [3U][7U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [3U][7U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [3U][8U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [3U][8U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [3U][8U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [3U][9U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [3U][9U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [3U][9U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [3U][0xaU] >> 0xaU))) 
            & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                      [3U][0xaU]))) | (IData)((0U == 
                                               (0x7fffU 
                                                & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [3U][0xaU] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [3U][0xbU] >> 0xaU))) 
            & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                      [3U][0xbU]))) | (IData)((0U == 
                                               (0x7fffU 
                                                & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [3U][0xbU] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [3U][0xcU] >> 0xaU))) 
            & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                      [3U][0xcU]))) | (IData)((0U == 
                                               (0x7fffU 
                                                & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [3U][0xcU] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [3U][0xdU] >> 0xaU))) 
            & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                      [3U][0xdU]))) | (IData)((0U == 
                                               (0x7fffU 
                                                & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [3U][0xdU] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [3U][0xeU] >> 0xaU))) 
            & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                      [3U][0xeU]))) | (IData)((0U == 
                                               (0x7fffU 
                                                & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [3U][0xeU] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [3U][0xfU] >> 0xaU))) 
            & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                      [3U][0xfU]))) | (IData)((0U == 
                                               (0x7fffU 
                                                & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [3U][0xfU] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [4U][0U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [4U][0U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [4U][0U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [4U][1U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [4U][1U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [4U][1U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [4U][2U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [4U][2U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [4U][2U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [4U][3U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [4U][3U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [4U][3U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [4U][4U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [4U][4U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [4U][4U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [4U][5U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [4U][5U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [4U][5U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [4U][6U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [4U][6U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [4U][6U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [4U][7U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [4U][7U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [4U][7U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [4U][8U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [4U][8U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [4U][8U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [4U][9U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [4U][9U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [4U][9U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [4U][0xaU] >> 0xaU))) 
            & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                      [4U][0xaU]))) | (IData)((0U == 
                                               (0x7fffU 
                                                & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [4U][0xaU] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [4U][0xbU] >> 0xaU))) 
            & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                      [4U][0xbU]))) | (IData)((0U == 
                                               (0x7fffU 
                                                & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [4U][0xbU] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [4U][0xcU] >> 0xaU))) 
            & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                      [4U][0xcU]))) | (IData)((0U == 
                                               (0x7fffU 
                                                & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [4U][0xcU] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [4U][0xdU] >> 0xaU))) 
            & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                      [4U][0xdU]))) | (IData)((0U == 
                                               (0x7fffU 
                                                & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [4U][0xdU] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [4U][0xeU] >> 0xaU))) 
            & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                      [4U][0xeU]))) | (IData)((0U == 
                                               (0x7fffU 
                                                & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [4U][0xeU] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [4U][0xfU] >> 0xaU))) 
            & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                      [4U][0xfU]))) | (IData)((0U == 
                                               (0x7fffU 
                                                & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [4U][0xfU] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [5U][0U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [5U][0U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [5U][0U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [5U][1U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [5U][1U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [5U][1U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [5U][2U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [5U][2U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [5U][2U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [5U][3U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [5U][3U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [5U][3U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [5U][4U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [5U][4U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [5U][4U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [5U][5U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [5U][5U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [5U][5U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [5U][6U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [5U][6U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [5U][6U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [5U][7U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [5U][7U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [5U][7U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [5U][8U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [5U][8U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [5U][8U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [5U][9U] >> 0xaU))) & 
            (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                    [5U][9U]))) | (IData)((0U == (0x7fffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [5U][9U] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [5U][0xaU] >> 0xaU))) 
            & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                      [5U][0xaU]))) | (IData)((0U == 
                                               (0x7fffU 
                                                & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign 
        = (1U & ((vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                  [5U][0xaU] ^ (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)) 
                 >> 0xfU));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 
        = (((0U == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                             [5U][0xbU] >> 0xaU))) 
            & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                      [5U][0xbU]))) | (IData)((0U == 
                                               (0x7fffU 
                                                & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))));
}

VL_INLINE_OPT void Vnpu_core_top___024root___nba_sequent__TOP__7(Vnpu_core_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_core_top___024root___nba_sequent__TOP__7\n"); );
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
    if (vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_clear_q) {
        __Vtemp_1[0U] = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xdU];
        __Vtemp_2[0U] = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xcU];
        __Vtemp_3[0U] = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xbU];
        __Vtemp_4[0U] = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xaU];
        __Vtemp_5[0U] = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[9U];
        __Vtemp_6[0U] = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[8U];
        __Vtemp_7[0U] = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[7U];
        __Vtemp_8[0U] = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[6U];
        __Vtemp_9[0U] = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[5U];
        __Vtemp_10[0U] = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[4U];
        __Vtemp_11[0U] = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[3U];
        __Vtemp_12[0U] = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[2U];
        __Vtemp_13[0U] = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[1U];
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_write_data[0U] 
            = vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0U];
    } else {
        __Vtemp_1[0U] = (((IData)(((0x7f800000U == 
                                    (0x7f800000U & 
                                     vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xdU])) 
                                   & (0U != (0x7fffffU 
                                             & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xdU])))) 
                          | (IData)(((0x7f800000U == 
                                      (0x7f800000U 
                                       & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xdU])) 
                                     & (0U != (0x7fffffU 
                                               & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xdU])))))
                          ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__13__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf) 
                                            & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__13__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf))
                                            ? (((vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xdU] 
                                                 >> 0x1fU) 
                                                != 
                                                (vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xdU] 
                                                 >> 0x1fU))
                                                ? 0x7fc00000U
                                                : (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xdU])))
                                            : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__13__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf)
                                                ? (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xdU]))
                                                : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__13__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xdU]))
                                                    : 
                                                   (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__13__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero) 
                                                     & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__13__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero))
                                                     ? 
                                                    (0x80000000U 
                                                     & (vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xdU] 
                                                        & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xdU]))
                                                     : 
                                                    ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__13__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero)
                                                      ? 
                                                     vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xdU]
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__13__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero)
                                                       ? 
                                                      vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xdU]
                                                       : 
                                                      (((0U 
                                                         == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__13__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_exp)) 
                                                        & (0U 
                                                           == vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__13__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_mant))
                                                        ? 0U
                                                        : 
                                                       ((0xffU 
                                                         <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__13__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp))
                                                         ? 
                                                        (0x7f800000U 
                                                         | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__13__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                            << 0x1fU))
                                                         : 
                                                        (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__13__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                          << 0x1fU) 
                                                         | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__13__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp) 
                                                             << 0x17U) 
                                                            | vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__13__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__rounded_mant)))))))))));
        __Vtemp_2[0U] = (((IData)(((0x7f800000U == 
                                    (0x7f800000U & 
                                     vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xcU])) 
                                   & (0U != (0x7fffffU 
                                             & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xcU])))) 
                          | (IData)(((0x7f800000U == 
                                      (0x7f800000U 
                                       & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xcU])) 
                                     & (0U != (0x7fffffU 
                                               & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xcU])))))
                          ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__12__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf) 
                                            & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__12__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf))
                                            ? (((vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xcU] 
                                                 >> 0x1fU) 
                                                != 
                                                (vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xcU] 
                                                 >> 0x1fU))
                                                ? 0x7fc00000U
                                                : (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xcU])))
                                            : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__12__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf)
                                                ? (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xcU]))
                                                : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__12__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xcU]))
                                                    : 
                                                   (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__12__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero) 
                                                     & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__12__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero))
                                                     ? 
                                                    (0x80000000U 
                                                     & (vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xcU] 
                                                        & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xcU]))
                                                     : 
                                                    ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__12__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero)
                                                      ? 
                                                     vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xcU]
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__12__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero)
                                                       ? 
                                                      vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xcU]
                                                       : 
                                                      (((0U 
                                                         == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__12__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_exp)) 
                                                        & (0U 
                                                           == vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__12__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_mant))
                                                        ? 0U
                                                        : 
                                                       ((0xffU 
                                                         <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__12__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp))
                                                         ? 
                                                        (0x7f800000U 
                                                         | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__12__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                            << 0x1fU))
                                                         : 
                                                        (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__12__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                          << 0x1fU) 
                                                         | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__12__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp) 
                                                             << 0x17U) 
                                                            | vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__12__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__rounded_mant)))))))))));
        __Vtemp_3[0U] = (((IData)(((0x7f800000U == 
                                    (0x7f800000U & 
                                     vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xbU])) 
                                   & (0U != (0x7fffffU 
                                             & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xbU])))) 
                          | (IData)(((0x7f800000U == 
                                      (0x7f800000U 
                                       & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xbU])) 
                                     & (0U != (0x7fffffU 
                                               & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xbU])))))
                          ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__11__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf) 
                                            & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__11__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf))
                                            ? (((vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xbU] 
                                                 >> 0x1fU) 
                                                != 
                                                (vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xbU] 
                                                 >> 0x1fU))
                                                ? 0x7fc00000U
                                                : (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xbU])))
                                            : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__11__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf)
                                                ? (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xbU]))
                                                : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__11__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xbU]))
                                                    : 
                                                   (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__11__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero) 
                                                     & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__11__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero))
                                                     ? 
                                                    (0x80000000U 
                                                     & (vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xbU] 
                                                        & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xbU]))
                                                     : 
                                                    ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__11__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero)
                                                      ? 
                                                     vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xbU]
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__11__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero)
                                                       ? 
                                                      vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xbU]
                                                       : 
                                                      (((0U 
                                                         == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__11__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_exp)) 
                                                        & (0U 
                                                           == vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__11__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_mant))
                                                        ? 0U
                                                        : 
                                                       ((0xffU 
                                                         <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__11__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp))
                                                         ? 
                                                        (0x7f800000U 
                                                         | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__11__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                            << 0x1fU))
                                                         : 
                                                        (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__11__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                          << 0x1fU) 
                                                         | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__11__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp) 
                                                             << 0x17U) 
                                                            | vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__11__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__rounded_mant)))))))))));
        __Vtemp_4[0U] = (((IData)(((0x7f800000U == 
                                    (0x7f800000U & 
                                     vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xaU])) 
                                   & (0U != (0x7fffffU 
                                             & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xaU])))) 
                          | (IData)(((0x7f800000U == 
                                      (0x7f800000U 
                                       & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xaU])) 
                                     & (0U != (0x7fffffU 
                                               & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xaU])))))
                          ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__10__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf) 
                                            & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__10__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf))
                                            ? (((vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xaU] 
                                                 >> 0x1fU) 
                                                != 
                                                (vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xaU] 
                                                 >> 0x1fU))
                                                ? 0x7fc00000U
                                                : (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xaU])))
                                            : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__10__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf)
                                                ? (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xaU]))
                                                : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__10__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xaU]))
                                                    : 
                                                   (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__10__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero) 
                                                     & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__10__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero))
                                                     ? 
                                                    (0x80000000U 
                                                     & (vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xaU] 
                                                        & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xaU]))
                                                     : 
                                                    ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__10__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero)
                                                      ? 
                                                     vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xaU]
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__10__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero)
                                                       ? 
                                                      vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xaU]
                                                       : 
                                                      (((0U 
                                                         == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__10__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_exp)) 
                                                        & (0U 
                                                           == vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__10__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_mant))
                                                        ? 0U
                                                        : 
                                                       ((0xffU 
                                                         <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__10__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp))
                                                         ? 
                                                        (0x7f800000U 
                                                         | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__10__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                            << 0x1fU))
                                                         : 
                                                        (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__10__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                          << 0x1fU) 
                                                         | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__10__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp) 
                                                             << 0x17U) 
                                                            | vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__10__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__rounded_mant)))))))))));
        __Vtemp_5[0U] = (((IData)(((0x7f800000U == 
                                    (0x7f800000U & 
                                     vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[9U])) 
                                   & (0U != (0x7fffffU 
                                             & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[9U])))) 
                          | (IData)(((0x7f800000U == 
                                      (0x7f800000U 
                                       & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[9U])) 
                                     & (0U != (0x7fffffU 
                                               & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[9U])))))
                          ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__9__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf) 
                                            & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__9__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf))
                                            ? (((vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[9U] 
                                                 >> 0x1fU) 
                                                != 
                                                (vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[9U] 
                                                 >> 0x1fU))
                                                ? 0x7fc00000U
                                                : (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[9U])))
                                            : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__9__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf)
                                                ? (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[9U]))
                                                : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__9__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[9U]))
                                                    : 
                                                   (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__9__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero) 
                                                     & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__9__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero))
                                                     ? 
                                                    (0x80000000U 
                                                     & (vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[9U] 
                                                        & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[9U]))
                                                     : 
                                                    ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__9__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero)
                                                      ? 
                                                     vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[9U]
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__9__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero)
                                                       ? 
                                                      vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[9U]
                                                       : 
                                                      (((0U 
                                                         == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__9__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_exp)) 
                                                        & (0U 
                                                           == vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__9__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_mant))
                                                        ? 0U
                                                        : 
                                                       ((0xffU 
                                                         <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__9__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp))
                                                         ? 
                                                        (0x7f800000U 
                                                         | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__9__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                            << 0x1fU))
                                                         : 
                                                        (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__9__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                          << 0x1fU) 
                                                         | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__9__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp) 
                                                             << 0x17U) 
                                                            | vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__9__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__rounded_mant)))))))))));
        __Vtemp_6[0U] = (((IData)(((0x7f800000U == 
                                    (0x7f800000U & 
                                     vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[8U])) 
                                   & (0U != (0x7fffffU 
                                             & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[8U])))) 
                          | (IData)(((0x7f800000U == 
                                      (0x7f800000U 
                                       & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[8U])) 
                                     & (0U != (0x7fffffU 
                                               & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[8U])))))
                          ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__8__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf) 
                                            & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__8__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf))
                                            ? (((vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[8U] 
                                                 >> 0x1fU) 
                                                != 
                                                (vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[8U] 
                                                 >> 0x1fU))
                                                ? 0x7fc00000U
                                                : (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[8U])))
                                            : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__8__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf)
                                                ? (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[8U]))
                                                : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__8__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[8U]))
                                                    : 
                                                   (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__8__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero) 
                                                     & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__8__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero))
                                                     ? 
                                                    (0x80000000U 
                                                     & (vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[8U] 
                                                        & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[8U]))
                                                     : 
                                                    ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__8__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero)
                                                      ? 
                                                     vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[8U]
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__8__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero)
                                                       ? 
                                                      vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[8U]
                                                       : 
                                                      (((0U 
                                                         == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__8__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_exp)) 
                                                        & (0U 
                                                           == vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__8__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_mant))
                                                        ? 0U
                                                        : 
                                                       ((0xffU 
                                                         <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__8__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp))
                                                         ? 
                                                        (0x7f800000U 
                                                         | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__8__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                            << 0x1fU))
                                                         : 
                                                        (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__8__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                          << 0x1fU) 
                                                         | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__8__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp) 
                                                             << 0x17U) 
                                                            | vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__8__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__rounded_mant)))))))))));
        __Vtemp_7[0U] = (((IData)(((0x7f800000U == 
                                    (0x7f800000U & 
                                     vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[7U])) 
                                   & (0U != (0x7fffffU 
                                             & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[7U])))) 
                          | (IData)(((0x7f800000U == 
                                      (0x7f800000U 
                                       & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[7U])) 
                                     & (0U != (0x7fffffU 
                                               & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[7U])))))
                          ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__7__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf) 
                                            & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__7__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf))
                                            ? (((vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[7U] 
                                                 >> 0x1fU) 
                                                != 
                                                (vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[7U] 
                                                 >> 0x1fU))
                                                ? 0x7fc00000U
                                                : (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[7U])))
                                            : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__7__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf)
                                                ? (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[7U]))
                                                : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__7__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[7U]))
                                                    : 
                                                   (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__7__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero) 
                                                     & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__7__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero))
                                                     ? 
                                                    (0x80000000U 
                                                     & (vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[7U] 
                                                        & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[7U]))
                                                     : 
                                                    ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__7__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero)
                                                      ? 
                                                     vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[7U]
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__7__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero)
                                                       ? 
                                                      vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[7U]
                                                       : 
                                                      (((0U 
                                                         == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__7__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_exp)) 
                                                        & (0U 
                                                           == vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__7__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_mant))
                                                        ? 0U
                                                        : 
                                                       ((0xffU 
                                                         <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__7__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp))
                                                         ? 
                                                        (0x7f800000U 
                                                         | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__7__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                            << 0x1fU))
                                                         : 
                                                        (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__7__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                          << 0x1fU) 
                                                         | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__7__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp) 
                                                             << 0x17U) 
                                                            | vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__7__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__rounded_mant)))))))))));
        __Vtemp_8[0U] = (((IData)(((0x7f800000U == 
                                    (0x7f800000U & 
                                     vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[6U])) 
                                   & (0U != (0x7fffffU 
                                             & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[6U])))) 
                          | (IData)(((0x7f800000U == 
                                      (0x7f800000U 
                                       & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[6U])) 
                                     & (0U != (0x7fffffU 
                                               & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[6U])))))
                          ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__6__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf) 
                                            & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__6__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf))
                                            ? (((vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[6U] 
                                                 >> 0x1fU) 
                                                != 
                                                (vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[6U] 
                                                 >> 0x1fU))
                                                ? 0x7fc00000U
                                                : (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[6U])))
                                            : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__6__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf)
                                                ? (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[6U]))
                                                : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__6__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[6U]))
                                                    : 
                                                   (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__6__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero) 
                                                     & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__6__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero))
                                                     ? 
                                                    (0x80000000U 
                                                     & (vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[6U] 
                                                        & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[6U]))
                                                     : 
                                                    ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__6__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero)
                                                      ? 
                                                     vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[6U]
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__6__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero)
                                                       ? 
                                                      vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[6U]
                                                       : 
                                                      (((0U 
                                                         == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__6__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_exp)) 
                                                        & (0U 
                                                           == vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__6__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_mant))
                                                        ? 0U
                                                        : 
                                                       ((0xffU 
                                                         <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__6__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp))
                                                         ? 
                                                        (0x7f800000U 
                                                         | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__6__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                            << 0x1fU))
                                                         : 
                                                        (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__6__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                          << 0x1fU) 
                                                         | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__6__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp) 
                                                             << 0x17U) 
                                                            | vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__6__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__rounded_mant)))))))))));
        __Vtemp_9[0U] = (((IData)(((0x7f800000U == 
                                    (0x7f800000U & 
                                     vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[5U])) 
                                   & (0U != (0x7fffffU 
                                             & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[5U])))) 
                          | (IData)(((0x7f800000U == 
                                      (0x7f800000U 
                                       & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[5U])) 
                                     & (0U != (0x7fffffU 
                                               & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[5U])))))
                          ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__5__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf) 
                                            & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__5__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf))
                                            ? (((vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[5U] 
                                                 >> 0x1fU) 
                                                != 
                                                (vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[5U] 
                                                 >> 0x1fU))
                                                ? 0x7fc00000U
                                                : (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[5U])))
                                            : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__5__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf)
                                                ? (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[5U]))
                                                : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__5__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[5U]))
                                                    : 
                                                   (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__5__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero) 
                                                     & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__5__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero))
                                                     ? 
                                                    (0x80000000U 
                                                     & (vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[5U] 
                                                        & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[5U]))
                                                     : 
                                                    ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__5__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero)
                                                      ? 
                                                     vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[5U]
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__5__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero)
                                                       ? 
                                                      vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[5U]
                                                       : 
                                                      (((0U 
                                                         == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__5__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_exp)) 
                                                        & (0U 
                                                           == vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__5__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_mant))
                                                        ? 0U
                                                        : 
                                                       ((0xffU 
                                                         <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__5__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp))
                                                         ? 
                                                        (0x7f800000U 
                                                         | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__5__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                            << 0x1fU))
                                                         : 
                                                        (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__5__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                          << 0x1fU) 
                                                         | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__5__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp) 
                                                             << 0x17U) 
                                                            | vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__5__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__rounded_mant)))))))))));
        __Vtemp_10[0U] = (((IData)(((0x7f800000U == 
                                     (0x7f800000U & 
                                      vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[4U])) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[4U])))) 
                           | (IData)(((0x7f800000U 
                                       == (0x7f800000U 
                                           & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[4U])) 
                                      & (0U != (0x7fffffU 
                                                & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[4U])))))
                           ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__4__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf) 
                                             & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__4__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf))
                                             ? (((vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[4U] 
                                                  >> 0x1fU) 
                                                 != 
                                                 (vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[4U] 
                                                  >> 0x1fU))
                                                 ? 0x7fc00000U
                                                 : 
                                                (0x7f800000U 
                                                 | (0x80000000U 
                                                    & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[4U])))
                                             : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__4__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf)
                                                 ? 
                                                (0x7f800000U 
                                                 | (0x80000000U 
                                                    & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[4U]))
                                                 : 
                                                ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__4__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf)
                                                  ? 
                                                 (0x7f800000U 
                                                  | (0x80000000U 
                                                     & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[4U]))
                                                  : 
                                                 (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__4__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero) 
                                                   & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__4__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero))
                                                   ? 
                                                  (0x80000000U 
                                                   & (vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[4U] 
                                                      & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[4U]))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__4__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero)
                                                    ? 
                                                   vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[4U]
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__4__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[4U]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__4__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__4__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__4__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__4__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__4__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__4__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__4__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__rounded_mant)))))))))));
        __Vtemp_11[0U] = (((IData)(((0x7f800000U == 
                                     (0x7f800000U & 
                                      vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[3U])) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[3U])))) 
                           | (IData)(((0x7f800000U 
                                       == (0x7f800000U 
                                           & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[3U])) 
                                      & (0U != (0x7fffffU 
                                                & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[3U])))))
                           ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__3__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf) 
                                             & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__3__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf))
                                             ? (((vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[3U] 
                                                  >> 0x1fU) 
                                                 != 
                                                 (vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[3U] 
                                                  >> 0x1fU))
                                                 ? 0x7fc00000U
                                                 : 
                                                (0x7f800000U 
                                                 | (0x80000000U 
                                                    & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[3U])))
                                             : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__3__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf)
                                                 ? 
                                                (0x7f800000U 
                                                 | (0x80000000U 
                                                    & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[3U]))
                                                 : 
                                                ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__3__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf)
                                                  ? 
                                                 (0x7f800000U 
                                                  | (0x80000000U 
                                                     & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[3U]))
                                                  : 
                                                 (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__3__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero) 
                                                   & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__3__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero))
                                                   ? 
                                                  (0x80000000U 
                                                   & (vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[3U] 
                                                      & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[3U]))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__3__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero)
                                                    ? 
                                                   vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[3U]
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__3__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[3U]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__3__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__3__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__3__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__3__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__3__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__3__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__3__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__rounded_mant)))))))))));
        __Vtemp_12[0U] = (((IData)(((0x7f800000U == 
                                     (0x7f800000U & 
                                      vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[2U])) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[2U])))) 
                           | (IData)(((0x7f800000U 
                                       == (0x7f800000U 
                                           & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[2U])) 
                                      & (0U != (0x7fffffU 
                                                & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[2U])))))
                           ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__2__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf) 
                                             & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__2__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf))
                                             ? (((vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[2U] 
                                                  >> 0x1fU) 
                                                 != 
                                                 (vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[2U] 
                                                  >> 0x1fU))
                                                 ? 0x7fc00000U
                                                 : 
                                                (0x7f800000U 
                                                 | (0x80000000U 
                                                    & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[2U])))
                                             : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__2__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf)
                                                 ? 
                                                (0x7f800000U 
                                                 | (0x80000000U 
                                                    & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[2U]))
                                                 : 
                                                ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__2__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf)
                                                  ? 
                                                 (0x7f800000U 
                                                  | (0x80000000U 
                                                     & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[2U]))
                                                  : 
                                                 (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__2__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero) 
                                                   & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__2__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero))
                                                   ? 
                                                  (0x80000000U 
                                                   & (vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[2U] 
                                                      & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[2U]))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__2__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero)
                                                    ? 
                                                   vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[2U]
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__2__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[2U]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__2__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__2__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__2__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__2__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__2__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__2__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__2__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__rounded_mant)))))))))));
        __Vtemp_13[0U] = (((IData)(((0x7f800000U == 
                                     (0x7f800000U & 
                                      vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[1U])) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[1U])))) 
                           | (IData)(((0x7f800000U 
                                       == (0x7f800000U 
                                           & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[1U])) 
                                      & (0U != (0x7fffffU 
                                                & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[1U])))))
                           ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__1__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf) 
                                             & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__1__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf))
                                             ? (((vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[1U] 
                                                  >> 0x1fU) 
                                                 != 
                                                 (vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[1U] 
                                                  >> 0x1fU))
                                                 ? 0x7fc00000U
                                                 : 
                                                (0x7f800000U 
                                                 | (0x80000000U 
                                                    & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[1U])))
                                             : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__1__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf)
                                                 ? 
                                                (0x7f800000U 
                                                 | (0x80000000U 
                                                    & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[1U]))
                                                 : 
                                                ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__1__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf)
                                                  ? 
                                                 (0x7f800000U 
                                                  | (0x80000000U 
                                                     & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[1U]))
                                                  : 
                                                 (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__1__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero) 
                                                   & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__1__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero))
                                                   ? 
                                                  (0x80000000U 
                                                   & (vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[1U] 
                                                      & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[1U]))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__1__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero)
                                                    ? 
                                                   vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[1U]
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__1__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[1U]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__1__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__1__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__1__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__1__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__1__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__1__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__1__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__rounded_mant)))))))))));
        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_write_data[0U] 
            = (((IData)(((0x7f800000U == (0x7f800000U 
                                          & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0U])) 
                         & (0U != (0x7fffffU & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0U])))) 
                | (IData)(((0x7f800000U == (0x7f800000U 
                                            & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0U])) 
                           & (0U != (0x7fffffU & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0U])))))
                ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__0__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf) 
                                  & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__0__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf))
                                  ? (((vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0U] 
                                       >> 0x1fU) != 
                                      (vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0U] 
                                       >> 0x1fU)) ? 0x7fc00000U
                                      : (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0U])))
                                  : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__0__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf)
                                      ? (0x7f800000U 
                                         | (0x80000000U 
                                            & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0U]))
                                      : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__0__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf)
                                          ? (0x7f800000U 
                                             | (0x80000000U 
                                                & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0U]))
                                          : (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__0__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero) 
                                              & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__0__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero))
                                              ? (0x80000000U 
                                                 & (vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0U] 
                                                    & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0U]))
                                              : ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__0__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero)
                                                  ? 
                                                 vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0U]
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__0__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0U]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__0__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__0__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__0__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__0__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__0__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__0__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__0__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__rounded_mant)))))))))));
    }
    __Vtemp_1[1U] = (IData)((((QData)((IData)(((IData)(vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_clear_q)
                                                ? vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xfU]
                                                : (
                                                   ((IData)(
                                                            ((0x7f800000U 
                                                              == 
                                                              (0x7f800000U 
                                                               & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xfU])) 
                                                             & (0U 
                                                                != 
                                                                (0x7fffffU 
                                                                 & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xfU])))) 
                                                    | (IData)(
                                                              ((0x7f800000U 
                                                                == 
                                                                (0x7f800000U 
                                                                 & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xfU])) 
                                                               & (0U 
                                                                  != 
                                                                  (0x7fffffU 
                                                                   & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xfU])))))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf) 
                                                     & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf))
                                                     ? 
                                                    (((vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xfU] 
                                                       >> 0x1fU) 
                                                      != 
                                                      (vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xfU] 
                                                       >> 0x1fU))
                                                      ? 0x7fc00000U
                                                      : 
                                                     (0x7f800000U 
                                                      | (0x80000000U 
                                                         & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xfU])))
                                                     : 
                                                    ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf)
                                                      ? 
                                                     (0x7f800000U 
                                                      | (0x80000000U 
                                                         & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xfU]))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf)
                                                       ? 
                                                      (0x7f800000U 
                                                       | (0x80000000U 
                                                          & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xfU]))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero) 
                                                        & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero))
                                                        ? 
                                                       (0x80000000U 
                                                        & (vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xfU] 
                                                           & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xfU]))
                                                        : 
                                                       ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero)
                                                         ? 
                                                        vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xfU]
                                                         : 
                                                        ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero)
                                                          ? 
                                                         vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xfU]
                                                          : 
                                                         (((0U 
                                                            == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_exp)) 
                                                           & (0U 
                                                              == vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_mant))
                                                           ? 0U
                                                           : 
                                                          ((0xffU 
                                                            <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp))
                                                            ? 
                                                           (0x7f800000U 
                                                            | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                               << 0x1fU))
                                                            : 
                                                           (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                             << 0x1fU) 
                                                            | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp) 
                                                                << 0x17U) 
                                                               | vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__rounded_mant)))))))))))))) 
                              << 0x20U) | (QData)((IData)(
                                                          ((IData)(vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_clear_q)
                                                            ? 
                                                           vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xeU]
                                                            : 
                                                           (((IData)(
                                                                     ((0x7f800000U 
                                                                       == 
                                                                       (0x7f800000U 
                                                                        & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xeU])) 
                                                                      & (0U 
                                                                         != 
                                                                         (0x7fffffU 
                                                                          & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xeU])))) 
                                                             | (IData)(
                                                                       ((0x7f800000U 
                                                                         == 
                                                                         (0x7f800000U 
                                                                          & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xeU])) 
                                                                        & (0U 
                                                                           != 
                                                                           (0x7fffffU 
                                                                            & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xeU])))))
                                                             ? 0x7fc00000U
                                                             : 
                                                            (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf) 
                                                              & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf))
                                                              ? 
                                                             (((vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xeU] 
                                                                >> 0x1fU) 
                                                               != 
                                                               (vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xeU] 
                                                                >> 0x1fU))
                                                               ? 0x7fc00000U
                                                               : 
                                                              (0x7f800000U 
                                                               | (0x80000000U 
                                                                  & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xeU])))
                                                              : 
                                                             ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf)
                                                               ? 
                                                              (0x7f800000U 
                                                               | (0x80000000U 
                                                                  & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xeU]))
                                                               : 
                                                              ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf)
                                                                ? 
                                                               (0x7f800000U 
                                                                | (0x80000000U 
                                                                   & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xeU]))
                                                                : 
                                                               (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero) 
                                                                 & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero))
                                                                 ? 
                                                                (0x80000000U 
                                                                 & (vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xeU] 
                                                                    & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xeU]))
                                                                 : 
                                                                ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero)
                                                                  ? 
                                                                 vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xeU]
                                                                  : 
                                                                 ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero)
                                                                   ? 
                                                                  vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xeU]
                                                                   : 
                                                                  (((0U 
                                                                     == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_exp)) 
                                                                    & (0U 
                                                                       == vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_mant))
                                                                    ? 0U
                                                                    : 
                                                                   ((0xffU 
                                                                     <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp))
                                                                     ? 
                                                                    (0x7f800000U 
                                                                     | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                                        << 0x1fU))
                                                                     : 
                                                                    (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                                      << 0x1fU) 
                                                                     | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp) 
                                                                         << 0x17U) 
                                                                        | vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__rounded_mant))))))))))))))));
    __Vtemp_1[2U] = (IData)(((((QData)((IData)(((IData)(vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_clear_q)
                                                 ? 
                                                vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xfU]
                                                 : 
                                                (((IData)(
                                                          ((0x7f800000U 
                                                            == 
                                                            (0x7f800000U 
                                                             & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xfU])) 
                                                           & (0U 
                                                              != 
                                                              (0x7fffffU 
                                                               & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xfU])))) 
                                                  | (IData)(
                                                            ((0x7f800000U 
                                                              == 
                                                              (0x7f800000U 
                                                               & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xfU])) 
                                                             & (0U 
                                                                != 
                                                                (0x7fffffU 
                                                                 & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xfU])))))
                                                  ? 0x7fc00000U
                                                  : 
                                                 (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xfU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xfU] 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xfU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xfU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xfU]))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xfU] 
                                                         & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xfU]))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero)
                                                       ? 
                                                      vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xfU]
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xfU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__15__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__rounded_mant)))))))))))))) 
                               << 0x20U) | (QData)((IData)(
                                                           ((IData)(vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_clear_q)
                                                             ? 
                                                            vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xeU]
                                                             : 
                                                            (((IData)(
                                                                      ((0x7f800000U 
                                                                        == 
                                                                        (0x7f800000U 
                                                                         & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xeU])) 
                                                                       & (0U 
                                                                          != 
                                                                          (0x7fffffU 
                                                                           & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xeU])))) 
                                                              | (IData)(
                                                                        ((0x7f800000U 
                                                                          == 
                                                                          (0x7f800000U 
                                                                           & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xeU])) 
                                                                         & (0U 
                                                                            != 
                                                                            (0x7fffffU 
                                                                             & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xeU])))))
                                                              ? 0x7fc00000U
                                                              : 
                                                             (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf) 
                                                               & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf))
                                                               ? 
                                                              (((vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xeU] 
                                                                 >> 0x1fU) 
                                                                != 
                                                                (vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xeU] 
                                                                 >> 0x1fU))
                                                                ? 0x7fc00000U
                                                                : 
                                                               (0x7f800000U 
                                                                | (0x80000000U 
                                                                   & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xeU])))
                                                               : 
                                                              ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_inf)
                                                                ? 
                                                               (0x7f800000U 
                                                                | (0x80000000U 
                                                                   & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xeU]))
                                                                : 
                                                               ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_inf)
                                                                 ? 
                                                                (0x7f800000U 
                                                                 | (0x80000000U 
                                                                    & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xeU]))
                                                                 : 
                                                                (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero) 
                                                                  & (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero))
                                                                  ? 
                                                                 (0x80000000U 
                                                                  & (vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xeU] 
                                                                     & vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xeU]))
                                                                  : 
                                                                 ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__a_is_zero)
                                                                   ? 
                                                                  vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q[0xeU]
                                                                   : 
                                                                  ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__b_is_zero)
                                                                    ? 
                                                                   vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data[0xeU]
                                                                    : 
                                                                   (((0U 
                                                                      == (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_exp)) 
                                                                     & (0U 
                                                                        == vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__norm_mant))
                                                                     ? 0U
                                                                     : 
                                                                    ((0xffU 
                                                                      <= (IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp))
                                                                      ? 
                                                                     (0x7f800000U 
                                                                      | ((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                                         << 0x1fU))
                                                                      : 
                                                                     (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__large_sign) 
                                                                       << 0x1fU) 
                                                                      | (((IData)(vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__final_exp) 
                                                                          << 0x17U) 
                                                                         | vlSymsp->TOP__npu_core_top__DOT__u_psum_buffer__DOT__VEC_ADD__BRA__14__KET____DOT__MODE_FP16__DOT__u_acc_adder.__PVT__rounded_mant))))))))))))))) 
                             >> 0x20U));
    vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_write_data[1U] 
        = __Vtemp_13[0U];
    vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_write_data[2U] 
        = __Vtemp_12[0U];
    vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_write_data[3U] 
        = __Vtemp_11[0U];
    vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_write_data[4U] 
        = __Vtemp_10[0U];
    vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_write_data[5U] 
        = __Vtemp_9[0U];
    vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_write_data[6U] 
        = __Vtemp_8[0U];
    vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_write_data[7U] 
        = __Vtemp_7[0U];
    vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_write_data[8U] 
        = __Vtemp_6[0U];
    vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_write_data[9U] 
        = __Vtemp_5[0U];
    vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_write_data[0xaU] 
        = __Vtemp_4[0U];
    vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_write_data[0xbU] 
        = __Vtemp_3[0U];
    vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_write_data[0xcU] 
        = __Vtemp_2[0U];
    vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_write_data[0xdU] 
        = __Vtemp_1[0U];
    vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_write_data[0xeU] 
        = __Vtemp_1[1U];
    vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_write_data[0xfU] 
        = __Vtemp_1[2U];
}
