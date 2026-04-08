// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpu_system_top.h for the primary calling header

#include "Vnpu_system_top__pch.h"
#include "Vnpu_system_top__Syms.h"
#include "Vnpu_system_top_mac_pe.h"

VL_INLINE_OPT void Vnpu_system_top_mac_pe___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__1(Vnpu_system_top_mac_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnpu_system_top_mac_pe___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__1\n"); );
    // Init
    CData/*0:0*/ u_mul__DOT____VdfgExtracted_h1f028376__0;
    u_mul__DOT____VdfgExtracted_h1f028376__0 = 0;
    IData/*23:0*/ u_add__DOT____VdfgExtracted_hb7d58418__0;
    u_add__DOT____VdfgExtracted_hb7d58418__0 = 0;
    // Body
    vlSelf->__PVT__u_add__DOT__a_is_inf = ((0xffU == 
                                            (0xffU 
                                             & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xbU]
                                                [0xaU] 
                                                >> 0x17U))) 
                                           & (0U == 
                                              (0x7fffffU 
                                               & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                               [0xbU]
                                               [0xaU])));
    if ((0U == (0xffU & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                         [0xbU][0xaU] >> 0x17U)))) {
        vlSelf->__PVT__u_add__DOT__a_is_zero = (0U 
                                                == 
                                                (0x7fffffU 
                                                 & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                 [0xbU]
                                                 [0xaU]));
        vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0 
            = (0x7fffffU & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xbU][0xaU]);
    } else {
        vlSelf->__PVT__u_add__DOT__a_is_zero = 0U;
        vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0 
            = (0x800000U | (0x7fffffU & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                            [0xbU][0xaU]));
    }
    u_mul__DOT____VdfgExtracted_h1f028376__0 = (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                      [0xbU]
                                                      [0xaU] 
                                                      >> 0xaU))) 
                                                 & (0U 
                                                    == 
                                                    (0x3ffU 
                                                     & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                     [0xbU]
                                                     [0xaU]))) 
                                                | (IData)(
                                                          (0U 
                                                           == 
                                                           (0x7fffU 
                                                            & (IData)(vlSelf->__PVT__weight_reg)))));
    vlSelf->__PVT__u_mul__DOT__result_sign = (1U & 
                                              ((vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xbU]
                                                [0xaU] 
                                                ^ (IData)(vlSelf->__PVT__weight_reg)) 
                                               >> 0xfU));
    vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0 = (0x1ffU 
                                                  & ((0x1fU 
                                                      & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                         [0xbU]
                                                         [0xaU] 
                                                         >> 0xaU)) 
                                                     + 
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->__PVT__weight_reg) 
                                                         >> 0xaU))));
    vlSelf->__PVT__u_mul__DOT__mant_product = (0x3fffffU 
                                               & ((0x400U 
                                                   | (0x3ffU 
                                                      & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                      [0xbU]
                                                      [0xaU])) 
                                                  * 
                                                  (0x400U 
                                                   | (0x3ffU 
                                                      & (IData)(vlSelf->__PVT__weight_reg)))));
    vlSelf->__PVT__u_mul__DOT__fp32_exp = (0x1ffU & 
                                           ((0x200000U 
                                             & vlSelf->__PVT__u_mul__DOT__mant_product)
                                             ? ((IData)(0x62U) 
                                                + (IData)(vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0))
                                             : ((IData)(0x61U) 
                                                + (IData)(vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0))));
    vlSelf->__PVT__fp32_product = ((((0x1fU == (0x1fU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xbU]
                                                   [0xaU] 
                                                   >> 0xaU))) 
                                     & (0U != (0x3ffU 
                                               & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xbU]
                                               [0xaU]))) 
                                    | (IData)(((0x7c00U 
                                                == 
                                                (0x7c00U 
                                                 & (IData)(vlSelf->__PVT__weight_reg))) 
                                               & (0U 
                                                  != 
                                                  (0x3ffU 
                                                   & (IData)(vlSelf->__PVT__weight_reg))))))
                                    ? 0x7fc00000U : 
                                   ((((0x1fU == (0x1fU 
                                                 & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                    [0xbU]
                                                    [0xaU] 
                                                    >> 0xaU))) 
                                      & (0U == (0x3ffU 
                                                & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xbU]
                                                [0xaU]))) 
                                     | (IData)((0x7c00U 
                                                == 
                                                (0x7fffU 
                                                 & (IData)(vlSelf->__PVT__weight_reg)))))
                                     ? ((IData)(u_mul__DOT____VdfgExtracted_h1f028376__0)
                                         ? 0x7fc00000U
                                         : (0x7f800000U 
                                            | ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                               << 0x1fU)))
                                     : (((IData)(u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                         | (((0U == 
                                              (0x1fU 
                                               & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xbU]
                                                  [0xaU] 
                                                  >> 0xaU))) 
                                             & (0U 
                                                != 
                                                (0x3ffU 
                                                 & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [0xaU]))) 
                                            | (IData)(
                                                      ((0U 
                                                        == 
                                                        (0x7c00U 
                                                         & (IData)(vlSelf->__PVT__weight_reg))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSelf->__PVT__weight_reg)))))))
                                         ? ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                            << 0x1fU)
                                         : ((IData)(
                                                    (((IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp) 
                                                      >> 8U) 
                                                     | (0xffU 
                                                        <= (IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp))))
                                             ? (0x7f800000U 
                                                | ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                   << 0x1fU))
                                             : ((0U 
                                                 == (IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                 << 0x1fU)
                                                 : 
                                                (((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                  << 0x1fU) 
                                                 | ((0x7f800000U 
                                                     & ((IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp) 
                                                        << 0x17U)) 
                                                    | ((0x200000U 
                                                        & vlSelf->__PVT__u_mul__DOT__mant_product)
                                                        ? 
                                                       (0x7ffffcU 
                                                        & (vlSelf->__PVT__u_mul__DOT__mant_product 
                                                           << 2U))
                                                        : 
                                                       (0x7ffff8U 
                                                        & (vlSelf->__PVT__u_mul__DOT__mant_product 
                                                           << 3U))))))))));
    vlSelf->__PVT__u_add__DOT__b_is_inf = (IData)((0x7f800000U 
                                                   == 
                                                   (0x7fffffffU 
                                                    & vlSelf->__PVT__fp32_product)));
    vlSelf->__PVT__u_add__DOT__b_is_zero = (IData)(
                                                   (0U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelf->__PVT__fp32_product)));
    u_add__DOT____VdfgExtracted_hb7d58418__0 = ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSelf->__PVT__fp32_product 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x7fffffU 
                                                 & vlSelf->__PVT__fp32_product)
                                                 : 
                                                (0x800000U 
                                                 | (0x7fffffU 
                                                    & vlSelf->__PVT__fp32_product)));
    vlSelf->__PVT__u_add__DOT__a_is_larger = (((0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xbU]
                                                   [0xaU] 
                                                   >> 0x17U)) 
                                               > (0xffU 
                                                  & (vlSelf->__PVT__fp32_product 
                                                     >> 0x17U))) 
                                              | (((0xffU 
                                                   & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xbU]
                                                      [0xaU] 
                                                      >> 0x17U)) 
                                                  == 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__fp32_product 
                                                      >> 0x17U))) 
                                                 & ((0x7fffffU 
                                                     & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xbU]
                                                     [0xaU]) 
                                                    >= 
                                                    (0x7fffffU 
                                                     & vlSelf->__PVT__fp32_product))));
    if (vlSelf->__PVT__u_add__DOT__a_is_larger) {
        vlSelf->__PVT__u_add__DOT__large_sign = (1U 
                                                 & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xbU]
                                                    [0xaU] 
                                                    >> 0x1fU));
        vlSelf->__PVT__u_add__DOT__large_mant = vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__u_add__DOT__small_mant = u_add__DOT____VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__u_add__DOT__large_exp = (0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xbU]
                                                   [0xaU] 
                                                   >> 0x17U));
        vlSelf->__PVT__u_add__DOT__small_exp = (0xffU 
                                                & (vlSelf->__PVT__fp32_product 
                                                   >> 0x17U));
    } else {
        vlSelf->__PVT__u_add__DOT__large_sign = (1U 
                                                 & (vlSelf->__PVT__fp32_product 
                                                    >> 0x1fU));
        vlSelf->__PVT__u_add__DOT__large_mant = u_add__DOT____VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__u_add__DOT__small_mant = vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__u_add__DOT__large_exp = (0xffU 
                                                & (vlSelf->__PVT__fp32_product 
                                                   >> 0x17U));
        vlSelf->__PVT__u_add__DOT__small_exp = (0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xbU]
                                                   [0xaU] 
                                                   >> 0x17U));
    }
    vlSelf->__PVT__u_add__DOT__exp_diff = (0xffU & 
                                           ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                                            - (IData)(vlSelf->__PVT__u_add__DOT__small_exp)));
    if ((0U == (IData)(vlSelf->__PVT__u_add__DOT__exp_diff))) {
        vlSelf->__PVT__u_add__DOT__aligned_small = 
            (vlSelf->__PVT__u_add__DOT__small_mant 
             << 3U);
        vlSelf->__PVT__u_add__DOT__sticky_bit = 0U;
    } else if ((0x1bU > (IData)(vlSelf->__PVT__u_add__DOT__exp_diff))) {
        vlSelf->__PVT__u_add__DOT__aligned_small = 
            (0x7ffffffU & VL_SHIFTR_III(27,27,8, (vlSelf->__PVT__u_add__DOT__small_mant 
                                                  << 3U), (IData)(vlSelf->__PVT__u_add__DOT__exp_diff)));
        vlSelf->__PVT__u_add__DOT__sticky_bit = (0U 
                                                 != 
                                                 ((vlSelf->__PVT__u_add__DOT__small_mant 
                                                   << 3U) 
                                                  & (VL_SHIFTL_III(27,27,8, (IData)(1U), (IData)(vlSelf->__PVT__u_add__DOT__exp_diff)) 
                                                     - (IData)(1U))));
    } else {
        vlSelf->__PVT__u_add__DOT__aligned_small = 0U;
        vlSelf->__PVT__u_add__DOT__sticky_bit = (0U 
                                                 != vlSelf->__PVT__u_add__DOT__small_mant);
    }
    vlSelf->__PVT__u_add__DOT__aligned_small = ((0x7fffffeU 
                                                 & vlSelf->__PVT__u_add__DOT__aligned_small) 
                                                | (1U 
                                                   & (vlSelf->__PVT__u_add__DOT__aligned_small 
                                                      | (IData)(vlSelf->__PVT__u_add__DOT__sticky_bit))));
    vlSelf->__PVT__u_add__DOT__mant_sum = (0xfffffffU 
                                           & ((1U & 
                                               ((IData)(vlSelf->__PVT__u_add__DOT__large_sign) 
                                                ^ ((IData)(vlSelf->__PVT__u_add__DOT__a_is_larger)
                                                    ? 
                                                   (vlSelf->__PVT__fp32_product 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xbU]
                                                    [0xaU] 
                                                    >> 0x1fU))))
                                               ? ((vlSelf->__PVT__u_add__DOT__large_mant 
                                                   << 3U) 
                                                  - vlSelf->__PVT__u_add__DOT__aligned_small)
                                               : ((vlSelf->__PVT__u_add__DOT__large_mant 
                                                   << 3U) 
                                                  + vlSelf->__PVT__u_add__DOT__aligned_small)));
    vlSelf->__PVT__u_add__DOT__lzc = (((((((((0x8000000U 
                                              == (0x8000000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                             | (0x4000000U 
                                                == 
                                                (0xc000000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                            | (0x2000000U 
                                               == (0xe000000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                           | (0x1000000U 
                                              == (0xf000000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                          | (0x800000U 
                                             == (0xf800000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                         | (0x400000U 
                                            == (0xfc00000U 
                                                & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                        | (0x200000U 
                                           == (0xfe00000U 
                                               & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                       | (0x100000U 
                                          == (0xff00000U 
                                              & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                       ? ((0x8000000U 
                                           == (0x8000000U 
                                               & vlSelf->__PVT__u_add__DOT__mant_sum))
                                           ? 0U : (
                                                   (0x4000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0U
                                                    : 
                                                   ((0x2000000U 
                                                     == 
                                                     (0xe000000U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 1U
                                                     : 
                                                    ((0x1000000U 
                                                      == 
                                                      (0xf000000U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 2U
                                                      : 
                                                     ((0x800000U 
                                                       == 
                                                       (0xf800000U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 3U
                                                       : 
                                                      ((0x400000U 
                                                        == 
                                                        (0xfc00000U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 4U
                                                        : 
                                                       ((0x200000U 
                                                         == 
                                                         (0xfe00000U 
                                                          & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                         ? 5U
                                                         : 6U)))))))
                                       : (((((((((0x80000U 
                                                  == 
                                                  (0xff80000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                                 | (0x40000U 
                                                    == 
                                                    (0xffc0000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                | (0x20000U 
                                                   == 
                                                   (0xffe0000U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                               | (0x10000U 
                                                  == 
                                                  (0xfff0000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                              | (0x8000U 
                                                 == 
                                                 (0xfff8000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                             | (0x4000U 
                                                == 
                                                (0xfffc000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                            | (0x2000U 
                                               == (0xfffe000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                           | (0x1000U 
                                              == (0xffff000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                           ? ((0x80000U 
                                               == (0xff80000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))
                                               ? 7U
                                               : ((0x40000U 
                                                   == 
                                                   (0xffc0000U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 8U
                                                   : 
                                                  ((0x20000U 
                                                    == 
                                                    (0xffe0000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 9U
                                                    : 
                                                   ((0x10000U 
                                                     == 
                                                     (0xfff0000U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0xaU
                                                     : 
                                                    ((0x8000U 
                                                      == 
                                                      (0xfff8000U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 0xbU
                                                      : 
                                                     ((0x4000U 
                                                       == 
                                                       (0xfffc000U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 0xcU
                                                       : 
                                                      ((0x2000U 
                                                        == 
                                                        (0xfffe000U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 0xdU
                                                        : 0xeU)))))))
                                           : ((((((
                                                   (((0x800U 
                                                      == 
                                                      (0xffff800U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                                     | (0x400U 
                                                        == 
                                                        (0xffffc00U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                    | (0x200U 
                                                       == 
                                                       (0xffffe00U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                   | (0x100U 
                                                      == 
                                                      (0xfffff00U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                  | (0x80U 
                                                     == 
                                                     (0xfffff80U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                 | (0x40U 
                                                    == 
                                                    (0xfffffc0U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                | (0x20U 
                                                   == 
                                                   (0xfffffe0U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                               | (0x10U 
                                                  == 
                                                  (0xffffff0U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                               ? ((0x800U 
                                                   == 
                                                   (0xffff800U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 0xfU
                                                   : 
                                                  ((0x400U 
                                                    == 
                                                    (0xffffc00U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0x10U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0xffffe00U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0x11U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0xfffff00U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 0x12U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0xfffff80U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 0x13U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0xfffffc0U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 0x14U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0xfffffe0U 
                                                          & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                         ? 0x15U
                                                         : 0x16U)))))))
                                               : ((8U 
                                                   == 
                                                   (0xffffff8U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 0x17U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0xffffffcU 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0x18U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xffffffeU 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0x19U
                                                     : 
                                                    ((1U 
                                                      == vlSelf->__PVT__u_add__DOT__mant_sum)
                                                      ? 0x1aU
                                                      : 0x1bU)))))));
    if ((0x8000000U & vlSelf->__PVT__u_add__DOT__mant_sum)) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & (vlSelf->__PVT__u_add__DOT__mant_sum 
                                                   >> 1U));
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__u_add__DOT__large_exp)));
    } else if ((0x4000000U & vlSelf->__PVT__u_add__DOT__mant_sum)) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & vlSelf->__PVT__u_add__DOT__mant_sum);
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & (IData)(vlSelf->__PVT__u_add__DOT__large_exp));
    } else if (((0x1bU > (IData)(vlSelf->__PVT__u_add__DOT__lzc)) 
                & ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                   > (IData)(vlSelf->__PVT__u_add__DOT__lzc)))) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & (vlSelf->__PVT__u_add__DOT__mant_sum 
                                                   << (IData)(vlSelf->__PVT__u_add__DOT__lzc)));
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                                                  - (IData)(vlSelf->__PVT__u_add__DOT__lzc)));
    } else {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & 0U);
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & 0U);
    }
    vlSelf->__PVT__u_add__DOT__mant_rounded = (0x1ffffffU 
                                               & ((0xffffffU 
                                                   & (vlSelf->__PVT__u_add__DOT__norm_mant 
                                                      >> 3U)) 
                                                  + 
                                                  (1U 
                                                   & ((vlSelf->__PVT__u_add__DOT__norm_mant 
                                                       >> 2U) 
                                                      & (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xbU 
                                                                  & vlSelf->__PVT__u_add__DOT__norm_mant)))))));
    if ((0x1000000U & vlSelf->__PVT__u_add__DOT__mant_rounded)) {
        vlSelf->__PVT__u_add__DOT__final_exp = (0xffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__u_add__DOT__norm_exp)));
        vlSelf->__PVT__u_add__DOT__rounded_mant = (0x7fffffU 
                                                   & (vlSelf->__PVT__u_add__DOT__mant_rounded 
                                                      >> 1U));
    } else {
        vlSelf->__PVT__u_add__DOT__final_exp = vlSelf->__PVT__u_add__DOT__norm_exp;
        vlSelf->__PVT__u_add__DOT__rounded_mant = (0x7fffffU 
                                                   & vlSelf->__PVT__u_add__DOT__mant_rounded);
    }
}

VL_INLINE_OPT void Vnpu_system_top_mac_pe___ico_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__0(Vnpu_system_top_mac_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnpu_system_top_mac_pe___ico_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__0\n"); );
    // Init
    CData/*0:0*/ u_mul__DOT____VdfgExtracted_h1f028376__0;
    u_mul__DOT____VdfgExtracted_h1f028376__0 = 0;
    IData/*23:0*/ u_add__DOT____VdfgExtracted_hb7d58418__0;
    u_add__DOT____VdfgExtracted_hb7d58418__0 = 0;
    // Body
    u_mul__DOT____VdfgExtracted_h1f028376__0 = (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                      [0xbU]
                                                      [0xbU] 
                                                      >> 0xaU))) 
                                                 & (0U 
                                                    == 
                                                    (0x3ffU 
                                                     & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                     [0xbU]
                                                     [0xbU]))) 
                                                | (IData)(
                                                          (0U 
                                                           == 
                                                           (0x7fffU 
                                                            & (IData)(vlSelf->__PVT__weight_reg)))));
    vlSelf->__PVT__u_mul__DOT__result_sign = (1U & 
                                              ((vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xbU]
                                                [0xbU] 
                                                ^ (IData)(vlSelf->__PVT__weight_reg)) 
                                               >> 0xfU));
    vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0 = (0x1ffU 
                                                  & ((0x1fU 
                                                      & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                         [0xbU]
                                                         [0xbU] 
                                                         >> 0xaU)) 
                                                     + 
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->__PVT__weight_reg) 
                                                         >> 0xaU))));
    vlSelf->__PVT__u_mul__DOT__mant_product = (0x3fffffU 
                                               & ((0x400U 
                                                   | (0x3ffU 
                                                      & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                      [0xbU]
                                                      [0xbU])) 
                                                  * 
                                                  (0x400U 
                                                   | (0x3ffU 
                                                      & (IData)(vlSelf->__PVT__weight_reg)))));
    vlSelf->__PVT__u_mul__DOT__fp32_exp = (0x1ffU & 
                                           ((0x200000U 
                                             & vlSelf->__PVT__u_mul__DOT__mant_product)
                                             ? ((IData)(0x62U) 
                                                + (IData)(vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0))
                                             : ((IData)(0x61U) 
                                                + (IData)(vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0))));
    vlSelf->__PVT__fp32_product = ((((0x1fU == (0x1fU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xbU]
                                                   [0xbU] 
                                                   >> 0xaU))) 
                                     & (0U != (0x3ffU 
                                               & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xbU]
                                               [0xbU]))) 
                                    | (IData)(((0x7c00U 
                                                == 
                                                (0x7c00U 
                                                 & (IData)(vlSelf->__PVT__weight_reg))) 
                                               & (0U 
                                                  != 
                                                  (0x3ffU 
                                                   & (IData)(vlSelf->__PVT__weight_reg))))))
                                    ? 0x7fc00000U : 
                                   ((((0x1fU == (0x1fU 
                                                 & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                    [0xbU]
                                                    [0xbU] 
                                                    >> 0xaU))) 
                                      & (0U == (0x3ffU 
                                                & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xbU]
                                                [0xbU]))) 
                                     | (IData)((0x7c00U 
                                                == 
                                                (0x7fffU 
                                                 & (IData)(vlSelf->__PVT__weight_reg)))))
                                     ? ((IData)(u_mul__DOT____VdfgExtracted_h1f028376__0)
                                         ? 0x7fc00000U
                                         : (0x7f800000U 
                                            | ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                               << 0x1fU)))
                                     : (((IData)(u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                         | (((0U == 
                                              (0x1fU 
                                               & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xbU]
                                                  [0xbU] 
                                                  >> 0xaU))) 
                                             & (0U 
                                                != 
                                                (0x3ffU 
                                                 & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [0xbU]))) 
                                            | (IData)(
                                                      ((0U 
                                                        == 
                                                        (0x7c00U 
                                                         & (IData)(vlSelf->__PVT__weight_reg))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSelf->__PVT__weight_reg)))))))
                                         ? ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                            << 0x1fU)
                                         : ((IData)(
                                                    (((IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp) 
                                                      >> 8U) 
                                                     | (0xffU 
                                                        <= (IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp))))
                                             ? (0x7f800000U 
                                                | ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                   << 0x1fU))
                                             : ((0U 
                                                 == (IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                 << 0x1fU)
                                                 : 
                                                (((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                  << 0x1fU) 
                                                 | ((0x7f800000U 
                                                     & ((IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp) 
                                                        << 0x17U)) 
                                                    | ((0x200000U 
                                                        & vlSelf->__PVT__u_mul__DOT__mant_product)
                                                        ? 
                                                       (0x7ffffcU 
                                                        & (vlSelf->__PVT__u_mul__DOT__mant_product 
                                                           << 2U))
                                                        : 
                                                       (0x7ffff8U 
                                                        & (vlSelf->__PVT__u_mul__DOT__mant_product 
                                                           << 3U))))))))));
    vlSelf->__PVT__u_add__DOT__b_is_inf = (IData)((0x7f800000U 
                                                   == 
                                                   (0x7fffffffU 
                                                    & vlSelf->__PVT__fp32_product)));
    vlSelf->__PVT__u_add__DOT__b_is_zero = (IData)(
                                                   (0U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelf->__PVT__fp32_product)));
    u_add__DOT____VdfgExtracted_hb7d58418__0 = ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSelf->__PVT__fp32_product 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x7fffffU 
                                                 & vlSelf->__PVT__fp32_product)
                                                 : 
                                                (0x800000U 
                                                 | (0x7fffffU 
                                                    & vlSelf->__PVT__fp32_product)));
    vlSelf->__PVT__u_add__DOT__a_is_larger = (((0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xbU]
                                                   [0xbU] 
                                                   >> 0x17U)) 
                                               > (0xffU 
                                                  & (vlSelf->__PVT__fp32_product 
                                                     >> 0x17U))) 
                                              | (((0xffU 
                                                   & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xbU]
                                                      [0xbU] 
                                                      >> 0x17U)) 
                                                  == 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__fp32_product 
                                                      >> 0x17U))) 
                                                 & ((0x7fffffU 
                                                     & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xbU]
                                                     [0xbU]) 
                                                    >= 
                                                    (0x7fffffU 
                                                     & vlSelf->__PVT__fp32_product))));
    if (vlSelf->__PVT__u_add__DOT__a_is_larger) {
        vlSelf->__PVT__u_add__DOT__large_sign = (1U 
                                                 & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xbU]
                                                    [0xbU] 
                                                    >> 0x1fU));
        vlSelf->__PVT__u_add__DOT__large_mant = vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__u_add__DOT__small_mant = u_add__DOT____VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__u_add__DOT__large_exp = (0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xbU]
                                                   [0xbU] 
                                                   >> 0x17U));
        vlSelf->__PVT__u_add__DOT__small_exp = (0xffU 
                                                & (vlSelf->__PVT__fp32_product 
                                                   >> 0x17U));
    } else {
        vlSelf->__PVT__u_add__DOT__large_sign = (1U 
                                                 & (vlSelf->__PVT__fp32_product 
                                                    >> 0x1fU));
        vlSelf->__PVT__u_add__DOT__large_mant = u_add__DOT____VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__u_add__DOT__small_mant = vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__u_add__DOT__large_exp = (0xffU 
                                                & (vlSelf->__PVT__fp32_product 
                                                   >> 0x17U));
        vlSelf->__PVT__u_add__DOT__small_exp = (0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xbU]
                                                   [0xbU] 
                                                   >> 0x17U));
    }
    vlSelf->__PVT__u_add__DOT__exp_diff = (0xffU & 
                                           ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                                            - (IData)(vlSelf->__PVT__u_add__DOT__small_exp)));
    if ((0U == (IData)(vlSelf->__PVT__u_add__DOT__exp_diff))) {
        vlSelf->__PVT__u_add__DOT__aligned_small = 
            (vlSelf->__PVT__u_add__DOT__small_mant 
             << 3U);
        vlSelf->__PVT__u_add__DOT__sticky_bit = 0U;
    } else if ((0x1bU > (IData)(vlSelf->__PVT__u_add__DOT__exp_diff))) {
        vlSelf->__PVT__u_add__DOT__aligned_small = 
            (0x7ffffffU & VL_SHIFTR_III(27,27,8, (vlSelf->__PVT__u_add__DOT__small_mant 
                                                  << 3U), (IData)(vlSelf->__PVT__u_add__DOT__exp_diff)));
        vlSelf->__PVT__u_add__DOT__sticky_bit = (0U 
                                                 != 
                                                 ((vlSelf->__PVT__u_add__DOT__small_mant 
                                                   << 3U) 
                                                  & (VL_SHIFTL_III(27,27,8, (IData)(1U), (IData)(vlSelf->__PVT__u_add__DOT__exp_diff)) 
                                                     - (IData)(1U))));
    } else {
        vlSelf->__PVT__u_add__DOT__aligned_small = 0U;
        vlSelf->__PVT__u_add__DOT__sticky_bit = (0U 
                                                 != vlSelf->__PVT__u_add__DOT__small_mant);
    }
    vlSelf->__PVT__u_add__DOT__aligned_small = ((0x7fffffeU 
                                                 & vlSelf->__PVT__u_add__DOT__aligned_small) 
                                                | (1U 
                                                   & (vlSelf->__PVT__u_add__DOT__aligned_small 
                                                      | (IData)(vlSelf->__PVT__u_add__DOT__sticky_bit))));
    vlSelf->__PVT__u_add__DOT__mant_sum = (0xfffffffU 
                                           & ((1U & 
                                               ((IData)(vlSelf->__PVT__u_add__DOT__large_sign) 
                                                ^ ((IData)(vlSelf->__PVT__u_add__DOT__a_is_larger)
                                                    ? 
                                                   (vlSelf->__PVT__fp32_product 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xbU]
                                                    [0xbU] 
                                                    >> 0x1fU))))
                                               ? ((vlSelf->__PVT__u_add__DOT__large_mant 
                                                   << 3U) 
                                                  - vlSelf->__PVT__u_add__DOT__aligned_small)
                                               : ((vlSelf->__PVT__u_add__DOT__large_mant 
                                                   << 3U) 
                                                  + vlSelf->__PVT__u_add__DOT__aligned_small)));
    vlSelf->__PVT__u_add__DOT__lzc = (((((((((0x8000000U 
                                              == (0x8000000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                             | (0x4000000U 
                                                == 
                                                (0xc000000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                            | (0x2000000U 
                                               == (0xe000000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                           | (0x1000000U 
                                              == (0xf000000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                          | (0x800000U 
                                             == (0xf800000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                         | (0x400000U 
                                            == (0xfc00000U 
                                                & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                        | (0x200000U 
                                           == (0xfe00000U 
                                               & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                       | (0x100000U 
                                          == (0xff00000U 
                                              & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                       ? ((0x8000000U 
                                           == (0x8000000U 
                                               & vlSelf->__PVT__u_add__DOT__mant_sum))
                                           ? 0U : (
                                                   (0x4000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0U
                                                    : 
                                                   ((0x2000000U 
                                                     == 
                                                     (0xe000000U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 1U
                                                     : 
                                                    ((0x1000000U 
                                                      == 
                                                      (0xf000000U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 2U
                                                      : 
                                                     ((0x800000U 
                                                       == 
                                                       (0xf800000U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 3U
                                                       : 
                                                      ((0x400000U 
                                                        == 
                                                        (0xfc00000U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 4U
                                                        : 
                                                       ((0x200000U 
                                                         == 
                                                         (0xfe00000U 
                                                          & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                         ? 5U
                                                         : 6U)))))))
                                       : (((((((((0x80000U 
                                                  == 
                                                  (0xff80000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                                 | (0x40000U 
                                                    == 
                                                    (0xffc0000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                | (0x20000U 
                                                   == 
                                                   (0xffe0000U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                               | (0x10000U 
                                                  == 
                                                  (0xfff0000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                              | (0x8000U 
                                                 == 
                                                 (0xfff8000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                             | (0x4000U 
                                                == 
                                                (0xfffc000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                            | (0x2000U 
                                               == (0xfffe000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                           | (0x1000U 
                                              == (0xffff000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                           ? ((0x80000U 
                                               == (0xff80000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))
                                               ? 7U
                                               : ((0x40000U 
                                                   == 
                                                   (0xffc0000U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 8U
                                                   : 
                                                  ((0x20000U 
                                                    == 
                                                    (0xffe0000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 9U
                                                    : 
                                                   ((0x10000U 
                                                     == 
                                                     (0xfff0000U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0xaU
                                                     : 
                                                    ((0x8000U 
                                                      == 
                                                      (0xfff8000U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 0xbU
                                                      : 
                                                     ((0x4000U 
                                                       == 
                                                       (0xfffc000U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 0xcU
                                                       : 
                                                      ((0x2000U 
                                                        == 
                                                        (0xfffe000U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 0xdU
                                                        : 0xeU)))))))
                                           : ((((((
                                                   (((0x800U 
                                                      == 
                                                      (0xffff800U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                                     | (0x400U 
                                                        == 
                                                        (0xffffc00U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                    | (0x200U 
                                                       == 
                                                       (0xffffe00U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                   | (0x100U 
                                                      == 
                                                      (0xfffff00U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                  | (0x80U 
                                                     == 
                                                     (0xfffff80U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                 | (0x40U 
                                                    == 
                                                    (0xfffffc0U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                | (0x20U 
                                                   == 
                                                   (0xfffffe0U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                               | (0x10U 
                                                  == 
                                                  (0xffffff0U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                               ? ((0x800U 
                                                   == 
                                                   (0xffff800U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 0xfU
                                                   : 
                                                  ((0x400U 
                                                    == 
                                                    (0xffffc00U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0x10U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0xffffe00U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0x11U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0xfffff00U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 0x12U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0xfffff80U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 0x13U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0xfffffc0U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 0x14U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0xfffffe0U 
                                                          & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                         ? 0x15U
                                                         : 0x16U)))))))
                                               : ((8U 
                                                   == 
                                                   (0xffffff8U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 0x17U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0xffffffcU 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0x18U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xffffffeU 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0x19U
                                                     : 
                                                    ((1U 
                                                      == vlSelf->__PVT__u_add__DOT__mant_sum)
                                                      ? 0x1aU
                                                      : 0x1bU)))))));
    if ((0x8000000U & vlSelf->__PVT__u_add__DOT__mant_sum)) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & (vlSelf->__PVT__u_add__DOT__mant_sum 
                                                   >> 1U));
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__u_add__DOT__large_exp)));
    } else if ((0x4000000U & vlSelf->__PVT__u_add__DOT__mant_sum)) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & vlSelf->__PVT__u_add__DOT__mant_sum);
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & (IData)(vlSelf->__PVT__u_add__DOT__large_exp));
    } else if (((0x1bU > (IData)(vlSelf->__PVT__u_add__DOT__lzc)) 
                & ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                   > (IData)(vlSelf->__PVT__u_add__DOT__lzc)))) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & (vlSelf->__PVT__u_add__DOT__mant_sum 
                                                   << (IData)(vlSelf->__PVT__u_add__DOT__lzc)));
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                                                  - (IData)(vlSelf->__PVT__u_add__DOT__lzc)));
    } else {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & 0U);
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & 0U);
    }
    vlSelf->__PVT__u_add__DOT__mant_rounded = (0x1ffffffU 
                                               & ((0xffffffU 
                                                   & (vlSelf->__PVT__u_add__DOT__norm_mant 
                                                      >> 3U)) 
                                                  + 
                                                  (1U 
                                                   & ((vlSelf->__PVT__u_add__DOT__norm_mant 
                                                       >> 2U) 
                                                      & (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xbU 
                                                                  & vlSelf->__PVT__u_add__DOT__norm_mant)))))));
    if ((0x1000000U & vlSelf->__PVT__u_add__DOT__mant_rounded)) {
        vlSelf->__PVT__u_add__DOT__final_exp = (0xffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__u_add__DOT__norm_exp)));
        vlSelf->__PVT__u_add__DOT__rounded_mant = (0x7fffffU 
                                                   & (vlSelf->__PVT__u_add__DOT__mant_rounded 
                                                      >> 1U));
    } else {
        vlSelf->__PVT__u_add__DOT__final_exp = vlSelf->__PVT__u_add__DOT__norm_exp;
        vlSelf->__PVT__u_add__DOT__rounded_mant = (0x7fffffU 
                                                   & vlSelf->__PVT__u_add__DOT__mant_rounded);
    }
}

VL_INLINE_OPT void Vnpu_system_top_mac_pe___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__0(Vnpu_system_top_mac_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnpu_system_top_mac_pe___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__0\n"); );
    // Body
    if (vlSymsp->TOP.rst_n) {
        if (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT____Vcellinp__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__weight_load_en) {
            vlSelf->__PVT__weight_reg = (vlSymsp->TOP.rdata[5U] 
                                         >> 0x10U);
        }
        vlSelf->psum_out = ((((0xffU == (0xffU & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xbU]
                                                  [0xbU] 
                                                  >> 0x17U))) 
                              & (0U != (0x7fffffU & 
                                        vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                        [0xbU][0xbU]))) 
                             | (IData)(((0x7f800000U 
                                         == (0x7f800000U 
                                             & vlSelf->__PVT__fp32_product)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSelf->__PVT__fp32_product)))))
                             ? 0x7fc00000U : (((IData)(vlSelf->__PVT__u_add__DOT__a_is_inf) 
                                               & (IData)(vlSelf->__PVT__u_add__DOT__b_is_inf))
                                               ? ((
                                                   (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xbU]
                                                    [0xbU] 
                                                    >> 0x1fU) 
                                                   != 
                                                   (vlSelf->__PVT__fp32_product 
                                                    >> 0x1fU))
                                                   ? 0x7fc00000U
                                                   : 
                                                  (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xbU]
                                                      [0xbU])))
                                               : ((IData)(vlSelf->__PVT__u_add__DOT__a_is_inf)
                                                   ? 
                                                  (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xbU]
                                                      [0xbU]))
                                                   : 
                                                  ((IData)(vlSelf->__PVT__u_add__DOT__b_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->__PVT__fp32_product))
                                                    : 
                                                   (((IData)(vlSelf->__PVT__u_add__DOT__a_is_zero) 
                                                     & (IData)(vlSelf->__PVT__u_add__DOT__b_is_zero))
                                                     ? 
                                                    (0x80000000U 
                                                     & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                        [0xbU]
                                                        [0xbU] 
                                                        & vlSelf->__PVT__fp32_product))
                                                     : 
                                                    ((IData)(vlSelf->__PVT__u_add__DOT__a_is_zero)
                                                      ? vlSelf->__PVT__fp32_product
                                                      : 
                                                     ((IData)(vlSelf->__PVT__u_add__DOT__b_is_zero)
                                                       ? 
                                                      vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xbU]
                                                      [0xbU]
                                                       : 
                                                      (((0U 
                                                         == (IData)(vlSelf->__PVT__u_add__DOT__norm_exp)) 
                                                        & (0U 
                                                           == vlSelf->__PVT__u_add__DOT__norm_mant))
                                                        ? 0U
                                                        : 
                                                       ((0xffU 
                                                         <= (IData)(vlSelf->__PVT__u_add__DOT__final_exp))
                                                         ? 
                                                        (0x7f800000U 
                                                         | ((IData)(vlSelf->__PVT__u_add__DOT__large_sign) 
                                                            << 0x1fU))
                                                         : 
                                                        (((IData)(vlSelf->__PVT__u_add__DOT__large_sign) 
                                                          << 0x1fU) 
                                                         | (((IData)(vlSelf->__PVT__u_add__DOT__final_exp) 
                                                             << 0x17U) 
                                                            | vlSelf->__PVT__u_add__DOT__rounded_mant)))))))))));
        vlSelf->act_out = vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xbU][0xbU];
    } else {
        vlSelf->__PVT__weight_reg = 0U;
        vlSelf->psum_out = 0U;
        vlSelf->act_out = 0U;
    }
}

VL_INLINE_OPT void Vnpu_system_top_mac_pe___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__1(Vnpu_system_top_mac_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnpu_system_top_mac_pe___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__1\n"); );
    // Init
    CData/*0:0*/ u_mul__DOT____VdfgExtracted_h1f028376__0;
    u_mul__DOT____VdfgExtracted_h1f028376__0 = 0;
    IData/*23:0*/ u_add__DOT____VdfgExtracted_hb7d58418__0;
    u_add__DOT____VdfgExtracted_hb7d58418__0 = 0;
    // Body
    vlSelf->__PVT__u_add__DOT__a_is_inf = ((0xffU == 
                                            (0xffU 
                                             & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xbU]
                                                [0xbU] 
                                                >> 0x17U))) 
                                           & (0U == 
                                              (0x7fffffU 
                                               & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                               [0xbU]
                                               [0xbU])));
    if ((0U == (0xffU & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                         [0xbU][0xbU] >> 0x17U)))) {
        vlSelf->__PVT__u_add__DOT__a_is_zero = (0U 
                                                == 
                                                (0x7fffffU 
                                                 & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                 [0xbU]
                                                 [0xbU]));
        vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0 
            = (0x7fffffU & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xbU][0xbU]);
    } else {
        vlSelf->__PVT__u_add__DOT__a_is_zero = 0U;
        vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0 
            = (0x800000U | (0x7fffffU & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                            [0xbU][0xbU]));
    }
    u_mul__DOT____VdfgExtracted_h1f028376__0 = (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                      [0xbU]
                                                      [0xbU] 
                                                      >> 0xaU))) 
                                                 & (0U 
                                                    == 
                                                    (0x3ffU 
                                                     & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                     [0xbU]
                                                     [0xbU]))) 
                                                | (IData)(
                                                          (0U 
                                                           == 
                                                           (0x7fffU 
                                                            & (IData)(vlSelf->__PVT__weight_reg)))));
    vlSelf->__PVT__u_mul__DOT__result_sign = (1U & 
                                              ((vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xbU]
                                                [0xbU] 
                                                ^ (IData)(vlSelf->__PVT__weight_reg)) 
                                               >> 0xfU));
    vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0 = (0x1ffU 
                                                  & ((0x1fU 
                                                      & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                         [0xbU]
                                                         [0xbU] 
                                                         >> 0xaU)) 
                                                     + 
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->__PVT__weight_reg) 
                                                         >> 0xaU))));
    vlSelf->__PVT__u_mul__DOT__mant_product = (0x3fffffU 
                                               & ((0x400U 
                                                   | (0x3ffU 
                                                      & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                      [0xbU]
                                                      [0xbU])) 
                                                  * 
                                                  (0x400U 
                                                   | (0x3ffU 
                                                      & (IData)(vlSelf->__PVT__weight_reg)))));
    vlSelf->__PVT__u_mul__DOT__fp32_exp = (0x1ffU & 
                                           ((0x200000U 
                                             & vlSelf->__PVT__u_mul__DOT__mant_product)
                                             ? ((IData)(0x62U) 
                                                + (IData)(vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0))
                                             : ((IData)(0x61U) 
                                                + (IData)(vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0))));
    vlSelf->__PVT__fp32_product = ((((0x1fU == (0x1fU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xbU]
                                                   [0xbU] 
                                                   >> 0xaU))) 
                                     & (0U != (0x3ffU 
                                               & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xbU]
                                               [0xbU]))) 
                                    | (IData)(((0x7c00U 
                                                == 
                                                (0x7c00U 
                                                 & (IData)(vlSelf->__PVT__weight_reg))) 
                                               & (0U 
                                                  != 
                                                  (0x3ffU 
                                                   & (IData)(vlSelf->__PVT__weight_reg))))))
                                    ? 0x7fc00000U : 
                                   ((((0x1fU == (0x1fU 
                                                 & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                    [0xbU]
                                                    [0xbU] 
                                                    >> 0xaU))) 
                                      & (0U == (0x3ffU 
                                                & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xbU]
                                                [0xbU]))) 
                                     | (IData)((0x7c00U 
                                                == 
                                                (0x7fffU 
                                                 & (IData)(vlSelf->__PVT__weight_reg)))))
                                     ? ((IData)(u_mul__DOT____VdfgExtracted_h1f028376__0)
                                         ? 0x7fc00000U
                                         : (0x7f800000U 
                                            | ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                               << 0x1fU)))
                                     : (((IData)(u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                         | (((0U == 
                                              (0x1fU 
                                               & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xbU]
                                                  [0xbU] 
                                                  >> 0xaU))) 
                                             & (0U 
                                                != 
                                                (0x3ffU 
                                                 & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [0xbU]))) 
                                            | (IData)(
                                                      ((0U 
                                                        == 
                                                        (0x7c00U 
                                                         & (IData)(vlSelf->__PVT__weight_reg))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSelf->__PVT__weight_reg)))))))
                                         ? ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                            << 0x1fU)
                                         : ((IData)(
                                                    (((IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp) 
                                                      >> 8U) 
                                                     | (0xffU 
                                                        <= (IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp))))
                                             ? (0x7f800000U 
                                                | ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                   << 0x1fU))
                                             : ((0U 
                                                 == (IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                 << 0x1fU)
                                                 : 
                                                (((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                  << 0x1fU) 
                                                 | ((0x7f800000U 
                                                     & ((IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp) 
                                                        << 0x17U)) 
                                                    | ((0x200000U 
                                                        & vlSelf->__PVT__u_mul__DOT__mant_product)
                                                        ? 
                                                       (0x7ffffcU 
                                                        & (vlSelf->__PVT__u_mul__DOT__mant_product 
                                                           << 2U))
                                                        : 
                                                       (0x7ffff8U 
                                                        & (vlSelf->__PVT__u_mul__DOT__mant_product 
                                                           << 3U))))))))));
    vlSelf->__PVT__u_add__DOT__b_is_inf = (IData)((0x7f800000U 
                                                   == 
                                                   (0x7fffffffU 
                                                    & vlSelf->__PVT__fp32_product)));
    vlSelf->__PVT__u_add__DOT__b_is_zero = (IData)(
                                                   (0U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelf->__PVT__fp32_product)));
    u_add__DOT____VdfgExtracted_hb7d58418__0 = ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSelf->__PVT__fp32_product 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x7fffffU 
                                                 & vlSelf->__PVT__fp32_product)
                                                 : 
                                                (0x800000U 
                                                 | (0x7fffffU 
                                                    & vlSelf->__PVT__fp32_product)));
    vlSelf->__PVT__u_add__DOT__a_is_larger = (((0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xbU]
                                                   [0xbU] 
                                                   >> 0x17U)) 
                                               > (0xffU 
                                                  & (vlSelf->__PVT__fp32_product 
                                                     >> 0x17U))) 
                                              | (((0xffU 
                                                   & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xbU]
                                                      [0xbU] 
                                                      >> 0x17U)) 
                                                  == 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__fp32_product 
                                                      >> 0x17U))) 
                                                 & ((0x7fffffU 
                                                     & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xbU]
                                                     [0xbU]) 
                                                    >= 
                                                    (0x7fffffU 
                                                     & vlSelf->__PVT__fp32_product))));
    if (vlSelf->__PVT__u_add__DOT__a_is_larger) {
        vlSelf->__PVT__u_add__DOT__large_sign = (1U 
                                                 & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xbU]
                                                    [0xbU] 
                                                    >> 0x1fU));
        vlSelf->__PVT__u_add__DOT__large_mant = vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__u_add__DOT__small_mant = u_add__DOT____VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__u_add__DOT__large_exp = (0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xbU]
                                                   [0xbU] 
                                                   >> 0x17U));
        vlSelf->__PVT__u_add__DOT__small_exp = (0xffU 
                                                & (vlSelf->__PVT__fp32_product 
                                                   >> 0x17U));
    } else {
        vlSelf->__PVT__u_add__DOT__large_sign = (1U 
                                                 & (vlSelf->__PVT__fp32_product 
                                                    >> 0x1fU));
        vlSelf->__PVT__u_add__DOT__large_mant = u_add__DOT____VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__u_add__DOT__small_mant = vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__u_add__DOT__large_exp = (0xffU 
                                                & (vlSelf->__PVT__fp32_product 
                                                   >> 0x17U));
        vlSelf->__PVT__u_add__DOT__small_exp = (0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xbU]
                                                   [0xbU] 
                                                   >> 0x17U));
    }
    vlSelf->__PVT__u_add__DOT__exp_diff = (0xffU & 
                                           ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                                            - (IData)(vlSelf->__PVT__u_add__DOT__small_exp)));
    if ((0U == (IData)(vlSelf->__PVT__u_add__DOT__exp_diff))) {
        vlSelf->__PVT__u_add__DOT__aligned_small = 
            (vlSelf->__PVT__u_add__DOT__small_mant 
             << 3U);
        vlSelf->__PVT__u_add__DOT__sticky_bit = 0U;
    } else if ((0x1bU > (IData)(vlSelf->__PVT__u_add__DOT__exp_diff))) {
        vlSelf->__PVT__u_add__DOT__aligned_small = 
            (0x7ffffffU & VL_SHIFTR_III(27,27,8, (vlSelf->__PVT__u_add__DOT__small_mant 
                                                  << 3U), (IData)(vlSelf->__PVT__u_add__DOT__exp_diff)));
        vlSelf->__PVT__u_add__DOT__sticky_bit = (0U 
                                                 != 
                                                 ((vlSelf->__PVT__u_add__DOT__small_mant 
                                                   << 3U) 
                                                  & (VL_SHIFTL_III(27,27,8, (IData)(1U), (IData)(vlSelf->__PVT__u_add__DOT__exp_diff)) 
                                                     - (IData)(1U))));
    } else {
        vlSelf->__PVT__u_add__DOT__aligned_small = 0U;
        vlSelf->__PVT__u_add__DOT__sticky_bit = (0U 
                                                 != vlSelf->__PVT__u_add__DOT__small_mant);
    }
    vlSelf->__PVT__u_add__DOT__aligned_small = ((0x7fffffeU 
                                                 & vlSelf->__PVT__u_add__DOT__aligned_small) 
                                                | (1U 
                                                   & (vlSelf->__PVT__u_add__DOT__aligned_small 
                                                      | (IData)(vlSelf->__PVT__u_add__DOT__sticky_bit))));
    vlSelf->__PVT__u_add__DOT__mant_sum = (0xfffffffU 
                                           & ((1U & 
                                               ((IData)(vlSelf->__PVT__u_add__DOT__large_sign) 
                                                ^ ((IData)(vlSelf->__PVT__u_add__DOT__a_is_larger)
                                                    ? 
                                                   (vlSelf->__PVT__fp32_product 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xbU]
                                                    [0xbU] 
                                                    >> 0x1fU))))
                                               ? ((vlSelf->__PVT__u_add__DOT__large_mant 
                                                   << 3U) 
                                                  - vlSelf->__PVT__u_add__DOT__aligned_small)
                                               : ((vlSelf->__PVT__u_add__DOT__large_mant 
                                                   << 3U) 
                                                  + vlSelf->__PVT__u_add__DOT__aligned_small)));
    vlSelf->__PVT__u_add__DOT__lzc = (((((((((0x8000000U 
                                              == (0x8000000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                             | (0x4000000U 
                                                == 
                                                (0xc000000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                            | (0x2000000U 
                                               == (0xe000000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                           | (0x1000000U 
                                              == (0xf000000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                          | (0x800000U 
                                             == (0xf800000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                         | (0x400000U 
                                            == (0xfc00000U 
                                                & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                        | (0x200000U 
                                           == (0xfe00000U 
                                               & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                       | (0x100000U 
                                          == (0xff00000U 
                                              & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                       ? ((0x8000000U 
                                           == (0x8000000U 
                                               & vlSelf->__PVT__u_add__DOT__mant_sum))
                                           ? 0U : (
                                                   (0x4000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0U
                                                    : 
                                                   ((0x2000000U 
                                                     == 
                                                     (0xe000000U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 1U
                                                     : 
                                                    ((0x1000000U 
                                                      == 
                                                      (0xf000000U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 2U
                                                      : 
                                                     ((0x800000U 
                                                       == 
                                                       (0xf800000U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 3U
                                                       : 
                                                      ((0x400000U 
                                                        == 
                                                        (0xfc00000U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 4U
                                                        : 
                                                       ((0x200000U 
                                                         == 
                                                         (0xfe00000U 
                                                          & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                         ? 5U
                                                         : 6U)))))))
                                       : (((((((((0x80000U 
                                                  == 
                                                  (0xff80000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                                 | (0x40000U 
                                                    == 
                                                    (0xffc0000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                | (0x20000U 
                                                   == 
                                                   (0xffe0000U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                               | (0x10000U 
                                                  == 
                                                  (0xfff0000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                              | (0x8000U 
                                                 == 
                                                 (0xfff8000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                             | (0x4000U 
                                                == 
                                                (0xfffc000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                            | (0x2000U 
                                               == (0xfffe000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                           | (0x1000U 
                                              == (0xffff000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                           ? ((0x80000U 
                                               == (0xff80000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))
                                               ? 7U
                                               : ((0x40000U 
                                                   == 
                                                   (0xffc0000U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 8U
                                                   : 
                                                  ((0x20000U 
                                                    == 
                                                    (0xffe0000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 9U
                                                    : 
                                                   ((0x10000U 
                                                     == 
                                                     (0xfff0000U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0xaU
                                                     : 
                                                    ((0x8000U 
                                                      == 
                                                      (0xfff8000U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 0xbU
                                                      : 
                                                     ((0x4000U 
                                                       == 
                                                       (0xfffc000U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 0xcU
                                                       : 
                                                      ((0x2000U 
                                                        == 
                                                        (0xfffe000U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 0xdU
                                                        : 0xeU)))))))
                                           : ((((((
                                                   (((0x800U 
                                                      == 
                                                      (0xffff800U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                                     | (0x400U 
                                                        == 
                                                        (0xffffc00U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                    | (0x200U 
                                                       == 
                                                       (0xffffe00U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                   | (0x100U 
                                                      == 
                                                      (0xfffff00U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                  | (0x80U 
                                                     == 
                                                     (0xfffff80U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                 | (0x40U 
                                                    == 
                                                    (0xfffffc0U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                | (0x20U 
                                                   == 
                                                   (0xfffffe0U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                               | (0x10U 
                                                  == 
                                                  (0xffffff0U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                               ? ((0x800U 
                                                   == 
                                                   (0xffff800U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 0xfU
                                                   : 
                                                  ((0x400U 
                                                    == 
                                                    (0xffffc00U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0x10U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0xffffe00U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0x11U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0xfffff00U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 0x12U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0xfffff80U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 0x13U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0xfffffc0U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 0x14U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0xfffffe0U 
                                                          & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                         ? 0x15U
                                                         : 0x16U)))))))
                                               : ((8U 
                                                   == 
                                                   (0xffffff8U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 0x17U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0xffffffcU 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0x18U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xffffffeU 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0x19U
                                                     : 
                                                    ((1U 
                                                      == vlSelf->__PVT__u_add__DOT__mant_sum)
                                                      ? 0x1aU
                                                      : 0x1bU)))))));
    if ((0x8000000U & vlSelf->__PVT__u_add__DOT__mant_sum)) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & (vlSelf->__PVT__u_add__DOT__mant_sum 
                                                   >> 1U));
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__u_add__DOT__large_exp)));
    } else if ((0x4000000U & vlSelf->__PVT__u_add__DOT__mant_sum)) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & vlSelf->__PVT__u_add__DOT__mant_sum);
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & (IData)(vlSelf->__PVT__u_add__DOT__large_exp));
    } else if (((0x1bU > (IData)(vlSelf->__PVT__u_add__DOT__lzc)) 
                & ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                   > (IData)(vlSelf->__PVT__u_add__DOT__lzc)))) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & (vlSelf->__PVT__u_add__DOT__mant_sum 
                                                   << (IData)(vlSelf->__PVT__u_add__DOT__lzc)));
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                                                  - (IData)(vlSelf->__PVT__u_add__DOT__lzc)));
    } else {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & 0U);
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & 0U);
    }
    vlSelf->__PVT__u_add__DOT__mant_rounded = (0x1ffffffU 
                                               & ((0xffffffU 
                                                   & (vlSelf->__PVT__u_add__DOT__norm_mant 
                                                      >> 3U)) 
                                                  + 
                                                  (1U 
                                                   & ((vlSelf->__PVT__u_add__DOT__norm_mant 
                                                       >> 2U) 
                                                      & (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xbU 
                                                                  & vlSelf->__PVT__u_add__DOT__norm_mant)))))));
    if ((0x1000000U & vlSelf->__PVT__u_add__DOT__mant_rounded)) {
        vlSelf->__PVT__u_add__DOT__final_exp = (0xffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__u_add__DOT__norm_exp)));
        vlSelf->__PVT__u_add__DOT__rounded_mant = (0x7fffffU 
                                                   & (vlSelf->__PVT__u_add__DOT__mant_rounded 
                                                      >> 1U));
    } else {
        vlSelf->__PVT__u_add__DOT__final_exp = vlSelf->__PVT__u_add__DOT__norm_exp;
        vlSelf->__PVT__u_add__DOT__rounded_mant = (0x7fffffU 
                                                   & vlSelf->__PVT__u_add__DOT__mant_rounded);
    }
}

VL_INLINE_OPT void Vnpu_system_top_mac_pe___ico_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__0(Vnpu_system_top_mac_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnpu_system_top_mac_pe___ico_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__0\n"); );
    // Init
    CData/*0:0*/ u_mul__DOT____VdfgExtracted_h1f028376__0;
    u_mul__DOT____VdfgExtracted_h1f028376__0 = 0;
    IData/*23:0*/ u_add__DOT____VdfgExtracted_hb7d58418__0;
    u_add__DOT____VdfgExtracted_hb7d58418__0 = 0;
    // Body
    u_mul__DOT____VdfgExtracted_h1f028376__0 = (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                      [0xbU]
                                                      [0xcU] 
                                                      >> 0xaU))) 
                                                 & (0U 
                                                    == 
                                                    (0x3ffU 
                                                     & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                     [0xbU]
                                                     [0xcU]))) 
                                                | (IData)(
                                                          (0U 
                                                           == 
                                                           (0x7fffU 
                                                            & (IData)(vlSelf->__PVT__weight_reg)))));
    vlSelf->__PVT__u_mul__DOT__result_sign = (1U & 
                                              ((vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xbU]
                                                [0xcU] 
                                                ^ (IData)(vlSelf->__PVT__weight_reg)) 
                                               >> 0xfU));
    vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0 = (0x1ffU 
                                                  & ((0x1fU 
                                                      & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                         [0xbU]
                                                         [0xcU] 
                                                         >> 0xaU)) 
                                                     + 
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->__PVT__weight_reg) 
                                                         >> 0xaU))));
    vlSelf->__PVT__u_mul__DOT__mant_product = (0x3fffffU 
                                               & ((0x400U 
                                                   | (0x3ffU 
                                                      & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                      [0xbU]
                                                      [0xcU])) 
                                                  * 
                                                  (0x400U 
                                                   | (0x3ffU 
                                                      & (IData)(vlSelf->__PVT__weight_reg)))));
    vlSelf->__PVT__u_mul__DOT__fp32_exp = (0x1ffU & 
                                           ((0x200000U 
                                             & vlSelf->__PVT__u_mul__DOT__mant_product)
                                             ? ((IData)(0x62U) 
                                                + (IData)(vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0))
                                             : ((IData)(0x61U) 
                                                + (IData)(vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0))));
    vlSelf->__PVT__fp32_product = ((((0x1fU == (0x1fU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xbU]
                                                   [0xcU] 
                                                   >> 0xaU))) 
                                     & (0U != (0x3ffU 
                                               & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xbU]
                                               [0xcU]))) 
                                    | (IData)(((0x7c00U 
                                                == 
                                                (0x7c00U 
                                                 & (IData)(vlSelf->__PVT__weight_reg))) 
                                               & (0U 
                                                  != 
                                                  (0x3ffU 
                                                   & (IData)(vlSelf->__PVT__weight_reg))))))
                                    ? 0x7fc00000U : 
                                   ((((0x1fU == (0x1fU 
                                                 & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                    [0xbU]
                                                    [0xcU] 
                                                    >> 0xaU))) 
                                      & (0U == (0x3ffU 
                                                & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xbU]
                                                [0xcU]))) 
                                     | (IData)((0x7c00U 
                                                == 
                                                (0x7fffU 
                                                 & (IData)(vlSelf->__PVT__weight_reg)))))
                                     ? ((IData)(u_mul__DOT____VdfgExtracted_h1f028376__0)
                                         ? 0x7fc00000U
                                         : (0x7f800000U 
                                            | ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                               << 0x1fU)))
                                     : (((IData)(u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                         | (((0U == 
                                              (0x1fU 
                                               & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xbU]
                                                  [0xcU] 
                                                  >> 0xaU))) 
                                             & (0U 
                                                != 
                                                (0x3ffU 
                                                 & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [0xcU]))) 
                                            | (IData)(
                                                      ((0U 
                                                        == 
                                                        (0x7c00U 
                                                         & (IData)(vlSelf->__PVT__weight_reg))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSelf->__PVT__weight_reg)))))))
                                         ? ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                            << 0x1fU)
                                         : ((IData)(
                                                    (((IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp) 
                                                      >> 8U) 
                                                     | (0xffU 
                                                        <= (IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp))))
                                             ? (0x7f800000U 
                                                | ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                   << 0x1fU))
                                             : ((0U 
                                                 == (IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                 << 0x1fU)
                                                 : 
                                                (((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                  << 0x1fU) 
                                                 | ((0x7f800000U 
                                                     & ((IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp) 
                                                        << 0x17U)) 
                                                    | ((0x200000U 
                                                        & vlSelf->__PVT__u_mul__DOT__mant_product)
                                                        ? 
                                                       (0x7ffffcU 
                                                        & (vlSelf->__PVT__u_mul__DOT__mant_product 
                                                           << 2U))
                                                        : 
                                                       (0x7ffff8U 
                                                        & (vlSelf->__PVT__u_mul__DOT__mant_product 
                                                           << 3U))))))))));
    vlSelf->__PVT__u_add__DOT__b_is_inf = (IData)((0x7f800000U 
                                                   == 
                                                   (0x7fffffffU 
                                                    & vlSelf->__PVT__fp32_product)));
    vlSelf->__PVT__u_add__DOT__b_is_zero = (IData)(
                                                   (0U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelf->__PVT__fp32_product)));
    u_add__DOT____VdfgExtracted_hb7d58418__0 = ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSelf->__PVT__fp32_product 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x7fffffU 
                                                 & vlSelf->__PVT__fp32_product)
                                                 : 
                                                (0x800000U 
                                                 | (0x7fffffU 
                                                    & vlSelf->__PVT__fp32_product)));
    vlSelf->__PVT__u_add__DOT__a_is_larger = (((0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xbU]
                                                   [0xcU] 
                                                   >> 0x17U)) 
                                               > (0xffU 
                                                  & (vlSelf->__PVT__fp32_product 
                                                     >> 0x17U))) 
                                              | (((0xffU 
                                                   & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xbU]
                                                      [0xcU] 
                                                      >> 0x17U)) 
                                                  == 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__fp32_product 
                                                      >> 0x17U))) 
                                                 & ((0x7fffffU 
                                                     & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xbU]
                                                     [0xcU]) 
                                                    >= 
                                                    (0x7fffffU 
                                                     & vlSelf->__PVT__fp32_product))));
    if (vlSelf->__PVT__u_add__DOT__a_is_larger) {
        vlSelf->__PVT__u_add__DOT__large_sign = (1U 
                                                 & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xbU]
                                                    [0xcU] 
                                                    >> 0x1fU));
        vlSelf->__PVT__u_add__DOT__large_mant = vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__u_add__DOT__small_mant = u_add__DOT____VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__u_add__DOT__large_exp = (0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xbU]
                                                   [0xcU] 
                                                   >> 0x17U));
        vlSelf->__PVT__u_add__DOT__small_exp = (0xffU 
                                                & (vlSelf->__PVT__fp32_product 
                                                   >> 0x17U));
    } else {
        vlSelf->__PVT__u_add__DOT__large_sign = (1U 
                                                 & (vlSelf->__PVT__fp32_product 
                                                    >> 0x1fU));
        vlSelf->__PVT__u_add__DOT__large_mant = u_add__DOT____VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__u_add__DOT__small_mant = vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__u_add__DOT__large_exp = (0xffU 
                                                & (vlSelf->__PVT__fp32_product 
                                                   >> 0x17U));
        vlSelf->__PVT__u_add__DOT__small_exp = (0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xbU]
                                                   [0xcU] 
                                                   >> 0x17U));
    }
    vlSelf->__PVT__u_add__DOT__exp_diff = (0xffU & 
                                           ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                                            - (IData)(vlSelf->__PVT__u_add__DOT__small_exp)));
    if ((0U == (IData)(vlSelf->__PVT__u_add__DOT__exp_diff))) {
        vlSelf->__PVT__u_add__DOT__aligned_small = 
            (vlSelf->__PVT__u_add__DOT__small_mant 
             << 3U);
        vlSelf->__PVT__u_add__DOT__sticky_bit = 0U;
    } else if ((0x1bU > (IData)(vlSelf->__PVT__u_add__DOT__exp_diff))) {
        vlSelf->__PVT__u_add__DOT__aligned_small = 
            (0x7ffffffU & VL_SHIFTR_III(27,27,8, (vlSelf->__PVT__u_add__DOT__small_mant 
                                                  << 3U), (IData)(vlSelf->__PVT__u_add__DOT__exp_diff)));
        vlSelf->__PVT__u_add__DOT__sticky_bit = (0U 
                                                 != 
                                                 ((vlSelf->__PVT__u_add__DOT__small_mant 
                                                   << 3U) 
                                                  & (VL_SHIFTL_III(27,27,8, (IData)(1U), (IData)(vlSelf->__PVT__u_add__DOT__exp_diff)) 
                                                     - (IData)(1U))));
    } else {
        vlSelf->__PVT__u_add__DOT__aligned_small = 0U;
        vlSelf->__PVT__u_add__DOT__sticky_bit = (0U 
                                                 != vlSelf->__PVT__u_add__DOT__small_mant);
    }
    vlSelf->__PVT__u_add__DOT__aligned_small = ((0x7fffffeU 
                                                 & vlSelf->__PVT__u_add__DOT__aligned_small) 
                                                | (1U 
                                                   & (vlSelf->__PVT__u_add__DOT__aligned_small 
                                                      | (IData)(vlSelf->__PVT__u_add__DOT__sticky_bit))));
    vlSelf->__PVT__u_add__DOT__mant_sum = (0xfffffffU 
                                           & ((1U & 
                                               ((IData)(vlSelf->__PVT__u_add__DOT__large_sign) 
                                                ^ ((IData)(vlSelf->__PVT__u_add__DOT__a_is_larger)
                                                    ? 
                                                   (vlSelf->__PVT__fp32_product 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xbU]
                                                    [0xcU] 
                                                    >> 0x1fU))))
                                               ? ((vlSelf->__PVT__u_add__DOT__large_mant 
                                                   << 3U) 
                                                  - vlSelf->__PVT__u_add__DOT__aligned_small)
                                               : ((vlSelf->__PVT__u_add__DOT__large_mant 
                                                   << 3U) 
                                                  + vlSelf->__PVT__u_add__DOT__aligned_small)));
    vlSelf->__PVT__u_add__DOT__lzc = (((((((((0x8000000U 
                                              == (0x8000000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                             | (0x4000000U 
                                                == 
                                                (0xc000000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                            | (0x2000000U 
                                               == (0xe000000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                           | (0x1000000U 
                                              == (0xf000000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                          | (0x800000U 
                                             == (0xf800000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                         | (0x400000U 
                                            == (0xfc00000U 
                                                & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                        | (0x200000U 
                                           == (0xfe00000U 
                                               & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                       | (0x100000U 
                                          == (0xff00000U 
                                              & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                       ? ((0x8000000U 
                                           == (0x8000000U 
                                               & vlSelf->__PVT__u_add__DOT__mant_sum))
                                           ? 0U : (
                                                   (0x4000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0U
                                                    : 
                                                   ((0x2000000U 
                                                     == 
                                                     (0xe000000U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 1U
                                                     : 
                                                    ((0x1000000U 
                                                      == 
                                                      (0xf000000U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 2U
                                                      : 
                                                     ((0x800000U 
                                                       == 
                                                       (0xf800000U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 3U
                                                       : 
                                                      ((0x400000U 
                                                        == 
                                                        (0xfc00000U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 4U
                                                        : 
                                                       ((0x200000U 
                                                         == 
                                                         (0xfe00000U 
                                                          & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                         ? 5U
                                                         : 6U)))))))
                                       : (((((((((0x80000U 
                                                  == 
                                                  (0xff80000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                                 | (0x40000U 
                                                    == 
                                                    (0xffc0000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                | (0x20000U 
                                                   == 
                                                   (0xffe0000U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                               | (0x10000U 
                                                  == 
                                                  (0xfff0000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                              | (0x8000U 
                                                 == 
                                                 (0xfff8000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                             | (0x4000U 
                                                == 
                                                (0xfffc000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                            | (0x2000U 
                                               == (0xfffe000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                           | (0x1000U 
                                              == (0xffff000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                           ? ((0x80000U 
                                               == (0xff80000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))
                                               ? 7U
                                               : ((0x40000U 
                                                   == 
                                                   (0xffc0000U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 8U
                                                   : 
                                                  ((0x20000U 
                                                    == 
                                                    (0xffe0000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 9U
                                                    : 
                                                   ((0x10000U 
                                                     == 
                                                     (0xfff0000U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0xaU
                                                     : 
                                                    ((0x8000U 
                                                      == 
                                                      (0xfff8000U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 0xbU
                                                      : 
                                                     ((0x4000U 
                                                       == 
                                                       (0xfffc000U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 0xcU
                                                       : 
                                                      ((0x2000U 
                                                        == 
                                                        (0xfffe000U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 0xdU
                                                        : 0xeU)))))))
                                           : ((((((
                                                   (((0x800U 
                                                      == 
                                                      (0xffff800U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                                     | (0x400U 
                                                        == 
                                                        (0xffffc00U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                    | (0x200U 
                                                       == 
                                                       (0xffffe00U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                   | (0x100U 
                                                      == 
                                                      (0xfffff00U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                  | (0x80U 
                                                     == 
                                                     (0xfffff80U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                 | (0x40U 
                                                    == 
                                                    (0xfffffc0U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                | (0x20U 
                                                   == 
                                                   (0xfffffe0U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                               | (0x10U 
                                                  == 
                                                  (0xffffff0U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                               ? ((0x800U 
                                                   == 
                                                   (0xffff800U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 0xfU
                                                   : 
                                                  ((0x400U 
                                                    == 
                                                    (0xffffc00U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0x10U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0xffffe00U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0x11U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0xfffff00U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 0x12U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0xfffff80U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 0x13U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0xfffffc0U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 0x14U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0xfffffe0U 
                                                          & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                         ? 0x15U
                                                         : 0x16U)))))))
                                               : ((8U 
                                                   == 
                                                   (0xffffff8U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 0x17U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0xffffffcU 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0x18U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xffffffeU 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0x19U
                                                     : 
                                                    ((1U 
                                                      == vlSelf->__PVT__u_add__DOT__mant_sum)
                                                      ? 0x1aU
                                                      : 0x1bU)))))));
    if ((0x8000000U & vlSelf->__PVT__u_add__DOT__mant_sum)) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & (vlSelf->__PVT__u_add__DOT__mant_sum 
                                                   >> 1U));
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__u_add__DOT__large_exp)));
    } else if ((0x4000000U & vlSelf->__PVT__u_add__DOT__mant_sum)) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & vlSelf->__PVT__u_add__DOT__mant_sum);
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & (IData)(vlSelf->__PVT__u_add__DOT__large_exp));
    } else if (((0x1bU > (IData)(vlSelf->__PVT__u_add__DOT__lzc)) 
                & ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                   > (IData)(vlSelf->__PVT__u_add__DOT__lzc)))) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & (vlSelf->__PVT__u_add__DOT__mant_sum 
                                                   << (IData)(vlSelf->__PVT__u_add__DOT__lzc)));
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                                                  - (IData)(vlSelf->__PVT__u_add__DOT__lzc)));
    } else {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & 0U);
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & 0U);
    }
    vlSelf->__PVT__u_add__DOT__mant_rounded = (0x1ffffffU 
                                               & ((0xffffffU 
                                                   & (vlSelf->__PVT__u_add__DOT__norm_mant 
                                                      >> 3U)) 
                                                  + 
                                                  (1U 
                                                   & ((vlSelf->__PVT__u_add__DOT__norm_mant 
                                                       >> 2U) 
                                                      & (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xbU 
                                                                  & vlSelf->__PVT__u_add__DOT__norm_mant)))))));
    if ((0x1000000U & vlSelf->__PVT__u_add__DOT__mant_rounded)) {
        vlSelf->__PVT__u_add__DOT__final_exp = (0xffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__u_add__DOT__norm_exp)));
        vlSelf->__PVT__u_add__DOT__rounded_mant = (0x7fffffU 
                                                   & (vlSelf->__PVT__u_add__DOT__mant_rounded 
                                                      >> 1U));
    } else {
        vlSelf->__PVT__u_add__DOT__final_exp = vlSelf->__PVT__u_add__DOT__norm_exp;
        vlSelf->__PVT__u_add__DOT__rounded_mant = (0x7fffffU 
                                                   & vlSelf->__PVT__u_add__DOT__mant_rounded);
    }
}

VL_INLINE_OPT void Vnpu_system_top_mac_pe___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__0(Vnpu_system_top_mac_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnpu_system_top_mac_pe___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__0\n"); );
    // Body
    if (vlSymsp->TOP.rst_n) {
        if (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT____Vcellinp__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__weight_load_en) {
            vlSelf->__PVT__weight_reg = (0xffffU & 
                                         vlSymsp->TOP.rdata[6U]);
        }
        vlSelf->psum_out = ((((0xffU == (0xffU & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xbU]
                                                  [0xcU] 
                                                  >> 0x17U))) 
                              & (0U != (0x7fffffU & 
                                        vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                        [0xbU][0xcU]))) 
                             | (IData)(((0x7f800000U 
                                         == (0x7f800000U 
                                             & vlSelf->__PVT__fp32_product)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSelf->__PVT__fp32_product)))))
                             ? 0x7fc00000U : (((IData)(vlSelf->__PVT__u_add__DOT__a_is_inf) 
                                               & (IData)(vlSelf->__PVT__u_add__DOT__b_is_inf))
                                               ? ((
                                                   (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xbU]
                                                    [0xcU] 
                                                    >> 0x1fU) 
                                                   != 
                                                   (vlSelf->__PVT__fp32_product 
                                                    >> 0x1fU))
                                                   ? 0x7fc00000U
                                                   : 
                                                  (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xbU]
                                                      [0xcU])))
                                               : ((IData)(vlSelf->__PVT__u_add__DOT__a_is_inf)
                                                   ? 
                                                  (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xbU]
                                                      [0xcU]))
                                                   : 
                                                  ((IData)(vlSelf->__PVT__u_add__DOT__b_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->__PVT__fp32_product))
                                                    : 
                                                   (((IData)(vlSelf->__PVT__u_add__DOT__a_is_zero) 
                                                     & (IData)(vlSelf->__PVT__u_add__DOT__b_is_zero))
                                                     ? 
                                                    (0x80000000U 
                                                     & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                        [0xbU]
                                                        [0xcU] 
                                                        & vlSelf->__PVT__fp32_product))
                                                     : 
                                                    ((IData)(vlSelf->__PVT__u_add__DOT__a_is_zero)
                                                      ? vlSelf->__PVT__fp32_product
                                                      : 
                                                     ((IData)(vlSelf->__PVT__u_add__DOT__b_is_zero)
                                                       ? 
                                                      vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xbU]
                                                      [0xcU]
                                                       : 
                                                      (((0U 
                                                         == (IData)(vlSelf->__PVT__u_add__DOT__norm_exp)) 
                                                        & (0U 
                                                           == vlSelf->__PVT__u_add__DOT__norm_mant))
                                                        ? 0U
                                                        : 
                                                       ((0xffU 
                                                         <= (IData)(vlSelf->__PVT__u_add__DOT__final_exp))
                                                         ? 
                                                        (0x7f800000U 
                                                         | ((IData)(vlSelf->__PVT__u_add__DOT__large_sign) 
                                                            << 0x1fU))
                                                         : 
                                                        (((IData)(vlSelf->__PVT__u_add__DOT__large_sign) 
                                                          << 0x1fU) 
                                                         | (((IData)(vlSelf->__PVT__u_add__DOT__final_exp) 
                                                             << 0x17U) 
                                                            | vlSelf->__PVT__u_add__DOT__rounded_mant)))))))))));
        vlSelf->act_out = vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xbU][0xcU];
    } else {
        vlSelf->__PVT__weight_reg = 0U;
        vlSelf->psum_out = 0U;
        vlSelf->act_out = 0U;
    }
}

VL_INLINE_OPT void Vnpu_system_top_mac_pe___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__1(Vnpu_system_top_mac_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnpu_system_top_mac_pe___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__1\n"); );
    // Init
    CData/*0:0*/ u_mul__DOT____VdfgExtracted_h1f028376__0;
    u_mul__DOT____VdfgExtracted_h1f028376__0 = 0;
    IData/*23:0*/ u_add__DOT____VdfgExtracted_hb7d58418__0;
    u_add__DOT____VdfgExtracted_hb7d58418__0 = 0;
    // Body
    vlSelf->__PVT__u_add__DOT__a_is_inf = ((0xffU == 
                                            (0xffU 
                                             & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xbU]
                                                [0xcU] 
                                                >> 0x17U))) 
                                           & (0U == 
                                              (0x7fffffU 
                                               & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                               [0xbU]
                                               [0xcU])));
    if ((0U == (0xffU & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                         [0xbU][0xcU] >> 0x17U)))) {
        vlSelf->__PVT__u_add__DOT__a_is_zero = (0U 
                                                == 
                                                (0x7fffffU 
                                                 & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                 [0xbU]
                                                 [0xcU]));
        vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0 
            = (0x7fffffU & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xbU][0xcU]);
    } else {
        vlSelf->__PVT__u_add__DOT__a_is_zero = 0U;
        vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0 
            = (0x800000U | (0x7fffffU & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                            [0xbU][0xcU]));
    }
    u_mul__DOT____VdfgExtracted_h1f028376__0 = (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                      [0xbU]
                                                      [0xcU] 
                                                      >> 0xaU))) 
                                                 & (0U 
                                                    == 
                                                    (0x3ffU 
                                                     & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                     [0xbU]
                                                     [0xcU]))) 
                                                | (IData)(
                                                          (0U 
                                                           == 
                                                           (0x7fffU 
                                                            & (IData)(vlSelf->__PVT__weight_reg)))));
    vlSelf->__PVT__u_mul__DOT__result_sign = (1U & 
                                              ((vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xbU]
                                                [0xcU] 
                                                ^ (IData)(vlSelf->__PVT__weight_reg)) 
                                               >> 0xfU));
    vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0 = (0x1ffU 
                                                  & ((0x1fU 
                                                      & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                         [0xbU]
                                                         [0xcU] 
                                                         >> 0xaU)) 
                                                     + 
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->__PVT__weight_reg) 
                                                         >> 0xaU))));
    vlSelf->__PVT__u_mul__DOT__mant_product = (0x3fffffU 
                                               & ((0x400U 
                                                   | (0x3ffU 
                                                      & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                      [0xbU]
                                                      [0xcU])) 
                                                  * 
                                                  (0x400U 
                                                   | (0x3ffU 
                                                      & (IData)(vlSelf->__PVT__weight_reg)))));
    vlSelf->__PVT__u_mul__DOT__fp32_exp = (0x1ffU & 
                                           ((0x200000U 
                                             & vlSelf->__PVT__u_mul__DOT__mant_product)
                                             ? ((IData)(0x62U) 
                                                + (IData)(vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0))
                                             : ((IData)(0x61U) 
                                                + (IData)(vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0))));
    vlSelf->__PVT__fp32_product = ((((0x1fU == (0x1fU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xbU]
                                                   [0xcU] 
                                                   >> 0xaU))) 
                                     & (0U != (0x3ffU 
                                               & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xbU]
                                               [0xcU]))) 
                                    | (IData)(((0x7c00U 
                                                == 
                                                (0x7c00U 
                                                 & (IData)(vlSelf->__PVT__weight_reg))) 
                                               & (0U 
                                                  != 
                                                  (0x3ffU 
                                                   & (IData)(vlSelf->__PVT__weight_reg))))))
                                    ? 0x7fc00000U : 
                                   ((((0x1fU == (0x1fU 
                                                 & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                    [0xbU]
                                                    [0xcU] 
                                                    >> 0xaU))) 
                                      & (0U == (0x3ffU 
                                                & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xbU]
                                                [0xcU]))) 
                                     | (IData)((0x7c00U 
                                                == 
                                                (0x7fffU 
                                                 & (IData)(vlSelf->__PVT__weight_reg)))))
                                     ? ((IData)(u_mul__DOT____VdfgExtracted_h1f028376__0)
                                         ? 0x7fc00000U
                                         : (0x7f800000U 
                                            | ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                               << 0x1fU)))
                                     : (((IData)(u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                         | (((0U == 
                                              (0x1fU 
                                               & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xbU]
                                                  [0xcU] 
                                                  >> 0xaU))) 
                                             & (0U 
                                                != 
                                                (0x3ffU 
                                                 & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [0xcU]))) 
                                            | (IData)(
                                                      ((0U 
                                                        == 
                                                        (0x7c00U 
                                                         & (IData)(vlSelf->__PVT__weight_reg))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSelf->__PVT__weight_reg)))))))
                                         ? ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                            << 0x1fU)
                                         : ((IData)(
                                                    (((IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp) 
                                                      >> 8U) 
                                                     | (0xffU 
                                                        <= (IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp))))
                                             ? (0x7f800000U 
                                                | ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                   << 0x1fU))
                                             : ((0U 
                                                 == (IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                 << 0x1fU)
                                                 : 
                                                (((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                  << 0x1fU) 
                                                 | ((0x7f800000U 
                                                     & ((IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp) 
                                                        << 0x17U)) 
                                                    | ((0x200000U 
                                                        & vlSelf->__PVT__u_mul__DOT__mant_product)
                                                        ? 
                                                       (0x7ffffcU 
                                                        & (vlSelf->__PVT__u_mul__DOT__mant_product 
                                                           << 2U))
                                                        : 
                                                       (0x7ffff8U 
                                                        & (vlSelf->__PVT__u_mul__DOT__mant_product 
                                                           << 3U))))))))));
    vlSelf->__PVT__u_add__DOT__b_is_inf = (IData)((0x7f800000U 
                                                   == 
                                                   (0x7fffffffU 
                                                    & vlSelf->__PVT__fp32_product)));
    vlSelf->__PVT__u_add__DOT__b_is_zero = (IData)(
                                                   (0U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelf->__PVT__fp32_product)));
    u_add__DOT____VdfgExtracted_hb7d58418__0 = ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSelf->__PVT__fp32_product 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x7fffffU 
                                                 & vlSelf->__PVT__fp32_product)
                                                 : 
                                                (0x800000U 
                                                 | (0x7fffffU 
                                                    & vlSelf->__PVT__fp32_product)));
    vlSelf->__PVT__u_add__DOT__a_is_larger = (((0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xbU]
                                                   [0xcU] 
                                                   >> 0x17U)) 
                                               > (0xffU 
                                                  & (vlSelf->__PVT__fp32_product 
                                                     >> 0x17U))) 
                                              | (((0xffU 
                                                   & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xbU]
                                                      [0xcU] 
                                                      >> 0x17U)) 
                                                  == 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__fp32_product 
                                                      >> 0x17U))) 
                                                 & ((0x7fffffU 
                                                     & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xbU]
                                                     [0xcU]) 
                                                    >= 
                                                    (0x7fffffU 
                                                     & vlSelf->__PVT__fp32_product))));
    if (vlSelf->__PVT__u_add__DOT__a_is_larger) {
        vlSelf->__PVT__u_add__DOT__large_sign = (1U 
                                                 & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xbU]
                                                    [0xcU] 
                                                    >> 0x1fU));
        vlSelf->__PVT__u_add__DOT__large_mant = vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__u_add__DOT__small_mant = u_add__DOT____VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__u_add__DOT__large_exp = (0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xbU]
                                                   [0xcU] 
                                                   >> 0x17U));
        vlSelf->__PVT__u_add__DOT__small_exp = (0xffU 
                                                & (vlSelf->__PVT__fp32_product 
                                                   >> 0x17U));
    } else {
        vlSelf->__PVT__u_add__DOT__large_sign = (1U 
                                                 & (vlSelf->__PVT__fp32_product 
                                                    >> 0x1fU));
        vlSelf->__PVT__u_add__DOT__large_mant = u_add__DOT____VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__u_add__DOT__small_mant = vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__u_add__DOT__large_exp = (0xffU 
                                                & (vlSelf->__PVT__fp32_product 
                                                   >> 0x17U));
        vlSelf->__PVT__u_add__DOT__small_exp = (0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xbU]
                                                   [0xcU] 
                                                   >> 0x17U));
    }
    vlSelf->__PVT__u_add__DOT__exp_diff = (0xffU & 
                                           ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                                            - (IData)(vlSelf->__PVT__u_add__DOT__small_exp)));
    if ((0U == (IData)(vlSelf->__PVT__u_add__DOT__exp_diff))) {
        vlSelf->__PVT__u_add__DOT__aligned_small = 
            (vlSelf->__PVT__u_add__DOT__small_mant 
             << 3U);
        vlSelf->__PVT__u_add__DOT__sticky_bit = 0U;
    } else if ((0x1bU > (IData)(vlSelf->__PVT__u_add__DOT__exp_diff))) {
        vlSelf->__PVT__u_add__DOT__aligned_small = 
            (0x7ffffffU & VL_SHIFTR_III(27,27,8, (vlSelf->__PVT__u_add__DOT__small_mant 
                                                  << 3U), (IData)(vlSelf->__PVT__u_add__DOT__exp_diff)));
        vlSelf->__PVT__u_add__DOT__sticky_bit = (0U 
                                                 != 
                                                 ((vlSelf->__PVT__u_add__DOT__small_mant 
                                                   << 3U) 
                                                  & (VL_SHIFTL_III(27,27,8, (IData)(1U), (IData)(vlSelf->__PVT__u_add__DOT__exp_diff)) 
                                                     - (IData)(1U))));
    } else {
        vlSelf->__PVT__u_add__DOT__aligned_small = 0U;
        vlSelf->__PVT__u_add__DOT__sticky_bit = (0U 
                                                 != vlSelf->__PVT__u_add__DOT__small_mant);
    }
    vlSelf->__PVT__u_add__DOT__aligned_small = ((0x7fffffeU 
                                                 & vlSelf->__PVT__u_add__DOT__aligned_small) 
                                                | (1U 
                                                   & (vlSelf->__PVT__u_add__DOT__aligned_small 
                                                      | (IData)(vlSelf->__PVT__u_add__DOT__sticky_bit))));
    vlSelf->__PVT__u_add__DOT__mant_sum = (0xfffffffU 
                                           & ((1U & 
                                               ((IData)(vlSelf->__PVT__u_add__DOT__large_sign) 
                                                ^ ((IData)(vlSelf->__PVT__u_add__DOT__a_is_larger)
                                                    ? 
                                                   (vlSelf->__PVT__fp32_product 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xbU]
                                                    [0xcU] 
                                                    >> 0x1fU))))
                                               ? ((vlSelf->__PVT__u_add__DOT__large_mant 
                                                   << 3U) 
                                                  - vlSelf->__PVT__u_add__DOT__aligned_small)
                                               : ((vlSelf->__PVT__u_add__DOT__large_mant 
                                                   << 3U) 
                                                  + vlSelf->__PVT__u_add__DOT__aligned_small)));
    vlSelf->__PVT__u_add__DOT__lzc = (((((((((0x8000000U 
                                              == (0x8000000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                             | (0x4000000U 
                                                == 
                                                (0xc000000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                            | (0x2000000U 
                                               == (0xe000000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                           | (0x1000000U 
                                              == (0xf000000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                          | (0x800000U 
                                             == (0xf800000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                         | (0x400000U 
                                            == (0xfc00000U 
                                                & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                        | (0x200000U 
                                           == (0xfe00000U 
                                               & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                       | (0x100000U 
                                          == (0xff00000U 
                                              & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                       ? ((0x8000000U 
                                           == (0x8000000U 
                                               & vlSelf->__PVT__u_add__DOT__mant_sum))
                                           ? 0U : (
                                                   (0x4000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0U
                                                    : 
                                                   ((0x2000000U 
                                                     == 
                                                     (0xe000000U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 1U
                                                     : 
                                                    ((0x1000000U 
                                                      == 
                                                      (0xf000000U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 2U
                                                      : 
                                                     ((0x800000U 
                                                       == 
                                                       (0xf800000U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 3U
                                                       : 
                                                      ((0x400000U 
                                                        == 
                                                        (0xfc00000U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 4U
                                                        : 
                                                       ((0x200000U 
                                                         == 
                                                         (0xfe00000U 
                                                          & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                         ? 5U
                                                         : 6U)))))))
                                       : (((((((((0x80000U 
                                                  == 
                                                  (0xff80000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                                 | (0x40000U 
                                                    == 
                                                    (0xffc0000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                | (0x20000U 
                                                   == 
                                                   (0xffe0000U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                               | (0x10000U 
                                                  == 
                                                  (0xfff0000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                              | (0x8000U 
                                                 == 
                                                 (0xfff8000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                             | (0x4000U 
                                                == 
                                                (0xfffc000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                            | (0x2000U 
                                               == (0xfffe000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                           | (0x1000U 
                                              == (0xffff000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                           ? ((0x80000U 
                                               == (0xff80000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))
                                               ? 7U
                                               : ((0x40000U 
                                                   == 
                                                   (0xffc0000U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 8U
                                                   : 
                                                  ((0x20000U 
                                                    == 
                                                    (0xffe0000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 9U
                                                    : 
                                                   ((0x10000U 
                                                     == 
                                                     (0xfff0000U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0xaU
                                                     : 
                                                    ((0x8000U 
                                                      == 
                                                      (0xfff8000U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 0xbU
                                                      : 
                                                     ((0x4000U 
                                                       == 
                                                       (0xfffc000U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 0xcU
                                                       : 
                                                      ((0x2000U 
                                                        == 
                                                        (0xfffe000U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 0xdU
                                                        : 0xeU)))))))
                                           : ((((((
                                                   (((0x800U 
                                                      == 
                                                      (0xffff800U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                                     | (0x400U 
                                                        == 
                                                        (0xffffc00U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                    | (0x200U 
                                                       == 
                                                       (0xffffe00U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                   | (0x100U 
                                                      == 
                                                      (0xfffff00U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                  | (0x80U 
                                                     == 
                                                     (0xfffff80U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                 | (0x40U 
                                                    == 
                                                    (0xfffffc0U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                | (0x20U 
                                                   == 
                                                   (0xfffffe0U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                               | (0x10U 
                                                  == 
                                                  (0xffffff0U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                               ? ((0x800U 
                                                   == 
                                                   (0xffff800U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 0xfU
                                                   : 
                                                  ((0x400U 
                                                    == 
                                                    (0xffffc00U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0x10U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0xffffe00U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0x11U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0xfffff00U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 0x12U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0xfffff80U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 0x13U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0xfffffc0U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 0x14U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0xfffffe0U 
                                                          & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                         ? 0x15U
                                                         : 0x16U)))))))
                                               : ((8U 
                                                   == 
                                                   (0xffffff8U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 0x17U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0xffffffcU 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0x18U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xffffffeU 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0x19U
                                                     : 
                                                    ((1U 
                                                      == vlSelf->__PVT__u_add__DOT__mant_sum)
                                                      ? 0x1aU
                                                      : 0x1bU)))))));
    if ((0x8000000U & vlSelf->__PVT__u_add__DOT__mant_sum)) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & (vlSelf->__PVT__u_add__DOT__mant_sum 
                                                   >> 1U));
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__u_add__DOT__large_exp)));
    } else if ((0x4000000U & vlSelf->__PVT__u_add__DOT__mant_sum)) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & vlSelf->__PVT__u_add__DOT__mant_sum);
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & (IData)(vlSelf->__PVT__u_add__DOT__large_exp));
    } else if (((0x1bU > (IData)(vlSelf->__PVT__u_add__DOT__lzc)) 
                & ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                   > (IData)(vlSelf->__PVT__u_add__DOT__lzc)))) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & (vlSelf->__PVT__u_add__DOT__mant_sum 
                                                   << (IData)(vlSelf->__PVT__u_add__DOT__lzc)));
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                                                  - (IData)(vlSelf->__PVT__u_add__DOT__lzc)));
    } else {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & 0U);
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & 0U);
    }
    vlSelf->__PVT__u_add__DOT__mant_rounded = (0x1ffffffU 
                                               & ((0xffffffU 
                                                   & (vlSelf->__PVT__u_add__DOT__norm_mant 
                                                      >> 3U)) 
                                                  + 
                                                  (1U 
                                                   & ((vlSelf->__PVT__u_add__DOT__norm_mant 
                                                       >> 2U) 
                                                      & (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xbU 
                                                                  & vlSelf->__PVT__u_add__DOT__norm_mant)))))));
    if ((0x1000000U & vlSelf->__PVT__u_add__DOT__mant_rounded)) {
        vlSelf->__PVT__u_add__DOT__final_exp = (0xffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__u_add__DOT__norm_exp)));
        vlSelf->__PVT__u_add__DOT__rounded_mant = (0x7fffffU 
                                                   & (vlSelf->__PVT__u_add__DOT__mant_rounded 
                                                      >> 1U));
    } else {
        vlSelf->__PVT__u_add__DOT__final_exp = vlSelf->__PVT__u_add__DOT__norm_exp;
        vlSelf->__PVT__u_add__DOT__rounded_mant = (0x7fffffU 
                                                   & vlSelf->__PVT__u_add__DOT__mant_rounded);
    }
}

VL_INLINE_OPT void Vnpu_system_top_mac_pe___ico_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__0(Vnpu_system_top_mac_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnpu_system_top_mac_pe___ico_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__0\n"); );
    // Init
    CData/*0:0*/ u_mul__DOT____VdfgExtracted_h1f028376__0;
    u_mul__DOT____VdfgExtracted_h1f028376__0 = 0;
    IData/*23:0*/ u_add__DOT____VdfgExtracted_hb7d58418__0;
    u_add__DOT____VdfgExtracted_hb7d58418__0 = 0;
    // Body
    u_mul__DOT____VdfgExtracted_h1f028376__0 = (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                      [0xbU]
                                                      [0xdU] 
                                                      >> 0xaU))) 
                                                 & (0U 
                                                    == 
                                                    (0x3ffU 
                                                     & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                     [0xbU]
                                                     [0xdU]))) 
                                                | (IData)(
                                                          (0U 
                                                           == 
                                                           (0x7fffU 
                                                            & (IData)(vlSelf->__PVT__weight_reg)))));
    vlSelf->__PVT__u_mul__DOT__result_sign = (1U & 
                                              ((vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xbU]
                                                [0xdU] 
                                                ^ (IData)(vlSelf->__PVT__weight_reg)) 
                                               >> 0xfU));
    vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0 = (0x1ffU 
                                                  & ((0x1fU 
                                                      & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                         [0xbU]
                                                         [0xdU] 
                                                         >> 0xaU)) 
                                                     + 
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->__PVT__weight_reg) 
                                                         >> 0xaU))));
    vlSelf->__PVT__u_mul__DOT__mant_product = (0x3fffffU 
                                               & ((0x400U 
                                                   | (0x3ffU 
                                                      & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                      [0xbU]
                                                      [0xdU])) 
                                                  * 
                                                  (0x400U 
                                                   | (0x3ffU 
                                                      & (IData)(vlSelf->__PVT__weight_reg)))));
    vlSelf->__PVT__u_mul__DOT__fp32_exp = (0x1ffU & 
                                           ((0x200000U 
                                             & vlSelf->__PVT__u_mul__DOT__mant_product)
                                             ? ((IData)(0x62U) 
                                                + (IData)(vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0))
                                             : ((IData)(0x61U) 
                                                + (IData)(vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0))));
    vlSelf->__PVT__fp32_product = ((((0x1fU == (0x1fU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xbU]
                                                   [0xdU] 
                                                   >> 0xaU))) 
                                     & (0U != (0x3ffU 
                                               & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xbU]
                                               [0xdU]))) 
                                    | (IData)(((0x7c00U 
                                                == 
                                                (0x7c00U 
                                                 & (IData)(vlSelf->__PVT__weight_reg))) 
                                               & (0U 
                                                  != 
                                                  (0x3ffU 
                                                   & (IData)(vlSelf->__PVT__weight_reg))))))
                                    ? 0x7fc00000U : 
                                   ((((0x1fU == (0x1fU 
                                                 & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                    [0xbU]
                                                    [0xdU] 
                                                    >> 0xaU))) 
                                      & (0U == (0x3ffU 
                                                & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xbU]
                                                [0xdU]))) 
                                     | (IData)((0x7c00U 
                                                == 
                                                (0x7fffU 
                                                 & (IData)(vlSelf->__PVT__weight_reg)))))
                                     ? ((IData)(u_mul__DOT____VdfgExtracted_h1f028376__0)
                                         ? 0x7fc00000U
                                         : (0x7f800000U 
                                            | ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                               << 0x1fU)))
                                     : (((IData)(u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                         | (((0U == 
                                              (0x1fU 
                                               & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xbU]
                                                  [0xdU] 
                                                  >> 0xaU))) 
                                             & (0U 
                                                != 
                                                (0x3ffU 
                                                 & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [0xdU]))) 
                                            | (IData)(
                                                      ((0U 
                                                        == 
                                                        (0x7c00U 
                                                         & (IData)(vlSelf->__PVT__weight_reg))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSelf->__PVT__weight_reg)))))))
                                         ? ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                            << 0x1fU)
                                         : ((IData)(
                                                    (((IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp) 
                                                      >> 8U) 
                                                     | (0xffU 
                                                        <= (IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp))))
                                             ? (0x7f800000U 
                                                | ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                   << 0x1fU))
                                             : ((0U 
                                                 == (IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                 << 0x1fU)
                                                 : 
                                                (((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                  << 0x1fU) 
                                                 | ((0x7f800000U 
                                                     & ((IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp) 
                                                        << 0x17U)) 
                                                    | ((0x200000U 
                                                        & vlSelf->__PVT__u_mul__DOT__mant_product)
                                                        ? 
                                                       (0x7ffffcU 
                                                        & (vlSelf->__PVT__u_mul__DOT__mant_product 
                                                           << 2U))
                                                        : 
                                                       (0x7ffff8U 
                                                        & (vlSelf->__PVT__u_mul__DOT__mant_product 
                                                           << 3U))))))))));
    vlSelf->__PVT__u_add__DOT__b_is_inf = (IData)((0x7f800000U 
                                                   == 
                                                   (0x7fffffffU 
                                                    & vlSelf->__PVT__fp32_product)));
    vlSelf->__PVT__u_add__DOT__b_is_zero = (IData)(
                                                   (0U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelf->__PVT__fp32_product)));
    u_add__DOT____VdfgExtracted_hb7d58418__0 = ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSelf->__PVT__fp32_product 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x7fffffU 
                                                 & vlSelf->__PVT__fp32_product)
                                                 : 
                                                (0x800000U 
                                                 | (0x7fffffU 
                                                    & vlSelf->__PVT__fp32_product)));
    vlSelf->__PVT__u_add__DOT__a_is_larger = (((0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xbU]
                                                   [0xdU] 
                                                   >> 0x17U)) 
                                               > (0xffU 
                                                  & (vlSelf->__PVT__fp32_product 
                                                     >> 0x17U))) 
                                              | (((0xffU 
                                                   & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xbU]
                                                      [0xdU] 
                                                      >> 0x17U)) 
                                                  == 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__fp32_product 
                                                      >> 0x17U))) 
                                                 & ((0x7fffffU 
                                                     & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xbU]
                                                     [0xdU]) 
                                                    >= 
                                                    (0x7fffffU 
                                                     & vlSelf->__PVT__fp32_product))));
    if (vlSelf->__PVT__u_add__DOT__a_is_larger) {
        vlSelf->__PVT__u_add__DOT__large_sign = (1U 
                                                 & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xbU]
                                                    [0xdU] 
                                                    >> 0x1fU));
        vlSelf->__PVT__u_add__DOT__large_mant = vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__u_add__DOT__small_mant = u_add__DOT____VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__u_add__DOT__large_exp = (0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xbU]
                                                   [0xdU] 
                                                   >> 0x17U));
        vlSelf->__PVT__u_add__DOT__small_exp = (0xffU 
                                                & (vlSelf->__PVT__fp32_product 
                                                   >> 0x17U));
    } else {
        vlSelf->__PVT__u_add__DOT__large_sign = (1U 
                                                 & (vlSelf->__PVT__fp32_product 
                                                    >> 0x1fU));
        vlSelf->__PVT__u_add__DOT__large_mant = u_add__DOT____VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__u_add__DOT__small_mant = vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__u_add__DOT__large_exp = (0xffU 
                                                & (vlSelf->__PVT__fp32_product 
                                                   >> 0x17U));
        vlSelf->__PVT__u_add__DOT__small_exp = (0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xbU]
                                                   [0xdU] 
                                                   >> 0x17U));
    }
    vlSelf->__PVT__u_add__DOT__exp_diff = (0xffU & 
                                           ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                                            - (IData)(vlSelf->__PVT__u_add__DOT__small_exp)));
    if ((0U == (IData)(vlSelf->__PVT__u_add__DOT__exp_diff))) {
        vlSelf->__PVT__u_add__DOT__aligned_small = 
            (vlSelf->__PVT__u_add__DOT__small_mant 
             << 3U);
        vlSelf->__PVT__u_add__DOT__sticky_bit = 0U;
    } else if ((0x1bU > (IData)(vlSelf->__PVT__u_add__DOT__exp_diff))) {
        vlSelf->__PVT__u_add__DOT__aligned_small = 
            (0x7ffffffU & VL_SHIFTR_III(27,27,8, (vlSelf->__PVT__u_add__DOT__small_mant 
                                                  << 3U), (IData)(vlSelf->__PVT__u_add__DOT__exp_diff)));
        vlSelf->__PVT__u_add__DOT__sticky_bit = (0U 
                                                 != 
                                                 ((vlSelf->__PVT__u_add__DOT__small_mant 
                                                   << 3U) 
                                                  & (VL_SHIFTL_III(27,27,8, (IData)(1U), (IData)(vlSelf->__PVT__u_add__DOT__exp_diff)) 
                                                     - (IData)(1U))));
    } else {
        vlSelf->__PVT__u_add__DOT__aligned_small = 0U;
        vlSelf->__PVT__u_add__DOT__sticky_bit = (0U 
                                                 != vlSelf->__PVT__u_add__DOT__small_mant);
    }
    vlSelf->__PVT__u_add__DOT__aligned_small = ((0x7fffffeU 
                                                 & vlSelf->__PVT__u_add__DOT__aligned_small) 
                                                | (1U 
                                                   & (vlSelf->__PVT__u_add__DOT__aligned_small 
                                                      | (IData)(vlSelf->__PVT__u_add__DOT__sticky_bit))));
    vlSelf->__PVT__u_add__DOT__mant_sum = (0xfffffffU 
                                           & ((1U & 
                                               ((IData)(vlSelf->__PVT__u_add__DOT__large_sign) 
                                                ^ ((IData)(vlSelf->__PVT__u_add__DOT__a_is_larger)
                                                    ? 
                                                   (vlSelf->__PVT__fp32_product 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xbU]
                                                    [0xdU] 
                                                    >> 0x1fU))))
                                               ? ((vlSelf->__PVT__u_add__DOT__large_mant 
                                                   << 3U) 
                                                  - vlSelf->__PVT__u_add__DOT__aligned_small)
                                               : ((vlSelf->__PVT__u_add__DOT__large_mant 
                                                   << 3U) 
                                                  + vlSelf->__PVT__u_add__DOT__aligned_small)));
    vlSelf->__PVT__u_add__DOT__lzc = (((((((((0x8000000U 
                                              == (0x8000000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                             | (0x4000000U 
                                                == 
                                                (0xc000000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                            | (0x2000000U 
                                               == (0xe000000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                           | (0x1000000U 
                                              == (0xf000000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                          | (0x800000U 
                                             == (0xf800000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                         | (0x400000U 
                                            == (0xfc00000U 
                                                & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                        | (0x200000U 
                                           == (0xfe00000U 
                                               & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                       | (0x100000U 
                                          == (0xff00000U 
                                              & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                       ? ((0x8000000U 
                                           == (0x8000000U 
                                               & vlSelf->__PVT__u_add__DOT__mant_sum))
                                           ? 0U : (
                                                   (0x4000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0U
                                                    : 
                                                   ((0x2000000U 
                                                     == 
                                                     (0xe000000U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 1U
                                                     : 
                                                    ((0x1000000U 
                                                      == 
                                                      (0xf000000U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 2U
                                                      : 
                                                     ((0x800000U 
                                                       == 
                                                       (0xf800000U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 3U
                                                       : 
                                                      ((0x400000U 
                                                        == 
                                                        (0xfc00000U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 4U
                                                        : 
                                                       ((0x200000U 
                                                         == 
                                                         (0xfe00000U 
                                                          & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                         ? 5U
                                                         : 6U)))))))
                                       : (((((((((0x80000U 
                                                  == 
                                                  (0xff80000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                                 | (0x40000U 
                                                    == 
                                                    (0xffc0000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                | (0x20000U 
                                                   == 
                                                   (0xffe0000U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                               | (0x10000U 
                                                  == 
                                                  (0xfff0000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                              | (0x8000U 
                                                 == 
                                                 (0xfff8000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                             | (0x4000U 
                                                == 
                                                (0xfffc000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                            | (0x2000U 
                                               == (0xfffe000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                           | (0x1000U 
                                              == (0xffff000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                           ? ((0x80000U 
                                               == (0xff80000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))
                                               ? 7U
                                               : ((0x40000U 
                                                   == 
                                                   (0xffc0000U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 8U
                                                   : 
                                                  ((0x20000U 
                                                    == 
                                                    (0xffe0000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 9U
                                                    : 
                                                   ((0x10000U 
                                                     == 
                                                     (0xfff0000U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0xaU
                                                     : 
                                                    ((0x8000U 
                                                      == 
                                                      (0xfff8000U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 0xbU
                                                      : 
                                                     ((0x4000U 
                                                       == 
                                                       (0xfffc000U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 0xcU
                                                       : 
                                                      ((0x2000U 
                                                        == 
                                                        (0xfffe000U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 0xdU
                                                        : 0xeU)))))))
                                           : ((((((
                                                   (((0x800U 
                                                      == 
                                                      (0xffff800U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                                     | (0x400U 
                                                        == 
                                                        (0xffffc00U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                    | (0x200U 
                                                       == 
                                                       (0xffffe00U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                   | (0x100U 
                                                      == 
                                                      (0xfffff00U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                  | (0x80U 
                                                     == 
                                                     (0xfffff80U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                 | (0x40U 
                                                    == 
                                                    (0xfffffc0U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                | (0x20U 
                                                   == 
                                                   (0xfffffe0U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                               | (0x10U 
                                                  == 
                                                  (0xffffff0U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                               ? ((0x800U 
                                                   == 
                                                   (0xffff800U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 0xfU
                                                   : 
                                                  ((0x400U 
                                                    == 
                                                    (0xffffc00U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0x10U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0xffffe00U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0x11U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0xfffff00U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 0x12U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0xfffff80U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 0x13U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0xfffffc0U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 0x14U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0xfffffe0U 
                                                          & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                         ? 0x15U
                                                         : 0x16U)))))))
                                               : ((8U 
                                                   == 
                                                   (0xffffff8U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 0x17U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0xffffffcU 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0x18U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xffffffeU 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0x19U
                                                     : 
                                                    ((1U 
                                                      == vlSelf->__PVT__u_add__DOT__mant_sum)
                                                      ? 0x1aU
                                                      : 0x1bU)))))));
    if ((0x8000000U & vlSelf->__PVT__u_add__DOT__mant_sum)) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & (vlSelf->__PVT__u_add__DOT__mant_sum 
                                                   >> 1U));
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__u_add__DOT__large_exp)));
    } else if ((0x4000000U & vlSelf->__PVT__u_add__DOT__mant_sum)) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & vlSelf->__PVT__u_add__DOT__mant_sum);
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & (IData)(vlSelf->__PVT__u_add__DOT__large_exp));
    } else if (((0x1bU > (IData)(vlSelf->__PVT__u_add__DOT__lzc)) 
                & ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                   > (IData)(vlSelf->__PVT__u_add__DOT__lzc)))) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & (vlSelf->__PVT__u_add__DOT__mant_sum 
                                                   << (IData)(vlSelf->__PVT__u_add__DOT__lzc)));
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                                                  - (IData)(vlSelf->__PVT__u_add__DOT__lzc)));
    } else {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & 0U);
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & 0U);
    }
    vlSelf->__PVT__u_add__DOT__mant_rounded = (0x1ffffffU 
                                               & ((0xffffffU 
                                                   & (vlSelf->__PVT__u_add__DOT__norm_mant 
                                                      >> 3U)) 
                                                  + 
                                                  (1U 
                                                   & ((vlSelf->__PVT__u_add__DOT__norm_mant 
                                                       >> 2U) 
                                                      & (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xbU 
                                                                  & vlSelf->__PVT__u_add__DOT__norm_mant)))))));
    if ((0x1000000U & vlSelf->__PVT__u_add__DOT__mant_rounded)) {
        vlSelf->__PVT__u_add__DOT__final_exp = (0xffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__u_add__DOT__norm_exp)));
        vlSelf->__PVT__u_add__DOT__rounded_mant = (0x7fffffU 
                                                   & (vlSelf->__PVT__u_add__DOT__mant_rounded 
                                                      >> 1U));
    } else {
        vlSelf->__PVT__u_add__DOT__final_exp = vlSelf->__PVT__u_add__DOT__norm_exp;
        vlSelf->__PVT__u_add__DOT__rounded_mant = (0x7fffffU 
                                                   & vlSelf->__PVT__u_add__DOT__mant_rounded);
    }
}

VL_INLINE_OPT void Vnpu_system_top_mac_pe___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__0(Vnpu_system_top_mac_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnpu_system_top_mac_pe___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__0\n"); );
    // Body
    if (vlSymsp->TOP.rst_n) {
        if (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT____Vcellinp__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__weight_load_en) {
            vlSelf->__PVT__weight_reg = (vlSymsp->TOP.rdata[6U] 
                                         >> 0x10U);
        }
        vlSelf->psum_out = ((((0xffU == (0xffU & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xbU]
                                                  [0xdU] 
                                                  >> 0x17U))) 
                              & (0U != (0x7fffffU & 
                                        vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                        [0xbU][0xdU]))) 
                             | (IData)(((0x7f800000U 
                                         == (0x7f800000U 
                                             & vlSelf->__PVT__fp32_product)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSelf->__PVT__fp32_product)))))
                             ? 0x7fc00000U : (((IData)(vlSelf->__PVT__u_add__DOT__a_is_inf) 
                                               & (IData)(vlSelf->__PVT__u_add__DOT__b_is_inf))
                                               ? ((
                                                   (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xbU]
                                                    [0xdU] 
                                                    >> 0x1fU) 
                                                   != 
                                                   (vlSelf->__PVT__fp32_product 
                                                    >> 0x1fU))
                                                   ? 0x7fc00000U
                                                   : 
                                                  (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xbU]
                                                      [0xdU])))
                                               : ((IData)(vlSelf->__PVT__u_add__DOT__a_is_inf)
                                                   ? 
                                                  (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xbU]
                                                      [0xdU]))
                                                   : 
                                                  ((IData)(vlSelf->__PVT__u_add__DOT__b_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->__PVT__fp32_product))
                                                    : 
                                                   (((IData)(vlSelf->__PVT__u_add__DOT__a_is_zero) 
                                                     & (IData)(vlSelf->__PVT__u_add__DOT__b_is_zero))
                                                     ? 
                                                    (0x80000000U 
                                                     & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                        [0xbU]
                                                        [0xdU] 
                                                        & vlSelf->__PVT__fp32_product))
                                                     : 
                                                    ((IData)(vlSelf->__PVT__u_add__DOT__a_is_zero)
                                                      ? vlSelf->__PVT__fp32_product
                                                      : 
                                                     ((IData)(vlSelf->__PVT__u_add__DOT__b_is_zero)
                                                       ? 
                                                      vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xbU]
                                                      [0xdU]
                                                       : 
                                                      (((0U 
                                                         == (IData)(vlSelf->__PVT__u_add__DOT__norm_exp)) 
                                                        & (0U 
                                                           == vlSelf->__PVT__u_add__DOT__norm_mant))
                                                        ? 0U
                                                        : 
                                                       ((0xffU 
                                                         <= (IData)(vlSelf->__PVT__u_add__DOT__final_exp))
                                                         ? 
                                                        (0x7f800000U 
                                                         | ((IData)(vlSelf->__PVT__u_add__DOT__large_sign) 
                                                            << 0x1fU))
                                                         : 
                                                        (((IData)(vlSelf->__PVT__u_add__DOT__large_sign) 
                                                          << 0x1fU) 
                                                         | (((IData)(vlSelf->__PVT__u_add__DOT__final_exp) 
                                                             << 0x17U) 
                                                            | vlSelf->__PVT__u_add__DOT__rounded_mant)))))))))));
        vlSelf->act_out = vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xbU][0xdU];
    } else {
        vlSelf->__PVT__weight_reg = 0U;
        vlSelf->psum_out = 0U;
        vlSelf->act_out = 0U;
    }
}

VL_INLINE_OPT void Vnpu_system_top_mac_pe___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__1(Vnpu_system_top_mac_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnpu_system_top_mac_pe___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__1\n"); );
    // Init
    CData/*0:0*/ u_mul__DOT____VdfgExtracted_h1f028376__0;
    u_mul__DOT____VdfgExtracted_h1f028376__0 = 0;
    IData/*23:0*/ u_add__DOT____VdfgExtracted_hb7d58418__0;
    u_add__DOT____VdfgExtracted_hb7d58418__0 = 0;
    // Body
    vlSelf->__PVT__u_add__DOT__a_is_inf = ((0xffU == 
                                            (0xffU 
                                             & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xbU]
                                                [0xdU] 
                                                >> 0x17U))) 
                                           & (0U == 
                                              (0x7fffffU 
                                               & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                               [0xbU]
                                               [0xdU])));
    if ((0U == (0xffU & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                         [0xbU][0xdU] >> 0x17U)))) {
        vlSelf->__PVT__u_add__DOT__a_is_zero = (0U 
                                                == 
                                                (0x7fffffU 
                                                 & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                 [0xbU]
                                                 [0xdU]));
        vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0 
            = (0x7fffffU & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xbU][0xdU]);
    } else {
        vlSelf->__PVT__u_add__DOT__a_is_zero = 0U;
        vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0 
            = (0x800000U | (0x7fffffU & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                            [0xbU][0xdU]));
    }
    u_mul__DOT____VdfgExtracted_h1f028376__0 = (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                      [0xbU]
                                                      [0xdU] 
                                                      >> 0xaU))) 
                                                 & (0U 
                                                    == 
                                                    (0x3ffU 
                                                     & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                     [0xbU]
                                                     [0xdU]))) 
                                                | (IData)(
                                                          (0U 
                                                           == 
                                                           (0x7fffU 
                                                            & (IData)(vlSelf->__PVT__weight_reg)))));
    vlSelf->__PVT__u_mul__DOT__result_sign = (1U & 
                                              ((vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xbU]
                                                [0xdU] 
                                                ^ (IData)(vlSelf->__PVT__weight_reg)) 
                                               >> 0xfU));
    vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0 = (0x1ffU 
                                                  & ((0x1fU 
                                                      & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                         [0xbU]
                                                         [0xdU] 
                                                         >> 0xaU)) 
                                                     + 
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->__PVT__weight_reg) 
                                                         >> 0xaU))));
    vlSelf->__PVT__u_mul__DOT__mant_product = (0x3fffffU 
                                               & ((0x400U 
                                                   | (0x3ffU 
                                                      & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                      [0xbU]
                                                      [0xdU])) 
                                                  * 
                                                  (0x400U 
                                                   | (0x3ffU 
                                                      & (IData)(vlSelf->__PVT__weight_reg)))));
    vlSelf->__PVT__u_mul__DOT__fp32_exp = (0x1ffU & 
                                           ((0x200000U 
                                             & vlSelf->__PVT__u_mul__DOT__mant_product)
                                             ? ((IData)(0x62U) 
                                                + (IData)(vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0))
                                             : ((IData)(0x61U) 
                                                + (IData)(vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0))));
    vlSelf->__PVT__fp32_product = ((((0x1fU == (0x1fU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xbU]
                                                   [0xdU] 
                                                   >> 0xaU))) 
                                     & (0U != (0x3ffU 
                                               & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xbU]
                                               [0xdU]))) 
                                    | (IData)(((0x7c00U 
                                                == 
                                                (0x7c00U 
                                                 & (IData)(vlSelf->__PVT__weight_reg))) 
                                               & (0U 
                                                  != 
                                                  (0x3ffU 
                                                   & (IData)(vlSelf->__PVT__weight_reg))))))
                                    ? 0x7fc00000U : 
                                   ((((0x1fU == (0x1fU 
                                                 & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                    [0xbU]
                                                    [0xdU] 
                                                    >> 0xaU))) 
                                      & (0U == (0x3ffU 
                                                & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xbU]
                                                [0xdU]))) 
                                     | (IData)((0x7c00U 
                                                == 
                                                (0x7fffU 
                                                 & (IData)(vlSelf->__PVT__weight_reg)))))
                                     ? ((IData)(u_mul__DOT____VdfgExtracted_h1f028376__0)
                                         ? 0x7fc00000U
                                         : (0x7f800000U 
                                            | ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                               << 0x1fU)))
                                     : (((IData)(u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                         | (((0U == 
                                              (0x1fU 
                                               & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xbU]
                                                  [0xdU] 
                                                  >> 0xaU))) 
                                             & (0U 
                                                != 
                                                (0x3ffU 
                                                 & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [0xdU]))) 
                                            | (IData)(
                                                      ((0U 
                                                        == 
                                                        (0x7c00U 
                                                         & (IData)(vlSelf->__PVT__weight_reg))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSelf->__PVT__weight_reg)))))))
                                         ? ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                            << 0x1fU)
                                         : ((IData)(
                                                    (((IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp) 
                                                      >> 8U) 
                                                     | (0xffU 
                                                        <= (IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp))))
                                             ? (0x7f800000U 
                                                | ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                   << 0x1fU))
                                             : ((0U 
                                                 == (IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                 << 0x1fU)
                                                 : 
                                                (((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                  << 0x1fU) 
                                                 | ((0x7f800000U 
                                                     & ((IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp) 
                                                        << 0x17U)) 
                                                    | ((0x200000U 
                                                        & vlSelf->__PVT__u_mul__DOT__mant_product)
                                                        ? 
                                                       (0x7ffffcU 
                                                        & (vlSelf->__PVT__u_mul__DOT__mant_product 
                                                           << 2U))
                                                        : 
                                                       (0x7ffff8U 
                                                        & (vlSelf->__PVT__u_mul__DOT__mant_product 
                                                           << 3U))))))))));
    vlSelf->__PVT__u_add__DOT__b_is_inf = (IData)((0x7f800000U 
                                                   == 
                                                   (0x7fffffffU 
                                                    & vlSelf->__PVT__fp32_product)));
    vlSelf->__PVT__u_add__DOT__b_is_zero = (IData)(
                                                   (0U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelf->__PVT__fp32_product)));
    u_add__DOT____VdfgExtracted_hb7d58418__0 = ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSelf->__PVT__fp32_product 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x7fffffU 
                                                 & vlSelf->__PVT__fp32_product)
                                                 : 
                                                (0x800000U 
                                                 | (0x7fffffU 
                                                    & vlSelf->__PVT__fp32_product)));
    vlSelf->__PVT__u_add__DOT__a_is_larger = (((0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xbU]
                                                   [0xdU] 
                                                   >> 0x17U)) 
                                               > (0xffU 
                                                  & (vlSelf->__PVT__fp32_product 
                                                     >> 0x17U))) 
                                              | (((0xffU 
                                                   & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xbU]
                                                      [0xdU] 
                                                      >> 0x17U)) 
                                                  == 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__fp32_product 
                                                      >> 0x17U))) 
                                                 & ((0x7fffffU 
                                                     & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xbU]
                                                     [0xdU]) 
                                                    >= 
                                                    (0x7fffffU 
                                                     & vlSelf->__PVT__fp32_product))));
    if (vlSelf->__PVT__u_add__DOT__a_is_larger) {
        vlSelf->__PVT__u_add__DOT__large_sign = (1U 
                                                 & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xbU]
                                                    [0xdU] 
                                                    >> 0x1fU));
        vlSelf->__PVT__u_add__DOT__large_mant = vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__u_add__DOT__small_mant = u_add__DOT____VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__u_add__DOT__large_exp = (0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xbU]
                                                   [0xdU] 
                                                   >> 0x17U));
        vlSelf->__PVT__u_add__DOT__small_exp = (0xffU 
                                                & (vlSelf->__PVT__fp32_product 
                                                   >> 0x17U));
    } else {
        vlSelf->__PVT__u_add__DOT__large_sign = (1U 
                                                 & (vlSelf->__PVT__fp32_product 
                                                    >> 0x1fU));
        vlSelf->__PVT__u_add__DOT__large_mant = u_add__DOT____VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__u_add__DOT__small_mant = vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__u_add__DOT__large_exp = (0xffU 
                                                & (vlSelf->__PVT__fp32_product 
                                                   >> 0x17U));
        vlSelf->__PVT__u_add__DOT__small_exp = (0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xbU]
                                                   [0xdU] 
                                                   >> 0x17U));
    }
    vlSelf->__PVT__u_add__DOT__exp_diff = (0xffU & 
                                           ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                                            - (IData)(vlSelf->__PVT__u_add__DOT__small_exp)));
    if ((0U == (IData)(vlSelf->__PVT__u_add__DOT__exp_diff))) {
        vlSelf->__PVT__u_add__DOT__aligned_small = 
            (vlSelf->__PVT__u_add__DOT__small_mant 
             << 3U);
        vlSelf->__PVT__u_add__DOT__sticky_bit = 0U;
    } else if ((0x1bU > (IData)(vlSelf->__PVT__u_add__DOT__exp_diff))) {
        vlSelf->__PVT__u_add__DOT__aligned_small = 
            (0x7ffffffU & VL_SHIFTR_III(27,27,8, (vlSelf->__PVT__u_add__DOT__small_mant 
                                                  << 3U), (IData)(vlSelf->__PVT__u_add__DOT__exp_diff)));
        vlSelf->__PVT__u_add__DOT__sticky_bit = (0U 
                                                 != 
                                                 ((vlSelf->__PVT__u_add__DOT__small_mant 
                                                   << 3U) 
                                                  & (VL_SHIFTL_III(27,27,8, (IData)(1U), (IData)(vlSelf->__PVT__u_add__DOT__exp_diff)) 
                                                     - (IData)(1U))));
    } else {
        vlSelf->__PVT__u_add__DOT__aligned_small = 0U;
        vlSelf->__PVT__u_add__DOT__sticky_bit = (0U 
                                                 != vlSelf->__PVT__u_add__DOT__small_mant);
    }
    vlSelf->__PVT__u_add__DOT__aligned_small = ((0x7fffffeU 
                                                 & vlSelf->__PVT__u_add__DOT__aligned_small) 
                                                | (1U 
                                                   & (vlSelf->__PVT__u_add__DOT__aligned_small 
                                                      | (IData)(vlSelf->__PVT__u_add__DOT__sticky_bit))));
    vlSelf->__PVT__u_add__DOT__mant_sum = (0xfffffffU 
                                           & ((1U & 
                                               ((IData)(vlSelf->__PVT__u_add__DOT__large_sign) 
                                                ^ ((IData)(vlSelf->__PVT__u_add__DOT__a_is_larger)
                                                    ? 
                                                   (vlSelf->__PVT__fp32_product 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xbU]
                                                    [0xdU] 
                                                    >> 0x1fU))))
                                               ? ((vlSelf->__PVT__u_add__DOT__large_mant 
                                                   << 3U) 
                                                  - vlSelf->__PVT__u_add__DOT__aligned_small)
                                               : ((vlSelf->__PVT__u_add__DOT__large_mant 
                                                   << 3U) 
                                                  + vlSelf->__PVT__u_add__DOT__aligned_small)));
    vlSelf->__PVT__u_add__DOT__lzc = (((((((((0x8000000U 
                                              == (0x8000000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                             | (0x4000000U 
                                                == 
                                                (0xc000000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                            | (0x2000000U 
                                               == (0xe000000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                           | (0x1000000U 
                                              == (0xf000000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                          | (0x800000U 
                                             == (0xf800000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                         | (0x400000U 
                                            == (0xfc00000U 
                                                & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                        | (0x200000U 
                                           == (0xfe00000U 
                                               & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                       | (0x100000U 
                                          == (0xff00000U 
                                              & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                       ? ((0x8000000U 
                                           == (0x8000000U 
                                               & vlSelf->__PVT__u_add__DOT__mant_sum))
                                           ? 0U : (
                                                   (0x4000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0U
                                                    : 
                                                   ((0x2000000U 
                                                     == 
                                                     (0xe000000U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 1U
                                                     : 
                                                    ((0x1000000U 
                                                      == 
                                                      (0xf000000U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 2U
                                                      : 
                                                     ((0x800000U 
                                                       == 
                                                       (0xf800000U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 3U
                                                       : 
                                                      ((0x400000U 
                                                        == 
                                                        (0xfc00000U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 4U
                                                        : 
                                                       ((0x200000U 
                                                         == 
                                                         (0xfe00000U 
                                                          & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                         ? 5U
                                                         : 6U)))))))
                                       : (((((((((0x80000U 
                                                  == 
                                                  (0xff80000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                                 | (0x40000U 
                                                    == 
                                                    (0xffc0000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                | (0x20000U 
                                                   == 
                                                   (0xffe0000U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                               | (0x10000U 
                                                  == 
                                                  (0xfff0000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                              | (0x8000U 
                                                 == 
                                                 (0xfff8000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                             | (0x4000U 
                                                == 
                                                (0xfffc000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                            | (0x2000U 
                                               == (0xfffe000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                           | (0x1000U 
                                              == (0xffff000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                           ? ((0x80000U 
                                               == (0xff80000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))
                                               ? 7U
                                               : ((0x40000U 
                                                   == 
                                                   (0xffc0000U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 8U
                                                   : 
                                                  ((0x20000U 
                                                    == 
                                                    (0xffe0000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 9U
                                                    : 
                                                   ((0x10000U 
                                                     == 
                                                     (0xfff0000U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0xaU
                                                     : 
                                                    ((0x8000U 
                                                      == 
                                                      (0xfff8000U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 0xbU
                                                      : 
                                                     ((0x4000U 
                                                       == 
                                                       (0xfffc000U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 0xcU
                                                       : 
                                                      ((0x2000U 
                                                        == 
                                                        (0xfffe000U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 0xdU
                                                        : 0xeU)))))))
                                           : ((((((
                                                   (((0x800U 
                                                      == 
                                                      (0xffff800U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                                     | (0x400U 
                                                        == 
                                                        (0xffffc00U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                    | (0x200U 
                                                       == 
                                                       (0xffffe00U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                   | (0x100U 
                                                      == 
                                                      (0xfffff00U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                  | (0x80U 
                                                     == 
                                                     (0xfffff80U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                 | (0x40U 
                                                    == 
                                                    (0xfffffc0U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                | (0x20U 
                                                   == 
                                                   (0xfffffe0U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                               | (0x10U 
                                                  == 
                                                  (0xffffff0U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                               ? ((0x800U 
                                                   == 
                                                   (0xffff800U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 0xfU
                                                   : 
                                                  ((0x400U 
                                                    == 
                                                    (0xffffc00U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0x10U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0xffffe00U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0x11U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0xfffff00U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 0x12U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0xfffff80U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 0x13U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0xfffffc0U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 0x14U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0xfffffe0U 
                                                          & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                         ? 0x15U
                                                         : 0x16U)))))))
                                               : ((8U 
                                                   == 
                                                   (0xffffff8U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 0x17U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0xffffffcU 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0x18U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xffffffeU 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0x19U
                                                     : 
                                                    ((1U 
                                                      == vlSelf->__PVT__u_add__DOT__mant_sum)
                                                      ? 0x1aU
                                                      : 0x1bU)))))));
    if ((0x8000000U & vlSelf->__PVT__u_add__DOT__mant_sum)) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & (vlSelf->__PVT__u_add__DOT__mant_sum 
                                                   >> 1U));
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__u_add__DOT__large_exp)));
    } else if ((0x4000000U & vlSelf->__PVT__u_add__DOT__mant_sum)) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & vlSelf->__PVT__u_add__DOT__mant_sum);
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & (IData)(vlSelf->__PVT__u_add__DOT__large_exp));
    } else if (((0x1bU > (IData)(vlSelf->__PVT__u_add__DOT__lzc)) 
                & ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                   > (IData)(vlSelf->__PVT__u_add__DOT__lzc)))) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & (vlSelf->__PVT__u_add__DOT__mant_sum 
                                                   << (IData)(vlSelf->__PVT__u_add__DOT__lzc)));
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                                                  - (IData)(vlSelf->__PVT__u_add__DOT__lzc)));
    } else {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & 0U);
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & 0U);
    }
    vlSelf->__PVT__u_add__DOT__mant_rounded = (0x1ffffffU 
                                               & ((0xffffffU 
                                                   & (vlSelf->__PVT__u_add__DOT__norm_mant 
                                                      >> 3U)) 
                                                  + 
                                                  (1U 
                                                   & ((vlSelf->__PVT__u_add__DOT__norm_mant 
                                                       >> 2U) 
                                                      & (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xbU 
                                                                  & vlSelf->__PVT__u_add__DOT__norm_mant)))))));
    if ((0x1000000U & vlSelf->__PVT__u_add__DOT__mant_rounded)) {
        vlSelf->__PVT__u_add__DOT__final_exp = (0xffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__u_add__DOT__norm_exp)));
        vlSelf->__PVT__u_add__DOT__rounded_mant = (0x7fffffU 
                                                   & (vlSelf->__PVT__u_add__DOT__mant_rounded 
                                                      >> 1U));
    } else {
        vlSelf->__PVT__u_add__DOT__final_exp = vlSelf->__PVT__u_add__DOT__norm_exp;
        vlSelf->__PVT__u_add__DOT__rounded_mant = (0x7fffffU 
                                                   & vlSelf->__PVT__u_add__DOT__mant_rounded);
    }
}

VL_INLINE_OPT void Vnpu_system_top_mac_pe___ico_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__0(Vnpu_system_top_mac_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnpu_system_top_mac_pe___ico_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__0\n"); );
    // Init
    CData/*0:0*/ u_mul__DOT____VdfgExtracted_h1f028376__0;
    u_mul__DOT____VdfgExtracted_h1f028376__0 = 0;
    IData/*23:0*/ u_add__DOT____VdfgExtracted_hb7d58418__0;
    u_add__DOT____VdfgExtracted_hb7d58418__0 = 0;
    // Body
    u_mul__DOT____VdfgExtracted_h1f028376__0 = (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                      [0xbU]
                                                      [0xeU] 
                                                      >> 0xaU))) 
                                                 & (0U 
                                                    == 
                                                    (0x3ffU 
                                                     & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                     [0xbU]
                                                     [0xeU]))) 
                                                | (IData)(
                                                          (0U 
                                                           == 
                                                           (0x7fffU 
                                                            & (IData)(vlSelf->__PVT__weight_reg)))));
    vlSelf->__PVT__u_mul__DOT__result_sign = (1U & 
                                              ((vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xbU]
                                                [0xeU] 
                                                ^ (IData)(vlSelf->__PVT__weight_reg)) 
                                               >> 0xfU));
    vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0 = (0x1ffU 
                                                  & ((0x1fU 
                                                      & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                         [0xbU]
                                                         [0xeU] 
                                                         >> 0xaU)) 
                                                     + 
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->__PVT__weight_reg) 
                                                         >> 0xaU))));
    vlSelf->__PVT__u_mul__DOT__mant_product = (0x3fffffU 
                                               & ((0x400U 
                                                   | (0x3ffU 
                                                      & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                      [0xbU]
                                                      [0xeU])) 
                                                  * 
                                                  (0x400U 
                                                   | (0x3ffU 
                                                      & (IData)(vlSelf->__PVT__weight_reg)))));
    vlSelf->__PVT__u_mul__DOT__fp32_exp = (0x1ffU & 
                                           ((0x200000U 
                                             & vlSelf->__PVT__u_mul__DOT__mant_product)
                                             ? ((IData)(0x62U) 
                                                + (IData)(vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0))
                                             : ((IData)(0x61U) 
                                                + (IData)(vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0))));
    vlSelf->__PVT__fp32_product = ((((0x1fU == (0x1fU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xbU]
                                                   [0xeU] 
                                                   >> 0xaU))) 
                                     & (0U != (0x3ffU 
                                               & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xbU]
                                               [0xeU]))) 
                                    | (IData)(((0x7c00U 
                                                == 
                                                (0x7c00U 
                                                 & (IData)(vlSelf->__PVT__weight_reg))) 
                                               & (0U 
                                                  != 
                                                  (0x3ffU 
                                                   & (IData)(vlSelf->__PVT__weight_reg))))))
                                    ? 0x7fc00000U : 
                                   ((((0x1fU == (0x1fU 
                                                 & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                    [0xbU]
                                                    [0xeU] 
                                                    >> 0xaU))) 
                                      & (0U == (0x3ffU 
                                                & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xbU]
                                                [0xeU]))) 
                                     | (IData)((0x7c00U 
                                                == 
                                                (0x7fffU 
                                                 & (IData)(vlSelf->__PVT__weight_reg)))))
                                     ? ((IData)(u_mul__DOT____VdfgExtracted_h1f028376__0)
                                         ? 0x7fc00000U
                                         : (0x7f800000U 
                                            | ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                               << 0x1fU)))
                                     : (((IData)(u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                         | (((0U == 
                                              (0x1fU 
                                               & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xbU]
                                                  [0xeU] 
                                                  >> 0xaU))) 
                                             & (0U 
                                                != 
                                                (0x3ffU 
                                                 & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [0xeU]))) 
                                            | (IData)(
                                                      ((0U 
                                                        == 
                                                        (0x7c00U 
                                                         & (IData)(vlSelf->__PVT__weight_reg))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSelf->__PVT__weight_reg)))))))
                                         ? ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                            << 0x1fU)
                                         : ((IData)(
                                                    (((IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp) 
                                                      >> 8U) 
                                                     | (0xffU 
                                                        <= (IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp))))
                                             ? (0x7f800000U 
                                                | ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                   << 0x1fU))
                                             : ((0U 
                                                 == (IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                 << 0x1fU)
                                                 : 
                                                (((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                  << 0x1fU) 
                                                 | ((0x7f800000U 
                                                     & ((IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp) 
                                                        << 0x17U)) 
                                                    | ((0x200000U 
                                                        & vlSelf->__PVT__u_mul__DOT__mant_product)
                                                        ? 
                                                       (0x7ffffcU 
                                                        & (vlSelf->__PVT__u_mul__DOT__mant_product 
                                                           << 2U))
                                                        : 
                                                       (0x7ffff8U 
                                                        & (vlSelf->__PVT__u_mul__DOT__mant_product 
                                                           << 3U))))))))));
    vlSelf->__PVT__u_add__DOT__b_is_inf = (IData)((0x7f800000U 
                                                   == 
                                                   (0x7fffffffU 
                                                    & vlSelf->__PVT__fp32_product)));
    vlSelf->__PVT__u_add__DOT__b_is_zero = (IData)(
                                                   (0U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelf->__PVT__fp32_product)));
    u_add__DOT____VdfgExtracted_hb7d58418__0 = ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSelf->__PVT__fp32_product 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x7fffffU 
                                                 & vlSelf->__PVT__fp32_product)
                                                 : 
                                                (0x800000U 
                                                 | (0x7fffffU 
                                                    & vlSelf->__PVT__fp32_product)));
    vlSelf->__PVT__u_add__DOT__a_is_larger = (((0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xbU]
                                                   [0xeU] 
                                                   >> 0x17U)) 
                                               > (0xffU 
                                                  & (vlSelf->__PVT__fp32_product 
                                                     >> 0x17U))) 
                                              | (((0xffU 
                                                   & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xbU]
                                                      [0xeU] 
                                                      >> 0x17U)) 
                                                  == 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__fp32_product 
                                                      >> 0x17U))) 
                                                 & ((0x7fffffU 
                                                     & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xbU]
                                                     [0xeU]) 
                                                    >= 
                                                    (0x7fffffU 
                                                     & vlSelf->__PVT__fp32_product))));
    if (vlSelf->__PVT__u_add__DOT__a_is_larger) {
        vlSelf->__PVT__u_add__DOT__large_sign = (1U 
                                                 & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xbU]
                                                    [0xeU] 
                                                    >> 0x1fU));
        vlSelf->__PVT__u_add__DOT__large_mant = vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__u_add__DOT__small_mant = u_add__DOT____VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__u_add__DOT__large_exp = (0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xbU]
                                                   [0xeU] 
                                                   >> 0x17U));
        vlSelf->__PVT__u_add__DOT__small_exp = (0xffU 
                                                & (vlSelf->__PVT__fp32_product 
                                                   >> 0x17U));
    } else {
        vlSelf->__PVT__u_add__DOT__large_sign = (1U 
                                                 & (vlSelf->__PVT__fp32_product 
                                                    >> 0x1fU));
        vlSelf->__PVT__u_add__DOT__large_mant = u_add__DOT____VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__u_add__DOT__small_mant = vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__u_add__DOT__large_exp = (0xffU 
                                                & (vlSelf->__PVT__fp32_product 
                                                   >> 0x17U));
        vlSelf->__PVT__u_add__DOT__small_exp = (0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xbU]
                                                   [0xeU] 
                                                   >> 0x17U));
    }
    vlSelf->__PVT__u_add__DOT__exp_diff = (0xffU & 
                                           ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                                            - (IData)(vlSelf->__PVT__u_add__DOT__small_exp)));
    if ((0U == (IData)(vlSelf->__PVT__u_add__DOT__exp_diff))) {
        vlSelf->__PVT__u_add__DOT__aligned_small = 
            (vlSelf->__PVT__u_add__DOT__small_mant 
             << 3U);
        vlSelf->__PVT__u_add__DOT__sticky_bit = 0U;
    } else if ((0x1bU > (IData)(vlSelf->__PVT__u_add__DOT__exp_diff))) {
        vlSelf->__PVT__u_add__DOT__aligned_small = 
            (0x7ffffffU & VL_SHIFTR_III(27,27,8, (vlSelf->__PVT__u_add__DOT__small_mant 
                                                  << 3U), (IData)(vlSelf->__PVT__u_add__DOT__exp_diff)));
        vlSelf->__PVT__u_add__DOT__sticky_bit = (0U 
                                                 != 
                                                 ((vlSelf->__PVT__u_add__DOT__small_mant 
                                                   << 3U) 
                                                  & (VL_SHIFTL_III(27,27,8, (IData)(1U), (IData)(vlSelf->__PVT__u_add__DOT__exp_diff)) 
                                                     - (IData)(1U))));
    } else {
        vlSelf->__PVT__u_add__DOT__aligned_small = 0U;
        vlSelf->__PVT__u_add__DOT__sticky_bit = (0U 
                                                 != vlSelf->__PVT__u_add__DOT__small_mant);
    }
    vlSelf->__PVT__u_add__DOT__aligned_small = ((0x7fffffeU 
                                                 & vlSelf->__PVT__u_add__DOT__aligned_small) 
                                                | (1U 
                                                   & (vlSelf->__PVT__u_add__DOT__aligned_small 
                                                      | (IData)(vlSelf->__PVT__u_add__DOT__sticky_bit))));
    vlSelf->__PVT__u_add__DOT__mant_sum = (0xfffffffU 
                                           & ((1U & 
                                               ((IData)(vlSelf->__PVT__u_add__DOT__large_sign) 
                                                ^ ((IData)(vlSelf->__PVT__u_add__DOT__a_is_larger)
                                                    ? 
                                                   (vlSelf->__PVT__fp32_product 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xbU]
                                                    [0xeU] 
                                                    >> 0x1fU))))
                                               ? ((vlSelf->__PVT__u_add__DOT__large_mant 
                                                   << 3U) 
                                                  - vlSelf->__PVT__u_add__DOT__aligned_small)
                                               : ((vlSelf->__PVT__u_add__DOT__large_mant 
                                                   << 3U) 
                                                  + vlSelf->__PVT__u_add__DOT__aligned_small)));
    vlSelf->__PVT__u_add__DOT__lzc = (((((((((0x8000000U 
                                              == (0x8000000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                             | (0x4000000U 
                                                == 
                                                (0xc000000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                            | (0x2000000U 
                                               == (0xe000000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                           | (0x1000000U 
                                              == (0xf000000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                          | (0x800000U 
                                             == (0xf800000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                         | (0x400000U 
                                            == (0xfc00000U 
                                                & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                        | (0x200000U 
                                           == (0xfe00000U 
                                               & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                       | (0x100000U 
                                          == (0xff00000U 
                                              & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                       ? ((0x8000000U 
                                           == (0x8000000U 
                                               & vlSelf->__PVT__u_add__DOT__mant_sum))
                                           ? 0U : (
                                                   (0x4000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0U
                                                    : 
                                                   ((0x2000000U 
                                                     == 
                                                     (0xe000000U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 1U
                                                     : 
                                                    ((0x1000000U 
                                                      == 
                                                      (0xf000000U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 2U
                                                      : 
                                                     ((0x800000U 
                                                       == 
                                                       (0xf800000U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 3U
                                                       : 
                                                      ((0x400000U 
                                                        == 
                                                        (0xfc00000U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 4U
                                                        : 
                                                       ((0x200000U 
                                                         == 
                                                         (0xfe00000U 
                                                          & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                         ? 5U
                                                         : 6U)))))))
                                       : (((((((((0x80000U 
                                                  == 
                                                  (0xff80000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                                 | (0x40000U 
                                                    == 
                                                    (0xffc0000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                | (0x20000U 
                                                   == 
                                                   (0xffe0000U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                               | (0x10000U 
                                                  == 
                                                  (0xfff0000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                              | (0x8000U 
                                                 == 
                                                 (0xfff8000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                             | (0x4000U 
                                                == 
                                                (0xfffc000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                            | (0x2000U 
                                               == (0xfffe000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                           | (0x1000U 
                                              == (0xffff000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                           ? ((0x80000U 
                                               == (0xff80000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))
                                               ? 7U
                                               : ((0x40000U 
                                                   == 
                                                   (0xffc0000U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 8U
                                                   : 
                                                  ((0x20000U 
                                                    == 
                                                    (0xffe0000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 9U
                                                    : 
                                                   ((0x10000U 
                                                     == 
                                                     (0xfff0000U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0xaU
                                                     : 
                                                    ((0x8000U 
                                                      == 
                                                      (0xfff8000U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 0xbU
                                                      : 
                                                     ((0x4000U 
                                                       == 
                                                       (0xfffc000U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 0xcU
                                                       : 
                                                      ((0x2000U 
                                                        == 
                                                        (0xfffe000U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 0xdU
                                                        : 0xeU)))))))
                                           : ((((((
                                                   (((0x800U 
                                                      == 
                                                      (0xffff800U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                                     | (0x400U 
                                                        == 
                                                        (0xffffc00U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                    | (0x200U 
                                                       == 
                                                       (0xffffe00U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                   | (0x100U 
                                                      == 
                                                      (0xfffff00U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                  | (0x80U 
                                                     == 
                                                     (0xfffff80U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                 | (0x40U 
                                                    == 
                                                    (0xfffffc0U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                | (0x20U 
                                                   == 
                                                   (0xfffffe0U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                               | (0x10U 
                                                  == 
                                                  (0xffffff0U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                               ? ((0x800U 
                                                   == 
                                                   (0xffff800U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 0xfU
                                                   : 
                                                  ((0x400U 
                                                    == 
                                                    (0xffffc00U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0x10U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0xffffe00U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0x11U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0xfffff00U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 0x12U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0xfffff80U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 0x13U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0xfffffc0U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 0x14U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0xfffffe0U 
                                                          & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                         ? 0x15U
                                                         : 0x16U)))))))
                                               : ((8U 
                                                   == 
                                                   (0xffffff8U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 0x17U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0xffffffcU 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0x18U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xffffffeU 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0x19U
                                                     : 
                                                    ((1U 
                                                      == vlSelf->__PVT__u_add__DOT__mant_sum)
                                                      ? 0x1aU
                                                      : 0x1bU)))))));
    if ((0x8000000U & vlSelf->__PVT__u_add__DOT__mant_sum)) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & (vlSelf->__PVT__u_add__DOT__mant_sum 
                                                   >> 1U));
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__u_add__DOT__large_exp)));
    } else if ((0x4000000U & vlSelf->__PVT__u_add__DOT__mant_sum)) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & vlSelf->__PVT__u_add__DOT__mant_sum);
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & (IData)(vlSelf->__PVT__u_add__DOT__large_exp));
    } else if (((0x1bU > (IData)(vlSelf->__PVT__u_add__DOT__lzc)) 
                & ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                   > (IData)(vlSelf->__PVT__u_add__DOT__lzc)))) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & (vlSelf->__PVT__u_add__DOT__mant_sum 
                                                   << (IData)(vlSelf->__PVT__u_add__DOT__lzc)));
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                                                  - (IData)(vlSelf->__PVT__u_add__DOT__lzc)));
    } else {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & 0U);
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & 0U);
    }
    vlSelf->__PVT__u_add__DOT__mant_rounded = (0x1ffffffU 
                                               & ((0xffffffU 
                                                   & (vlSelf->__PVT__u_add__DOT__norm_mant 
                                                      >> 3U)) 
                                                  + 
                                                  (1U 
                                                   & ((vlSelf->__PVT__u_add__DOT__norm_mant 
                                                       >> 2U) 
                                                      & (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xbU 
                                                                  & vlSelf->__PVT__u_add__DOT__norm_mant)))))));
    if ((0x1000000U & vlSelf->__PVT__u_add__DOT__mant_rounded)) {
        vlSelf->__PVT__u_add__DOT__final_exp = (0xffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__u_add__DOT__norm_exp)));
        vlSelf->__PVT__u_add__DOT__rounded_mant = (0x7fffffU 
                                                   & (vlSelf->__PVT__u_add__DOT__mant_rounded 
                                                      >> 1U));
    } else {
        vlSelf->__PVT__u_add__DOT__final_exp = vlSelf->__PVT__u_add__DOT__norm_exp;
        vlSelf->__PVT__u_add__DOT__rounded_mant = (0x7fffffU 
                                                   & vlSelf->__PVT__u_add__DOT__mant_rounded);
    }
}

VL_INLINE_OPT void Vnpu_system_top_mac_pe___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__0(Vnpu_system_top_mac_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnpu_system_top_mac_pe___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__0\n"); );
    // Body
    if (vlSymsp->TOP.rst_n) {
        if (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT____Vcellinp__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__weight_load_en) {
            vlSelf->__PVT__weight_reg = (0xffffU & 
                                         vlSymsp->TOP.rdata[7U]);
        }
        vlSelf->psum_out = ((((0xffU == (0xffU & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xbU]
                                                  [0xeU] 
                                                  >> 0x17U))) 
                              & (0U != (0x7fffffU & 
                                        vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                        [0xbU][0xeU]))) 
                             | (IData)(((0x7f800000U 
                                         == (0x7f800000U 
                                             & vlSelf->__PVT__fp32_product)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSelf->__PVT__fp32_product)))))
                             ? 0x7fc00000U : (((IData)(vlSelf->__PVT__u_add__DOT__a_is_inf) 
                                               & (IData)(vlSelf->__PVT__u_add__DOT__b_is_inf))
                                               ? ((
                                                   (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xbU]
                                                    [0xeU] 
                                                    >> 0x1fU) 
                                                   != 
                                                   (vlSelf->__PVT__fp32_product 
                                                    >> 0x1fU))
                                                   ? 0x7fc00000U
                                                   : 
                                                  (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xbU]
                                                      [0xeU])))
                                               : ((IData)(vlSelf->__PVT__u_add__DOT__a_is_inf)
                                                   ? 
                                                  (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xbU]
                                                      [0xeU]))
                                                   : 
                                                  ((IData)(vlSelf->__PVT__u_add__DOT__b_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->__PVT__fp32_product))
                                                    : 
                                                   (((IData)(vlSelf->__PVT__u_add__DOT__a_is_zero) 
                                                     & (IData)(vlSelf->__PVT__u_add__DOT__b_is_zero))
                                                     ? 
                                                    (0x80000000U 
                                                     & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                        [0xbU]
                                                        [0xeU] 
                                                        & vlSelf->__PVT__fp32_product))
                                                     : 
                                                    ((IData)(vlSelf->__PVT__u_add__DOT__a_is_zero)
                                                      ? vlSelf->__PVT__fp32_product
                                                      : 
                                                     ((IData)(vlSelf->__PVT__u_add__DOT__b_is_zero)
                                                       ? 
                                                      vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xbU]
                                                      [0xeU]
                                                       : 
                                                      (((0U 
                                                         == (IData)(vlSelf->__PVT__u_add__DOT__norm_exp)) 
                                                        & (0U 
                                                           == vlSelf->__PVT__u_add__DOT__norm_mant))
                                                        ? 0U
                                                        : 
                                                       ((0xffU 
                                                         <= (IData)(vlSelf->__PVT__u_add__DOT__final_exp))
                                                         ? 
                                                        (0x7f800000U 
                                                         | ((IData)(vlSelf->__PVT__u_add__DOT__large_sign) 
                                                            << 0x1fU))
                                                         : 
                                                        (((IData)(vlSelf->__PVT__u_add__DOT__large_sign) 
                                                          << 0x1fU) 
                                                         | (((IData)(vlSelf->__PVT__u_add__DOT__final_exp) 
                                                             << 0x17U) 
                                                            | vlSelf->__PVT__u_add__DOT__rounded_mant)))))))))));
        vlSelf->act_out = vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xbU][0xeU];
    } else {
        vlSelf->__PVT__weight_reg = 0U;
        vlSelf->psum_out = 0U;
        vlSelf->act_out = 0U;
    }
}

VL_INLINE_OPT void Vnpu_system_top_mac_pe___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__1(Vnpu_system_top_mac_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnpu_system_top_mac_pe___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__1\n"); );
    // Init
    CData/*0:0*/ u_mul__DOT____VdfgExtracted_h1f028376__0;
    u_mul__DOT____VdfgExtracted_h1f028376__0 = 0;
    IData/*23:0*/ u_add__DOT____VdfgExtracted_hb7d58418__0;
    u_add__DOT____VdfgExtracted_hb7d58418__0 = 0;
    // Body
    vlSelf->__PVT__u_add__DOT__a_is_inf = ((0xffU == 
                                            (0xffU 
                                             & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xbU]
                                                [0xeU] 
                                                >> 0x17U))) 
                                           & (0U == 
                                              (0x7fffffU 
                                               & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                               [0xbU]
                                               [0xeU])));
    if ((0U == (0xffU & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                         [0xbU][0xeU] >> 0x17U)))) {
        vlSelf->__PVT__u_add__DOT__a_is_zero = (0U 
                                                == 
                                                (0x7fffffU 
                                                 & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                 [0xbU]
                                                 [0xeU]));
        vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0 
            = (0x7fffffU & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xbU][0xeU]);
    } else {
        vlSelf->__PVT__u_add__DOT__a_is_zero = 0U;
        vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0 
            = (0x800000U | (0x7fffffU & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                            [0xbU][0xeU]));
    }
    u_mul__DOT____VdfgExtracted_h1f028376__0 = (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                      [0xbU]
                                                      [0xeU] 
                                                      >> 0xaU))) 
                                                 & (0U 
                                                    == 
                                                    (0x3ffU 
                                                     & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                     [0xbU]
                                                     [0xeU]))) 
                                                | (IData)(
                                                          (0U 
                                                           == 
                                                           (0x7fffU 
                                                            & (IData)(vlSelf->__PVT__weight_reg)))));
    vlSelf->__PVT__u_mul__DOT__result_sign = (1U & 
                                              ((vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xbU]
                                                [0xeU] 
                                                ^ (IData)(vlSelf->__PVT__weight_reg)) 
                                               >> 0xfU));
    vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0 = (0x1ffU 
                                                  & ((0x1fU 
                                                      & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                         [0xbU]
                                                         [0xeU] 
                                                         >> 0xaU)) 
                                                     + 
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->__PVT__weight_reg) 
                                                         >> 0xaU))));
    vlSelf->__PVT__u_mul__DOT__mant_product = (0x3fffffU 
                                               & ((0x400U 
                                                   | (0x3ffU 
                                                      & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                      [0xbU]
                                                      [0xeU])) 
                                                  * 
                                                  (0x400U 
                                                   | (0x3ffU 
                                                      & (IData)(vlSelf->__PVT__weight_reg)))));
    vlSelf->__PVT__u_mul__DOT__fp32_exp = (0x1ffU & 
                                           ((0x200000U 
                                             & vlSelf->__PVT__u_mul__DOT__mant_product)
                                             ? ((IData)(0x62U) 
                                                + (IData)(vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0))
                                             : ((IData)(0x61U) 
                                                + (IData)(vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0))));
    vlSelf->__PVT__fp32_product = ((((0x1fU == (0x1fU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xbU]
                                                   [0xeU] 
                                                   >> 0xaU))) 
                                     & (0U != (0x3ffU 
                                               & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xbU]
                                               [0xeU]))) 
                                    | (IData)(((0x7c00U 
                                                == 
                                                (0x7c00U 
                                                 & (IData)(vlSelf->__PVT__weight_reg))) 
                                               & (0U 
                                                  != 
                                                  (0x3ffU 
                                                   & (IData)(vlSelf->__PVT__weight_reg))))))
                                    ? 0x7fc00000U : 
                                   ((((0x1fU == (0x1fU 
                                                 & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                    [0xbU]
                                                    [0xeU] 
                                                    >> 0xaU))) 
                                      & (0U == (0x3ffU 
                                                & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xbU]
                                                [0xeU]))) 
                                     | (IData)((0x7c00U 
                                                == 
                                                (0x7fffU 
                                                 & (IData)(vlSelf->__PVT__weight_reg)))))
                                     ? ((IData)(u_mul__DOT____VdfgExtracted_h1f028376__0)
                                         ? 0x7fc00000U
                                         : (0x7f800000U 
                                            | ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                               << 0x1fU)))
                                     : (((IData)(u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                         | (((0U == 
                                              (0x1fU 
                                               & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xbU]
                                                  [0xeU] 
                                                  >> 0xaU))) 
                                             & (0U 
                                                != 
                                                (0x3ffU 
                                                 & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [0xeU]))) 
                                            | (IData)(
                                                      ((0U 
                                                        == 
                                                        (0x7c00U 
                                                         & (IData)(vlSelf->__PVT__weight_reg))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSelf->__PVT__weight_reg)))))))
                                         ? ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                            << 0x1fU)
                                         : ((IData)(
                                                    (((IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp) 
                                                      >> 8U) 
                                                     | (0xffU 
                                                        <= (IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp))))
                                             ? (0x7f800000U 
                                                | ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                   << 0x1fU))
                                             : ((0U 
                                                 == (IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                 << 0x1fU)
                                                 : 
                                                (((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                  << 0x1fU) 
                                                 | ((0x7f800000U 
                                                     & ((IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp) 
                                                        << 0x17U)) 
                                                    | ((0x200000U 
                                                        & vlSelf->__PVT__u_mul__DOT__mant_product)
                                                        ? 
                                                       (0x7ffffcU 
                                                        & (vlSelf->__PVT__u_mul__DOT__mant_product 
                                                           << 2U))
                                                        : 
                                                       (0x7ffff8U 
                                                        & (vlSelf->__PVT__u_mul__DOT__mant_product 
                                                           << 3U))))))))));
    vlSelf->__PVT__u_add__DOT__b_is_inf = (IData)((0x7f800000U 
                                                   == 
                                                   (0x7fffffffU 
                                                    & vlSelf->__PVT__fp32_product)));
    vlSelf->__PVT__u_add__DOT__b_is_zero = (IData)(
                                                   (0U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelf->__PVT__fp32_product)));
    u_add__DOT____VdfgExtracted_hb7d58418__0 = ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSelf->__PVT__fp32_product 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x7fffffU 
                                                 & vlSelf->__PVT__fp32_product)
                                                 : 
                                                (0x800000U 
                                                 | (0x7fffffU 
                                                    & vlSelf->__PVT__fp32_product)));
    vlSelf->__PVT__u_add__DOT__a_is_larger = (((0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xbU]
                                                   [0xeU] 
                                                   >> 0x17U)) 
                                               > (0xffU 
                                                  & (vlSelf->__PVT__fp32_product 
                                                     >> 0x17U))) 
                                              | (((0xffU 
                                                   & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xbU]
                                                      [0xeU] 
                                                      >> 0x17U)) 
                                                  == 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__fp32_product 
                                                      >> 0x17U))) 
                                                 & ((0x7fffffU 
                                                     & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xbU]
                                                     [0xeU]) 
                                                    >= 
                                                    (0x7fffffU 
                                                     & vlSelf->__PVT__fp32_product))));
    if (vlSelf->__PVT__u_add__DOT__a_is_larger) {
        vlSelf->__PVT__u_add__DOT__large_sign = (1U 
                                                 & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xbU]
                                                    [0xeU] 
                                                    >> 0x1fU));
        vlSelf->__PVT__u_add__DOT__large_mant = vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__u_add__DOT__small_mant = u_add__DOT____VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__u_add__DOT__large_exp = (0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xbU]
                                                   [0xeU] 
                                                   >> 0x17U));
        vlSelf->__PVT__u_add__DOT__small_exp = (0xffU 
                                                & (vlSelf->__PVT__fp32_product 
                                                   >> 0x17U));
    } else {
        vlSelf->__PVT__u_add__DOT__large_sign = (1U 
                                                 & (vlSelf->__PVT__fp32_product 
                                                    >> 0x1fU));
        vlSelf->__PVT__u_add__DOT__large_mant = u_add__DOT____VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__u_add__DOT__small_mant = vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__u_add__DOT__large_exp = (0xffU 
                                                & (vlSelf->__PVT__fp32_product 
                                                   >> 0x17U));
        vlSelf->__PVT__u_add__DOT__small_exp = (0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xbU]
                                                   [0xeU] 
                                                   >> 0x17U));
    }
    vlSelf->__PVT__u_add__DOT__exp_diff = (0xffU & 
                                           ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                                            - (IData)(vlSelf->__PVT__u_add__DOT__small_exp)));
    if ((0U == (IData)(vlSelf->__PVT__u_add__DOT__exp_diff))) {
        vlSelf->__PVT__u_add__DOT__aligned_small = 
            (vlSelf->__PVT__u_add__DOT__small_mant 
             << 3U);
        vlSelf->__PVT__u_add__DOT__sticky_bit = 0U;
    } else if ((0x1bU > (IData)(vlSelf->__PVT__u_add__DOT__exp_diff))) {
        vlSelf->__PVT__u_add__DOT__aligned_small = 
            (0x7ffffffU & VL_SHIFTR_III(27,27,8, (vlSelf->__PVT__u_add__DOT__small_mant 
                                                  << 3U), (IData)(vlSelf->__PVT__u_add__DOT__exp_diff)));
        vlSelf->__PVT__u_add__DOT__sticky_bit = (0U 
                                                 != 
                                                 ((vlSelf->__PVT__u_add__DOT__small_mant 
                                                   << 3U) 
                                                  & (VL_SHIFTL_III(27,27,8, (IData)(1U), (IData)(vlSelf->__PVT__u_add__DOT__exp_diff)) 
                                                     - (IData)(1U))));
    } else {
        vlSelf->__PVT__u_add__DOT__aligned_small = 0U;
        vlSelf->__PVT__u_add__DOT__sticky_bit = (0U 
                                                 != vlSelf->__PVT__u_add__DOT__small_mant);
    }
    vlSelf->__PVT__u_add__DOT__aligned_small = ((0x7fffffeU 
                                                 & vlSelf->__PVT__u_add__DOT__aligned_small) 
                                                | (1U 
                                                   & (vlSelf->__PVT__u_add__DOT__aligned_small 
                                                      | (IData)(vlSelf->__PVT__u_add__DOT__sticky_bit))));
    vlSelf->__PVT__u_add__DOT__mant_sum = (0xfffffffU 
                                           & ((1U & 
                                               ((IData)(vlSelf->__PVT__u_add__DOT__large_sign) 
                                                ^ ((IData)(vlSelf->__PVT__u_add__DOT__a_is_larger)
                                                    ? 
                                                   (vlSelf->__PVT__fp32_product 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xbU]
                                                    [0xeU] 
                                                    >> 0x1fU))))
                                               ? ((vlSelf->__PVT__u_add__DOT__large_mant 
                                                   << 3U) 
                                                  - vlSelf->__PVT__u_add__DOT__aligned_small)
                                               : ((vlSelf->__PVT__u_add__DOT__large_mant 
                                                   << 3U) 
                                                  + vlSelf->__PVT__u_add__DOT__aligned_small)));
    vlSelf->__PVT__u_add__DOT__lzc = (((((((((0x8000000U 
                                              == (0x8000000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                             | (0x4000000U 
                                                == 
                                                (0xc000000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                            | (0x2000000U 
                                               == (0xe000000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                           | (0x1000000U 
                                              == (0xf000000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                          | (0x800000U 
                                             == (0xf800000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                         | (0x400000U 
                                            == (0xfc00000U 
                                                & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                        | (0x200000U 
                                           == (0xfe00000U 
                                               & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                       | (0x100000U 
                                          == (0xff00000U 
                                              & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                       ? ((0x8000000U 
                                           == (0x8000000U 
                                               & vlSelf->__PVT__u_add__DOT__mant_sum))
                                           ? 0U : (
                                                   (0x4000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0U
                                                    : 
                                                   ((0x2000000U 
                                                     == 
                                                     (0xe000000U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 1U
                                                     : 
                                                    ((0x1000000U 
                                                      == 
                                                      (0xf000000U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 2U
                                                      : 
                                                     ((0x800000U 
                                                       == 
                                                       (0xf800000U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 3U
                                                       : 
                                                      ((0x400000U 
                                                        == 
                                                        (0xfc00000U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 4U
                                                        : 
                                                       ((0x200000U 
                                                         == 
                                                         (0xfe00000U 
                                                          & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                         ? 5U
                                                         : 6U)))))))
                                       : (((((((((0x80000U 
                                                  == 
                                                  (0xff80000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                                 | (0x40000U 
                                                    == 
                                                    (0xffc0000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                | (0x20000U 
                                                   == 
                                                   (0xffe0000U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                               | (0x10000U 
                                                  == 
                                                  (0xfff0000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                              | (0x8000U 
                                                 == 
                                                 (0xfff8000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                             | (0x4000U 
                                                == 
                                                (0xfffc000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                            | (0x2000U 
                                               == (0xfffe000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                           | (0x1000U 
                                              == (0xffff000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                           ? ((0x80000U 
                                               == (0xff80000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))
                                               ? 7U
                                               : ((0x40000U 
                                                   == 
                                                   (0xffc0000U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 8U
                                                   : 
                                                  ((0x20000U 
                                                    == 
                                                    (0xffe0000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 9U
                                                    : 
                                                   ((0x10000U 
                                                     == 
                                                     (0xfff0000U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0xaU
                                                     : 
                                                    ((0x8000U 
                                                      == 
                                                      (0xfff8000U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 0xbU
                                                      : 
                                                     ((0x4000U 
                                                       == 
                                                       (0xfffc000U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 0xcU
                                                       : 
                                                      ((0x2000U 
                                                        == 
                                                        (0xfffe000U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 0xdU
                                                        : 0xeU)))))))
                                           : ((((((
                                                   (((0x800U 
                                                      == 
                                                      (0xffff800U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                                     | (0x400U 
                                                        == 
                                                        (0xffffc00U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                    | (0x200U 
                                                       == 
                                                       (0xffffe00U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                   | (0x100U 
                                                      == 
                                                      (0xfffff00U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                  | (0x80U 
                                                     == 
                                                     (0xfffff80U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                 | (0x40U 
                                                    == 
                                                    (0xfffffc0U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                | (0x20U 
                                                   == 
                                                   (0xfffffe0U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                               | (0x10U 
                                                  == 
                                                  (0xffffff0U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                               ? ((0x800U 
                                                   == 
                                                   (0xffff800U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 0xfU
                                                   : 
                                                  ((0x400U 
                                                    == 
                                                    (0xffffc00U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0x10U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0xffffe00U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0x11U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0xfffff00U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 0x12U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0xfffff80U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 0x13U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0xfffffc0U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 0x14U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0xfffffe0U 
                                                          & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                         ? 0x15U
                                                         : 0x16U)))))))
                                               : ((8U 
                                                   == 
                                                   (0xffffff8U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 0x17U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0xffffffcU 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0x18U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xffffffeU 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0x19U
                                                     : 
                                                    ((1U 
                                                      == vlSelf->__PVT__u_add__DOT__mant_sum)
                                                      ? 0x1aU
                                                      : 0x1bU)))))));
    if ((0x8000000U & vlSelf->__PVT__u_add__DOT__mant_sum)) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & (vlSelf->__PVT__u_add__DOT__mant_sum 
                                                   >> 1U));
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__u_add__DOT__large_exp)));
    } else if ((0x4000000U & vlSelf->__PVT__u_add__DOT__mant_sum)) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & vlSelf->__PVT__u_add__DOT__mant_sum);
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & (IData)(vlSelf->__PVT__u_add__DOT__large_exp));
    } else if (((0x1bU > (IData)(vlSelf->__PVT__u_add__DOT__lzc)) 
                & ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                   > (IData)(vlSelf->__PVT__u_add__DOT__lzc)))) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & (vlSelf->__PVT__u_add__DOT__mant_sum 
                                                   << (IData)(vlSelf->__PVT__u_add__DOT__lzc)));
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                                                  - (IData)(vlSelf->__PVT__u_add__DOT__lzc)));
    } else {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & 0U);
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & 0U);
    }
    vlSelf->__PVT__u_add__DOT__mant_rounded = (0x1ffffffU 
                                               & ((0xffffffU 
                                                   & (vlSelf->__PVT__u_add__DOT__norm_mant 
                                                      >> 3U)) 
                                                  + 
                                                  (1U 
                                                   & ((vlSelf->__PVT__u_add__DOT__norm_mant 
                                                       >> 2U) 
                                                      & (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xbU 
                                                                  & vlSelf->__PVT__u_add__DOT__norm_mant)))))));
    if ((0x1000000U & vlSelf->__PVT__u_add__DOT__mant_rounded)) {
        vlSelf->__PVT__u_add__DOT__final_exp = (0xffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__u_add__DOT__norm_exp)));
        vlSelf->__PVT__u_add__DOT__rounded_mant = (0x7fffffU 
                                                   & (vlSelf->__PVT__u_add__DOT__mant_rounded 
                                                      >> 1U));
    } else {
        vlSelf->__PVT__u_add__DOT__final_exp = vlSelf->__PVT__u_add__DOT__norm_exp;
        vlSelf->__PVT__u_add__DOT__rounded_mant = (0x7fffffU 
                                                   & vlSelf->__PVT__u_add__DOT__mant_rounded);
    }
}

VL_INLINE_OPT void Vnpu_system_top_mac_pe___ico_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__0(Vnpu_system_top_mac_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnpu_system_top_mac_pe___ico_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__0\n"); );
    // Init
    CData/*0:0*/ u_mul__DOT____VdfgExtracted_h1f028376__0;
    u_mul__DOT____VdfgExtracted_h1f028376__0 = 0;
    IData/*23:0*/ u_add__DOT____VdfgExtracted_hb7d58418__0;
    u_add__DOT____VdfgExtracted_hb7d58418__0 = 0;
    // Body
    u_mul__DOT____VdfgExtracted_h1f028376__0 = (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                      [0xbU]
                                                      [0xfU] 
                                                      >> 0xaU))) 
                                                 & (0U 
                                                    == 
                                                    (0x3ffU 
                                                     & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                     [0xbU]
                                                     [0xfU]))) 
                                                | (IData)(
                                                          (0U 
                                                           == 
                                                           (0x7fffU 
                                                            & (IData)(vlSelf->__PVT__weight_reg)))));
    vlSelf->__PVT__u_mul__DOT__result_sign = (1U & 
                                              ((vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xbU]
                                                [0xfU] 
                                                ^ (IData)(vlSelf->__PVT__weight_reg)) 
                                               >> 0xfU));
    vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0 = (0x1ffU 
                                                  & ((0x1fU 
                                                      & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                         [0xbU]
                                                         [0xfU] 
                                                         >> 0xaU)) 
                                                     + 
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->__PVT__weight_reg) 
                                                         >> 0xaU))));
    vlSelf->__PVT__u_mul__DOT__mant_product = (0x3fffffU 
                                               & ((0x400U 
                                                   | (0x3ffU 
                                                      & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                      [0xbU]
                                                      [0xfU])) 
                                                  * 
                                                  (0x400U 
                                                   | (0x3ffU 
                                                      & (IData)(vlSelf->__PVT__weight_reg)))));
    vlSelf->__PVT__u_mul__DOT__fp32_exp = (0x1ffU & 
                                           ((0x200000U 
                                             & vlSelf->__PVT__u_mul__DOT__mant_product)
                                             ? ((IData)(0x62U) 
                                                + (IData)(vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0))
                                             : ((IData)(0x61U) 
                                                + (IData)(vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0))));
    vlSelf->__PVT__fp32_product = ((((0x1fU == (0x1fU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xbU]
                                                   [0xfU] 
                                                   >> 0xaU))) 
                                     & (0U != (0x3ffU 
                                               & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xbU]
                                               [0xfU]))) 
                                    | (IData)(((0x7c00U 
                                                == 
                                                (0x7c00U 
                                                 & (IData)(vlSelf->__PVT__weight_reg))) 
                                               & (0U 
                                                  != 
                                                  (0x3ffU 
                                                   & (IData)(vlSelf->__PVT__weight_reg))))))
                                    ? 0x7fc00000U : 
                                   ((((0x1fU == (0x1fU 
                                                 & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                    [0xbU]
                                                    [0xfU] 
                                                    >> 0xaU))) 
                                      & (0U == (0x3ffU 
                                                & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xbU]
                                                [0xfU]))) 
                                     | (IData)((0x7c00U 
                                                == 
                                                (0x7fffU 
                                                 & (IData)(vlSelf->__PVT__weight_reg)))))
                                     ? ((IData)(u_mul__DOT____VdfgExtracted_h1f028376__0)
                                         ? 0x7fc00000U
                                         : (0x7f800000U 
                                            | ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                               << 0x1fU)))
                                     : (((IData)(u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                         | (((0U == 
                                              (0x1fU 
                                               & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xbU]
                                                  [0xfU] 
                                                  >> 0xaU))) 
                                             & (0U 
                                                != 
                                                (0x3ffU 
                                                 & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [0xfU]))) 
                                            | (IData)(
                                                      ((0U 
                                                        == 
                                                        (0x7c00U 
                                                         & (IData)(vlSelf->__PVT__weight_reg))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSelf->__PVT__weight_reg)))))))
                                         ? ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                            << 0x1fU)
                                         : ((IData)(
                                                    (((IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp) 
                                                      >> 8U) 
                                                     | (0xffU 
                                                        <= (IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp))))
                                             ? (0x7f800000U 
                                                | ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                   << 0x1fU))
                                             : ((0U 
                                                 == (IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                 << 0x1fU)
                                                 : 
                                                (((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                  << 0x1fU) 
                                                 | ((0x7f800000U 
                                                     & ((IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp) 
                                                        << 0x17U)) 
                                                    | ((0x200000U 
                                                        & vlSelf->__PVT__u_mul__DOT__mant_product)
                                                        ? 
                                                       (0x7ffffcU 
                                                        & (vlSelf->__PVT__u_mul__DOT__mant_product 
                                                           << 2U))
                                                        : 
                                                       (0x7ffff8U 
                                                        & (vlSelf->__PVT__u_mul__DOT__mant_product 
                                                           << 3U))))))))));
    vlSelf->__PVT__u_add__DOT__b_is_inf = (IData)((0x7f800000U 
                                                   == 
                                                   (0x7fffffffU 
                                                    & vlSelf->__PVT__fp32_product)));
    vlSelf->__PVT__u_add__DOT__b_is_zero = (IData)(
                                                   (0U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelf->__PVT__fp32_product)));
    u_add__DOT____VdfgExtracted_hb7d58418__0 = ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSelf->__PVT__fp32_product 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x7fffffU 
                                                 & vlSelf->__PVT__fp32_product)
                                                 : 
                                                (0x800000U 
                                                 | (0x7fffffU 
                                                    & vlSelf->__PVT__fp32_product)));
    vlSelf->__PVT__u_add__DOT__a_is_larger = (((0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xbU]
                                                   [0xfU] 
                                                   >> 0x17U)) 
                                               > (0xffU 
                                                  & (vlSelf->__PVT__fp32_product 
                                                     >> 0x17U))) 
                                              | (((0xffU 
                                                   & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xbU]
                                                      [0xfU] 
                                                      >> 0x17U)) 
                                                  == 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__fp32_product 
                                                      >> 0x17U))) 
                                                 & ((0x7fffffU 
                                                     & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xbU]
                                                     [0xfU]) 
                                                    >= 
                                                    (0x7fffffU 
                                                     & vlSelf->__PVT__fp32_product))));
    if (vlSelf->__PVT__u_add__DOT__a_is_larger) {
        vlSelf->__PVT__u_add__DOT__large_sign = (1U 
                                                 & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xbU]
                                                    [0xfU] 
                                                    >> 0x1fU));
        vlSelf->__PVT__u_add__DOT__large_mant = vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__u_add__DOT__small_mant = u_add__DOT____VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__u_add__DOT__large_exp = (0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xbU]
                                                   [0xfU] 
                                                   >> 0x17U));
        vlSelf->__PVT__u_add__DOT__small_exp = (0xffU 
                                                & (vlSelf->__PVT__fp32_product 
                                                   >> 0x17U));
    } else {
        vlSelf->__PVT__u_add__DOT__large_sign = (1U 
                                                 & (vlSelf->__PVT__fp32_product 
                                                    >> 0x1fU));
        vlSelf->__PVT__u_add__DOT__large_mant = u_add__DOT____VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__u_add__DOT__small_mant = vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__u_add__DOT__large_exp = (0xffU 
                                                & (vlSelf->__PVT__fp32_product 
                                                   >> 0x17U));
        vlSelf->__PVT__u_add__DOT__small_exp = (0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xbU]
                                                   [0xfU] 
                                                   >> 0x17U));
    }
    vlSelf->__PVT__u_add__DOT__exp_diff = (0xffU & 
                                           ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                                            - (IData)(vlSelf->__PVT__u_add__DOT__small_exp)));
    if ((0U == (IData)(vlSelf->__PVT__u_add__DOT__exp_diff))) {
        vlSelf->__PVT__u_add__DOT__aligned_small = 
            (vlSelf->__PVT__u_add__DOT__small_mant 
             << 3U);
        vlSelf->__PVT__u_add__DOT__sticky_bit = 0U;
    } else if ((0x1bU > (IData)(vlSelf->__PVT__u_add__DOT__exp_diff))) {
        vlSelf->__PVT__u_add__DOT__aligned_small = 
            (0x7ffffffU & VL_SHIFTR_III(27,27,8, (vlSelf->__PVT__u_add__DOT__small_mant 
                                                  << 3U), (IData)(vlSelf->__PVT__u_add__DOT__exp_diff)));
        vlSelf->__PVT__u_add__DOT__sticky_bit = (0U 
                                                 != 
                                                 ((vlSelf->__PVT__u_add__DOT__small_mant 
                                                   << 3U) 
                                                  & (VL_SHIFTL_III(27,27,8, (IData)(1U), (IData)(vlSelf->__PVT__u_add__DOT__exp_diff)) 
                                                     - (IData)(1U))));
    } else {
        vlSelf->__PVT__u_add__DOT__aligned_small = 0U;
        vlSelf->__PVT__u_add__DOT__sticky_bit = (0U 
                                                 != vlSelf->__PVT__u_add__DOT__small_mant);
    }
    vlSelf->__PVT__u_add__DOT__aligned_small = ((0x7fffffeU 
                                                 & vlSelf->__PVT__u_add__DOT__aligned_small) 
                                                | (1U 
                                                   & (vlSelf->__PVT__u_add__DOT__aligned_small 
                                                      | (IData)(vlSelf->__PVT__u_add__DOT__sticky_bit))));
    vlSelf->__PVT__u_add__DOT__mant_sum = (0xfffffffU 
                                           & ((1U & 
                                               ((IData)(vlSelf->__PVT__u_add__DOT__large_sign) 
                                                ^ ((IData)(vlSelf->__PVT__u_add__DOT__a_is_larger)
                                                    ? 
                                                   (vlSelf->__PVT__fp32_product 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xbU]
                                                    [0xfU] 
                                                    >> 0x1fU))))
                                               ? ((vlSelf->__PVT__u_add__DOT__large_mant 
                                                   << 3U) 
                                                  - vlSelf->__PVT__u_add__DOT__aligned_small)
                                               : ((vlSelf->__PVT__u_add__DOT__large_mant 
                                                   << 3U) 
                                                  + vlSelf->__PVT__u_add__DOT__aligned_small)));
    vlSelf->__PVT__u_add__DOT__lzc = (((((((((0x8000000U 
                                              == (0x8000000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                             | (0x4000000U 
                                                == 
                                                (0xc000000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                            | (0x2000000U 
                                               == (0xe000000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                           | (0x1000000U 
                                              == (0xf000000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                          | (0x800000U 
                                             == (0xf800000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                         | (0x400000U 
                                            == (0xfc00000U 
                                                & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                        | (0x200000U 
                                           == (0xfe00000U 
                                               & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                       | (0x100000U 
                                          == (0xff00000U 
                                              & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                       ? ((0x8000000U 
                                           == (0x8000000U 
                                               & vlSelf->__PVT__u_add__DOT__mant_sum))
                                           ? 0U : (
                                                   (0x4000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0U
                                                    : 
                                                   ((0x2000000U 
                                                     == 
                                                     (0xe000000U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 1U
                                                     : 
                                                    ((0x1000000U 
                                                      == 
                                                      (0xf000000U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 2U
                                                      : 
                                                     ((0x800000U 
                                                       == 
                                                       (0xf800000U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 3U
                                                       : 
                                                      ((0x400000U 
                                                        == 
                                                        (0xfc00000U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 4U
                                                        : 
                                                       ((0x200000U 
                                                         == 
                                                         (0xfe00000U 
                                                          & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                         ? 5U
                                                         : 6U)))))))
                                       : (((((((((0x80000U 
                                                  == 
                                                  (0xff80000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                                 | (0x40000U 
                                                    == 
                                                    (0xffc0000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                | (0x20000U 
                                                   == 
                                                   (0xffe0000U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                               | (0x10000U 
                                                  == 
                                                  (0xfff0000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                              | (0x8000U 
                                                 == 
                                                 (0xfff8000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                             | (0x4000U 
                                                == 
                                                (0xfffc000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                            | (0x2000U 
                                               == (0xfffe000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                           | (0x1000U 
                                              == (0xffff000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                           ? ((0x80000U 
                                               == (0xff80000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))
                                               ? 7U
                                               : ((0x40000U 
                                                   == 
                                                   (0xffc0000U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 8U
                                                   : 
                                                  ((0x20000U 
                                                    == 
                                                    (0xffe0000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 9U
                                                    : 
                                                   ((0x10000U 
                                                     == 
                                                     (0xfff0000U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0xaU
                                                     : 
                                                    ((0x8000U 
                                                      == 
                                                      (0xfff8000U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 0xbU
                                                      : 
                                                     ((0x4000U 
                                                       == 
                                                       (0xfffc000U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 0xcU
                                                       : 
                                                      ((0x2000U 
                                                        == 
                                                        (0xfffe000U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 0xdU
                                                        : 0xeU)))))))
                                           : ((((((
                                                   (((0x800U 
                                                      == 
                                                      (0xffff800U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                                     | (0x400U 
                                                        == 
                                                        (0xffffc00U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                    | (0x200U 
                                                       == 
                                                       (0xffffe00U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                   | (0x100U 
                                                      == 
                                                      (0xfffff00U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                  | (0x80U 
                                                     == 
                                                     (0xfffff80U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                 | (0x40U 
                                                    == 
                                                    (0xfffffc0U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                | (0x20U 
                                                   == 
                                                   (0xfffffe0U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                               | (0x10U 
                                                  == 
                                                  (0xffffff0U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                               ? ((0x800U 
                                                   == 
                                                   (0xffff800U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 0xfU
                                                   : 
                                                  ((0x400U 
                                                    == 
                                                    (0xffffc00U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0x10U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0xffffe00U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0x11U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0xfffff00U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 0x12U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0xfffff80U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 0x13U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0xfffffc0U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 0x14U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0xfffffe0U 
                                                          & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                         ? 0x15U
                                                         : 0x16U)))))))
                                               : ((8U 
                                                   == 
                                                   (0xffffff8U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 0x17U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0xffffffcU 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0x18U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xffffffeU 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0x19U
                                                     : 
                                                    ((1U 
                                                      == vlSelf->__PVT__u_add__DOT__mant_sum)
                                                      ? 0x1aU
                                                      : 0x1bU)))))));
    if ((0x8000000U & vlSelf->__PVT__u_add__DOT__mant_sum)) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & (vlSelf->__PVT__u_add__DOT__mant_sum 
                                                   >> 1U));
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__u_add__DOT__large_exp)));
    } else if ((0x4000000U & vlSelf->__PVT__u_add__DOT__mant_sum)) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & vlSelf->__PVT__u_add__DOT__mant_sum);
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & (IData)(vlSelf->__PVT__u_add__DOT__large_exp));
    } else if (((0x1bU > (IData)(vlSelf->__PVT__u_add__DOT__lzc)) 
                & ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                   > (IData)(vlSelf->__PVT__u_add__DOT__lzc)))) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & (vlSelf->__PVT__u_add__DOT__mant_sum 
                                                   << (IData)(vlSelf->__PVT__u_add__DOT__lzc)));
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                                                  - (IData)(vlSelf->__PVT__u_add__DOT__lzc)));
    } else {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & 0U);
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & 0U);
    }
    vlSelf->__PVT__u_add__DOT__mant_rounded = (0x1ffffffU 
                                               & ((0xffffffU 
                                                   & (vlSelf->__PVT__u_add__DOT__norm_mant 
                                                      >> 3U)) 
                                                  + 
                                                  (1U 
                                                   & ((vlSelf->__PVT__u_add__DOT__norm_mant 
                                                       >> 2U) 
                                                      & (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xbU 
                                                                  & vlSelf->__PVT__u_add__DOT__norm_mant)))))));
    if ((0x1000000U & vlSelf->__PVT__u_add__DOT__mant_rounded)) {
        vlSelf->__PVT__u_add__DOT__final_exp = (0xffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__u_add__DOT__norm_exp)));
        vlSelf->__PVT__u_add__DOT__rounded_mant = (0x7fffffU 
                                                   & (vlSelf->__PVT__u_add__DOT__mant_rounded 
                                                      >> 1U));
    } else {
        vlSelf->__PVT__u_add__DOT__final_exp = vlSelf->__PVT__u_add__DOT__norm_exp;
        vlSelf->__PVT__u_add__DOT__rounded_mant = (0x7fffffU 
                                                   & vlSelf->__PVT__u_add__DOT__mant_rounded);
    }
}

VL_INLINE_OPT void Vnpu_system_top_mac_pe___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__0(Vnpu_system_top_mac_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnpu_system_top_mac_pe___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__0\n"); );
    // Body
    if (vlSymsp->TOP.rst_n) {
        if (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT____Vcellinp__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__weight_load_en) {
            vlSelf->__PVT__weight_reg = (vlSymsp->TOP.rdata[7U] 
                                         >> 0x10U);
        }
        vlSelf->psum_out = ((((0xffU == (0xffU & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xbU]
                                                  [0xfU] 
                                                  >> 0x17U))) 
                              & (0U != (0x7fffffU & 
                                        vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                        [0xbU][0xfU]))) 
                             | (IData)(((0x7f800000U 
                                         == (0x7f800000U 
                                             & vlSelf->__PVT__fp32_product)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSelf->__PVT__fp32_product)))))
                             ? 0x7fc00000U : (((IData)(vlSelf->__PVT__u_add__DOT__a_is_inf) 
                                               & (IData)(vlSelf->__PVT__u_add__DOT__b_is_inf))
                                               ? ((
                                                   (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xbU]
                                                    [0xfU] 
                                                    >> 0x1fU) 
                                                   != 
                                                   (vlSelf->__PVT__fp32_product 
                                                    >> 0x1fU))
                                                   ? 0x7fc00000U
                                                   : 
                                                  (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xbU]
                                                      [0xfU])))
                                               : ((IData)(vlSelf->__PVT__u_add__DOT__a_is_inf)
                                                   ? 
                                                  (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xbU]
                                                      [0xfU]))
                                                   : 
                                                  ((IData)(vlSelf->__PVT__u_add__DOT__b_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->__PVT__fp32_product))
                                                    : 
                                                   (((IData)(vlSelf->__PVT__u_add__DOT__a_is_zero) 
                                                     & (IData)(vlSelf->__PVT__u_add__DOT__b_is_zero))
                                                     ? 
                                                    (0x80000000U 
                                                     & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                        [0xbU]
                                                        [0xfU] 
                                                        & vlSelf->__PVT__fp32_product))
                                                     : 
                                                    ((IData)(vlSelf->__PVT__u_add__DOT__a_is_zero)
                                                      ? vlSelf->__PVT__fp32_product
                                                      : 
                                                     ((IData)(vlSelf->__PVT__u_add__DOT__b_is_zero)
                                                       ? 
                                                      vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xbU]
                                                      [0xfU]
                                                       : 
                                                      (((0U 
                                                         == (IData)(vlSelf->__PVT__u_add__DOT__norm_exp)) 
                                                        & (0U 
                                                           == vlSelf->__PVT__u_add__DOT__norm_mant))
                                                        ? 0U
                                                        : 
                                                       ((0xffU 
                                                         <= (IData)(vlSelf->__PVT__u_add__DOT__final_exp))
                                                         ? 
                                                        (0x7f800000U 
                                                         | ((IData)(vlSelf->__PVT__u_add__DOT__large_sign) 
                                                            << 0x1fU))
                                                         : 
                                                        (((IData)(vlSelf->__PVT__u_add__DOT__large_sign) 
                                                          << 0x1fU) 
                                                         | (((IData)(vlSelf->__PVT__u_add__DOT__final_exp) 
                                                             << 0x17U) 
                                                            | vlSelf->__PVT__u_add__DOT__rounded_mant)))))))))));
        vlSelf->act_out = vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xbU][0xfU];
    } else {
        vlSelf->__PVT__weight_reg = 0U;
        vlSelf->psum_out = 0U;
        vlSelf->act_out = 0U;
    }
}

VL_INLINE_OPT void Vnpu_system_top_mac_pe___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__1(Vnpu_system_top_mac_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnpu_system_top_mac_pe___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__1\n"); );
    // Init
    CData/*0:0*/ u_mul__DOT____VdfgExtracted_h1f028376__0;
    u_mul__DOT____VdfgExtracted_h1f028376__0 = 0;
    IData/*23:0*/ u_add__DOT____VdfgExtracted_hb7d58418__0;
    u_add__DOT____VdfgExtracted_hb7d58418__0 = 0;
    // Body
    vlSelf->__PVT__u_add__DOT__a_is_inf = ((0xffU == 
                                            (0xffU 
                                             & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xbU]
                                                [0xfU] 
                                                >> 0x17U))) 
                                           & (0U == 
                                              (0x7fffffU 
                                               & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                               [0xbU]
                                               [0xfU])));
    if ((0U == (0xffU & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                         [0xbU][0xfU] >> 0x17U)))) {
        vlSelf->__PVT__u_add__DOT__a_is_zero = (0U 
                                                == 
                                                (0x7fffffU 
                                                 & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                 [0xbU]
                                                 [0xfU]));
        vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0 
            = (0x7fffffU & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xbU][0xfU]);
    } else {
        vlSelf->__PVT__u_add__DOT__a_is_zero = 0U;
        vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0 
            = (0x800000U | (0x7fffffU & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                            [0xbU][0xfU]));
    }
    u_mul__DOT____VdfgExtracted_h1f028376__0 = (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                      [0xbU]
                                                      [0xfU] 
                                                      >> 0xaU))) 
                                                 & (0U 
                                                    == 
                                                    (0x3ffU 
                                                     & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                     [0xbU]
                                                     [0xfU]))) 
                                                | (IData)(
                                                          (0U 
                                                           == 
                                                           (0x7fffU 
                                                            & (IData)(vlSelf->__PVT__weight_reg)))));
    vlSelf->__PVT__u_mul__DOT__result_sign = (1U & 
                                              ((vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xbU]
                                                [0xfU] 
                                                ^ (IData)(vlSelf->__PVT__weight_reg)) 
                                               >> 0xfU));
    vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0 = (0x1ffU 
                                                  & ((0x1fU 
                                                      & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                         [0xbU]
                                                         [0xfU] 
                                                         >> 0xaU)) 
                                                     + 
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->__PVT__weight_reg) 
                                                         >> 0xaU))));
    vlSelf->__PVT__u_mul__DOT__mant_product = (0x3fffffU 
                                               & ((0x400U 
                                                   | (0x3ffU 
                                                      & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                      [0xbU]
                                                      [0xfU])) 
                                                  * 
                                                  (0x400U 
                                                   | (0x3ffU 
                                                      & (IData)(vlSelf->__PVT__weight_reg)))));
    vlSelf->__PVT__u_mul__DOT__fp32_exp = (0x1ffU & 
                                           ((0x200000U 
                                             & vlSelf->__PVT__u_mul__DOT__mant_product)
                                             ? ((IData)(0x62U) 
                                                + (IData)(vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0))
                                             : ((IData)(0x61U) 
                                                + (IData)(vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0))));
    vlSelf->__PVT__fp32_product = ((((0x1fU == (0x1fU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xbU]
                                                   [0xfU] 
                                                   >> 0xaU))) 
                                     & (0U != (0x3ffU 
                                               & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xbU]
                                               [0xfU]))) 
                                    | (IData)(((0x7c00U 
                                                == 
                                                (0x7c00U 
                                                 & (IData)(vlSelf->__PVT__weight_reg))) 
                                               & (0U 
                                                  != 
                                                  (0x3ffU 
                                                   & (IData)(vlSelf->__PVT__weight_reg))))))
                                    ? 0x7fc00000U : 
                                   ((((0x1fU == (0x1fU 
                                                 & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                    [0xbU]
                                                    [0xfU] 
                                                    >> 0xaU))) 
                                      & (0U == (0x3ffU 
                                                & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xbU]
                                                [0xfU]))) 
                                     | (IData)((0x7c00U 
                                                == 
                                                (0x7fffU 
                                                 & (IData)(vlSelf->__PVT__weight_reg)))))
                                     ? ((IData)(u_mul__DOT____VdfgExtracted_h1f028376__0)
                                         ? 0x7fc00000U
                                         : (0x7f800000U 
                                            | ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                               << 0x1fU)))
                                     : (((IData)(u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                         | (((0U == 
                                              (0x1fU 
                                               & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xbU]
                                                  [0xfU] 
                                                  >> 0xaU))) 
                                             & (0U 
                                                != 
                                                (0x3ffU 
                                                 & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [0xfU]))) 
                                            | (IData)(
                                                      ((0U 
                                                        == 
                                                        (0x7c00U 
                                                         & (IData)(vlSelf->__PVT__weight_reg))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSelf->__PVT__weight_reg)))))))
                                         ? ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                            << 0x1fU)
                                         : ((IData)(
                                                    (((IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp) 
                                                      >> 8U) 
                                                     | (0xffU 
                                                        <= (IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp))))
                                             ? (0x7f800000U 
                                                | ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                   << 0x1fU))
                                             : ((0U 
                                                 == (IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                 << 0x1fU)
                                                 : 
                                                (((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                  << 0x1fU) 
                                                 | ((0x7f800000U 
                                                     & ((IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp) 
                                                        << 0x17U)) 
                                                    | ((0x200000U 
                                                        & vlSelf->__PVT__u_mul__DOT__mant_product)
                                                        ? 
                                                       (0x7ffffcU 
                                                        & (vlSelf->__PVT__u_mul__DOT__mant_product 
                                                           << 2U))
                                                        : 
                                                       (0x7ffff8U 
                                                        & (vlSelf->__PVT__u_mul__DOT__mant_product 
                                                           << 3U))))))))));
    vlSelf->__PVT__u_add__DOT__b_is_inf = (IData)((0x7f800000U 
                                                   == 
                                                   (0x7fffffffU 
                                                    & vlSelf->__PVT__fp32_product)));
    vlSelf->__PVT__u_add__DOT__b_is_zero = (IData)(
                                                   (0U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelf->__PVT__fp32_product)));
    u_add__DOT____VdfgExtracted_hb7d58418__0 = ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSelf->__PVT__fp32_product 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x7fffffU 
                                                 & vlSelf->__PVT__fp32_product)
                                                 : 
                                                (0x800000U 
                                                 | (0x7fffffU 
                                                    & vlSelf->__PVT__fp32_product)));
    vlSelf->__PVT__u_add__DOT__a_is_larger = (((0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xbU]
                                                   [0xfU] 
                                                   >> 0x17U)) 
                                               > (0xffU 
                                                  & (vlSelf->__PVT__fp32_product 
                                                     >> 0x17U))) 
                                              | (((0xffU 
                                                   & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xbU]
                                                      [0xfU] 
                                                      >> 0x17U)) 
                                                  == 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__fp32_product 
                                                      >> 0x17U))) 
                                                 & ((0x7fffffU 
                                                     & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xbU]
                                                     [0xfU]) 
                                                    >= 
                                                    (0x7fffffU 
                                                     & vlSelf->__PVT__fp32_product))));
    if (vlSelf->__PVT__u_add__DOT__a_is_larger) {
        vlSelf->__PVT__u_add__DOT__large_sign = (1U 
                                                 & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xbU]
                                                    [0xfU] 
                                                    >> 0x1fU));
        vlSelf->__PVT__u_add__DOT__large_mant = vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__u_add__DOT__small_mant = u_add__DOT____VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__u_add__DOT__large_exp = (0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xbU]
                                                   [0xfU] 
                                                   >> 0x17U));
        vlSelf->__PVT__u_add__DOT__small_exp = (0xffU 
                                                & (vlSelf->__PVT__fp32_product 
                                                   >> 0x17U));
    } else {
        vlSelf->__PVT__u_add__DOT__large_sign = (1U 
                                                 & (vlSelf->__PVT__fp32_product 
                                                    >> 0x1fU));
        vlSelf->__PVT__u_add__DOT__large_mant = u_add__DOT____VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__u_add__DOT__small_mant = vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__u_add__DOT__large_exp = (0xffU 
                                                & (vlSelf->__PVT__fp32_product 
                                                   >> 0x17U));
        vlSelf->__PVT__u_add__DOT__small_exp = (0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xbU]
                                                   [0xfU] 
                                                   >> 0x17U));
    }
    vlSelf->__PVT__u_add__DOT__exp_diff = (0xffU & 
                                           ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                                            - (IData)(vlSelf->__PVT__u_add__DOT__small_exp)));
    if ((0U == (IData)(vlSelf->__PVT__u_add__DOT__exp_diff))) {
        vlSelf->__PVT__u_add__DOT__aligned_small = 
            (vlSelf->__PVT__u_add__DOT__small_mant 
             << 3U);
        vlSelf->__PVT__u_add__DOT__sticky_bit = 0U;
    } else if ((0x1bU > (IData)(vlSelf->__PVT__u_add__DOT__exp_diff))) {
        vlSelf->__PVT__u_add__DOT__aligned_small = 
            (0x7ffffffU & VL_SHIFTR_III(27,27,8, (vlSelf->__PVT__u_add__DOT__small_mant 
                                                  << 3U), (IData)(vlSelf->__PVT__u_add__DOT__exp_diff)));
        vlSelf->__PVT__u_add__DOT__sticky_bit = (0U 
                                                 != 
                                                 ((vlSelf->__PVT__u_add__DOT__small_mant 
                                                   << 3U) 
                                                  & (VL_SHIFTL_III(27,27,8, (IData)(1U), (IData)(vlSelf->__PVT__u_add__DOT__exp_diff)) 
                                                     - (IData)(1U))));
    } else {
        vlSelf->__PVT__u_add__DOT__aligned_small = 0U;
        vlSelf->__PVT__u_add__DOT__sticky_bit = (0U 
                                                 != vlSelf->__PVT__u_add__DOT__small_mant);
    }
    vlSelf->__PVT__u_add__DOT__aligned_small = ((0x7fffffeU 
                                                 & vlSelf->__PVT__u_add__DOT__aligned_small) 
                                                | (1U 
                                                   & (vlSelf->__PVT__u_add__DOT__aligned_small 
                                                      | (IData)(vlSelf->__PVT__u_add__DOT__sticky_bit))));
    vlSelf->__PVT__u_add__DOT__mant_sum = (0xfffffffU 
                                           & ((1U & 
                                               ((IData)(vlSelf->__PVT__u_add__DOT__large_sign) 
                                                ^ ((IData)(vlSelf->__PVT__u_add__DOT__a_is_larger)
                                                    ? 
                                                   (vlSelf->__PVT__fp32_product 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xbU]
                                                    [0xfU] 
                                                    >> 0x1fU))))
                                               ? ((vlSelf->__PVT__u_add__DOT__large_mant 
                                                   << 3U) 
                                                  - vlSelf->__PVT__u_add__DOT__aligned_small)
                                               : ((vlSelf->__PVT__u_add__DOT__large_mant 
                                                   << 3U) 
                                                  + vlSelf->__PVT__u_add__DOT__aligned_small)));
    vlSelf->__PVT__u_add__DOT__lzc = (((((((((0x8000000U 
                                              == (0x8000000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                             | (0x4000000U 
                                                == 
                                                (0xc000000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                            | (0x2000000U 
                                               == (0xe000000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                           | (0x1000000U 
                                              == (0xf000000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                          | (0x800000U 
                                             == (0xf800000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                         | (0x400000U 
                                            == (0xfc00000U 
                                                & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                        | (0x200000U 
                                           == (0xfe00000U 
                                               & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                       | (0x100000U 
                                          == (0xff00000U 
                                              & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                       ? ((0x8000000U 
                                           == (0x8000000U 
                                               & vlSelf->__PVT__u_add__DOT__mant_sum))
                                           ? 0U : (
                                                   (0x4000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0U
                                                    : 
                                                   ((0x2000000U 
                                                     == 
                                                     (0xe000000U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 1U
                                                     : 
                                                    ((0x1000000U 
                                                      == 
                                                      (0xf000000U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 2U
                                                      : 
                                                     ((0x800000U 
                                                       == 
                                                       (0xf800000U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 3U
                                                       : 
                                                      ((0x400000U 
                                                        == 
                                                        (0xfc00000U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 4U
                                                        : 
                                                       ((0x200000U 
                                                         == 
                                                         (0xfe00000U 
                                                          & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                         ? 5U
                                                         : 6U)))))))
                                       : (((((((((0x80000U 
                                                  == 
                                                  (0xff80000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                                 | (0x40000U 
                                                    == 
                                                    (0xffc0000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                | (0x20000U 
                                                   == 
                                                   (0xffe0000U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                               | (0x10000U 
                                                  == 
                                                  (0xfff0000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                              | (0x8000U 
                                                 == 
                                                 (0xfff8000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                             | (0x4000U 
                                                == 
                                                (0xfffc000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                            | (0x2000U 
                                               == (0xfffe000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                           | (0x1000U 
                                              == (0xffff000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                           ? ((0x80000U 
                                               == (0xff80000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))
                                               ? 7U
                                               : ((0x40000U 
                                                   == 
                                                   (0xffc0000U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 8U
                                                   : 
                                                  ((0x20000U 
                                                    == 
                                                    (0xffe0000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 9U
                                                    : 
                                                   ((0x10000U 
                                                     == 
                                                     (0xfff0000U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0xaU
                                                     : 
                                                    ((0x8000U 
                                                      == 
                                                      (0xfff8000U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 0xbU
                                                      : 
                                                     ((0x4000U 
                                                       == 
                                                       (0xfffc000U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 0xcU
                                                       : 
                                                      ((0x2000U 
                                                        == 
                                                        (0xfffe000U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 0xdU
                                                        : 0xeU)))))))
                                           : ((((((
                                                   (((0x800U 
                                                      == 
                                                      (0xffff800U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                                     | (0x400U 
                                                        == 
                                                        (0xffffc00U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                    | (0x200U 
                                                       == 
                                                       (0xffffe00U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                   | (0x100U 
                                                      == 
                                                      (0xfffff00U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                  | (0x80U 
                                                     == 
                                                     (0xfffff80U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                 | (0x40U 
                                                    == 
                                                    (0xfffffc0U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                | (0x20U 
                                                   == 
                                                   (0xfffffe0U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                               | (0x10U 
                                                  == 
                                                  (0xffffff0U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                               ? ((0x800U 
                                                   == 
                                                   (0xffff800U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 0xfU
                                                   : 
                                                  ((0x400U 
                                                    == 
                                                    (0xffffc00U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0x10U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0xffffe00U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0x11U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0xfffff00U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 0x12U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0xfffff80U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 0x13U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0xfffffc0U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 0x14U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0xfffffe0U 
                                                          & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                         ? 0x15U
                                                         : 0x16U)))))))
                                               : ((8U 
                                                   == 
                                                   (0xffffff8U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 0x17U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0xffffffcU 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0x18U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xffffffeU 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0x19U
                                                     : 
                                                    ((1U 
                                                      == vlSelf->__PVT__u_add__DOT__mant_sum)
                                                      ? 0x1aU
                                                      : 0x1bU)))))));
    if ((0x8000000U & vlSelf->__PVT__u_add__DOT__mant_sum)) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & (vlSelf->__PVT__u_add__DOT__mant_sum 
                                                   >> 1U));
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__u_add__DOT__large_exp)));
    } else if ((0x4000000U & vlSelf->__PVT__u_add__DOT__mant_sum)) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & vlSelf->__PVT__u_add__DOT__mant_sum);
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & (IData)(vlSelf->__PVT__u_add__DOT__large_exp));
    } else if (((0x1bU > (IData)(vlSelf->__PVT__u_add__DOT__lzc)) 
                & ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                   > (IData)(vlSelf->__PVT__u_add__DOT__lzc)))) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & (vlSelf->__PVT__u_add__DOT__mant_sum 
                                                   << (IData)(vlSelf->__PVT__u_add__DOT__lzc)));
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                                                  - (IData)(vlSelf->__PVT__u_add__DOT__lzc)));
    } else {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & 0U);
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & 0U);
    }
    vlSelf->__PVT__u_add__DOT__mant_rounded = (0x1ffffffU 
                                               & ((0xffffffU 
                                                   & (vlSelf->__PVT__u_add__DOT__norm_mant 
                                                      >> 3U)) 
                                                  + 
                                                  (1U 
                                                   & ((vlSelf->__PVT__u_add__DOT__norm_mant 
                                                       >> 2U) 
                                                      & (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xbU 
                                                                  & vlSelf->__PVT__u_add__DOT__norm_mant)))))));
    if ((0x1000000U & vlSelf->__PVT__u_add__DOT__mant_rounded)) {
        vlSelf->__PVT__u_add__DOT__final_exp = (0xffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__u_add__DOT__norm_exp)));
        vlSelf->__PVT__u_add__DOT__rounded_mant = (0x7fffffU 
                                                   & (vlSelf->__PVT__u_add__DOT__mant_rounded 
                                                      >> 1U));
    } else {
        vlSelf->__PVT__u_add__DOT__final_exp = vlSelf->__PVT__u_add__DOT__norm_exp;
        vlSelf->__PVT__u_add__DOT__rounded_mant = (0x7fffffU 
                                                   & vlSelf->__PVT__u_add__DOT__mant_rounded);
    }
}

VL_INLINE_OPT void Vnpu_system_top_mac_pe___ico_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__0(Vnpu_system_top_mac_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnpu_system_top_mac_pe___ico_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__0\n"); );
    // Init
    CData/*0:0*/ u_mul__DOT____VdfgExtracted_h1f028376__0;
    u_mul__DOT____VdfgExtracted_h1f028376__0 = 0;
    IData/*23:0*/ u_add__DOT____VdfgExtracted_hb7d58418__0;
    u_add__DOT____VdfgExtracted_hb7d58418__0 = 0;
    // Body
    u_mul__DOT____VdfgExtracted_h1f028376__0 = (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                      [0xcU]
                                                      [0U] 
                                                      >> 0xaU))) 
                                                 & (0U 
                                                    == 
                                                    (0x3ffU 
                                                     & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                     [0xcU]
                                                     [0U]))) 
                                                | (IData)(
                                                          (0U 
                                                           == 
                                                           (0x7fffU 
                                                            & (IData)(vlSelf->__PVT__weight_reg)))));
    vlSelf->__PVT__u_mul__DOT__result_sign = (1U & 
                                              ((vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xcU]
                                                [0U] 
                                                ^ (IData)(vlSelf->__PVT__weight_reg)) 
                                               >> 0xfU));
    vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0 = (0x1ffU 
                                                  & ((0x1fU 
                                                      & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                         [0xcU]
                                                         [0U] 
                                                         >> 0xaU)) 
                                                     + 
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->__PVT__weight_reg) 
                                                         >> 0xaU))));
    vlSelf->__PVT__u_mul__DOT__mant_product = (0x3fffffU 
                                               & ((0x400U 
                                                   | (0x3ffU 
                                                      & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                      [0xcU]
                                                      [0U])) 
                                                  * 
                                                  (0x400U 
                                                   | (0x3ffU 
                                                      & (IData)(vlSelf->__PVT__weight_reg)))));
    vlSelf->__PVT__u_mul__DOT__fp32_exp = (0x1ffU & 
                                           ((0x200000U 
                                             & vlSelf->__PVT__u_mul__DOT__mant_product)
                                             ? ((IData)(0x62U) 
                                                + (IData)(vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0))
                                             : ((IData)(0x61U) 
                                                + (IData)(vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0))));
    vlSelf->__PVT__fp32_product = ((((0x1fU == (0x1fU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xcU]
                                                   [0U] 
                                                   >> 0xaU))) 
                                     & (0U != (0x3ffU 
                                               & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xcU]
                                               [0U]))) 
                                    | (IData)(((0x7c00U 
                                                == 
                                                (0x7c00U 
                                                 & (IData)(vlSelf->__PVT__weight_reg))) 
                                               & (0U 
                                                  != 
                                                  (0x3ffU 
                                                   & (IData)(vlSelf->__PVT__weight_reg))))))
                                    ? 0x7fc00000U : 
                                   ((((0x1fU == (0x1fU 
                                                 & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                    [0xcU]
                                                    [0U] 
                                                    >> 0xaU))) 
                                      & (0U == (0x3ffU 
                                                & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xcU]
                                                [0U]))) 
                                     | (IData)((0x7c00U 
                                                == 
                                                (0x7fffU 
                                                 & (IData)(vlSelf->__PVT__weight_reg)))))
                                     ? ((IData)(u_mul__DOT____VdfgExtracted_h1f028376__0)
                                         ? 0x7fc00000U
                                         : (0x7f800000U 
                                            | ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                               << 0x1fU)))
                                     : (((IData)(u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                         | (((0U == 
                                              (0x1fU 
                                               & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xcU]
                                                  [0U] 
                                                  >> 0xaU))) 
                                             & (0U 
                                                != 
                                                (0x3ffU 
                                                 & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [0U]))) 
                                            | (IData)(
                                                      ((0U 
                                                        == 
                                                        (0x7c00U 
                                                         & (IData)(vlSelf->__PVT__weight_reg))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSelf->__PVT__weight_reg)))))))
                                         ? ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                            << 0x1fU)
                                         : ((IData)(
                                                    (((IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp) 
                                                      >> 8U) 
                                                     | (0xffU 
                                                        <= (IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp))))
                                             ? (0x7f800000U 
                                                | ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                   << 0x1fU))
                                             : ((0U 
                                                 == (IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                 << 0x1fU)
                                                 : 
                                                (((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                  << 0x1fU) 
                                                 | ((0x7f800000U 
                                                     & ((IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp) 
                                                        << 0x17U)) 
                                                    | ((0x200000U 
                                                        & vlSelf->__PVT__u_mul__DOT__mant_product)
                                                        ? 
                                                       (0x7ffffcU 
                                                        & (vlSelf->__PVT__u_mul__DOT__mant_product 
                                                           << 2U))
                                                        : 
                                                       (0x7ffff8U 
                                                        & (vlSelf->__PVT__u_mul__DOT__mant_product 
                                                           << 3U))))))))));
    vlSelf->__PVT__u_add__DOT__b_is_inf = (IData)((0x7f800000U 
                                                   == 
                                                   (0x7fffffffU 
                                                    & vlSelf->__PVT__fp32_product)));
    vlSelf->__PVT__u_add__DOT__b_is_zero = (IData)(
                                                   (0U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelf->__PVT__fp32_product)));
    u_add__DOT____VdfgExtracted_hb7d58418__0 = ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSelf->__PVT__fp32_product 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x7fffffU 
                                                 & vlSelf->__PVT__fp32_product)
                                                 : 
                                                (0x800000U 
                                                 | (0x7fffffU 
                                                    & vlSelf->__PVT__fp32_product)));
    vlSelf->__PVT__u_add__DOT__a_is_larger = (((0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [0U] 
                                                   >> 0x17U)) 
                                               > (0xffU 
                                                  & (vlSelf->__PVT__fp32_product 
                                                     >> 0x17U))) 
                                              | (((0xffU 
                                                   & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xcU]
                                                      [0U] 
                                                      >> 0x17U)) 
                                                  == 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__fp32_product 
                                                      >> 0x17U))) 
                                                 & ((0x7fffffU 
                                                     & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xcU]
                                                     [0U]) 
                                                    >= 
                                                    (0x7fffffU 
                                                     & vlSelf->__PVT__fp32_product))));
    if (vlSelf->__PVT__u_add__DOT__a_is_larger) {
        vlSelf->__PVT__u_add__DOT__large_sign = (1U 
                                                 & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xcU]
                                                    [0U] 
                                                    >> 0x1fU));
        vlSelf->__PVT__u_add__DOT__large_mant = vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__u_add__DOT__small_mant = u_add__DOT____VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__u_add__DOT__large_exp = (0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [0U] 
                                                   >> 0x17U));
        vlSelf->__PVT__u_add__DOT__small_exp = (0xffU 
                                                & (vlSelf->__PVT__fp32_product 
                                                   >> 0x17U));
    } else {
        vlSelf->__PVT__u_add__DOT__large_sign = (1U 
                                                 & (vlSelf->__PVT__fp32_product 
                                                    >> 0x1fU));
        vlSelf->__PVT__u_add__DOT__large_mant = u_add__DOT____VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__u_add__DOT__small_mant = vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__u_add__DOT__large_exp = (0xffU 
                                                & (vlSelf->__PVT__fp32_product 
                                                   >> 0x17U));
        vlSelf->__PVT__u_add__DOT__small_exp = (0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [0U] 
                                                   >> 0x17U));
    }
    vlSelf->__PVT__u_add__DOT__exp_diff = (0xffU & 
                                           ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                                            - (IData)(vlSelf->__PVT__u_add__DOT__small_exp)));
    if ((0U == (IData)(vlSelf->__PVT__u_add__DOT__exp_diff))) {
        vlSelf->__PVT__u_add__DOT__aligned_small = 
            (vlSelf->__PVT__u_add__DOT__small_mant 
             << 3U);
        vlSelf->__PVT__u_add__DOT__sticky_bit = 0U;
    } else if ((0x1bU > (IData)(vlSelf->__PVT__u_add__DOT__exp_diff))) {
        vlSelf->__PVT__u_add__DOT__aligned_small = 
            (0x7ffffffU & VL_SHIFTR_III(27,27,8, (vlSelf->__PVT__u_add__DOT__small_mant 
                                                  << 3U), (IData)(vlSelf->__PVT__u_add__DOT__exp_diff)));
        vlSelf->__PVT__u_add__DOT__sticky_bit = (0U 
                                                 != 
                                                 ((vlSelf->__PVT__u_add__DOT__small_mant 
                                                   << 3U) 
                                                  & (VL_SHIFTL_III(27,27,8, (IData)(1U), (IData)(vlSelf->__PVT__u_add__DOT__exp_diff)) 
                                                     - (IData)(1U))));
    } else {
        vlSelf->__PVT__u_add__DOT__aligned_small = 0U;
        vlSelf->__PVT__u_add__DOT__sticky_bit = (0U 
                                                 != vlSelf->__PVT__u_add__DOT__small_mant);
    }
    vlSelf->__PVT__u_add__DOT__aligned_small = ((0x7fffffeU 
                                                 & vlSelf->__PVT__u_add__DOT__aligned_small) 
                                                | (1U 
                                                   & (vlSelf->__PVT__u_add__DOT__aligned_small 
                                                      | (IData)(vlSelf->__PVT__u_add__DOT__sticky_bit))));
    vlSelf->__PVT__u_add__DOT__mant_sum = (0xfffffffU 
                                           & ((1U & 
                                               ((IData)(vlSelf->__PVT__u_add__DOT__large_sign) 
                                                ^ ((IData)(vlSelf->__PVT__u_add__DOT__a_is_larger)
                                                    ? 
                                                   (vlSelf->__PVT__fp32_product 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xcU]
                                                    [0U] 
                                                    >> 0x1fU))))
                                               ? ((vlSelf->__PVT__u_add__DOT__large_mant 
                                                   << 3U) 
                                                  - vlSelf->__PVT__u_add__DOT__aligned_small)
                                               : ((vlSelf->__PVT__u_add__DOT__large_mant 
                                                   << 3U) 
                                                  + vlSelf->__PVT__u_add__DOT__aligned_small)));
    vlSelf->__PVT__u_add__DOT__lzc = (((((((((0x8000000U 
                                              == (0x8000000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                             | (0x4000000U 
                                                == 
                                                (0xc000000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                            | (0x2000000U 
                                               == (0xe000000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                           | (0x1000000U 
                                              == (0xf000000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                          | (0x800000U 
                                             == (0xf800000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                         | (0x400000U 
                                            == (0xfc00000U 
                                                & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                        | (0x200000U 
                                           == (0xfe00000U 
                                               & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                       | (0x100000U 
                                          == (0xff00000U 
                                              & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                       ? ((0x8000000U 
                                           == (0x8000000U 
                                               & vlSelf->__PVT__u_add__DOT__mant_sum))
                                           ? 0U : (
                                                   (0x4000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0U
                                                    : 
                                                   ((0x2000000U 
                                                     == 
                                                     (0xe000000U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 1U
                                                     : 
                                                    ((0x1000000U 
                                                      == 
                                                      (0xf000000U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 2U
                                                      : 
                                                     ((0x800000U 
                                                       == 
                                                       (0xf800000U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 3U
                                                       : 
                                                      ((0x400000U 
                                                        == 
                                                        (0xfc00000U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 4U
                                                        : 
                                                       ((0x200000U 
                                                         == 
                                                         (0xfe00000U 
                                                          & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                         ? 5U
                                                         : 6U)))))))
                                       : (((((((((0x80000U 
                                                  == 
                                                  (0xff80000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                                 | (0x40000U 
                                                    == 
                                                    (0xffc0000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                | (0x20000U 
                                                   == 
                                                   (0xffe0000U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                               | (0x10000U 
                                                  == 
                                                  (0xfff0000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                              | (0x8000U 
                                                 == 
                                                 (0xfff8000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                             | (0x4000U 
                                                == 
                                                (0xfffc000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                            | (0x2000U 
                                               == (0xfffe000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                           | (0x1000U 
                                              == (0xffff000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                           ? ((0x80000U 
                                               == (0xff80000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))
                                               ? 7U
                                               : ((0x40000U 
                                                   == 
                                                   (0xffc0000U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 8U
                                                   : 
                                                  ((0x20000U 
                                                    == 
                                                    (0xffe0000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 9U
                                                    : 
                                                   ((0x10000U 
                                                     == 
                                                     (0xfff0000U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0xaU
                                                     : 
                                                    ((0x8000U 
                                                      == 
                                                      (0xfff8000U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 0xbU
                                                      : 
                                                     ((0x4000U 
                                                       == 
                                                       (0xfffc000U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 0xcU
                                                       : 
                                                      ((0x2000U 
                                                        == 
                                                        (0xfffe000U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 0xdU
                                                        : 0xeU)))))))
                                           : ((((((
                                                   (((0x800U 
                                                      == 
                                                      (0xffff800U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                                     | (0x400U 
                                                        == 
                                                        (0xffffc00U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                    | (0x200U 
                                                       == 
                                                       (0xffffe00U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                   | (0x100U 
                                                      == 
                                                      (0xfffff00U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                  | (0x80U 
                                                     == 
                                                     (0xfffff80U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                 | (0x40U 
                                                    == 
                                                    (0xfffffc0U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                | (0x20U 
                                                   == 
                                                   (0xfffffe0U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                               | (0x10U 
                                                  == 
                                                  (0xffffff0U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                               ? ((0x800U 
                                                   == 
                                                   (0xffff800U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 0xfU
                                                   : 
                                                  ((0x400U 
                                                    == 
                                                    (0xffffc00U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0x10U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0xffffe00U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0x11U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0xfffff00U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 0x12U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0xfffff80U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 0x13U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0xfffffc0U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 0x14U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0xfffffe0U 
                                                          & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                         ? 0x15U
                                                         : 0x16U)))))))
                                               : ((8U 
                                                   == 
                                                   (0xffffff8U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 0x17U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0xffffffcU 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0x18U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xffffffeU 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0x19U
                                                     : 
                                                    ((1U 
                                                      == vlSelf->__PVT__u_add__DOT__mant_sum)
                                                      ? 0x1aU
                                                      : 0x1bU)))))));
    if ((0x8000000U & vlSelf->__PVT__u_add__DOT__mant_sum)) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & (vlSelf->__PVT__u_add__DOT__mant_sum 
                                                   >> 1U));
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__u_add__DOT__large_exp)));
    } else if ((0x4000000U & vlSelf->__PVT__u_add__DOT__mant_sum)) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & vlSelf->__PVT__u_add__DOT__mant_sum);
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & (IData)(vlSelf->__PVT__u_add__DOT__large_exp));
    } else if (((0x1bU > (IData)(vlSelf->__PVT__u_add__DOT__lzc)) 
                & ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                   > (IData)(vlSelf->__PVT__u_add__DOT__lzc)))) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & (vlSelf->__PVT__u_add__DOT__mant_sum 
                                                   << (IData)(vlSelf->__PVT__u_add__DOT__lzc)));
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                                                  - (IData)(vlSelf->__PVT__u_add__DOT__lzc)));
    } else {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & 0U);
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & 0U);
    }
    vlSelf->__PVT__u_add__DOT__mant_rounded = (0x1ffffffU 
                                               & ((0xffffffU 
                                                   & (vlSelf->__PVT__u_add__DOT__norm_mant 
                                                      >> 3U)) 
                                                  + 
                                                  (1U 
                                                   & ((vlSelf->__PVT__u_add__DOT__norm_mant 
                                                       >> 2U) 
                                                      & (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xbU 
                                                                  & vlSelf->__PVT__u_add__DOT__norm_mant)))))));
    if ((0x1000000U & vlSelf->__PVT__u_add__DOT__mant_rounded)) {
        vlSelf->__PVT__u_add__DOT__final_exp = (0xffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__u_add__DOT__norm_exp)));
        vlSelf->__PVT__u_add__DOT__rounded_mant = (0x7fffffU 
                                                   & (vlSelf->__PVT__u_add__DOT__mant_rounded 
                                                      >> 1U));
    } else {
        vlSelf->__PVT__u_add__DOT__final_exp = vlSelf->__PVT__u_add__DOT__norm_exp;
        vlSelf->__PVT__u_add__DOT__rounded_mant = (0x7fffffU 
                                                   & vlSelf->__PVT__u_add__DOT__mant_rounded);
    }
}

VL_INLINE_OPT void Vnpu_system_top_mac_pe___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__0(Vnpu_system_top_mac_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnpu_system_top_mac_pe___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__0\n"); );
    // Body
    if (vlSymsp->TOP.rst_n) {
        if (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT____Vcellinp__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__weight_load_en) {
            vlSelf->__PVT__weight_reg = (0xffffU & 
                                         vlSymsp->TOP.rdata[0U]);
        }
        vlSelf->psum_out = ((((0xffU == (0xffU & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xcU]
                                                  [0U] 
                                                  >> 0x17U))) 
                              & (0U != (0x7fffffU & 
                                        vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                        [0xcU][0U]))) 
                             | (IData)(((0x7f800000U 
                                         == (0x7f800000U 
                                             & vlSelf->__PVT__fp32_product)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSelf->__PVT__fp32_product)))))
                             ? 0x7fc00000U : (((IData)(vlSelf->__PVT__u_add__DOT__a_is_inf) 
                                               & (IData)(vlSelf->__PVT__u_add__DOT__b_is_inf))
                                               ? ((
                                                   (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xcU]
                                                    [0U] 
                                                    >> 0x1fU) 
                                                   != 
                                                   (vlSelf->__PVT__fp32_product 
                                                    >> 0x1fU))
                                                   ? 0x7fc00000U
                                                   : 
                                                  (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xcU]
                                                      [0U])))
                                               : ((IData)(vlSelf->__PVT__u_add__DOT__a_is_inf)
                                                   ? 
                                                  (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xcU]
                                                      [0U]))
                                                   : 
                                                  ((IData)(vlSelf->__PVT__u_add__DOT__b_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->__PVT__fp32_product))
                                                    : 
                                                   (((IData)(vlSelf->__PVT__u_add__DOT__a_is_zero) 
                                                     & (IData)(vlSelf->__PVT__u_add__DOT__b_is_zero))
                                                     ? 
                                                    (0x80000000U 
                                                     & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                        [0xcU]
                                                        [0U] 
                                                        & vlSelf->__PVT__fp32_product))
                                                     : 
                                                    ((IData)(vlSelf->__PVT__u_add__DOT__a_is_zero)
                                                      ? vlSelf->__PVT__fp32_product
                                                      : 
                                                     ((IData)(vlSelf->__PVT__u_add__DOT__b_is_zero)
                                                       ? 
                                                      vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xcU]
                                                      [0U]
                                                       : 
                                                      (((0U 
                                                         == (IData)(vlSelf->__PVT__u_add__DOT__norm_exp)) 
                                                        & (0U 
                                                           == vlSelf->__PVT__u_add__DOT__norm_mant))
                                                        ? 0U
                                                        : 
                                                       ((0xffU 
                                                         <= (IData)(vlSelf->__PVT__u_add__DOT__final_exp))
                                                         ? 
                                                        (0x7f800000U 
                                                         | ((IData)(vlSelf->__PVT__u_add__DOT__large_sign) 
                                                            << 0x1fU))
                                                         : 
                                                        (((IData)(vlSelf->__PVT__u_add__DOT__large_sign) 
                                                          << 0x1fU) 
                                                         | (((IData)(vlSelf->__PVT__u_add__DOT__final_exp) 
                                                             << 0x17U) 
                                                            | vlSelf->__PVT__u_add__DOT__rounded_mant)))))))))));
        vlSelf->act_out = vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xcU][0U];
    } else {
        vlSelf->__PVT__weight_reg = 0U;
        vlSelf->psum_out = 0U;
        vlSelf->act_out = 0U;
    }
}

VL_INLINE_OPT void Vnpu_system_top_mac_pe___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__1(Vnpu_system_top_mac_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnpu_system_top_mac_pe___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__1\n"); );
    // Init
    CData/*0:0*/ u_mul__DOT____VdfgExtracted_h1f028376__0;
    u_mul__DOT____VdfgExtracted_h1f028376__0 = 0;
    IData/*23:0*/ u_add__DOT____VdfgExtracted_hb7d58418__0;
    u_add__DOT____VdfgExtracted_hb7d58418__0 = 0;
    // Body
    vlSelf->__PVT__u_add__DOT__a_is_inf = ((0xffU == 
                                            (0xffU 
                                             & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xcU]
                                                [0U] 
                                                >> 0x17U))) 
                                           & (0U == 
                                              (0x7fffffU 
                                               & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                               [0xcU]
                                               [0U])));
    if ((0U == (0xffU & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                         [0xcU][0U] >> 0x17U)))) {
        vlSelf->__PVT__u_add__DOT__a_is_zero = (0U 
                                                == 
                                                (0x7fffffU 
                                                 & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                 [0xcU]
                                                 [0U]));
        vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0 
            = (0x7fffffU & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xcU][0U]);
    } else {
        vlSelf->__PVT__u_add__DOT__a_is_zero = 0U;
        vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0 
            = (0x800000U | (0x7fffffU & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                            [0xcU][0U]));
    }
    u_mul__DOT____VdfgExtracted_h1f028376__0 = (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                      [0xcU]
                                                      [0U] 
                                                      >> 0xaU))) 
                                                 & (0U 
                                                    == 
                                                    (0x3ffU 
                                                     & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                     [0xcU]
                                                     [0U]))) 
                                                | (IData)(
                                                          (0U 
                                                           == 
                                                           (0x7fffU 
                                                            & (IData)(vlSelf->__PVT__weight_reg)))));
    vlSelf->__PVT__u_mul__DOT__result_sign = (1U & 
                                              ((vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xcU]
                                                [0U] 
                                                ^ (IData)(vlSelf->__PVT__weight_reg)) 
                                               >> 0xfU));
    vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0 = (0x1ffU 
                                                  & ((0x1fU 
                                                      & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                         [0xcU]
                                                         [0U] 
                                                         >> 0xaU)) 
                                                     + 
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->__PVT__weight_reg) 
                                                         >> 0xaU))));
    vlSelf->__PVT__u_mul__DOT__mant_product = (0x3fffffU 
                                               & ((0x400U 
                                                   | (0x3ffU 
                                                      & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                      [0xcU]
                                                      [0U])) 
                                                  * 
                                                  (0x400U 
                                                   | (0x3ffU 
                                                      & (IData)(vlSelf->__PVT__weight_reg)))));
    vlSelf->__PVT__u_mul__DOT__fp32_exp = (0x1ffU & 
                                           ((0x200000U 
                                             & vlSelf->__PVT__u_mul__DOT__mant_product)
                                             ? ((IData)(0x62U) 
                                                + (IData)(vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0))
                                             : ((IData)(0x61U) 
                                                + (IData)(vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0))));
    vlSelf->__PVT__fp32_product = ((((0x1fU == (0x1fU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xcU]
                                                   [0U] 
                                                   >> 0xaU))) 
                                     & (0U != (0x3ffU 
                                               & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xcU]
                                               [0U]))) 
                                    | (IData)(((0x7c00U 
                                                == 
                                                (0x7c00U 
                                                 & (IData)(vlSelf->__PVT__weight_reg))) 
                                               & (0U 
                                                  != 
                                                  (0x3ffU 
                                                   & (IData)(vlSelf->__PVT__weight_reg))))))
                                    ? 0x7fc00000U : 
                                   ((((0x1fU == (0x1fU 
                                                 & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                    [0xcU]
                                                    [0U] 
                                                    >> 0xaU))) 
                                      & (0U == (0x3ffU 
                                                & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xcU]
                                                [0U]))) 
                                     | (IData)((0x7c00U 
                                                == 
                                                (0x7fffU 
                                                 & (IData)(vlSelf->__PVT__weight_reg)))))
                                     ? ((IData)(u_mul__DOT____VdfgExtracted_h1f028376__0)
                                         ? 0x7fc00000U
                                         : (0x7f800000U 
                                            | ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                               << 0x1fU)))
                                     : (((IData)(u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                         | (((0U == 
                                              (0x1fU 
                                               & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xcU]
                                                  [0U] 
                                                  >> 0xaU))) 
                                             & (0U 
                                                != 
                                                (0x3ffU 
                                                 & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [0U]))) 
                                            | (IData)(
                                                      ((0U 
                                                        == 
                                                        (0x7c00U 
                                                         & (IData)(vlSelf->__PVT__weight_reg))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSelf->__PVT__weight_reg)))))))
                                         ? ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                            << 0x1fU)
                                         : ((IData)(
                                                    (((IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp) 
                                                      >> 8U) 
                                                     | (0xffU 
                                                        <= (IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp))))
                                             ? (0x7f800000U 
                                                | ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                   << 0x1fU))
                                             : ((0U 
                                                 == (IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                 << 0x1fU)
                                                 : 
                                                (((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                  << 0x1fU) 
                                                 | ((0x7f800000U 
                                                     & ((IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp) 
                                                        << 0x17U)) 
                                                    | ((0x200000U 
                                                        & vlSelf->__PVT__u_mul__DOT__mant_product)
                                                        ? 
                                                       (0x7ffffcU 
                                                        & (vlSelf->__PVT__u_mul__DOT__mant_product 
                                                           << 2U))
                                                        : 
                                                       (0x7ffff8U 
                                                        & (vlSelf->__PVT__u_mul__DOT__mant_product 
                                                           << 3U))))))))));
    vlSelf->__PVT__u_add__DOT__b_is_inf = (IData)((0x7f800000U 
                                                   == 
                                                   (0x7fffffffU 
                                                    & vlSelf->__PVT__fp32_product)));
    vlSelf->__PVT__u_add__DOT__b_is_zero = (IData)(
                                                   (0U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelf->__PVT__fp32_product)));
    u_add__DOT____VdfgExtracted_hb7d58418__0 = ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSelf->__PVT__fp32_product 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x7fffffU 
                                                 & vlSelf->__PVT__fp32_product)
                                                 : 
                                                (0x800000U 
                                                 | (0x7fffffU 
                                                    & vlSelf->__PVT__fp32_product)));
    vlSelf->__PVT__u_add__DOT__a_is_larger = (((0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [0U] 
                                                   >> 0x17U)) 
                                               > (0xffU 
                                                  & (vlSelf->__PVT__fp32_product 
                                                     >> 0x17U))) 
                                              | (((0xffU 
                                                   & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xcU]
                                                      [0U] 
                                                      >> 0x17U)) 
                                                  == 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__fp32_product 
                                                      >> 0x17U))) 
                                                 & ((0x7fffffU 
                                                     & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xcU]
                                                     [0U]) 
                                                    >= 
                                                    (0x7fffffU 
                                                     & vlSelf->__PVT__fp32_product))));
    if (vlSelf->__PVT__u_add__DOT__a_is_larger) {
        vlSelf->__PVT__u_add__DOT__large_sign = (1U 
                                                 & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xcU]
                                                    [0U] 
                                                    >> 0x1fU));
        vlSelf->__PVT__u_add__DOT__large_mant = vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__u_add__DOT__small_mant = u_add__DOT____VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__u_add__DOT__large_exp = (0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [0U] 
                                                   >> 0x17U));
        vlSelf->__PVT__u_add__DOT__small_exp = (0xffU 
                                                & (vlSelf->__PVT__fp32_product 
                                                   >> 0x17U));
    } else {
        vlSelf->__PVT__u_add__DOT__large_sign = (1U 
                                                 & (vlSelf->__PVT__fp32_product 
                                                    >> 0x1fU));
        vlSelf->__PVT__u_add__DOT__large_mant = u_add__DOT____VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__u_add__DOT__small_mant = vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__u_add__DOT__large_exp = (0xffU 
                                                & (vlSelf->__PVT__fp32_product 
                                                   >> 0x17U));
        vlSelf->__PVT__u_add__DOT__small_exp = (0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [0U] 
                                                   >> 0x17U));
    }
    vlSelf->__PVT__u_add__DOT__exp_diff = (0xffU & 
                                           ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                                            - (IData)(vlSelf->__PVT__u_add__DOT__small_exp)));
    if ((0U == (IData)(vlSelf->__PVT__u_add__DOT__exp_diff))) {
        vlSelf->__PVT__u_add__DOT__aligned_small = 
            (vlSelf->__PVT__u_add__DOT__small_mant 
             << 3U);
        vlSelf->__PVT__u_add__DOT__sticky_bit = 0U;
    } else if ((0x1bU > (IData)(vlSelf->__PVT__u_add__DOT__exp_diff))) {
        vlSelf->__PVT__u_add__DOT__aligned_small = 
            (0x7ffffffU & VL_SHIFTR_III(27,27,8, (vlSelf->__PVT__u_add__DOT__small_mant 
                                                  << 3U), (IData)(vlSelf->__PVT__u_add__DOT__exp_diff)));
        vlSelf->__PVT__u_add__DOT__sticky_bit = (0U 
                                                 != 
                                                 ((vlSelf->__PVT__u_add__DOT__small_mant 
                                                   << 3U) 
                                                  & (VL_SHIFTL_III(27,27,8, (IData)(1U), (IData)(vlSelf->__PVT__u_add__DOT__exp_diff)) 
                                                     - (IData)(1U))));
    } else {
        vlSelf->__PVT__u_add__DOT__aligned_small = 0U;
        vlSelf->__PVT__u_add__DOT__sticky_bit = (0U 
                                                 != vlSelf->__PVT__u_add__DOT__small_mant);
    }
    vlSelf->__PVT__u_add__DOT__aligned_small = ((0x7fffffeU 
                                                 & vlSelf->__PVT__u_add__DOT__aligned_small) 
                                                | (1U 
                                                   & (vlSelf->__PVT__u_add__DOT__aligned_small 
                                                      | (IData)(vlSelf->__PVT__u_add__DOT__sticky_bit))));
    vlSelf->__PVT__u_add__DOT__mant_sum = (0xfffffffU 
                                           & ((1U & 
                                               ((IData)(vlSelf->__PVT__u_add__DOT__large_sign) 
                                                ^ ((IData)(vlSelf->__PVT__u_add__DOT__a_is_larger)
                                                    ? 
                                                   (vlSelf->__PVT__fp32_product 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xcU]
                                                    [0U] 
                                                    >> 0x1fU))))
                                               ? ((vlSelf->__PVT__u_add__DOT__large_mant 
                                                   << 3U) 
                                                  - vlSelf->__PVT__u_add__DOT__aligned_small)
                                               : ((vlSelf->__PVT__u_add__DOT__large_mant 
                                                   << 3U) 
                                                  + vlSelf->__PVT__u_add__DOT__aligned_small)));
    vlSelf->__PVT__u_add__DOT__lzc = (((((((((0x8000000U 
                                              == (0x8000000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                             | (0x4000000U 
                                                == 
                                                (0xc000000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                            | (0x2000000U 
                                               == (0xe000000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                           | (0x1000000U 
                                              == (0xf000000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                          | (0x800000U 
                                             == (0xf800000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                         | (0x400000U 
                                            == (0xfc00000U 
                                                & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                        | (0x200000U 
                                           == (0xfe00000U 
                                               & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                       | (0x100000U 
                                          == (0xff00000U 
                                              & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                       ? ((0x8000000U 
                                           == (0x8000000U 
                                               & vlSelf->__PVT__u_add__DOT__mant_sum))
                                           ? 0U : (
                                                   (0x4000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0U
                                                    : 
                                                   ((0x2000000U 
                                                     == 
                                                     (0xe000000U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 1U
                                                     : 
                                                    ((0x1000000U 
                                                      == 
                                                      (0xf000000U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 2U
                                                      : 
                                                     ((0x800000U 
                                                       == 
                                                       (0xf800000U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 3U
                                                       : 
                                                      ((0x400000U 
                                                        == 
                                                        (0xfc00000U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 4U
                                                        : 
                                                       ((0x200000U 
                                                         == 
                                                         (0xfe00000U 
                                                          & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                         ? 5U
                                                         : 6U)))))))
                                       : (((((((((0x80000U 
                                                  == 
                                                  (0xff80000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                                 | (0x40000U 
                                                    == 
                                                    (0xffc0000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                | (0x20000U 
                                                   == 
                                                   (0xffe0000U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                               | (0x10000U 
                                                  == 
                                                  (0xfff0000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                              | (0x8000U 
                                                 == 
                                                 (0xfff8000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                             | (0x4000U 
                                                == 
                                                (0xfffc000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                            | (0x2000U 
                                               == (0xfffe000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                           | (0x1000U 
                                              == (0xffff000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                           ? ((0x80000U 
                                               == (0xff80000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))
                                               ? 7U
                                               : ((0x40000U 
                                                   == 
                                                   (0xffc0000U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 8U
                                                   : 
                                                  ((0x20000U 
                                                    == 
                                                    (0xffe0000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 9U
                                                    : 
                                                   ((0x10000U 
                                                     == 
                                                     (0xfff0000U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0xaU
                                                     : 
                                                    ((0x8000U 
                                                      == 
                                                      (0xfff8000U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 0xbU
                                                      : 
                                                     ((0x4000U 
                                                       == 
                                                       (0xfffc000U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 0xcU
                                                       : 
                                                      ((0x2000U 
                                                        == 
                                                        (0xfffe000U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 0xdU
                                                        : 0xeU)))))))
                                           : ((((((
                                                   (((0x800U 
                                                      == 
                                                      (0xffff800U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                                     | (0x400U 
                                                        == 
                                                        (0xffffc00U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                    | (0x200U 
                                                       == 
                                                       (0xffffe00U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                   | (0x100U 
                                                      == 
                                                      (0xfffff00U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                  | (0x80U 
                                                     == 
                                                     (0xfffff80U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                 | (0x40U 
                                                    == 
                                                    (0xfffffc0U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                | (0x20U 
                                                   == 
                                                   (0xfffffe0U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                               | (0x10U 
                                                  == 
                                                  (0xffffff0U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                               ? ((0x800U 
                                                   == 
                                                   (0xffff800U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 0xfU
                                                   : 
                                                  ((0x400U 
                                                    == 
                                                    (0xffffc00U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0x10U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0xffffe00U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0x11U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0xfffff00U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 0x12U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0xfffff80U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 0x13U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0xfffffc0U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 0x14U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0xfffffe0U 
                                                          & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                         ? 0x15U
                                                         : 0x16U)))))))
                                               : ((8U 
                                                   == 
                                                   (0xffffff8U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 0x17U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0xffffffcU 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0x18U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xffffffeU 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0x19U
                                                     : 
                                                    ((1U 
                                                      == vlSelf->__PVT__u_add__DOT__mant_sum)
                                                      ? 0x1aU
                                                      : 0x1bU)))))));
    if ((0x8000000U & vlSelf->__PVT__u_add__DOT__mant_sum)) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & (vlSelf->__PVT__u_add__DOT__mant_sum 
                                                   >> 1U));
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__u_add__DOT__large_exp)));
    } else if ((0x4000000U & vlSelf->__PVT__u_add__DOT__mant_sum)) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & vlSelf->__PVT__u_add__DOT__mant_sum);
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & (IData)(vlSelf->__PVT__u_add__DOT__large_exp));
    } else if (((0x1bU > (IData)(vlSelf->__PVT__u_add__DOT__lzc)) 
                & ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                   > (IData)(vlSelf->__PVT__u_add__DOT__lzc)))) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & (vlSelf->__PVT__u_add__DOT__mant_sum 
                                                   << (IData)(vlSelf->__PVT__u_add__DOT__lzc)));
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                                                  - (IData)(vlSelf->__PVT__u_add__DOT__lzc)));
    } else {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & 0U);
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & 0U);
    }
    vlSelf->__PVT__u_add__DOT__mant_rounded = (0x1ffffffU 
                                               & ((0xffffffU 
                                                   & (vlSelf->__PVT__u_add__DOT__norm_mant 
                                                      >> 3U)) 
                                                  + 
                                                  (1U 
                                                   & ((vlSelf->__PVT__u_add__DOT__norm_mant 
                                                       >> 2U) 
                                                      & (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xbU 
                                                                  & vlSelf->__PVT__u_add__DOT__norm_mant)))))));
    if ((0x1000000U & vlSelf->__PVT__u_add__DOT__mant_rounded)) {
        vlSelf->__PVT__u_add__DOT__final_exp = (0xffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__u_add__DOT__norm_exp)));
        vlSelf->__PVT__u_add__DOT__rounded_mant = (0x7fffffU 
                                                   & (vlSelf->__PVT__u_add__DOT__mant_rounded 
                                                      >> 1U));
    } else {
        vlSelf->__PVT__u_add__DOT__final_exp = vlSelf->__PVT__u_add__DOT__norm_exp;
        vlSelf->__PVT__u_add__DOT__rounded_mant = (0x7fffffU 
                                                   & vlSelf->__PVT__u_add__DOT__mant_rounded);
    }
}

VL_INLINE_OPT void Vnpu_system_top_mac_pe___ico_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__0(Vnpu_system_top_mac_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnpu_system_top_mac_pe___ico_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__0\n"); );
    // Init
    CData/*0:0*/ u_mul__DOT____VdfgExtracted_h1f028376__0;
    u_mul__DOT____VdfgExtracted_h1f028376__0 = 0;
    IData/*23:0*/ u_add__DOT____VdfgExtracted_hb7d58418__0;
    u_add__DOT____VdfgExtracted_hb7d58418__0 = 0;
    // Body
    u_mul__DOT____VdfgExtracted_h1f028376__0 = (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                      [0xcU]
                                                      [1U] 
                                                      >> 0xaU))) 
                                                 & (0U 
                                                    == 
                                                    (0x3ffU 
                                                     & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                     [0xcU]
                                                     [1U]))) 
                                                | (IData)(
                                                          (0U 
                                                           == 
                                                           (0x7fffU 
                                                            & (IData)(vlSelf->__PVT__weight_reg)))));
    vlSelf->__PVT__u_mul__DOT__result_sign = (1U & 
                                              ((vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xcU]
                                                [1U] 
                                                ^ (IData)(vlSelf->__PVT__weight_reg)) 
                                               >> 0xfU));
    vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0 = (0x1ffU 
                                                  & ((0x1fU 
                                                      & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                         [0xcU]
                                                         [1U] 
                                                         >> 0xaU)) 
                                                     + 
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->__PVT__weight_reg) 
                                                         >> 0xaU))));
    vlSelf->__PVT__u_mul__DOT__mant_product = (0x3fffffU 
                                               & ((0x400U 
                                                   | (0x3ffU 
                                                      & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                      [0xcU]
                                                      [1U])) 
                                                  * 
                                                  (0x400U 
                                                   | (0x3ffU 
                                                      & (IData)(vlSelf->__PVT__weight_reg)))));
    vlSelf->__PVT__u_mul__DOT__fp32_exp = (0x1ffU & 
                                           ((0x200000U 
                                             & vlSelf->__PVT__u_mul__DOT__mant_product)
                                             ? ((IData)(0x62U) 
                                                + (IData)(vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0))
                                             : ((IData)(0x61U) 
                                                + (IData)(vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0))));
    vlSelf->__PVT__fp32_product = ((((0x1fU == (0x1fU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xcU]
                                                   [1U] 
                                                   >> 0xaU))) 
                                     & (0U != (0x3ffU 
                                               & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xcU]
                                               [1U]))) 
                                    | (IData)(((0x7c00U 
                                                == 
                                                (0x7c00U 
                                                 & (IData)(vlSelf->__PVT__weight_reg))) 
                                               & (0U 
                                                  != 
                                                  (0x3ffU 
                                                   & (IData)(vlSelf->__PVT__weight_reg))))))
                                    ? 0x7fc00000U : 
                                   ((((0x1fU == (0x1fU 
                                                 & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                    [0xcU]
                                                    [1U] 
                                                    >> 0xaU))) 
                                      & (0U == (0x3ffU 
                                                & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xcU]
                                                [1U]))) 
                                     | (IData)((0x7c00U 
                                                == 
                                                (0x7fffU 
                                                 & (IData)(vlSelf->__PVT__weight_reg)))))
                                     ? ((IData)(u_mul__DOT____VdfgExtracted_h1f028376__0)
                                         ? 0x7fc00000U
                                         : (0x7f800000U 
                                            | ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                               << 0x1fU)))
                                     : (((IData)(u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                         | (((0U == 
                                              (0x1fU 
                                               & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xcU]
                                                  [1U] 
                                                  >> 0xaU))) 
                                             & (0U 
                                                != 
                                                (0x3ffU 
                                                 & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [1U]))) 
                                            | (IData)(
                                                      ((0U 
                                                        == 
                                                        (0x7c00U 
                                                         & (IData)(vlSelf->__PVT__weight_reg))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSelf->__PVT__weight_reg)))))))
                                         ? ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                            << 0x1fU)
                                         : ((IData)(
                                                    (((IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp) 
                                                      >> 8U) 
                                                     | (0xffU 
                                                        <= (IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp))))
                                             ? (0x7f800000U 
                                                | ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                   << 0x1fU))
                                             : ((0U 
                                                 == (IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                 << 0x1fU)
                                                 : 
                                                (((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                  << 0x1fU) 
                                                 | ((0x7f800000U 
                                                     & ((IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp) 
                                                        << 0x17U)) 
                                                    | ((0x200000U 
                                                        & vlSelf->__PVT__u_mul__DOT__mant_product)
                                                        ? 
                                                       (0x7ffffcU 
                                                        & (vlSelf->__PVT__u_mul__DOT__mant_product 
                                                           << 2U))
                                                        : 
                                                       (0x7ffff8U 
                                                        & (vlSelf->__PVT__u_mul__DOT__mant_product 
                                                           << 3U))))))))));
    vlSelf->__PVT__u_add__DOT__b_is_inf = (IData)((0x7f800000U 
                                                   == 
                                                   (0x7fffffffU 
                                                    & vlSelf->__PVT__fp32_product)));
    vlSelf->__PVT__u_add__DOT__b_is_zero = (IData)(
                                                   (0U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelf->__PVT__fp32_product)));
    u_add__DOT____VdfgExtracted_hb7d58418__0 = ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSelf->__PVT__fp32_product 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x7fffffU 
                                                 & vlSelf->__PVT__fp32_product)
                                                 : 
                                                (0x800000U 
                                                 | (0x7fffffU 
                                                    & vlSelf->__PVT__fp32_product)));
    vlSelf->__PVT__u_add__DOT__a_is_larger = (((0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [1U] 
                                                   >> 0x17U)) 
                                               > (0xffU 
                                                  & (vlSelf->__PVT__fp32_product 
                                                     >> 0x17U))) 
                                              | (((0xffU 
                                                   & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xcU]
                                                      [1U] 
                                                      >> 0x17U)) 
                                                  == 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__fp32_product 
                                                      >> 0x17U))) 
                                                 & ((0x7fffffU 
                                                     & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xcU]
                                                     [1U]) 
                                                    >= 
                                                    (0x7fffffU 
                                                     & vlSelf->__PVT__fp32_product))));
    if (vlSelf->__PVT__u_add__DOT__a_is_larger) {
        vlSelf->__PVT__u_add__DOT__large_sign = (1U 
                                                 & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xcU]
                                                    [1U] 
                                                    >> 0x1fU));
        vlSelf->__PVT__u_add__DOT__large_mant = vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__u_add__DOT__small_mant = u_add__DOT____VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__u_add__DOT__large_exp = (0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [1U] 
                                                   >> 0x17U));
        vlSelf->__PVT__u_add__DOT__small_exp = (0xffU 
                                                & (vlSelf->__PVT__fp32_product 
                                                   >> 0x17U));
    } else {
        vlSelf->__PVT__u_add__DOT__large_sign = (1U 
                                                 & (vlSelf->__PVT__fp32_product 
                                                    >> 0x1fU));
        vlSelf->__PVT__u_add__DOT__large_mant = u_add__DOT____VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__u_add__DOT__small_mant = vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__u_add__DOT__large_exp = (0xffU 
                                                & (vlSelf->__PVT__fp32_product 
                                                   >> 0x17U));
        vlSelf->__PVT__u_add__DOT__small_exp = (0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [1U] 
                                                   >> 0x17U));
    }
    vlSelf->__PVT__u_add__DOT__exp_diff = (0xffU & 
                                           ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                                            - (IData)(vlSelf->__PVT__u_add__DOT__small_exp)));
    if ((0U == (IData)(vlSelf->__PVT__u_add__DOT__exp_diff))) {
        vlSelf->__PVT__u_add__DOT__aligned_small = 
            (vlSelf->__PVT__u_add__DOT__small_mant 
             << 3U);
        vlSelf->__PVT__u_add__DOT__sticky_bit = 0U;
    } else if ((0x1bU > (IData)(vlSelf->__PVT__u_add__DOT__exp_diff))) {
        vlSelf->__PVT__u_add__DOT__aligned_small = 
            (0x7ffffffU & VL_SHIFTR_III(27,27,8, (vlSelf->__PVT__u_add__DOT__small_mant 
                                                  << 3U), (IData)(vlSelf->__PVT__u_add__DOT__exp_diff)));
        vlSelf->__PVT__u_add__DOT__sticky_bit = (0U 
                                                 != 
                                                 ((vlSelf->__PVT__u_add__DOT__small_mant 
                                                   << 3U) 
                                                  & (VL_SHIFTL_III(27,27,8, (IData)(1U), (IData)(vlSelf->__PVT__u_add__DOT__exp_diff)) 
                                                     - (IData)(1U))));
    } else {
        vlSelf->__PVT__u_add__DOT__aligned_small = 0U;
        vlSelf->__PVT__u_add__DOT__sticky_bit = (0U 
                                                 != vlSelf->__PVT__u_add__DOT__small_mant);
    }
    vlSelf->__PVT__u_add__DOT__aligned_small = ((0x7fffffeU 
                                                 & vlSelf->__PVT__u_add__DOT__aligned_small) 
                                                | (1U 
                                                   & (vlSelf->__PVT__u_add__DOT__aligned_small 
                                                      | (IData)(vlSelf->__PVT__u_add__DOT__sticky_bit))));
    vlSelf->__PVT__u_add__DOT__mant_sum = (0xfffffffU 
                                           & ((1U & 
                                               ((IData)(vlSelf->__PVT__u_add__DOT__large_sign) 
                                                ^ ((IData)(vlSelf->__PVT__u_add__DOT__a_is_larger)
                                                    ? 
                                                   (vlSelf->__PVT__fp32_product 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xcU]
                                                    [1U] 
                                                    >> 0x1fU))))
                                               ? ((vlSelf->__PVT__u_add__DOT__large_mant 
                                                   << 3U) 
                                                  - vlSelf->__PVT__u_add__DOT__aligned_small)
                                               : ((vlSelf->__PVT__u_add__DOT__large_mant 
                                                   << 3U) 
                                                  + vlSelf->__PVT__u_add__DOT__aligned_small)));
    vlSelf->__PVT__u_add__DOT__lzc = (((((((((0x8000000U 
                                              == (0x8000000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                             | (0x4000000U 
                                                == 
                                                (0xc000000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                            | (0x2000000U 
                                               == (0xe000000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                           | (0x1000000U 
                                              == (0xf000000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                          | (0x800000U 
                                             == (0xf800000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                         | (0x400000U 
                                            == (0xfc00000U 
                                                & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                        | (0x200000U 
                                           == (0xfe00000U 
                                               & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                       | (0x100000U 
                                          == (0xff00000U 
                                              & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                       ? ((0x8000000U 
                                           == (0x8000000U 
                                               & vlSelf->__PVT__u_add__DOT__mant_sum))
                                           ? 0U : (
                                                   (0x4000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0U
                                                    : 
                                                   ((0x2000000U 
                                                     == 
                                                     (0xe000000U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 1U
                                                     : 
                                                    ((0x1000000U 
                                                      == 
                                                      (0xf000000U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 2U
                                                      : 
                                                     ((0x800000U 
                                                       == 
                                                       (0xf800000U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 3U
                                                       : 
                                                      ((0x400000U 
                                                        == 
                                                        (0xfc00000U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 4U
                                                        : 
                                                       ((0x200000U 
                                                         == 
                                                         (0xfe00000U 
                                                          & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                         ? 5U
                                                         : 6U)))))))
                                       : (((((((((0x80000U 
                                                  == 
                                                  (0xff80000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                                 | (0x40000U 
                                                    == 
                                                    (0xffc0000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                | (0x20000U 
                                                   == 
                                                   (0xffe0000U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                               | (0x10000U 
                                                  == 
                                                  (0xfff0000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                              | (0x8000U 
                                                 == 
                                                 (0xfff8000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                             | (0x4000U 
                                                == 
                                                (0xfffc000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                            | (0x2000U 
                                               == (0xfffe000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                           | (0x1000U 
                                              == (0xffff000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                           ? ((0x80000U 
                                               == (0xff80000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))
                                               ? 7U
                                               : ((0x40000U 
                                                   == 
                                                   (0xffc0000U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 8U
                                                   : 
                                                  ((0x20000U 
                                                    == 
                                                    (0xffe0000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 9U
                                                    : 
                                                   ((0x10000U 
                                                     == 
                                                     (0xfff0000U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0xaU
                                                     : 
                                                    ((0x8000U 
                                                      == 
                                                      (0xfff8000U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 0xbU
                                                      : 
                                                     ((0x4000U 
                                                       == 
                                                       (0xfffc000U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 0xcU
                                                       : 
                                                      ((0x2000U 
                                                        == 
                                                        (0xfffe000U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 0xdU
                                                        : 0xeU)))))))
                                           : ((((((
                                                   (((0x800U 
                                                      == 
                                                      (0xffff800U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                                     | (0x400U 
                                                        == 
                                                        (0xffffc00U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                    | (0x200U 
                                                       == 
                                                       (0xffffe00U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                   | (0x100U 
                                                      == 
                                                      (0xfffff00U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                  | (0x80U 
                                                     == 
                                                     (0xfffff80U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                 | (0x40U 
                                                    == 
                                                    (0xfffffc0U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                | (0x20U 
                                                   == 
                                                   (0xfffffe0U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                               | (0x10U 
                                                  == 
                                                  (0xffffff0U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                               ? ((0x800U 
                                                   == 
                                                   (0xffff800U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 0xfU
                                                   : 
                                                  ((0x400U 
                                                    == 
                                                    (0xffffc00U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0x10U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0xffffe00U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0x11U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0xfffff00U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 0x12U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0xfffff80U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 0x13U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0xfffffc0U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 0x14U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0xfffffe0U 
                                                          & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                         ? 0x15U
                                                         : 0x16U)))))))
                                               : ((8U 
                                                   == 
                                                   (0xffffff8U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 0x17U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0xffffffcU 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0x18U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xffffffeU 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0x19U
                                                     : 
                                                    ((1U 
                                                      == vlSelf->__PVT__u_add__DOT__mant_sum)
                                                      ? 0x1aU
                                                      : 0x1bU)))))));
    if ((0x8000000U & vlSelf->__PVT__u_add__DOT__mant_sum)) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & (vlSelf->__PVT__u_add__DOT__mant_sum 
                                                   >> 1U));
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__u_add__DOT__large_exp)));
    } else if ((0x4000000U & vlSelf->__PVT__u_add__DOT__mant_sum)) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & vlSelf->__PVT__u_add__DOT__mant_sum);
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & (IData)(vlSelf->__PVT__u_add__DOT__large_exp));
    } else if (((0x1bU > (IData)(vlSelf->__PVT__u_add__DOT__lzc)) 
                & ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                   > (IData)(vlSelf->__PVT__u_add__DOT__lzc)))) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & (vlSelf->__PVT__u_add__DOT__mant_sum 
                                                   << (IData)(vlSelf->__PVT__u_add__DOT__lzc)));
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                                                  - (IData)(vlSelf->__PVT__u_add__DOT__lzc)));
    } else {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & 0U);
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & 0U);
    }
    vlSelf->__PVT__u_add__DOT__mant_rounded = (0x1ffffffU 
                                               & ((0xffffffU 
                                                   & (vlSelf->__PVT__u_add__DOT__norm_mant 
                                                      >> 3U)) 
                                                  + 
                                                  (1U 
                                                   & ((vlSelf->__PVT__u_add__DOT__norm_mant 
                                                       >> 2U) 
                                                      & (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xbU 
                                                                  & vlSelf->__PVT__u_add__DOT__norm_mant)))))));
    if ((0x1000000U & vlSelf->__PVT__u_add__DOT__mant_rounded)) {
        vlSelf->__PVT__u_add__DOT__final_exp = (0xffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__u_add__DOT__norm_exp)));
        vlSelf->__PVT__u_add__DOT__rounded_mant = (0x7fffffU 
                                                   & (vlSelf->__PVT__u_add__DOT__mant_rounded 
                                                      >> 1U));
    } else {
        vlSelf->__PVT__u_add__DOT__final_exp = vlSelf->__PVT__u_add__DOT__norm_exp;
        vlSelf->__PVT__u_add__DOT__rounded_mant = (0x7fffffU 
                                                   & vlSelf->__PVT__u_add__DOT__mant_rounded);
    }
}

VL_INLINE_OPT void Vnpu_system_top_mac_pe___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__0(Vnpu_system_top_mac_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnpu_system_top_mac_pe___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__0\n"); );
    // Body
    if (vlSymsp->TOP.rst_n) {
        if (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT____Vcellinp__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__weight_load_en) {
            vlSelf->__PVT__weight_reg = (vlSymsp->TOP.rdata[0U] 
                                         >> 0x10U);
        }
        vlSelf->psum_out = ((((0xffU == (0xffU & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xcU]
                                                  [1U] 
                                                  >> 0x17U))) 
                              & (0U != (0x7fffffU & 
                                        vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                        [0xcU][1U]))) 
                             | (IData)(((0x7f800000U 
                                         == (0x7f800000U 
                                             & vlSelf->__PVT__fp32_product)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSelf->__PVT__fp32_product)))))
                             ? 0x7fc00000U : (((IData)(vlSelf->__PVT__u_add__DOT__a_is_inf) 
                                               & (IData)(vlSelf->__PVT__u_add__DOT__b_is_inf))
                                               ? ((
                                                   (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xcU]
                                                    [1U] 
                                                    >> 0x1fU) 
                                                   != 
                                                   (vlSelf->__PVT__fp32_product 
                                                    >> 0x1fU))
                                                   ? 0x7fc00000U
                                                   : 
                                                  (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xcU]
                                                      [1U])))
                                               : ((IData)(vlSelf->__PVT__u_add__DOT__a_is_inf)
                                                   ? 
                                                  (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xcU]
                                                      [1U]))
                                                   : 
                                                  ((IData)(vlSelf->__PVT__u_add__DOT__b_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->__PVT__fp32_product))
                                                    : 
                                                   (((IData)(vlSelf->__PVT__u_add__DOT__a_is_zero) 
                                                     & (IData)(vlSelf->__PVT__u_add__DOT__b_is_zero))
                                                     ? 
                                                    (0x80000000U 
                                                     & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                        [0xcU]
                                                        [1U] 
                                                        & vlSelf->__PVT__fp32_product))
                                                     : 
                                                    ((IData)(vlSelf->__PVT__u_add__DOT__a_is_zero)
                                                      ? vlSelf->__PVT__fp32_product
                                                      : 
                                                     ((IData)(vlSelf->__PVT__u_add__DOT__b_is_zero)
                                                       ? 
                                                      vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xcU]
                                                      [1U]
                                                       : 
                                                      (((0U 
                                                         == (IData)(vlSelf->__PVT__u_add__DOT__norm_exp)) 
                                                        & (0U 
                                                           == vlSelf->__PVT__u_add__DOT__norm_mant))
                                                        ? 0U
                                                        : 
                                                       ((0xffU 
                                                         <= (IData)(vlSelf->__PVT__u_add__DOT__final_exp))
                                                         ? 
                                                        (0x7f800000U 
                                                         | ((IData)(vlSelf->__PVT__u_add__DOT__large_sign) 
                                                            << 0x1fU))
                                                         : 
                                                        (((IData)(vlSelf->__PVT__u_add__DOT__large_sign) 
                                                          << 0x1fU) 
                                                         | (((IData)(vlSelf->__PVT__u_add__DOT__final_exp) 
                                                             << 0x17U) 
                                                            | vlSelf->__PVT__u_add__DOT__rounded_mant)))))))))));
        vlSelf->act_out = vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xcU][1U];
    } else {
        vlSelf->__PVT__weight_reg = 0U;
        vlSelf->psum_out = 0U;
        vlSelf->act_out = 0U;
    }
}

VL_INLINE_OPT void Vnpu_system_top_mac_pe___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__1(Vnpu_system_top_mac_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnpu_system_top_mac_pe___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__1\n"); );
    // Init
    CData/*0:0*/ u_mul__DOT____VdfgExtracted_h1f028376__0;
    u_mul__DOT____VdfgExtracted_h1f028376__0 = 0;
    IData/*23:0*/ u_add__DOT____VdfgExtracted_hb7d58418__0;
    u_add__DOT____VdfgExtracted_hb7d58418__0 = 0;
    // Body
    vlSelf->__PVT__u_add__DOT__a_is_inf = ((0xffU == 
                                            (0xffU 
                                             & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xcU]
                                                [1U] 
                                                >> 0x17U))) 
                                           & (0U == 
                                              (0x7fffffU 
                                               & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                               [0xcU]
                                               [1U])));
    if ((0U == (0xffU & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                         [0xcU][1U] >> 0x17U)))) {
        vlSelf->__PVT__u_add__DOT__a_is_zero = (0U 
                                                == 
                                                (0x7fffffU 
                                                 & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                 [0xcU]
                                                 [1U]));
        vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0 
            = (0x7fffffU & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xcU][1U]);
    } else {
        vlSelf->__PVT__u_add__DOT__a_is_zero = 0U;
        vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0 
            = (0x800000U | (0x7fffffU & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                            [0xcU][1U]));
    }
    u_mul__DOT____VdfgExtracted_h1f028376__0 = (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                      [0xcU]
                                                      [1U] 
                                                      >> 0xaU))) 
                                                 & (0U 
                                                    == 
                                                    (0x3ffU 
                                                     & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                     [0xcU]
                                                     [1U]))) 
                                                | (IData)(
                                                          (0U 
                                                           == 
                                                           (0x7fffU 
                                                            & (IData)(vlSelf->__PVT__weight_reg)))));
    vlSelf->__PVT__u_mul__DOT__result_sign = (1U & 
                                              ((vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xcU]
                                                [1U] 
                                                ^ (IData)(vlSelf->__PVT__weight_reg)) 
                                               >> 0xfU));
    vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0 = (0x1ffU 
                                                  & ((0x1fU 
                                                      & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                         [0xcU]
                                                         [1U] 
                                                         >> 0xaU)) 
                                                     + 
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->__PVT__weight_reg) 
                                                         >> 0xaU))));
    vlSelf->__PVT__u_mul__DOT__mant_product = (0x3fffffU 
                                               & ((0x400U 
                                                   | (0x3ffU 
                                                      & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                      [0xcU]
                                                      [1U])) 
                                                  * 
                                                  (0x400U 
                                                   | (0x3ffU 
                                                      & (IData)(vlSelf->__PVT__weight_reg)))));
    vlSelf->__PVT__u_mul__DOT__fp32_exp = (0x1ffU & 
                                           ((0x200000U 
                                             & vlSelf->__PVT__u_mul__DOT__mant_product)
                                             ? ((IData)(0x62U) 
                                                + (IData)(vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0))
                                             : ((IData)(0x61U) 
                                                + (IData)(vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0))));
    vlSelf->__PVT__fp32_product = ((((0x1fU == (0x1fU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xcU]
                                                   [1U] 
                                                   >> 0xaU))) 
                                     & (0U != (0x3ffU 
                                               & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xcU]
                                               [1U]))) 
                                    | (IData)(((0x7c00U 
                                                == 
                                                (0x7c00U 
                                                 & (IData)(vlSelf->__PVT__weight_reg))) 
                                               & (0U 
                                                  != 
                                                  (0x3ffU 
                                                   & (IData)(vlSelf->__PVT__weight_reg))))))
                                    ? 0x7fc00000U : 
                                   ((((0x1fU == (0x1fU 
                                                 & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                    [0xcU]
                                                    [1U] 
                                                    >> 0xaU))) 
                                      & (0U == (0x3ffU 
                                                & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xcU]
                                                [1U]))) 
                                     | (IData)((0x7c00U 
                                                == 
                                                (0x7fffU 
                                                 & (IData)(vlSelf->__PVT__weight_reg)))))
                                     ? ((IData)(u_mul__DOT____VdfgExtracted_h1f028376__0)
                                         ? 0x7fc00000U
                                         : (0x7f800000U 
                                            | ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                               << 0x1fU)))
                                     : (((IData)(u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                         | (((0U == 
                                              (0x1fU 
                                               & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xcU]
                                                  [1U] 
                                                  >> 0xaU))) 
                                             & (0U 
                                                != 
                                                (0x3ffU 
                                                 & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [1U]))) 
                                            | (IData)(
                                                      ((0U 
                                                        == 
                                                        (0x7c00U 
                                                         & (IData)(vlSelf->__PVT__weight_reg))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSelf->__PVT__weight_reg)))))))
                                         ? ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                            << 0x1fU)
                                         : ((IData)(
                                                    (((IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp) 
                                                      >> 8U) 
                                                     | (0xffU 
                                                        <= (IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp))))
                                             ? (0x7f800000U 
                                                | ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                   << 0x1fU))
                                             : ((0U 
                                                 == (IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                 << 0x1fU)
                                                 : 
                                                (((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                  << 0x1fU) 
                                                 | ((0x7f800000U 
                                                     & ((IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp) 
                                                        << 0x17U)) 
                                                    | ((0x200000U 
                                                        & vlSelf->__PVT__u_mul__DOT__mant_product)
                                                        ? 
                                                       (0x7ffffcU 
                                                        & (vlSelf->__PVT__u_mul__DOT__mant_product 
                                                           << 2U))
                                                        : 
                                                       (0x7ffff8U 
                                                        & (vlSelf->__PVT__u_mul__DOT__mant_product 
                                                           << 3U))))))))));
    vlSelf->__PVT__u_add__DOT__b_is_inf = (IData)((0x7f800000U 
                                                   == 
                                                   (0x7fffffffU 
                                                    & vlSelf->__PVT__fp32_product)));
    vlSelf->__PVT__u_add__DOT__b_is_zero = (IData)(
                                                   (0U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelf->__PVT__fp32_product)));
    u_add__DOT____VdfgExtracted_hb7d58418__0 = ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSelf->__PVT__fp32_product 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x7fffffU 
                                                 & vlSelf->__PVT__fp32_product)
                                                 : 
                                                (0x800000U 
                                                 | (0x7fffffU 
                                                    & vlSelf->__PVT__fp32_product)));
    vlSelf->__PVT__u_add__DOT__a_is_larger = (((0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [1U] 
                                                   >> 0x17U)) 
                                               > (0xffU 
                                                  & (vlSelf->__PVT__fp32_product 
                                                     >> 0x17U))) 
                                              | (((0xffU 
                                                   & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xcU]
                                                      [1U] 
                                                      >> 0x17U)) 
                                                  == 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__fp32_product 
                                                      >> 0x17U))) 
                                                 & ((0x7fffffU 
                                                     & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xcU]
                                                     [1U]) 
                                                    >= 
                                                    (0x7fffffU 
                                                     & vlSelf->__PVT__fp32_product))));
    if (vlSelf->__PVT__u_add__DOT__a_is_larger) {
        vlSelf->__PVT__u_add__DOT__large_sign = (1U 
                                                 & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xcU]
                                                    [1U] 
                                                    >> 0x1fU));
        vlSelf->__PVT__u_add__DOT__large_mant = vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__u_add__DOT__small_mant = u_add__DOT____VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__u_add__DOT__large_exp = (0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [1U] 
                                                   >> 0x17U));
        vlSelf->__PVT__u_add__DOT__small_exp = (0xffU 
                                                & (vlSelf->__PVT__fp32_product 
                                                   >> 0x17U));
    } else {
        vlSelf->__PVT__u_add__DOT__large_sign = (1U 
                                                 & (vlSelf->__PVT__fp32_product 
                                                    >> 0x1fU));
        vlSelf->__PVT__u_add__DOT__large_mant = u_add__DOT____VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__u_add__DOT__small_mant = vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__u_add__DOT__large_exp = (0xffU 
                                                & (vlSelf->__PVT__fp32_product 
                                                   >> 0x17U));
        vlSelf->__PVT__u_add__DOT__small_exp = (0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [1U] 
                                                   >> 0x17U));
    }
    vlSelf->__PVT__u_add__DOT__exp_diff = (0xffU & 
                                           ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                                            - (IData)(vlSelf->__PVT__u_add__DOT__small_exp)));
    if ((0U == (IData)(vlSelf->__PVT__u_add__DOT__exp_diff))) {
        vlSelf->__PVT__u_add__DOT__aligned_small = 
            (vlSelf->__PVT__u_add__DOT__small_mant 
             << 3U);
        vlSelf->__PVT__u_add__DOT__sticky_bit = 0U;
    } else if ((0x1bU > (IData)(vlSelf->__PVT__u_add__DOT__exp_diff))) {
        vlSelf->__PVT__u_add__DOT__aligned_small = 
            (0x7ffffffU & VL_SHIFTR_III(27,27,8, (vlSelf->__PVT__u_add__DOT__small_mant 
                                                  << 3U), (IData)(vlSelf->__PVT__u_add__DOT__exp_diff)));
        vlSelf->__PVT__u_add__DOT__sticky_bit = (0U 
                                                 != 
                                                 ((vlSelf->__PVT__u_add__DOT__small_mant 
                                                   << 3U) 
                                                  & (VL_SHIFTL_III(27,27,8, (IData)(1U), (IData)(vlSelf->__PVT__u_add__DOT__exp_diff)) 
                                                     - (IData)(1U))));
    } else {
        vlSelf->__PVT__u_add__DOT__aligned_small = 0U;
        vlSelf->__PVT__u_add__DOT__sticky_bit = (0U 
                                                 != vlSelf->__PVT__u_add__DOT__small_mant);
    }
    vlSelf->__PVT__u_add__DOT__aligned_small = ((0x7fffffeU 
                                                 & vlSelf->__PVT__u_add__DOT__aligned_small) 
                                                | (1U 
                                                   & (vlSelf->__PVT__u_add__DOT__aligned_small 
                                                      | (IData)(vlSelf->__PVT__u_add__DOT__sticky_bit))));
    vlSelf->__PVT__u_add__DOT__mant_sum = (0xfffffffU 
                                           & ((1U & 
                                               ((IData)(vlSelf->__PVT__u_add__DOT__large_sign) 
                                                ^ ((IData)(vlSelf->__PVT__u_add__DOT__a_is_larger)
                                                    ? 
                                                   (vlSelf->__PVT__fp32_product 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xcU]
                                                    [1U] 
                                                    >> 0x1fU))))
                                               ? ((vlSelf->__PVT__u_add__DOT__large_mant 
                                                   << 3U) 
                                                  - vlSelf->__PVT__u_add__DOT__aligned_small)
                                               : ((vlSelf->__PVT__u_add__DOT__large_mant 
                                                   << 3U) 
                                                  + vlSelf->__PVT__u_add__DOT__aligned_small)));
    vlSelf->__PVT__u_add__DOT__lzc = (((((((((0x8000000U 
                                              == (0x8000000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                             | (0x4000000U 
                                                == 
                                                (0xc000000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                            | (0x2000000U 
                                               == (0xe000000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                           | (0x1000000U 
                                              == (0xf000000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                          | (0x800000U 
                                             == (0xf800000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                         | (0x400000U 
                                            == (0xfc00000U 
                                                & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                        | (0x200000U 
                                           == (0xfe00000U 
                                               & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                       | (0x100000U 
                                          == (0xff00000U 
                                              & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                       ? ((0x8000000U 
                                           == (0x8000000U 
                                               & vlSelf->__PVT__u_add__DOT__mant_sum))
                                           ? 0U : (
                                                   (0x4000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0U
                                                    : 
                                                   ((0x2000000U 
                                                     == 
                                                     (0xe000000U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 1U
                                                     : 
                                                    ((0x1000000U 
                                                      == 
                                                      (0xf000000U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 2U
                                                      : 
                                                     ((0x800000U 
                                                       == 
                                                       (0xf800000U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 3U
                                                       : 
                                                      ((0x400000U 
                                                        == 
                                                        (0xfc00000U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 4U
                                                        : 
                                                       ((0x200000U 
                                                         == 
                                                         (0xfe00000U 
                                                          & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                         ? 5U
                                                         : 6U)))))))
                                       : (((((((((0x80000U 
                                                  == 
                                                  (0xff80000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                                 | (0x40000U 
                                                    == 
                                                    (0xffc0000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                | (0x20000U 
                                                   == 
                                                   (0xffe0000U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                               | (0x10000U 
                                                  == 
                                                  (0xfff0000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                              | (0x8000U 
                                                 == 
                                                 (0xfff8000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                             | (0x4000U 
                                                == 
                                                (0xfffc000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                            | (0x2000U 
                                               == (0xfffe000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                           | (0x1000U 
                                              == (0xffff000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                           ? ((0x80000U 
                                               == (0xff80000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))
                                               ? 7U
                                               : ((0x40000U 
                                                   == 
                                                   (0xffc0000U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 8U
                                                   : 
                                                  ((0x20000U 
                                                    == 
                                                    (0xffe0000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 9U
                                                    : 
                                                   ((0x10000U 
                                                     == 
                                                     (0xfff0000U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0xaU
                                                     : 
                                                    ((0x8000U 
                                                      == 
                                                      (0xfff8000U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 0xbU
                                                      : 
                                                     ((0x4000U 
                                                       == 
                                                       (0xfffc000U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 0xcU
                                                       : 
                                                      ((0x2000U 
                                                        == 
                                                        (0xfffe000U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 0xdU
                                                        : 0xeU)))))))
                                           : ((((((
                                                   (((0x800U 
                                                      == 
                                                      (0xffff800U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                                     | (0x400U 
                                                        == 
                                                        (0xffffc00U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                    | (0x200U 
                                                       == 
                                                       (0xffffe00U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                   | (0x100U 
                                                      == 
                                                      (0xfffff00U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                  | (0x80U 
                                                     == 
                                                     (0xfffff80U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                 | (0x40U 
                                                    == 
                                                    (0xfffffc0U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                | (0x20U 
                                                   == 
                                                   (0xfffffe0U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                               | (0x10U 
                                                  == 
                                                  (0xffffff0U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                               ? ((0x800U 
                                                   == 
                                                   (0xffff800U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 0xfU
                                                   : 
                                                  ((0x400U 
                                                    == 
                                                    (0xffffc00U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0x10U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0xffffe00U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0x11U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0xfffff00U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 0x12U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0xfffff80U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 0x13U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0xfffffc0U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 0x14U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0xfffffe0U 
                                                          & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                         ? 0x15U
                                                         : 0x16U)))))))
                                               : ((8U 
                                                   == 
                                                   (0xffffff8U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 0x17U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0xffffffcU 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0x18U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xffffffeU 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0x19U
                                                     : 
                                                    ((1U 
                                                      == vlSelf->__PVT__u_add__DOT__mant_sum)
                                                      ? 0x1aU
                                                      : 0x1bU)))))));
    if ((0x8000000U & vlSelf->__PVT__u_add__DOT__mant_sum)) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & (vlSelf->__PVT__u_add__DOT__mant_sum 
                                                   >> 1U));
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__u_add__DOT__large_exp)));
    } else if ((0x4000000U & vlSelf->__PVT__u_add__DOT__mant_sum)) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & vlSelf->__PVT__u_add__DOT__mant_sum);
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & (IData)(vlSelf->__PVT__u_add__DOT__large_exp));
    } else if (((0x1bU > (IData)(vlSelf->__PVT__u_add__DOT__lzc)) 
                & ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                   > (IData)(vlSelf->__PVT__u_add__DOT__lzc)))) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & (vlSelf->__PVT__u_add__DOT__mant_sum 
                                                   << (IData)(vlSelf->__PVT__u_add__DOT__lzc)));
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                                                  - (IData)(vlSelf->__PVT__u_add__DOT__lzc)));
    } else {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & 0U);
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & 0U);
    }
    vlSelf->__PVT__u_add__DOT__mant_rounded = (0x1ffffffU 
                                               & ((0xffffffU 
                                                   & (vlSelf->__PVT__u_add__DOT__norm_mant 
                                                      >> 3U)) 
                                                  + 
                                                  (1U 
                                                   & ((vlSelf->__PVT__u_add__DOT__norm_mant 
                                                       >> 2U) 
                                                      & (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xbU 
                                                                  & vlSelf->__PVT__u_add__DOT__norm_mant)))))));
    if ((0x1000000U & vlSelf->__PVT__u_add__DOT__mant_rounded)) {
        vlSelf->__PVT__u_add__DOT__final_exp = (0xffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__u_add__DOT__norm_exp)));
        vlSelf->__PVT__u_add__DOT__rounded_mant = (0x7fffffU 
                                                   & (vlSelf->__PVT__u_add__DOT__mant_rounded 
                                                      >> 1U));
    } else {
        vlSelf->__PVT__u_add__DOT__final_exp = vlSelf->__PVT__u_add__DOT__norm_exp;
        vlSelf->__PVT__u_add__DOT__rounded_mant = (0x7fffffU 
                                                   & vlSelf->__PVT__u_add__DOT__mant_rounded);
    }
}

VL_INLINE_OPT void Vnpu_system_top_mac_pe___ico_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__0(Vnpu_system_top_mac_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnpu_system_top_mac_pe___ico_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__0\n"); );
    // Init
    CData/*0:0*/ u_mul__DOT____VdfgExtracted_h1f028376__0;
    u_mul__DOT____VdfgExtracted_h1f028376__0 = 0;
    IData/*23:0*/ u_add__DOT____VdfgExtracted_hb7d58418__0;
    u_add__DOT____VdfgExtracted_hb7d58418__0 = 0;
    // Body
    u_mul__DOT____VdfgExtracted_h1f028376__0 = (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                      [0xcU]
                                                      [2U] 
                                                      >> 0xaU))) 
                                                 & (0U 
                                                    == 
                                                    (0x3ffU 
                                                     & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                     [0xcU]
                                                     [2U]))) 
                                                | (IData)(
                                                          (0U 
                                                           == 
                                                           (0x7fffU 
                                                            & (IData)(vlSelf->__PVT__weight_reg)))));
    vlSelf->__PVT__u_mul__DOT__result_sign = (1U & 
                                              ((vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xcU]
                                                [2U] 
                                                ^ (IData)(vlSelf->__PVT__weight_reg)) 
                                               >> 0xfU));
    vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0 = (0x1ffU 
                                                  & ((0x1fU 
                                                      & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                         [0xcU]
                                                         [2U] 
                                                         >> 0xaU)) 
                                                     + 
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->__PVT__weight_reg) 
                                                         >> 0xaU))));
    vlSelf->__PVT__u_mul__DOT__mant_product = (0x3fffffU 
                                               & ((0x400U 
                                                   | (0x3ffU 
                                                      & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                      [0xcU]
                                                      [2U])) 
                                                  * 
                                                  (0x400U 
                                                   | (0x3ffU 
                                                      & (IData)(vlSelf->__PVT__weight_reg)))));
    vlSelf->__PVT__u_mul__DOT__fp32_exp = (0x1ffU & 
                                           ((0x200000U 
                                             & vlSelf->__PVT__u_mul__DOT__mant_product)
                                             ? ((IData)(0x62U) 
                                                + (IData)(vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0))
                                             : ((IData)(0x61U) 
                                                + (IData)(vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0))));
    vlSelf->__PVT__fp32_product = ((((0x1fU == (0x1fU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xcU]
                                                   [2U] 
                                                   >> 0xaU))) 
                                     & (0U != (0x3ffU 
                                               & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xcU]
                                               [2U]))) 
                                    | (IData)(((0x7c00U 
                                                == 
                                                (0x7c00U 
                                                 & (IData)(vlSelf->__PVT__weight_reg))) 
                                               & (0U 
                                                  != 
                                                  (0x3ffU 
                                                   & (IData)(vlSelf->__PVT__weight_reg))))))
                                    ? 0x7fc00000U : 
                                   ((((0x1fU == (0x1fU 
                                                 & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                    [0xcU]
                                                    [2U] 
                                                    >> 0xaU))) 
                                      & (0U == (0x3ffU 
                                                & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xcU]
                                                [2U]))) 
                                     | (IData)((0x7c00U 
                                                == 
                                                (0x7fffU 
                                                 & (IData)(vlSelf->__PVT__weight_reg)))))
                                     ? ((IData)(u_mul__DOT____VdfgExtracted_h1f028376__0)
                                         ? 0x7fc00000U
                                         : (0x7f800000U 
                                            | ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                               << 0x1fU)))
                                     : (((IData)(u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                         | (((0U == 
                                              (0x1fU 
                                               & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xcU]
                                                  [2U] 
                                                  >> 0xaU))) 
                                             & (0U 
                                                != 
                                                (0x3ffU 
                                                 & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [2U]))) 
                                            | (IData)(
                                                      ((0U 
                                                        == 
                                                        (0x7c00U 
                                                         & (IData)(vlSelf->__PVT__weight_reg))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSelf->__PVT__weight_reg)))))))
                                         ? ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                            << 0x1fU)
                                         : ((IData)(
                                                    (((IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp) 
                                                      >> 8U) 
                                                     | (0xffU 
                                                        <= (IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp))))
                                             ? (0x7f800000U 
                                                | ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                   << 0x1fU))
                                             : ((0U 
                                                 == (IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                 << 0x1fU)
                                                 : 
                                                (((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                  << 0x1fU) 
                                                 | ((0x7f800000U 
                                                     & ((IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp) 
                                                        << 0x17U)) 
                                                    | ((0x200000U 
                                                        & vlSelf->__PVT__u_mul__DOT__mant_product)
                                                        ? 
                                                       (0x7ffffcU 
                                                        & (vlSelf->__PVT__u_mul__DOT__mant_product 
                                                           << 2U))
                                                        : 
                                                       (0x7ffff8U 
                                                        & (vlSelf->__PVT__u_mul__DOT__mant_product 
                                                           << 3U))))))))));
    vlSelf->__PVT__u_add__DOT__b_is_inf = (IData)((0x7f800000U 
                                                   == 
                                                   (0x7fffffffU 
                                                    & vlSelf->__PVT__fp32_product)));
    vlSelf->__PVT__u_add__DOT__b_is_zero = (IData)(
                                                   (0U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelf->__PVT__fp32_product)));
    u_add__DOT____VdfgExtracted_hb7d58418__0 = ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSelf->__PVT__fp32_product 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x7fffffU 
                                                 & vlSelf->__PVT__fp32_product)
                                                 : 
                                                (0x800000U 
                                                 | (0x7fffffU 
                                                    & vlSelf->__PVT__fp32_product)));
    vlSelf->__PVT__u_add__DOT__a_is_larger = (((0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [2U] 
                                                   >> 0x17U)) 
                                               > (0xffU 
                                                  & (vlSelf->__PVT__fp32_product 
                                                     >> 0x17U))) 
                                              | (((0xffU 
                                                   & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xcU]
                                                      [2U] 
                                                      >> 0x17U)) 
                                                  == 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__fp32_product 
                                                      >> 0x17U))) 
                                                 & ((0x7fffffU 
                                                     & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xcU]
                                                     [2U]) 
                                                    >= 
                                                    (0x7fffffU 
                                                     & vlSelf->__PVT__fp32_product))));
    if (vlSelf->__PVT__u_add__DOT__a_is_larger) {
        vlSelf->__PVT__u_add__DOT__large_sign = (1U 
                                                 & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xcU]
                                                    [2U] 
                                                    >> 0x1fU));
        vlSelf->__PVT__u_add__DOT__large_mant = vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__u_add__DOT__small_mant = u_add__DOT____VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__u_add__DOT__large_exp = (0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [2U] 
                                                   >> 0x17U));
        vlSelf->__PVT__u_add__DOT__small_exp = (0xffU 
                                                & (vlSelf->__PVT__fp32_product 
                                                   >> 0x17U));
    } else {
        vlSelf->__PVT__u_add__DOT__large_sign = (1U 
                                                 & (vlSelf->__PVT__fp32_product 
                                                    >> 0x1fU));
        vlSelf->__PVT__u_add__DOT__large_mant = u_add__DOT____VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__u_add__DOT__small_mant = vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__u_add__DOT__large_exp = (0xffU 
                                                & (vlSelf->__PVT__fp32_product 
                                                   >> 0x17U));
        vlSelf->__PVT__u_add__DOT__small_exp = (0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [2U] 
                                                   >> 0x17U));
    }
    vlSelf->__PVT__u_add__DOT__exp_diff = (0xffU & 
                                           ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                                            - (IData)(vlSelf->__PVT__u_add__DOT__small_exp)));
    if ((0U == (IData)(vlSelf->__PVT__u_add__DOT__exp_diff))) {
        vlSelf->__PVT__u_add__DOT__aligned_small = 
            (vlSelf->__PVT__u_add__DOT__small_mant 
             << 3U);
        vlSelf->__PVT__u_add__DOT__sticky_bit = 0U;
    } else if ((0x1bU > (IData)(vlSelf->__PVT__u_add__DOT__exp_diff))) {
        vlSelf->__PVT__u_add__DOT__aligned_small = 
            (0x7ffffffU & VL_SHIFTR_III(27,27,8, (vlSelf->__PVT__u_add__DOT__small_mant 
                                                  << 3U), (IData)(vlSelf->__PVT__u_add__DOT__exp_diff)));
        vlSelf->__PVT__u_add__DOT__sticky_bit = (0U 
                                                 != 
                                                 ((vlSelf->__PVT__u_add__DOT__small_mant 
                                                   << 3U) 
                                                  & (VL_SHIFTL_III(27,27,8, (IData)(1U), (IData)(vlSelf->__PVT__u_add__DOT__exp_diff)) 
                                                     - (IData)(1U))));
    } else {
        vlSelf->__PVT__u_add__DOT__aligned_small = 0U;
        vlSelf->__PVT__u_add__DOT__sticky_bit = (0U 
                                                 != vlSelf->__PVT__u_add__DOT__small_mant);
    }
    vlSelf->__PVT__u_add__DOT__aligned_small = ((0x7fffffeU 
                                                 & vlSelf->__PVT__u_add__DOT__aligned_small) 
                                                | (1U 
                                                   & (vlSelf->__PVT__u_add__DOT__aligned_small 
                                                      | (IData)(vlSelf->__PVT__u_add__DOT__sticky_bit))));
    vlSelf->__PVT__u_add__DOT__mant_sum = (0xfffffffU 
                                           & ((1U & 
                                               ((IData)(vlSelf->__PVT__u_add__DOT__large_sign) 
                                                ^ ((IData)(vlSelf->__PVT__u_add__DOT__a_is_larger)
                                                    ? 
                                                   (vlSelf->__PVT__fp32_product 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xcU]
                                                    [2U] 
                                                    >> 0x1fU))))
                                               ? ((vlSelf->__PVT__u_add__DOT__large_mant 
                                                   << 3U) 
                                                  - vlSelf->__PVT__u_add__DOT__aligned_small)
                                               : ((vlSelf->__PVT__u_add__DOT__large_mant 
                                                   << 3U) 
                                                  + vlSelf->__PVT__u_add__DOT__aligned_small)));
    vlSelf->__PVT__u_add__DOT__lzc = (((((((((0x8000000U 
                                              == (0x8000000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                             | (0x4000000U 
                                                == 
                                                (0xc000000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                            | (0x2000000U 
                                               == (0xe000000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                           | (0x1000000U 
                                              == (0xf000000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                          | (0x800000U 
                                             == (0xf800000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                         | (0x400000U 
                                            == (0xfc00000U 
                                                & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                        | (0x200000U 
                                           == (0xfe00000U 
                                               & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                       | (0x100000U 
                                          == (0xff00000U 
                                              & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                       ? ((0x8000000U 
                                           == (0x8000000U 
                                               & vlSelf->__PVT__u_add__DOT__mant_sum))
                                           ? 0U : (
                                                   (0x4000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0U
                                                    : 
                                                   ((0x2000000U 
                                                     == 
                                                     (0xe000000U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 1U
                                                     : 
                                                    ((0x1000000U 
                                                      == 
                                                      (0xf000000U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 2U
                                                      : 
                                                     ((0x800000U 
                                                       == 
                                                       (0xf800000U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 3U
                                                       : 
                                                      ((0x400000U 
                                                        == 
                                                        (0xfc00000U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 4U
                                                        : 
                                                       ((0x200000U 
                                                         == 
                                                         (0xfe00000U 
                                                          & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                         ? 5U
                                                         : 6U)))))))
                                       : (((((((((0x80000U 
                                                  == 
                                                  (0xff80000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                                 | (0x40000U 
                                                    == 
                                                    (0xffc0000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                | (0x20000U 
                                                   == 
                                                   (0xffe0000U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                               | (0x10000U 
                                                  == 
                                                  (0xfff0000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                              | (0x8000U 
                                                 == 
                                                 (0xfff8000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                             | (0x4000U 
                                                == 
                                                (0xfffc000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                            | (0x2000U 
                                               == (0xfffe000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                           | (0x1000U 
                                              == (0xffff000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                           ? ((0x80000U 
                                               == (0xff80000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))
                                               ? 7U
                                               : ((0x40000U 
                                                   == 
                                                   (0xffc0000U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 8U
                                                   : 
                                                  ((0x20000U 
                                                    == 
                                                    (0xffe0000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 9U
                                                    : 
                                                   ((0x10000U 
                                                     == 
                                                     (0xfff0000U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0xaU
                                                     : 
                                                    ((0x8000U 
                                                      == 
                                                      (0xfff8000U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 0xbU
                                                      : 
                                                     ((0x4000U 
                                                       == 
                                                       (0xfffc000U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 0xcU
                                                       : 
                                                      ((0x2000U 
                                                        == 
                                                        (0xfffe000U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 0xdU
                                                        : 0xeU)))))))
                                           : ((((((
                                                   (((0x800U 
                                                      == 
                                                      (0xffff800U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                                     | (0x400U 
                                                        == 
                                                        (0xffffc00U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                    | (0x200U 
                                                       == 
                                                       (0xffffe00U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                   | (0x100U 
                                                      == 
                                                      (0xfffff00U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                  | (0x80U 
                                                     == 
                                                     (0xfffff80U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                 | (0x40U 
                                                    == 
                                                    (0xfffffc0U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                | (0x20U 
                                                   == 
                                                   (0xfffffe0U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                               | (0x10U 
                                                  == 
                                                  (0xffffff0U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                               ? ((0x800U 
                                                   == 
                                                   (0xffff800U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 0xfU
                                                   : 
                                                  ((0x400U 
                                                    == 
                                                    (0xffffc00U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0x10U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0xffffe00U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0x11U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0xfffff00U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 0x12U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0xfffff80U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 0x13U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0xfffffc0U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 0x14U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0xfffffe0U 
                                                          & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                         ? 0x15U
                                                         : 0x16U)))))))
                                               : ((8U 
                                                   == 
                                                   (0xffffff8U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 0x17U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0xffffffcU 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0x18U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xffffffeU 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0x19U
                                                     : 
                                                    ((1U 
                                                      == vlSelf->__PVT__u_add__DOT__mant_sum)
                                                      ? 0x1aU
                                                      : 0x1bU)))))));
    if ((0x8000000U & vlSelf->__PVT__u_add__DOT__mant_sum)) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & (vlSelf->__PVT__u_add__DOT__mant_sum 
                                                   >> 1U));
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__u_add__DOT__large_exp)));
    } else if ((0x4000000U & vlSelf->__PVT__u_add__DOT__mant_sum)) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & vlSelf->__PVT__u_add__DOT__mant_sum);
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & (IData)(vlSelf->__PVT__u_add__DOT__large_exp));
    } else if (((0x1bU > (IData)(vlSelf->__PVT__u_add__DOT__lzc)) 
                & ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                   > (IData)(vlSelf->__PVT__u_add__DOT__lzc)))) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & (vlSelf->__PVT__u_add__DOT__mant_sum 
                                                   << (IData)(vlSelf->__PVT__u_add__DOT__lzc)));
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                                                  - (IData)(vlSelf->__PVT__u_add__DOT__lzc)));
    } else {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & 0U);
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & 0U);
    }
    vlSelf->__PVT__u_add__DOT__mant_rounded = (0x1ffffffU 
                                               & ((0xffffffU 
                                                   & (vlSelf->__PVT__u_add__DOT__norm_mant 
                                                      >> 3U)) 
                                                  + 
                                                  (1U 
                                                   & ((vlSelf->__PVT__u_add__DOT__norm_mant 
                                                       >> 2U) 
                                                      & (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xbU 
                                                                  & vlSelf->__PVT__u_add__DOT__norm_mant)))))));
    if ((0x1000000U & vlSelf->__PVT__u_add__DOT__mant_rounded)) {
        vlSelf->__PVT__u_add__DOT__final_exp = (0xffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__u_add__DOT__norm_exp)));
        vlSelf->__PVT__u_add__DOT__rounded_mant = (0x7fffffU 
                                                   & (vlSelf->__PVT__u_add__DOT__mant_rounded 
                                                      >> 1U));
    } else {
        vlSelf->__PVT__u_add__DOT__final_exp = vlSelf->__PVT__u_add__DOT__norm_exp;
        vlSelf->__PVT__u_add__DOT__rounded_mant = (0x7fffffU 
                                                   & vlSelf->__PVT__u_add__DOT__mant_rounded);
    }
}

VL_INLINE_OPT void Vnpu_system_top_mac_pe___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__0(Vnpu_system_top_mac_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnpu_system_top_mac_pe___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__0\n"); );
    // Body
    if (vlSymsp->TOP.rst_n) {
        if (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT____Vcellinp__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__weight_load_en) {
            vlSelf->__PVT__weight_reg = (0xffffU & 
                                         vlSymsp->TOP.rdata[1U]);
        }
        vlSelf->psum_out = ((((0xffU == (0xffU & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xcU]
                                                  [2U] 
                                                  >> 0x17U))) 
                              & (0U != (0x7fffffU & 
                                        vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                        [0xcU][2U]))) 
                             | (IData)(((0x7f800000U 
                                         == (0x7f800000U 
                                             & vlSelf->__PVT__fp32_product)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSelf->__PVT__fp32_product)))))
                             ? 0x7fc00000U : (((IData)(vlSelf->__PVT__u_add__DOT__a_is_inf) 
                                               & (IData)(vlSelf->__PVT__u_add__DOT__b_is_inf))
                                               ? ((
                                                   (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xcU]
                                                    [2U] 
                                                    >> 0x1fU) 
                                                   != 
                                                   (vlSelf->__PVT__fp32_product 
                                                    >> 0x1fU))
                                                   ? 0x7fc00000U
                                                   : 
                                                  (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xcU]
                                                      [2U])))
                                               : ((IData)(vlSelf->__PVT__u_add__DOT__a_is_inf)
                                                   ? 
                                                  (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xcU]
                                                      [2U]))
                                                   : 
                                                  ((IData)(vlSelf->__PVT__u_add__DOT__b_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->__PVT__fp32_product))
                                                    : 
                                                   (((IData)(vlSelf->__PVT__u_add__DOT__a_is_zero) 
                                                     & (IData)(vlSelf->__PVT__u_add__DOT__b_is_zero))
                                                     ? 
                                                    (0x80000000U 
                                                     & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                        [0xcU]
                                                        [2U] 
                                                        & vlSelf->__PVT__fp32_product))
                                                     : 
                                                    ((IData)(vlSelf->__PVT__u_add__DOT__a_is_zero)
                                                      ? vlSelf->__PVT__fp32_product
                                                      : 
                                                     ((IData)(vlSelf->__PVT__u_add__DOT__b_is_zero)
                                                       ? 
                                                      vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xcU]
                                                      [2U]
                                                       : 
                                                      (((0U 
                                                         == (IData)(vlSelf->__PVT__u_add__DOT__norm_exp)) 
                                                        & (0U 
                                                           == vlSelf->__PVT__u_add__DOT__norm_mant))
                                                        ? 0U
                                                        : 
                                                       ((0xffU 
                                                         <= (IData)(vlSelf->__PVT__u_add__DOT__final_exp))
                                                         ? 
                                                        (0x7f800000U 
                                                         | ((IData)(vlSelf->__PVT__u_add__DOT__large_sign) 
                                                            << 0x1fU))
                                                         : 
                                                        (((IData)(vlSelf->__PVT__u_add__DOT__large_sign) 
                                                          << 0x1fU) 
                                                         | (((IData)(vlSelf->__PVT__u_add__DOT__final_exp) 
                                                             << 0x17U) 
                                                            | vlSelf->__PVT__u_add__DOT__rounded_mant)))))))))));
        vlSelf->act_out = vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xcU][2U];
    } else {
        vlSelf->__PVT__weight_reg = 0U;
        vlSelf->psum_out = 0U;
        vlSelf->act_out = 0U;
    }
}

VL_INLINE_OPT void Vnpu_system_top_mac_pe___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__1(Vnpu_system_top_mac_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnpu_system_top_mac_pe___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__1\n"); );
    // Init
    CData/*0:0*/ u_mul__DOT____VdfgExtracted_h1f028376__0;
    u_mul__DOT____VdfgExtracted_h1f028376__0 = 0;
    IData/*23:0*/ u_add__DOT____VdfgExtracted_hb7d58418__0;
    u_add__DOT____VdfgExtracted_hb7d58418__0 = 0;
    // Body
    vlSelf->__PVT__u_add__DOT__a_is_inf = ((0xffU == 
                                            (0xffU 
                                             & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xcU]
                                                [2U] 
                                                >> 0x17U))) 
                                           & (0U == 
                                              (0x7fffffU 
                                               & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                               [0xcU]
                                               [2U])));
    if ((0U == (0xffU & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                         [0xcU][2U] >> 0x17U)))) {
        vlSelf->__PVT__u_add__DOT__a_is_zero = (0U 
                                                == 
                                                (0x7fffffU 
                                                 & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                 [0xcU]
                                                 [2U]));
        vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0 
            = (0x7fffffU & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xcU][2U]);
    } else {
        vlSelf->__PVT__u_add__DOT__a_is_zero = 0U;
        vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0 
            = (0x800000U | (0x7fffffU & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                            [0xcU][2U]));
    }
    u_mul__DOT____VdfgExtracted_h1f028376__0 = (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                      [0xcU]
                                                      [2U] 
                                                      >> 0xaU))) 
                                                 & (0U 
                                                    == 
                                                    (0x3ffU 
                                                     & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                     [0xcU]
                                                     [2U]))) 
                                                | (IData)(
                                                          (0U 
                                                           == 
                                                           (0x7fffU 
                                                            & (IData)(vlSelf->__PVT__weight_reg)))));
    vlSelf->__PVT__u_mul__DOT__result_sign = (1U & 
                                              ((vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xcU]
                                                [2U] 
                                                ^ (IData)(vlSelf->__PVT__weight_reg)) 
                                               >> 0xfU));
    vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0 = (0x1ffU 
                                                  & ((0x1fU 
                                                      & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                         [0xcU]
                                                         [2U] 
                                                         >> 0xaU)) 
                                                     + 
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->__PVT__weight_reg) 
                                                         >> 0xaU))));
    vlSelf->__PVT__u_mul__DOT__mant_product = (0x3fffffU 
                                               & ((0x400U 
                                                   | (0x3ffU 
                                                      & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                      [0xcU]
                                                      [2U])) 
                                                  * 
                                                  (0x400U 
                                                   | (0x3ffU 
                                                      & (IData)(vlSelf->__PVT__weight_reg)))));
    vlSelf->__PVT__u_mul__DOT__fp32_exp = (0x1ffU & 
                                           ((0x200000U 
                                             & vlSelf->__PVT__u_mul__DOT__mant_product)
                                             ? ((IData)(0x62U) 
                                                + (IData)(vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0))
                                             : ((IData)(0x61U) 
                                                + (IData)(vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0))));
    vlSelf->__PVT__fp32_product = ((((0x1fU == (0x1fU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xcU]
                                                   [2U] 
                                                   >> 0xaU))) 
                                     & (0U != (0x3ffU 
                                               & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xcU]
                                               [2U]))) 
                                    | (IData)(((0x7c00U 
                                                == 
                                                (0x7c00U 
                                                 & (IData)(vlSelf->__PVT__weight_reg))) 
                                               & (0U 
                                                  != 
                                                  (0x3ffU 
                                                   & (IData)(vlSelf->__PVT__weight_reg))))))
                                    ? 0x7fc00000U : 
                                   ((((0x1fU == (0x1fU 
                                                 & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                    [0xcU]
                                                    [2U] 
                                                    >> 0xaU))) 
                                      & (0U == (0x3ffU 
                                                & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xcU]
                                                [2U]))) 
                                     | (IData)((0x7c00U 
                                                == 
                                                (0x7fffU 
                                                 & (IData)(vlSelf->__PVT__weight_reg)))))
                                     ? ((IData)(u_mul__DOT____VdfgExtracted_h1f028376__0)
                                         ? 0x7fc00000U
                                         : (0x7f800000U 
                                            | ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                               << 0x1fU)))
                                     : (((IData)(u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                         | (((0U == 
                                              (0x1fU 
                                               & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xcU]
                                                  [2U] 
                                                  >> 0xaU))) 
                                             & (0U 
                                                != 
                                                (0x3ffU 
                                                 & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [2U]))) 
                                            | (IData)(
                                                      ((0U 
                                                        == 
                                                        (0x7c00U 
                                                         & (IData)(vlSelf->__PVT__weight_reg))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSelf->__PVT__weight_reg)))))))
                                         ? ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                            << 0x1fU)
                                         : ((IData)(
                                                    (((IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp) 
                                                      >> 8U) 
                                                     | (0xffU 
                                                        <= (IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp))))
                                             ? (0x7f800000U 
                                                | ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                   << 0x1fU))
                                             : ((0U 
                                                 == (IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                 << 0x1fU)
                                                 : 
                                                (((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                  << 0x1fU) 
                                                 | ((0x7f800000U 
                                                     & ((IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp) 
                                                        << 0x17U)) 
                                                    | ((0x200000U 
                                                        & vlSelf->__PVT__u_mul__DOT__mant_product)
                                                        ? 
                                                       (0x7ffffcU 
                                                        & (vlSelf->__PVT__u_mul__DOT__mant_product 
                                                           << 2U))
                                                        : 
                                                       (0x7ffff8U 
                                                        & (vlSelf->__PVT__u_mul__DOT__mant_product 
                                                           << 3U))))))))));
    vlSelf->__PVT__u_add__DOT__b_is_inf = (IData)((0x7f800000U 
                                                   == 
                                                   (0x7fffffffU 
                                                    & vlSelf->__PVT__fp32_product)));
    vlSelf->__PVT__u_add__DOT__b_is_zero = (IData)(
                                                   (0U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelf->__PVT__fp32_product)));
    u_add__DOT____VdfgExtracted_hb7d58418__0 = ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSelf->__PVT__fp32_product 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x7fffffU 
                                                 & vlSelf->__PVT__fp32_product)
                                                 : 
                                                (0x800000U 
                                                 | (0x7fffffU 
                                                    & vlSelf->__PVT__fp32_product)));
    vlSelf->__PVT__u_add__DOT__a_is_larger = (((0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [2U] 
                                                   >> 0x17U)) 
                                               > (0xffU 
                                                  & (vlSelf->__PVT__fp32_product 
                                                     >> 0x17U))) 
                                              | (((0xffU 
                                                   & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xcU]
                                                      [2U] 
                                                      >> 0x17U)) 
                                                  == 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__fp32_product 
                                                      >> 0x17U))) 
                                                 & ((0x7fffffU 
                                                     & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xcU]
                                                     [2U]) 
                                                    >= 
                                                    (0x7fffffU 
                                                     & vlSelf->__PVT__fp32_product))));
    if (vlSelf->__PVT__u_add__DOT__a_is_larger) {
        vlSelf->__PVT__u_add__DOT__large_sign = (1U 
                                                 & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xcU]
                                                    [2U] 
                                                    >> 0x1fU));
        vlSelf->__PVT__u_add__DOT__large_mant = vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__u_add__DOT__small_mant = u_add__DOT____VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__u_add__DOT__large_exp = (0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [2U] 
                                                   >> 0x17U));
        vlSelf->__PVT__u_add__DOT__small_exp = (0xffU 
                                                & (vlSelf->__PVT__fp32_product 
                                                   >> 0x17U));
    } else {
        vlSelf->__PVT__u_add__DOT__large_sign = (1U 
                                                 & (vlSelf->__PVT__fp32_product 
                                                    >> 0x1fU));
        vlSelf->__PVT__u_add__DOT__large_mant = u_add__DOT____VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__u_add__DOT__small_mant = vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__u_add__DOT__large_exp = (0xffU 
                                                & (vlSelf->__PVT__fp32_product 
                                                   >> 0x17U));
        vlSelf->__PVT__u_add__DOT__small_exp = (0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [2U] 
                                                   >> 0x17U));
    }
    vlSelf->__PVT__u_add__DOT__exp_diff = (0xffU & 
                                           ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                                            - (IData)(vlSelf->__PVT__u_add__DOT__small_exp)));
    if ((0U == (IData)(vlSelf->__PVT__u_add__DOT__exp_diff))) {
        vlSelf->__PVT__u_add__DOT__aligned_small = 
            (vlSelf->__PVT__u_add__DOT__small_mant 
             << 3U);
        vlSelf->__PVT__u_add__DOT__sticky_bit = 0U;
    } else if ((0x1bU > (IData)(vlSelf->__PVT__u_add__DOT__exp_diff))) {
        vlSelf->__PVT__u_add__DOT__aligned_small = 
            (0x7ffffffU & VL_SHIFTR_III(27,27,8, (vlSelf->__PVT__u_add__DOT__small_mant 
                                                  << 3U), (IData)(vlSelf->__PVT__u_add__DOT__exp_diff)));
        vlSelf->__PVT__u_add__DOT__sticky_bit = (0U 
                                                 != 
                                                 ((vlSelf->__PVT__u_add__DOT__small_mant 
                                                   << 3U) 
                                                  & (VL_SHIFTL_III(27,27,8, (IData)(1U), (IData)(vlSelf->__PVT__u_add__DOT__exp_diff)) 
                                                     - (IData)(1U))));
    } else {
        vlSelf->__PVT__u_add__DOT__aligned_small = 0U;
        vlSelf->__PVT__u_add__DOT__sticky_bit = (0U 
                                                 != vlSelf->__PVT__u_add__DOT__small_mant);
    }
    vlSelf->__PVT__u_add__DOT__aligned_small = ((0x7fffffeU 
                                                 & vlSelf->__PVT__u_add__DOT__aligned_small) 
                                                | (1U 
                                                   & (vlSelf->__PVT__u_add__DOT__aligned_small 
                                                      | (IData)(vlSelf->__PVT__u_add__DOT__sticky_bit))));
    vlSelf->__PVT__u_add__DOT__mant_sum = (0xfffffffU 
                                           & ((1U & 
                                               ((IData)(vlSelf->__PVT__u_add__DOT__large_sign) 
                                                ^ ((IData)(vlSelf->__PVT__u_add__DOT__a_is_larger)
                                                    ? 
                                                   (vlSelf->__PVT__fp32_product 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xcU]
                                                    [2U] 
                                                    >> 0x1fU))))
                                               ? ((vlSelf->__PVT__u_add__DOT__large_mant 
                                                   << 3U) 
                                                  - vlSelf->__PVT__u_add__DOT__aligned_small)
                                               : ((vlSelf->__PVT__u_add__DOT__large_mant 
                                                   << 3U) 
                                                  + vlSelf->__PVT__u_add__DOT__aligned_small)));
    vlSelf->__PVT__u_add__DOT__lzc = (((((((((0x8000000U 
                                              == (0x8000000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                             | (0x4000000U 
                                                == 
                                                (0xc000000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                            | (0x2000000U 
                                               == (0xe000000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                           | (0x1000000U 
                                              == (0xf000000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                          | (0x800000U 
                                             == (0xf800000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                         | (0x400000U 
                                            == (0xfc00000U 
                                                & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                        | (0x200000U 
                                           == (0xfe00000U 
                                               & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                       | (0x100000U 
                                          == (0xff00000U 
                                              & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                       ? ((0x8000000U 
                                           == (0x8000000U 
                                               & vlSelf->__PVT__u_add__DOT__mant_sum))
                                           ? 0U : (
                                                   (0x4000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0U
                                                    : 
                                                   ((0x2000000U 
                                                     == 
                                                     (0xe000000U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 1U
                                                     : 
                                                    ((0x1000000U 
                                                      == 
                                                      (0xf000000U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 2U
                                                      : 
                                                     ((0x800000U 
                                                       == 
                                                       (0xf800000U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 3U
                                                       : 
                                                      ((0x400000U 
                                                        == 
                                                        (0xfc00000U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 4U
                                                        : 
                                                       ((0x200000U 
                                                         == 
                                                         (0xfe00000U 
                                                          & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                         ? 5U
                                                         : 6U)))))))
                                       : (((((((((0x80000U 
                                                  == 
                                                  (0xff80000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                                 | (0x40000U 
                                                    == 
                                                    (0xffc0000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                | (0x20000U 
                                                   == 
                                                   (0xffe0000U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                               | (0x10000U 
                                                  == 
                                                  (0xfff0000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                              | (0x8000U 
                                                 == 
                                                 (0xfff8000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                             | (0x4000U 
                                                == 
                                                (0xfffc000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                            | (0x2000U 
                                               == (0xfffe000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                           | (0x1000U 
                                              == (0xffff000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                           ? ((0x80000U 
                                               == (0xff80000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))
                                               ? 7U
                                               : ((0x40000U 
                                                   == 
                                                   (0xffc0000U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 8U
                                                   : 
                                                  ((0x20000U 
                                                    == 
                                                    (0xffe0000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 9U
                                                    : 
                                                   ((0x10000U 
                                                     == 
                                                     (0xfff0000U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0xaU
                                                     : 
                                                    ((0x8000U 
                                                      == 
                                                      (0xfff8000U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 0xbU
                                                      : 
                                                     ((0x4000U 
                                                       == 
                                                       (0xfffc000U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 0xcU
                                                       : 
                                                      ((0x2000U 
                                                        == 
                                                        (0xfffe000U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 0xdU
                                                        : 0xeU)))))))
                                           : ((((((
                                                   (((0x800U 
                                                      == 
                                                      (0xffff800U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                                     | (0x400U 
                                                        == 
                                                        (0xffffc00U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                    | (0x200U 
                                                       == 
                                                       (0xffffe00U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                   | (0x100U 
                                                      == 
                                                      (0xfffff00U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                  | (0x80U 
                                                     == 
                                                     (0xfffff80U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                 | (0x40U 
                                                    == 
                                                    (0xfffffc0U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                | (0x20U 
                                                   == 
                                                   (0xfffffe0U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                               | (0x10U 
                                                  == 
                                                  (0xffffff0U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                               ? ((0x800U 
                                                   == 
                                                   (0xffff800U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 0xfU
                                                   : 
                                                  ((0x400U 
                                                    == 
                                                    (0xffffc00U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0x10U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0xffffe00U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0x11U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0xfffff00U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 0x12U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0xfffff80U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 0x13U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0xfffffc0U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 0x14U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0xfffffe0U 
                                                          & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                         ? 0x15U
                                                         : 0x16U)))))))
                                               : ((8U 
                                                   == 
                                                   (0xffffff8U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 0x17U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0xffffffcU 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0x18U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xffffffeU 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0x19U
                                                     : 
                                                    ((1U 
                                                      == vlSelf->__PVT__u_add__DOT__mant_sum)
                                                      ? 0x1aU
                                                      : 0x1bU)))))));
    if ((0x8000000U & vlSelf->__PVT__u_add__DOT__mant_sum)) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & (vlSelf->__PVT__u_add__DOT__mant_sum 
                                                   >> 1U));
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__u_add__DOT__large_exp)));
    } else if ((0x4000000U & vlSelf->__PVT__u_add__DOT__mant_sum)) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & vlSelf->__PVT__u_add__DOT__mant_sum);
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & (IData)(vlSelf->__PVT__u_add__DOT__large_exp));
    } else if (((0x1bU > (IData)(vlSelf->__PVT__u_add__DOT__lzc)) 
                & ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                   > (IData)(vlSelf->__PVT__u_add__DOT__lzc)))) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & (vlSelf->__PVT__u_add__DOT__mant_sum 
                                                   << (IData)(vlSelf->__PVT__u_add__DOT__lzc)));
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                                                  - (IData)(vlSelf->__PVT__u_add__DOT__lzc)));
    } else {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & 0U);
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & 0U);
    }
    vlSelf->__PVT__u_add__DOT__mant_rounded = (0x1ffffffU 
                                               & ((0xffffffU 
                                                   & (vlSelf->__PVT__u_add__DOT__norm_mant 
                                                      >> 3U)) 
                                                  + 
                                                  (1U 
                                                   & ((vlSelf->__PVT__u_add__DOT__norm_mant 
                                                       >> 2U) 
                                                      & (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xbU 
                                                                  & vlSelf->__PVT__u_add__DOT__norm_mant)))))));
    if ((0x1000000U & vlSelf->__PVT__u_add__DOT__mant_rounded)) {
        vlSelf->__PVT__u_add__DOT__final_exp = (0xffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__u_add__DOT__norm_exp)));
        vlSelf->__PVT__u_add__DOT__rounded_mant = (0x7fffffU 
                                                   & (vlSelf->__PVT__u_add__DOT__mant_rounded 
                                                      >> 1U));
    } else {
        vlSelf->__PVT__u_add__DOT__final_exp = vlSelf->__PVT__u_add__DOT__norm_exp;
        vlSelf->__PVT__u_add__DOT__rounded_mant = (0x7fffffU 
                                                   & vlSelf->__PVT__u_add__DOT__mant_rounded);
    }
}

VL_INLINE_OPT void Vnpu_system_top_mac_pe___ico_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__0(Vnpu_system_top_mac_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnpu_system_top_mac_pe___ico_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__0\n"); );
    // Init
    CData/*0:0*/ u_mul__DOT____VdfgExtracted_h1f028376__0;
    u_mul__DOT____VdfgExtracted_h1f028376__0 = 0;
    IData/*23:0*/ u_add__DOT____VdfgExtracted_hb7d58418__0;
    u_add__DOT____VdfgExtracted_hb7d58418__0 = 0;
    // Body
    u_mul__DOT____VdfgExtracted_h1f028376__0 = (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                      [0xcU]
                                                      [3U] 
                                                      >> 0xaU))) 
                                                 & (0U 
                                                    == 
                                                    (0x3ffU 
                                                     & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                     [0xcU]
                                                     [3U]))) 
                                                | (IData)(
                                                          (0U 
                                                           == 
                                                           (0x7fffU 
                                                            & (IData)(vlSelf->__PVT__weight_reg)))));
    vlSelf->__PVT__u_mul__DOT__result_sign = (1U & 
                                              ((vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xcU]
                                                [3U] 
                                                ^ (IData)(vlSelf->__PVT__weight_reg)) 
                                               >> 0xfU));
    vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0 = (0x1ffU 
                                                  & ((0x1fU 
                                                      & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                         [0xcU]
                                                         [3U] 
                                                         >> 0xaU)) 
                                                     + 
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->__PVT__weight_reg) 
                                                         >> 0xaU))));
    vlSelf->__PVT__u_mul__DOT__mant_product = (0x3fffffU 
                                               & ((0x400U 
                                                   | (0x3ffU 
                                                      & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                      [0xcU]
                                                      [3U])) 
                                                  * 
                                                  (0x400U 
                                                   | (0x3ffU 
                                                      & (IData)(vlSelf->__PVT__weight_reg)))));
    vlSelf->__PVT__u_mul__DOT__fp32_exp = (0x1ffU & 
                                           ((0x200000U 
                                             & vlSelf->__PVT__u_mul__DOT__mant_product)
                                             ? ((IData)(0x62U) 
                                                + (IData)(vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0))
                                             : ((IData)(0x61U) 
                                                + (IData)(vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0))));
    vlSelf->__PVT__fp32_product = ((((0x1fU == (0x1fU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xcU]
                                                   [3U] 
                                                   >> 0xaU))) 
                                     & (0U != (0x3ffU 
                                               & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xcU]
                                               [3U]))) 
                                    | (IData)(((0x7c00U 
                                                == 
                                                (0x7c00U 
                                                 & (IData)(vlSelf->__PVT__weight_reg))) 
                                               & (0U 
                                                  != 
                                                  (0x3ffU 
                                                   & (IData)(vlSelf->__PVT__weight_reg))))))
                                    ? 0x7fc00000U : 
                                   ((((0x1fU == (0x1fU 
                                                 & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                    [0xcU]
                                                    [3U] 
                                                    >> 0xaU))) 
                                      & (0U == (0x3ffU 
                                                & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xcU]
                                                [3U]))) 
                                     | (IData)((0x7c00U 
                                                == 
                                                (0x7fffU 
                                                 & (IData)(vlSelf->__PVT__weight_reg)))))
                                     ? ((IData)(u_mul__DOT____VdfgExtracted_h1f028376__0)
                                         ? 0x7fc00000U
                                         : (0x7f800000U 
                                            | ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                               << 0x1fU)))
                                     : (((IData)(u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                         | (((0U == 
                                              (0x1fU 
                                               & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xcU]
                                                  [3U] 
                                                  >> 0xaU))) 
                                             & (0U 
                                                != 
                                                (0x3ffU 
                                                 & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [3U]))) 
                                            | (IData)(
                                                      ((0U 
                                                        == 
                                                        (0x7c00U 
                                                         & (IData)(vlSelf->__PVT__weight_reg))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSelf->__PVT__weight_reg)))))))
                                         ? ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                            << 0x1fU)
                                         : ((IData)(
                                                    (((IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp) 
                                                      >> 8U) 
                                                     | (0xffU 
                                                        <= (IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp))))
                                             ? (0x7f800000U 
                                                | ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                   << 0x1fU))
                                             : ((0U 
                                                 == (IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                 << 0x1fU)
                                                 : 
                                                (((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                  << 0x1fU) 
                                                 | ((0x7f800000U 
                                                     & ((IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp) 
                                                        << 0x17U)) 
                                                    | ((0x200000U 
                                                        & vlSelf->__PVT__u_mul__DOT__mant_product)
                                                        ? 
                                                       (0x7ffffcU 
                                                        & (vlSelf->__PVT__u_mul__DOT__mant_product 
                                                           << 2U))
                                                        : 
                                                       (0x7ffff8U 
                                                        & (vlSelf->__PVT__u_mul__DOT__mant_product 
                                                           << 3U))))))))));
    vlSelf->__PVT__u_add__DOT__b_is_inf = (IData)((0x7f800000U 
                                                   == 
                                                   (0x7fffffffU 
                                                    & vlSelf->__PVT__fp32_product)));
    vlSelf->__PVT__u_add__DOT__b_is_zero = (IData)(
                                                   (0U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelf->__PVT__fp32_product)));
    u_add__DOT____VdfgExtracted_hb7d58418__0 = ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSelf->__PVT__fp32_product 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x7fffffU 
                                                 & vlSelf->__PVT__fp32_product)
                                                 : 
                                                (0x800000U 
                                                 | (0x7fffffU 
                                                    & vlSelf->__PVT__fp32_product)));
    vlSelf->__PVT__u_add__DOT__a_is_larger = (((0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [3U] 
                                                   >> 0x17U)) 
                                               > (0xffU 
                                                  & (vlSelf->__PVT__fp32_product 
                                                     >> 0x17U))) 
                                              | (((0xffU 
                                                   & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xcU]
                                                      [3U] 
                                                      >> 0x17U)) 
                                                  == 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__fp32_product 
                                                      >> 0x17U))) 
                                                 & ((0x7fffffU 
                                                     & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xcU]
                                                     [3U]) 
                                                    >= 
                                                    (0x7fffffU 
                                                     & vlSelf->__PVT__fp32_product))));
    if (vlSelf->__PVT__u_add__DOT__a_is_larger) {
        vlSelf->__PVT__u_add__DOT__large_sign = (1U 
                                                 & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xcU]
                                                    [3U] 
                                                    >> 0x1fU));
        vlSelf->__PVT__u_add__DOT__large_mant = vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__u_add__DOT__small_mant = u_add__DOT____VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__u_add__DOT__large_exp = (0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [3U] 
                                                   >> 0x17U));
        vlSelf->__PVT__u_add__DOT__small_exp = (0xffU 
                                                & (vlSelf->__PVT__fp32_product 
                                                   >> 0x17U));
    } else {
        vlSelf->__PVT__u_add__DOT__large_sign = (1U 
                                                 & (vlSelf->__PVT__fp32_product 
                                                    >> 0x1fU));
        vlSelf->__PVT__u_add__DOT__large_mant = u_add__DOT____VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__u_add__DOT__small_mant = vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__u_add__DOT__large_exp = (0xffU 
                                                & (vlSelf->__PVT__fp32_product 
                                                   >> 0x17U));
        vlSelf->__PVT__u_add__DOT__small_exp = (0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [3U] 
                                                   >> 0x17U));
    }
    vlSelf->__PVT__u_add__DOT__exp_diff = (0xffU & 
                                           ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                                            - (IData)(vlSelf->__PVT__u_add__DOT__small_exp)));
    if ((0U == (IData)(vlSelf->__PVT__u_add__DOT__exp_diff))) {
        vlSelf->__PVT__u_add__DOT__aligned_small = 
            (vlSelf->__PVT__u_add__DOT__small_mant 
             << 3U);
        vlSelf->__PVT__u_add__DOT__sticky_bit = 0U;
    } else if ((0x1bU > (IData)(vlSelf->__PVT__u_add__DOT__exp_diff))) {
        vlSelf->__PVT__u_add__DOT__aligned_small = 
            (0x7ffffffU & VL_SHIFTR_III(27,27,8, (vlSelf->__PVT__u_add__DOT__small_mant 
                                                  << 3U), (IData)(vlSelf->__PVT__u_add__DOT__exp_diff)));
        vlSelf->__PVT__u_add__DOT__sticky_bit = (0U 
                                                 != 
                                                 ((vlSelf->__PVT__u_add__DOT__small_mant 
                                                   << 3U) 
                                                  & (VL_SHIFTL_III(27,27,8, (IData)(1U), (IData)(vlSelf->__PVT__u_add__DOT__exp_diff)) 
                                                     - (IData)(1U))));
    } else {
        vlSelf->__PVT__u_add__DOT__aligned_small = 0U;
        vlSelf->__PVT__u_add__DOT__sticky_bit = (0U 
                                                 != vlSelf->__PVT__u_add__DOT__small_mant);
    }
    vlSelf->__PVT__u_add__DOT__aligned_small = ((0x7fffffeU 
                                                 & vlSelf->__PVT__u_add__DOT__aligned_small) 
                                                | (1U 
                                                   & (vlSelf->__PVT__u_add__DOT__aligned_small 
                                                      | (IData)(vlSelf->__PVT__u_add__DOT__sticky_bit))));
    vlSelf->__PVT__u_add__DOT__mant_sum = (0xfffffffU 
                                           & ((1U & 
                                               ((IData)(vlSelf->__PVT__u_add__DOT__large_sign) 
                                                ^ ((IData)(vlSelf->__PVT__u_add__DOT__a_is_larger)
                                                    ? 
                                                   (vlSelf->__PVT__fp32_product 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xcU]
                                                    [3U] 
                                                    >> 0x1fU))))
                                               ? ((vlSelf->__PVT__u_add__DOT__large_mant 
                                                   << 3U) 
                                                  - vlSelf->__PVT__u_add__DOT__aligned_small)
                                               : ((vlSelf->__PVT__u_add__DOT__large_mant 
                                                   << 3U) 
                                                  + vlSelf->__PVT__u_add__DOT__aligned_small)));
    vlSelf->__PVT__u_add__DOT__lzc = (((((((((0x8000000U 
                                              == (0x8000000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                             | (0x4000000U 
                                                == 
                                                (0xc000000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                            | (0x2000000U 
                                               == (0xe000000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                           | (0x1000000U 
                                              == (0xf000000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                          | (0x800000U 
                                             == (0xf800000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                         | (0x400000U 
                                            == (0xfc00000U 
                                                & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                        | (0x200000U 
                                           == (0xfe00000U 
                                               & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                       | (0x100000U 
                                          == (0xff00000U 
                                              & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                       ? ((0x8000000U 
                                           == (0x8000000U 
                                               & vlSelf->__PVT__u_add__DOT__mant_sum))
                                           ? 0U : (
                                                   (0x4000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0U
                                                    : 
                                                   ((0x2000000U 
                                                     == 
                                                     (0xe000000U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 1U
                                                     : 
                                                    ((0x1000000U 
                                                      == 
                                                      (0xf000000U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 2U
                                                      : 
                                                     ((0x800000U 
                                                       == 
                                                       (0xf800000U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 3U
                                                       : 
                                                      ((0x400000U 
                                                        == 
                                                        (0xfc00000U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 4U
                                                        : 
                                                       ((0x200000U 
                                                         == 
                                                         (0xfe00000U 
                                                          & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                         ? 5U
                                                         : 6U)))))))
                                       : (((((((((0x80000U 
                                                  == 
                                                  (0xff80000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                                 | (0x40000U 
                                                    == 
                                                    (0xffc0000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                | (0x20000U 
                                                   == 
                                                   (0xffe0000U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                               | (0x10000U 
                                                  == 
                                                  (0xfff0000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                              | (0x8000U 
                                                 == 
                                                 (0xfff8000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                             | (0x4000U 
                                                == 
                                                (0xfffc000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                            | (0x2000U 
                                               == (0xfffe000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                           | (0x1000U 
                                              == (0xffff000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                           ? ((0x80000U 
                                               == (0xff80000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))
                                               ? 7U
                                               : ((0x40000U 
                                                   == 
                                                   (0xffc0000U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 8U
                                                   : 
                                                  ((0x20000U 
                                                    == 
                                                    (0xffe0000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 9U
                                                    : 
                                                   ((0x10000U 
                                                     == 
                                                     (0xfff0000U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0xaU
                                                     : 
                                                    ((0x8000U 
                                                      == 
                                                      (0xfff8000U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 0xbU
                                                      : 
                                                     ((0x4000U 
                                                       == 
                                                       (0xfffc000U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 0xcU
                                                       : 
                                                      ((0x2000U 
                                                        == 
                                                        (0xfffe000U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 0xdU
                                                        : 0xeU)))))))
                                           : ((((((
                                                   (((0x800U 
                                                      == 
                                                      (0xffff800U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                                     | (0x400U 
                                                        == 
                                                        (0xffffc00U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                    | (0x200U 
                                                       == 
                                                       (0xffffe00U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                   | (0x100U 
                                                      == 
                                                      (0xfffff00U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                  | (0x80U 
                                                     == 
                                                     (0xfffff80U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                 | (0x40U 
                                                    == 
                                                    (0xfffffc0U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                | (0x20U 
                                                   == 
                                                   (0xfffffe0U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                               | (0x10U 
                                                  == 
                                                  (0xffffff0U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                               ? ((0x800U 
                                                   == 
                                                   (0xffff800U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 0xfU
                                                   : 
                                                  ((0x400U 
                                                    == 
                                                    (0xffffc00U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0x10U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0xffffe00U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0x11U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0xfffff00U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 0x12U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0xfffff80U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 0x13U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0xfffffc0U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 0x14U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0xfffffe0U 
                                                          & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                         ? 0x15U
                                                         : 0x16U)))))))
                                               : ((8U 
                                                   == 
                                                   (0xffffff8U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 0x17U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0xffffffcU 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0x18U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xffffffeU 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0x19U
                                                     : 
                                                    ((1U 
                                                      == vlSelf->__PVT__u_add__DOT__mant_sum)
                                                      ? 0x1aU
                                                      : 0x1bU)))))));
    if ((0x8000000U & vlSelf->__PVT__u_add__DOT__mant_sum)) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & (vlSelf->__PVT__u_add__DOT__mant_sum 
                                                   >> 1U));
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__u_add__DOT__large_exp)));
    } else if ((0x4000000U & vlSelf->__PVT__u_add__DOT__mant_sum)) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & vlSelf->__PVT__u_add__DOT__mant_sum);
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & (IData)(vlSelf->__PVT__u_add__DOT__large_exp));
    } else if (((0x1bU > (IData)(vlSelf->__PVT__u_add__DOT__lzc)) 
                & ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                   > (IData)(vlSelf->__PVT__u_add__DOT__lzc)))) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & (vlSelf->__PVT__u_add__DOT__mant_sum 
                                                   << (IData)(vlSelf->__PVT__u_add__DOT__lzc)));
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                                                  - (IData)(vlSelf->__PVT__u_add__DOT__lzc)));
    } else {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & 0U);
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & 0U);
    }
    vlSelf->__PVT__u_add__DOT__mant_rounded = (0x1ffffffU 
                                               & ((0xffffffU 
                                                   & (vlSelf->__PVT__u_add__DOT__norm_mant 
                                                      >> 3U)) 
                                                  + 
                                                  (1U 
                                                   & ((vlSelf->__PVT__u_add__DOT__norm_mant 
                                                       >> 2U) 
                                                      & (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xbU 
                                                                  & vlSelf->__PVT__u_add__DOT__norm_mant)))))));
    if ((0x1000000U & vlSelf->__PVT__u_add__DOT__mant_rounded)) {
        vlSelf->__PVT__u_add__DOT__final_exp = (0xffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__u_add__DOT__norm_exp)));
        vlSelf->__PVT__u_add__DOT__rounded_mant = (0x7fffffU 
                                                   & (vlSelf->__PVT__u_add__DOT__mant_rounded 
                                                      >> 1U));
    } else {
        vlSelf->__PVT__u_add__DOT__final_exp = vlSelf->__PVT__u_add__DOT__norm_exp;
        vlSelf->__PVT__u_add__DOT__rounded_mant = (0x7fffffU 
                                                   & vlSelf->__PVT__u_add__DOT__mant_rounded);
    }
}

VL_INLINE_OPT void Vnpu_system_top_mac_pe___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__0(Vnpu_system_top_mac_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnpu_system_top_mac_pe___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__0\n"); );
    // Body
    if (vlSymsp->TOP.rst_n) {
        if (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT____Vcellinp__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__weight_load_en) {
            vlSelf->__PVT__weight_reg = (vlSymsp->TOP.rdata[1U] 
                                         >> 0x10U);
        }
        vlSelf->psum_out = ((((0xffU == (0xffU & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xcU]
                                                  [3U] 
                                                  >> 0x17U))) 
                              & (0U != (0x7fffffU & 
                                        vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                        [0xcU][3U]))) 
                             | (IData)(((0x7f800000U 
                                         == (0x7f800000U 
                                             & vlSelf->__PVT__fp32_product)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSelf->__PVT__fp32_product)))))
                             ? 0x7fc00000U : (((IData)(vlSelf->__PVT__u_add__DOT__a_is_inf) 
                                               & (IData)(vlSelf->__PVT__u_add__DOT__b_is_inf))
                                               ? ((
                                                   (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xcU]
                                                    [3U] 
                                                    >> 0x1fU) 
                                                   != 
                                                   (vlSelf->__PVT__fp32_product 
                                                    >> 0x1fU))
                                                   ? 0x7fc00000U
                                                   : 
                                                  (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xcU]
                                                      [3U])))
                                               : ((IData)(vlSelf->__PVT__u_add__DOT__a_is_inf)
                                                   ? 
                                                  (0x7f800000U 
                                                   | (0x80000000U 
                                                      & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xcU]
                                                      [3U]))
                                                   : 
                                                  ((IData)(vlSelf->__PVT__u_add__DOT__b_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->__PVT__fp32_product))
                                                    : 
                                                   (((IData)(vlSelf->__PVT__u_add__DOT__a_is_zero) 
                                                     & (IData)(vlSelf->__PVT__u_add__DOT__b_is_zero))
                                                     ? 
                                                    (0x80000000U 
                                                     & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                        [0xcU]
                                                        [3U] 
                                                        & vlSelf->__PVT__fp32_product))
                                                     : 
                                                    ((IData)(vlSelf->__PVT__u_add__DOT__a_is_zero)
                                                      ? vlSelf->__PVT__fp32_product
                                                      : 
                                                     ((IData)(vlSelf->__PVT__u_add__DOT__b_is_zero)
                                                       ? 
                                                      vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xcU]
                                                      [3U]
                                                       : 
                                                      (((0U 
                                                         == (IData)(vlSelf->__PVT__u_add__DOT__norm_exp)) 
                                                        & (0U 
                                                           == vlSelf->__PVT__u_add__DOT__norm_mant))
                                                        ? 0U
                                                        : 
                                                       ((0xffU 
                                                         <= (IData)(vlSelf->__PVT__u_add__DOT__final_exp))
                                                         ? 
                                                        (0x7f800000U 
                                                         | ((IData)(vlSelf->__PVT__u_add__DOT__large_sign) 
                                                            << 0x1fU))
                                                         : 
                                                        (((IData)(vlSelf->__PVT__u_add__DOT__large_sign) 
                                                          << 0x1fU) 
                                                         | (((IData)(vlSelf->__PVT__u_add__DOT__final_exp) 
                                                             << 0x17U) 
                                                            | vlSelf->__PVT__u_add__DOT__rounded_mant)))))))))));
        vlSelf->act_out = vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
            [0xcU][3U];
    } else {
        vlSelf->__PVT__weight_reg = 0U;
        vlSelf->psum_out = 0U;
        vlSelf->act_out = 0U;
    }
}

VL_INLINE_OPT void Vnpu_system_top_mac_pe___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__1(Vnpu_system_top_mac_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vnpu_system_top_mac_pe___nba_sequent__TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__1\n"); );
    // Init
    CData/*0:0*/ u_mul__DOT____VdfgExtracted_h1f028376__0;
    u_mul__DOT____VdfgExtracted_h1f028376__0 = 0;
    IData/*23:0*/ u_add__DOT____VdfgExtracted_hb7d58418__0;
    u_add__DOT____VdfgExtracted_hb7d58418__0 = 0;
    // Body
    vlSelf->__PVT__u_add__DOT__a_is_inf = ((0xffU == 
                                            (0xffU 
                                             & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xcU]
                                                [3U] 
                                                >> 0x17U))) 
                                           & (0U == 
                                              (0x7fffffU 
                                               & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                               [0xcU]
                                               [3U])));
    if ((0U == (0xffU & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                         [0xcU][3U] >> 0x17U)))) {
        vlSelf->__PVT__u_add__DOT__a_is_zero = (0U 
                                                == 
                                                (0x7fffffU 
                                                 & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                 [0xcU]
                                                 [3U]));
        vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0 
            = (0x7fffffU & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
               [0xcU][3U]);
    } else {
        vlSelf->__PVT__u_add__DOT__a_is_zero = 0U;
        vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0 
            = (0x800000U | (0x7fffffU & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                            [0xcU][3U]));
    }
    u_mul__DOT____VdfgExtracted_h1f028376__0 = (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                      [0xcU]
                                                      [3U] 
                                                      >> 0xaU))) 
                                                 & (0U 
                                                    == 
                                                    (0x3ffU 
                                                     & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                     [0xcU]
                                                     [3U]))) 
                                                | (IData)(
                                                          (0U 
                                                           == 
                                                           (0x7fffU 
                                                            & (IData)(vlSelf->__PVT__weight_reg)))));
    vlSelf->__PVT__u_mul__DOT__result_sign = (1U & 
                                              ((vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xcU]
                                                [3U] 
                                                ^ (IData)(vlSelf->__PVT__weight_reg)) 
                                               >> 0xfU));
    vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0 = (0x1ffU 
                                                  & ((0x1fU 
                                                      & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                         [0xcU]
                                                         [3U] 
                                                         >> 0xaU)) 
                                                     + 
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->__PVT__weight_reg) 
                                                         >> 0xaU))));
    vlSelf->__PVT__u_mul__DOT__mant_product = (0x3fffffU 
                                               & ((0x400U 
                                                   | (0x3ffU 
                                                      & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                      [0xcU]
                                                      [3U])) 
                                                  * 
                                                  (0x400U 
                                                   | (0x3ffU 
                                                      & (IData)(vlSelf->__PVT__weight_reg)))));
    vlSelf->__PVT__u_mul__DOT__fp32_exp = (0x1ffU & 
                                           ((0x200000U 
                                             & vlSelf->__PVT__u_mul__DOT__mant_product)
                                             ? ((IData)(0x62U) 
                                                + (IData)(vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0))
                                             : ((IData)(0x61U) 
                                                + (IData)(vlSelf->u_mul__DOT____VdfgTmp_h8cc3278a__0))));
    vlSelf->__PVT__fp32_product = ((((0x1fU == (0x1fU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0xcU]
                                                   [3U] 
                                                   >> 0xaU))) 
                                     & (0U != (0x3ffU 
                                               & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xcU]
                                               [3U]))) 
                                    | (IData)(((0x7c00U 
                                                == 
                                                (0x7c00U 
                                                 & (IData)(vlSelf->__PVT__weight_reg))) 
                                               & (0U 
                                                  != 
                                                  (0x3ffU 
                                                   & (IData)(vlSelf->__PVT__weight_reg))))))
                                    ? 0x7fc00000U : 
                                   ((((0x1fU == (0x1fU 
                                                 & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                    [0xcU]
                                                    [3U] 
                                                    >> 0xaU))) 
                                      & (0U == (0x3ffU 
                                                & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0xcU]
                                                [3U]))) 
                                     | (IData)((0x7c00U 
                                                == 
                                                (0x7fffU 
                                                 & (IData)(vlSelf->__PVT__weight_reg)))))
                                     ? ((IData)(u_mul__DOT____VdfgExtracted_h1f028376__0)
                                         ? 0x7fc00000U
                                         : (0x7f800000U 
                                            | ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                               << 0x1fU)))
                                     : (((IData)(u_mul__DOT____VdfgExtracted_h1f028376__0) 
                                         | (((0U == 
                                              (0x1fU 
                                               & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xcU]
                                                  [3U] 
                                                  >> 0xaU))) 
                                             & (0U 
                                                != 
                                                (0x3ffU 
                                                 & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [3U]))) 
                                            | (IData)(
                                                      ((0U 
                                                        == 
                                                        (0x7c00U 
                                                         & (IData)(vlSelf->__PVT__weight_reg))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSelf->__PVT__weight_reg)))))))
                                         ? ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                            << 0x1fU)
                                         : ((IData)(
                                                    (((IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp) 
                                                      >> 8U) 
                                                     | (0xffU 
                                                        <= (IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp))))
                                             ? (0x7f800000U 
                                                | ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                   << 0x1fU))
                                             : ((0U 
                                                 == (IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                 << 0x1fU)
                                                 : 
                                                (((IData)(vlSelf->__PVT__u_mul__DOT__result_sign) 
                                                  << 0x1fU) 
                                                 | ((0x7f800000U 
                                                     & ((IData)(vlSelf->__PVT__u_mul__DOT__fp32_exp) 
                                                        << 0x17U)) 
                                                    | ((0x200000U 
                                                        & vlSelf->__PVT__u_mul__DOT__mant_product)
                                                        ? 
                                                       (0x7ffffcU 
                                                        & (vlSelf->__PVT__u_mul__DOT__mant_product 
                                                           << 2U))
                                                        : 
                                                       (0x7ffff8U 
                                                        & (vlSelf->__PVT__u_mul__DOT__mant_product 
                                                           << 3U))))))))));
    vlSelf->__PVT__u_add__DOT__b_is_inf = (IData)((0x7f800000U 
                                                   == 
                                                   (0x7fffffffU 
                                                    & vlSelf->__PVT__fp32_product)));
    vlSelf->__PVT__u_add__DOT__b_is_zero = (IData)(
                                                   (0U 
                                                    == 
                                                    (0x7fffffffU 
                                                     & vlSelf->__PVT__fp32_product)));
    u_add__DOT____VdfgExtracted_hb7d58418__0 = ((0U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSelf->__PVT__fp32_product 
                                                     >> 0x17U)))
                                                 ? 
                                                (0x7fffffU 
                                                 & vlSelf->__PVT__fp32_product)
                                                 : 
                                                (0x800000U 
                                                 | (0x7fffffU 
                                                    & vlSelf->__PVT__fp32_product)));
    vlSelf->__PVT__u_add__DOT__a_is_larger = (((0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [3U] 
                                                   >> 0x17U)) 
                                               > (0xffU 
                                                  & (vlSelf->__PVT__fp32_product 
                                                     >> 0x17U))) 
                                              | (((0xffU 
                                                   & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xcU]
                                                      [3U] 
                                                      >> 0x17U)) 
                                                  == 
                                                  (0xffU 
                                                   & (vlSelf->__PVT__fp32_product 
                                                      >> 0x17U))) 
                                                 & ((0x7fffffU 
                                                     & vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xcU]
                                                     [3U]) 
                                                    >= 
                                                    (0x7fffffU 
                                                     & vlSelf->__PVT__fp32_product))));
    if (vlSelf->__PVT__u_add__DOT__a_is_larger) {
        vlSelf->__PVT__u_add__DOT__large_sign = (1U 
                                                 & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xcU]
                                                    [3U] 
                                                    >> 0x1fU));
        vlSelf->__PVT__u_add__DOT__large_mant = vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__u_add__DOT__small_mant = u_add__DOT____VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__u_add__DOT__large_exp = (0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [3U] 
                                                   >> 0x17U));
        vlSelf->__PVT__u_add__DOT__small_exp = (0xffU 
                                                & (vlSelf->__PVT__fp32_product 
                                                   >> 0x17U));
    } else {
        vlSelf->__PVT__u_add__DOT__large_sign = (1U 
                                                 & (vlSelf->__PVT__fp32_product 
                                                    >> 0x1fU));
        vlSelf->__PVT__u_add__DOT__large_mant = u_add__DOT____VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__u_add__DOT__small_mant = vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__u_add__DOT__large_exp = (0xffU 
                                                & (vlSelf->__PVT__fp32_product 
                                                   >> 0x17U));
        vlSelf->__PVT__u_add__DOT__small_exp = (0xffU 
                                                & (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [3U] 
                                                   >> 0x17U));
    }
    vlSelf->__PVT__u_add__DOT__exp_diff = (0xffU & 
                                           ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                                            - (IData)(vlSelf->__PVT__u_add__DOT__small_exp)));
    if ((0U == (IData)(vlSelf->__PVT__u_add__DOT__exp_diff))) {
        vlSelf->__PVT__u_add__DOT__aligned_small = 
            (vlSelf->__PVT__u_add__DOT__small_mant 
             << 3U);
        vlSelf->__PVT__u_add__DOT__sticky_bit = 0U;
    } else if ((0x1bU > (IData)(vlSelf->__PVT__u_add__DOT__exp_diff))) {
        vlSelf->__PVT__u_add__DOT__aligned_small = 
            (0x7ffffffU & VL_SHIFTR_III(27,27,8, (vlSelf->__PVT__u_add__DOT__small_mant 
                                                  << 3U), (IData)(vlSelf->__PVT__u_add__DOT__exp_diff)));
        vlSelf->__PVT__u_add__DOT__sticky_bit = (0U 
                                                 != 
                                                 ((vlSelf->__PVT__u_add__DOT__small_mant 
                                                   << 3U) 
                                                  & (VL_SHIFTL_III(27,27,8, (IData)(1U), (IData)(vlSelf->__PVT__u_add__DOT__exp_diff)) 
                                                     - (IData)(1U))));
    } else {
        vlSelf->__PVT__u_add__DOT__aligned_small = 0U;
        vlSelf->__PVT__u_add__DOT__sticky_bit = (0U 
                                                 != vlSelf->__PVT__u_add__DOT__small_mant);
    }
    vlSelf->__PVT__u_add__DOT__aligned_small = ((0x7fffffeU 
                                                 & vlSelf->__PVT__u_add__DOT__aligned_small) 
                                                | (1U 
                                                   & (vlSelf->__PVT__u_add__DOT__aligned_small 
                                                      | (IData)(vlSelf->__PVT__u_add__DOT__sticky_bit))));
    vlSelf->__PVT__u_add__DOT__mant_sum = (0xfffffffU 
                                           & ((1U & 
                                               ((IData)(vlSelf->__PVT__u_add__DOT__large_sign) 
                                                ^ ((IData)(vlSelf->__PVT__u_add__DOT__a_is_larger)
                                                    ? 
                                                   (vlSelf->__PVT__fp32_product 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSymsp->TOP.npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xcU]
                                                    [3U] 
                                                    >> 0x1fU))))
                                               ? ((vlSelf->__PVT__u_add__DOT__large_mant 
                                                   << 3U) 
                                                  - vlSelf->__PVT__u_add__DOT__aligned_small)
                                               : ((vlSelf->__PVT__u_add__DOT__large_mant 
                                                   << 3U) 
                                                  + vlSelf->__PVT__u_add__DOT__aligned_small)));
    vlSelf->__PVT__u_add__DOT__lzc = (((((((((0x8000000U 
                                              == (0x8000000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                             | (0x4000000U 
                                                == 
                                                (0xc000000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                            | (0x2000000U 
                                               == (0xe000000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                           | (0x1000000U 
                                              == (0xf000000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                          | (0x800000U 
                                             == (0xf800000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                         | (0x400000U 
                                            == (0xfc00000U 
                                                & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                        | (0x200000U 
                                           == (0xfe00000U 
                                               & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                       | (0x100000U 
                                          == (0xff00000U 
                                              & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                       ? ((0x8000000U 
                                           == (0x8000000U 
                                               & vlSelf->__PVT__u_add__DOT__mant_sum))
                                           ? 0U : (
                                                   (0x4000000U 
                                                    == 
                                                    (0xc000000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0U
                                                    : 
                                                   ((0x2000000U 
                                                     == 
                                                     (0xe000000U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 1U
                                                     : 
                                                    ((0x1000000U 
                                                      == 
                                                      (0xf000000U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 2U
                                                      : 
                                                     ((0x800000U 
                                                       == 
                                                       (0xf800000U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 3U
                                                       : 
                                                      ((0x400000U 
                                                        == 
                                                        (0xfc00000U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 4U
                                                        : 
                                                       ((0x200000U 
                                                         == 
                                                         (0xfe00000U 
                                                          & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                         ? 5U
                                                         : 6U)))))))
                                       : (((((((((0x80000U 
                                                  == 
                                                  (0xff80000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                                 | (0x40000U 
                                                    == 
                                                    (0xffc0000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                | (0x20000U 
                                                   == 
                                                   (0xffe0000U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                               | (0x10000U 
                                                  == 
                                                  (0xfff0000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                              | (0x8000U 
                                                 == 
                                                 (0xfff8000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                             | (0x4000U 
                                                == 
                                                (0xfffc000U 
                                                 & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                            | (0x2000U 
                                               == (0xfffe000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                           | (0x1000U 
                                              == (0xffff000U 
                                                  & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                           ? ((0x80000U 
                                               == (0xff80000U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum))
                                               ? 7U
                                               : ((0x40000U 
                                                   == 
                                                   (0xffc0000U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 8U
                                                   : 
                                                  ((0x20000U 
                                                    == 
                                                    (0xffe0000U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 9U
                                                    : 
                                                   ((0x10000U 
                                                     == 
                                                     (0xfff0000U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0xaU
                                                     : 
                                                    ((0x8000U 
                                                      == 
                                                      (0xfff8000U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 0xbU
                                                      : 
                                                     ((0x4000U 
                                                       == 
                                                       (0xfffc000U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 0xcU
                                                       : 
                                                      ((0x2000U 
                                                        == 
                                                        (0xfffe000U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 0xdU
                                                        : 0xeU)))))))
                                           : ((((((
                                                   (((0x800U 
                                                      == 
                                                      (0xffff800U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum)) 
                                                     | (0x400U 
                                                        == 
                                                        (0xffffc00U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                    | (0x200U 
                                                       == 
                                                       (0xffffe00U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                   | (0x100U 
                                                      == 
                                                      (0xfffff00U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                  | (0x80U 
                                                     == 
                                                     (0xfffff80U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                 | (0x40U 
                                                    == 
                                                    (0xfffffc0U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                                | (0x20U 
                                                   == 
                                                   (0xfffffe0U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))) 
                                               | (0x10U 
                                                  == 
                                                  (0xffffff0U 
                                                   & vlSelf->__PVT__u_add__DOT__mant_sum)))
                                               ? ((0x800U 
                                                   == 
                                                   (0xffff800U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 0xfU
                                                   : 
                                                  ((0x400U 
                                                    == 
                                                    (0xffffc00U 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0x10U
                                                    : 
                                                   ((0x200U 
                                                     == 
                                                     (0xffffe00U 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0x11U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      (0xfffff00U 
                                                       & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                      ? 0x12U
                                                      : 
                                                     ((0x80U 
                                                       == 
                                                       (0xfffff80U 
                                                        & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                       ? 0x13U
                                                       : 
                                                      ((0x40U 
                                                        == 
                                                        (0xfffffc0U 
                                                         & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                        ? 0x14U
                                                        : 
                                                       ((0x20U 
                                                         == 
                                                         (0xfffffe0U 
                                                          & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                         ? 0x15U
                                                         : 0x16U)))))))
                                               : ((8U 
                                                   == 
                                                   (0xffffff8U 
                                                    & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                   ? 0x17U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0xffffffcU 
                                                     & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                    ? 0x18U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xffffffeU 
                                                      & vlSelf->__PVT__u_add__DOT__mant_sum))
                                                     ? 0x19U
                                                     : 
                                                    ((1U 
                                                      == vlSelf->__PVT__u_add__DOT__mant_sum)
                                                      ? 0x1aU
                                                      : 0x1bU)))))));
    if ((0x8000000U & vlSelf->__PVT__u_add__DOT__mant_sum)) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & (vlSelf->__PVT__u_add__DOT__mant_sum 
                                                   >> 1U));
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__u_add__DOT__large_exp)));
    } else if ((0x4000000U & vlSelf->__PVT__u_add__DOT__mant_sum)) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & vlSelf->__PVT__u_add__DOT__mant_sum);
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & (IData)(vlSelf->__PVT__u_add__DOT__large_exp));
    } else if (((0x1bU > (IData)(vlSelf->__PVT__u_add__DOT__lzc)) 
                & ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                   > (IData)(vlSelf->__PVT__u_add__DOT__lzc)))) {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & (vlSelf->__PVT__u_add__DOT__mant_sum 
                                                   << (IData)(vlSelf->__PVT__u_add__DOT__lzc)));
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & ((IData)(vlSelf->__PVT__u_add__DOT__large_exp) 
                                                  - (IData)(vlSelf->__PVT__u_add__DOT__lzc)));
    } else {
        vlSelf->__PVT__u_add__DOT__norm_mant = (0x7ffffffU 
                                                & 0U);
        vlSelf->__PVT__u_add__DOT__norm_exp = (0xffU 
                                               & 0U);
    }
    vlSelf->__PVT__u_add__DOT__mant_rounded = (0x1ffffffU 
                                               & ((0xffffffU 
                                                   & (vlSelf->__PVT__u_add__DOT__norm_mant 
                                                      >> 3U)) 
                                                  + 
                                                  (1U 
                                                   & ((vlSelf->__PVT__u_add__DOT__norm_mant 
                                                       >> 2U) 
                                                      & (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xbU 
                                                                  & vlSelf->__PVT__u_add__DOT__norm_mant)))))));
    if ((0x1000000U & vlSelf->__PVT__u_add__DOT__mant_rounded)) {
        vlSelf->__PVT__u_add__DOT__final_exp = (0xffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__u_add__DOT__norm_exp)));
        vlSelf->__PVT__u_add__DOT__rounded_mant = (0x7fffffU 
                                                   & (vlSelf->__PVT__u_add__DOT__mant_rounded 
                                                      >> 1U));
    } else {
        vlSelf->__PVT__u_add__DOT__final_exp = vlSelf->__PVT__u_add__DOT__norm_exp;
        vlSelf->__PVT__u_add__DOT__rounded_mant = (0x7fffffU 
                                                   & vlSelf->__PVT__u_add__DOT__mant_rounded);
    }
}
