// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpu_core_top.h for the primary calling header

#include "Vnpu_core_top__pch.h"
#include "Vnpu_core_top___024root.h"

VL_INLINE_OPT void Vnpu_core_top___024root___nba_sequent__TOP__6(Vnpu_core_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_core_top___024root___nba_sequent__TOP__6\n"); );
    // Body
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xeU][0xdU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xeU][0xdU]))) | (IData)(((0x7c00U 
                                                   == 
                                                   (0x7c00U 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                  & (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xeU]
                                                   [0xdU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xeU][0xdU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xeU]
                                                 [0xdU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xeU]
                                                [0xdU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xeU][0xeU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xeU][0xeU]))) | (IData)(((0x7c00U 
                                                   == 
                                                   (0x7c00U 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                  & (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xeU]
                                                   [0xeU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xeU][0xeU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xeU]
                                                 [0xeU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xeU]
                                                [0xeU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xeU][0xfU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xeU][0xfU]))) | (IData)(((0x7c00U 
                                                   == 
                                                   (0x7c00U 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                  & (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xeU]
                                                   [0xfU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xeU][0xfU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xeU]
                                                 [0xfU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xeU]
                                                [0xfU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xfU][0U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xfU][0U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xfU]
                                                   [0U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xfU][0U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xfU]
                                                 [0U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xfU]
                                                [0U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xfU][1U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xfU][1U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xfU]
                                                   [1U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xfU][1U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xfU]
                                                 [1U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xfU]
                                                [1U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xfU][2U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xfU][2U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xfU]
                                                   [2U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xfU][2U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xfU]
                                                 [2U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xfU]
                                                [2U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xfU][3U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xfU][3U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xfU]
                                                   [3U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xfU][3U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xfU]
                                                 [3U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xfU]
                                                [3U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xfU][4U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xfU][4U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xfU]
                                                   [4U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xfU][4U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xfU]
                                                 [4U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xfU]
                                                [4U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xfU][5U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xfU][5U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xfU]
                                                   [5U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xfU][5U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xfU]
                                                 [5U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xfU]
                                                [5U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xfU][6U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xfU][6U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xfU]
                                                   [6U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xfU][6U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xfU]
                                                 [6U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xfU]
                                                [6U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xfU][7U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xfU][7U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xfU]
                                                   [7U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xfU][7U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xfU]
                                                 [7U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xfU]
                                                [7U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xfU][8U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xfU][8U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xfU]
                                                   [8U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xfU][8U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xfU]
                                                 [8U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xfU]
                                                [8U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xfU][9U] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xfU][9U]))) | (IData)(((0x7c00U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xfU]
                                                   [9U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xfU][9U]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xfU]
                                                 [9U] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xfU]
                                                [9U]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xfU][0xaU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xfU][0xaU]))) | (IData)(((0x7c00U 
                                                   == 
                                                   (0x7c00U 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                  & (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xfU]
                                                   [0xaU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xfU][0xaU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xfU]
                                                 [0xaU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xfU]
                                                [0xaU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xfU][0xbU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xfU][0xbU]))) | (IData)(((0x7c00U 
                                                   == 
                                                   (0x7c00U 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                  & (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xfU]
                                                   [0xbU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xfU][0xbU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xfU]
                                                 [0xbU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xfU]
                                                [0xbU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xfU][0xcU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xfU][0xcU]))) | (IData)(((0x7c00U 
                                                   == 
                                                   (0x7c00U 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                  & (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xfU]
                                                   [0xcU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xfU][0xcU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xfU]
                                                 [0xcU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xfU]
                                                [0xcU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xfU][0xdU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xfU][0xdU]))) | (IData)(((0x7c00U 
                                                   == 
                                                   (0x7c00U 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                  & (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xfU]
                                                   [0xdU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xfU][0xdU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xfU]
                                                 [0xdU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xfU]
                                                [0xdU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xfU][0xeU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xfU][0xeU]))) | (IData)(((0x7c00U 
                                                   == 
                                                   (0x7c00U 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                  & (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xfU]
                                                   [0xeU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xfU][0xeU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xfU]
                                                 [0xeU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xfU]
                                                [0xeU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
        = ((((0x1fU == (0x1fU & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xfU][0xfU] >> 0xaU))) 
             & (0U != (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                       [0xfU][0xfU]))) | (IData)(((0x7c00U 
                                                   == 
                                                   (0x7c00U 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                  & (0U 
                                                     != 
                                                     (0x3ffU 
                                                      & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))))))
            ? 0x7fc00000U : ((((0x1fU == (0x1fU & (
                                                   vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xfU]
                                                   [0xfU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xfU][0xfU]))) 
                              | (IData)((0x7c00U == 
                                         (0x7fffU & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))
                              ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0)
                                  ? 0x7fc00000U : (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU)))
                              : (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                  | (((0U == (0x1fU 
                                              & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xfU]
                                                 [0xfU] 
                                                 >> 0xaU))) 
                                      & (0U != (0x3ffU 
                                                & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xfU]
                                                [0xfU]))) 
                                     | (IData)(((0U 
                                                 == 
                                                 (0x7c00U 
                                                  & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg)))))))
                                  ? ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                     << 0x1fU) : ((IData)(
                                                          (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                            >> 8U) 
                                                           | (0xffU 
                                                              <= (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))))
                                                   ? 
                                                  (0x7f800000U 
                                                   | ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                      << 0x1fU))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp))
                                                    ? 
                                                   ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                    << 0x1fU)
                                                    : 
                                                   (((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign) 
                                                     << 0x1fU) 
                                                    | ((0x7f800000U 
                                                        & ((IData)(vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp) 
                                                           << 0x17U)) 
                                                       | ((0x200000U 
                                                           & vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                                           ? 
                                                          (0x7ffffcU 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 2U))
                                                           : 
                                                          (0x7ffff8U 
                                                           & (vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                              << 3U))))))))));
}

