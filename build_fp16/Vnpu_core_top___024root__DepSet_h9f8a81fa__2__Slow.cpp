// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpu_core_top.h for the primary calling header

#include "Vnpu_core_top__pch.h"
#include "Vnpu_core_top___024root.h"

VL_ATTR_COLD void Vnpu_core_top___024root___stl_sequent__TOP__3(Vnpu_core_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_core_top___024root___stl_sequent__TOP__3\n"); );
    // Body
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

VL_ATTR_COLD void Vnpu_core_top___024root___eval_triggers__stl(Vnpu_core_top___024root* vlSelf);
VL_ATTR_COLD void Vnpu_core_top___024root___eval_stl(Vnpu_core_top___024root* vlSelf);

VL_ATTR_COLD bool Vnpu_core_top___024root___eval_phase__stl(Vnpu_core_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_core_top___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vnpu_core_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vnpu_core_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpu_core_top___024root___dump_triggers__ico(Vnpu_core_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_core_top___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vnpu_core_top___024root___dump_triggers__act(Vnpu_core_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_core_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpu_core_top___024root___dump_triggers__nba(Vnpu_core_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_core_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vnpu_core_top___024root___ctor_var_reset(Vnpu_core_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_core_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->sram_act_in);
    VL_RAND_RESET_W(256, vlSelf->sram_weight_in);
    vlSelf->weight_load_en = VL_RAND_RESET_I(16);
    vlSelf->acc_valid = VL_RAND_RESET_I(1);
    vlSelf->acc_clear = VL_RAND_RESET_I(1);
    vlSelf->acc_addr = VL_RAND_RESET_I(9);
    vlSelf->drain_re = VL_RAND_RESET_I(1);
    vlSelf->drain_addr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, vlSelf->psum_drain_out);
    VL_RAND_RESET_W(512, vlSelf->npu_core_top__DOT__array_psum_bottom);
    vlSelf->npu_core_top__DOT__acc_valid_pipe = VL_RAND_RESET_I(31);
    vlSelf->npu_core_top__DOT__acc_clear_pipe = VL_RAND_RESET_I(31);
    for (int __Vi0 = 0; __Vi0 < 31; ++__Vi0) {
        vlSelf->npu_core_top__DOT__acc_addr_pipe[__Vi0] = VL_RAND_RESET_I(9);
    }
    vlSelf->npu_core_top__DOT____Vlvbound_h8abf1851__0 = VL_RAND_RESET_I(9);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 17; ++__Vi1) {
            vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_act_wire[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            vlSelf->npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__psum_out = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vcellout__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__act_out = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(480, vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe);
    VL_RAND_RESET_W(448, vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe);
    VL_RAND_RESET_W(416, vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe);
    VL_RAND_RESET_W(384, vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe);
    VL_RAND_RESET_W(352, vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe);
    VL_RAND_RESET_W(320, vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe);
    VL_RAND_RESET_W(288, vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe);
    VL_RAND_RESET_W(256, vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe);
    VL_RAND_RESET_W(224, vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe);
    VL_RAND_RESET_W(192, vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe);
    VL_RAND_RESET_W(160, vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe);
    VL_RAND_RESET_W(128, vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__11__KET____DOT__genblk1__DOT__deskew_pipe);
    VL_RAND_RESET_W(96, vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__12__KET____DOT__genblk1__DOT__deskew_pipe);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__13__KET____DOT__genblk1__DOT__deskew_pipe = VL_RAND_RESET_Q(64);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__14__KET____DOT__genblk1__DOT__deskew_pipe = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vlvbound_h9a6a8290__0 = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vlvbound_h48589c54__0 = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vlvbound_h408120c0__0 = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vlvbound_h6bbcb98c__0 = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vlvbound_hd3dd42c4__0 = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vlvbound_h5440aa2f__0 = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vlvbound_ha01bbf1b__0 = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vlvbound_hded8b004__0 = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vlvbound_hcba36a56__0 = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vlvbound_h95adc26e__0 = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT____Vlvbound_hcd3ff344__0 = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__1__KET____DOT__genblk1__DOT__delay_pipe = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__2__KET____DOT__genblk1__DOT__delay_pipe = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__3__KET____DOT__genblk1__DOT__delay_pipe = VL_RAND_RESET_Q(48);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__4__KET____DOT__genblk1__DOT__delay_pipe = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(80, vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__5__KET____DOT__genblk1__DOT__delay_pipe);
    VL_RAND_RESET_W(96, vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__6__KET____DOT__genblk1__DOT__delay_pipe);
    VL_RAND_RESET_W(112, vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__7__KET____DOT__genblk1__DOT__delay_pipe);
    VL_RAND_RESET_W(128, vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__8__KET____DOT__genblk1__DOT__delay_pipe);
    VL_RAND_RESET_W(144, vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe);
    VL_RAND_RESET_W(160, vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe);
    VL_RAND_RESET_W(176, vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe);
    VL_RAND_RESET_W(192, vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe);
    VL_RAND_RESET_W(208, vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe);
    VL_RAND_RESET_W(224, vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe);
    VL_RAND_RESET_W(240, vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h22f2c6d8__0 = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h06a6af8b__0 = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h3b512afb__0 = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h2c69bbc9__0 = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h715ba807__0 = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_hf5255139__0 = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h729fa579__0 = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h11de01e5__0 = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_heecd43b9__0 = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h60832a3d__0 = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT____Vlvbound_h8c9f0470__0 = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__7__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__8__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__9__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product = VL_RAND_RESET_I(22);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgExtracted_h1f028376__0 = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        VL_RAND_RESET_W(512, vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram[__Vi0]);
    }
    VL_RAND_RESET_W(512, vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__bram_rd_data);
    VL_RAND_RESET_W(512, vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_rd_data);
    vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_valid_q = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_clear_q = VL_RAND_RESET_I(1);
    vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_addr_q = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__array_psum_q);
    vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__drain_re_q = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512, vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__acc_write_data);
    VL_RAND_RESET_W(512, vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__last_write_data);
    vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__last_write_addr = VL_RAND_RESET_I(9);
    vlSelf->npu_core_top__DOT__u_psum_buffer__DOT__last_write_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__npu_core_top__DOT__acc_valid_pipe = VL_RAND_RESET_I(31);
    vlSelf->__Vdly__npu_core_top__DOT__acc_clear_pipe = VL_RAND_RESET_I(31);
    vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v0 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v0 = 0;
    vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v1 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v1 = 0;
    vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v2 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v2 = 0;
    vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v3 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v3 = 0;
    vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v4 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v4 = 0;
    vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v5 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v5 = 0;
    vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v6 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v6 = 0;
    vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v7 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v7 = 0;
    vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v8 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v8 = 0;
    vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v9 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v9 = 0;
    vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v10 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v10 = 0;
    vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v11 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v11 = 0;
    vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v12 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v12 = 0;
    vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v13 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v13 = 0;
    vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v14 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v14 = 0;
    vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v15 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v15 = 0;
    vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v16 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v16 = 0;
    vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v17 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v17 = 0;
    vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v18 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v18 = 0;
    vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v19 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v19 = 0;
    vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v20 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v20 = 0;
    vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v21 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v21 = 0;
    vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v22 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v22 = 0;
    vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v23 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v23 = 0;
    vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v24 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v24 = 0;
    vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v25 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v25 = 0;
    vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v26 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v26 = 0;
    vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v27 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v27 = 0;
    vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v28 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v28 = 0;
    vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v29 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v29 = 0;
    vlSelf->__Vdlyvval__npu_core_top__DOT__acc_addr_pipe__v30 = VL_RAND_RESET_I(9);
    vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v30 = 0;
    vlSelf->__Vdlyvset__npu_core_top__DOT__acc_addr_pipe__v31 = 0;
    VL_RAND_RESET_W(480, vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__0__KET____DOT__genblk1__DOT__deskew_pipe);
    VL_RAND_RESET_W(448, vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__1__KET____DOT__genblk1__DOT__deskew_pipe);
    VL_RAND_RESET_W(416, vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__2__KET____DOT__genblk1__DOT__deskew_pipe);
    VL_RAND_RESET_W(384, vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__3__KET____DOT__genblk1__DOT__deskew_pipe);
    VL_RAND_RESET_W(352, vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__4__KET____DOT__genblk1__DOT__deskew_pipe);
    VL_RAND_RESET_W(320, vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__5__KET____DOT__genblk1__DOT__deskew_pipe);
    VL_RAND_RESET_W(288, vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__6__KET____DOT__genblk1__DOT__deskew_pipe);
    VL_RAND_RESET_W(256, vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__7__KET____DOT__genblk1__DOT__deskew_pipe);
    VL_RAND_RESET_W(224, vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__8__KET____DOT__genblk1__DOT__deskew_pipe);
    VL_RAND_RESET_W(192, vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__9__KET____DOT__genblk1__DOT__deskew_pipe);
    VL_RAND_RESET_W(160, vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__10__KET____DOT__genblk1__DOT__deskew_pipe);
    VL_RAND_RESET_W(128, vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__11__KET____DOT__genblk1__DOT__deskew_pipe);
    VL_RAND_RESET_W(96, vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__PSUM_DESKEW__BRA__12__KET____DOT__genblk1__DOT__deskew_pipe);
    vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__3__KET____DOT__genblk1__DOT__delay_pipe = VL_RAND_RESET_Q(48);
    vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__4__KET____DOT__genblk1__DOT__delay_pipe = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(80, vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__5__KET____DOT__genblk1__DOT__delay_pipe);
    VL_RAND_RESET_W(96, vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__6__KET____DOT__genblk1__DOT__delay_pipe);
    VL_RAND_RESET_W(112, vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__7__KET____DOT__genblk1__DOT__delay_pipe);
    VL_RAND_RESET_W(128, vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__8__KET____DOT__genblk1__DOT__delay_pipe);
    VL_RAND_RESET_W(144, vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__9__KET____DOT__genblk1__DOT__delay_pipe);
    VL_RAND_RESET_W(160, vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__10__KET____DOT__genblk1__DOT__delay_pipe);
    VL_RAND_RESET_W(176, vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__11__KET____DOT__genblk1__DOT__delay_pipe);
    VL_RAND_RESET_W(192, vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__12__KET____DOT__genblk1__DOT__delay_pipe);
    VL_RAND_RESET_W(208, vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__13__KET____DOT__genblk1__DOT__delay_pipe);
    VL_RAND_RESET_W(224, vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__14__KET____DOT__genblk1__DOT__delay_pipe);
    VL_RAND_RESET_W(240, vlSelf->__Vdly__npu_core_top__DOT__u_systolic_array__DOT__u_skew__DOT__ROW_SKEW__BRA__15__KET____DOT__genblk1__DOT__delay_pipe);
    vlSelf->__Vdlyvdim0__npu_core_top__DOT__u_psum_buffer__DOT__bram__v0 = 0;
    VL_RAND_RESET_W(512, vlSelf->__Vdlyvval__npu_core_top__DOT__u_psum_buffer__DOT__bram__v0);
    vlSelf->__Vdlyvset__npu_core_top__DOT__u_psum_buffer__DOT__bram__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
