// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpu_core_top.h for the primary calling header

#include "Vnpu_core_top__pch.h"
#include "Vnpu_core_top___024root.h"

VL_INLINE_OPT void Vnpu_core_top___024root___nba_sequent__TOP__5(Vnpu_core_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_core_top___024root___nba_sequent__TOP__5\n"); );
    // Body
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [7U][3U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [7U][3U]))) | (IData)(((0x7c00U 
                                               == (0x7c00U 
                                                   & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                              & (0U 
                                                 != 
                                                 (0x3ffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [7U]
                                                   [3U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [7U][3U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [7U]
                                                 [3U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [7U]
                                                [3U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [7U][4U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [7U][4U]))) | (IData)(((0x7c00U 
                                               == (0x7c00U 
                                                   & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                              & (0U 
                                                 != 
                                                 (0x3ffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [7U]
                                                   [4U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [7U][4U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [7U]
                                                 [4U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [7U]
                                                [4U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [7U][5U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [7U][5U]))) | (IData)(((0x7c00U 
                                               == (0x7c00U 
                                                   & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                              & (0U 
                                                 != 
                                                 (0x3ffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [7U]
                                                   [5U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [7U][5U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [7U]
                                                 [5U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [7U]
                                                [5U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [7U][6U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [7U][6U]))) | (IData)(((0x7c00U 
                                               == (0x7c00U 
                                                   & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                              & (0U 
                                                 != 
                                                 (0x3ffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [7U]
                                                   [6U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [7U][6U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [7U]
                                                 [6U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [7U]
                                                [6U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [7U][7U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [7U][7U]))) | (IData)(((0x7c00U 
                                               == (0x7c00U 
                                                   & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                              & (0U 
                                                 != 
                                                 (0x3ffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [7U]
                                                   [7U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [7U][7U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [7U]
                                                 [7U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [7U]
                                                [7U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [7U][8U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [7U][8U]))) | (IData)(((0x7c00U 
                                               == (0x7c00U 
                                                   & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                              & (0U 
                                                 != 
                                                 (0x3ffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [7U]
                                                   [8U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [7U][8U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [7U]
                                                 [8U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [7U]
                                                [8U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [7U][9U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [7U][9U]))) | (IData)(((0x7c00U 
                                               == (0x7c00U 
                                                   & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                              & (0U 
                                                 != 
                                                 (0x3ffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [7U]
                                                   [9U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [7U][9U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [7U]
                                                 [9U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [7U]
                                                [9U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [7U][0xaU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [7U][0xaU]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [7U]
                                                   [0xaU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [7U][0xaU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [7U]
                                                 [0xaU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [7U]
                                                [0xaU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [7U][0xbU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [7U][0xbU]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [7U]
                                                   [0xbU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [7U][0xbU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [7U]
                                                 [0xbU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [7U]
                                                [0xbU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [7U][0xcU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [7U][0xcU]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [7U]
                                                   [0xcU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [7U][0xcU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [7U]
                                                 [0xcU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [7U]
                                                [0xcU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [7U][0xdU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [7U][0xdU]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [7U]
                                                   [0xdU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [7U][0xdU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [7U]
                                                 [0xdU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [7U]
                                                [0xdU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [7U][0xeU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [7U][0xeU]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [7U]
                                                   [0xeU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [7U][0xeU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [7U]
                                                 [0xeU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [7U]
                                                [0xeU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [7U][0xfU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [7U][0xfU]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [7U]
                                                   [0xfU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [7U][0xfU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [7U]
                                                 [0xfU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [7U]
                                                [0xfU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [8U][0U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [8U][0U]))) | (IData)(((0x7c00U 
                                               == (0x7c00U 
                                                   & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                              & (0U 
                                                 != 
                                                 (0x3ffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [8U]
                                                   [0U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [8U][0U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [8U]
                                                 [0U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [8U]
                                                [0U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [8U][1U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [8U][1U]))) | (IData)(((0x7c00U 
                                               == (0x7c00U 
                                                   & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                              & (0U 
                                                 != 
                                                 (0x3ffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [8U]
                                                   [1U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [8U][1U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [8U]
                                                 [1U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [8U]
                                                [1U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [8U][2U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [8U][2U]))) | (IData)(((0x7c00U 
                                               == (0x7c00U 
                                                   & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                              & (0U 
                                                 != 
                                                 (0x3ffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [8U]
                                                   [2U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [8U][2U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [8U]
                                                 [2U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [8U]
                                                [2U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [8U][3U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [8U][3U]))) | (IData)(((0x7c00U 
                                               == (0x7c00U 
                                                   & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                              & (0U 
                                                 != 
                                                 (0x3ffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [8U]
                                                   [3U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [8U][3U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [8U]
                                                 [3U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [8U]
                                                [3U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [8U][4U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [8U][4U]))) | (IData)(((0x7c00U 
                                               == (0x7c00U 
                                                   & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                              & (0U 
                                                 != 
                                                 (0x3ffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [8U]
                                                   [4U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [8U][4U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [8U]
                                                 [4U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [8U]
                                                [4U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [8U][5U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [8U][5U]))) | (IData)(((0x7c00U 
                                               == (0x7c00U 
                                                   & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                              & (0U 
                                                 != 
                                                 (0x3ffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [8U]
                                                   [5U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [8U][5U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [8U]
                                                 [5U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [8U]
                                                [5U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [8U][6U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [8U][6U]))) | (IData)(((0x7c00U 
                                               == (0x7c00U 
                                                   & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                              & (0U 
                                                 != 
                                                 (0x3ffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [8U]
                                                   [6U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [8U][6U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [8U]
                                                 [6U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [8U]
                                                [6U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [8U][7U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [8U][7U]))) | (IData)(((0x7c00U 
                                               == (0x7c00U 
                                                   & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                              & (0U 
                                                 != 
                                                 (0x3ffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [8U]
                                                   [7U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [8U][7U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [8U]
                                                 [7U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [8U]
                                                [7U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [8U][8U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [8U][8U]))) | (IData)(((0x7c00U 
                                               == (0x7c00U 
                                                   & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                              & (0U 
                                                 != 
                                                 (0x3ffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [8U]
                                                   [8U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [8U][8U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [8U]
                                                 [8U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [8U]
                                                [8U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [8U][9U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [8U][9U]))) | (IData)(((0x7c00U 
                                               == (0x7c00U 
                                                   & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                              & (0U 
                                                 != 
                                                 (0x3ffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [8U]
                                                   [9U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [8U][9U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [8U]
                                                 [9U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [8U]
                                                [9U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [8U][0xaU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [8U][0xaU]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [8U]
                                                   [0xaU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [8U][0xaU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [8U]
                                                 [0xaU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [8U]
                                                [0xaU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [8U][0xbU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [8U][0xbU]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [8U]
                                                   [0xbU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [8U][0xbU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [8U]
                                                 [0xbU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [8U]
                                                [0xbU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [8U][0xcU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [8U][0xcU]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [8U]
                                                   [0xcU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [8U][0xcU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [8U]
                                                 [0xcU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [8U]
                                                [0xcU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [8U][0xdU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [8U][0xdU]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [8U]
                                                   [0xdU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [8U][0xdU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [8U]
                                                 [0xdU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [8U]
                                                [0xdU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [8U][0xeU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [8U][0xeU]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [8U]
                                                   [0xeU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [8U][0xeU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [8U]
                                                 [0xeU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [8U]
                                                [0xeU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [8U][0xfU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [8U][0xfU]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [8U]
                                                   [0xfU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [8U][0xfU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [8U]
                                                 [0xfU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [8U]
                                                [0xfU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [9U][0U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [9U][0U]))) | (IData)(((0x7c00U 
                                               == (0x7c00U 
                                                   & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                              & (0U 
                                                 != 
                                                 (0x3ffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [9U]
                                                   [0U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [9U][0U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [9U]
                                                 [0U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [9U]
                                                [0U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [9U][1U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [9U][1U]))) | (IData)(((0x7c00U 
                                               == (0x7c00U 
                                                   & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                              & (0U 
                                                 != 
                                                 (0x3ffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [9U]
                                                   [1U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [9U][1U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [9U]
                                                 [1U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [9U]
                                                [1U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [9U][2U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [9U][2U]))) | (IData)(((0x7c00U 
                                               == (0x7c00U 
                                                   & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                              & (0U 
                                                 != 
                                                 (0x3ffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [9U]
                                                   [2U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [9U][2U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [9U]
                                                 [2U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [9U]
                                                [2U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [9U][3U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [9U][3U]))) | (IData)(((0x7c00U 
                                               == (0x7c00U 
                                                   & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                              & (0U 
                                                 != 
                                                 (0x3ffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [9U]
                                                   [3U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [9U][3U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [9U]
                                                 [3U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [9U]
                                                [3U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [9U][4U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [9U][4U]))) | (IData)(((0x7c00U 
                                               == (0x7c00U 
                                                   & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                              & (0U 
                                                 != 
                                                 (0x3ffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [9U]
                                                   [4U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [9U][4U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [9U]
                                                 [4U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [9U]
                                                [4U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [9U][5U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [9U][5U]))) | (IData)(((0x7c00U 
                                               == (0x7c00U 
                                                   & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                              & (0U 
                                                 != 
                                                 (0x3ffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [9U]
                                                   [5U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [9U][5U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [9U]
                                                 [5U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [9U]
                                                [5U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [9U][6U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [9U][6U]))) | (IData)(((0x7c00U 
                                               == (0x7c00U 
                                                   & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                              & (0U 
                                                 != 
                                                 (0x3ffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [9U]
                                                   [6U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [9U][6U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [9U]
                                                 [6U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [9U]
                                                [6U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [9U][7U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [9U][7U]))) | (IData)(((0x7c00U 
                                               == (0x7c00U 
                                                   & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                              & (0U 
                                                 != 
                                                 (0x3ffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [9U]
                                                   [7U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [9U][7U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [9U]
                                                 [7U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [9U]
                                                [7U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [9U][8U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [9U][8U]))) | (IData)(((0x7c00U 
                                               == (0x7c00U 
                                                   & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                              & (0U 
                                                 != 
                                                 (0x3ffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [9U]
                                                   [8U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [9U][8U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [9U]
                                                 [8U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [9U]
                                                [8U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [9U][9U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [9U][9U]))) | (IData)(((0x7c00U 
                                               == (0x7c00U 
                                                   & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                              & (0U 
                                                 != 
                                                 (0x3ffU 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [9U]
                                                   [9U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [9U][9U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [9U]
                                                 [9U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [9U]
                                                [9U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [9U][0xaU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [9U][0xaU]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [9U]
                                                   [0xaU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [9U][0xaU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [9U]
                                                 [0xaU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [9U]
                                                [0xaU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [9U][0xbU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [9U][0xbU]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [9U]
                                                   [0xbU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [9U][0xbU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [9U]
                                                 [0xbU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [9U]
                                                [0xbU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [9U][0xcU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [9U][0xcU]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [9U]
                                                   [0xcU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [9U][0xcU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [9U]
                                                 [0xcU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [9U]
                                                [0xcU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [9U][0xdU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [9U][0xdU]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [9U]
                                                   [0xdU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [9U][0xdU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [9U]
                                                 [0xdU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [9U]
                                                [0xdU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [9U][0xeU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [9U][0xeU]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [9U]
                                                   [0xeU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [9U][0xeU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [9U]
                                                 [0xeU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [9U]
                                                [0xeU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [9U][0xfU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [9U][0xfU]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [9U]
                                                   [0xfU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [9U][0xfU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [9U]
                                                 [0xfU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [9U]
                                                [0xfU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xaU][0U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xaU][0U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xaU]
                                                   [0U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xaU][0U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [0U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xaU]
                                                [0U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xaU][1U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xaU][1U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xaU]
                                                   [1U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xaU][1U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [1U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xaU]
                                                [1U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xaU][2U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xaU][2U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xaU]
                                                   [2U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xaU][2U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [2U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xaU]
                                                [2U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xaU][3U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xaU][3U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xaU]
                                                   [3U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xaU][3U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [3U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xaU]
                                                [3U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xaU][4U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xaU][4U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xaU]
                                                   [4U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xaU][4U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [4U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xaU]
                                                [4U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xaU][5U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xaU][5U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xaU]
                                                   [5U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xaU][5U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [5U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xaU]
                                                [5U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xaU][6U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xaU][6U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xaU]
                                                   [6U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xaU][6U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [6U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xaU]
                                                [6U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xaU][7U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xaU][7U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xaU]
                                                   [7U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xaU][7U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [7U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xaU]
                                                [7U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xaU][8U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xaU][8U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xaU]
                                                   [8U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xaU][8U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [8U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xaU]
                                                [8U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xaU][9U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xaU][9U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xaU]
                                                   [9U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xaU][9U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [9U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xaU]
                                                [9U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xaU][0xaU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xaU][0xaU]))) | (IData)(((0x7c00U 
                                                   == 
                                                   (0x7c00U 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                  & (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xaU]
                                                   [0xaU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xaU][0xaU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [0xaU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xaU]
                                                [0xaU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xaU][0xbU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xaU][0xbU]))) | (IData)(((0x7c00U 
                                                   == 
                                                   (0x7c00U 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                  & (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xaU]
                                                   [0xbU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xaU][0xbU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [0xbU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xaU]
                                                [0xbU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xaU][0xcU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xaU][0xcU]))) | (IData)(((0x7c00U 
                                                   == 
                                                   (0x7c00U 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                  & (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xaU]
                                                   [0xcU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xaU][0xcU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [0xcU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xaU]
                                                [0xcU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xaU][0xdU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xaU][0xdU]))) | (IData)(((0x7c00U 
                                                   == 
                                                   (0x7c00U 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                  & (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xaU]
                                                   [0xdU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xaU][0xdU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [0xdU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xaU]
                                                [0xdU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xaU][0xeU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xaU][0xeU]))) | (IData)(((0x7c00U 
                                                   == 
                                                   (0x7c00U 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                  & (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xaU]
                                                   [0xeU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xaU][0xeU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [0xeU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xaU]
                                                [0xeU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xaU][0xfU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xaU][0xfU]))) | (IData)(((0x7c00U 
                                                   == 
                                                   (0x7c00U 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                  & (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xaU]
                                                   [0xfU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xaU][0xfU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [0xfU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xaU]
                                                [0xfU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xbU][0U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xbU][0U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xbU]
                                                   [0U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xbU][0U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [0U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xbU]
                                                [0U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xbU][1U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xbU][1U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xbU]
                                                   [1U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xbU][1U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [1U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xbU]
                                                [1U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xbU][2U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xbU][2U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xbU]
                                                   [2U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xbU][2U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [2U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xbU]
                                                [2U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xbU][3U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xbU][3U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xbU]
                                                   [3U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xbU][3U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [3U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xbU]
                                                [3U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xbU][4U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xbU][4U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xbU]
                                                   [4U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xbU][4U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [4U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xbU]
                                                [4U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xbU][5U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xbU][5U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xbU]
                                                   [5U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xbU][5U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [5U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xbU]
                                                [5U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xbU][6U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xbU][6U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xbU]
                                                   [6U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xbU][6U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [6U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xbU]
                                                [6U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xbU][7U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xbU][7U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xbU]
                                                   [7U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xbU][7U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [7U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xbU]
                                                [7U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xbU][8U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xbU][8U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xbU]
                                                   [8U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xbU][8U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [8U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xbU]
                                                [8U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xbU][9U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xbU][9U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xbU]
                                                   [9U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xbU][9U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [9U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xbU]
                                                [9U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xbU][0xaU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xbU][0xaU]))) | (IData)(((0x7c00U 
                                                   == 
                                                   (0x7c00U 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                  & (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xbU]
                                                   [0xaU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xbU][0xaU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [0xaU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xbU]
                                                [0xaU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xbU][0xbU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xbU][0xbU]))) | (IData)(((0x7c00U 
                                                   == 
                                                   (0x7c00U 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                  & (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xbU]
                                                   [0xbU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xbU][0xbU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [0xbU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xbU]
                                                [0xbU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xbU][0xcU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xbU][0xcU]))) | (IData)(((0x7c00U 
                                                   == 
                                                   (0x7c00U 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                  & (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xbU]
                                                   [0xcU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xbU][0xcU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [0xcU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xbU]
                                                [0xcU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xbU][0xdU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xbU][0xdU]))) | (IData)(((0x7c00U 
                                                   == 
                                                   (0x7c00U 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                  & (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xbU]
                                                   [0xdU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xbU][0xdU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [0xdU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xbU]
                                                [0xdU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xbU][0xeU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xbU][0xeU]))) | (IData)(((0x7c00U 
                                                   == 
                                                   (0x7c00U 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                  & (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xbU]
                                                   [0xeU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xbU][0xeU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [0xeU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xbU]
                                                [0xeU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xbU][0xfU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xbU][0xfU]))) | (IData)(((0x7c00U 
                                                   == 
                                                   (0x7c00U 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                  & (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xbU]
                                                   [0xfU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xbU][0xfU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [0xfU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xbU]
                                                [0xfU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xcU][0U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xcU][0U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xcU]
                                                   [0U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xcU][0U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [0U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xcU]
                                                [0U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xcU][1U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xcU][1U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xcU]
                                                   [1U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xcU][1U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [1U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xcU]
                                                [1U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xcU][2U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xcU][2U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xcU]
                                                   [2U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xcU][2U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [2U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xcU]
                                                [2U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xcU][3U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xcU][3U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xcU]
                                                   [3U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xcU][3U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [3U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xcU]
                                                [3U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xcU][4U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xcU][4U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xcU]
                                                   [4U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xcU][4U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [4U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xcU]
                                                [4U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xcU][5U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xcU][5U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xcU]
                                                   [5U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xcU][5U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [5U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xcU]
                                                [5U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xcU][6U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xcU][6U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xcU]
                                                   [6U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xcU][6U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [6U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xcU]
                                                [6U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xcU][7U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xcU][7U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xcU]
                                                   [7U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xcU][7U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [7U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xcU]
                                                [7U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xcU][8U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xcU][8U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xcU]
                                                   [8U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xcU][8U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [8U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xcU]
                                                [8U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xcU][9U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xcU][9U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xcU]
                                                   [9U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xcU][9U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [9U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xcU]
                                                [9U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xcU][0xaU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xcU][0xaU]))) | (IData)(((0x7c00U 
                                                   == 
                                                   (0x7c00U 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                  & (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xcU]
                                                   [0xaU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xcU][0xaU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [0xaU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xcU]
                                                [0xaU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xcU][0xbU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xcU][0xbU]))) | (IData)(((0x7c00U 
                                                   == 
                                                   (0x7c00U 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                  & (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xcU]
                                                   [0xbU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xcU][0xbU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [0xbU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xcU]
                                                [0xbU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xcU][0xcU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xcU][0xcU]))) | (IData)(((0x7c00U 
                                                   == 
                                                   (0x7c00U 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                  & (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xcU]
                                                   [0xcU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xcU][0xcU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [0xcU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xcU]
                                                [0xcU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xcU][0xdU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xcU][0xdU]))) | (IData)(((0x7c00U 
                                                   == 
                                                   (0x7c00U 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                  & (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xcU]
                                                   [0xdU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xcU][0xdU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [0xdU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xcU]
                                                [0xdU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xcU][0xeU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xcU][0xeU]))) | (IData)(((0x7c00U 
                                                   == 
                                                   (0x7c00U 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                  & (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xcU]
                                                   [0xeU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xcU][0xeU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [0xeU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xcU]
                                                [0xeU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xcU][0xfU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xcU][0xfU]))) | (IData)(((0x7c00U 
                                                   == 
                                                   (0x7c00U 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                  & (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xcU]
                                                   [0xfU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xcU][0xfU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [0xfU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xcU]
                                                [0xfU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xdU][0U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xdU][0U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xdU]
                                                   [0U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xdU][0U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xdU]
                                                 [0U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xdU]
                                                [0U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xdU][1U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xdU][1U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xdU]
                                                   [1U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xdU][1U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xdU]
                                                 [1U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xdU]
                                                [1U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xdU][2U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xdU][2U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xdU]
                                                   [2U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xdU][2U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xdU]
                                                 [2U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xdU]
                                                [2U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xdU][3U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xdU][3U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xdU]
                                                   [3U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xdU][3U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xdU]
                                                 [3U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xdU]
                                                [3U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xdU][4U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xdU][4U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xdU]
                                                   [4U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xdU][4U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xdU]
                                                 [4U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xdU]
                                                [4U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xdU][5U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xdU][5U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xdU]
                                                   [5U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xdU][5U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xdU]
                                                 [5U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xdU]
                                                [5U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xdU][6U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xdU][6U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xdU]
                                                   [6U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xdU][6U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xdU]
                                                 [6U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xdU]
                                                [6U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xdU][7U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xdU][7U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xdU]
                                                   [7U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xdU][7U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xdU]
                                                 [7U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xdU]
                                                [7U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xdU][8U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xdU][8U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xdU]
                                                   [8U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xdU][8U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xdU]
                                                 [8U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xdU]
                                                [8U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xdU][9U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xdU][9U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xdU]
                                                   [9U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xdU][9U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xdU]
                                                 [9U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xdU]
                                                [9U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xdU][0xaU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xdU][0xaU]))) | (IData)(((0x7c00U 
                                                   == 
                                                   (0x7c00U 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                  & (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xdU]
                                                   [0xaU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xdU][0xaU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xdU]
                                                 [0xaU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xdU]
                                                [0xaU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xdU][0xbU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xdU][0xbU]))) | (IData)(((0x7c00U 
                                                   == 
                                                   (0x7c00U 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                  & (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xdU]
                                                   [0xbU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xdU][0xbU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xdU]
                                                 [0xbU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xdU]
                                                [0xbU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xdU][0xcU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xdU][0xcU]))) | (IData)(((0x7c00U 
                                                   == 
                                                   (0x7c00U 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                  & (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xdU]
                                                   [0xcU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xdU][0xcU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xdU]
                                                 [0xcU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xdU]
                                                [0xcU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xdU][0xdU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xdU][0xdU]))) | (IData)(((0x7c00U 
                                                   == 
                                                   (0x7c00U 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                  & (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xdU]
                                                   [0xdU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xdU][0xdU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xdU]
                                                 [0xdU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xdU]
                                                [0xdU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xdU][0xeU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xdU][0xeU]))) | (IData)(((0x7c00U 
                                                   == 
                                                   (0x7c00U 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                  & (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xdU]
                                                   [0xeU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xdU][0xeU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xdU]
                                                 [0xeU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xdU]
                                                [0xeU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xdU][0xfU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xdU][0xfU]))) | (IData)(((0x7c00U 
                                                   == 
                                                   (0x7c00U 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                  & (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xdU]
                                                   [0xfU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xdU][0xfU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xdU]
                                                 [0xfU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xdU]
                                                [0xfU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xeU][0U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xeU][0U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xeU]
                                                   [0U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xeU][0U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xeU]
                                                 [0U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xeU]
                                                [0U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xeU][1U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xeU][1U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xeU]
                                                   [1U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xeU][1U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xeU]
                                                 [1U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xeU]
                                                [1U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xeU][2U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xeU][2U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xeU]
                                                   [2U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xeU][2U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xeU]
                                                 [2U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xeU]
                                                [2U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xeU][3U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xeU][3U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xeU]
                                                   [3U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xeU][3U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xeU]
                                                 [3U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xeU]
                                                [3U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xeU][4U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xeU][4U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xeU]
                                                   [4U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xeU][4U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xeU]
                                                 [4U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xeU]
                                                [4U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xeU][5U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xeU][5U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xeU]
                                                   [5U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xeU][5U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xeU]
                                                 [5U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xeU]
                                                [5U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xeU][6U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xeU][6U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xeU]
                                                   [6U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xeU][6U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xeU]
                                                 [6U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xeU]
                                                [6U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xeU][7U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xeU][7U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xeU]
                                                   [7U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xeU][7U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xeU]
                                                 [7U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xeU]
                                                [7U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xeU][8U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xeU][8U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xeU]
                                                   [8U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xeU][8U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xeU]
                                                 [8U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xeU]
                                                [8U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xeU][9U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xeU][9U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xeU]
                                                   [9U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xeU][9U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xeU]
                                                 [9U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xeU]
                                                [9U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xeU][0xaU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xeU][0xaU]))) | (IData)(((0x7c00U 
                                                   == 
                                                   (0x7c00U 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                  & (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xeU]
                                                   [0xaU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xeU][0xaU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xeU]
                                                 [0xaU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xeU]
                                                [0xaU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xeU][0xbU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xeU][0xbU]))) | (IData)(((0x7c00U 
                                                   == 
                                                   (0x7c00U 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                  & (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xeU]
                                                   [0xbU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xeU][0xbU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xeU]
                                                 [0xbU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xeU]
                                                [0xbU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xeU][0xcU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xeU][0xcU]))) | (IData)(((0x7c00U 
                                                   == 
                                                   (0x7c00U 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                  & (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xeU]
                                                   [0xcU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xeU][0xcU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xeU]
                                                 [0xcU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xeU]
                                                [0xcU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
}