void Vnpu_core_top___024root___eval_triggers__act(Vnpu_core_top___024root* vlSelf);
void Vnpu_core_top___024root___eval_act(Vnpu_core_top___024root* vlSelf);

bool Vnpu_core_top___024root___eval_phase__act(Vnpu_core_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_core_top___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vnpu_core_top___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vnpu_core_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vnpu_core_top___024root___eval_nba(Vnpu_core_top___024root* vlSelf);

bool Vnpu_core_top___024root___eval_phase__nba(Vnpu_core_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_core_top___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vnpu_core_top___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpu_core_top___024root___dump_triggers__ico(Vnpu_core_top___024root* vlSelf);
#endif  // VL_DEBUG
bool Vnpu_core_top___024root___eval_phase__ico(Vnpu_core_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpu_core_top___024root___dump_triggers__nba(Vnpu_core_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpu_core_top___024root___dump_triggers__act(Vnpu_core_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vnpu_core_top___024root___eval(Vnpu_core_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_core_top___024root___eval\n"); );
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
            Vnpu_core_top___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../rtl/core/npu_core_top.sv", 5, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vnpu_core_top___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vnpu_core_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../rtl/core/npu_core_top.sv", 5, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vnpu_core_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../rtl/core/npu_core_top.sv", 5, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vnpu_core_top___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vnpu_core_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vnpu_core_top___024root___eval_debug_assertions(Vnpu_core_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_core_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->acc_valid & 0xfeU))) {
        Verilated::overWidthError("acc_valid");}
    if (VL_UNLIKELY((vlSelf->acc_clear & 0xfeU))) {
        Verilated::overWidthError("acc_clear");}
    if (VL_UNLIKELY((vlSelf->acc_addr & 0xfe00U))) {
        Verilated::overWidthError("acc_addr");}
    if (VL_UNLIKELY((vlSelf->drain_re & 0xfeU))) {
        Verilated::overWidthError("drain_re");}
    if (VL_UNLIKELY((vlSelf->drain_addr & 0xfe00U))) {
        Verilated::overWidthError("drain_addr");}
}
#endif  // VL_DEBUG
