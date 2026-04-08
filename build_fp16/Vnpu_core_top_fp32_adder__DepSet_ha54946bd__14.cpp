// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpu_core_top.h for the primary calling header

#include "Vnpu_core_top__pch.h"
#include "Vnpu_core_top__Syms.h"
#include "Vnpu_core_top_fp32_adder.h"

VL_INLINE_OPT void Vnpu_core_top_fp32_adder___ico_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_core_top_fp32_adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_core_top_fp32_adder___ico_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0\n"); );
    // Init
    IData/*23:0*/ __PVT__large_mant;
    __PVT__large_mant = 0;
    IData/*23:0*/ __PVT__small_mant;
    __PVT__small_mant = 0;
    CData/*7:0*/ __PVT__exp_diff;
    __PVT__exp_diff = 0;
    CData/*0:0*/ __PVT__a_is_larger;
    __PVT__a_is_larger = 0;
    IData/*27:0*/ __PVT__mant_sum;
    __PVT__mant_sum = 0;
    CData/*4:0*/ __PVT__lzc;
    __PVT__lzc = 0;
    IData/*24:0*/ __PVT__mant_rounded;
    __PVT__mant_rounded = 0;
    IData/*23:0*/ __VdfgExtracted_hb7d58418__0;
    __VdfgExtracted_hb7d58418__0 = 0;
    // Body
    vlSelf->__PVT__b_is_inf = (IData)((0x7f800000U 
                                       == (0x7fffffffU 
                                           & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    vlSelf->__PVT__b_is_zero = (IData)((0U == (0x7fffffffU 
                                               & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __VdfgExtracted_hb7d58418__0 = ((0U == (0xffU & 
                                            (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U)))
                                     ? (0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)
                                     : (0x800000U | 
                                        (0x7fffffU 
                                         & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __PVT__a_is_larger = (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [0xbU][0xdU] >> 0x17U)) 
                           > (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                       >> 0x17U))) 
                          | (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                        [0xbU][0xdU] 
                                        >> 0x17U)) 
                              == (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x17U))) 
                             & ((0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xbU][0xdU]) >= (0x7fffffU 
                                                   & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))));
    if (__PVT__a_is_larger) {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                           [0xbU][0xdU] 
                                           >> 0x1fU));
        __PVT__large_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        __PVT__small_mant = __VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xbU]
                                             [0xdU] 
                                             >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
    } else {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x1fU));
        __PVT__large_mant = __VdfgExtracted_hb7d58418__0;
        __PVT__small_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xbU]
                                             [0xdU] 
                                             >> 0x17U));
    }
    __PVT__exp_diff = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                - (IData)(vlSelf->__PVT__small_exp)));
    if ((0U == (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (__PVT__small_mant 
                                        << 3U);
        vlSelf->__PVT__sticky_bit = 0U;
    } else if ((0x1bU > (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (0x7ffffffU 
                                        & VL_SHIFTR_III(27,27,8, 
                                                        (__PVT__small_mant 
                                                         << 3U), (IData)(__PVT__exp_diff)));
        vlSelf->__PVT__sticky_bit = (0U != ((__PVT__small_mant 
                                             << 3U) 
                                            & (VL_SHIFTL_III(27,27,8, (IData)(1U), (IData)(__PVT__exp_diff)) 
                                               - (IData)(1U))));
    } else {
        vlSelf->__PVT__aligned_small = 0U;
        vlSelf->__PVT__sticky_bit = (0U != __PVT__small_mant);
    }
    vlSelf->__PVT__aligned_small = ((0x7fffffeU & vlSelf->__PVT__aligned_small) 
                                    | (1U & (vlSelf->__PVT__aligned_small 
                                             | (IData)(vlSelf->__PVT__sticky_bit))));
    __PVT__mant_sum = (0xfffffffU & ((1U & ((IData)(vlSelf->__PVT__large_sign) 
                                            ^ ((IData)(__PVT__a_is_larger)
                                                ? (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                   >> 0x1fU)
                                                : (
                                                   vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xbU]
                                                   [0xdU] 
                                                   >> 0x1fU))))
                                      ? ((__PVT__large_mant 
                                          << 3U) - vlSelf->__PVT__aligned_small)
                                      : ((__PVT__large_mant 
                                          << 3U) + vlSelf->__PVT__aligned_small)));
    __PVT__lzc = (((((((((0x8000000U == (0x8000000U 
                                         & __PVT__mant_sum)) 
                         | (0x4000000U == (0xc000000U 
                                           & __PVT__mant_sum))) 
                        | (0x2000000U == (0xe000000U 
                                          & __PVT__mant_sum))) 
                       | (0x1000000U == (0xf000000U 
                                         & __PVT__mant_sum))) 
                      | (0x800000U == (0xf800000U & __PVT__mant_sum))) 
                     | (0x400000U == (0xfc00000U & __PVT__mant_sum))) 
                    | (0x200000U == (0xfe00000U & __PVT__mant_sum))) 
                   | (0x100000U == (0xff00000U & __PVT__mant_sum)))
                   ? ((0x8000000U == (0x8000000U & __PVT__mant_sum))
                       ? 0U : ((0x4000000U == (0xc000000U 
                                               & __PVT__mant_sum))
                                ? 0U : ((0x2000000U 
                                         == (0xe000000U 
                                             & __PVT__mant_sum))
                                         ? 1U : ((0x1000000U 
                                                  == 
                                                  (0xf000000U 
                                                   & __PVT__mant_sum))
                                                  ? 2U
                                                  : 
                                                 ((0x800000U 
                                                   == 
                                                   (0xf800000U 
                                                    & __PVT__mant_sum))
                                                   ? 3U
                                                   : 
                                                  ((0x400000U 
                                                    == 
                                                    (0xfc00000U 
                                                     & __PVT__mant_sum))
                                                    ? 4U
                                                    : 
                                                   ((0x200000U 
                                                     == 
                                                     (0xfe00000U 
                                                      & __PVT__mant_sum))
                                                     ? 5U
                                                     : 6U)))))))
                   : (((((((((0x80000U == (0xff80000U 
                                           & __PVT__mant_sum)) 
                             | (0x40000U == (0xffc0000U 
                                             & __PVT__mant_sum))) 
                            | (0x20000U == (0xffe0000U 
                                            & __PVT__mant_sum))) 
                           | (0x10000U == (0xfff0000U 
                                           & __PVT__mant_sum))) 
                          | (0x8000U == (0xfff8000U 
                                         & __PVT__mant_sum))) 
                         | (0x4000U == (0xfffc000U 
                                        & __PVT__mant_sum))) 
                        | (0x2000U == (0xfffe000U & __PVT__mant_sum))) 
                       | (0x1000U == (0xffff000U & __PVT__mant_sum)))
                       ? ((0x80000U == (0xff80000U 
                                        & __PVT__mant_sum))
                           ? 7U : ((0x40000U == (0xffc0000U 
                                                 & __PVT__mant_sum))
                                    ? 8U : ((0x20000U 
                                             == (0xffe0000U 
                                                 & __PVT__mant_sum))
                                             ? 9U : 
                                            ((0x10000U 
                                              == (0xfff0000U 
                                                  & __PVT__mant_sum))
                                              ? 0xaU
                                              : ((0x8000U 
                                                  == 
                                                  (0xfff8000U 
                                                   & __PVT__mant_sum))
                                                  ? 0xbU
                                                  : 
                                                 ((0x4000U 
                                                   == 
                                                   (0xfffc000U 
                                                    & __PVT__mant_sum))
                                                   ? 0xcU
                                                   : 
                                                  ((0x2000U 
                                                    == 
                                                    (0xfffe000U 
                                                     & __PVT__mant_sum))
                                                    ? 0xdU
                                                    : 0xeU)))))))
                       : (((((((((0x800U == (0xffff800U 
                                             & __PVT__mant_sum)) 
                                 | (0x400U == (0xffffc00U 
                                               & __PVT__mant_sum))) 
                                | (0x200U == (0xffffe00U 
                                              & __PVT__mant_sum))) 
                               | (0x100U == (0xfffff00U 
                                             & __PVT__mant_sum))) 
                              | (0x80U == (0xfffff80U 
                                           & __PVT__mant_sum))) 
                             | (0x40U == (0xfffffc0U 
                                          & __PVT__mant_sum))) 
                            | (0x20U == (0xfffffe0U 
                                         & __PVT__mant_sum))) 
                           | (0x10U == (0xffffff0U 
                                        & __PVT__mant_sum)))
                           ? ((0x800U == (0xffff800U 
                                          & __PVT__mant_sum))
                               ? 0xfU : ((0x400U == 
                                          (0xffffc00U 
                                           & __PVT__mant_sum))
                                          ? 0x10U : 
                                         ((0x200U == 
                                           (0xffffe00U 
                                            & __PVT__mant_sum))
                                           ? 0x11U : 
                                          ((0x100U 
                                            == (0xfffff00U 
                                                & __PVT__mant_sum))
                                            ? 0x12U
                                            : ((0x80U 
                                                == 
                                                (0xfffff80U 
                                                 & __PVT__mant_sum))
                                                ? 0x13U
                                                : (
                                                   (0x40U 
                                                    == 
                                                    (0xfffffc0U 
                                                     & __PVT__mant_sum))
                                                    ? 0x14U
                                                    : 
                                                   ((0x20U 
                                                     == 
                                                     (0xfffffe0U 
                                                      & __PVT__mant_sum))
                                                     ? 0x15U
                                                     : 0x16U)))))))
                           : ((8U == (0xffffff8U & __PVT__mant_sum))
                               ? 0x17U : ((4U == (0xffffffcU 
                                                  & __PVT__mant_sum))
                                           ? 0x18U : 
                                          ((2U == (0xffffffeU 
                                                   & __PVT__mant_sum))
                                            ? 0x19U
                                            : ((1U 
                                                == __PVT__mant_sum)
                                                ? 0x1aU
                                                : 0x1bU)))))));
    if ((0x8000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  >> 1U));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__large_exp)));
    } else if ((0x4000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & __PVT__mant_sum);
        vlSelf->__PVT__norm_exp = (0xffU & (IData)(vlSelf->__PVT__large_exp));
    } else if (((0x1bU > (IData)(__PVT__lzc)) & ((IData)(vlSelf->__PVT__large_exp) 
                                                 > (IData)(__PVT__lzc)))) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  << (IData)(__PVT__lzc)));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                            - (IData)(__PVT__lzc)));
    } else {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & 0U);
        vlSelf->__PVT__norm_exp = (0xffU & 0U);
    }
    __PVT__mant_rounded = (0x1ffffffU & ((0xffffffU 
                                          & (vlSelf->__PVT__norm_mant 
                                             >> 3U)) 
                                         + (1U & ((vlSelf->__PVT__norm_mant 
                                                   >> 2U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0xbU 
                                                              & vlSelf->__PVT__norm_mant)))))));
    if ((0x1000000U & __PVT__mant_rounded)) {
        vlSelf->__PVT__final_exp = (0xffU & ((IData)(1U) 
                                             + (IData)(vlSelf->__PVT__norm_exp)));
        vlSelf->__PVT__rounded_mant = (0x7fffffU & 
                                       (__PVT__mant_rounded 
                                        >> 1U));
    } else {
        vlSelf->__PVT__final_exp = vlSelf->__PVT__norm_exp;
        vlSelf->__PVT__rounded_mant = (0x7fffffU & __PVT__mant_rounded);
    }
}

VL_INLINE_OPT void Vnpu_core_top_fp32_adder___nba_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_core_top_fp32_adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_core_top_fp32_adder___nba_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0\n"); );
    // Init
    IData/*23:0*/ __PVT__large_mant;
    __PVT__large_mant = 0;
    IData/*23:0*/ __PVT__small_mant;
    __PVT__small_mant = 0;
    CData/*7:0*/ __PVT__exp_diff;
    __PVT__exp_diff = 0;
    CData/*0:0*/ __PVT__a_is_larger;
    __PVT__a_is_larger = 0;
    IData/*27:0*/ __PVT__mant_sum;
    __PVT__mant_sum = 0;
    CData/*4:0*/ __PVT__lzc;
    __PVT__lzc = 0;
    IData/*24:0*/ __PVT__mant_rounded;
    __PVT__mant_rounded = 0;
    IData/*23:0*/ __VdfgExtracted_hb7d58418__0;
    __VdfgExtracted_hb7d58418__0 = 0;
    // Body
    vlSelf->__PVT__a_is_inf = ((0xffU == (0xffU & (
                                                   vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xbU]
                                                   [0xdU] 
                                                   >> 0x17U))) 
                               & (0U == (0x7fffffU 
                                         & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xbU][0xdU])));
    if ((0U == (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                         [0xbU][0xdU] >> 0x17U)))) {
        vlSelf->__PVT__a_is_zero = (0U == (0x7fffffU 
                                           & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                           [0xbU][0xdU]));
        vlSelf->__VdfgExtracted_h18a3deab__0 = (0x7fffffU 
                                                & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xbU]
                                                [0xdU]);
    } else {
        vlSelf->__PVT__a_is_zero = 0U;
        vlSelf->__VdfgExtracted_h18a3deab__0 = (0x800000U 
                                                | (0x7fffffU 
                                                   & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xbU]
                                                   [0xdU]));
    }
    vlSelf->__PVT__b_is_inf = (IData)((0x7f800000U 
                                       == (0x7fffffffU 
                                           & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    vlSelf->__PVT__b_is_zero = (IData)((0U == (0x7fffffffU 
                                               & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __VdfgExtracted_hb7d58418__0 = ((0U == (0xffU & 
                                            (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U)))
                                     ? (0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)
                                     : (0x800000U | 
                                        (0x7fffffU 
                                         & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __PVT__a_is_larger = (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [0xbU][0xdU] >> 0x17U)) 
                           > (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                       >> 0x17U))) 
                          | (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                        [0xbU][0xdU] 
                                        >> 0x17U)) 
                              == (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x17U))) 
                             & ((0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xbU][0xdU]) >= (0x7fffffU 
                                                   & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))));
    if (__PVT__a_is_larger) {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                           [0xbU][0xdU] 
                                           >> 0x1fU));
        __PVT__large_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        __PVT__small_mant = __VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xbU]
                                             [0xdU] 
                                             >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
    } else {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x1fU));
        __PVT__large_mant = __VdfgExtracted_hb7d58418__0;
        __PVT__small_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xbU]
                                             [0xdU] 
                                             >> 0x17U));
    }
    __PVT__exp_diff = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                - (IData)(vlSelf->__PVT__small_exp)));
    if ((0U == (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (__PVT__small_mant 
                                        << 3U);
        vlSelf->__PVT__sticky_bit = 0U;
    } else if ((0x1bU > (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (0x7ffffffU 
                                        & VL_SHIFTR_III(27,27,8, 
                                                        (__PVT__small_mant 
                                                         << 3U), (IData)(__PVT__exp_diff)));
        vlSelf->__PVT__sticky_bit = (0U != ((__PVT__small_mant 
                                             << 3U) 
                                            & (VL_SHIFTL_III(27,27,8, (IData)(1U), (IData)(__PVT__exp_diff)) 
                                               - (IData)(1U))));
    } else {
        vlSelf->__PVT__aligned_small = 0U;
        vlSelf->__PVT__sticky_bit = (0U != __PVT__small_mant);
    }
    vlSelf->__PVT__aligned_small = ((0x7fffffeU & vlSelf->__PVT__aligned_small) 
                                    | (1U & (vlSelf->__PVT__aligned_small 
                                             | (IData)(vlSelf->__PVT__sticky_bit))));
    __PVT__mant_sum = (0xfffffffU & ((1U & ((IData)(vlSelf->__PVT__large_sign) 
                                            ^ ((IData)(__PVT__a_is_larger)
                                                ? (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                   >> 0x1fU)
                                                : (
                                                   vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xbU]
                                                   [0xdU] 
                                                   >> 0x1fU))))
                                      ? ((__PVT__large_mant 
                                          << 3U) - vlSelf->__PVT__aligned_small)
                                      : ((__PVT__large_mant 
                                          << 3U) + vlSelf->__PVT__aligned_small)));
    __PVT__lzc = (((((((((0x8000000U == (0x8000000U 
                                         & __PVT__mant_sum)) 
                         | (0x4000000U == (0xc000000U 
                                           & __PVT__mant_sum))) 
                        | (0x2000000U == (0xe000000U 
                                          & __PVT__mant_sum))) 
                       | (0x1000000U == (0xf000000U 
                                         & __PVT__mant_sum))) 
                      | (0x800000U == (0xf800000U & __PVT__mant_sum))) 
                     | (0x400000U == (0xfc00000U & __PVT__mant_sum))) 
                    | (0x200000U == (0xfe00000U & __PVT__mant_sum))) 
                   | (0x100000U == (0xff00000U & __PVT__mant_sum)))
                   ? ((0x8000000U == (0x8000000U & __PVT__mant_sum))
                       ? 0U : ((0x4000000U == (0xc000000U 
                                               & __PVT__mant_sum))
                                ? 0U : ((0x2000000U 
                                         == (0xe000000U 
                                             & __PVT__mant_sum))
                                         ? 1U : ((0x1000000U 
                                                  == 
                                                  (0xf000000U 
                                                   & __PVT__mant_sum))
                                                  ? 2U
                                                  : 
                                                 ((0x800000U 
                                                   == 
                                                   (0xf800000U 
                                                    & __PVT__mant_sum))
                                                   ? 3U
                                                   : 
                                                  ((0x400000U 
                                                    == 
                                                    (0xfc00000U 
                                                     & __PVT__mant_sum))
                                                    ? 4U
                                                    : 
                                                   ((0x200000U 
                                                     == 
                                                     (0xfe00000U 
                                                      & __PVT__mant_sum))
                                                     ? 5U
                                                     : 6U)))))))
                   : (((((((((0x80000U == (0xff80000U 
                                           & __PVT__mant_sum)) 
                             | (0x40000U == (0xffc0000U 
                                             & __PVT__mant_sum))) 
                            | (0x20000U == (0xffe0000U 
                                            & __PVT__mant_sum))) 
                           | (0x10000U == (0xfff0000U 
                                           & __PVT__mant_sum))) 
                          | (0x8000U == (0xfff8000U 
                                         & __PVT__mant_sum))) 
                         | (0x4000U == (0xfffc000U 
                                        & __PVT__mant_sum))) 
                        | (0x2000U == (0xfffe000U & __PVT__mant_sum))) 
                       | (0x1000U == (0xffff000U & __PVT__mant_sum)))
                       ? ((0x80000U == (0xff80000U 
                                        & __PVT__mant_sum))
                           ? 7U : ((0x40000U == (0xffc0000U 
                                                 & __PVT__mant_sum))
                                    ? 8U : ((0x20000U 
                                             == (0xffe0000U 
                                                 & __PVT__mant_sum))
                                             ? 9U : 
                                            ((0x10000U 
                                              == (0xfff0000U 
                                                  & __PVT__mant_sum))
                                              ? 0xaU
                                              : ((0x8000U 
                                                  == 
                                                  (0xfff8000U 
                                                   & __PVT__mant_sum))
                                                  ? 0xbU
                                                  : 
                                                 ((0x4000U 
                                                   == 
                                                   (0xfffc000U 
                                                    & __PVT__mant_sum))
                                                   ? 0xcU
                                                   : 
                                                  ((0x2000U 
                                                    == 
                                                    (0xfffe000U 
                                                     & __PVT__mant_sum))
                                                    ? 0xdU
                                                    : 0xeU)))))))
                       : (((((((((0x800U == (0xffff800U 
                                             & __PVT__mant_sum)) 
                                 | (0x400U == (0xffffc00U 
                                               & __PVT__mant_sum))) 
                                | (0x200U == (0xffffe00U 
                                              & __PVT__mant_sum))) 
                               | (0x100U == (0xfffff00U 
                                             & __PVT__mant_sum))) 
                              | (0x80U == (0xfffff80U 
                                           & __PVT__mant_sum))) 
                             | (0x40U == (0xfffffc0U 
                                          & __PVT__mant_sum))) 
                            | (0x20U == (0xfffffe0U 
                                         & __PVT__mant_sum))) 
                           | (0x10U == (0xffffff0U 
                                        & __PVT__mant_sum)))
                           ? ((0x800U == (0xffff800U 
                                          & __PVT__mant_sum))
                               ? 0xfU : ((0x400U == 
                                          (0xffffc00U 
                                           & __PVT__mant_sum))
                                          ? 0x10U : 
                                         ((0x200U == 
                                           (0xffffe00U 
                                            & __PVT__mant_sum))
                                           ? 0x11U : 
                                          ((0x100U 
                                            == (0xfffff00U 
                                                & __PVT__mant_sum))
                                            ? 0x12U
                                            : ((0x80U 
                                                == 
                                                (0xfffff80U 
                                                 & __PVT__mant_sum))
                                                ? 0x13U
                                                : (
                                                   (0x40U 
                                                    == 
                                                    (0xfffffc0U 
                                                     & __PVT__mant_sum))
                                                    ? 0x14U
                                                    : 
                                                   ((0x20U 
                                                     == 
                                                     (0xfffffe0U 
                                                      & __PVT__mant_sum))
                                                     ? 0x15U
                                                     : 0x16U)))))))
                           : ((8U == (0xffffff8U & __PVT__mant_sum))
                               ? 0x17U : ((4U == (0xffffffcU 
                                                  & __PVT__mant_sum))
                                           ? 0x18U : 
                                          ((2U == (0xffffffeU 
                                                   & __PVT__mant_sum))
                                            ? 0x19U
                                            : ((1U 
                                                == __PVT__mant_sum)
                                                ? 0x1aU
                                                : 0x1bU)))))));
    if ((0x8000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  >> 1U));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__large_exp)));
    } else if ((0x4000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & __PVT__mant_sum);
        vlSelf->__PVT__norm_exp = (0xffU & (IData)(vlSelf->__PVT__large_exp));
    } else if (((0x1bU > (IData)(__PVT__lzc)) & ((IData)(vlSelf->__PVT__large_exp) 
                                                 > (IData)(__PVT__lzc)))) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  << (IData)(__PVT__lzc)));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                            - (IData)(__PVT__lzc)));
    } else {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & 0U);
        vlSelf->__PVT__norm_exp = (0xffU & 0U);
    }
    __PVT__mant_rounded = (0x1ffffffU & ((0xffffffU 
                                          & (vlSelf->__PVT__norm_mant 
                                             >> 3U)) 
                                         + (1U & ((vlSelf->__PVT__norm_mant 
                                                   >> 2U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0xbU 
                                                              & vlSelf->__PVT__norm_mant)))))));
    if ((0x1000000U & __PVT__mant_rounded)) {
        vlSelf->__PVT__final_exp = (0xffU & ((IData)(1U) 
                                             + (IData)(vlSelf->__PVT__norm_exp)));
        vlSelf->__PVT__rounded_mant = (0x7fffffU & 
                                       (__PVT__mant_rounded 
                                        >> 1U));
    } else {
        vlSelf->__PVT__final_exp = vlSelf->__PVT__norm_exp;
        vlSelf->__PVT__rounded_mant = (0x7fffffU & __PVT__mant_rounded);
    }
}

VL_INLINE_OPT void Vnpu_core_top_fp32_adder___ico_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_core_top_fp32_adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_core_top_fp32_adder___ico_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0\n"); );
    // Init
    IData/*23:0*/ __PVT__large_mant;
    __PVT__large_mant = 0;
    IData/*23:0*/ __PVT__small_mant;
    __PVT__small_mant = 0;
    CData/*7:0*/ __PVT__exp_diff;
    __PVT__exp_diff = 0;
    CData/*0:0*/ __PVT__a_is_larger;
    __PVT__a_is_larger = 0;
    IData/*27:0*/ __PVT__mant_sum;
    __PVT__mant_sum = 0;
    CData/*4:0*/ __PVT__lzc;
    __PVT__lzc = 0;
    IData/*24:0*/ __PVT__mant_rounded;
    __PVT__mant_rounded = 0;
    IData/*23:0*/ __VdfgExtracted_hb7d58418__0;
    __VdfgExtracted_hb7d58418__0 = 0;
    // Body
    vlSelf->__PVT__b_is_inf = (IData)((0x7f800000U 
                                       == (0x7fffffffU 
                                           & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    vlSelf->__PVT__b_is_zero = (IData)((0U == (0x7fffffffU 
                                               & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __VdfgExtracted_hb7d58418__0 = ((0U == (0xffU & 
                                            (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U)))
                                     ? (0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)
                                     : (0x800000U | 
                                        (0x7fffffU 
                                         & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __PVT__a_is_larger = (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [0xbU][0xeU] >> 0x17U)) 
                           > (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                       >> 0x17U))) 
                          | (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                        [0xbU][0xeU] 
                                        >> 0x17U)) 
                              == (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x17U))) 
                             & ((0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xbU][0xeU]) >= (0x7fffffU 
                                                   & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))));
    if (__PVT__a_is_larger) {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                           [0xbU][0xeU] 
                                           >> 0x1fU));
        __PVT__large_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        __PVT__small_mant = __VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xbU]
                                             [0xeU] 
                                             >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
    } else {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x1fU));
        __PVT__large_mant = __VdfgExtracted_hb7d58418__0;
        __PVT__small_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xbU]
                                             [0xeU] 
                                             >> 0x17U));
    }
    __PVT__exp_diff = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                - (IData)(vlSelf->__PVT__small_exp)));
    if ((0U == (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (__PVT__small_mant 
                                        << 3U);
        vlSelf->__PVT__sticky_bit = 0U;
    } else if ((0x1bU > (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (0x7ffffffU 
                                        & VL_SHIFTR_III(27,27,8, 
                                                        (__PVT__small_mant 
                                                         << 3U), (IData)(__PVT__exp_diff)));
        vlSelf->__PVT__sticky_bit = (0U != ((__PVT__small_mant 
                                             << 3U) 
                                            & (VL_SHIFTL_III(27,27,8, (IData)(1U), (IData)(__PVT__exp_diff)) 
                                               - (IData)(1U))));
    } else {
        vlSelf->__PVT__aligned_small = 0U;
        vlSelf->__PVT__sticky_bit = (0U != __PVT__small_mant);
    }
    vlSelf->__PVT__aligned_small = ((0x7fffffeU & vlSelf->__PVT__aligned_small) 
                                    | (1U & (vlSelf->__PVT__aligned_small 
                                             | (IData)(vlSelf->__PVT__sticky_bit))));
    __PVT__mant_sum = (0xfffffffU & ((1U & ((IData)(vlSelf->__PVT__large_sign) 
                                            ^ ((IData)(__PVT__a_is_larger)
                                                ? (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                   >> 0x1fU)
                                                : (
                                                   vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xbU]
                                                   [0xeU] 
                                                   >> 0x1fU))))
                                      ? ((__PVT__large_mant 
                                          << 3U) - vlSelf->__PVT__aligned_small)
                                      : ((__PVT__large_mant 
                                          << 3U) + vlSelf->__PVT__aligned_small)));
    __PVT__lzc = (((((((((0x8000000U == (0x8000000U 
                                         & __PVT__mant_sum)) 
                         | (0x4000000U == (0xc000000U 
                                           & __PVT__mant_sum))) 
                        | (0x2000000U == (0xe000000U 
                                          & __PVT__mant_sum))) 
                       | (0x1000000U == (0xf000000U 
                                         & __PVT__mant_sum))) 
                      | (0x800000U == (0xf800000U & __PVT__mant_sum))) 
                     | (0x400000U == (0xfc00000U & __PVT__mant_sum))) 
                    | (0x200000U == (0xfe00000U & __PVT__mant_sum))) 
                   | (0x100000U == (0xff00000U & __PVT__mant_sum)))
                   ? ((0x8000000U == (0x8000000U & __PVT__mant_sum))
                       ? 0U : ((0x4000000U == (0xc000000U 
                                               & __PVT__mant_sum))
                                ? 0U : ((0x2000000U 
                                         == (0xe000000U 
                                             & __PVT__mant_sum))
                                         ? 1U : ((0x1000000U 
                                                  == 
                                                  (0xf000000U 
                                                   & __PVT__mant_sum))
                                                  ? 2U
                                                  : 
                                                 ((0x800000U 
                                                   == 
                                                   (0xf800000U 
                                                    & __PVT__mant_sum))
                                                   ? 3U
                                                   : 
                                                  ((0x400000U 
                                                    == 
                                                    (0xfc00000U 
                                                     & __PVT__mant_sum))
                                                    ? 4U
                                                    : 
                                                   ((0x200000U 
                                                     == 
                                                     (0xfe00000U 
                                                      & __PVT__mant_sum))
                                                     ? 5U
                                                     : 6U)))))))
                   : (((((((((0x80000U == (0xff80000U 
                                           & __PVT__mant_sum)) 
                             | (0x40000U == (0xffc0000U 
                                             & __PVT__mant_sum))) 
                            | (0x20000U == (0xffe0000U 
                                            & __PVT__mant_sum))) 
                           | (0x10000U == (0xfff0000U 
                                           & __PVT__mant_sum))) 
                          | (0x8000U == (0xfff8000U 
                                         & __PVT__mant_sum))) 
                         | (0x4000U == (0xfffc000U 
                                        & __PVT__mant_sum))) 
                        | (0x2000U == (0xfffe000U & __PVT__mant_sum))) 
                       | (0x1000U == (0xffff000U & __PVT__mant_sum)))
                       ? ((0x80000U == (0xff80000U 
                                        & __PVT__mant_sum))
                           ? 7U : ((0x40000U == (0xffc0000U 
                                                 & __PVT__mant_sum))
                                    ? 8U : ((0x20000U 
                                             == (0xffe0000U 
                                                 & __PVT__mant_sum))
                                             ? 9U : 
                                            ((0x10000U 
                                              == (0xfff0000U 
                                                  & __PVT__mant_sum))
                                              ? 0xaU
                                              : ((0x8000U 
                                                  == 
                                                  (0xfff8000U 
                                                   & __PVT__mant_sum))
                                                  ? 0xbU
                                                  : 
                                                 ((0x4000U 
                                                   == 
                                                   (0xfffc000U 
                                                    & __PVT__mant_sum))
                                                   ? 0xcU
                                                   : 
                                                  ((0x2000U 
                                                    == 
                                                    (0xfffe000U 
                                                     & __PVT__mant_sum))
                                                    ? 0xdU
                                                    : 0xeU)))))))
                       : (((((((((0x800U == (0xffff800U 
                                             & __PVT__mant_sum)) 
                                 | (0x400U == (0xffffc00U 
                                               & __PVT__mant_sum))) 
                                | (0x200U == (0xffffe00U 
                                              & __PVT__mant_sum))) 
                               | (0x100U == (0xfffff00U 
                                             & __PVT__mant_sum))) 
                              | (0x80U == (0xfffff80U 
                                           & __PVT__mant_sum))) 
                             | (0x40U == (0xfffffc0U 
                                          & __PVT__mant_sum))) 
                            | (0x20U == (0xfffffe0U 
                                         & __PVT__mant_sum))) 
                           | (0x10U == (0xffffff0U 
                                        & __PVT__mant_sum)))
                           ? ((0x800U == (0xffff800U 
                                          & __PVT__mant_sum))
                               ? 0xfU : ((0x400U == 
                                          (0xffffc00U 
                                           & __PVT__mant_sum))
                                          ? 0x10U : 
                                         ((0x200U == 
                                           (0xffffe00U 
                                            & __PVT__mant_sum))
                                           ? 0x11U : 
                                          ((0x100U 
                                            == (0xfffff00U 
                                                & __PVT__mant_sum))
                                            ? 0x12U
                                            : ((0x80U 
                                                == 
                                                (0xfffff80U 
                                                 & __PVT__mant_sum))
                                                ? 0x13U
                                                : (
                                                   (0x40U 
                                                    == 
                                                    (0xfffffc0U 
                                                     & __PVT__mant_sum))
                                                    ? 0x14U
                                                    : 
                                                   ((0x20U 
                                                     == 
                                                     (0xfffffe0U 
                                                      & __PVT__mant_sum))
                                                     ? 0x15U
                                                     : 0x16U)))))))
                           : ((8U == (0xffffff8U & __PVT__mant_sum))
                               ? 0x17U : ((4U == (0xffffffcU 
                                                  & __PVT__mant_sum))
                                           ? 0x18U : 
                                          ((2U == (0xffffffeU 
                                                   & __PVT__mant_sum))
                                            ? 0x19U
                                            : ((1U 
                                                == __PVT__mant_sum)
                                                ? 0x1aU
                                                : 0x1bU)))))));
    if ((0x8000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  >> 1U));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__large_exp)));
    } else if ((0x4000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & __PVT__mant_sum);
        vlSelf->__PVT__norm_exp = (0xffU & (IData)(vlSelf->__PVT__large_exp));
    } else if (((0x1bU > (IData)(__PVT__lzc)) & ((IData)(vlSelf->__PVT__large_exp) 
                                                 > (IData)(__PVT__lzc)))) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  << (IData)(__PVT__lzc)));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                            - (IData)(__PVT__lzc)));
    } else {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & 0U);
        vlSelf->__PVT__norm_exp = (0xffU & 0U);
    }
    __PVT__mant_rounded = (0x1ffffffU & ((0xffffffU 
                                          & (vlSelf->__PVT__norm_mant 
                                             >> 3U)) 
                                         + (1U & ((vlSelf->__PVT__norm_mant 
                                                   >> 2U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0xbU 
                                                              & vlSelf->__PVT__norm_mant)))))));
    if ((0x1000000U & __PVT__mant_rounded)) {
        vlSelf->__PVT__final_exp = (0xffU & ((IData)(1U) 
                                             + (IData)(vlSelf->__PVT__norm_exp)));
        vlSelf->__PVT__rounded_mant = (0x7fffffU & 
                                       (__PVT__mant_rounded 
                                        >> 1U));
    } else {
        vlSelf->__PVT__final_exp = vlSelf->__PVT__norm_exp;
        vlSelf->__PVT__rounded_mant = (0x7fffffU & __PVT__mant_rounded);
    }
}

VL_INLINE_OPT void Vnpu_core_top_fp32_adder___nba_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_core_top_fp32_adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_core_top_fp32_adder___nba_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0\n"); );
    // Init
    IData/*23:0*/ __PVT__large_mant;
    __PVT__large_mant = 0;
    IData/*23:0*/ __PVT__small_mant;
    __PVT__small_mant = 0;
    CData/*7:0*/ __PVT__exp_diff;
    __PVT__exp_diff = 0;
    CData/*0:0*/ __PVT__a_is_larger;
    __PVT__a_is_larger = 0;
    IData/*27:0*/ __PVT__mant_sum;
    __PVT__mant_sum = 0;
    CData/*4:0*/ __PVT__lzc;
    __PVT__lzc = 0;
    IData/*24:0*/ __PVT__mant_rounded;
    __PVT__mant_rounded = 0;
    IData/*23:0*/ __VdfgExtracted_hb7d58418__0;
    __VdfgExtracted_hb7d58418__0 = 0;
    // Body
    vlSelf->__PVT__a_is_inf = ((0xffU == (0xffU & (
                                                   vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xbU]
                                                   [0xeU] 
                                                   >> 0x17U))) 
                               & (0U == (0x7fffffU 
                                         & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xbU][0xeU])));
    if ((0U == (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                         [0xbU][0xeU] >> 0x17U)))) {
        vlSelf->__PVT__a_is_zero = (0U == (0x7fffffU 
                                           & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                           [0xbU][0xeU]));
        vlSelf->__VdfgExtracted_h18a3deab__0 = (0x7fffffU 
                                                & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xbU]
                                                [0xeU]);
    } else {
        vlSelf->__PVT__a_is_zero = 0U;
        vlSelf->__VdfgExtracted_h18a3deab__0 = (0x800000U 
                                                | (0x7fffffU 
                                                   & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xbU]
                                                   [0xeU]));
    }
    vlSelf->__PVT__b_is_inf = (IData)((0x7f800000U 
                                       == (0x7fffffffU 
                                           & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    vlSelf->__PVT__b_is_zero = (IData)((0U == (0x7fffffffU 
                                               & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __VdfgExtracted_hb7d58418__0 = ((0U == (0xffU & 
                                            (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U)))
                                     ? (0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)
                                     : (0x800000U | 
                                        (0x7fffffU 
                                         & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __PVT__a_is_larger = (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [0xbU][0xeU] >> 0x17U)) 
                           > (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                       >> 0x17U))) 
                          | (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                        [0xbU][0xeU] 
                                        >> 0x17U)) 
                              == (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x17U))) 
                             & ((0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xbU][0xeU]) >= (0x7fffffU 
                                                   & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))));
    if (__PVT__a_is_larger) {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                           [0xbU][0xeU] 
                                           >> 0x1fU));
        __PVT__large_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        __PVT__small_mant = __VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xbU]
                                             [0xeU] 
                                             >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
    } else {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x1fU));
        __PVT__large_mant = __VdfgExtracted_hb7d58418__0;
        __PVT__small_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xbU]
                                             [0xeU] 
                                             >> 0x17U));
    }
    __PVT__exp_diff = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                - (IData)(vlSelf->__PVT__small_exp)));
    if ((0U == (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (__PVT__small_mant 
                                        << 3U);
        vlSelf->__PVT__sticky_bit = 0U;
    } else if ((0x1bU > (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (0x7ffffffU 
                                        & VL_SHIFTR_III(27,27,8, 
                                                        (__PVT__small_mant 
                                                         << 3U), (IData)(__PVT__exp_diff)));
        vlSelf->__PVT__sticky_bit = (0U != ((__PVT__small_mant 
                                             << 3U) 
                                            & (VL_SHIFTL_III(27,27,8, (IData)(1U), (IData)(__PVT__exp_diff)) 
                                               - (IData)(1U))));
    } else {
        vlSelf->__PVT__aligned_small = 0U;
        vlSelf->__PVT__sticky_bit = (0U != __PVT__small_mant);
    }
    vlSelf->__PVT__aligned_small = ((0x7fffffeU & vlSelf->__PVT__aligned_small) 
                                    | (1U & (vlSelf->__PVT__aligned_small 
                                             | (IData)(vlSelf->__PVT__sticky_bit))));
    __PVT__mant_sum = (0xfffffffU & ((1U & ((IData)(vlSelf->__PVT__large_sign) 
                                            ^ ((IData)(__PVT__a_is_larger)
                                                ? (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                   >> 0x1fU)
                                                : (
                                                   vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xbU]
                                                   [0xeU] 
                                                   >> 0x1fU))))
                                      ? ((__PVT__large_mant 
                                          << 3U) - vlSelf->__PVT__aligned_small)
                                      : ((__PVT__large_mant 
                                          << 3U) + vlSelf->__PVT__aligned_small)));
    __PVT__lzc = (((((((((0x8000000U == (0x8000000U 
                                         & __PVT__mant_sum)) 
                         | (0x4000000U == (0xc000000U 
                                           & __PVT__mant_sum))) 
                        | (0x2000000U == (0xe000000U 
                                          & __PVT__mant_sum))) 
                       | (0x1000000U == (0xf000000U 
                                         & __PVT__mant_sum))) 
                      | (0x800000U == (0xf800000U & __PVT__mant_sum))) 
                     | (0x400000U == (0xfc00000U & __PVT__mant_sum))) 
                    | (0x200000U == (0xfe00000U & __PVT__mant_sum))) 
                   | (0x100000U == (0xff00000U & __PVT__mant_sum)))
                   ? ((0x8000000U == (0x8000000U & __PVT__mant_sum))
                       ? 0U : ((0x4000000U == (0xc000000U 
                                               & __PVT__mant_sum))
                                ? 0U : ((0x2000000U 
                                         == (0xe000000U 
                                             & __PVT__mant_sum))
                                         ? 1U : ((0x1000000U 
                                                  == 
                                                  (0xf000000U 
                                                   & __PVT__mant_sum))
                                                  ? 2U
                                                  : 
                                                 ((0x800000U 
                                                   == 
                                                   (0xf800000U 
                                                    & __PVT__mant_sum))
                                                   ? 3U
                                                   : 
                                                  ((0x400000U 
                                                    == 
                                                    (0xfc00000U 
                                                     & __PVT__mant_sum))
                                                    ? 4U
                                                    : 
                                                   ((0x200000U 
                                                     == 
                                                     (0xfe00000U 
                                                      & __PVT__mant_sum))
                                                     ? 5U
                                                     : 6U)))))))
                   : (((((((((0x80000U == (0xff80000U 
                                           & __PVT__mant_sum)) 
                             | (0x40000U == (0xffc0000U 
                                             & __PVT__mant_sum))) 
                            | (0x20000U == (0xffe0000U 
                                            & __PVT__mant_sum))) 
                           | (0x10000U == (0xfff0000U 
                                           & __PVT__mant_sum))) 
                          | (0x8000U == (0xfff8000U 
                                         & __PVT__mant_sum))) 
                         | (0x4000U == (0xfffc000U 
                                        & __PVT__mant_sum))) 
                        | (0x2000U == (0xfffe000U & __PVT__mant_sum))) 
                       | (0x1000U == (0xffff000U & __PVT__mant_sum)))
                       ? ((0x80000U == (0xff80000U 
                                        & __PVT__mant_sum))
                           ? 7U : ((0x40000U == (0xffc0000U 
                                                 & __PVT__mant_sum))
                                    ? 8U : ((0x20000U 
                                             == (0xffe0000U 
                                                 & __PVT__mant_sum))
                                             ? 9U : 
                                            ((0x10000U 
                                              == (0xfff0000U 
                                                  & __PVT__mant_sum))
                                              ? 0xaU
                                              : ((0x8000U 
                                                  == 
                                                  (0xfff8000U 
                                                   & __PVT__mant_sum))
                                                  ? 0xbU
                                                  : 
                                                 ((0x4000U 
                                                   == 
                                                   (0xfffc000U 
                                                    & __PVT__mant_sum))
                                                   ? 0xcU
                                                   : 
                                                  ((0x2000U 
                                                    == 
                                                    (0xfffe000U 
                                                     & __PVT__mant_sum))
                                                    ? 0xdU
                                                    : 0xeU)))))))
                       : (((((((((0x800U == (0xffff800U 
                                             & __PVT__mant_sum)) 
                                 | (0x400U == (0xffffc00U 
                                               & __PVT__mant_sum))) 
                                | (0x200U == (0xffffe00U 
                                              & __PVT__mant_sum))) 
                               | (0x100U == (0xfffff00U 
                                             & __PVT__mant_sum))) 
                              | (0x80U == (0xfffff80U 
                                           & __PVT__mant_sum))) 
                             | (0x40U == (0xfffffc0U 
                                          & __PVT__mant_sum))) 
                            | (0x20U == (0xfffffe0U 
                                         & __PVT__mant_sum))) 
                           | (0x10U == (0xffffff0U 
                                        & __PVT__mant_sum)))
                           ? ((0x800U == (0xffff800U 
                                          & __PVT__mant_sum))
                               ? 0xfU : ((0x400U == 
                                          (0xffffc00U 
                                           & __PVT__mant_sum))
                                          ? 0x10U : 
                                         ((0x200U == 
                                           (0xffffe00U 
                                            & __PVT__mant_sum))
                                           ? 0x11U : 
                                          ((0x100U 
                                            == (0xfffff00U 
                                                & __PVT__mant_sum))
                                            ? 0x12U
                                            : ((0x80U 
                                                == 
                                                (0xfffff80U 
                                                 & __PVT__mant_sum))
                                                ? 0x13U
                                                : (
                                                   (0x40U 
                                                    == 
                                                    (0xfffffc0U 
                                                     & __PVT__mant_sum))
                                                    ? 0x14U
                                                    : 
                                                   ((0x20U 
                                                     == 
                                                     (0xfffffe0U 
                                                      & __PVT__mant_sum))
                                                     ? 0x15U
                                                     : 0x16U)))))))
                           : ((8U == (0xffffff8U & __PVT__mant_sum))
                               ? 0x17U : ((4U == (0xffffffcU 
                                                  & __PVT__mant_sum))
                                           ? 0x18U : 
                                          ((2U == (0xffffffeU 
                                                   & __PVT__mant_sum))
                                            ? 0x19U
                                            : ((1U 
                                                == __PVT__mant_sum)
                                                ? 0x1aU
                                                : 0x1bU)))))));
    if ((0x8000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  >> 1U));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__large_exp)));
    } else if ((0x4000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & __PVT__mant_sum);
        vlSelf->__PVT__norm_exp = (0xffU & (IData)(vlSelf->__PVT__large_exp));
    } else if (((0x1bU > (IData)(__PVT__lzc)) & ((IData)(vlSelf->__PVT__large_exp) 
                                                 > (IData)(__PVT__lzc)))) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  << (IData)(__PVT__lzc)));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                            - (IData)(__PVT__lzc)));
    } else {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & 0U);
        vlSelf->__PVT__norm_exp = (0xffU & 0U);
    }
    __PVT__mant_rounded = (0x1ffffffU & ((0xffffffU 
                                          & (vlSelf->__PVT__norm_mant 
                                             >> 3U)) 
                                         + (1U & ((vlSelf->__PVT__norm_mant 
                                                   >> 2U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0xbU 
                                                              & vlSelf->__PVT__norm_mant)))))));
    if ((0x1000000U & __PVT__mant_rounded)) {
        vlSelf->__PVT__final_exp = (0xffU & ((IData)(1U) 
                                             + (IData)(vlSelf->__PVT__norm_exp)));
        vlSelf->__PVT__rounded_mant = (0x7fffffU & 
                                       (__PVT__mant_rounded 
                                        >> 1U));
    } else {
        vlSelf->__PVT__final_exp = vlSelf->__PVT__norm_exp;
        vlSelf->__PVT__rounded_mant = (0x7fffffU & __PVT__mant_rounded);
    }
}

VL_INLINE_OPT void Vnpu_core_top_fp32_adder___ico_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_core_top_fp32_adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_core_top_fp32_adder___ico_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0\n"); );
    // Init
    IData/*23:0*/ __PVT__large_mant;
    __PVT__large_mant = 0;
    IData/*23:0*/ __PVT__small_mant;
    __PVT__small_mant = 0;
    CData/*7:0*/ __PVT__exp_diff;
    __PVT__exp_diff = 0;
    CData/*0:0*/ __PVT__a_is_larger;
    __PVT__a_is_larger = 0;
    IData/*27:0*/ __PVT__mant_sum;
    __PVT__mant_sum = 0;
    CData/*4:0*/ __PVT__lzc;
    __PVT__lzc = 0;
    IData/*24:0*/ __PVT__mant_rounded;
    __PVT__mant_rounded = 0;
    IData/*23:0*/ __VdfgExtracted_hb7d58418__0;
    __VdfgExtracted_hb7d58418__0 = 0;
    // Body
    vlSelf->__PVT__b_is_inf = (IData)((0x7f800000U 
                                       == (0x7fffffffU 
                                           & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    vlSelf->__PVT__b_is_zero = (IData)((0U == (0x7fffffffU 
                                               & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __VdfgExtracted_hb7d58418__0 = ((0U == (0xffU & 
                                            (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U)))
                                     ? (0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)
                                     : (0x800000U | 
                                        (0x7fffffU 
                                         & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __PVT__a_is_larger = (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [0xbU][0xfU] >> 0x17U)) 
                           > (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                       >> 0x17U))) 
                          | (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                        [0xbU][0xfU] 
                                        >> 0x17U)) 
                              == (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x17U))) 
                             & ((0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xbU][0xfU]) >= (0x7fffffU 
                                                   & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))));
    if (__PVT__a_is_larger) {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                           [0xbU][0xfU] 
                                           >> 0x1fU));
        __PVT__large_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        __PVT__small_mant = __VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xbU]
                                             [0xfU] 
                                             >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
    } else {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x1fU));
        __PVT__large_mant = __VdfgExtracted_hb7d58418__0;
        __PVT__small_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xbU]
                                             [0xfU] 
                                             >> 0x17U));
    }
    __PVT__exp_diff = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                - (IData)(vlSelf->__PVT__small_exp)));
    if ((0U == (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (__PVT__small_mant 
                                        << 3U);
        vlSelf->__PVT__sticky_bit = 0U;
    } else if ((0x1bU > (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (0x7ffffffU 
                                        & VL_SHIFTR_III(27,27,8, 
                                                        (__PVT__small_mant 
                                                         << 3U), (IData)(__PVT__exp_diff)));
        vlSelf->__PVT__sticky_bit = (0U != ((__PVT__small_mant 
                                             << 3U) 
                                            & (VL_SHIFTL_III(27,27,8, (IData)(1U), (IData)(__PVT__exp_diff)) 
                                               - (IData)(1U))));
    } else {
        vlSelf->__PVT__aligned_small = 0U;
        vlSelf->__PVT__sticky_bit = (0U != __PVT__small_mant);
    }
    vlSelf->__PVT__aligned_small = ((0x7fffffeU & vlSelf->__PVT__aligned_small) 
                                    | (1U & (vlSelf->__PVT__aligned_small 
                                             | (IData)(vlSelf->__PVT__sticky_bit))));
    __PVT__mant_sum = (0xfffffffU & ((1U & ((IData)(vlSelf->__PVT__large_sign) 
                                            ^ ((IData)(__PVT__a_is_larger)
                                                ? (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                   >> 0x1fU)
                                                : (
                                                   vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xbU]
                                                   [0xfU] 
                                                   >> 0x1fU))))
                                      ? ((__PVT__large_mant 
                                          << 3U) - vlSelf->__PVT__aligned_small)
                                      : ((__PVT__large_mant 
                                          << 3U) + vlSelf->__PVT__aligned_small)));
    __PVT__lzc = (((((((((0x8000000U == (0x8000000U 
                                         & __PVT__mant_sum)) 
                         | (0x4000000U == (0xc000000U 
                                           & __PVT__mant_sum))) 
                        | (0x2000000U == (0xe000000U 
                                          & __PVT__mant_sum))) 
                       | (0x1000000U == (0xf000000U 
                                         & __PVT__mant_sum))) 
                      | (0x800000U == (0xf800000U & __PVT__mant_sum))) 
                     | (0x400000U == (0xfc00000U & __PVT__mant_sum))) 
                    | (0x200000U == (0xfe00000U & __PVT__mant_sum))) 
                   | (0x100000U == (0xff00000U & __PVT__mant_sum)))
                   ? ((0x8000000U == (0x8000000U & __PVT__mant_sum))
                       ? 0U : ((0x4000000U == (0xc000000U 
                                               & __PVT__mant_sum))
                                ? 0U : ((0x2000000U 
                                         == (0xe000000U 
                                             & __PVT__mant_sum))
                                         ? 1U : ((0x1000000U 
                                                  == 
                                                  (0xf000000U 
                                                   & __PVT__mant_sum))
                                                  ? 2U
                                                  : 
                                                 ((0x800000U 
                                                   == 
                                                   (0xf800000U 
                                                    & __PVT__mant_sum))
                                                   ? 3U
                                                   : 
                                                  ((0x400000U 
                                                    == 
                                                    (0xfc00000U 
                                                     & __PVT__mant_sum))
                                                    ? 4U
                                                    : 
                                                   ((0x200000U 
                                                     == 
                                                     (0xfe00000U 
                                                      & __PVT__mant_sum))
                                                     ? 5U
                                                     : 6U)))))))
                   : (((((((((0x80000U == (0xff80000U 
                                           & __PVT__mant_sum)) 
                             | (0x40000U == (0xffc0000U 
                                             & __PVT__mant_sum))) 
                            | (0x20000U == (0xffe0000U 
                                            & __PVT__mant_sum))) 
                           | (0x10000U == (0xfff0000U 
                                           & __PVT__mant_sum))) 
                          | (0x8000U == (0xfff8000U 
                                         & __PVT__mant_sum))) 
                         | (0x4000U == (0xfffc000U 
                                        & __PVT__mant_sum))) 
                        | (0x2000U == (0xfffe000U & __PVT__mant_sum))) 
                       | (0x1000U == (0xffff000U & __PVT__mant_sum)))
                       ? ((0x80000U == (0xff80000U 
                                        & __PVT__mant_sum))
                           ? 7U : ((0x40000U == (0xffc0000U 
                                                 & __PVT__mant_sum))
                                    ? 8U : ((0x20000U 
                                             == (0xffe0000U 
                                                 & __PVT__mant_sum))
                                             ? 9U : 
                                            ((0x10000U 
                                              == (0xfff0000U 
                                                  & __PVT__mant_sum))
                                              ? 0xaU
                                              : ((0x8000U 
                                                  == 
                                                  (0xfff8000U 
                                                   & __PVT__mant_sum))
                                                  ? 0xbU
                                                  : 
                                                 ((0x4000U 
                                                   == 
                                                   (0xfffc000U 
                                                    & __PVT__mant_sum))
                                                   ? 0xcU
                                                   : 
                                                  ((0x2000U 
                                                    == 
                                                    (0xfffe000U 
                                                     & __PVT__mant_sum))
                                                    ? 0xdU
                                                    : 0xeU)))))))
                       : (((((((((0x800U == (0xffff800U 
                                             & __PVT__mant_sum)) 
                                 | (0x400U == (0xffffc00U 
                                               & __PVT__mant_sum))) 
                                | (0x200U == (0xffffe00U 
                                              & __PVT__mant_sum))) 
                               | (0x100U == (0xfffff00U 
                                             & __PVT__mant_sum))) 
                              | (0x80U == (0xfffff80U 
                                           & __PVT__mant_sum))) 
                             | (0x40U == (0xfffffc0U 
                                          & __PVT__mant_sum))) 
                            | (0x20U == (0xfffffe0U 
                                         & __PVT__mant_sum))) 
                           | (0x10U == (0xffffff0U 
                                        & __PVT__mant_sum)))
                           ? ((0x800U == (0xffff800U 
                                          & __PVT__mant_sum))
                               ? 0xfU : ((0x400U == 
                                          (0xffffc00U 
                                           & __PVT__mant_sum))
                                          ? 0x10U : 
                                         ((0x200U == 
                                           (0xffffe00U 
                                            & __PVT__mant_sum))
                                           ? 0x11U : 
                                          ((0x100U 
                                            == (0xfffff00U 
                                                & __PVT__mant_sum))
                                            ? 0x12U
                                            : ((0x80U 
                                                == 
                                                (0xfffff80U 
                                                 & __PVT__mant_sum))
                                                ? 0x13U
                                                : (
                                                   (0x40U 
                                                    == 
                                                    (0xfffffc0U 
                                                     & __PVT__mant_sum))
                                                    ? 0x14U
                                                    : 
                                                   ((0x20U 
                                                     == 
                                                     (0xfffffe0U 
                                                      & __PVT__mant_sum))
                                                     ? 0x15U
                                                     : 0x16U)))))))
                           : ((8U == (0xffffff8U & __PVT__mant_sum))
                               ? 0x17U : ((4U == (0xffffffcU 
                                                  & __PVT__mant_sum))
                                           ? 0x18U : 
                                          ((2U == (0xffffffeU 
                                                   & __PVT__mant_sum))
                                            ? 0x19U
                                            : ((1U 
                                                == __PVT__mant_sum)
                                                ? 0x1aU
                                                : 0x1bU)))))));
    if ((0x8000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  >> 1U));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__large_exp)));
    } else if ((0x4000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & __PVT__mant_sum);
        vlSelf->__PVT__norm_exp = (0xffU & (IData)(vlSelf->__PVT__large_exp));
    } else if (((0x1bU > (IData)(__PVT__lzc)) & ((IData)(vlSelf->__PVT__large_exp) 
                                                 > (IData)(__PVT__lzc)))) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  << (IData)(__PVT__lzc)));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                            - (IData)(__PVT__lzc)));
    } else {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & 0U);
        vlSelf->__PVT__norm_exp = (0xffU & 0U);
    }
    __PVT__mant_rounded = (0x1ffffffU & ((0xffffffU 
                                          & (vlSelf->__PVT__norm_mant 
                                             >> 3U)) 
                                         + (1U & ((vlSelf->__PVT__norm_mant 
                                                   >> 2U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0xbU 
                                                              & vlSelf->__PVT__norm_mant)))))));
    if ((0x1000000U & __PVT__mant_rounded)) {
        vlSelf->__PVT__final_exp = (0xffU & ((IData)(1U) 
                                             + (IData)(vlSelf->__PVT__norm_exp)));
        vlSelf->__PVT__rounded_mant = (0x7fffffU & 
                                       (__PVT__mant_rounded 
                                        >> 1U));
    } else {
        vlSelf->__PVT__final_exp = vlSelf->__PVT__norm_exp;
        vlSelf->__PVT__rounded_mant = (0x7fffffU & __PVT__mant_rounded);
    }
}

VL_INLINE_OPT void Vnpu_core_top_fp32_adder___nba_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_core_top_fp32_adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_core_top_fp32_adder___nba_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0\n"); );
    // Init
    IData/*23:0*/ __PVT__large_mant;
    __PVT__large_mant = 0;
    IData/*23:0*/ __PVT__small_mant;
    __PVT__small_mant = 0;
    CData/*7:0*/ __PVT__exp_diff;
    __PVT__exp_diff = 0;
    CData/*0:0*/ __PVT__a_is_larger;
    __PVT__a_is_larger = 0;
    IData/*27:0*/ __PVT__mant_sum;
    __PVT__mant_sum = 0;
    CData/*4:0*/ __PVT__lzc;
    __PVT__lzc = 0;
    IData/*24:0*/ __PVT__mant_rounded;
    __PVT__mant_rounded = 0;
    IData/*23:0*/ __VdfgExtracted_hb7d58418__0;
    __VdfgExtracted_hb7d58418__0 = 0;
    // Body
    vlSelf->__PVT__a_is_inf = ((0xffU == (0xffU & (
                                                   vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xbU]
                                                   [0xfU] 
                                                   >> 0x17U))) 
                               & (0U == (0x7fffffU 
                                         & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xbU][0xfU])));
    if ((0U == (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                         [0xbU][0xfU] >> 0x17U)))) {
        vlSelf->__PVT__a_is_zero = (0U == (0x7fffffU 
                                           & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                           [0xbU][0xfU]));
        vlSelf->__VdfgExtracted_h18a3deab__0 = (0x7fffffU 
                                                & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xbU]
                                                [0xfU]);
    } else {
        vlSelf->__PVT__a_is_zero = 0U;
        vlSelf->__VdfgExtracted_h18a3deab__0 = (0x800000U 
                                                | (0x7fffffU 
                                                   & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xbU]
                                                   [0xfU]));
    }
    vlSelf->__PVT__b_is_inf = (IData)((0x7f800000U 
                                       == (0x7fffffffU 
                                           & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    vlSelf->__PVT__b_is_zero = (IData)((0U == (0x7fffffffU 
                                               & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __VdfgExtracted_hb7d58418__0 = ((0U == (0xffU & 
                                            (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U)))
                                     ? (0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)
                                     : (0x800000U | 
                                        (0x7fffffU 
                                         & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __PVT__a_is_larger = (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [0xbU][0xfU] >> 0x17U)) 
                           > (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                       >> 0x17U))) 
                          | (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                        [0xbU][0xfU] 
                                        >> 0x17U)) 
                              == (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x17U))) 
                             & ((0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xbU][0xfU]) >= (0x7fffffU 
                                                   & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))));
    if (__PVT__a_is_larger) {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                           [0xbU][0xfU] 
                                           >> 0x1fU));
        __PVT__large_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        __PVT__small_mant = __VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xbU]
                                             [0xfU] 
                                             >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
    } else {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x1fU));
        __PVT__large_mant = __VdfgExtracted_hb7d58418__0;
        __PVT__small_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xbU]
                                             [0xfU] 
                                             >> 0x17U));
    }
    __PVT__exp_diff = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                - (IData)(vlSelf->__PVT__small_exp)));
    if ((0U == (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (__PVT__small_mant 
                                        << 3U);
        vlSelf->__PVT__sticky_bit = 0U;
    } else if ((0x1bU > (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (0x7ffffffU 
                                        & VL_SHIFTR_III(27,27,8, 
                                                        (__PVT__small_mant 
                                                         << 3U), (IData)(__PVT__exp_diff)));
        vlSelf->__PVT__sticky_bit = (0U != ((__PVT__small_mant 
                                             << 3U) 
                                            & (VL_SHIFTL_III(27,27,8, (IData)(1U), (IData)(__PVT__exp_diff)) 
                                               - (IData)(1U))));
    } else {
        vlSelf->__PVT__aligned_small = 0U;
        vlSelf->__PVT__sticky_bit = (0U != __PVT__small_mant);
    }
    vlSelf->__PVT__aligned_small = ((0x7fffffeU & vlSelf->__PVT__aligned_small) 
                                    | (1U & (vlSelf->__PVT__aligned_small 
                                             | (IData)(vlSelf->__PVT__sticky_bit))));
    __PVT__mant_sum = (0xfffffffU & ((1U & ((IData)(vlSelf->__PVT__large_sign) 
                                            ^ ((IData)(__PVT__a_is_larger)
                                                ? (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                   >> 0x1fU)
                                                : (
                                                   vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xbU]
                                                   [0xfU] 
                                                   >> 0x1fU))))
                                      ? ((__PVT__large_mant 
                                          << 3U) - vlSelf->__PVT__aligned_small)
                                      : ((__PVT__large_mant 
                                          << 3U) + vlSelf->__PVT__aligned_small)));
    __PVT__lzc = (((((((((0x8000000U == (0x8000000U 
                                         & __PVT__mant_sum)) 
                         | (0x4000000U == (0xc000000U 
                                           & __PVT__mant_sum))) 
                        | (0x2000000U == (0xe000000U 
                                          & __PVT__mant_sum))) 
                       | (0x1000000U == (0xf000000U 
                                         & __PVT__mant_sum))) 
                      | (0x800000U == (0xf800000U & __PVT__mant_sum))) 
                     | (0x400000U == (0xfc00000U & __PVT__mant_sum))) 
                    | (0x200000U == (0xfe00000U & __PVT__mant_sum))) 
                   | (0x100000U == (0xff00000U & __PVT__mant_sum)))
                   ? ((0x8000000U == (0x8000000U & __PVT__mant_sum))
                       ? 0U : ((0x4000000U == (0xc000000U 
                                               & __PVT__mant_sum))
                                ? 0U : ((0x2000000U 
                                         == (0xe000000U 
                                             & __PVT__mant_sum))
                                         ? 1U : ((0x1000000U 
                                                  == 
                                                  (0xf000000U 
                                                   & __PVT__mant_sum))
                                                  ? 2U
                                                  : 
                                                 ((0x800000U 
                                                   == 
                                                   (0xf800000U 
                                                    & __PVT__mant_sum))
                                                   ? 3U
                                                   : 
                                                  ((0x400000U 
                                                    == 
                                                    (0xfc00000U 
                                                     & __PVT__mant_sum))
                                                    ? 4U
                                                    : 
                                                   ((0x200000U 
                                                     == 
                                                     (0xfe00000U 
                                                      & __PVT__mant_sum))
                                                     ? 5U
                                                     : 6U)))))))
                   : (((((((((0x80000U == (0xff80000U 
                                           & __PVT__mant_sum)) 
                             | (0x40000U == (0xffc0000U 
                                             & __PVT__mant_sum))) 
                            | (0x20000U == (0xffe0000U 
                                            & __PVT__mant_sum))) 
                           | (0x10000U == (0xfff0000U 
                                           & __PVT__mant_sum))) 
                          | (0x8000U == (0xfff8000U 
                                         & __PVT__mant_sum))) 
                         | (0x4000U == (0xfffc000U 
                                        & __PVT__mant_sum))) 
                        | (0x2000U == (0xfffe000U & __PVT__mant_sum))) 
                       | (0x1000U == (0xffff000U & __PVT__mant_sum)))
                       ? ((0x80000U == (0xff80000U 
                                        & __PVT__mant_sum))
                           ? 7U : ((0x40000U == (0xffc0000U 
                                                 & __PVT__mant_sum))
                                    ? 8U : ((0x20000U 
                                             == (0xffe0000U 
                                                 & __PVT__mant_sum))
                                             ? 9U : 
                                            ((0x10000U 
                                              == (0xfff0000U 
                                                  & __PVT__mant_sum))
                                              ? 0xaU
                                              : ((0x8000U 
                                                  == 
                                                  (0xfff8000U 
                                                   & __PVT__mant_sum))
                                                  ? 0xbU
                                                  : 
                                                 ((0x4000U 
                                                   == 
                                                   (0xfffc000U 
                                                    & __PVT__mant_sum))
                                                   ? 0xcU
                                                   : 
                                                  ((0x2000U 
                                                    == 
                                                    (0xfffe000U 
                                                     & __PVT__mant_sum))
                                                    ? 0xdU
                                                    : 0xeU)))))))
                       : (((((((((0x800U == (0xffff800U 
                                             & __PVT__mant_sum)) 
                                 | (0x400U == (0xffffc00U 
                                               & __PVT__mant_sum))) 
                                | (0x200U == (0xffffe00U 
                                              & __PVT__mant_sum))) 
                               | (0x100U == (0xfffff00U 
                                             & __PVT__mant_sum))) 
                              | (0x80U == (0xfffff80U 
                                           & __PVT__mant_sum))) 
                             | (0x40U == (0xfffffc0U 
                                          & __PVT__mant_sum))) 
                            | (0x20U == (0xfffffe0U 
                                         & __PVT__mant_sum))) 
                           | (0x10U == (0xffffff0U 
                                        & __PVT__mant_sum)))
                           ? ((0x800U == (0xffff800U 
                                          & __PVT__mant_sum))
                               ? 0xfU : ((0x400U == 
                                          (0xffffc00U 
                                           & __PVT__mant_sum))
                                          ? 0x10U : 
                                         ((0x200U == 
                                           (0xffffe00U 
                                            & __PVT__mant_sum))
                                           ? 0x11U : 
                                          ((0x100U 
                                            == (0xfffff00U 
                                                & __PVT__mant_sum))
                                            ? 0x12U
                                            : ((0x80U 
                                                == 
                                                (0xfffff80U 
                                                 & __PVT__mant_sum))
                                                ? 0x13U
                                                : (
                                                   (0x40U 
                                                    == 
                                                    (0xfffffc0U 
                                                     & __PVT__mant_sum))
                                                    ? 0x14U
                                                    : 
                                                   ((0x20U 
                                                     == 
                                                     (0xfffffe0U 
                                                      & __PVT__mant_sum))
                                                     ? 0x15U
                                                     : 0x16U)))))))
                           : ((8U == (0xffffff8U & __PVT__mant_sum))
                               ? 0x17U : ((4U == (0xffffffcU 
                                                  & __PVT__mant_sum))
                                           ? 0x18U : 
                                          ((2U == (0xffffffeU 
                                                   & __PVT__mant_sum))
                                            ? 0x19U
                                            : ((1U 
                                                == __PVT__mant_sum)
                                                ? 0x1aU
                                                : 0x1bU)))))));
    if ((0x8000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  >> 1U));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__large_exp)));
    } else if ((0x4000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & __PVT__mant_sum);
        vlSelf->__PVT__norm_exp = (0xffU & (IData)(vlSelf->__PVT__large_exp));
    } else if (((0x1bU > (IData)(__PVT__lzc)) & ((IData)(vlSelf->__PVT__large_exp) 
                                                 > (IData)(__PVT__lzc)))) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  << (IData)(__PVT__lzc)));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                            - (IData)(__PVT__lzc)));
    } else {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & 0U);
        vlSelf->__PVT__norm_exp = (0xffU & 0U);
    }
    __PVT__mant_rounded = (0x1ffffffU & ((0xffffffU 
                                          & (vlSelf->__PVT__norm_mant 
                                             >> 3U)) 
                                         + (1U & ((vlSelf->__PVT__norm_mant 
                                                   >> 2U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0xbU 
                                                              & vlSelf->__PVT__norm_mant)))))));
    if ((0x1000000U & __PVT__mant_rounded)) {
        vlSelf->__PVT__final_exp = (0xffU & ((IData)(1U) 
                                             + (IData)(vlSelf->__PVT__norm_exp)));
        vlSelf->__PVT__rounded_mant = (0x7fffffU & 
                                       (__PVT__mant_rounded 
                                        >> 1U));
    } else {
        vlSelf->__PVT__final_exp = vlSelf->__PVT__norm_exp;
        vlSelf->__PVT__rounded_mant = (0x7fffffU & __PVT__mant_rounded);
    }
}

VL_INLINE_OPT void Vnpu_core_top_fp32_adder___ico_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_core_top_fp32_adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_core_top_fp32_adder___ico_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0\n"); );
    // Init
    IData/*23:0*/ __PVT__large_mant;
    __PVT__large_mant = 0;
    IData/*23:0*/ __PVT__small_mant;
    __PVT__small_mant = 0;
    CData/*7:0*/ __PVT__exp_diff;
    __PVT__exp_diff = 0;
    CData/*0:0*/ __PVT__a_is_larger;
    __PVT__a_is_larger = 0;
    IData/*27:0*/ __PVT__mant_sum;
    __PVT__mant_sum = 0;
    CData/*4:0*/ __PVT__lzc;
    __PVT__lzc = 0;
    IData/*24:0*/ __PVT__mant_rounded;
    __PVT__mant_rounded = 0;
    IData/*23:0*/ __VdfgExtracted_hb7d58418__0;
    __VdfgExtracted_hb7d58418__0 = 0;
    // Body
    vlSelf->__PVT__b_is_inf = (IData)((0x7f800000U 
                                       == (0x7fffffffU 
                                           & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    vlSelf->__PVT__b_is_zero = (IData)((0U == (0x7fffffffU 
                                               & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __VdfgExtracted_hb7d58418__0 = ((0U == (0xffU & 
                                            (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U)))
                                     ? (0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)
                                     : (0x800000U | 
                                        (0x7fffffU 
                                         & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __PVT__a_is_larger = (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [0xcU][0U] >> 0x17U)) 
                           > (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                       >> 0x17U))) 
                          | (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                        [0xcU][0U] 
                                        >> 0x17U)) 
                              == (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x17U))) 
                             & ((0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xcU][0U]) >= (0x7fffffU 
                                                 & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))));
    if (__PVT__a_is_larger) {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                           [0xcU][0U] 
                                           >> 0x1fU));
        __PVT__large_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        __PVT__small_mant = __VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xcU]
                                             [0U] >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
    } else {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x1fU));
        __PVT__large_mant = __VdfgExtracted_hb7d58418__0;
        __PVT__small_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xcU]
                                             [0U] >> 0x17U));
    }
    __PVT__exp_diff = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                - (IData)(vlSelf->__PVT__small_exp)));
    if ((0U == (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (__PVT__small_mant 
                                        << 3U);
        vlSelf->__PVT__sticky_bit = 0U;
    } else if ((0x1bU > (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (0x7ffffffU 
                                        & VL_SHIFTR_III(27,27,8, 
                                                        (__PVT__small_mant 
                                                         << 3U), (IData)(__PVT__exp_diff)));
        vlSelf->__PVT__sticky_bit = (0U != ((__PVT__small_mant 
                                             << 3U) 
                                            & (VL_SHIFTL_III(27,27,8, (IData)(1U), (IData)(__PVT__exp_diff)) 
                                               - (IData)(1U))));
    } else {
        vlSelf->__PVT__aligned_small = 0U;
        vlSelf->__PVT__sticky_bit = (0U != __PVT__small_mant);
    }
    vlSelf->__PVT__aligned_small = ((0x7fffffeU & vlSelf->__PVT__aligned_small) 
                                    | (1U & (vlSelf->__PVT__aligned_small 
                                             | (IData)(vlSelf->__PVT__sticky_bit))));
    __PVT__mant_sum = (0xfffffffU & ((1U & ((IData)(vlSelf->__PVT__large_sign) 
                                            ^ ((IData)(__PVT__a_is_larger)
                                                ? (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                   >> 0x1fU)
                                                : (
                                                   vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [0U] 
                                                   >> 0x1fU))))
                                      ? ((__PVT__large_mant 
                                          << 3U) - vlSelf->__PVT__aligned_small)
                                      : ((__PVT__large_mant 
                                          << 3U) + vlSelf->__PVT__aligned_small)));
    __PVT__lzc = (((((((((0x8000000U == (0x8000000U 
                                         & __PVT__mant_sum)) 
                         | (0x4000000U == (0xc000000U 
                                           & __PVT__mant_sum))) 
                        | (0x2000000U == (0xe000000U 
                                          & __PVT__mant_sum))) 
                       | (0x1000000U == (0xf000000U 
                                         & __PVT__mant_sum))) 
                      | (0x800000U == (0xf800000U & __PVT__mant_sum))) 
                     | (0x400000U == (0xfc00000U & __PVT__mant_sum))) 
                    | (0x200000U == (0xfe00000U & __PVT__mant_sum))) 
                   | (0x100000U == (0xff00000U & __PVT__mant_sum)))
                   ? ((0x8000000U == (0x8000000U & __PVT__mant_sum))
                       ? 0U : ((0x4000000U == (0xc000000U 
                                               & __PVT__mant_sum))
                                ? 0U : ((0x2000000U 
                                         == (0xe000000U 
                                             & __PVT__mant_sum))
                                         ? 1U : ((0x1000000U 
                                                  == 
                                                  (0xf000000U 
                                                   & __PVT__mant_sum))
                                                  ? 2U
                                                  : 
                                                 ((0x800000U 
                                                   == 
                                                   (0xf800000U 
                                                    & __PVT__mant_sum))
                                                   ? 3U
                                                   : 
                                                  ((0x400000U 
                                                    == 
                                                    (0xfc00000U 
                                                     & __PVT__mant_sum))
                                                    ? 4U
                                                    : 
                                                   ((0x200000U 
                                                     == 
                                                     (0xfe00000U 
                                                      & __PVT__mant_sum))
                                                     ? 5U
                                                     : 6U)))))))
                   : (((((((((0x80000U == (0xff80000U 
                                           & __PVT__mant_sum)) 
                             | (0x40000U == (0xffc0000U 
                                             & __PVT__mant_sum))) 
                            | (0x20000U == (0xffe0000U 
                                            & __PVT__mant_sum))) 
                           | (0x10000U == (0xfff0000U 
                                           & __PVT__mant_sum))) 
                          | (0x8000U == (0xfff8000U 
                                         & __PVT__mant_sum))) 
                         | (0x4000U == (0xfffc000U 
                                        & __PVT__mant_sum))) 
                        | (0x2000U == (0xfffe000U & __PVT__mant_sum))) 
                       | (0x1000U == (0xffff000U & __PVT__mant_sum)))
                       ? ((0x80000U == (0xff80000U 
                                        & __PVT__mant_sum))
                           ? 7U : ((0x40000U == (0xffc0000U 
                                                 & __PVT__mant_sum))
                                    ? 8U : ((0x20000U 
                                             == (0xffe0000U 
                                                 & __PVT__mant_sum))
                                             ? 9U : 
                                            ((0x10000U 
                                              == (0xfff0000U 
                                                  & __PVT__mant_sum))
                                              ? 0xaU
                                              : ((0x8000U 
                                                  == 
                                                  (0xfff8000U 
                                                   & __PVT__mant_sum))
                                                  ? 0xbU
                                                  : 
                                                 ((0x4000U 
                                                   == 
                                                   (0xfffc000U 
                                                    & __PVT__mant_sum))
                                                   ? 0xcU
                                                   : 
                                                  ((0x2000U 
                                                    == 
                                                    (0xfffe000U 
                                                     & __PVT__mant_sum))
                                                    ? 0xdU
                                                    : 0xeU)))))))
                       : (((((((((0x800U == (0xffff800U 
                                             & __PVT__mant_sum)) 
                                 | (0x400U == (0xffffc00U 
                                               & __PVT__mant_sum))) 
                                | (0x200U == (0xffffe00U 
                                              & __PVT__mant_sum))) 
                               | (0x100U == (0xfffff00U 
                                             & __PVT__mant_sum))) 
                              | (0x80U == (0xfffff80U 
                                           & __PVT__mant_sum))) 
                             | (0x40U == (0xfffffc0U 
                                          & __PVT__mant_sum))) 
                            | (0x20U == (0xfffffe0U 
                                         & __PVT__mant_sum))) 
                           | (0x10U == (0xffffff0U 
                                        & __PVT__mant_sum)))
                           ? ((0x800U == (0xffff800U 
                                          & __PVT__mant_sum))
                               ? 0xfU : ((0x400U == 
                                          (0xffffc00U 
                                           & __PVT__mant_sum))
                                          ? 0x10U : 
                                         ((0x200U == 
                                           (0xffffe00U 
                                            & __PVT__mant_sum))
                                           ? 0x11U : 
                                          ((0x100U 
                                            == (0xfffff00U 
                                                & __PVT__mant_sum))
                                            ? 0x12U
                                            : ((0x80U 
                                                == 
                                                (0xfffff80U 
                                                 & __PVT__mant_sum))
                                                ? 0x13U
                                                : (
                                                   (0x40U 
                                                    == 
                                                    (0xfffffc0U 
                                                     & __PVT__mant_sum))
                                                    ? 0x14U
                                                    : 
                                                   ((0x20U 
                                                     == 
                                                     (0xfffffe0U 
                                                      & __PVT__mant_sum))
                                                     ? 0x15U
                                                     : 0x16U)))))))
                           : ((8U == (0xffffff8U & __PVT__mant_sum))
                               ? 0x17U : ((4U == (0xffffffcU 
                                                  & __PVT__mant_sum))
                                           ? 0x18U : 
                                          ((2U == (0xffffffeU 
                                                   & __PVT__mant_sum))
                                            ? 0x19U
                                            : ((1U 
                                                == __PVT__mant_sum)
                                                ? 0x1aU
                                                : 0x1bU)))))));
    if ((0x8000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  >> 1U));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__large_exp)));
    } else if ((0x4000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & __PVT__mant_sum);
        vlSelf->__PVT__norm_exp = (0xffU & (IData)(vlSelf->__PVT__large_exp));
    } else if (((0x1bU > (IData)(__PVT__lzc)) & ((IData)(vlSelf->__PVT__large_exp) 
                                                 > (IData)(__PVT__lzc)))) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  << (IData)(__PVT__lzc)));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                            - (IData)(__PVT__lzc)));
    } else {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & 0U);
        vlSelf->__PVT__norm_exp = (0xffU & 0U);
    }
    __PVT__mant_rounded = (0x1ffffffU & ((0xffffffU 
                                          & (vlSelf->__PVT__norm_mant 
                                             >> 3U)) 
                                         + (1U & ((vlSelf->__PVT__norm_mant 
                                                   >> 2U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0xbU 
                                                              & vlSelf->__PVT__norm_mant)))))));
    if ((0x1000000U & __PVT__mant_rounded)) {
        vlSelf->__PVT__final_exp = (0xffU & ((IData)(1U) 
                                             + (IData)(vlSelf->__PVT__norm_exp)));
        vlSelf->__PVT__rounded_mant = (0x7fffffU & 
                                       (__PVT__mant_rounded 
                                        >> 1U));
    } else {
        vlSelf->__PVT__final_exp = vlSelf->__PVT__norm_exp;
        vlSelf->__PVT__rounded_mant = (0x7fffffU & __PVT__mant_rounded);
    }
}

VL_INLINE_OPT void Vnpu_core_top_fp32_adder___nba_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_core_top_fp32_adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_core_top_fp32_adder___nba_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0\n"); );
    // Init
    IData/*23:0*/ __PVT__large_mant;
    __PVT__large_mant = 0;
    IData/*23:0*/ __PVT__small_mant;
    __PVT__small_mant = 0;
    CData/*7:0*/ __PVT__exp_diff;
    __PVT__exp_diff = 0;
    CData/*0:0*/ __PVT__a_is_larger;
    __PVT__a_is_larger = 0;
    IData/*27:0*/ __PVT__mant_sum;
    __PVT__mant_sum = 0;
    CData/*4:0*/ __PVT__lzc;
    __PVT__lzc = 0;
    IData/*24:0*/ __PVT__mant_rounded;
    __PVT__mant_rounded = 0;
    IData/*23:0*/ __VdfgExtracted_hb7d58418__0;
    __VdfgExtracted_hb7d58418__0 = 0;
    // Body
    vlSelf->__PVT__a_is_inf = ((0xffU == (0xffU & (
                                                   vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [0U] 
                                                   >> 0x17U))) 
                               & (0U == (0x7fffffU 
                                         & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xcU][0U])));
    if ((0U == (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                         [0xcU][0U] >> 0x17U)))) {
        vlSelf->__PVT__a_is_zero = (0U == (0x7fffffU 
                                           & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                           [0xcU][0U]));
        vlSelf->__VdfgExtracted_h18a3deab__0 = (0x7fffffU 
                                                & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xcU]
                                                [0U]);
    } else {
        vlSelf->__PVT__a_is_zero = 0U;
        vlSelf->__VdfgExtracted_h18a3deab__0 = (0x800000U 
                                                | (0x7fffffU 
                                                   & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [0U]));
    }
    vlSelf->__PVT__b_is_inf = (IData)((0x7f800000U 
                                       == (0x7fffffffU 
                                           & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    vlSelf->__PVT__b_is_zero = (IData)((0U == (0x7fffffffU 
                                               & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __VdfgExtracted_hb7d58418__0 = ((0U == (0xffU & 
                                            (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U)))
                                     ? (0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)
                                     : (0x800000U | 
                                        (0x7fffffU 
                                         & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __PVT__a_is_larger = (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [0xcU][0U] >> 0x17U)) 
                           > (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                       >> 0x17U))) 
                          | (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                        [0xcU][0U] 
                                        >> 0x17U)) 
                              == (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x17U))) 
                             & ((0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xcU][0U]) >= (0x7fffffU 
                                                 & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))));
    if (__PVT__a_is_larger) {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                           [0xcU][0U] 
                                           >> 0x1fU));
        __PVT__large_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        __PVT__small_mant = __VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xcU]
                                             [0U] >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
    } else {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x1fU));
        __PVT__large_mant = __VdfgExtracted_hb7d58418__0;
        __PVT__small_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xcU]
                                             [0U] >> 0x17U));
    }
    __PVT__exp_diff = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                - (IData)(vlSelf->__PVT__small_exp)));
    if ((0U == (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (__PVT__small_mant 
                                        << 3U);
        vlSelf->__PVT__sticky_bit = 0U;
    } else if ((0x1bU > (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (0x7ffffffU 
                                        & VL_SHIFTR_III(27,27,8, 
                                                        (__PVT__small_mant 
                                                         << 3U), (IData)(__PVT__exp_diff)));
        vlSelf->__PVT__sticky_bit = (0U != ((__PVT__small_mant 
                                             << 3U) 
                                            & (VL_SHIFTL_III(27,27,8, (IData)(1U), (IData)(__PVT__exp_diff)) 
                                               - (IData)(1U))));
    } else {
        vlSelf->__PVT__aligned_small = 0U;
        vlSelf->__PVT__sticky_bit = (0U != __PVT__small_mant);
    }
    vlSelf->__PVT__aligned_small = ((0x7fffffeU & vlSelf->__PVT__aligned_small) 
                                    | (1U & (vlSelf->__PVT__aligned_small 
                                             | (IData)(vlSelf->__PVT__sticky_bit))));
    __PVT__mant_sum = (0xfffffffU & ((1U & ((IData)(vlSelf->__PVT__large_sign) 
                                            ^ ((IData)(__PVT__a_is_larger)
                                                ? (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                   >> 0x1fU)
                                                : (
                                                   vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [0U] 
                                                   >> 0x1fU))))
                                      ? ((__PVT__large_mant 
                                          << 3U) - vlSelf->__PVT__aligned_small)
                                      : ((__PVT__large_mant 
                                          << 3U) + vlSelf->__PVT__aligned_small)));
    __PVT__lzc = (((((((((0x8000000U == (0x8000000U 
                                         & __PVT__mant_sum)) 
                         | (0x4000000U == (0xc000000U 
                                           & __PVT__mant_sum))) 
                        | (0x2000000U == (0xe000000U 
                                          & __PVT__mant_sum))) 
                       | (0x1000000U == (0xf000000U 
                                         & __PVT__mant_sum))) 
                      | (0x800000U == (0xf800000U & __PVT__mant_sum))) 
                     | (0x400000U == (0xfc00000U & __PVT__mant_sum))) 
                    | (0x200000U == (0xfe00000U & __PVT__mant_sum))) 
                   | (0x100000U == (0xff00000U & __PVT__mant_sum)))
                   ? ((0x8000000U == (0x8000000U & __PVT__mant_sum))
                       ? 0U : ((0x4000000U == (0xc000000U 
                                               & __PVT__mant_sum))
                                ? 0U : ((0x2000000U 
                                         == (0xe000000U 
                                             & __PVT__mant_sum))
                                         ? 1U : ((0x1000000U 
                                                  == 
                                                  (0xf000000U 
                                                   & __PVT__mant_sum))
                                                  ? 2U
                                                  : 
                                                 ((0x800000U 
                                                   == 
                                                   (0xf800000U 
                                                    & __PVT__mant_sum))
                                                   ? 3U
                                                   : 
                                                  ((0x400000U 
                                                    == 
                                                    (0xfc00000U 
                                                     & __PVT__mant_sum))
                                                    ? 4U
                                                    : 
                                                   ((0x200000U 
                                                     == 
                                                     (0xfe00000U 
                                                      & __PVT__mant_sum))
                                                     ? 5U
                                                     : 6U)))))))
                   : (((((((((0x80000U == (0xff80000U 
                                           & __PVT__mant_sum)) 
                             | (0x40000U == (0xffc0000U 
                                             & __PVT__mant_sum))) 
                            | (0x20000U == (0xffe0000U 
                                            & __PVT__mant_sum))) 
                           | (0x10000U == (0xfff0000U 
                                           & __PVT__mant_sum))) 
                          | (0x8000U == (0xfff8000U 
                                         & __PVT__mant_sum))) 
                         | (0x4000U == (0xfffc000U 
                                        & __PVT__mant_sum))) 
                        | (0x2000U == (0xfffe000U & __PVT__mant_sum))) 
                       | (0x1000U == (0xffff000U & __PVT__mant_sum)))
                       ? ((0x80000U == (0xff80000U 
                                        & __PVT__mant_sum))
                           ? 7U : ((0x40000U == (0xffc0000U 
                                                 & __PVT__mant_sum))
                                    ? 8U : ((0x20000U 
                                             == (0xffe0000U 
                                                 & __PVT__mant_sum))
                                             ? 9U : 
                                            ((0x10000U 
                                              == (0xfff0000U 
                                                  & __PVT__mant_sum))
                                              ? 0xaU
                                              : ((0x8000U 
                                                  == 
                                                  (0xfff8000U 
                                                   & __PVT__mant_sum))
                                                  ? 0xbU
                                                  : 
                                                 ((0x4000U 
                                                   == 
                                                   (0xfffc000U 
                                                    & __PVT__mant_sum))
                                                   ? 0xcU
                                                   : 
                                                  ((0x2000U 
                                                    == 
                                                    (0xfffe000U 
                                                     & __PVT__mant_sum))
                                                    ? 0xdU
                                                    : 0xeU)))))))
                       : (((((((((0x800U == (0xffff800U 
                                             & __PVT__mant_sum)) 
                                 | (0x400U == (0xffffc00U 
                                               & __PVT__mant_sum))) 
                                | (0x200U == (0xffffe00U 
                                              & __PVT__mant_sum))) 
                               | (0x100U == (0xfffff00U 
                                             & __PVT__mant_sum))) 
                              | (0x80U == (0xfffff80U 
                                           & __PVT__mant_sum))) 
                             | (0x40U == (0xfffffc0U 
                                          & __PVT__mant_sum))) 
                            | (0x20U == (0xfffffe0U 
                                         & __PVT__mant_sum))) 
                           | (0x10U == (0xffffff0U 
                                        & __PVT__mant_sum)))
                           ? ((0x800U == (0xffff800U 
                                          & __PVT__mant_sum))
                               ? 0xfU : ((0x400U == 
                                          (0xffffc00U 
                                           & __PVT__mant_sum))
                                          ? 0x10U : 
                                         ((0x200U == 
                                           (0xffffe00U 
                                            & __PVT__mant_sum))
                                           ? 0x11U : 
                                          ((0x100U 
                                            == (0xfffff00U 
                                                & __PVT__mant_sum))
                                            ? 0x12U
                                            : ((0x80U 
                                                == 
                                                (0xfffff80U 
                                                 & __PVT__mant_sum))
                                                ? 0x13U
                                                : (
                                                   (0x40U 
                                                    == 
                                                    (0xfffffc0U 
                                                     & __PVT__mant_sum))
                                                    ? 0x14U
                                                    : 
                                                   ((0x20U 
                                                     == 
                                                     (0xfffffe0U 
                                                      & __PVT__mant_sum))
                                                     ? 0x15U
                                                     : 0x16U)))))))
                           : ((8U == (0xffffff8U & __PVT__mant_sum))
                               ? 0x17U : ((4U == (0xffffffcU 
                                                  & __PVT__mant_sum))
                                           ? 0x18U : 
                                          ((2U == (0xffffffeU 
                                                   & __PVT__mant_sum))
                                            ? 0x19U
                                            : ((1U 
                                                == __PVT__mant_sum)
                                                ? 0x1aU
                                                : 0x1bU)))))));
    if ((0x8000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  >> 1U));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__large_exp)));
    } else if ((0x4000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & __PVT__mant_sum);
        vlSelf->__PVT__norm_exp = (0xffU & (IData)(vlSelf->__PVT__large_exp));
    } else if (((0x1bU > (IData)(__PVT__lzc)) & ((IData)(vlSelf->__PVT__large_exp) 
                                                 > (IData)(__PVT__lzc)))) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  << (IData)(__PVT__lzc)));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                            - (IData)(__PVT__lzc)));
    } else {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & 0U);
        vlSelf->__PVT__norm_exp = (0xffU & 0U);
    }
    __PVT__mant_rounded = (0x1ffffffU & ((0xffffffU 
                                          & (vlSelf->__PVT__norm_mant 
                                             >> 3U)) 
                                         + (1U & ((vlSelf->__PVT__norm_mant 
                                                   >> 2U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0xbU 
                                                              & vlSelf->__PVT__norm_mant)))))));
    if ((0x1000000U & __PVT__mant_rounded)) {
        vlSelf->__PVT__final_exp = (0xffU & ((IData)(1U) 
                                             + (IData)(vlSelf->__PVT__norm_exp)));
        vlSelf->__PVT__rounded_mant = (0x7fffffU & 
                                       (__PVT__mant_rounded 
                                        >> 1U));
    } else {
        vlSelf->__PVT__final_exp = vlSelf->__PVT__norm_exp;
        vlSelf->__PVT__rounded_mant = (0x7fffffU & __PVT__mant_rounded);
    }
}

VL_INLINE_OPT void Vnpu_core_top_fp32_adder___ico_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_core_top_fp32_adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_core_top_fp32_adder___ico_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0\n"); );
    // Init
    IData/*23:0*/ __PVT__large_mant;
    __PVT__large_mant = 0;
    IData/*23:0*/ __PVT__small_mant;
    __PVT__small_mant = 0;
    CData/*7:0*/ __PVT__exp_diff;
    __PVT__exp_diff = 0;
    CData/*0:0*/ __PVT__a_is_larger;
    __PVT__a_is_larger = 0;
    IData/*27:0*/ __PVT__mant_sum;
    __PVT__mant_sum = 0;
    CData/*4:0*/ __PVT__lzc;
    __PVT__lzc = 0;
    IData/*24:0*/ __PVT__mant_rounded;
    __PVT__mant_rounded = 0;
    IData/*23:0*/ __VdfgExtracted_hb7d58418__0;
    __VdfgExtracted_hb7d58418__0 = 0;
    // Body
    vlSelf->__PVT__b_is_inf = (IData)((0x7f800000U 
                                       == (0x7fffffffU 
                                           & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    vlSelf->__PVT__b_is_zero = (IData)((0U == (0x7fffffffU 
                                               & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __VdfgExtracted_hb7d58418__0 = ((0U == (0xffU & 
                                            (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U)))
                                     ? (0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)
                                     : (0x800000U | 
                                        (0x7fffffU 
                                         & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __PVT__a_is_larger = (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [0xcU][1U] >> 0x17U)) 
                           > (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                       >> 0x17U))) 
                          | (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                        [0xcU][1U] 
                                        >> 0x17U)) 
                              == (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x17U))) 
                             & ((0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xcU][1U]) >= (0x7fffffU 
                                                 & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))));
    if (__PVT__a_is_larger) {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                           [0xcU][1U] 
                                           >> 0x1fU));
        __PVT__large_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        __PVT__small_mant = __VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xcU]
                                             [1U] >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
    } else {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x1fU));
        __PVT__large_mant = __VdfgExtracted_hb7d58418__0;
        __PVT__small_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xcU]
                                             [1U] >> 0x17U));
    }
    __PVT__exp_diff = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                - (IData)(vlSelf->__PVT__small_exp)));
    if ((0U == (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (__PVT__small_mant 
                                        << 3U);
        vlSelf->__PVT__sticky_bit = 0U;
    } else if ((0x1bU > (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (0x7ffffffU 
                                        & VL_SHIFTR_III(27,27,8, 
                                                        (__PVT__small_mant 
                                                         << 3U), (IData)(__PVT__exp_diff)));
        vlSelf->__PVT__sticky_bit = (0U != ((__PVT__small_mant 
                                             << 3U) 
                                            & (VL_SHIFTL_III(27,27,8, (IData)(1U), (IData)(__PVT__exp_diff)) 
                                               - (IData)(1U))));
    } else {
        vlSelf->__PVT__aligned_small = 0U;
        vlSelf->__PVT__sticky_bit = (0U != __PVT__small_mant);
    }
    vlSelf->__PVT__aligned_small = ((0x7fffffeU & vlSelf->__PVT__aligned_small) 
                                    | (1U & (vlSelf->__PVT__aligned_small 
                                             | (IData)(vlSelf->__PVT__sticky_bit))));
    __PVT__mant_sum = (0xfffffffU & ((1U & ((IData)(vlSelf->__PVT__large_sign) 
                                            ^ ((IData)(__PVT__a_is_larger)
                                                ? (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                   >> 0x1fU)
                                                : (
                                                   vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [1U] 
                                                   >> 0x1fU))))
                                      ? ((__PVT__large_mant 
                                          << 3U) - vlSelf->__PVT__aligned_small)
                                      : ((__PVT__large_mant 
                                          << 3U) + vlSelf->__PVT__aligned_small)));
    __PVT__lzc = (((((((((0x8000000U == (0x8000000U 
                                         & __PVT__mant_sum)) 
                         | (0x4000000U == (0xc000000U 
                                           & __PVT__mant_sum))) 
                        | (0x2000000U == (0xe000000U 
                                          & __PVT__mant_sum))) 
                       | (0x1000000U == (0xf000000U 
                                         & __PVT__mant_sum))) 
                      | (0x800000U == (0xf800000U & __PVT__mant_sum))) 
                     | (0x400000U == (0xfc00000U & __PVT__mant_sum))) 
                    | (0x200000U == (0xfe00000U & __PVT__mant_sum))) 
                   | (0x100000U == (0xff00000U & __PVT__mant_sum)))
                   ? ((0x8000000U == (0x8000000U & __PVT__mant_sum))
                       ? 0U : ((0x4000000U == (0xc000000U 
                                               & __PVT__mant_sum))
                                ? 0U : ((0x2000000U 
                                         == (0xe000000U 
                                             & __PVT__mant_sum))
                                         ? 1U : ((0x1000000U 
                                                  == 
                                                  (0xf000000U 
                                                   & __PVT__mant_sum))
                                                  ? 2U
                                                  : 
                                                 ((0x800000U 
                                                   == 
                                                   (0xf800000U 
                                                    & __PVT__mant_sum))
                                                   ? 3U
                                                   : 
                                                  ((0x400000U 
                                                    == 
                                                    (0xfc00000U 
                                                     & __PVT__mant_sum))
                                                    ? 4U
                                                    : 
                                                   ((0x200000U 
                                                     == 
                                                     (0xfe00000U 
                                                      & __PVT__mant_sum))
                                                     ? 5U
                                                     : 6U)))))))
                   : (((((((((0x80000U == (0xff80000U 
                                           & __PVT__mant_sum)) 
                             | (0x40000U == (0xffc0000U 
                                             & __PVT__mant_sum))) 
                            | (0x20000U == (0xffe0000U 
                                            & __PVT__mant_sum))) 
                           | (0x10000U == (0xfff0000U 
                                           & __PVT__mant_sum))) 
                          | (0x8000U == (0xfff8000U 
                                         & __PVT__mant_sum))) 
                         | (0x4000U == (0xfffc000U 
                                        & __PVT__mant_sum))) 
                        | (0x2000U == (0xfffe000U & __PVT__mant_sum))) 
                       | (0x1000U == (0xffff000U & __PVT__mant_sum)))
                       ? ((0x80000U == (0xff80000U 
                                        & __PVT__mant_sum))
                           ? 7U : ((0x40000U == (0xffc0000U 
                                                 & __PVT__mant_sum))
                                    ? 8U : ((0x20000U 
                                             == (0xffe0000U 
                                                 & __PVT__mant_sum))
                                             ? 9U : 
                                            ((0x10000U 
                                              == (0xfff0000U 
                                                  & __PVT__mant_sum))
                                              ? 0xaU
                                              : ((0x8000U 
                                                  == 
                                                  (0xfff8000U 
                                                   & __PVT__mant_sum))
                                                  ? 0xbU
                                                  : 
                                                 ((0x4000U 
                                                   == 
                                                   (0xfffc000U 
                                                    & __PVT__mant_sum))
                                                   ? 0xcU
                                                   : 
                                                  ((0x2000U 
                                                    == 
                                                    (0xfffe000U 
                                                     & __PVT__mant_sum))
                                                    ? 0xdU
                                                    : 0xeU)))))))
                       : (((((((((0x800U == (0xffff800U 
                                             & __PVT__mant_sum)) 
                                 | (0x400U == (0xffffc00U 
                                               & __PVT__mant_sum))) 
                                | (0x200U == (0xffffe00U 
                                              & __PVT__mant_sum))) 
                               | (0x100U == (0xfffff00U 
                                             & __PVT__mant_sum))) 
                              | (0x80U == (0xfffff80U 
                                           & __PVT__mant_sum))) 
                             | (0x40U == (0xfffffc0U 
                                          & __PVT__mant_sum))) 
                            | (0x20U == (0xfffffe0U 
                                         & __PVT__mant_sum))) 
                           | (0x10U == (0xffffff0U 
                                        & __PVT__mant_sum)))
                           ? ((0x800U == (0xffff800U 
                                          & __PVT__mant_sum))
                               ? 0xfU : ((0x400U == 
                                          (0xffffc00U 
                                           & __PVT__mant_sum))
                                          ? 0x10U : 
                                         ((0x200U == 
                                           (0xffffe00U 
                                            & __PVT__mant_sum))
                                           ? 0x11U : 
                                          ((0x100U 
                                            == (0xfffff00U 
                                                & __PVT__mant_sum))
                                            ? 0x12U
                                            : ((0x80U 
                                                == 
                                                (0xfffff80U 
                                                 & __PVT__mant_sum))
                                                ? 0x13U
                                                : (
                                                   (0x40U 
                                                    == 
                                                    (0xfffffc0U 
                                                     & __PVT__mant_sum))
                                                    ? 0x14U
                                                    : 
                                                   ((0x20U 
                                                     == 
                                                     (0xfffffe0U 
                                                      & __PVT__mant_sum))
                                                     ? 0x15U
                                                     : 0x16U)))))))
                           : ((8U == (0xffffff8U & __PVT__mant_sum))
                               ? 0x17U : ((4U == (0xffffffcU 
                                                  & __PVT__mant_sum))
                                           ? 0x18U : 
                                          ((2U == (0xffffffeU 
                                                   & __PVT__mant_sum))
                                            ? 0x19U
                                            : ((1U 
                                                == __PVT__mant_sum)
                                                ? 0x1aU
                                                : 0x1bU)))))));
    if ((0x8000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  >> 1U));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__large_exp)));
    } else if ((0x4000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & __PVT__mant_sum);
        vlSelf->__PVT__norm_exp = (0xffU & (IData)(vlSelf->__PVT__large_exp));
    } else if (((0x1bU > (IData)(__PVT__lzc)) & ((IData)(vlSelf->__PVT__large_exp) 
                                                 > (IData)(__PVT__lzc)))) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  << (IData)(__PVT__lzc)));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                            - (IData)(__PVT__lzc)));
    } else {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & 0U);
        vlSelf->__PVT__norm_exp = (0xffU & 0U);
    }
    __PVT__mant_rounded = (0x1ffffffU & ((0xffffffU 
                                          & (vlSelf->__PVT__norm_mant 
                                             >> 3U)) 
                                         + (1U & ((vlSelf->__PVT__norm_mant 
                                                   >> 2U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0xbU 
                                                              & vlSelf->__PVT__norm_mant)))))));
    if ((0x1000000U & __PVT__mant_rounded)) {
        vlSelf->__PVT__final_exp = (0xffU & ((IData)(1U) 
                                             + (IData)(vlSelf->__PVT__norm_exp)));
        vlSelf->__PVT__rounded_mant = (0x7fffffU & 
                                       (__PVT__mant_rounded 
                                        >> 1U));
    } else {
        vlSelf->__PVT__final_exp = vlSelf->__PVT__norm_exp;
        vlSelf->__PVT__rounded_mant = (0x7fffffU & __PVT__mant_rounded);
    }
}

VL_INLINE_OPT void Vnpu_core_top_fp32_adder___nba_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_core_top_fp32_adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_core_top_fp32_adder___nba_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0\n"); );
    // Init
    IData/*23:0*/ __PVT__large_mant;
    __PVT__large_mant = 0;
    IData/*23:0*/ __PVT__small_mant;
    __PVT__small_mant = 0;
    CData/*7:0*/ __PVT__exp_diff;
    __PVT__exp_diff = 0;
    CData/*0:0*/ __PVT__a_is_larger;
    __PVT__a_is_larger = 0;
    IData/*27:0*/ __PVT__mant_sum;
    __PVT__mant_sum = 0;
    CData/*4:0*/ __PVT__lzc;
    __PVT__lzc = 0;
    IData/*24:0*/ __PVT__mant_rounded;
    __PVT__mant_rounded = 0;
    IData/*23:0*/ __VdfgExtracted_hb7d58418__0;
    __VdfgExtracted_hb7d58418__0 = 0;
    // Body
    vlSelf->__PVT__a_is_inf = ((0xffU == (0xffU & (
                                                   vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [1U] 
                                                   >> 0x17U))) 
                               & (0U == (0x7fffffU 
                                         & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xcU][1U])));
    if ((0U == (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                         [0xcU][1U] >> 0x17U)))) {
        vlSelf->__PVT__a_is_zero = (0U == (0x7fffffU 
                                           & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                           [0xcU][1U]));
        vlSelf->__VdfgExtracted_h18a3deab__0 = (0x7fffffU 
                                                & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xcU]
                                                [1U]);
    } else {
        vlSelf->__PVT__a_is_zero = 0U;
        vlSelf->__VdfgExtracted_h18a3deab__0 = (0x800000U 
                                                | (0x7fffffU 
                                                   & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [1U]));
    }
    vlSelf->__PVT__b_is_inf = (IData)((0x7f800000U 
                                       == (0x7fffffffU 
                                           & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    vlSelf->__PVT__b_is_zero = (IData)((0U == (0x7fffffffU 
                                               & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __VdfgExtracted_hb7d58418__0 = ((0U == (0xffU & 
                                            (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U)))
                                     ? (0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)
                                     : (0x800000U | 
                                        (0x7fffffU 
                                         & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __PVT__a_is_larger = (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [0xcU][1U] >> 0x17U)) 
                           > (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                       >> 0x17U))) 
                          | (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                        [0xcU][1U] 
                                        >> 0x17U)) 
                              == (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x17U))) 
                             & ((0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xcU][1U]) >= (0x7fffffU 
                                                 & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))));
    if (__PVT__a_is_larger) {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                           [0xcU][1U] 
                                           >> 0x1fU));
        __PVT__large_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        __PVT__small_mant = __VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xcU]
                                             [1U] >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
    } else {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x1fU));
        __PVT__large_mant = __VdfgExtracted_hb7d58418__0;
        __PVT__small_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xcU]
                                             [1U] >> 0x17U));
    }
    __PVT__exp_diff = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                - (IData)(vlSelf->__PVT__small_exp)));
    if ((0U == (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (__PVT__small_mant 
                                        << 3U);
        vlSelf->__PVT__sticky_bit = 0U;
    } else if ((0x1bU > (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (0x7ffffffU 
                                        & VL_SHIFTR_III(27,27,8, 
                                                        (__PVT__small_mant 
                                                         << 3U), (IData)(__PVT__exp_diff)));
        vlSelf->__PVT__sticky_bit = (0U != ((__PVT__small_mant 
                                             << 3U) 
                                            & (VL_SHIFTL_III(27,27,8, (IData)(1U), (IData)(__PVT__exp_diff)) 
                                               - (IData)(1U))));
    } else {
        vlSelf->__PVT__aligned_small = 0U;
        vlSelf->__PVT__sticky_bit = (0U != __PVT__small_mant);
    }
    vlSelf->__PVT__aligned_small = ((0x7fffffeU & vlSelf->__PVT__aligned_small) 
                                    | (1U & (vlSelf->__PVT__aligned_small 
                                             | (IData)(vlSelf->__PVT__sticky_bit))));
    __PVT__mant_sum = (0xfffffffU & ((1U & ((IData)(vlSelf->__PVT__large_sign) 
                                            ^ ((IData)(__PVT__a_is_larger)
                                                ? (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                   >> 0x1fU)
                                                : (
                                                   vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [1U] 
                                                   >> 0x1fU))))
                                      ? ((__PVT__large_mant 
                                          << 3U) - vlSelf->__PVT__aligned_small)
                                      : ((__PVT__large_mant 
                                          << 3U) + vlSelf->__PVT__aligned_small)));
    __PVT__lzc = (((((((((0x8000000U == (0x8000000U 
                                         & __PVT__mant_sum)) 
                         | (0x4000000U == (0xc000000U 
                                           & __PVT__mant_sum))) 
                        | (0x2000000U == (0xe000000U 
                                          & __PVT__mant_sum))) 
                       | (0x1000000U == (0xf000000U 
                                         & __PVT__mant_sum))) 
                      | (0x800000U == (0xf800000U & __PVT__mant_sum))) 
                     | (0x400000U == (0xfc00000U & __PVT__mant_sum))) 
                    | (0x200000U == (0xfe00000U & __PVT__mant_sum))) 
                   | (0x100000U == (0xff00000U & __PVT__mant_sum)))
                   ? ((0x8000000U == (0x8000000U & __PVT__mant_sum))
                       ? 0U : ((0x4000000U == (0xc000000U 
                                               & __PVT__mant_sum))
                                ? 0U : ((0x2000000U 
                                         == (0xe000000U 
                                             & __PVT__mant_sum))
                                         ? 1U : ((0x1000000U 
                                                  == 
                                                  (0xf000000U 
                                                   & __PVT__mant_sum))
                                                  ? 2U
                                                  : 
                                                 ((0x800000U 
                                                   == 
                                                   (0xf800000U 
                                                    & __PVT__mant_sum))
                                                   ? 3U
                                                   : 
                                                  ((0x400000U 
                                                    == 
                                                    (0xfc00000U 
                                                     & __PVT__mant_sum))
                                                    ? 4U
                                                    : 
                                                   ((0x200000U 
                                                     == 
                                                     (0xfe00000U 
                                                      & __PVT__mant_sum))
                                                     ? 5U
                                                     : 6U)))))))
                   : (((((((((0x80000U == (0xff80000U 
                                           & __PVT__mant_sum)) 
                             | (0x40000U == (0xffc0000U 
                                             & __PVT__mant_sum))) 
                            | (0x20000U == (0xffe0000U 
                                            & __PVT__mant_sum))) 
                           | (0x10000U == (0xfff0000U 
                                           & __PVT__mant_sum))) 
                          | (0x8000U == (0xfff8000U 
                                         & __PVT__mant_sum))) 
                         | (0x4000U == (0xfffc000U 
                                        & __PVT__mant_sum))) 
                        | (0x2000U == (0xfffe000U & __PVT__mant_sum))) 
                       | (0x1000U == (0xffff000U & __PVT__mant_sum)))
                       ? ((0x80000U == (0xff80000U 
                                        & __PVT__mant_sum))
                           ? 7U : ((0x40000U == (0xffc0000U 
                                                 & __PVT__mant_sum))
                                    ? 8U : ((0x20000U 
                                             == (0xffe0000U 
                                                 & __PVT__mant_sum))
                                             ? 9U : 
                                            ((0x10000U 
                                              == (0xfff0000U 
                                                  & __PVT__mant_sum))
                                              ? 0xaU
                                              : ((0x8000U 
                                                  == 
                                                  (0xfff8000U 
                                                   & __PVT__mant_sum))
                                                  ? 0xbU
                                                  : 
                                                 ((0x4000U 
                                                   == 
                                                   (0xfffc000U 
                                                    & __PVT__mant_sum))
                                                   ? 0xcU
                                                   : 
                                                  ((0x2000U 
                                                    == 
                                                    (0xfffe000U 
                                                     & __PVT__mant_sum))
                                                    ? 0xdU
                                                    : 0xeU)))))))
                       : (((((((((0x800U == (0xffff800U 
                                             & __PVT__mant_sum)) 
                                 | (0x400U == (0xffffc00U 
                                               & __PVT__mant_sum))) 
                                | (0x200U == (0xffffe00U 
                                              & __PVT__mant_sum))) 
                               | (0x100U == (0xfffff00U 
                                             & __PVT__mant_sum))) 
                              | (0x80U == (0xfffff80U 
                                           & __PVT__mant_sum))) 
                             | (0x40U == (0xfffffc0U 
                                          & __PVT__mant_sum))) 
                            | (0x20U == (0xfffffe0U 
                                         & __PVT__mant_sum))) 
                           | (0x10U == (0xffffff0U 
                                        & __PVT__mant_sum)))
                           ? ((0x800U == (0xffff800U 
                                          & __PVT__mant_sum))
                               ? 0xfU : ((0x400U == 
                                          (0xffffc00U 
                                           & __PVT__mant_sum))
                                          ? 0x10U : 
                                         ((0x200U == 
                                           (0xffffe00U 
                                            & __PVT__mant_sum))
                                           ? 0x11U : 
                                          ((0x100U 
                                            == (0xfffff00U 
                                                & __PVT__mant_sum))
                                            ? 0x12U
                                            : ((0x80U 
                                                == 
                                                (0xfffff80U 
                                                 & __PVT__mant_sum))
                                                ? 0x13U
                                                : (
                                                   (0x40U 
                                                    == 
                                                    (0xfffffc0U 
                                                     & __PVT__mant_sum))
                                                    ? 0x14U
                                                    : 
                                                   ((0x20U 
                                                     == 
                                                     (0xfffffe0U 
                                                      & __PVT__mant_sum))
                                                     ? 0x15U
                                                     : 0x16U)))))))
                           : ((8U == (0xffffff8U & __PVT__mant_sum))
                               ? 0x17U : ((4U == (0xffffffcU 
                                                  & __PVT__mant_sum))
                                           ? 0x18U : 
                                          ((2U == (0xffffffeU 
                                                   & __PVT__mant_sum))
                                            ? 0x19U
                                            : ((1U 
                                                == __PVT__mant_sum)
                                                ? 0x1aU
                                                : 0x1bU)))))));
    if ((0x8000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  >> 1U));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__large_exp)));
    } else if ((0x4000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & __PVT__mant_sum);
        vlSelf->__PVT__norm_exp = (0xffU & (IData)(vlSelf->__PVT__large_exp));
    } else if (((0x1bU > (IData)(__PVT__lzc)) & ((IData)(vlSelf->__PVT__large_exp) 
                                                 > (IData)(__PVT__lzc)))) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  << (IData)(__PVT__lzc)));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                            - (IData)(__PVT__lzc)));
    } else {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & 0U);
        vlSelf->__PVT__norm_exp = (0xffU & 0U);
    }
    __PVT__mant_rounded = (0x1ffffffU & ((0xffffffU 
                                          & (vlSelf->__PVT__norm_mant 
                                             >> 3U)) 
                                         + (1U & ((vlSelf->__PVT__norm_mant 
                                                   >> 2U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0xbU 
                                                              & vlSelf->__PVT__norm_mant)))))));
    if ((0x1000000U & __PVT__mant_rounded)) {
        vlSelf->__PVT__final_exp = (0xffU & ((IData)(1U) 
                                             + (IData)(vlSelf->__PVT__norm_exp)));
        vlSelf->__PVT__rounded_mant = (0x7fffffU & 
                                       (__PVT__mant_rounded 
                                        >> 1U));
    } else {
        vlSelf->__PVT__final_exp = vlSelf->__PVT__norm_exp;
        vlSelf->__PVT__rounded_mant = (0x7fffffU & __PVT__mant_rounded);
    }
}

VL_INLINE_OPT void Vnpu_core_top_fp32_adder___ico_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_core_top_fp32_adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_core_top_fp32_adder___ico_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0\n"); );
    // Init
    IData/*23:0*/ __PVT__large_mant;
    __PVT__large_mant = 0;
    IData/*23:0*/ __PVT__small_mant;
    __PVT__small_mant = 0;
    CData/*7:0*/ __PVT__exp_diff;
    __PVT__exp_diff = 0;
    CData/*0:0*/ __PVT__a_is_larger;
    __PVT__a_is_larger = 0;
    IData/*27:0*/ __PVT__mant_sum;
    __PVT__mant_sum = 0;
    CData/*4:0*/ __PVT__lzc;
    __PVT__lzc = 0;
    IData/*24:0*/ __PVT__mant_rounded;
    __PVT__mant_rounded = 0;
    IData/*23:0*/ __VdfgExtracted_hb7d58418__0;
    __VdfgExtracted_hb7d58418__0 = 0;
    // Body
    vlSelf->__PVT__b_is_inf = (IData)((0x7f800000U 
                                       == (0x7fffffffU 
                                           & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    vlSelf->__PVT__b_is_zero = (IData)((0U == (0x7fffffffU 
                                               & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __VdfgExtracted_hb7d58418__0 = ((0U == (0xffU & 
                                            (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U)))
                                     ? (0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)
                                     : (0x800000U | 
                                        (0x7fffffU 
                                         & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __PVT__a_is_larger = (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [0xcU][2U] >> 0x17U)) 
                           > (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                       >> 0x17U))) 
                          | (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                        [0xcU][2U] 
                                        >> 0x17U)) 
                              == (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x17U))) 
                             & ((0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xcU][2U]) >= (0x7fffffU 
                                                 & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))));
    if (__PVT__a_is_larger) {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                           [0xcU][2U] 
                                           >> 0x1fU));
        __PVT__large_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        __PVT__small_mant = __VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xcU]
                                             [2U] >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
    } else {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x1fU));
        __PVT__large_mant = __VdfgExtracted_hb7d58418__0;
        __PVT__small_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xcU]
                                             [2U] >> 0x17U));
    }
    __PVT__exp_diff = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                - (IData)(vlSelf->__PVT__small_exp)));
    if ((0U == (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (__PVT__small_mant 
                                        << 3U);
        vlSelf->__PVT__sticky_bit = 0U;
    } else if ((0x1bU > (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (0x7ffffffU 
                                        & VL_SHIFTR_III(27,27,8, 
                                                        (__PVT__small_mant 
                                                         << 3U), (IData)(__PVT__exp_diff)));
        vlSelf->__PVT__sticky_bit = (0U != ((__PVT__small_mant 
                                             << 3U) 
                                            & (VL_SHIFTL_III(27,27,8, (IData)(1U), (IData)(__PVT__exp_diff)) 
                                               - (IData)(1U))));
    } else {
        vlSelf->__PVT__aligned_small = 0U;
        vlSelf->__PVT__sticky_bit = (0U != __PVT__small_mant);
    }
    vlSelf->__PVT__aligned_small = ((0x7fffffeU & vlSelf->__PVT__aligned_small) 
                                    | (1U & (vlSelf->__PVT__aligned_small 
                                             | (IData)(vlSelf->__PVT__sticky_bit))));
    __PVT__mant_sum = (0xfffffffU & ((1U & ((IData)(vlSelf->__PVT__large_sign) 
                                            ^ ((IData)(__PVT__a_is_larger)
                                                ? (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                   >> 0x1fU)
                                                : (
                                                   vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [2U] 
                                                   >> 0x1fU))))
                                      ? ((__PVT__large_mant 
                                          << 3U) - vlSelf->__PVT__aligned_small)
                                      : ((__PVT__large_mant 
                                          << 3U) + vlSelf->__PVT__aligned_small)));
    __PVT__lzc = (((((((((0x8000000U == (0x8000000U 
                                         & __PVT__mant_sum)) 
                         | (0x4000000U == (0xc000000U 
                                           & __PVT__mant_sum))) 
                        | (0x2000000U == (0xe000000U 
                                          & __PVT__mant_sum))) 
                       | (0x1000000U == (0xf000000U 
                                         & __PVT__mant_sum))) 
                      | (0x800000U == (0xf800000U & __PVT__mant_sum))) 
                     | (0x400000U == (0xfc00000U & __PVT__mant_sum))) 
                    | (0x200000U == (0xfe00000U & __PVT__mant_sum))) 
                   | (0x100000U == (0xff00000U & __PVT__mant_sum)))
                   ? ((0x8000000U == (0x8000000U & __PVT__mant_sum))
                       ? 0U : ((0x4000000U == (0xc000000U 
                                               & __PVT__mant_sum))
                                ? 0U : ((0x2000000U 
                                         == (0xe000000U 
                                             & __PVT__mant_sum))
                                         ? 1U : ((0x1000000U 
                                                  == 
                                                  (0xf000000U 
                                                   & __PVT__mant_sum))
                                                  ? 2U
                                                  : 
                                                 ((0x800000U 
                                                   == 
                                                   (0xf800000U 
                                                    & __PVT__mant_sum))
                                                   ? 3U
                                                   : 
                                                  ((0x400000U 
                                                    == 
                                                    (0xfc00000U 
                                                     & __PVT__mant_sum))
                                                    ? 4U
                                                    : 
                                                   ((0x200000U 
                                                     == 
                                                     (0xfe00000U 
                                                      & __PVT__mant_sum))
                                                     ? 5U
                                                     : 6U)))))))
                   : (((((((((0x80000U == (0xff80000U 
                                           & __PVT__mant_sum)) 
                             | (0x40000U == (0xffc0000U 
                                             & __PVT__mant_sum))) 
                            | (0x20000U == (0xffe0000U 
                                            & __PVT__mant_sum))) 
                           | (0x10000U == (0xfff0000U 
                                           & __PVT__mant_sum))) 
                          | (0x8000U == (0xfff8000U 
                                         & __PVT__mant_sum))) 
                         | (0x4000U == (0xfffc000U 
                                        & __PVT__mant_sum))) 
                        | (0x2000U == (0xfffe000U & __PVT__mant_sum))) 
                       | (0x1000U == (0xffff000U & __PVT__mant_sum)))
                       ? ((0x80000U == (0xff80000U 
                                        & __PVT__mant_sum))
                           ? 7U : ((0x40000U == (0xffc0000U 
                                                 & __PVT__mant_sum))
                                    ? 8U : ((0x20000U 
                                             == (0xffe0000U 
                                                 & __PVT__mant_sum))
                                             ? 9U : 
                                            ((0x10000U 
                                              == (0xfff0000U 
                                                  & __PVT__mant_sum))
                                              ? 0xaU
                                              : ((0x8000U 
                                                  == 
                                                  (0xfff8000U 
                                                   & __PVT__mant_sum))
                                                  ? 0xbU
                                                  : 
                                                 ((0x4000U 
                                                   == 
                                                   (0xfffc000U 
                                                    & __PVT__mant_sum))
                                                   ? 0xcU
                                                   : 
                                                  ((0x2000U 
                                                    == 
                                                    (0xfffe000U 
                                                     & __PVT__mant_sum))
                                                    ? 0xdU
                                                    : 0xeU)))))))
                       : (((((((((0x800U == (0xffff800U 
                                             & __PVT__mant_sum)) 
                                 | (0x400U == (0xffffc00U 
                                               & __PVT__mant_sum))) 
                                | (0x200U == (0xffffe00U 
                                              & __PVT__mant_sum))) 
                               | (0x100U == (0xfffff00U 
                                             & __PVT__mant_sum))) 
                              | (0x80U == (0xfffff80U 
                                           & __PVT__mant_sum))) 
                             | (0x40U == (0xfffffc0U 
                                          & __PVT__mant_sum))) 
                            | (0x20U == (0xfffffe0U 
                                         & __PVT__mant_sum))) 
                           | (0x10U == (0xffffff0U 
                                        & __PVT__mant_sum)))
                           ? ((0x800U == (0xffff800U 
                                          & __PVT__mant_sum))
                               ? 0xfU : ((0x400U == 
                                          (0xffffc00U 
                                           & __PVT__mant_sum))
                                          ? 0x10U : 
                                         ((0x200U == 
                                           (0xffffe00U 
                                            & __PVT__mant_sum))
                                           ? 0x11U : 
                                          ((0x100U 
                                            == (0xfffff00U 
                                                & __PVT__mant_sum))
                                            ? 0x12U
                                            : ((0x80U 
                                                == 
                                                (0xfffff80U 
                                                 & __PVT__mant_sum))
                                                ? 0x13U
                                                : (
                                                   (0x40U 
                                                    == 
                                                    (0xfffffc0U 
                                                     & __PVT__mant_sum))
                                                    ? 0x14U
                                                    : 
                                                   ((0x20U 
                                                     == 
                                                     (0xfffffe0U 
                                                      & __PVT__mant_sum))
                                                     ? 0x15U
                                                     : 0x16U)))))))
                           : ((8U == (0xffffff8U & __PVT__mant_sum))
                               ? 0x17U : ((4U == (0xffffffcU 
                                                  & __PVT__mant_sum))
                                           ? 0x18U : 
                                          ((2U == (0xffffffeU 
                                                   & __PVT__mant_sum))
                                            ? 0x19U
                                            : ((1U 
                                                == __PVT__mant_sum)
                                                ? 0x1aU
                                                : 0x1bU)))))));
    if ((0x8000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  >> 1U));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__large_exp)));
    } else if ((0x4000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & __PVT__mant_sum);
        vlSelf->__PVT__norm_exp = (0xffU & (IData)(vlSelf->__PVT__large_exp));
    } else if (((0x1bU > (IData)(__PVT__lzc)) & ((IData)(vlSelf->__PVT__large_exp) 
                                                 > (IData)(__PVT__lzc)))) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  << (IData)(__PVT__lzc)));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                            - (IData)(__PVT__lzc)));
    } else {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & 0U);
        vlSelf->__PVT__norm_exp = (0xffU & 0U);
    }
    __PVT__mant_rounded = (0x1ffffffU & ((0xffffffU 
                                          & (vlSelf->__PVT__norm_mant 
                                             >> 3U)) 
                                         + (1U & ((vlSelf->__PVT__norm_mant 
                                                   >> 2U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0xbU 
                                                              & vlSelf->__PVT__norm_mant)))))));
    if ((0x1000000U & __PVT__mant_rounded)) {
        vlSelf->__PVT__final_exp = (0xffU & ((IData)(1U) 
                                             + (IData)(vlSelf->__PVT__norm_exp)));
        vlSelf->__PVT__rounded_mant = (0x7fffffU & 
                                       (__PVT__mant_rounded 
                                        >> 1U));
    } else {
        vlSelf->__PVT__final_exp = vlSelf->__PVT__norm_exp;
        vlSelf->__PVT__rounded_mant = (0x7fffffU & __PVT__mant_rounded);
    }
}

VL_INLINE_OPT void Vnpu_core_top_fp32_adder___nba_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_core_top_fp32_adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_core_top_fp32_adder___nba_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0\n"); );
    // Init
    IData/*23:0*/ __PVT__large_mant;
    __PVT__large_mant = 0;
    IData/*23:0*/ __PVT__small_mant;
    __PVT__small_mant = 0;
    CData/*7:0*/ __PVT__exp_diff;
    __PVT__exp_diff = 0;
    CData/*0:0*/ __PVT__a_is_larger;
    __PVT__a_is_larger = 0;
    IData/*27:0*/ __PVT__mant_sum;
    __PVT__mant_sum = 0;
    CData/*4:0*/ __PVT__lzc;
    __PVT__lzc = 0;
    IData/*24:0*/ __PVT__mant_rounded;
    __PVT__mant_rounded = 0;
    IData/*23:0*/ __VdfgExtracted_hb7d58418__0;
    __VdfgExtracted_hb7d58418__0 = 0;
    // Body
    vlSelf->__PVT__a_is_inf = ((0xffU == (0xffU & (
                                                   vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [2U] 
                                                   >> 0x17U))) 
                               & (0U == (0x7fffffU 
                                         & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xcU][2U])));
    if ((0U == (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                         [0xcU][2U] >> 0x17U)))) {
        vlSelf->__PVT__a_is_zero = (0U == (0x7fffffU 
                                           & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                           [0xcU][2U]));
        vlSelf->__VdfgExtracted_h18a3deab__0 = (0x7fffffU 
                                                & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xcU]
                                                [2U]);
    } else {
        vlSelf->__PVT__a_is_zero = 0U;
        vlSelf->__VdfgExtracted_h18a3deab__0 = (0x800000U 
                                                | (0x7fffffU 
                                                   & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [2U]));
    }
    vlSelf->__PVT__b_is_inf = (IData)((0x7f800000U 
                                       == (0x7fffffffU 
                                           & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    vlSelf->__PVT__b_is_zero = (IData)((0U == (0x7fffffffU 
                                               & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __VdfgExtracted_hb7d58418__0 = ((0U == (0xffU & 
                                            (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U)))
                                     ? (0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)
                                     : (0x800000U | 
                                        (0x7fffffU 
                                         & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __PVT__a_is_larger = (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [0xcU][2U] >> 0x17U)) 
                           > (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                       >> 0x17U))) 
                          | (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                        [0xcU][2U] 
                                        >> 0x17U)) 
                              == (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x17U))) 
                             & ((0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xcU][2U]) >= (0x7fffffU 
                                                 & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))));
    if (__PVT__a_is_larger) {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                           [0xcU][2U] 
                                           >> 0x1fU));
        __PVT__large_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        __PVT__small_mant = __VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xcU]
                                             [2U] >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
    } else {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x1fU));
        __PVT__large_mant = __VdfgExtracted_hb7d58418__0;
        __PVT__small_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xcU]
                                             [2U] >> 0x17U));
    }
    __PVT__exp_diff = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                - (IData)(vlSelf->__PVT__small_exp)));
    if ((0U == (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (__PVT__small_mant 
                                        << 3U);
        vlSelf->__PVT__sticky_bit = 0U;
    } else if ((0x1bU > (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (0x7ffffffU 
                                        & VL_SHIFTR_III(27,27,8, 
                                                        (__PVT__small_mant 
                                                         << 3U), (IData)(__PVT__exp_diff)));
        vlSelf->__PVT__sticky_bit = (0U != ((__PVT__small_mant 
                                             << 3U) 
                                            & (VL_SHIFTL_III(27,27,8, (IData)(1U), (IData)(__PVT__exp_diff)) 
                                               - (IData)(1U))));
    } else {
        vlSelf->__PVT__aligned_small = 0U;
        vlSelf->__PVT__sticky_bit = (0U != __PVT__small_mant);
    }
    vlSelf->__PVT__aligned_small = ((0x7fffffeU & vlSelf->__PVT__aligned_small) 
                                    | (1U & (vlSelf->__PVT__aligned_small 
                                             | (IData)(vlSelf->__PVT__sticky_bit))));
    __PVT__mant_sum = (0xfffffffU & ((1U & ((IData)(vlSelf->__PVT__large_sign) 
                                            ^ ((IData)(__PVT__a_is_larger)
                                                ? (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                   >> 0x1fU)
                                                : (
                                                   vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [2U] 
                                                   >> 0x1fU))))
                                      ? ((__PVT__large_mant 
                                          << 3U) - vlSelf->__PVT__aligned_small)
                                      : ((__PVT__large_mant 
                                          << 3U) + vlSelf->__PVT__aligned_small)));
    __PVT__lzc = (((((((((0x8000000U == (0x8000000U 
                                         & __PVT__mant_sum)) 
                         | (0x4000000U == (0xc000000U 
                                           & __PVT__mant_sum))) 
                        | (0x2000000U == (0xe000000U 
                                          & __PVT__mant_sum))) 
                       | (0x1000000U == (0xf000000U 
                                         & __PVT__mant_sum))) 
                      | (0x800000U == (0xf800000U & __PVT__mant_sum))) 
                     | (0x400000U == (0xfc00000U & __PVT__mant_sum))) 
                    | (0x200000U == (0xfe00000U & __PVT__mant_sum))) 
                   | (0x100000U == (0xff00000U & __PVT__mant_sum)))
                   ? ((0x8000000U == (0x8000000U & __PVT__mant_sum))
                       ? 0U : ((0x4000000U == (0xc000000U 
                                               & __PVT__mant_sum))
                                ? 0U : ((0x2000000U 
                                         == (0xe000000U 
                                             & __PVT__mant_sum))
                                         ? 1U : ((0x1000000U 
                                                  == 
                                                  (0xf000000U 
                                                   & __PVT__mant_sum))
                                                  ? 2U
                                                  : 
                                                 ((0x800000U 
                                                   == 
                                                   (0xf800000U 
                                                    & __PVT__mant_sum))
                                                   ? 3U
                                                   : 
                                                  ((0x400000U 
                                                    == 
                                                    (0xfc00000U 
                                                     & __PVT__mant_sum))
                                                    ? 4U
                                                    : 
                                                   ((0x200000U 
                                                     == 
                                                     (0xfe00000U 
                                                      & __PVT__mant_sum))
                                                     ? 5U
                                                     : 6U)))))))
                   : (((((((((0x80000U == (0xff80000U 
                                           & __PVT__mant_sum)) 
                             | (0x40000U == (0xffc0000U 
                                             & __PVT__mant_sum))) 
                            | (0x20000U == (0xffe0000U 
                                            & __PVT__mant_sum))) 
                           | (0x10000U == (0xfff0000U 
                                           & __PVT__mant_sum))) 
                          | (0x8000U == (0xfff8000U 
                                         & __PVT__mant_sum))) 
                         | (0x4000U == (0xfffc000U 
                                        & __PVT__mant_sum))) 
                        | (0x2000U == (0xfffe000U & __PVT__mant_sum))) 
                       | (0x1000U == (0xffff000U & __PVT__mant_sum)))
                       ? ((0x80000U == (0xff80000U 
                                        & __PVT__mant_sum))
                           ? 7U : ((0x40000U == (0xffc0000U 
                                                 & __PVT__mant_sum))
                                    ? 8U : ((0x20000U 
                                             == (0xffe0000U 
                                                 & __PVT__mant_sum))
                                             ? 9U : 
                                            ((0x10000U 
                                              == (0xfff0000U 
                                                  & __PVT__mant_sum))
                                              ? 0xaU
                                              : ((0x8000U 
                                                  == 
                                                  (0xfff8000U 
                                                   & __PVT__mant_sum))
                                                  ? 0xbU
                                                  : 
                                                 ((0x4000U 
                                                   == 
                                                   (0xfffc000U 
                                                    & __PVT__mant_sum))
                                                   ? 0xcU
                                                   : 
                                                  ((0x2000U 
                                                    == 
                                                    (0xfffe000U 
                                                     & __PVT__mant_sum))
                                                    ? 0xdU
                                                    : 0xeU)))))))
                       : (((((((((0x800U == (0xffff800U 
                                             & __PVT__mant_sum)) 
                                 | (0x400U == (0xffffc00U 
                                               & __PVT__mant_sum))) 
                                | (0x200U == (0xffffe00U 
                                              & __PVT__mant_sum))) 
                               | (0x100U == (0xfffff00U 
                                             & __PVT__mant_sum))) 
                              | (0x80U == (0xfffff80U 
                                           & __PVT__mant_sum))) 
                             | (0x40U == (0xfffffc0U 
                                          & __PVT__mant_sum))) 
                            | (0x20U == (0xfffffe0U 
                                         & __PVT__mant_sum))) 
                           | (0x10U == (0xffffff0U 
                                        & __PVT__mant_sum)))
                           ? ((0x800U == (0xffff800U 
                                          & __PVT__mant_sum))
                               ? 0xfU : ((0x400U == 
                                          (0xffffc00U 
                                           & __PVT__mant_sum))
                                          ? 0x10U : 
                                         ((0x200U == 
                                           (0xffffe00U 
                                            & __PVT__mant_sum))
                                           ? 0x11U : 
                                          ((0x100U 
                                            == (0xfffff00U 
                                                & __PVT__mant_sum))
                                            ? 0x12U
                                            : ((0x80U 
                                                == 
                                                (0xfffff80U 
                                                 & __PVT__mant_sum))
                                                ? 0x13U
                                                : (
                                                   (0x40U 
                                                    == 
                                                    (0xfffffc0U 
                                                     & __PVT__mant_sum))
                                                    ? 0x14U
                                                    : 
                                                   ((0x20U 
                                                     == 
                                                     (0xfffffe0U 
                                                      & __PVT__mant_sum))
                                                     ? 0x15U
                                                     : 0x16U)))))))
                           : ((8U == (0xffffff8U & __PVT__mant_sum))
                               ? 0x17U : ((4U == (0xffffffcU 
                                                  & __PVT__mant_sum))
                                           ? 0x18U : 
                                          ((2U == (0xffffffeU 
                                                   & __PVT__mant_sum))
                                            ? 0x19U
                                            : ((1U 
                                                == __PVT__mant_sum)
                                                ? 0x1aU
                                                : 0x1bU)))))));
    if ((0x8000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  >> 1U));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__large_exp)));
    } else if ((0x4000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & __PVT__mant_sum);
        vlSelf->__PVT__norm_exp = (0xffU & (IData)(vlSelf->__PVT__large_exp));
    } else if (((0x1bU > (IData)(__PVT__lzc)) & ((IData)(vlSelf->__PVT__large_exp) 
                                                 > (IData)(__PVT__lzc)))) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  << (IData)(__PVT__lzc)));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                            - (IData)(__PVT__lzc)));
    } else {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & 0U);
        vlSelf->__PVT__norm_exp = (0xffU & 0U);
    }
    __PVT__mant_rounded = (0x1ffffffU & ((0xffffffU 
                                          & (vlSelf->__PVT__norm_mant 
                                             >> 3U)) 
                                         + (1U & ((vlSelf->__PVT__norm_mant 
                                                   >> 2U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0xbU 
                                                              & vlSelf->__PVT__norm_mant)))))));
    if ((0x1000000U & __PVT__mant_rounded)) {
        vlSelf->__PVT__final_exp = (0xffU & ((IData)(1U) 
                                             + (IData)(vlSelf->__PVT__norm_exp)));
        vlSelf->__PVT__rounded_mant = (0x7fffffU & 
                                       (__PVT__mant_rounded 
                                        >> 1U));
    } else {
        vlSelf->__PVT__final_exp = vlSelf->__PVT__norm_exp;
        vlSelf->__PVT__rounded_mant = (0x7fffffU & __PVT__mant_rounded);
    }
}

VL_INLINE_OPT void Vnpu_core_top_fp32_adder___ico_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_core_top_fp32_adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_core_top_fp32_adder___ico_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0\n"); );
    // Init
    IData/*23:0*/ __PVT__large_mant;
    __PVT__large_mant = 0;
    IData/*23:0*/ __PVT__small_mant;
    __PVT__small_mant = 0;
    CData/*7:0*/ __PVT__exp_diff;
    __PVT__exp_diff = 0;
    CData/*0:0*/ __PVT__a_is_larger;
    __PVT__a_is_larger = 0;
    IData/*27:0*/ __PVT__mant_sum;
    __PVT__mant_sum = 0;
    CData/*4:0*/ __PVT__lzc;
    __PVT__lzc = 0;
    IData/*24:0*/ __PVT__mant_rounded;
    __PVT__mant_rounded = 0;
    IData/*23:0*/ __VdfgExtracted_hb7d58418__0;
    __VdfgExtracted_hb7d58418__0 = 0;
    // Body
    vlSelf->__PVT__b_is_inf = (IData)((0x7f800000U 
                                       == (0x7fffffffU 
                                           & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    vlSelf->__PVT__b_is_zero = (IData)((0U == (0x7fffffffU 
                                               & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __VdfgExtracted_hb7d58418__0 = ((0U == (0xffU & 
                                            (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U)))
                                     ? (0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)
                                     : (0x800000U | 
                                        (0x7fffffU 
                                         & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __PVT__a_is_larger = (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [0xcU][3U] >> 0x17U)) 
                           > (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                       >> 0x17U))) 
                          | (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                        [0xcU][3U] 
                                        >> 0x17U)) 
                              == (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x17U))) 
                             & ((0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xcU][3U]) >= (0x7fffffU 
                                                 & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))));
    if (__PVT__a_is_larger) {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                           [0xcU][3U] 
                                           >> 0x1fU));
        __PVT__large_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        __PVT__small_mant = __VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xcU]
                                             [3U] >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
    } else {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x1fU));
        __PVT__large_mant = __VdfgExtracted_hb7d58418__0;
        __PVT__small_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xcU]
                                             [3U] >> 0x17U));
    }
    __PVT__exp_diff = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                - (IData)(vlSelf->__PVT__small_exp)));
    if ((0U == (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (__PVT__small_mant 
                                        << 3U);
        vlSelf->__PVT__sticky_bit = 0U;
    } else if ((0x1bU > (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (0x7ffffffU 
                                        & VL_SHIFTR_III(27,27,8, 
                                                        (__PVT__small_mant 
                                                         << 3U), (IData)(__PVT__exp_diff)));
        vlSelf->__PVT__sticky_bit = (0U != ((__PVT__small_mant 
                                             << 3U) 
                                            & (VL_SHIFTL_III(27,27,8, (IData)(1U), (IData)(__PVT__exp_diff)) 
                                               - (IData)(1U))));
    } else {
        vlSelf->__PVT__aligned_small = 0U;
        vlSelf->__PVT__sticky_bit = (0U != __PVT__small_mant);
    }
    vlSelf->__PVT__aligned_small = ((0x7fffffeU & vlSelf->__PVT__aligned_small) 
                                    | (1U & (vlSelf->__PVT__aligned_small 
                                             | (IData)(vlSelf->__PVT__sticky_bit))));
    __PVT__mant_sum = (0xfffffffU & ((1U & ((IData)(vlSelf->__PVT__large_sign) 
                                            ^ ((IData)(__PVT__a_is_larger)
                                                ? (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                   >> 0x1fU)
                                                : (
                                                   vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [3U] 
                                                   >> 0x1fU))))
                                      ? ((__PVT__large_mant 
                                          << 3U) - vlSelf->__PVT__aligned_small)
                                      : ((__PVT__large_mant 
                                          << 3U) + vlSelf->__PVT__aligned_small)));
    __PVT__lzc = (((((((((0x8000000U == (0x8000000U 
                                         & __PVT__mant_sum)) 
                         | (0x4000000U == (0xc000000U 
                                           & __PVT__mant_sum))) 
                        | (0x2000000U == (0xe000000U 
                                          & __PVT__mant_sum))) 
                       | (0x1000000U == (0xf000000U 
                                         & __PVT__mant_sum))) 
                      | (0x800000U == (0xf800000U & __PVT__mant_sum))) 
                     | (0x400000U == (0xfc00000U & __PVT__mant_sum))) 
                    | (0x200000U == (0xfe00000U & __PVT__mant_sum))) 
                   | (0x100000U == (0xff00000U & __PVT__mant_sum)))
                   ? ((0x8000000U == (0x8000000U & __PVT__mant_sum))
                       ? 0U : ((0x4000000U == (0xc000000U 
                                               & __PVT__mant_sum))
                                ? 0U : ((0x2000000U 
                                         == (0xe000000U 
                                             & __PVT__mant_sum))
                                         ? 1U : ((0x1000000U 
                                                  == 
                                                  (0xf000000U 
                                                   & __PVT__mant_sum))
                                                  ? 2U
                                                  : 
                                                 ((0x800000U 
                                                   == 
                                                   (0xf800000U 
                                                    & __PVT__mant_sum))
                                                   ? 3U
                                                   : 
                                                  ((0x400000U 
                                                    == 
                                                    (0xfc00000U 
                                                     & __PVT__mant_sum))
                                                    ? 4U
                                                    : 
                                                   ((0x200000U 
                                                     == 
                                                     (0xfe00000U 
                                                      & __PVT__mant_sum))
                                                     ? 5U
                                                     : 6U)))))))
                   : (((((((((0x80000U == (0xff80000U 
                                           & __PVT__mant_sum)) 
                             | (0x40000U == (0xffc0000U 
                                             & __PVT__mant_sum))) 
                            | (0x20000U == (0xffe0000U 
                                            & __PVT__mant_sum))) 
                           | (0x10000U == (0xfff0000U 
                                           & __PVT__mant_sum))) 
                          | (0x8000U == (0xfff8000U 
                                         & __PVT__mant_sum))) 
                         | (0x4000U == (0xfffc000U 
                                        & __PVT__mant_sum))) 
                        | (0x2000U == (0xfffe000U & __PVT__mant_sum))) 
                       | (0x1000U == (0xffff000U & __PVT__mant_sum)))
                       ? ((0x80000U == (0xff80000U 
                                        & __PVT__mant_sum))
                           ? 7U : ((0x40000U == (0xffc0000U 
                                                 & __PVT__mant_sum))
                                    ? 8U : ((0x20000U 
                                             == (0xffe0000U 
                                                 & __PVT__mant_sum))
                                             ? 9U : 
                                            ((0x10000U 
                                              == (0xfff0000U 
                                                  & __PVT__mant_sum))
                                              ? 0xaU
                                              : ((0x8000U 
                                                  == 
                                                  (0xfff8000U 
                                                   & __PVT__mant_sum))
                                                  ? 0xbU
                                                  : 
                                                 ((0x4000U 
                                                   == 
                                                   (0xfffc000U 
                                                    & __PVT__mant_sum))
                                                   ? 0xcU
                                                   : 
                                                  ((0x2000U 
                                                    == 
                                                    (0xfffe000U 
                                                     & __PVT__mant_sum))
                                                    ? 0xdU
                                                    : 0xeU)))))))
                       : (((((((((0x800U == (0xffff800U 
                                             & __PVT__mant_sum)) 
                                 | (0x400U == (0xffffc00U 
                                               & __PVT__mant_sum))) 
                                | (0x200U == (0xffffe00U 
                                              & __PVT__mant_sum))) 
                               | (0x100U == (0xfffff00U 
                                             & __PVT__mant_sum))) 
                              | (0x80U == (0xfffff80U 
                                           & __PVT__mant_sum))) 
                             | (0x40U == (0xfffffc0U 
                                          & __PVT__mant_sum))) 
                            | (0x20U == (0xfffffe0U 
                                         & __PVT__mant_sum))) 
                           | (0x10U == (0xffffff0U 
                                        & __PVT__mant_sum)))
                           ? ((0x800U == (0xffff800U 
                                          & __PVT__mant_sum))
                               ? 0xfU : ((0x400U == 
                                          (0xffffc00U 
                                           & __PVT__mant_sum))
                                          ? 0x10U : 
                                         ((0x200U == 
                                           (0xffffe00U 
                                            & __PVT__mant_sum))
                                           ? 0x11U : 
                                          ((0x100U 
                                            == (0xfffff00U 
                                                & __PVT__mant_sum))
                                            ? 0x12U
                                            : ((0x80U 
                                                == 
                                                (0xfffff80U 
                                                 & __PVT__mant_sum))
                                                ? 0x13U
                                                : (
                                                   (0x40U 
                                                    == 
                                                    (0xfffffc0U 
                                                     & __PVT__mant_sum))
                                                    ? 0x14U
                                                    : 
                                                   ((0x20U 
                                                     == 
                                                     (0xfffffe0U 
                                                      & __PVT__mant_sum))
                                                     ? 0x15U
                                                     : 0x16U)))))))
                           : ((8U == (0xffffff8U & __PVT__mant_sum))
                               ? 0x17U : ((4U == (0xffffffcU 
                                                  & __PVT__mant_sum))
                                           ? 0x18U : 
                                          ((2U == (0xffffffeU 
                                                   & __PVT__mant_sum))
                                            ? 0x19U
                                            : ((1U 
                                                == __PVT__mant_sum)
                                                ? 0x1aU
                                                : 0x1bU)))))));
    if ((0x8000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  >> 1U));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__large_exp)));
    } else if ((0x4000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & __PVT__mant_sum);
        vlSelf->__PVT__norm_exp = (0xffU & (IData)(vlSelf->__PVT__large_exp));
    } else if (((0x1bU > (IData)(__PVT__lzc)) & ((IData)(vlSelf->__PVT__large_exp) 
                                                 > (IData)(__PVT__lzc)))) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  << (IData)(__PVT__lzc)));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                            - (IData)(__PVT__lzc)));
    } else {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & 0U);
        vlSelf->__PVT__norm_exp = (0xffU & 0U);
    }
    __PVT__mant_rounded = (0x1ffffffU & ((0xffffffU 
                                          & (vlSelf->__PVT__norm_mant 
                                             >> 3U)) 
                                         + (1U & ((vlSelf->__PVT__norm_mant 
                                                   >> 2U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0xbU 
                                                              & vlSelf->__PVT__norm_mant)))))));
    if ((0x1000000U & __PVT__mant_rounded)) {
        vlSelf->__PVT__final_exp = (0xffU & ((IData)(1U) 
                                             + (IData)(vlSelf->__PVT__norm_exp)));
        vlSelf->__PVT__rounded_mant = (0x7fffffU & 
                                       (__PVT__mant_rounded 
                                        >> 1U));
    } else {
        vlSelf->__PVT__final_exp = vlSelf->__PVT__norm_exp;
        vlSelf->__PVT__rounded_mant = (0x7fffffU & __PVT__mant_rounded);
    }
}

VL_INLINE_OPT void Vnpu_core_top_fp32_adder___nba_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_core_top_fp32_adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_core_top_fp32_adder___nba_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0\n"); );
    // Init
    IData/*23:0*/ __PVT__large_mant;
    __PVT__large_mant = 0;
    IData/*23:0*/ __PVT__small_mant;
    __PVT__small_mant = 0;
    CData/*7:0*/ __PVT__exp_diff;
    __PVT__exp_diff = 0;
    CData/*0:0*/ __PVT__a_is_larger;
    __PVT__a_is_larger = 0;
    IData/*27:0*/ __PVT__mant_sum;
    __PVT__mant_sum = 0;
    CData/*4:0*/ __PVT__lzc;
    __PVT__lzc = 0;
    IData/*24:0*/ __PVT__mant_rounded;
    __PVT__mant_rounded = 0;
    IData/*23:0*/ __VdfgExtracted_hb7d58418__0;
    __VdfgExtracted_hb7d58418__0 = 0;
    // Body
    vlSelf->__PVT__a_is_inf = ((0xffU == (0xffU & (
                                                   vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [3U] 
                                                   >> 0x17U))) 
                               & (0U == (0x7fffffU 
                                         & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xcU][3U])));
    if ((0U == (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                         [0xcU][3U] >> 0x17U)))) {
        vlSelf->__PVT__a_is_zero = (0U == (0x7fffffU 
                                           & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                           [0xcU][3U]));
        vlSelf->__VdfgExtracted_h18a3deab__0 = (0x7fffffU 
                                                & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xcU]
                                                [3U]);
    } else {
        vlSelf->__PVT__a_is_zero = 0U;
        vlSelf->__VdfgExtracted_h18a3deab__0 = (0x800000U 
                                                | (0x7fffffU 
                                                   & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [3U]));
    }
    vlSelf->__PVT__b_is_inf = (IData)((0x7f800000U 
                                       == (0x7fffffffU 
                                           & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    vlSelf->__PVT__b_is_zero = (IData)((0U == (0x7fffffffU 
                                               & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __VdfgExtracted_hb7d58418__0 = ((0U == (0xffU & 
                                            (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U)))
                                     ? (0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)
                                     : (0x800000U | 
                                        (0x7fffffU 
                                         & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __PVT__a_is_larger = (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [0xcU][3U] >> 0x17U)) 
                           > (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                       >> 0x17U))) 
                          | (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                        [0xcU][3U] 
                                        >> 0x17U)) 
                              == (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x17U))) 
                             & ((0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xcU][3U]) >= (0x7fffffU 
                                                 & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))));
    if (__PVT__a_is_larger) {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                           [0xcU][3U] 
                                           >> 0x1fU));
        __PVT__large_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        __PVT__small_mant = __VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xcU]
                                             [3U] >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
    } else {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x1fU));
        __PVT__large_mant = __VdfgExtracted_hb7d58418__0;
        __PVT__small_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xcU]
                                             [3U] >> 0x17U));
    }
    __PVT__exp_diff = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                - (IData)(vlSelf->__PVT__small_exp)));
    if ((0U == (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (__PVT__small_mant 
                                        << 3U);
        vlSelf->__PVT__sticky_bit = 0U;
    } else if ((0x1bU > (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (0x7ffffffU 
                                        & VL_SHIFTR_III(27,27,8, 
                                                        (__PVT__small_mant 
                                                         << 3U), (IData)(__PVT__exp_diff)));
        vlSelf->__PVT__sticky_bit = (0U != ((__PVT__small_mant 
                                             << 3U) 
                                            & (VL_SHIFTL_III(27,27,8, (IData)(1U), (IData)(__PVT__exp_diff)) 
                                               - (IData)(1U))));
    } else {
        vlSelf->__PVT__aligned_small = 0U;
        vlSelf->__PVT__sticky_bit = (0U != __PVT__small_mant);
    }
    vlSelf->__PVT__aligned_small = ((0x7fffffeU & vlSelf->__PVT__aligned_small) 
                                    | (1U & (vlSelf->__PVT__aligned_small 
                                             | (IData)(vlSelf->__PVT__sticky_bit))));
    __PVT__mant_sum = (0xfffffffU & ((1U & ((IData)(vlSelf->__PVT__large_sign) 
                                            ^ ((IData)(__PVT__a_is_larger)
                                                ? (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                   >> 0x1fU)
                                                : (
                                                   vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [3U] 
                                                   >> 0x1fU))))
                                      ? ((__PVT__large_mant 
                                          << 3U) - vlSelf->__PVT__aligned_small)
                                      : ((__PVT__large_mant 
                                          << 3U) + vlSelf->__PVT__aligned_small)));
    __PVT__lzc = (((((((((0x8000000U == (0x8000000U 
                                         & __PVT__mant_sum)) 
                         | (0x4000000U == (0xc000000U 
                                           & __PVT__mant_sum))) 
                        | (0x2000000U == (0xe000000U 
                                          & __PVT__mant_sum))) 
                       | (0x1000000U == (0xf000000U 
                                         & __PVT__mant_sum))) 
                      | (0x800000U == (0xf800000U & __PVT__mant_sum))) 
                     | (0x400000U == (0xfc00000U & __PVT__mant_sum))) 
                    | (0x200000U == (0xfe00000U & __PVT__mant_sum))) 
                   | (0x100000U == (0xff00000U & __PVT__mant_sum)))
                   ? ((0x8000000U == (0x8000000U & __PVT__mant_sum))
                       ? 0U : ((0x4000000U == (0xc000000U 
                                               & __PVT__mant_sum))
                                ? 0U : ((0x2000000U 
                                         == (0xe000000U 
                                             & __PVT__mant_sum))
                                         ? 1U : ((0x1000000U 
                                                  == 
                                                  (0xf000000U 
                                                   & __PVT__mant_sum))
                                                  ? 2U
                                                  : 
                                                 ((0x800000U 
                                                   == 
                                                   (0xf800000U 
                                                    & __PVT__mant_sum))
                                                   ? 3U
                                                   : 
                                                  ((0x400000U 
                                                    == 
                                                    (0xfc00000U 
                                                     & __PVT__mant_sum))
                                                    ? 4U
                                                    : 
                                                   ((0x200000U 
                                                     == 
                                                     (0xfe00000U 
                                                      & __PVT__mant_sum))
                                                     ? 5U
                                                     : 6U)))))))
                   : (((((((((0x80000U == (0xff80000U 
                                           & __PVT__mant_sum)) 
                             | (0x40000U == (0xffc0000U 
                                             & __PVT__mant_sum))) 
                            | (0x20000U == (0xffe0000U 
                                            & __PVT__mant_sum))) 
                           | (0x10000U == (0xfff0000U 
                                           & __PVT__mant_sum))) 
                          | (0x8000U == (0xfff8000U 
                                         & __PVT__mant_sum))) 
                         | (0x4000U == (0xfffc000U 
                                        & __PVT__mant_sum))) 
                        | (0x2000U == (0xfffe000U & __PVT__mant_sum))) 
                       | (0x1000U == (0xffff000U & __PVT__mant_sum)))
                       ? ((0x80000U == (0xff80000U 
                                        & __PVT__mant_sum))
                           ? 7U : ((0x40000U == (0xffc0000U 
                                                 & __PVT__mant_sum))
                                    ? 8U : ((0x20000U 
                                             == (0xffe0000U 
                                                 & __PVT__mant_sum))
                                             ? 9U : 
                                            ((0x10000U 
                                              == (0xfff0000U 
                                                  & __PVT__mant_sum))
                                              ? 0xaU
                                              : ((0x8000U 
                                                  == 
                                                  (0xfff8000U 
                                                   & __PVT__mant_sum))
                                                  ? 0xbU
                                                  : 
                                                 ((0x4000U 
                                                   == 
                                                   (0xfffc000U 
                                                    & __PVT__mant_sum))
                                                   ? 0xcU
                                                   : 
                                                  ((0x2000U 
                                                    == 
                                                    (0xfffe000U 
                                                     & __PVT__mant_sum))
                                                    ? 0xdU
                                                    : 0xeU)))))))
                       : (((((((((0x800U == (0xffff800U 
                                             & __PVT__mant_sum)) 
                                 | (0x400U == (0xffffc00U 
                                               & __PVT__mant_sum))) 
                                | (0x200U == (0xffffe00U 
                                              & __PVT__mant_sum))) 
                               | (0x100U == (0xfffff00U 
                                             & __PVT__mant_sum))) 
                              | (0x80U == (0xfffff80U 
                                           & __PVT__mant_sum))) 
                             | (0x40U == (0xfffffc0U 
                                          & __PVT__mant_sum))) 
                            | (0x20U == (0xfffffe0U 
                                         & __PVT__mant_sum))) 
                           | (0x10U == (0xffffff0U 
                                        & __PVT__mant_sum)))
                           ? ((0x800U == (0xffff800U 
                                          & __PVT__mant_sum))
                               ? 0xfU : ((0x400U == 
                                          (0xffffc00U 
                                           & __PVT__mant_sum))
                                          ? 0x10U : 
                                         ((0x200U == 
                                           (0xffffe00U 
                                            & __PVT__mant_sum))
                                           ? 0x11U : 
                                          ((0x100U 
                                            == (0xfffff00U 
                                                & __PVT__mant_sum))
                                            ? 0x12U
                                            : ((0x80U 
                                                == 
                                                (0xfffff80U 
                                                 & __PVT__mant_sum))
                                                ? 0x13U
                                                : (
                                                   (0x40U 
                                                    == 
                                                    (0xfffffc0U 
                                                     & __PVT__mant_sum))
                                                    ? 0x14U
                                                    : 
                                                   ((0x20U 
                                                     == 
                                                     (0xfffffe0U 
                                                      & __PVT__mant_sum))
                                                     ? 0x15U
                                                     : 0x16U)))))))
                           : ((8U == (0xffffff8U & __PVT__mant_sum))
                               ? 0x17U : ((4U == (0xffffffcU 
                                                  & __PVT__mant_sum))
                                           ? 0x18U : 
                                          ((2U == (0xffffffeU 
                                                   & __PVT__mant_sum))
                                            ? 0x19U
                                            : ((1U 
                                                == __PVT__mant_sum)
                                                ? 0x1aU
                                                : 0x1bU)))))));
    if ((0x8000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  >> 1U));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__large_exp)));
    } else if ((0x4000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & __PVT__mant_sum);
        vlSelf->__PVT__norm_exp = (0xffU & (IData)(vlSelf->__PVT__large_exp));
    } else if (((0x1bU > (IData)(__PVT__lzc)) & ((IData)(vlSelf->__PVT__large_exp) 
                                                 > (IData)(__PVT__lzc)))) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  << (IData)(__PVT__lzc)));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                            - (IData)(__PVT__lzc)));
    } else {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & 0U);
        vlSelf->__PVT__norm_exp = (0xffU & 0U);
    }
    __PVT__mant_rounded = (0x1ffffffU & ((0xffffffU 
                                          & (vlSelf->__PVT__norm_mant 
                                             >> 3U)) 
                                         + (1U & ((vlSelf->__PVT__norm_mant 
                                                   >> 2U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0xbU 
                                                              & vlSelf->__PVT__norm_mant)))))));
    if ((0x1000000U & __PVT__mant_rounded)) {
        vlSelf->__PVT__final_exp = (0xffU & ((IData)(1U) 
                                             + (IData)(vlSelf->__PVT__norm_exp)));
        vlSelf->__PVT__rounded_mant = (0x7fffffU & 
                                       (__PVT__mant_rounded 
                                        >> 1U));
    } else {
        vlSelf->__PVT__final_exp = vlSelf->__PVT__norm_exp;
        vlSelf->__PVT__rounded_mant = (0x7fffffU & __PVT__mant_rounded);
    }
}

VL_INLINE_OPT void Vnpu_core_top_fp32_adder___ico_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_core_top_fp32_adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_core_top_fp32_adder___ico_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0\n"); );
    // Init
    IData/*23:0*/ __PVT__large_mant;
    __PVT__large_mant = 0;
    IData/*23:0*/ __PVT__small_mant;
    __PVT__small_mant = 0;
    CData/*7:0*/ __PVT__exp_diff;
    __PVT__exp_diff = 0;
    CData/*0:0*/ __PVT__a_is_larger;
    __PVT__a_is_larger = 0;
    IData/*27:0*/ __PVT__mant_sum;
    __PVT__mant_sum = 0;
    CData/*4:0*/ __PVT__lzc;
    __PVT__lzc = 0;
    IData/*24:0*/ __PVT__mant_rounded;
    __PVT__mant_rounded = 0;
    IData/*23:0*/ __VdfgExtracted_hb7d58418__0;
    __VdfgExtracted_hb7d58418__0 = 0;
    // Body
    vlSelf->__PVT__b_is_inf = (IData)((0x7f800000U 
                                       == (0x7fffffffU 
                                           & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    vlSelf->__PVT__b_is_zero = (IData)((0U == (0x7fffffffU 
                                               & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __VdfgExtracted_hb7d58418__0 = ((0U == (0xffU & 
                                            (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U)))
                                     ? (0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)
                                     : (0x800000U | 
                                        (0x7fffffU 
                                         & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __PVT__a_is_larger = (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [0xcU][4U] >> 0x17U)) 
                           > (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                       >> 0x17U))) 
                          | (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                        [0xcU][4U] 
                                        >> 0x17U)) 
                              == (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x17U))) 
                             & ((0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xcU][4U]) >= (0x7fffffU 
                                                 & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))));
    if (__PVT__a_is_larger) {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                           [0xcU][4U] 
                                           >> 0x1fU));
        __PVT__large_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        __PVT__small_mant = __VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xcU]
                                             [4U] >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
    } else {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x1fU));
        __PVT__large_mant = __VdfgExtracted_hb7d58418__0;
        __PVT__small_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xcU]
                                             [4U] >> 0x17U));
    }
    __PVT__exp_diff = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                - (IData)(vlSelf->__PVT__small_exp)));
    if ((0U == (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (__PVT__small_mant 
                                        << 3U);
        vlSelf->__PVT__sticky_bit = 0U;
    } else if ((0x1bU > (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (0x7ffffffU 
                                        & VL_SHIFTR_III(27,27,8, 
                                                        (__PVT__small_mant 
                                                         << 3U), (IData)(__PVT__exp_diff)));
        vlSelf->__PVT__sticky_bit = (0U != ((__PVT__small_mant 
                                             << 3U) 
                                            & (VL_SHIFTL_III(27,27,8, (IData)(1U), (IData)(__PVT__exp_diff)) 
                                               - (IData)(1U))));
    } else {
        vlSelf->__PVT__aligned_small = 0U;
        vlSelf->__PVT__sticky_bit = (0U != __PVT__small_mant);
    }
    vlSelf->__PVT__aligned_small = ((0x7fffffeU & vlSelf->__PVT__aligned_small) 
                                    | (1U & (vlSelf->__PVT__aligned_small 
                                             | (IData)(vlSelf->__PVT__sticky_bit))));
    __PVT__mant_sum = (0xfffffffU & ((1U & ((IData)(vlSelf->__PVT__large_sign) 
                                            ^ ((IData)(__PVT__a_is_larger)
                                                ? (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                   >> 0x1fU)
                                                : (
                                                   vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [4U] 
                                                   >> 0x1fU))))
                                      ? ((__PVT__large_mant 
                                          << 3U) - vlSelf->__PVT__aligned_small)
                                      : ((__PVT__large_mant 
                                          << 3U) + vlSelf->__PVT__aligned_small)));
    __PVT__lzc = (((((((((0x8000000U == (0x8000000U 
                                         & __PVT__mant_sum)) 
                         | (0x4000000U == (0xc000000U 
                                           & __PVT__mant_sum))) 
                        | (0x2000000U == (0xe000000U 
                                          & __PVT__mant_sum))) 
                       | (0x1000000U == (0xf000000U 
                                         & __PVT__mant_sum))) 
                      | (0x800000U == (0xf800000U & __PVT__mant_sum))) 
                     | (0x400000U == (0xfc00000U & __PVT__mant_sum))) 
                    | (0x200000U == (0xfe00000U & __PVT__mant_sum))) 
                   | (0x100000U == (0xff00000U & __PVT__mant_sum)))
                   ? ((0x8000000U == (0x8000000U & __PVT__mant_sum))
                       ? 0U : ((0x4000000U == (0xc000000U 
                                               & __PVT__mant_sum))
                                ? 0U : ((0x2000000U 
                                         == (0xe000000U 
                                             & __PVT__mant_sum))
                                         ? 1U : ((0x1000000U 
                                                  == 
                                                  (0xf000000U 
                                                   & __PVT__mant_sum))
                                                  ? 2U
                                                  : 
                                                 ((0x800000U 
                                                   == 
                                                   (0xf800000U 
                                                    & __PVT__mant_sum))
                                                   ? 3U
                                                   : 
                                                  ((0x400000U 
                                                    == 
                                                    (0xfc00000U 
                                                     & __PVT__mant_sum))
                                                    ? 4U
                                                    : 
                                                   ((0x200000U 
                                                     == 
                                                     (0xfe00000U 
                                                      & __PVT__mant_sum))
                                                     ? 5U
                                                     : 6U)))))))
                   : (((((((((0x80000U == (0xff80000U 
                                           & __PVT__mant_sum)) 
                             | (0x40000U == (0xffc0000U 
                                             & __PVT__mant_sum))) 
                            | (0x20000U == (0xffe0000U 
                                            & __PVT__mant_sum))) 
                           | (0x10000U == (0xfff0000U 
                                           & __PVT__mant_sum))) 
                          | (0x8000U == (0xfff8000U 
                                         & __PVT__mant_sum))) 
                         | (0x4000U == (0xfffc000U 
                                        & __PVT__mant_sum))) 
                        | (0x2000U == (0xfffe000U & __PVT__mant_sum))) 
                       | (0x1000U == (0xffff000U & __PVT__mant_sum)))
                       ? ((0x80000U == (0xff80000U 
                                        & __PVT__mant_sum))
                           ? 7U : ((0x40000U == (0xffc0000U 
                                                 & __PVT__mant_sum))
                                    ? 8U : ((0x20000U 
                                             == (0xffe0000U 
                                                 & __PVT__mant_sum))
                                             ? 9U : 
                                            ((0x10000U 
                                              == (0xfff0000U 
                                                  & __PVT__mant_sum))
                                              ? 0xaU
                                              : ((0x8000U 
                                                  == 
                                                  (0xfff8000U 
                                                   & __PVT__mant_sum))
                                                  ? 0xbU
                                                  : 
                                                 ((0x4000U 
                                                   == 
                                                   (0xfffc000U 
                                                    & __PVT__mant_sum))
                                                   ? 0xcU
                                                   : 
                                                  ((0x2000U 
                                                    == 
                                                    (0xfffe000U 
                                                     & __PVT__mant_sum))
                                                    ? 0xdU
                                                    : 0xeU)))))))
                       : (((((((((0x800U == (0xffff800U 
                                             & __PVT__mant_sum)) 
                                 | (0x400U == (0xffffc00U 
                                               & __PVT__mant_sum))) 
                                | (0x200U == (0xffffe00U 
                                              & __PVT__mant_sum))) 
                               | (0x100U == (0xfffff00U 
                                             & __PVT__mant_sum))) 
                              | (0x80U == (0xfffff80U 
                                           & __PVT__mant_sum))) 
                             | (0x40U == (0xfffffc0U 
                                          & __PVT__mant_sum))) 
                            | (0x20U == (0xfffffe0U 
                                         & __PVT__mant_sum))) 
                           | (0x10U == (0xffffff0U 
                                        & __PVT__mant_sum)))
                           ? ((0x800U == (0xffff800U 
                                          & __PVT__mant_sum))
                               ? 0xfU : ((0x400U == 
                                          (0xffffc00U 
                                           & __PVT__mant_sum))
                                          ? 0x10U : 
                                         ((0x200U == 
                                           (0xffffe00U 
                                            & __PVT__mant_sum))
                                           ? 0x11U : 
                                          ((0x100U 
                                            == (0xfffff00U 
                                                & __PVT__mant_sum))
                                            ? 0x12U
                                            : ((0x80U 
                                                == 
                                                (0xfffff80U 
                                                 & __PVT__mant_sum))
                                                ? 0x13U
                                                : (
                                                   (0x40U 
                                                    == 
                                                    (0xfffffc0U 
                                                     & __PVT__mant_sum))
                                                    ? 0x14U
                                                    : 
                                                   ((0x20U 
                                                     == 
                                                     (0xfffffe0U 
                                                      & __PVT__mant_sum))
                                                     ? 0x15U
                                                     : 0x16U)))))))
                           : ((8U == (0xffffff8U & __PVT__mant_sum))
                               ? 0x17U : ((4U == (0xffffffcU 
                                                  & __PVT__mant_sum))
                                           ? 0x18U : 
                                          ((2U == (0xffffffeU 
                                                   & __PVT__mant_sum))
                                            ? 0x19U
                                            : ((1U 
                                                == __PVT__mant_sum)
                                                ? 0x1aU
                                                : 0x1bU)))))));
    if ((0x8000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  >> 1U));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__large_exp)));
    } else if ((0x4000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & __PVT__mant_sum);
        vlSelf->__PVT__norm_exp = (0xffU & (IData)(vlSelf->__PVT__large_exp));
    } else if (((0x1bU > (IData)(__PVT__lzc)) & ((IData)(vlSelf->__PVT__large_exp) 
                                                 > (IData)(__PVT__lzc)))) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  << (IData)(__PVT__lzc)));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                            - (IData)(__PVT__lzc)));
    } else {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & 0U);
        vlSelf->__PVT__norm_exp = (0xffU & 0U);
    }
    __PVT__mant_rounded = (0x1ffffffU & ((0xffffffU 
                                          & (vlSelf->__PVT__norm_mant 
                                             >> 3U)) 
                                         + (1U & ((vlSelf->__PVT__norm_mant 
                                                   >> 2U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0xbU 
                                                              & vlSelf->__PVT__norm_mant)))))));
    if ((0x1000000U & __PVT__mant_rounded)) {
        vlSelf->__PVT__final_exp = (0xffU & ((IData)(1U) 
                                             + (IData)(vlSelf->__PVT__norm_exp)));
        vlSelf->__PVT__rounded_mant = (0x7fffffU & 
                                       (__PVT__mant_rounded 
                                        >> 1U));
    } else {
        vlSelf->__PVT__final_exp = vlSelf->__PVT__norm_exp;
        vlSelf->__PVT__rounded_mant = (0x7fffffU & __PVT__mant_rounded);
    }
}

VL_INLINE_OPT void Vnpu_core_top_fp32_adder___nba_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_core_top_fp32_adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_core_top_fp32_adder___nba_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0\n"); );
    // Init
    IData/*23:0*/ __PVT__large_mant;
    __PVT__large_mant = 0;
    IData/*23:0*/ __PVT__small_mant;
    __PVT__small_mant = 0;
    CData/*7:0*/ __PVT__exp_diff;
    __PVT__exp_diff = 0;
    CData/*0:0*/ __PVT__a_is_larger;
    __PVT__a_is_larger = 0;
    IData/*27:0*/ __PVT__mant_sum;
    __PVT__mant_sum = 0;
    CData/*4:0*/ __PVT__lzc;
    __PVT__lzc = 0;
    IData/*24:0*/ __PVT__mant_rounded;
    __PVT__mant_rounded = 0;
    IData/*23:0*/ __VdfgExtracted_hb7d58418__0;
    __VdfgExtracted_hb7d58418__0 = 0;
    // Body
    vlSelf->__PVT__a_is_inf = ((0xffU == (0xffU & (
                                                   vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [4U] 
                                                   >> 0x17U))) 
                               & (0U == (0x7fffffU 
                                         & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xcU][4U])));
    if ((0U == (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                         [0xcU][4U] >> 0x17U)))) {
        vlSelf->__PVT__a_is_zero = (0U == (0x7fffffU 
                                           & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                           [0xcU][4U]));
        vlSelf->__VdfgExtracted_h18a3deab__0 = (0x7fffffU 
                                                & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xcU]
                                                [4U]);
    } else {
        vlSelf->__PVT__a_is_zero = 0U;
        vlSelf->__VdfgExtracted_h18a3deab__0 = (0x800000U 
                                                | (0x7fffffU 
                                                   & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [4U]));
    }
    vlSelf->__PVT__b_is_inf = (IData)((0x7f800000U 
                                       == (0x7fffffffU 
                                           & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    vlSelf->__PVT__b_is_zero = (IData)((0U == (0x7fffffffU 
                                               & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __VdfgExtracted_hb7d58418__0 = ((0U == (0xffU & 
                                            (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U)))
                                     ? (0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)
                                     : (0x800000U | 
                                        (0x7fffffU 
                                         & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __PVT__a_is_larger = (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [0xcU][4U] >> 0x17U)) 
                           > (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                       >> 0x17U))) 
                          | (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                        [0xcU][4U] 
                                        >> 0x17U)) 
                              == (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x17U))) 
                             & ((0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xcU][4U]) >= (0x7fffffU 
                                                 & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))));
    if (__PVT__a_is_larger) {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                           [0xcU][4U] 
                                           >> 0x1fU));
        __PVT__large_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        __PVT__small_mant = __VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xcU]
                                             [4U] >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
    } else {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x1fU));
        __PVT__large_mant = __VdfgExtracted_hb7d58418__0;
        __PVT__small_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xcU]
                                             [4U] >> 0x17U));
    }
    __PVT__exp_diff = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                - (IData)(vlSelf->__PVT__small_exp)));
    if ((0U == (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (__PVT__small_mant 
                                        << 3U);
        vlSelf->__PVT__sticky_bit = 0U;
    } else if ((0x1bU > (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (0x7ffffffU 
                                        & VL_SHIFTR_III(27,27,8, 
                                                        (__PVT__small_mant 
                                                         << 3U), (IData)(__PVT__exp_diff)));
        vlSelf->__PVT__sticky_bit = (0U != ((__PVT__small_mant 
                                             << 3U) 
                                            & (VL_SHIFTL_III(27,27,8, (IData)(1U), (IData)(__PVT__exp_diff)) 
                                               - (IData)(1U))));
    } else {
        vlSelf->__PVT__aligned_small = 0U;
        vlSelf->__PVT__sticky_bit = (0U != __PVT__small_mant);
    }
    vlSelf->__PVT__aligned_small = ((0x7fffffeU & vlSelf->__PVT__aligned_small) 
                                    | (1U & (vlSelf->__PVT__aligned_small 
                                             | (IData)(vlSelf->__PVT__sticky_bit))));
    __PVT__mant_sum = (0xfffffffU & ((1U & ((IData)(vlSelf->__PVT__large_sign) 
                                            ^ ((IData)(__PVT__a_is_larger)
                                                ? (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                   >> 0x1fU)
                                                : (
                                                   vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [4U] 
                                                   >> 0x1fU))))
                                      ? ((__PVT__large_mant 
                                          << 3U) - vlSelf->__PVT__aligned_small)
                                      : ((__PVT__large_mant 
                                          << 3U) + vlSelf->__PVT__aligned_small)));
    __PVT__lzc = (((((((((0x8000000U == (0x8000000U 
                                         & __PVT__mant_sum)) 
                         | (0x4000000U == (0xc000000U 
                                           & __PVT__mant_sum))) 
                        | (0x2000000U == (0xe000000U 
                                          & __PVT__mant_sum))) 
                       | (0x1000000U == (0xf000000U 
                                         & __PVT__mant_sum))) 
                      | (0x800000U == (0xf800000U & __PVT__mant_sum))) 
                     | (0x400000U == (0xfc00000U & __PVT__mant_sum))) 
                    | (0x200000U == (0xfe00000U & __PVT__mant_sum))) 
                   | (0x100000U == (0xff00000U & __PVT__mant_sum)))
                   ? ((0x8000000U == (0x8000000U & __PVT__mant_sum))
                       ? 0U : ((0x4000000U == (0xc000000U 
                                               & __PVT__mant_sum))
                                ? 0U : ((0x2000000U 
                                         == (0xe000000U 
                                             & __PVT__mant_sum))
                                         ? 1U : ((0x1000000U 
                                                  == 
                                                  (0xf000000U 
                                                   & __PVT__mant_sum))
                                                  ? 2U
                                                  : 
                                                 ((0x800000U 
                                                   == 
                                                   (0xf800000U 
                                                    & __PVT__mant_sum))
                                                   ? 3U
                                                   : 
                                                  ((0x400000U 
                                                    == 
                                                    (0xfc00000U 
                                                     & __PVT__mant_sum))
                                                    ? 4U
                                                    : 
                                                   ((0x200000U 
                                                     == 
                                                     (0xfe00000U 
                                                      & __PVT__mant_sum))
                                                     ? 5U
                                                     : 6U)))))))
                   : (((((((((0x80000U == (0xff80000U 
                                           & __PVT__mant_sum)) 
                             | (0x40000U == (0xffc0000U 
                                             & __PVT__mant_sum))) 
                            | (0x20000U == (0xffe0000U 
                                            & __PVT__mant_sum))) 
                           | (0x10000U == (0xfff0000U 
                                           & __PVT__mant_sum))) 
                          | (0x8000U == (0xfff8000U 
                                         & __PVT__mant_sum))) 
                         | (0x4000U == (0xfffc000U 
                                        & __PVT__mant_sum))) 
                        | (0x2000U == (0xfffe000U & __PVT__mant_sum))) 
                       | (0x1000U == (0xffff000U & __PVT__mant_sum)))
                       ? ((0x80000U == (0xff80000U 
                                        & __PVT__mant_sum))
                           ? 7U : ((0x40000U == (0xffc0000U 
                                                 & __PVT__mant_sum))
                                    ? 8U : ((0x20000U 
                                             == (0xffe0000U 
                                                 & __PVT__mant_sum))
                                             ? 9U : 
                                            ((0x10000U 
                                              == (0xfff0000U 
                                                  & __PVT__mant_sum))
                                              ? 0xaU
                                              : ((0x8000U 
                                                  == 
                                                  (0xfff8000U 
                                                   & __PVT__mant_sum))
                                                  ? 0xbU
                                                  : 
                                                 ((0x4000U 
                                                   == 
                                                   (0xfffc000U 
                                                    & __PVT__mant_sum))
                                                   ? 0xcU
                                                   : 
                                                  ((0x2000U 
                                                    == 
                                                    (0xfffe000U 
                                                     & __PVT__mant_sum))
                                                    ? 0xdU
                                                    : 0xeU)))))))
                       : (((((((((0x800U == (0xffff800U 
                                             & __PVT__mant_sum)) 
                                 | (0x400U == (0xffffc00U 
                                               & __PVT__mant_sum))) 
                                | (0x200U == (0xffffe00U 
                                              & __PVT__mant_sum))) 
                               | (0x100U == (0xfffff00U 
                                             & __PVT__mant_sum))) 
                              | (0x80U == (0xfffff80U 
                                           & __PVT__mant_sum))) 
                             | (0x40U == (0xfffffc0U 
                                          & __PVT__mant_sum))) 
                            | (0x20U == (0xfffffe0U 
                                         & __PVT__mant_sum))) 
                           | (0x10U == (0xffffff0U 
                                        & __PVT__mant_sum)))
                           ? ((0x800U == (0xffff800U 
                                          & __PVT__mant_sum))
                               ? 0xfU : ((0x400U == 
                                          (0xffffc00U 
                                           & __PVT__mant_sum))
                                          ? 0x10U : 
                                         ((0x200U == 
                                           (0xffffe00U 
                                            & __PVT__mant_sum))
                                           ? 0x11U : 
                                          ((0x100U 
                                            == (0xfffff00U 
                                                & __PVT__mant_sum))
                                            ? 0x12U
                                            : ((0x80U 
                                                == 
                                                (0xfffff80U 
                                                 & __PVT__mant_sum))
                                                ? 0x13U
                                                : (
                                                   (0x40U 
                                                    == 
                                                    (0xfffffc0U 
                                                     & __PVT__mant_sum))
                                                    ? 0x14U
                                                    : 
                                                   ((0x20U 
                                                     == 
                                                     (0xfffffe0U 
                                                      & __PVT__mant_sum))
                                                     ? 0x15U
                                                     : 0x16U)))))))
                           : ((8U == (0xffffff8U & __PVT__mant_sum))
                               ? 0x17U : ((4U == (0xffffffcU 
                                                  & __PVT__mant_sum))
                                           ? 0x18U : 
                                          ((2U == (0xffffffeU 
                                                   & __PVT__mant_sum))
                                            ? 0x19U
                                            : ((1U 
                                                == __PVT__mant_sum)
                                                ? 0x1aU
                                                : 0x1bU)))))));
    if ((0x8000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  >> 1U));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__large_exp)));
    } else if ((0x4000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & __PVT__mant_sum);
        vlSelf->__PVT__norm_exp = (0xffU & (IData)(vlSelf->__PVT__large_exp));
    } else if (((0x1bU > (IData)(__PVT__lzc)) & ((IData)(vlSelf->__PVT__large_exp) 
                                                 > (IData)(__PVT__lzc)))) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  << (IData)(__PVT__lzc)));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                            - (IData)(__PVT__lzc)));
    } else {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & 0U);
        vlSelf->__PVT__norm_exp = (0xffU & 0U);
    }
    __PVT__mant_rounded = (0x1ffffffU & ((0xffffffU 
                                          & (vlSelf->__PVT__norm_mant 
                                             >> 3U)) 
                                         + (1U & ((vlSelf->__PVT__norm_mant 
                                                   >> 2U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0xbU 
                                                              & vlSelf->__PVT__norm_mant)))))));
    if ((0x1000000U & __PVT__mant_rounded)) {
        vlSelf->__PVT__final_exp = (0xffU & ((IData)(1U) 
                                             + (IData)(vlSelf->__PVT__norm_exp)));
        vlSelf->__PVT__rounded_mant = (0x7fffffU & 
                                       (__PVT__mant_rounded 
                                        >> 1U));
    } else {
        vlSelf->__PVT__final_exp = vlSelf->__PVT__norm_exp;
        vlSelf->__PVT__rounded_mant = (0x7fffffU & __PVT__mant_rounded);
    }
}

VL_INLINE_OPT void Vnpu_core_top_fp32_adder___ico_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_core_top_fp32_adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_core_top_fp32_adder___ico_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0\n"); );
    // Init
    IData/*23:0*/ __PVT__large_mant;
    __PVT__large_mant = 0;
    IData/*23:0*/ __PVT__small_mant;
    __PVT__small_mant = 0;
    CData/*7:0*/ __PVT__exp_diff;
    __PVT__exp_diff = 0;
    CData/*0:0*/ __PVT__a_is_larger;
    __PVT__a_is_larger = 0;
    IData/*27:0*/ __PVT__mant_sum;
    __PVT__mant_sum = 0;
    CData/*4:0*/ __PVT__lzc;
    __PVT__lzc = 0;
    IData/*24:0*/ __PVT__mant_rounded;
    __PVT__mant_rounded = 0;
    IData/*23:0*/ __VdfgExtracted_hb7d58418__0;
    __VdfgExtracted_hb7d58418__0 = 0;
    // Body
    vlSelf->__PVT__b_is_inf = (IData)((0x7f800000U 
                                       == (0x7fffffffU 
                                           & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    vlSelf->__PVT__b_is_zero = (IData)((0U == (0x7fffffffU 
                                               & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __VdfgExtracted_hb7d58418__0 = ((0U == (0xffU & 
                                            (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U)))
                                     ? (0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)
                                     : (0x800000U | 
                                        (0x7fffffU 
                                         & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __PVT__a_is_larger = (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [0xcU][5U] >> 0x17U)) 
                           > (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                       >> 0x17U))) 
                          | (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                        [0xcU][5U] 
                                        >> 0x17U)) 
                              == (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x17U))) 
                             & ((0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xcU][5U]) >= (0x7fffffU 
                                                 & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))));
    if (__PVT__a_is_larger) {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                           [0xcU][5U] 
                                           >> 0x1fU));
        __PVT__large_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        __PVT__small_mant = __VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xcU]
                                             [5U] >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
    } else {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x1fU));
        __PVT__large_mant = __VdfgExtracted_hb7d58418__0;
        __PVT__small_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xcU]
                                             [5U] >> 0x17U));
    }
    __PVT__exp_diff = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                - (IData)(vlSelf->__PVT__small_exp)));
    if ((0U == (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (__PVT__small_mant 
                                        << 3U);
        vlSelf->__PVT__sticky_bit = 0U;
    } else if ((0x1bU > (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (0x7ffffffU 
                                        & VL_SHIFTR_III(27,27,8, 
                                                        (__PVT__small_mant 
                                                         << 3U), (IData)(__PVT__exp_diff)));
        vlSelf->__PVT__sticky_bit = (0U != ((__PVT__small_mant 
                                             << 3U) 
                                            & (VL_SHIFTL_III(27,27,8, (IData)(1U), (IData)(__PVT__exp_diff)) 
                                               - (IData)(1U))));
    } else {
        vlSelf->__PVT__aligned_small = 0U;
        vlSelf->__PVT__sticky_bit = (0U != __PVT__small_mant);
    }
    vlSelf->__PVT__aligned_small = ((0x7fffffeU & vlSelf->__PVT__aligned_small) 
                                    | (1U & (vlSelf->__PVT__aligned_small 
                                             | (IData)(vlSelf->__PVT__sticky_bit))));
    __PVT__mant_sum = (0xfffffffU & ((1U & ((IData)(vlSelf->__PVT__large_sign) 
                                            ^ ((IData)(__PVT__a_is_larger)
                                                ? (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                   >> 0x1fU)
                                                : (
                                                   vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [5U] 
                                                   >> 0x1fU))))
                                      ? ((__PVT__large_mant 
                                          << 3U) - vlSelf->__PVT__aligned_small)
                                      : ((__PVT__large_mant 
                                          << 3U) + vlSelf->__PVT__aligned_small)));
    __PVT__lzc = (((((((((0x8000000U == (0x8000000U 
                                         & __PVT__mant_sum)) 
                         | (0x4000000U == (0xc000000U 
                                           & __PVT__mant_sum))) 
                        | (0x2000000U == (0xe000000U 
                                          & __PVT__mant_sum))) 
                       | (0x1000000U == (0xf000000U 
                                         & __PVT__mant_sum))) 
                      | (0x800000U == (0xf800000U & __PVT__mant_sum))) 
                     | (0x400000U == (0xfc00000U & __PVT__mant_sum))) 
                    | (0x200000U == (0xfe00000U & __PVT__mant_sum))) 
                   | (0x100000U == (0xff00000U & __PVT__mant_sum)))
                   ? ((0x8000000U == (0x8000000U & __PVT__mant_sum))
                       ? 0U : ((0x4000000U == (0xc000000U 
                                               & __PVT__mant_sum))
                                ? 0U : ((0x2000000U 
                                         == (0xe000000U 
                                             & __PVT__mant_sum))
                                         ? 1U : ((0x1000000U 
                                                  == 
                                                  (0xf000000U 
                                                   & __PVT__mant_sum))
                                                  ? 2U
                                                  : 
                                                 ((0x800000U 
                                                   == 
                                                   (0xf800000U 
                                                    & __PVT__mant_sum))
                                                   ? 3U
                                                   : 
                                                  ((0x400000U 
                                                    == 
                                                    (0xfc00000U 
                                                     & __PVT__mant_sum))
                                                    ? 4U
                                                    : 
                                                   ((0x200000U 
                                                     == 
                                                     (0xfe00000U 
                                                      & __PVT__mant_sum))
                                                     ? 5U
                                                     : 6U)))))))
                   : (((((((((0x80000U == (0xff80000U 
                                           & __PVT__mant_sum)) 
                             | (0x40000U == (0xffc0000U 
                                             & __PVT__mant_sum))) 
                            | (0x20000U == (0xffe0000U 
                                            & __PVT__mant_sum))) 
                           | (0x10000U == (0xfff0000U 
                                           & __PVT__mant_sum))) 
                          | (0x8000U == (0xfff8000U 
                                         & __PVT__mant_sum))) 
                         | (0x4000U == (0xfffc000U 
                                        & __PVT__mant_sum))) 
                        | (0x2000U == (0xfffe000U & __PVT__mant_sum))) 
                       | (0x1000U == (0xffff000U & __PVT__mant_sum)))
                       ? ((0x80000U == (0xff80000U 
                                        & __PVT__mant_sum))
                           ? 7U : ((0x40000U == (0xffc0000U 
                                                 & __PVT__mant_sum))
                                    ? 8U : ((0x20000U 
                                             == (0xffe0000U 
                                                 & __PVT__mant_sum))
                                             ? 9U : 
                                            ((0x10000U 
                                              == (0xfff0000U 
                                                  & __PVT__mant_sum))
                                              ? 0xaU
                                              : ((0x8000U 
                                                  == 
                                                  (0xfff8000U 
                                                   & __PVT__mant_sum))
                                                  ? 0xbU
                                                  : 
                                                 ((0x4000U 
                                                   == 
                                                   (0xfffc000U 
                                                    & __PVT__mant_sum))
                                                   ? 0xcU
                                                   : 
                                                  ((0x2000U 
                                                    == 
                                                    (0xfffe000U 
                                                     & __PVT__mant_sum))
                                                    ? 0xdU
                                                    : 0xeU)))))))
                       : (((((((((0x800U == (0xffff800U 
                                             & __PVT__mant_sum)) 
                                 | (0x400U == (0xffffc00U 
                                               & __PVT__mant_sum))) 
                                | (0x200U == (0xffffe00U 
                                              & __PVT__mant_sum))) 
                               | (0x100U == (0xfffff00U 
                                             & __PVT__mant_sum))) 
                              | (0x80U == (0xfffff80U 
                                           & __PVT__mant_sum))) 
                             | (0x40U == (0xfffffc0U 
                                          & __PVT__mant_sum))) 
                            | (0x20U == (0xfffffe0U 
                                         & __PVT__mant_sum))) 
                           | (0x10U == (0xffffff0U 
                                        & __PVT__mant_sum)))
                           ? ((0x800U == (0xffff800U 
                                          & __PVT__mant_sum))
                               ? 0xfU : ((0x400U == 
                                          (0xffffc00U 
                                           & __PVT__mant_sum))
                                          ? 0x10U : 
                                         ((0x200U == 
                                           (0xffffe00U 
                                            & __PVT__mant_sum))
                                           ? 0x11U : 
                                          ((0x100U 
                                            == (0xfffff00U 
                                                & __PVT__mant_sum))
                                            ? 0x12U
                                            : ((0x80U 
                                                == 
                                                (0xfffff80U 
                                                 & __PVT__mant_sum))
                                                ? 0x13U
                                                : (
                                                   (0x40U 
                                                    == 
                                                    (0xfffffc0U 
                                                     & __PVT__mant_sum))
                                                    ? 0x14U
                                                    : 
                                                   ((0x20U 
                                                     == 
                                                     (0xfffffe0U 
                                                      & __PVT__mant_sum))
                                                     ? 0x15U
                                                     : 0x16U)))))))
                           : ((8U == (0xffffff8U & __PVT__mant_sum))
                               ? 0x17U : ((4U == (0xffffffcU 
                                                  & __PVT__mant_sum))
                                           ? 0x18U : 
                                          ((2U == (0xffffffeU 
                                                   & __PVT__mant_sum))
                                            ? 0x19U
                                            : ((1U 
                                                == __PVT__mant_sum)
                                                ? 0x1aU
                                                : 0x1bU)))))));
    if ((0x8000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  >> 1U));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__large_exp)));
    } else if ((0x4000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & __PVT__mant_sum);
        vlSelf->__PVT__norm_exp = (0xffU & (IData)(vlSelf->__PVT__large_exp));
    } else if (((0x1bU > (IData)(__PVT__lzc)) & ((IData)(vlSelf->__PVT__large_exp) 
                                                 > (IData)(__PVT__lzc)))) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  << (IData)(__PVT__lzc)));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                            - (IData)(__PVT__lzc)));
    } else {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & 0U);
        vlSelf->__PVT__norm_exp = (0xffU & 0U);
    }
    __PVT__mant_rounded = (0x1ffffffU & ((0xffffffU 
                                          & (vlSelf->__PVT__norm_mant 
                                             >> 3U)) 
                                         + (1U & ((vlSelf->__PVT__norm_mant 
                                                   >> 2U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0xbU 
                                                              & vlSelf->__PVT__norm_mant)))))));
    if ((0x1000000U & __PVT__mant_rounded)) {
        vlSelf->__PVT__final_exp = (0xffU & ((IData)(1U) 
                                             + (IData)(vlSelf->__PVT__norm_exp)));
        vlSelf->__PVT__rounded_mant = (0x7fffffU & 
                                       (__PVT__mant_rounded 
                                        >> 1U));
    } else {
        vlSelf->__PVT__final_exp = vlSelf->__PVT__norm_exp;
        vlSelf->__PVT__rounded_mant = (0x7fffffU & __PVT__mant_rounded);
    }
}

VL_INLINE_OPT void Vnpu_core_top_fp32_adder___nba_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_core_top_fp32_adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_core_top_fp32_adder___nba_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0\n"); );
    // Init
    IData/*23:0*/ __PVT__large_mant;
    __PVT__large_mant = 0;
    IData/*23:0*/ __PVT__small_mant;
    __PVT__small_mant = 0;
    CData/*7:0*/ __PVT__exp_diff;
    __PVT__exp_diff = 0;
    CData/*0:0*/ __PVT__a_is_larger;
    __PVT__a_is_larger = 0;
    IData/*27:0*/ __PVT__mant_sum;
    __PVT__mant_sum = 0;
    CData/*4:0*/ __PVT__lzc;
    __PVT__lzc = 0;
    IData/*24:0*/ __PVT__mant_rounded;
    __PVT__mant_rounded = 0;
    IData/*23:0*/ __VdfgExtracted_hb7d58418__0;
    __VdfgExtracted_hb7d58418__0 = 0;
    // Body
    vlSelf->__PVT__a_is_inf = ((0xffU == (0xffU & (
                                                   vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [5U] 
                                                   >> 0x17U))) 
                               & (0U == (0x7fffffU 
                                         & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xcU][5U])));
    if ((0U == (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                         [0xcU][5U] >> 0x17U)))) {
        vlSelf->__PVT__a_is_zero = (0U == (0x7fffffU 
                                           & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                           [0xcU][5U]));
        vlSelf->__VdfgExtracted_h18a3deab__0 = (0x7fffffU 
                                                & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xcU]
                                                [5U]);
    } else {
        vlSelf->__PVT__a_is_zero = 0U;
        vlSelf->__VdfgExtracted_h18a3deab__0 = (0x800000U 
                                                | (0x7fffffU 
                                                   & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [5U]));
    }
    vlSelf->__PVT__b_is_inf = (IData)((0x7f800000U 
                                       == (0x7fffffffU 
                                           & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    vlSelf->__PVT__b_is_zero = (IData)((0U == (0x7fffffffU 
                                               & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __VdfgExtracted_hb7d58418__0 = ((0U == (0xffU & 
                                            (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U)))
                                     ? (0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)
                                     : (0x800000U | 
                                        (0x7fffffU 
                                         & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __PVT__a_is_larger = (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [0xcU][5U] >> 0x17U)) 
                           > (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                       >> 0x17U))) 
                          | (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                        [0xcU][5U] 
                                        >> 0x17U)) 
                              == (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x17U))) 
                             & ((0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xcU][5U]) >= (0x7fffffU 
                                                 & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))));
    if (__PVT__a_is_larger) {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                           [0xcU][5U] 
                                           >> 0x1fU));
        __PVT__large_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        __PVT__small_mant = __VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xcU]
                                             [5U] >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
    } else {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x1fU));
        __PVT__large_mant = __VdfgExtracted_hb7d58418__0;
        __PVT__small_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xcU]
                                             [5U] >> 0x17U));
    }
    __PVT__exp_diff = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                - (IData)(vlSelf->__PVT__small_exp)));
    if ((0U == (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (__PVT__small_mant 
                                        << 3U);
        vlSelf->__PVT__sticky_bit = 0U;
    } else if ((0x1bU > (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (0x7ffffffU 
                                        & VL_SHIFTR_III(27,27,8, 
                                                        (__PVT__small_mant 
                                                         << 3U), (IData)(__PVT__exp_diff)));
        vlSelf->__PVT__sticky_bit = (0U != ((__PVT__small_mant 
                                             << 3U) 
                                            & (VL_SHIFTL_III(27,27,8, (IData)(1U), (IData)(__PVT__exp_diff)) 
                                               - (IData)(1U))));
    } else {
        vlSelf->__PVT__aligned_small = 0U;
        vlSelf->__PVT__sticky_bit = (0U != __PVT__small_mant);
    }
    vlSelf->__PVT__aligned_small = ((0x7fffffeU & vlSelf->__PVT__aligned_small) 
                                    | (1U & (vlSelf->__PVT__aligned_small 
                                             | (IData)(vlSelf->__PVT__sticky_bit))));
    __PVT__mant_sum = (0xfffffffU & ((1U & ((IData)(vlSelf->__PVT__large_sign) 
                                            ^ ((IData)(__PVT__a_is_larger)
                                                ? (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                   >> 0x1fU)
                                                : (
                                                   vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [5U] 
                                                   >> 0x1fU))))
                                      ? ((__PVT__large_mant 
                                          << 3U) - vlSelf->__PVT__aligned_small)
                                      : ((__PVT__large_mant 
                                          << 3U) + vlSelf->__PVT__aligned_small)));
    __PVT__lzc = (((((((((0x8000000U == (0x8000000U 
                                         & __PVT__mant_sum)) 
                         | (0x4000000U == (0xc000000U 
                                           & __PVT__mant_sum))) 
                        | (0x2000000U == (0xe000000U 
                                          & __PVT__mant_sum))) 
                       | (0x1000000U == (0xf000000U 
                                         & __PVT__mant_sum))) 
                      | (0x800000U == (0xf800000U & __PVT__mant_sum))) 
                     | (0x400000U == (0xfc00000U & __PVT__mant_sum))) 
                    | (0x200000U == (0xfe00000U & __PVT__mant_sum))) 
                   | (0x100000U == (0xff00000U & __PVT__mant_sum)))
                   ? ((0x8000000U == (0x8000000U & __PVT__mant_sum))
                       ? 0U : ((0x4000000U == (0xc000000U 
                                               & __PVT__mant_sum))
                                ? 0U : ((0x2000000U 
                                         == (0xe000000U 
                                             & __PVT__mant_sum))
                                         ? 1U : ((0x1000000U 
                                                  == 
                                                  (0xf000000U 
                                                   & __PVT__mant_sum))
                                                  ? 2U
                                                  : 
                                                 ((0x800000U 
                                                   == 
                                                   (0xf800000U 
                                                    & __PVT__mant_sum))
                                                   ? 3U
                                                   : 
                                                  ((0x400000U 
                                                    == 
                                                    (0xfc00000U 
                                                     & __PVT__mant_sum))
                                                    ? 4U
                                                    : 
                                                   ((0x200000U 
                                                     == 
                                                     (0xfe00000U 
                                                      & __PVT__mant_sum))
                                                     ? 5U
                                                     : 6U)))))))
                   : (((((((((0x80000U == (0xff80000U 
                                           & __PVT__mant_sum)) 
                             | (0x40000U == (0xffc0000U 
                                             & __PVT__mant_sum))) 
                            | (0x20000U == (0xffe0000U 
                                            & __PVT__mant_sum))) 
                           | (0x10000U == (0xfff0000U 
                                           & __PVT__mant_sum))) 
                          | (0x8000U == (0xfff8000U 
                                         & __PVT__mant_sum))) 
                         | (0x4000U == (0xfffc000U 
                                        & __PVT__mant_sum))) 
                        | (0x2000U == (0xfffe000U & __PVT__mant_sum))) 
                       | (0x1000U == (0xffff000U & __PVT__mant_sum)))
                       ? ((0x80000U == (0xff80000U 
                                        & __PVT__mant_sum))
                           ? 7U : ((0x40000U == (0xffc0000U 
                                                 & __PVT__mant_sum))
                                    ? 8U : ((0x20000U 
                                             == (0xffe0000U 
                                                 & __PVT__mant_sum))
                                             ? 9U : 
                                            ((0x10000U 
                                              == (0xfff0000U 
                                                  & __PVT__mant_sum))
                                              ? 0xaU
                                              : ((0x8000U 
                                                  == 
                                                  (0xfff8000U 
                                                   & __PVT__mant_sum))
                                                  ? 0xbU
                                                  : 
                                                 ((0x4000U 
                                                   == 
                                                   (0xfffc000U 
                                                    & __PVT__mant_sum))
                                                   ? 0xcU
                                                   : 
                                                  ((0x2000U 
                                                    == 
                                                    (0xfffe000U 
                                                     & __PVT__mant_sum))
                                                    ? 0xdU
                                                    : 0xeU)))))))
                       : (((((((((0x800U == (0xffff800U 
                                             & __PVT__mant_sum)) 
                                 | (0x400U == (0xffffc00U 
                                               & __PVT__mant_sum))) 
                                | (0x200U == (0xffffe00U 
                                              & __PVT__mant_sum))) 
                               | (0x100U == (0xfffff00U 
                                             & __PVT__mant_sum))) 
                              | (0x80U == (0xfffff80U 
                                           & __PVT__mant_sum))) 
                             | (0x40U == (0xfffffc0U 
                                          & __PVT__mant_sum))) 
                            | (0x20U == (0xfffffe0U 
                                         & __PVT__mant_sum))) 
                           | (0x10U == (0xffffff0U 
                                        & __PVT__mant_sum)))
                           ? ((0x800U == (0xffff800U 
                                          & __PVT__mant_sum))
                               ? 0xfU : ((0x400U == 
                                          (0xffffc00U 
                                           & __PVT__mant_sum))
                                          ? 0x10U : 
                                         ((0x200U == 
                                           (0xffffe00U 
                                            & __PVT__mant_sum))
                                           ? 0x11U : 
                                          ((0x100U 
                                            == (0xfffff00U 
                                                & __PVT__mant_sum))
                                            ? 0x12U
                                            : ((0x80U 
                                                == 
                                                (0xfffff80U 
                                                 & __PVT__mant_sum))
                                                ? 0x13U
                                                : (
                                                   (0x40U 
                                                    == 
                                                    (0xfffffc0U 
                                                     & __PVT__mant_sum))
                                                    ? 0x14U
                                                    : 
                                                   ((0x20U 
                                                     == 
                                                     (0xfffffe0U 
                                                      & __PVT__mant_sum))
                                                     ? 0x15U
                                                     : 0x16U)))))))
                           : ((8U == (0xffffff8U & __PVT__mant_sum))
                               ? 0x17U : ((4U == (0xffffffcU 
                                                  & __PVT__mant_sum))
                                           ? 0x18U : 
                                          ((2U == (0xffffffeU 
                                                   & __PVT__mant_sum))
                                            ? 0x19U
                                            : ((1U 
                                                == __PVT__mant_sum)
                                                ? 0x1aU
                                                : 0x1bU)))))));
    if ((0x8000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  >> 1U));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__large_exp)));
    } else if ((0x4000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & __PVT__mant_sum);
        vlSelf->__PVT__norm_exp = (0xffU & (IData)(vlSelf->__PVT__large_exp));
    } else if (((0x1bU > (IData)(__PVT__lzc)) & ((IData)(vlSelf->__PVT__large_exp) 
                                                 > (IData)(__PVT__lzc)))) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  << (IData)(__PVT__lzc)));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                            - (IData)(__PVT__lzc)));
    } else {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & 0U);
        vlSelf->__PVT__norm_exp = (0xffU & 0U);
    }
    __PVT__mant_rounded = (0x1ffffffU & ((0xffffffU 
                                          & (vlSelf->__PVT__norm_mant 
                                             >> 3U)) 
                                         + (1U & ((vlSelf->__PVT__norm_mant 
                                                   >> 2U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0xbU 
                                                              & vlSelf->__PVT__norm_mant)))))));
    if ((0x1000000U & __PVT__mant_rounded)) {
        vlSelf->__PVT__final_exp = (0xffU & ((IData)(1U) 
                                             + (IData)(vlSelf->__PVT__norm_exp)));
        vlSelf->__PVT__rounded_mant = (0x7fffffU & 
                                       (__PVT__mant_rounded 
                                        >> 1U));
    } else {
        vlSelf->__PVT__final_exp = vlSelf->__PVT__norm_exp;
        vlSelf->__PVT__rounded_mant = (0x7fffffU & __PVT__mant_rounded);
    }
}

VL_INLINE_OPT void Vnpu_core_top_fp32_adder___ico_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_core_top_fp32_adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_core_top_fp32_adder___ico_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0\n"); );
    // Init
    IData/*23:0*/ __PVT__large_mant;
    __PVT__large_mant = 0;
    IData/*23:0*/ __PVT__small_mant;
    __PVT__small_mant = 0;
    CData/*7:0*/ __PVT__exp_diff;
    __PVT__exp_diff = 0;
    CData/*0:0*/ __PVT__a_is_larger;
    __PVT__a_is_larger = 0;
    IData/*27:0*/ __PVT__mant_sum;
    __PVT__mant_sum = 0;
    CData/*4:0*/ __PVT__lzc;
    __PVT__lzc = 0;
    IData/*24:0*/ __PVT__mant_rounded;
    __PVT__mant_rounded = 0;
    IData/*23:0*/ __VdfgExtracted_hb7d58418__0;
    __VdfgExtracted_hb7d58418__0 = 0;
    // Body
    vlSelf->__PVT__b_is_inf = (IData)((0x7f800000U 
                                       == (0x7fffffffU 
                                           & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    vlSelf->__PVT__b_is_zero = (IData)((0U == (0x7fffffffU 
                                               & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __VdfgExtracted_hb7d58418__0 = ((0U == (0xffU & 
                                            (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U)))
                                     ? (0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)
                                     : (0x800000U | 
                                        (0x7fffffU 
                                         & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __PVT__a_is_larger = (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [0xcU][6U] >> 0x17U)) 
                           > (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                       >> 0x17U))) 
                          | (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                        [0xcU][6U] 
                                        >> 0x17U)) 
                              == (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x17U))) 
                             & ((0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xcU][6U]) >= (0x7fffffU 
                                                 & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))));
    if (__PVT__a_is_larger) {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                           [0xcU][6U] 
                                           >> 0x1fU));
        __PVT__large_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        __PVT__small_mant = __VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xcU]
                                             [6U] >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
    } else {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x1fU));
        __PVT__large_mant = __VdfgExtracted_hb7d58418__0;
        __PVT__small_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xcU]
                                             [6U] >> 0x17U));
    }
    __PVT__exp_diff = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                - (IData)(vlSelf->__PVT__small_exp)));
    if ((0U == (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (__PVT__small_mant 
                                        << 3U);
        vlSelf->__PVT__sticky_bit = 0U;
    } else if ((0x1bU > (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (0x7ffffffU 
                                        & VL_SHIFTR_III(27,27,8, 
                                                        (__PVT__small_mant 
                                                         << 3U), (IData)(__PVT__exp_diff)));
        vlSelf->__PVT__sticky_bit = (0U != ((__PVT__small_mant 
                                             << 3U) 
                                            & (VL_SHIFTL_III(27,27,8, (IData)(1U), (IData)(__PVT__exp_diff)) 
                                               - (IData)(1U))));
    } else {
        vlSelf->__PVT__aligned_small = 0U;
        vlSelf->__PVT__sticky_bit = (0U != __PVT__small_mant);
    }
    vlSelf->__PVT__aligned_small = ((0x7fffffeU & vlSelf->__PVT__aligned_small) 
                                    | (1U & (vlSelf->__PVT__aligned_small 
                                             | (IData)(vlSelf->__PVT__sticky_bit))));
    __PVT__mant_sum = (0xfffffffU & ((1U & ((IData)(vlSelf->__PVT__large_sign) 
                                            ^ ((IData)(__PVT__a_is_larger)
                                                ? (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                   >> 0x1fU)
                                                : (
                                                   vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [6U] 
                                                   >> 0x1fU))))
                                      ? ((__PVT__large_mant 
                                          << 3U) - vlSelf->__PVT__aligned_small)
                                      : ((__PVT__large_mant 
                                          << 3U) + vlSelf->__PVT__aligned_small)));
    __PVT__lzc = (((((((((0x8000000U == (0x8000000U 
                                         & __PVT__mant_sum)) 
                         | (0x4000000U == (0xc000000U 
                                           & __PVT__mant_sum))) 
                        | (0x2000000U == (0xe000000U 
                                          & __PVT__mant_sum))) 
                       | (0x1000000U == (0xf000000U 
                                         & __PVT__mant_sum))) 
                      | (0x800000U == (0xf800000U & __PVT__mant_sum))) 
                     | (0x400000U == (0xfc00000U & __PVT__mant_sum))) 
                    | (0x200000U == (0xfe00000U & __PVT__mant_sum))) 
                   | (0x100000U == (0xff00000U & __PVT__mant_sum)))
                   ? ((0x8000000U == (0x8000000U & __PVT__mant_sum))
                       ? 0U : ((0x4000000U == (0xc000000U 
                                               & __PVT__mant_sum))
                                ? 0U : ((0x2000000U 
                                         == (0xe000000U 
                                             & __PVT__mant_sum))
                                         ? 1U : ((0x1000000U 
                                                  == 
                                                  (0xf000000U 
                                                   & __PVT__mant_sum))
                                                  ? 2U
                                                  : 
                                                 ((0x800000U 
                                                   == 
                                                   (0xf800000U 
                                                    & __PVT__mant_sum))
                                                   ? 3U
                                                   : 
                                                  ((0x400000U 
                                                    == 
                                                    (0xfc00000U 
                                                     & __PVT__mant_sum))
                                                    ? 4U
                                                    : 
                                                   ((0x200000U 
                                                     == 
                                                     (0xfe00000U 
                                                      & __PVT__mant_sum))
                                                     ? 5U
                                                     : 6U)))))))
                   : (((((((((0x80000U == (0xff80000U 
                                           & __PVT__mant_sum)) 
                             | (0x40000U == (0xffc0000U 
                                             & __PVT__mant_sum))) 
                            | (0x20000U == (0xffe0000U 
                                            & __PVT__mant_sum))) 
                           | (0x10000U == (0xfff0000U 
                                           & __PVT__mant_sum))) 
                          | (0x8000U == (0xfff8000U 
                                         & __PVT__mant_sum))) 
                         | (0x4000U == (0xfffc000U 
                                        & __PVT__mant_sum))) 
                        | (0x2000U == (0xfffe000U & __PVT__mant_sum))) 
                       | (0x1000U == (0xffff000U & __PVT__mant_sum)))
                       ? ((0x80000U == (0xff80000U 
                                        & __PVT__mant_sum))
                           ? 7U : ((0x40000U == (0xffc0000U 
                                                 & __PVT__mant_sum))
                                    ? 8U : ((0x20000U 
                                             == (0xffe0000U 
                                                 & __PVT__mant_sum))
                                             ? 9U : 
                                            ((0x10000U 
                                              == (0xfff0000U 
                                                  & __PVT__mant_sum))
                                              ? 0xaU
                                              : ((0x8000U 
                                                  == 
                                                  (0xfff8000U 
                                                   & __PVT__mant_sum))
                                                  ? 0xbU
                                                  : 
                                                 ((0x4000U 
                                                   == 
                                                   (0xfffc000U 
                                                    & __PVT__mant_sum))
                                                   ? 0xcU
                                                   : 
                                                  ((0x2000U 
                                                    == 
                                                    (0xfffe000U 
                                                     & __PVT__mant_sum))
                                                    ? 0xdU
                                                    : 0xeU)))))))
                       : (((((((((0x800U == (0xffff800U 
                                             & __PVT__mant_sum)) 
                                 | (0x400U == (0xffffc00U 
                                               & __PVT__mant_sum))) 
                                | (0x200U == (0xffffe00U 
                                              & __PVT__mant_sum))) 
                               | (0x100U == (0xfffff00U 
                                             & __PVT__mant_sum))) 
                              | (0x80U == (0xfffff80U 
                                           & __PVT__mant_sum))) 
                             | (0x40U == (0xfffffc0U 
                                          & __PVT__mant_sum))) 
                            | (0x20U == (0xfffffe0U 
                                         & __PVT__mant_sum))) 
                           | (0x10U == (0xffffff0U 
                                        & __PVT__mant_sum)))
                           ? ((0x800U == (0xffff800U 
                                          & __PVT__mant_sum))
                               ? 0xfU : ((0x400U == 
                                          (0xffffc00U 
                                           & __PVT__mant_sum))
                                          ? 0x10U : 
                                         ((0x200U == 
                                           (0xffffe00U 
                                            & __PVT__mant_sum))
                                           ? 0x11U : 
                                          ((0x100U 
                                            == (0xfffff00U 
                                                & __PVT__mant_sum))
                                            ? 0x12U
                                            : ((0x80U 
                                                == 
                                                (0xfffff80U 
                                                 & __PVT__mant_sum))
                                                ? 0x13U
                                                : (
                                                   (0x40U 
                                                    == 
                                                    (0xfffffc0U 
                                                     & __PVT__mant_sum))
                                                    ? 0x14U
                                                    : 
                                                   ((0x20U 
                                                     == 
                                                     (0xfffffe0U 
                                                      & __PVT__mant_sum))
                                                     ? 0x15U
                                                     : 0x16U)))))))
                           : ((8U == (0xffffff8U & __PVT__mant_sum))
                               ? 0x17U : ((4U == (0xffffffcU 
                                                  & __PVT__mant_sum))
                                           ? 0x18U : 
                                          ((2U == (0xffffffeU 
                                                   & __PVT__mant_sum))
                                            ? 0x19U
                                            : ((1U 
                                                == __PVT__mant_sum)
                                                ? 0x1aU
                                                : 0x1bU)))))));
    if ((0x8000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  >> 1U));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__large_exp)));
    } else if ((0x4000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & __PVT__mant_sum);
        vlSelf->__PVT__norm_exp = (0xffU & (IData)(vlSelf->__PVT__large_exp));
    } else if (((0x1bU > (IData)(__PVT__lzc)) & ((IData)(vlSelf->__PVT__large_exp) 
                                                 > (IData)(__PVT__lzc)))) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  << (IData)(__PVT__lzc)));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                            - (IData)(__PVT__lzc)));
    } else {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & 0U);
        vlSelf->__PVT__norm_exp = (0xffU & 0U);
    }
    __PVT__mant_rounded = (0x1ffffffU & ((0xffffffU 
                                          & (vlSelf->__PVT__norm_mant 
                                             >> 3U)) 
                                         + (1U & ((vlSelf->__PVT__norm_mant 
                                                   >> 2U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0xbU 
                                                              & vlSelf->__PVT__norm_mant)))))));
    if ((0x1000000U & __PVT__mant_rounded)) {
        vlSelf->__PVT__final_exp = (0xffU & ((IData)(1U) 
                                             + (IData)(vlSelf->__PVT__norm_exp)));
        vlSelf->__PVT__rounded_mant = (0x7fffffU & 
                                       (__PVT__mant_rounded 
                                        >> 1U));
    } else {
        vlSelf->__PVT__final_exp = vlSelf->__PVT__norm_exp;
        vlSelf->__PVT__rounded_mant = (0x7fffffU & __PVT__mant_rounded);
    }
}

VL_INLINE_OPT void Vnpu_core_top_fp32_adder___nba_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_core_top_fp32_adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_core_top_fp32_adder___nba_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0\n"); );
    // Init
    IData/*23:0*/ __PVT__large_mant;
    __PVT__large_mant = 0;
    IData/*23:0*/ __PVT__small_mant;
    __PVT__small_mant = 0;
    CData/*7:0*/ __PVT__exp_diff;
    __PVT__exp_diff = 0;
    CData/*0:0*/ __PVT__a_is_larger;
    __PVT__a_is_larger = 0;
    IData/*27:0*/ __PVT__mant_sum;
    __PVT__mant_sum = 0;
    CData/*4:0*/ __PVT__lzc;
    __PVT__lzc = 0;
    IData/*24:0*/ __PVT__mant_rounded;
    __PVT__mant_rounded = 0;
    IData/*23:0*/ __VdfgExtracted_hb7d58418__0;
    __VdfgExtracted_hb7d58418__0 = 0;
    // Body
    vlSelf->__PVT__a_is_inf = ((0xffU == (0xffU & (
                                                   vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [6U] 
                                                   >> 0x17U))) 
                               & (0U == (0x7fffffU 
                                         & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xcU][6U])));
    if ((0U == (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                         [0xcU][6U] >> 0x17U)))) {
        vlSelf->__PVT__a_is_zero = (0U == (0x7fffffU 
                                           & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                           [0xcU][6U]));
        vlSelf->__VdfgExtracted_h18a3deab__0 = (0x7fffffU 
                                                & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xcU]
                                                [6U]);
    } else {
        vlSelf->__PVT__a_is_zero = 0U;
        vlSelf->__VdfgExtracted_h18a3deab__0 = (0x800000U 
                                                | (0x7fffffU 
                                                   & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [6U]));
    }
    vlSelf->__PVT__b_is_inf = (IData)((0x7f800000U 
                                       == (0x7fffffffU 
                                           & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    vlSelf->__PVT__b_is_zero = (IData)((0U == (0x7fffffffU 
                                               & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __VdfgExtracted_hb7d58418__0 = ((0U == (0xffU & 
                                            (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U)))
                                     ? (0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)
                                     : (0x800000U | 
                                        (0x7fffffU 
                                         & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __PVT__a_is_larger = (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [0xcU][6U] >> 0x17U)) 
                           > (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                       >> 0x17U))) 
                          | (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                        [0xcU][6U] 
                                        >> 0x17U)) 
                              == (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x17U))) 
                             & ((0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xcU][6U]) >= (0x7fffffU 
                                                 & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))));
    if (__PVT__a_is_larger) {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                           [0xcU][6U] 
                                           >> 0x1fU));
        __PVT__large_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        __PVT__small_mant = __VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xcU]
                                             [6U] >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
    } else {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x1fU));
        __PVT__large_mant = __VdfgExtracted_hb7d58418__0;
        __PVT__small_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xcU]
                                             [6U] >> 0x17U));
    }
    __PVT__exp_diff = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                - (IData)(vlSelf->__PVT__small_exp)));
    if ((0U == (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (__PVT__small_mant 
                                        << 3U);
        vlSelf->__PVT__sticky_bit = 0U;
    } else if ((0x1bU > (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (0x7ffffffU 
                                        & VL_SHIFTR_III(27,27,8, 
                                                        (__PVT__small_mant 
                                                         << 3U), (IData)(__PVT__exp_diff)));
        vlSelf->__PVT__sticky_bit = (0U != ((__PVT__small_mant 
                                             << 3U) 
                                            & (VL_SHIFTL_III(27,27,8, (IData)(1U), (IData)(__PVT__exp_diff)) 
                                               - (IData)(1U))));
    } else {
        vlSelf->__PVT__aligned_small = 0U;
        vlSelf->__PVT__sticky_bit = (0U != __PVT__small_mant);
    }
    vlSelf->__PVT__aligned_small = ((0x7fffffeU & vlSelf->__PVT__aligned_small) 
                                    | (1U & (vlSelf->__PVT__aligned_small 
                                             | (IData)(vlSelf->__PVT__sticky_bit))));
    __PVT__mant_sum = (0xfffffffU & ((1U & ((IData)(vlSelf->__PVT__large_sign) 
                                            ^ ((IData)(__PVT__a_is_larger)
                                                ? (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                   >> 0x1fU)
                                                : (
                                                   vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [6U] 
                                                   >> 0x1fU))))
                                      ? ((__PVT__large_mant 
                                          << 3U) - vlSelf->__PVT__aligned_small)
                                      : ((__PVT__large_mant 
                                          << 3U) + vlSelf->__PVT__aligned_small)));
    __PVT__lzc = (((((((((0x8000000U == (0x8000000U 
                                         & __PVT__mant_sum)) 
                         | (0x4000000U == (0xc000000U 
                                           & __PVT__mant_sum))) 
                        | (0x2000000U == (0xe000000U 
                                          & __PVT__mant_sum))) 
                       | (0x1000000U == (0xf000000U 
                                         & __PVT__mant_sum))) 
                      | (0x800000U == (0xf800000U & __PVT__mant_sum))) 
                     | (0x400000U == (0xfc00000U & __PVT__mant_sum))) 
                    | (0x200000U == (0xfe00000U & __PVT__mant_sum))) 
                   | (0x100000U == (0xff00000U & __PVT__mant_sum)))
                   ? ((0x8000000U == (0x8000000U & __PVT__mant_sum))
                       ? 0U : ((0x4000000U == (0xc000000U 
                                               & __PVT__mant_sum))
                                ? 0U : ((0x2000000U 
                                         == (0xe000000U 
                                             & __PVT__mant_sum))
                                         ? 1U : ((0x1000000U 
                                                  == 
                                                  (0xf000000U 
                                                   & __PVT__mant_sum))
                                                  ? 2U
                                                  : 
                                                 ((0x800000U 
                                                   == 
                                                   (0xf800000U 
                                                    & __PVT__mant_sum))
                                                   ? 3U
                                                   : 
                                                  ((0x400000U 
                                                    == 
                                                    (0xfc00000U 
                                                     & __PVT__mant_sum))
                                                    ? 4U
                                                    : 
                                                   ((0x200000U 
                                                     == 
                                                     (0xfe00000U 
                                                      & __PVT__mant_sum))
                                                     ? 5U
                                                     : 6U)))))))
                   : (((((((((0x80000U == (0xff80000U 
                                           & __PVT__mant_sum)) 
                             | (0x40000U == (0xffc0000U 
                                             & __PVT__mant_sum))) 
                            | (0x20000U == (0xffe0000U 
                                            & __PVT__mant_sum))) 
                           | (0x10000U == (0xfff0000U 
                                           & __PVT__mant_sum))) 
                          | (0x8000U == (0xfff8000U 
                                         & __PVT__mant_sum))) 
                         | (0x4000U == (0xfffc000U 
                                        & __PVT__mant_sum))) 
                        | (0x2000U == (0xfffe000U & __PVT__mant_sum))) 
                       | (0x1000U == (0xffff000U & __PVT__mant_sum)))
                       ? ((0x80000U == (0xff80000U 
                                        & __PVT__mant_sum))
                           ? 7U : ((0x40000U == (0xffc0000U 
                                                 & __PVT__mant_sum))
                                    ? 8U : ((0x20000U 
                                             == (0xffe0000U 
                                                 & __PVT__mant_sum))
                                             ? 9U : 
                                            ((0x10000U 
                                              == (0xfff0000U 
                                                  & __PVT__mant_sum))
                                              ? 0xaU
                                              : ((0x8000U 
                                                  == 
                                                  (0xfff8000U 
                                                   & __PVT__mant_sum))
                                                  ? 0xbU
                                                  : 
                                                 ((0x4000U 
                                                   == 
                                                   (0xfffc000U 
                                                    & __PVT__mant_sum))
                                                   ? 0xcU
                                                   : 
                                                  ((0x2000U 
                                                    == 
                                                    (0xfffe000U 
                                                     & __PVT__mant_sum))
                                                    ? 0xdU
                                                    : 0xeU)))))))
                       : (((((((((0x800U == (0xffff800U 
                                             & __PVT__mant_sum)) 
                                 | (0x400U == (0xffffc00U 
                                               & __PVT__mant_sum))) 
                                | (0x200U == (0xffffe00U 
                                              & __PVT__mant_sum))) 
                               | (0x100U == (0xfffff00U 
                                             & __PVT__mant_sum))) 
                              | (0x80U == (0xfffff80U 
                                           & __PVT__mant_sum))) 
                             | (0x40U == (0xfffffc0U 
                                          & __PVT__mant_sum))) 
                            | (0x20U == (0xfffffe0U 
                                         & __PVT__mant_sum))) 
                           | (0x10U == (0xffffff0U 
                                        & __PVT__mant_sum)))
                           ? ((0x800U == (0xffff800U 
                                          & __PVT__mant_sum))
                               ? 0xfU : ((0x400U == 
                                          (0xffffc00U 
                                           & __PVT__mant_sum))
                                          ? 0x10U : 
                                         ((0x200U == 
                                           (0xffffe00U 
                                            & __PVT__mant_sum))
                                           ? 0x11U : 
                                          ((0x100U 
                                            == (0xfffff00U 
                                                & __PVT__mant_sum))
                                            ? 0x12U
                                            : ((0x80U 
                                                == 
                                                (0xfffff80U 
                                                 & __PVT__mant_sum))
                                                ? 0x13U
                                                : (
                                                   (0x40U 
                                                    == 
                                                    (0xfffffc0U 
                                                     & __PVT__mant_sum))
                                                    ? 0x14U
                                                    : 
                                                   ((0x20U 
                                                     == 
                                                     (0xfffffe0U 
                                                      & __PVT__mant_sum))
                                                     ? 0x15U
                                                     : 0x16U)))))))
                           : ((8U == (0xffffff8U & __PVT__mant_sum))
                               ? 0x17U : ((4U == (0xffffffcU 
                                                  & __PVT__mant_sum))
                                           ? 0x18U : 
                                          ((2U == (0xffffffeU 
                                                   & __PVT__mant_sum))
                                            ? 0x19U
                                            : ((1U 
                                                == __PVT__mant_sum)
                                                ? 0x1aU
                                                : 0x1bU)))))));
    if ((0x8000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  >> 1U));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__large_exp)));
    } else if ((0x4000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & __PVT__mant_sum);
        vlSelf->__PVT__norm_exp = (0xffU & (IData)(vlSelf->__PVT__large_exp));
    } else if (((0x1bU > (IData)(__PVT__lzc)) & ((IData)(vlSelf->__PVT__large_exp) 
                                                 > (IData)(__PVT__lzc)))) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  << (IData)(__PVT__lzc)));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                            - (IData)(__PVT__lzc)));
    } else {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & 0U);
        vlSelf->__PVT__norm_exp = (0xffU & 0U);
    }
    __PVT__mant_rounded = (0x1ffffffU & ((0xffffffU 
                                          & (vlSelf->__PVT__norm_mant 
                                             >> 3U)) 
                                         + (1U & ((vlSelf->__PVT__norm_mant 
                                                   >> 2U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0xbU 
                                                              & vlSelf->__PVT__norm_mant)))))));
    if ((0x1000000U & __PVT__mant_rounded)) {
        vlSelf->__PVT__final_exp = (0xffU & ((IData)(1U) 
                                             + (IData)(vlSelf->__PVT__norm_exp)));
        vlSelf->__PVT__rounded_mant = (0x7fffffU & 
                                       (__PVT__mant_rounded 
                                        >> 1U));
    } else {
        vlSelf->__PVT__final_exp = vlSelf->__PVT__norm_exp;
        vlSelf->__PVT__rounded_mant = (0x7fffffU & __PVT__mant_rounded);
    }
}

VL_INLINE_OPT void Vnpu_core_top_fp32_adder___ico_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_core_top_fp32_adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_core_top_fp32_adder___ico_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0\n"); );
    // Init
    IData/*23:0*/ __PVT__large_mant;
    __PVT__large_mant = 0;
    IData/*23:0*/ __PVT__small_mant;
    __PVT__small_mant = 0;
    CData/*7:0*/ __PVT__exp_diff;
    __PVT__exp_diff = 0;
    CData/*0:0*/ __PVT__a_is_larger;
    __PVT__a_is_larger = 0;
    IData/*27:0*/ __PVT__mant_sum;
    __PVT__mant_sum = 0;
    CData/*4:0*/ __PVT__lzc;
    __PVT__lzc = 0;
    IData/*24:0*/ __PVT__mant_rounded;
    __PVT__mant_rounded = 0;
    IData/*23:0*/ __VdfgExtracted_hb7d58418__0;
    __VdfgExtracted_hb7d58418__0 = 0;
    // Body
    vlSelf->__PVT__b_is_inf = (IData)((0x7f800000U 
                                       == (0x7fffffffU 
                                           & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    vlSelf->__PVT__b_is_zero = (IData)((0U == (0x7fffffffU 
                                               & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __VdfgExtracted_hb7d58418__0 = ((0U == (0xffU & 
                                            (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U)))
                                     ? (0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)
                                     : (0x800000U | 
                                        (0x7fffffU 
                                         & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __PVT__a_is_larger = (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [0xcU][7U] >> 0x17U)) 
                           > (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                       >> 0x17U))) 
                          | (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                        [0xcU][7U] 
                                        >> 0x17U)) 
                              == (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x17U))) 
                             & ((0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xcU][7U]) >= (0x7fffffU 
                                                 & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))));
    if (__PVT__a_is_larger) {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                           [0xcU][7U] 
                                           >> 0x1fU));
        __PVT__large_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        __PVT__small_mant = __VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xcU]
                                             [7U] >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
    } else {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x1fU));
        __PVT__large_mant = __VdfgExtracted_hb7d58418__0;
        __PVT__small_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xcU]
                                             [7U] >> 0x17U));
    }
    __PVT__exp_diff = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                - (IData)(vlSelf->__PVT__small_exp)));
    if ((0U == (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (__PVT__small_mant 
                                        << 3U);
        vlSelf->__PVT__sticky_bit = 0U;
    } else if ((0x1bU > (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (0x7ffffffU 
                                        & VL_SHIFTR_III(27,27,8, 
                                                        (__PVT__small_mant 
                                                         << 3U), (IData)(__PVT__exp_diff)));
        vlSelf->__PVT__sticky_bit = (0U != ((__PVT__small_mant 
                                             << 3U) 
                                            & (VL_SHIFTL_III(27,27,8, (IData)(1U), (IData)(__PVT__exp_diff)) 
                                               - (IData)(1U))));
    } else {
        vlSelf->__PVT__aligned_small = 0U;
        vlSelf->__PVT__sticky_bit = (0U != __PVT__small_mant);
    }
    vlSelf->__PVT__aligned_small = ((0x7fffffeU & vlSelf->__PVT__aligned_small) 
                                    | (1U & (vlSelf->__PVT__aligned_small 
                                             | (IData)(vlSelf->__PVT__sticky_bit))));
    __PVT__mant_sum = (0xfffffffU & ((1U & ((IData)(vlSelf->__PVT__large_sign) 
                                            ^ ((IData)(__PVT__a_is_larger)
                                                ? (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                   >> 0x1fU)
                                                : (
                                                   vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [7U] 
                                                   >> 0x1fU))))
                                      ? ((__PVT__large_mant 
                                          << 3U) - vlSelf->__PVT__aligned_small)
                                      : ((__PVT__large_mant 
                                          << 3U) + vlSelf->__PVT__aligned_small)));
    __PVT__lzc = (((((((((0x8000000U == (0x8000000U 
                                         & __PVT__mant_sum)) 
                         | (0x4000000U == (0xc000000U 
                                           & __PVT__mant_sum))) 
                        | (0x2000000U == (0xe000000U 
                                          & __PVT__mant_sum))) 
                       | (0x1000000U == (0xf000000U 
                                         & __PVT__mant_sum))) 
                      | (0x800000U == (0xf800000U & __PVT__mant_sum))) 
                     | (0x400000U == (0xfc00000U & __PVT__mant_sum))) 
                    | (0x200000U == (0xfe00000U & __PVT__mant_sum))) 
                   | (0x100000U == (0xff00000U & __PVT__mant_sum)))
                   ? ((0x8000000U == (0x8000000U & __PVT__mant_sum))
                       ? 0U : ((0x4000000U == (0xc000000U 
                                               & __PVT__mant_sum))
                                ? 0U : ((0x2000000U 
                                         == (0xe000000U 
                                             & __PVT__mant_sum))
                                         ? 1U : ((0x1000000U 
                                                  == 
                                                  (0xf000000U 
                                                   & __PVT__mant_sum))
                                                  ? 2U
                                                  : 
                                                 ((0x800000U 
                                                   == 
                                                   (0xf800000U 
                                                    & __PVT__mant_sum))
                                                   ? 3U
                                                   : 
                                                  ((0x400000U 
                                                    == 
                                                    (0xfc00000U 
                                                     & __PVT__mant_sum))
                                                    ? 4U
                                                    : 
                                                   ((0x200000U 
                                                     == 
                                                     (0xfe00000U 
                                                      & __PVT__mant_sum))
                                                     ? 5U
                                                     : 6U)))))))
                   : (((((((((0x80000U == (0xff80000U 
                                           & __PVT__mant_sum)) 
                             | (0x40000U == (0xffc0000U 
                                             & __PVT__mant_sum))) 
                            | (0x20000U == (0xffe0000U 
                                            & __PVT__mant_sum))) 
                           | (0x10000U == (0xfff0000U 
                                           & __PVT__mant_sum))) 
                          | (0x8000U == (0xfff8000U 
                                         & __PVT__mant_sum))) 
                         | (0x4000U == (0xfffc000U 
                                        & __PVT__mant_sum))) 
                        | (0x2000U == (0xfffe000U & __PVT__mant_sum))) 
                       | (0x1000U == (0xffff000U & __PVT__mant_sum)))
                       ? ((0x80000U == (0xff80000U 
                                        & __PVT__mant_sum))
                           ? 7U : ((0x40000U == (0xffc0000U 
                                                 & __PVT__mant_sum))
                                    ? 8U : ((0x20000U 
                                             == (0xffe0000U 
                                                 & __PVT__mant_sum))
                                             ? 9U : 
                                            ((0x10000U 
                                              == (0xfff0000U 
                                                  & __PVT__mant_sum))
                                              ? 0xaU
                                              : ((0x8000U 
                                                  == 
                                                  (0xfff8000U 
                                                   & __PVT__mant_sum))
                                                  ? 0xbU
                                                  : 
                                                 ((0x4000U 
                                                   == 
                                                   (0xfffc000U 
                                                    & __PVT__mant_sum))
                                                   ? 0xcU
                                                   : 
                                                  ((0x2000U 
                                                    == 
                                                    (0xfffe000U 
                                                     & __PVT__mant_sum))
                                                    ? 0xdU
                                                    : 0xeU)))))))
                       : (((((((((0x800U == (0xffff800U 
                                             & __PVT__mant_sum)) 
                                 | (0x400U == (0xffffc00U 
                                               & __PVT__mant_sum))) 
                                | (0x200U == (0xffffe00U 
                                              & __PVT__mant_sum))) 
                               | (0x100U == (0xfffff00U 
                                             & __PVT__mant_sum))) 
                              | (0x80U == (0xfffff80U 
                                           & __PVT__mant_sum))) 
                             | (0x40U == (0xfffffc0U 
                                          & __PVT__mant_sum))) 
                            | (0x20U == (0xfffffe0U 
                                         & __PVT__mant_sum))) 
                           | (0x10U == (0xffffff0U 
                                        & __PVT__mant_sum)))
                           ? ((0x800U == (0xffff800U 
                                          & __PVT__mant_sum))
                               ? 0xfU : ((0x400U == 
                                          (0xffffc00U 
                                           & __PVT__mant_sum))
                                          ? 0x10U : 
                                         ((0x200U == 
                                           (0xffffe00U 
                                            & __PVT__mant_sum))
                                           ? 0x11U : 
                                          ((0x100U 
                                            == (0xfffff00U 
                                                & __PVT__mant_sum))
                                            ? 0x12U
                                            : ((0x80U 
                                                == 
                                                (0xfffff80U 
                                                 & __PVT__mant_sum))
                                                ? 0x13U
                                                : (
                                                   (0x40U 
                                                    == 
                                                    (0xfffffc0U 
                                                     & __PVT__mant_sum))
                                                    ? 0x14U
                                                    : 
                                                   ((0x20U 
                                                     == 
                                                     (0xfffffe0U 
                                                      & __PVT__mant_sum))
                                                     ? 0x15U
                                                     : 0x16U)))))))
                           : ((8U == (0xffffff8U & __PVT__mant_sum))
                               ? 0x17U : ((4U == (0xffffffcU 
                                                  & __PVT__mant_sum))
                                           ? 0x18U : 
                                          ((2U == (0xffffffeU 
                                                   & __PVT__mant_sum))
                                            ? 0x19U
                                            : ((1U 
                                                == __PVT__mant_sum)
                                                ? 0x1aU
                                                : 0x1bU)))))));
    if ((0x8000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  >> 1U));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__large_exp)));
    } else if ((0x4000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & __PVT__mant_sum);
        vlSelf->__PVT__norm_exp = (0xffU & (IData)(vlSelf->__PVT__large_exp));
    } else if (((0x1bU > (IData)(__PVT__lzc)) & ((IData)(vlSelf->__PVT__large_exp) 
                                                 > (IData)(__PVT__lzc)))) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  << (IData)(__PVT__lzc)));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                            - (IData)(__PVT__lzc)));
    } else {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & 0U);
        vlSelf->__PVT__norm_exp = (0xffU & 0U);
    }
    __PVT__mant_rounded = (0x1ffffffU & ((0xffffffU 
                                          & (vlSelf->__PVT__norm_mant 
                                             >> 3U)) 
                                         + (1U & ((vlSelf->__PVT__norm_mant 
                                                   >> 2U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0xbU 
                                                              & vlSelf->__PVT__norm_mant)))))));
    if ((0x1000000U & __PVT__mant_rounded)) {
        vlSelf->__PVT__final_exp = (0xffU & ((IData)(1U) 
                                             + (IData)(vlSelf->__PVT__norm_exp)));
        vlSelf->__PVT__rounded_mant = (0x7fffffU & 
                                       (__PVT__mant_rounded 
                                        >> 1U));
    } else {
        vlSelf->__PVT__final_exp = vlSelf->__PVT__norm_exp;
        vlSelf->__PVT__rounded_mant = (0x7fffffU & __PVT__mant_rounded);
    }
}

VL_INLINE_OPT void Vnpu_core_top_fp32_adder___nba_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_core_top_fp32_adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_core_top_fp32_adder___nba_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0\n"); );
    // Init
    IData/*23:0*/ __PVT__large_mant;
    __PVT__large_mant = 0;
    IData/*23:0*/ __PVT__small_mant;
    __PVT__small_mant = 0;
    CData/*7:0*/ __PVT__exp_diff;
    __PVT__exp_diff = 0;
    CData/*0:0*/ __PVT__a_is_larger;
    __PVT__a_is_larger = 0;
    IData/*27:0*/ __PVT__mant_sum;
    __PVT__mant_sum = 0;
    CData/*4:0*/ __PVT__lzc;
    __PVT__lzc = 0;
    IData/*24:0*/ __PVT__mant_rounded;
    __PVT__mant_rounded = 0;
    IData/*23:0*/ __VdfgExtracted_hb7d58418__0;
    __VdfgExtracted_hb7d58418__0 = 0;
    // Body
    vlSelf->__PVT__a_is_inf = ((0xffU == (0xffU & (
                                                   vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [7U] 
                                                   >> 0x17U))) 
                               & (0U == (0x7fffffU 
                                         & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xcU][7U])));
    if ((0U == (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                         [0xcU][7U] >> 0x17U)))) {
        vlSelf->__PVT__a_is_zero = (0U == (0x7fffffU 
                                           & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                           [0xcU][7U]));
        vlSelf->__VdfgExtracted_h18a3deab__0 = (0x7fffffU 
                                                & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xcU]
                                                [7U]);
    } else {
        vlSelf->__PVT__a_is_zero = 0U;
        vlSelf->__VdfgExtracted_h18a3deab__0 = (0x800000U 
                                                | (0x7fffffU 
                                                   & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [7U]));
    }
    vlSelf->__PVT__b_is_inf = (IData)((0x7f800000U 
                                       == (0x7fffffffU 
                                           & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    vlSelf->__PVT__b_is_zero = (IData)((0U == (0x7fffffffU 
                                               & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __VdfgExtracted_hb7d58418__0 = ((0U == (0xffU & 
                                            (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U)))
                                     ? (0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)
                                     : (0x800000U | 
                                        (0x7fffffU 
                                         & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __PVT__a_is_larger = (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [0xcU][7U] >> 0x17U)) 
                           > (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                       >> 0x17U))) 
                          | (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                        [0xcU][7U] 
                                        >> 0x17U)) 
                              == (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x17U))) 
                             & ((0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xcU][7U]) >= (0x7fffffU 
                                                 & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))));
    if (__PVT__a_is_larger) {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                           [0xcU][7U] 
                                           >> 0x1fU));
        __PVT__large_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        __PVT__small_mant = __VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xcU]
                                             [7U] >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
    } else {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x1fU));
        __PVT__large_mant = __VdfgExtracted_hb7d58418__0;
        __PVT__small_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xcU]
                                             [7U] >> 0x17U));
    }
    __PVT__exp_diff = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                - (IData)(vlSelf->__PVT__small_exp)));
    if ((0U == (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (__PVT__small_mant 
                                        << 3U);
        vlSelf->__PVT__sticky_bit = 0U;
    } else if ((0x1bU > (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (0x7ffffffU 
                                        & VL_SHIFTR_III(27,27,8, 
                                                        (__PVT__small_mant 
                                                         << 3U), (IData)(__PVT__exp_diff)));
        vlSelf->__PVT__sticky_bit = (0U != ((__PVT__small_mant 
                                             << 3U) 
                                            & (VL_SHIFTL_III(27,27,8, (IData)(1U), (IData)(__PVT__exp_diff)) 
                                               - (IData)(1U))));
    } else {
        vlSelf->__PVT__aligned_small = 0U;
        vlSelf->__PVT__sticky_bit = (0U != __PVT__small_mant);
    }
    vlSelf->__PVT__aligned_small = ((0x7fffffeU & vlSelf->__PVT__aligned_small) 
                                    | (1U & (vlSelf->__PVT__aligned_small 
                                             | (IData)(vlSelf->__PVT__sticky_bit))));
    __PVT__mant_sum = (0xfffffffU & ((1U & ((IData)(vlSelf->__PVT__large_sign) 
                                            ^ ((IData)(__PVT__a_is_larger)
                                                ? (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                   >> 0x1fU)
                                                : (
                                                   vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [7U] 
                                                   >> 0x1fU))))
                                      ? ((__PVT__large_mant 
                                          << 3U) - vlSelf->__PVT__aligned_small)
                                      : ((__PVT__large_mant 
                                          << 3U) + vlSelf->__PVT__aligned_small)));
    __PVT__lzc = (((((((((0x8000000U == (0x8000000U 
                                         & __PVT__mant_sum)) 
                         | (0x4000000U == (0xc000000U 
                                           & __PVT__mant_sum))) 
                        | (0x2000000U == (0xe000000U 
                                          & __PVT__mant_sum))) 
                       | (0x1000000U == (0xf000000U 
                                         & __PVT__mant_sum))) 
                      | (0x800000U == (0xf800000U & __PVT__mant_sum))) 
                     | (0x400000U == (0xfc00000U & __PVT__mant_sum))) 
                    | (0x200000U == (0xfe00000U & __PVT__mant_sum))) 
                   | (0x100000U == (0xff00000U & __PVT__mant_sum)))
                   ? ((0x8000000U == (0x8000000U & __PVT__mant_sum))
                       ? 0U : ((0x4000000U == (0xc000000U 
                                               & __PVT__mant_sum))
                                ? 0U : ((0x2000000U 
                                         == (0xe000000U 
                                             & __PVT__mant_sum))
                                         ? 1U : ((0x1000000U 
                                                  == 
                                                  (0xf000000U 
                                                   & __PVT__mant_sum))
                                                  ? 2U
                                                  : 
                                                 ((0x800000U 
                                                   == 
                                                   (0xf800000U 
                                                    & __PVT__mant_sum))
                                                   ? 3U
                                                   : 
                                                  ((0x400000U 
                                                    == 
                                                    (0xfc00000U 
                                                     & __PVT__mant_sum))
                                                    ? 4U
                                                    : 
                                                   ((0x200000U 
                                                     == 
                                                     (0xfe00000U 
                                                      & __PVT__mant_sum))
                                                     ? 5U
                                                     : 6U)))))))
                   : (((((((((0x80000U == (0xff80000U 
                                           & __PVT__mant_sum)) 
                             | (0x40000U == (0xffc0000U 
                                             & __PVT__mant_sum))) 
                            | (0x20000U == (0xffe0000U 
                                            & __PVT__mant_sum))) 
                           | (0x10000U == (0xfff0000U 
                                           & __PVT__mant_sum))) 
                          | (0x8000U == (0xfff8000U 
                                         & __PVT__mant_sum))) 
                         | (0x4000U == (0xfffc000U 
                                        & __PVT__mant_sum))) 
                        | (0x2000U == (0xfffe000U & __PVT__mant_sum))) 
                       | (0x1000U == (0xffff000U & __PVT__mant_sum)))
                       ? ((0x80000U == (0xff80000U 
                                        & __PVT__mant_sum))
                           ? 7U : ((0x40000U == (0xffc0000U 
                                                 & __PVT__mant_sum))
                                    ? 8U : ((0x20000U 
                                             == (0xffe0000U 
                                                 & __PVT__mant_sum))
                                             ? 9U : 
                                            ((0x10000U 
                                              == (0xfff0000U 
                                                  & __PVT__mant_sum))
                                              ? 0xaU
                                              : ((0x8000U 
                                                  == 
                                                  (0xfff8000U 
                                                   & __PVT__mant_sum))
                                                  ? 0xbU
                                                  : 
                                                 ((0x4000U 
                                                   == 
                                                   (0xfffc000U 
                                                    & __PVT__mant_sum))
                                                   ? 0xcU
                                                   : 
                                                  ((0x2000U 
                                                    == 
                                                    (0xfffe000U 
                                                     & __PVT__mant_sum))
                                                    ? 0xdU
                                                    : 0xeU)))))))
                       : (((((((((0x800U == (0xffff800U 
                                             & __PVT__mant_sum)) 
                                 | (0x400U == (0xffffc00U 
                                               & __PVT__mant_sum))) 
                                | (0x200U == (0xffffe00U 
                                              & __PVT__mant_sum))) 
                               | (0x100U == (0xfffff00U 
                                             & __PVT__mant_sum))) 
                              | (0x80U == (0xfffff80U 
                                           & __PVT__mant_sum))) 
                             | (0x40U == (0xfffffc0U 
                                          & __PVT__mant_sum))) 
                            | (0x20U == (0xfffffe0U 
                                         & __PVT__mant_sum))) 
                           | (0x10U == (0xffffff0U 
                                        & __PVT__mant_sum)))
                           ? ((0x800U == (0xffff800U 
                                          & __PVT__mant_sum))
                               ? 0xfU : ((0x400U == 
                                          (0xffffc00U 
                                           & __PVT__mant_sum))
                                          ? 0x10U : 
                                         ((0x200U == 
                                           (0xffffe00U 
                                            & __PVT__mant_sum))
                                           ? 0x11U : 
                                          ((0x100U 
                                            == (0xfffff00U 
                                                & __PVT__mant_sum))
                                            ? 0x12U
                                            : ((0x80U 
                                                == 
                                                (0xfffff80U 
                                                 & __PVT__mant_sum))
                                                ? 0x13U
                                                : (
                                                   (0x40U 
                                                    == 
                                                    (0xfffffc0U 
                                                     & __PVT__mant_sum))
                                                    ? 0x14U
                                                    : 
                                                   ((0x20U 
                                                     == 
                                                     (0xfffffe0U 
                                                      & __PVT__mant_sum))
                                                     ? 0x15U
                                                     : 0x16U)))))))
                           : ((8U == (0xffffff8U & __PVT__mant_sum))
                               ? 0x17U : ((4U == (0xffffffcU 
                                                  & __PVT__mant_sum))
                                           ? 0x18U : 
                                          ((2U == (0xffffffeU 
                                                   & __PVT__mant_sum))
                                            ? 0x19U
                                            : ((1U 
                                                == __PVT__mant_sum)
                                                ? 0x1aU
                                                : 0x1bU)))))));
    if ((0x8000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  >> 1U));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__large_exp)));
    } else if ((0x4000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & __PVT__mant_sum);
        vlSelf->__PVT__norm_exp = (0xffU & (IData)(vlSelf->__PVT__large_exp));
    } else if (((0x1bU > (IData)(__PVT__lzc)) & ((IData)(vlSelf->__PVT__large_exp) 
                                                 > (IData)(__PVT__lzc)))) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  << (IData)(__PVT__lzc)));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                            - (IData)(__PVT__lzc)));
    } else {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & 0U);
        vlSelf->__PVT__norm_exp = (0xffU & 0U);
    }
    __PVT__mant_rounded = (0x1ffffffU & ((0xffffffU 
                                          & (vlSelf->__PVT__norm_mant 
                                             >> 3U)) 
                                         + (1U & ((vlSelf->__PVT__norm_mant 
                                                   >> 2U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0xbU 
                                                              & vlSelf->__PVT__norm_mant)))))));
    if ((0x1000000U & __PVT__mant_rounded)) {
        vlSelf->__PVT__final_exp = (0xffU & ((IData)(1U) 
                                             + (IData)(vlSelf->__PVT__norm_exp)));
        vlSelf->__PVT__rounded_mant = (0x7fffffU & 
                                       (__PVT__mant_rounded 
                                        >> 1U));
    } else {
        vlSelf->__PVT__final_exp = vlSelf->__PVT__norm_exp;
        vlSelf->__PVT__rounded_mant = (0x7fffffU & __PVT__mant_rounded);
    }
}

VL_INLINE_OPT void Vnpu_core_top_fp32_adder___ico_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_core_top_fp32_adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_core_top_fp32_adder___ico_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0\n"); );
    // Init
    IData/*23:0*/ __PVT__large_mant;
    __PVT__large_mant = 0;
    IData/*23:0*/ __PVT__small_mant;
    __PVT__small_mant = 0;
    CData/*7:0*/ __PVT__exp_diff;
    __PVT__exp_diff = 0;
    CData/*0:0*/ __PVT__a_is_larger;
    __PVT__a_is_larger = 0;
    IData/*27:0*/ __PVT__mant_sum;
    __PVT__mant_sum = 0;
    CData/*4:0*/ __PVT__lzc;
    __PVT__lzc = 0;
    IData/*24:0*/ __PVT__mant_rounded;
    __PVT__mant_rounded = 0;
    IData/*23:0*/ __VdfgExtracted_hb7d58418__0;
    __VdfgExtracted_hb7d58418__0 = 0;
    // Body
    vlSelf->__PVT__b_is_inf = (IData)((0x7f800000U 
                                       == (0x7fffffffU 
                                           & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    vlSelf->__PVT__b_is_zero = (IData)((0U == (0x7fffffffU 
                                               & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __VdfgExtracted_hb7d58418__0 = ((0U == (0xffU & 
                                            (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U)))
                                     ? (0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)
                                     : (0x800000U | 
                                        (0x7fffffU 
                                         & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __PVT__a_is_larger = (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [0xcU][8U] >> 0x17U)) 
                           > (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                       >> 0x17U))) 
                          | (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                        [0xcU][8U] 
                                        >> 0x17U)) 
                              == (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x17U))) 
                             & ((0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xcU][8U]) >= (0x7fffffU 
                                                 & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))));
    if (__PVT__a_is_larger) {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                           [0xcU][8U] 
                                           >> 0x1fU));
        __PVT__large_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        __PVT__small_mant = __VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xcU]
                                             [8U] >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
    } else {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x1fU));
        __PVT__large_mant = __VdfgExtracted_hb7d58418__0;
        __PVT__small_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xcU]
                                             [8U] >> 0x17U));
    }
    __PVT__exp_diff = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                - (IData)(vlSelf->__PVT__small_exp)));
    if ((0U == (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (__PVT__small_mant 
                                        << 3U);
        vlSelf->__PVT__sticky_bit = 0U;
    } else if ((0x1bU > (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (0x7ffffffU 
                                        & VL_SHIFTR_III(27,27,8, 
                                                        (__PVT__small_mant 
                                                         << 3U), (IData)(__PVT__exp_diff)));
        vlSelf->__PVT__sticky_bit = (0U != ((__PVT__small_mant 
                                             << 3U) 
                                            & (VL_SHIFTL_III(27,27,8, (IData)(1U), (IData)(__PVT__exp_diff)) 
                                               - (IData)(1U))));
    } else {
        vlSelf->__PVT__aligned_small = 0U;
        vlSelf->__PVT__sticky_bit = (0U != __PVT__small_mant);
    }
    vlSelf->__PVT__aligned_small = ((0x7fffffeU & vlSelf->__PVT__aligned_small) 
                                    | (1U & (vlSelf->__PVT__aligned_small 
                                             | (IData)(vlSelf->__PVT__sticky_bit))));
    __PVT__mant_sum = (0xfffffffU & ((1U & ((IData)(vlSelf->__PVT__large_sign) 
                                            ^ ((IData)(__PVT__a_is_larger)
                                                ? (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                   >> 0x1fU)
                                                : (
                                                   vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [8U] 
                                                   >> 0x1fU))))
                                      ? ((__PVT__large_mant 
                                          << 3U) - vlSelf->__PVT__aligned_small)
                                      : ((__PVT__large_mant 
                                          << 3U) + vlSelf->__PVT__aligned_small)));
    __PVT__lzc = (((((((((0x8000000U == (0x8000000U 
                                         & __PVT__mant_sum)) 
                         | (0x4000000U == (0xc000000U 
                                           & __PVT__mant_sum))) 
                        | (0x2000000U == (0xe000000U 
                                          & __PVT__mant_sum))) 
                       | (0x1000000U == (0xf000000U 
                                         & __PVT__mant_sum))) 
                      | (0x800000U == (0xf800000U & __PVT__mant_sum))) 
                     | (0x400000U == (0xfc00000U & __PVT__mant_sum))) 
                    | (0x200000U == (0xfe00000U & __PVT__mant_sum))) 
                   | (0x100000U == (0xff00000U & __PVT__mant_sum)))
                   ? ((0x8000000U == (0x8000000U & __PVT__mant_sum))
                       ? 0U : ((0x4000000U == (0xc000000U 
                                               & __PVT__mant_sum))
                                ? 0U : ((0x2000000U 
                                         == (0xe000000U 
                                             & __PVT__mant_sum))
                                         ? 1U : ((0x1000000U 
                                                  == 
                                                  (0xf000000U 
                                                   & __PVT__mant_sum))
                                                  ? 2U
                                                  : 
                                                 ((0x800000U 
                                                   == 
                                                   (0xf800000U 
                                                    & __PVT__mant_sum))
                                                   ? 3U
                                                   : 
                                                  ((0x400000U 
                                                    == 
                                                    (0xfc00000U 
                                                     & __PVT__mant_sum))
                                                    ? 4U
                                                    : 
                                                   ((0x200000U 
                                                     == 
                                                     (0xfe00000U 
                                                      & __PVT__mant_sum))
                                                     ? 5U
                                                     : 6U)))))))
                   : (((((((((0x80000U == (0xff80000U 
                                           & __PVT__mant_sum)) 
                             | (0x40000U == (0xffc0000U 
                                             & __PVT__mant_sum))) 
                            | (0x20000U == (0xffe0000U 
                                            & __PVT__mant_sum))) 
                           | (0x10000U == (0xfff0000U 
                                           & __PVT__mant_sum))) 
                          | (0x8000U == (0xfff8000U 
                                         & __PVT__mant_sum))) 
                         | (0x4000U == (0xfffc000U 
                                        & __PVT__mant_sum))) 
                        | (0x2000U == (0xfffe000U & __PVT__mant_sum))) 
                       | (0x1000U == (0xffff000U & __PVT__mant_sum)))
                       ? ((0x80000U == (0xff80000U 
                                        & __PVT__mant_sum))
                           ? 7U : ((0x40000U == (0xffc0000U 
                                                 & __PVT__mant_sum))
                                    ? 8U : ((0x20000U 
                                             == (0xffe0000U 
                                                 & __PVT__mant_sum))
                                             ? 9U : 
                                            ((0x10000U 
                                              == (0xfff0000U 
                                                  & __PVT__mant_sum))
                                              ? 0xaU
                                              : ((0x8000U 
                                                  == 
                                                  (0xfff8000U 
                                                   & __PVT__mant_sum))
                                                  ? 0xbU
                                                  : 
                                                 ((0x4000U 
                                                   == 
                                                   (0xfffc000U 
                                                    & __PVT__mant_sum))
                                                   ? 0xcU
                                                   : 
                                                  ((0x2000U 
                                                    == 
                                                    (0xfffe000U 
                                                     & __PVT__mant_sum))
                                                    ? 0xdU
                                                    : 0xeU)))))))
                       : (((((((((0x800U == (0xffff800U 
                                             & __PVT__mant_sum)) 
                                 | (0x400U == (0xffffc00U 
                                               & __PVT__mant_sum))) 
                                | (0x200U == (0xffffe00U 
                                              & __PVT__mant_sum))) 
                               | (0x100U == (0xfffff00U 
                                             & __PVT__mant_sum))) 
                              | (0x80U == (0xfffff80U 
                                           & __PVT__mant_sum))) 
                             | (0x40U == (0xfffffc0U 
                                          & __PVT__mant_sum))) 
                            | (0x20U == (0xfffffe0U 
                                         & __PVT__mant_sum))) 
                           | (0x10U == (0xffffff0U 
                                        & __PVT__mant_sum)))
                           ? ((0x800U == (0xffff800U 
                                          & __PVT__mant_sum))
                               ? 0xfU : ((0x400U == 
                                          (0xffffc00U 
                                           & __PVT__mant_sum))
                                          ? 0x10U : 
                                         ((0x200U == 
                                           (0xffffe00U 
                                            & __PVT__mant_sum))
                                           ? 0x11U : 
                                          ((0x100U 
                                            == (0xfffff00U 
                                                & __PVT__mant_sum))
                                            ? 0x12U
                                            : ((0x80U 
                                                == 
                                                (0xfffff80U 
                                                 & __PVT__mant_sum))
                                                ? 0x13U
                                                : (
                                                   (0x40U 
                                                    == 
                                                    (0xfffffc0U 
                                                     & __PVT__mant_sum))
                                                    ? 0x14U
                                                    : 
                                                   ((0x20U 
                                                     == 
                                                     (0xfffffe0U 
                                                      & __PVT__mant_sum))
                                                     ? 0x15U
                                                     : 0x16U)))))))
                           : ((8U == (0xffffff8U & __PVT__mant_sum))
                               ? 0x17U : ((4U == (0xffffffcU 
                                                  & __PVT__mant_sum))
                                           ? 0x18U : 
                                          ((2U == (0xffffffeU 
                                                   & __PVT__mant_sum))
                                            ? 0x19U
                                            : ((1U 
                                                == __PVT__mant_sum)
                                                ? 0x1aU
                                                : 0x1bU)))))));
    if ((0x8000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  >> 1U));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__large_exp)));
    } else if ((0x4000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & __PVT__mant_sum);
        vlSelf->__PVT__norm_exp = (0xffU & (IData)(vlSelf->__PVT__large_exp));
    } else if (((0x1bU > (IData)(__PVT__lzc)) & ((IData)(vlSelf->__PVT__large_exp) 
                                                 > (IData)(__PVT__lzc)))) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  << (IData)(__PVT__lzc)));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                            - (IData)(__PVT__lzc)));
    } else {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & 0U);
        vlSelf->__PVT__norm_exp = (0xffU & 0U);
    }
    __PVT__mant_rounded = (0x1ffffffU & ((0xffffffU 
                                          & (vlSelf->__PVT__norm_mant 
                                             >> 3U)) 
                                         + (1U & ((vlSelf->__PVT__norm_mant 
                                                   >> 2U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0xbU 
                                                              & vlSelf->__PVT__norm_mant)))))));
    if ((0x1000000U & __PVT__mant_rounded)) {
        vlSelf->__PVT__final_exp = (0xffU & ((IData)(1U) 
                                             + (IData)(vlSelf->__PVT__norm_exp)));
        vlSelf->__PVT__rounded_mant = (0x7fffffU & 
                                       (__PVT__mant_rounded 
                                        >> 1U));
    } else {
        vlSelf->__PVT__final_exp = vlSelf->__PVT__norm_exp;
        vlSelf->__PVT__rounded_mant = (0x7fffffU & __PVT__mant_rounded);
    }
}

VL_INLINE_OPT void Vnpu_core_top_fp32_adder___nba_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_core_top_fp32_adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_core_top_fp32_adder___nba_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0\n"); );
    // Init
    IData/*23:0*/ __PVT__large_mant;
    __PVT__large_mant = 0;
    IData/*23:0*/ __PVT__small_mant;
    __PVT__small_mant = 0;
    CData/*7:0*/ __PVT__exp_diff;
    __PVT__exp_diff = 0;
    CData/*0:0*/ __PVT__a_is_larger;
    __PVT__a_is_larger = 0;
    IData/*27:0*/ __PVT__mant_sum;
    __PVT__mant_sum = 0;
    CData/*4:0*/ __PVT__lzc;
    __PVT__lzc = 0;
    IData/*24:0*/ __PVT__mant_rounded;
    __PVT__mant_rounded = 0;
    IData/*23:0*/ __VdfgExtracted_hb7d58418__0;
    __VdfgExtracted_hb7d58418__0 = 0;
    // Body
    vlSelf->__PVT__a_is_inf = ((0xffU == (0xffU & (
                                                   vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [8U] 
                                                   >> 0x17U))) 
                               & (0U == (0x7fffffU 
                                         & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xcU][8U])));
    if ((0U == (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                         [0xcU][8U] >> 0x17U)))) {
        vlSelf->__PVT__a_is_zero = (0U == (0x7fffffU 
                                           & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                           [0xcU][8U]));
        vlSelf->__VdfgExtracted_h18a3deab__0 = (0x7fffffU 
                                                & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xcU]
                                                [8U]);
    } else {
        vlSelf->__PVT__a_is_zero = 0U;
        vlSelf->__VdfgExtracted_h18a3deab__0 = (0x800000U 
                                                | (0x7fffffU 
                                                   & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [8U]));
    }
    vlSelf->__PVT__b_is_inf = (IData)((0x7f800000U 
                                       == (0x7fffffffU 
                                           & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    vlSelf->__PVT__b_is_zero = (IData)((0U == (0x7fffffffU 
                                               & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __VdfgExtracted_hb7d58418__0 = ((0U == (0xffU & 
                                            (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U)))
                                     ? (0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)
                                     : (0x800000U | 
                                        (0x7fffffU 
                                         & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __PVT__a_is_larger = (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [0xcU][8U] >> 0x17U)) 
                           > (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                       >> 0x17U))) 
                          | (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                        [0xcU][8U] 
                                        >> 0x17U)) 
                              == (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x17U))) 
                             & ((0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xcU][8U]) >= (0x7fffffU 
                                                 & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))));
    if (__PVT__a_is_larger) {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                           [0xcU][8U] 
                                           >> 0x1fU));
        __PVT__large_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        __PVT__small_mant = __VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xcU]
                                             [8U] >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
    } else {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x1fU));
        __PVT__large_mant = __VdfgExtracted_hb7d58418__0;
        __PVT__small_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xcU]
                                             [8U] >> 0x17U));
    }
    __PVT__exp_diff = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                - (IData)(vlSelf->__PVT__small_exp)));
    if ((0U == (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (__PVT__small_mant 
                                        << 3U);
        vlSelf->__PVT__sticky_bit = 0U;
    } else if ((0x1bU > (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (0x7ffffffU 
                                        & VL_SHIFTR_III(27,27,8, 
                                                        (__PVT__small_mant 
                                                         << 3U), (IData)(__PVT__exp_diff)));
        vlSelf->__PVT__sticky_bit = (0U != ((__PVT__small_mant 
                                             << 3U) 
                                            & (VL_SHIFTL_III(27,27,8, (IData)(1U), (IData)(__PVT__exp_diff)) 
                                               - (IData)(1U))));
    } else {
        vlSelf->__PVT__aligned_small = 0U;
        vlSelf->__PVT__sticky_bit = (0U != __PVT__small_mant);
    }
    vlSelf->__PVT__aligned_small = ((0x7fffffeU & vlSelf->__PVT__aligned_small) 
                                    | (1U & (vlSelf->__PVT__aligned_small 
                                             | (IData)(vlSelf->__PVT__sticky_bit))));
    __PVT__mant_sum = (0xfffffffU & ((1U & ((IData)(vlSelf->__PVT__large_sign) 
                                            ^ ((IData)(__PVT__a_is_larger)
                                                ? (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                   >> 0x1fU)
                                                : (
                                                   vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [8U] 
                                                   >> 0x1fU))))
                                      ? ((__PVT__large_mant 
                                          << 3U) - vlSelf->__PVT__aligned_small)
                                      : ((__PVT__large_mant 
                                          << 3U) + vlSelf->__PVT__aligned_small)));
    __PVT__lzc = (((((((((0x8000000U == (0x8000000U 
                                         & __PVT__mant_sum)) 
                         | (0x4000000U == (0xc000000U 
                                           & __PVT__mant_sum))) 
                        | (0x2000000U == (0xe000000U 
                                          & __PVT__mant_sum))) 
                       | (0x1000000U == (0xf000000U 
                                         & __PVT__mant_sum))) 
                      | (0x800000U == (0xf800000U & __PVT__mant_sum))) 
                     | (0x400000U == (0xfc00000U & __PVT__mant_sum))) 
                    | (0x200000U == (0xfe00000U & __PVT__mant_sum))) 
                   | (0x100000U == (0xff00000U & __PVT__mant_sum)))
                   ? ((0x8000000U == (0x8000000U & __PVT__mant_sum))
                       ? 0U : ((0x4000000U == (0xc000000U 
                                               & __PVT__mant_sum))
                                ? 0U : ((0x2000000U 
                                         == (0xe000000U 
                                             & __PVT__mant_sum))
                                         ? 1U : ((0x1000000U 
                                                  == 
                                                  (0xf000000U 
                                                   & __PVT__mant_sum))
                                                  ? 2U
                                                  : 
                                                 ((0x800000U 
                                                   == 
                                                   (0xf800000U 
                                                    & __PVT__mant_sum))
                                                   ? 3U
                                                   : 
                                                  ((0x400000U 
                                                    == 
                                                    (0xfc00000U 
                                                     & __PVT__mant_sum))
                                                    ? 4U
                                                    : 
                                                   ((0x200000U 
                                                     == 
                                                     (0xfe00000U 
                                                      & __PVT__mant_sum))
                                                     ? 5U
                                                     : 6U)))))))
                   : (((((((((0x80000U == (0xff80000U 
                                           & __PVT__mant_sum)) 
                             | (0x40000U == (0xffc0000U 
                                             & __PVT__mant_sum))) 
                            | (0x20000U == (0xffe0000U 
                                            & __PVT__mant_sum))) 
                           | (0x10000U == (0xfff0000U 
                                           & __PVT__mant_sum))) 
                          | (0x8000U == (0xfff8000U 
                                         & __PVT__mant_sum))) 
                         | (0x4000U == (0xfffc000U 
                                        & __PVT__mant_sum))) 
                        | (0x2000U == (0xfffe000U & __PVT__mant_sum))) 
                       | (0x1000U == (0xffff000U & __PVT__mant_sum)))
                       ? ((0x80000U == (0xff80000U 
                                        & __PVT__mant_sum))
                           ? 7U : ((0x40000U == (0xffc0000U 
                                                 & __PVT__mant_sum))
                                    ? 8U : ((0x20000U 
                                             == (0xffe0000U 
                                                 & __PVT__mant_sum))
                                             ? 9U : 
                                            ((0x10000U 
                                              == (0xfff0000U 
                                                  & __PVT__mant_sum))
                                              ? 0xaU
                                              : ((0x8000U 
                                                  == 
                                                  (0xfff8000U 
                                                   & __PVT__mant_sum))
                                                  ? 0xbU
                                                  : 
                                                 ((0x4000U 
                                                   == 
                                                   (0xfffc000U 
                                                    & __PVT__mant_sum))
                                                   ? 0xcU
                                                   : 
                                                  ((0x2000U 
                                                    == 
                                                    (0xfffe000U 
                                                     & __PVT__mant_sum))
                                                    ? 0xdU
                                                    : 0xeU)))))))
                       : (((((((((0x800U == (0xffff800U 
                                             & __PVT__mant_sum)) 
                                 | (0x400U == (0xffffc00U 
                                               & __PVT__mant_sum))) 
                                | (0x200U == (0xffffe00U 
                                              & __PVT__mant_sum))) 
                               | (0x100U == (0xfffff00U 
                                             & __PVT__mant_sum))) 
                              | (0x80U == (0xfffff80U 
                                           & __PVT__mant_sum))) 
                             | (0x40U == (0xfffffc0U 
                                          & __PVT__mant_sum))) 
                            | (0x20U == (0xfffffe0U 
                                         & __PVT__mant_sum))) 
                           | (0x10U == (0xffffff0U 
                                        & __PVT__mant_sum)))
                           ? ((0x800U == (0xffff800U 
                                          & __PVT__mant_sum))
                               ? 0xfU : ((0x400U == 
                                          (0xffffc00U 
                                           & __PVT__mant_sum))
                                          ? 0x10U : 
                                         ((0x200U == 
                                           (0xffffe00U 
                                            & __PVT__mant_sum))
                                           ? 0x11U : 
                                          ((0x100U 
                                            == (0xfffff00U 
                                                & __PVT__mant_sum))
                                            ? 0x12U
                                            : ((0x80U 
                                                == 
                                                (0xfffff80U 
                                                 & __PVT__mant_sum))
                                                ? 0x13U
                                                : (
                                                   (0x40U 
                                                    == 
                                                    (0xfffffc0U 
                                                     & __PVT__mant_sum))
                                                    ? 0x14U
                                                    : 
                                                   ((0x20U 
                                                     == 
                                                     (0xfffffe0U 
                                                      & __PVT__mant_sum))
                                                     ? 0x15U
                                                     : 0x16U)))))))
                           : ((8U == (0xffffff8U & __PVT__mant_sum))
                               ? 0x17U : ((4U == (0xffffffcU 
                                                  & __PVT__mant_sum))
                                           ? 0x18U : 
                                          ((2U == (0xffffffeU 
                                                   & __PVT__mant_sum))
                                            ? 0x19U
                                            : ((1U 
                                                == __PVT__mant_sum)
                                                ? 0x1aU
                                                : 0x1bU)))))));
    if ((0x8000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  >> 1U));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__large_exp)));
    } else if ((0x4000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & __PVT__mant_sum);
        vlSelf->__PVT__norm_exp = (0xffU & (IData)(vlSelf->__PVT__large_exp));
    } else if (((0x1bU > (IData)(__PVT__lzc)) & ((IData)(vlSelf->__PVT__large_exp) 
                                                 > (IData)(__PVT__lzc)))) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  << (IData)(__PVT__lzc)));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                            - (IData)(__PVT__lzc)));
    } else {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & 0U);
        vlSelf->__PVT__norm_exp = (0xffU & 0U);
    }
    __PVT__mant_rounded = (0x1ffffffU & ((0xffffffU 
                                          & (vlSelf->__PVT__norm_mant 
                                             >> 3U)) 
                                         + (1U & ((vlSelf->__PVT__norm_mant 
                                                   >> 2U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0xbU 
                                                              & vlSelf->__PVT__norm_mant)))))));
    if ((0x1000000U & __PVT__mant_rounded)) {
        vlSelf->__PVT__final_exp = (0xffU & ((IData)(1U) 
                                             + (IData)(vlSelf->__PVT__norm_exp)));
        vlSelf->__PVT__rounded_mant = (0x7fffffU & 
                                       (__PVT__mant_rounded 
                                        >> 1U));
    } else {
        vlSelf->__PVT__final_exp = vlSelf->__PVT__norm_exp;
        vlSelf->__PVT__rounded_mant = (0x7fffffU & __PVT__mant_rounded);
    }
}

VL_INLINE_OPT void Vnpu_core_top_fp32_adder___ico_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_core_top_fp32_adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_core_top_fp32_adder___ico_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0\n"); );
    // Init
    IData/*23:0*/ __PVT__large_mant;
    __PVT__large_mant = 0;
    IData/*23:0*/ __PVT__small_mant;
    __PVT__small_mant = 0;
    CData/*7:0*/ __PVT__exp_diff;
    __PVT__exp_diff = 0;
    CData/*0:0*/ __PVT__a_is_larger;
    __PVT__a_is_larger = 0;
    IData/*27:0*/ __PVT__mant_sum;
    __PVT__mant_sum = 0;
    CData/*4:0*/ __PVT__lzc;
    __PVT__lzc = 0;
    IData/*24:0*/ __PVT__mant_rounded;
    __PVT__mant_rounded = 0;
    IData/*23:0*/ __VdfgExtracted_hb7d58418__0;
    __VdfgExtracted_hb7d58418__0 = 0;
    // Body
    vlSelf->__PVT__b_is_inf = (IData)((0x7f800000U 
                                       == (0x7fffffffU 
                                           & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    vlSelf->__PVT__b_is_zero = (IData)((0U == (0x7fffffffU 
                                               & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __VdfgExtracted_hb7d58418__0 = ((0U == (0xffU & 
                                            (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U)))
                                     ? (0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)
                                     : (0x800000U | 
                                        (0x7fffffU 
                                         & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __PVT__a_is_larger = (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [0xcU][9U] >> 0x17U)) 
                           > (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                       >> 0x17U))) 
                          | (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                        [0xcU][9U] 
                                        >> 0x17U)) 
                              == (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x17U))) 
                             & ((0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xcU][9U]) >= (0x7fffffU 
                                                 & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))));
    if (__PVT__a_is_larger) {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                           [0xcU][9U] 
                                           >> 0x1fU));
        __PVT__large_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        __PVT__small_mant = __VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xcU]
                                             [9U] >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
    } else {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x1fU));
        __PVT__large_mant = __VdfgExtracted_hb7d58418__0;
        __PVT__small_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xcU]
                                             [9U] >> 0x17U));
    }
    __PVT__exp_diff = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                - (IData)(vlSelf->__PVT__small_exp)));
    if ((0U == (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (__PVT__small_mant 
                                        << 3U);
        vlSelf->__PVT__sticky_bit = 0U;
    } else if ((0x1bU > (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (0x7ffffffU 
                                        & VL_SHIFTR_III(27,27,8, 
                                                        (__PVT__small_mant 
                                                         << 3U), (IData)(__PVT__exp_diff)));
        vlSelf->__PVT__sticky_bit = (0U != ((__PVT__small_mant 
                                             << 3U) 
                                            & (VL_SHIFTL_III(27,27,8, (IData)(1U), (IData)(__PVT__exp_diff)) 
                                               - (IData)(1U))));
    } else {
        vlSelf->__PVT__aligned_small = 0U;
        vlSelf->__PVT__sticky_bit = (0U != __PVT__small_mant);
    }
    vlSelf->__PVT__aligned_small = ((0x7fffffeU & vlSelf->__PVT__aligned_small) 
                                    | (1U & (vlSelf->__PVT__aligned_small 
                                             | (IData)(vlSelf->__PVT__sticky_bit))));
    __PVT__mant_sum = (0xfffffffU & ((1U & ((IData)(vlSelf->__PVT__large_sign) 
                                            ^ ((IData)(__PVT__a_is_larger)
                                                ? (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                   >> 0x1fU)
                                                : (
                                                   vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [9U] 
                                                   >> 0x1fU))))
                                      ? ((__PVT__large_mant 
                                          << 3U) - vlSelf->__PVT__aligned_small)
                                      : ((__PVT__large_mant 
                                          << 3U) + vlSelf->__PVT__aligned_small)));
    __PVT__lzc = (((((((((0x8000000U == (0x8000000U 
                                         & __PVT__mant_sum)) 
                         | (0x4000000U == (0xc000000U 
                                           & __PVT__mant_sum))) 
                        | (0x2000000U == (0xe000000U 
                                          & __PVT__mant_sum))) 
                       | (0x1000000U == (0xf000000U 
                                         & __PVT__mant_sum))) 
                      | (0x800000U == (0xf800000U & __PVT__mant_sum))) 
                     | (0x400000U == (0xfc00000U & __PVT__mant_sum))) 
                    | (0x200000U == (0xfe00000U & __PVT__mant_sum))) 
                   | (0x100000U == (0xff00000U & __PVT__mant_sum)))
                   ? ((0x8000000U == (0x8000000U & __PVT__mant_sum))
                       ? 0U : ((0x4000000U == (0xc000000U 
                                               & __PVT__mant_sum))
                                ? 0U : ((0x2000000U 
                                         == (0xe000000U 
                                             & __PVT__mant_sum))
                                         ? 1U : ((0x1000000U 
                                                  == 
                                                  (0xf000000U 
                                                   & __PVT__mant_sum))
                                                  ? 2U
                                                  : 
                                                 ((0x800000U 
                                                   == 
                                                   (0xf800000U 
                                                    & __PVT__mant_sum))
                                                   ? 3U
                                                   : 
                                                  ((0x400000U 
                                                    == 
                                                    (0xfc00000U 
                                                     & __PVT__mant_sum))
                                                    ? 4U
                                                    : 
                                                   ((0x200000U 
                                                     == 
                                                     (0xfe00000U 
                                                      & __PVT__mant_sum))
                                                     ? 5U
                                                     : 6U)))))))
                   : (((((((((0x80000U == (0xff80000U 
                                           & __PVT__mant_sum)) 
                             | (0x40000U == (0xffc0000U 
                                             & __PVT__mant_sum))) 
                            | (0x20000U == (0xffe0000U 
                                            & __PVT__mant_sum))) 
                           | (0x10000U == (0xfff0000U 
                                           & __PVT__mant_sum))) 
                          | (0x8000U == (0xfff8000U 
                                         & __PVT__mant_sum))) 
                         | (0x4000U == (0xfffc000U 
                                        & __PVT__mant_sum))) 
                        | (0x2000U == (0xfffe000U & __PVT__mant_sum))) 
                       | (0x1000U == (0xffff000U & __PVT__mant_sum)))
                       ? ((0x80000U == (0xff80000U 
                                        & __PVT__mant_sum))
                           ? 7U : ((0x40000U == (0xffc0000U 
                                                 & __PVT__mant_sum))
                                    ? 8U : ((0x20000U 
                                             == (0xffe0000U 
                                                 & __PVT__mant_sum))
                                             ? 9U : 
                                            ((0x10000U 
                                              == (0xfff0000U 
                                                  & __PVT__mant_sum))
                                              ? 0xaU
                                              : ((0x8000U 
                                                  == 
                                                  (0xfff8000U 
                                                   & __PVT__mant_sum))
                                                  ? 0xbU
                                                  : 
                                                 ((0x4000U 
                                                   == 
                                                   (0xfffc000U 
                                                    & __PVT__mant_sum))
                                                   ? 0xcU
                                                   : 
                                                  ((0x2000U 
                                                    == 
                                                    (0xfffe000U 
                                                     & __PVT__mant_sum))
                                                    ? 0xdU
                                                    : 0xeU)))))))
                       : (((((((((0x800U == (0xffff800U 
                                             & __PVT__mant_sum)) 
                                 | (0x400U == (0xffffc00U 
                                               & __PVT__mant_sum))) 
                                | (0x200U == (0xffffe00U 
                                              & __PVT__mant_sum))) 
                               | (0x100U == (0xfffff00U 
                                             & __PVT__mant_sum))) 
                              | (0x80U == (0xfffff80U 
                                           & __PVT__mant_sum))) 
                             | (0x40U == (0xfffffc0U 
                                          & __PVT__mant_sum))) 
                            | (0x20U == (0xfffffe0U 
                                         & __PVT__mant_sum))) 
                           | (0x10U == (0xffffff0U 
                                        & __PVT__mant_sum)))
                           ? ((0x800U == (0xffff800U 
                                          & __PVT__mant_sum))
                               ? 0xfU : ((0x400U == 
                                          (0xffffc00U 
                                           & __PVT__mant_sum))
                                          ? 0x10U : 
                                         ((0x200U == 
                                           (0xffffe00U 
                                            & __PVT__mant_sum))
                                           ? 0x11U : 
                                          ((0x100U 
                                            == (0xfffff00U 
                                                & __PVT__mant_sum))
                                            ? 0x12U
                                            : ((0x80U 
                                                == 
                                                (0xfffff80U 
                                                 & __PVT__mant_sum))
                                                ? 0x13U
                                                : (
                                                   (0x40U 
                                                    == 
                                                    (0xfffffc0U 
                                                     & __PVT__mant_sum))
                                                    ? 0x14U
                                                    : 
                                                   ((0x20U 
                                                     == 
                                                     (0xfffffe0U 
                                                      & __PVT__mant_sum))
                                                     ? 0x15U
                                                     : 0x16U)))))))
                           : ((8U == (0xffffff8U & __PVT__mant_sum))
                               ? 0x17U : ((4U == (0xffffffcU 
                                                  & __PVT__mant_sum))
                                           ? 0x18U : 
                                          ((2U == (0xffffffeU 
                                                   & __PVT__mant_sum))
                                            ? 0x19U
                                            : ((1U 
                                                == __PVT__mant_sum)
                                                ? 0x1aU
                                                : 0x1bU)))))));
    if ((0x8000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  >> 1U));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__large_exp)));
    } else if ((0x4000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & __PVT__mant_sum);
        vlSelf->__PVT__norm_exp = (0xffU & (IData)(vlSelf->__PVT__large_exp));
    } else if (((0x1bU > (IData)(__PVT__lzc)) & ((IData)(vlSelf->__PVT__large_exp) 
                                                 > (IData)(__PVT__lzc)))) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  << (IData)(__PVT__lzc)));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                            - (IData)(__PVT__lzc)));
    } else {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & 0U);
        vlSelf->__PVT__norm_exp = (0xffU & 0U);
    }
    __PVT__mant_rounded = (0x1ffffffU & ((0xffffffU 
                                          & (vlSelf->__PVT__norm_mant 
                                             >> 3U)) 
                                         + (1U & ((vlSelf->__PVT__norm_mant 
                                                   >> 2U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0xbU 
                                                              & vlSelf->__PVT__norm_mant)))))));
    if ((0x1000000U & __PVT__mant_rounded)) {
        vlSelf->__PVT__final_exp = (0xffU & ((IData)(1U) 
                                             + (IData)(vlSelf->__PVT__norm_exp)));
        vlSelf->__PVT__rounded_mant = (0x7fffffU & 
                                       (__PVT__mant_rounded 
                                        >> 1U));
    } else {
        vlSelf->__PVT__final_exp = vlSelf->__PVT__norm_exp;
        vlSelf->__PVT__rounded_mant = (0x7fffffU & __PVT__mant_rounded);
    }
}

VL_INLINE_OPT void Vnpu_core_top_fp32_adder___nba_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_core_top_fp32_adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_core_top_fp32_adder___nba_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0\n"); );
    // Init
    IData/*23:0*/ __PVT__large_mant;
    __PVT__large_mant = 0;
    IData/*23:0*/ __PVT__small_mant;
    __PVT__small_mant = 0;
    CData/*7:0*/ __PVT__exp_diff;
    __PVT__exp_diff = 0;
    CData/*0:0*/ __PVT__a_is_larger;
    __PVT__a_is_larger = 0;
    IData/*27:0*/ __PVT__mant_sum;
    __PVT__mant_sum = 0;
    CData/*4:0*/ __PVT__lzc;
    __PVT__lzc = 0;
    IData/*24:0*/ __PVT__mant_rounded;
    __PVT__mant_rounded = 0;
    IData/*23:0*/ __VdfgExtracted_hb7d58418__0;
    __VdfgExtracted_hb7d58418__0 = 0;
    // Body
    vlSelf->__PVT__a_is_inf = ((0xffU == (0xffU & (
                                                   vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [9U] 
                                                   >> 0x17U))) 
                               & (0U == (0x7fffffU 
                                         & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xcU][9U])));
    if ((0U == (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                         [0xcU][9U] >> 0x17U)))) {
        vlSelf->__PVT__a_is_zero = (0U == (0x7fffffU 
                                           & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                           [0xcU][9U]));
        vlSelf->__VdfgExtracted_h18a3deab__0 = (0x7fffffU 
                                                & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xcU]
                                                [9U]);
    } else {
        vlSelf->__PVT__a_is_zero = 0U;
        vlSelf->__VdfgExtracted_h18a3deab__0 = (0x800000U 
                                                | (0x7fffffU 
                                                   & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [9U]));
    }
    vlSelf->__PVT__b_is_inf = (IData)((0x7f800000U 
                                       == (0x7fffffffU 
                                           & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    vlSelf->__PVT__b_is_zero = (IData)((0U == (0x7fffffffU 
                                               & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __VdfgExtracted_hb7d58418__0 = ((0U == (0xffU & 
                                            (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U)))
                                     ? (0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)
                                     : (0x800000U | 
                                        (0x7fffffU 
                                         & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __PVT__a_is_larger = (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [0xcU][9U] >> 0x17U)) 
                           > (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                       >> 0x17U))) 
                          | (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                        [0xcU][9U] 
                                        >> 0x17U)) 
                              == (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x17U))) 
                             & ((0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xcU][9U]) >= (0x7fffffU 
                                                 & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))));
    if (__PVT__a_is_larger) {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                           [0xcU][9U] 
                                           >> 0x1fU));
        __PVT__large_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        __PVT__small_mant = __VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xcU]
                                             [9U] >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
    } else {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x1fU));
        __PVT__large_mant = __VdfgExtracted_hb7d58418__0;
        __PVT__small_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xcU]
                                             [9U] >> 0x17U));
    }
    __PVT__exp_diff = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                - (IData)(vlSelf->__PVT__small_exp)));
    if ((0U == (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (__PVT__small_mant 
                                        << 3U);
        vlSelf->__PVT__sticky_bit = 0U;
    } else if ((0x1bU > (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (0x7ffffffU 
                                        & VL_SHIFTR_III(27,27,8, 
                                                        (__PVT__small_mant 
                                                         << 3U), (IData)(__PVT__exp_diff)));
        vlSelf->__PVT__sticky_bit = (0U != ((__PVT__small_mant 
                                             << 3U) 
                                            & (VL_SHIFTL_III(27,27,8, (IData)(1U), (IData)(__PVT__exp_diff)) 
                                               - (IData)(1U))));
    } else {
        vlSelf->__PVT__aligned_small = 0U;
        vlSelf->__PVT__sticky_bit = (0U != __PVT__small_mant);
    }
    vlSelf->__PVT__aligned_small = ((0x7fffffeU & vlSelf->__PVT__aligned_small) 
                                    | (1U & (vlSelf->__PVT__aligned_small 
                                             | (IData)(vlSelf->__PVT__sticky_bit))));
    __PVT__mant_sum = (0xfffffffU & ((1U & ((IData)(vlSelf->__PVT__large_sign) 
                                            ^ ((IData)(__PVT__a_is_larger)
                                                ? (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                   >> 0x1fU)
                                                : (
                                                   vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [9U] 
                                                   >> 0x1fU))))
                                      ? ((__PVT__large_mant 
                                          << 3U) - vlSelf->__PVT__aligned_small)
                                      : ((__PVT__large_mant 
                                          << 3U) + vlSelf->__PVT__aligned_small)));
    __PVT__lzc = (((((((((0x8000000U == (0x8000000U 
                                         & __PVT__mant_sum)) 
                         | (0x4000000U == (0xc000000U 
                                           & __PVT__mant_sum))) 
                        | (0x2000000U == (0xe000000U 
                                          & __PVT__mant_sum))) 
                       | (0x1000000U == (0xf000000U 
                                         & __PVT__mant_sum))) 
                      | (0x800000U == (0xf800000U & __PVT__mant_sum))) 
                     | (0x400000U == (0xfc00000U & __PVT__mant_sum))) 
                    | (0x200000U == (0xfe00000U & __PVT__mant_sum))) 
                   | (0x100000U == (0xff00000U & __PVT__mant_sum)))
                   ? ((0x8000000U == (0x8000000U & __PVT__mant_sum))
                       ? 0U : ((0x4000000U == (0xc000000U 
                                               & __PVT__mant_sum))
                                ? 0U : ((0x2000000U 
                                         == (0xe000000U 
                                             & __PVT__mant_sum))
                                         ? 1U : ((0x1000000U 
                                                  == 
                                                  (0xf000000U 
                                                   & __PVT__mant_sum))
                                                  ? 2U
                                                  : 
                                                 ((0x800000U 
                                                   == 
                                                   (0xf800000U 
                                                    & __PVT__mant_sum))
                                                   ? 3U
                                                   : 
                                                  ((0x400000U 
                                                    == 
                                                    (0xfc00000U 
                                                     & __PVT__mant_sum))
                                                    ? 4U
                                                    : 
                                                   ((0x200000U 
                                                     == 
                                                     (0xfe00000U 
                                                      & __PVT__mant_sum))
                                                     ? 5U
                                                     : 6U)))))))
                   : (((((((((0x80000U == (0xff80000U 
                                           & __PVT__mant_sum)) 
                             | (0x40000U == (0xffc0000U 
                                             & __PVT__mant_sum))) 
                            | (0x20000U == (0xffe0000U 
                                            & __PVT__mant_sum))) 
                           | (0x10000U == (0xfff0000U 
                                           & __PVT__mant_sum))) 
                          | (0x8000U == (0xfff8000U 
                                         & __PVT__mant_sum))) 
                         | (0x4000U == (0xfffc000U 
                                        & __PVT__mant_sum))) 
                        | (0x2000U == (0xfffe000U & __PVT__mant_sum))) 
                       | (0x1000U == (0xffff000U & __PVT__mant_sum)))
                       ? ((0x80000U == (0xff80000U 
                                        & __PVT__mant_sum))
                           ? 7U : ((0x40000U == (0xffc0000U 
                                                 & __PVT__mant_sum))
                                    ? 8U : ((0x20000U 
                                             == (0xffe0000U 
                                                 & __PVT__mant_sum))
                                             ? 9U : 
                                            ((0x10000U 
                                              == (0xfff0000U 
                                                  & __PVT__mant_sum))
                                              ? 0xaU
                                              : ((0x8000U 
                                                  == 
                                                  (0xfff8000U 
                                                   & __PVT__mant_sum))
                                                  ? 0xbU
                                                  : 
                                                 ((0x4000U 
                                                   == 
                                                   (0xfffc000U 
                                                    & __PVT__mant_sum))
                                                   ? 0xcU
                                                   : 
                                                  ((0x2000U 
                                                    == 
                                                    (0xfffe000U 
                                                     & __PVT__mant_sum))
                                                    ? 0xdU
                                                    : 0xeU)))))))
                       : (((((((((0x800U == (0xffff800U 
                                             & __PVT__mant_sum)) 
                                 | (0x400U == (0xffffc00U 
                                               & __PVT__mant_sum))) 
                                | (0x200U == (0xffffe00U 
                                              & __PVT__mant_sum))) 
                               | (0x100U == (0xfffff00U 
                                             & __PVT__mant_sum))) 
                              | (0x80U == (0xfffff80U 
                                           & __PVT__mant_sum))) 
                             | (0x40U == (0xfffffc0U 
                                          & __PVT__mant_sum))) 
                            | (0x20U == (0xfffffe0U 
                                         & __PVT__mant_sum))) 
                           | (0x10U == (0xffffff0U 
                                        & __PVT__mant_sum)))
                           ? ((0x800U == (0xffff800U 
                                          & __PVT__mant_sum))
                               ? 0xfU : ((0x400U == 
                                          (0xffffc00U 
                                           & __PVT__mant_sum))
                                          ? 0x10U : 
                                         ((0x200U == 
                                           (0xffffe00U 
                                            & __PVT__mant_sum))
                                           ? 0x11U : 
                                          ((0x100U 
                                            == (0xfffff00U 
                                                & __PVT__mant_sum))
                                            ? 0x12U
                                            : ((0x80U 
                                                == 
                                                (0xfffff80U 
                                                 & __PVT__mant_sum))
                                                ? 0x13U
                                                : (
                                                   (0x40U 
                                                    == 
                                                    (0xfffffc0U 
                                                     & __PVT__mant_sum))
                                                    ? 0x14U
                                                    : 
                                                   ((0x20U 
                                                     == 
                                                     (0xfffffe0U 
                                                      & __PVT__mant_sum))
                                                     ? 0x15U
                                                     : 0x16U)))))))
                           : ((8U == (0xffffff8U & __PVT__mant_sum))
                               ? 0x17U : ((4U == (0xffffffcU 
                                                  & __PVT__mant_sum))
                                           ? 0x18U : 
                                          ((2U == (0xffffffeU 
                                                   & __PVT__mant_sum))
                                            ? 0x19U
                                            : ((1U 
                                                == __PVT__mant_sum)
                                                ? 0x1aU
                                                : 0x1bU)))))));
    if ((0x8000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  >> 1U));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__large_exp)));
    } else if ((0x4000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & __PVT__mant_sum);
        vlSelf->__PVT__norm_exp = (0xffU & (IData)(vlSelf->__PVT__large_exp));
    } else if (((0x1bU > (IData)(__PVT__lzc)) & ((IData)(vlSelf->__PVT__large_exp) 
                                                 > (IData)(__PVT__lzc)))) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  << (IData)(__PVT__lzc)));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                            - (IData)(__PVT__lzc)));
    } else {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & 0U);
        vlSelf->__PVT__norm_exp = (0xffU & 0U);
    }
    __PVT__mant_rounded = (0x1ffffffU & ((0xffffffU 
                                          & (vlSelf->__PVT__norm_mant 
                                             >> 3U)) 
                                         + (1U & ((vlSelf->__PVT__norm_mant 
                                                   >> 2U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0xbU 
                                                              & vlSelf->__PVT__norm_mant)))))));
    if ((0x1000000U & __PVT__mant_rounded)) {
        vlSelf->__PVT__final_exp = (0xffU & ((IData)(1U) 
                                             + (IData)(vlSelf->__PVT__norm_exp)));
        vlSelf->__PVT__rounded_mant = (0x7fffffU & 
                                       (__PVT__mant_rounded 
                                        >> 1U));
    } else {
        vlSelf->__PVT__final_exp = vlSelf->__PVT__norm_exp;
        vlSelf->__PVT__rounded_mant = (0x7fffffU & __PVT__mant_rounded);
    }
}

VL_INLINE_OPT void Vnpu_core_top_fp32_adder___ico_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0(Vnpu_core_top_fp32_adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_core_top_fp32_adder___ico_sequent__TOP__npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add__0\n"); );
    // Init
    IData/*23:0*/ __PVT__large_mant;
    __PVT__large_mant = 0;
    IData/*23:0*/ __PVT__small_mant;
    __PVT__small_mant = 0;
    CData/*7:0*/ __PVT__exp_diff;
    __PVT__exp_diff = 0;
    CData/*0:0*/ __PVT__a_is_larger;
    __PVT__a_is_larger = 0;
    IData/*27:0*/ __PVT__mant_sum;
    __PVT__mant_sum = 0;
    CData/*4:0*/ __PVT__lzc;
    __PVT__lzc = 0;
    IData/*24:0*/ __PVT__mant_rounded;
    __PVT__mant_rounded = 0;
    IData/*23:0*/ __VdfgExtracted_hb7d58418__0;
    __VdfgExtracted_hb7d58418__0 = 0;
    // Body
    vlSelf->__PVT__b_is_inf = (IData)((0x7f800000U 
                                       == (0x7fffffffU 
                                           & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    vlSelf->__PVT__b_is_zero = (IData)((0U == (0x7fffffffU 
                                               & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __VdfgExtracted_hb7d58418__0 = ((0U == (0xffU & 
                                            (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U)))
                                     ? (0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)
                                     : (0x800000U | 
                                        (0x7fffffU 
                                         & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)));
    __PVT__a_is_larger = (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                     [0xcU][0xaU] >> 0x17U)) 
                           > (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                       >> 0x17U))) 
                          | (((0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                        [0xcU][0xaU] 
                                        >> 0x17U)) 
                              == (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x17U))) 
                             & ((0x7fffffU & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xcU][0xaU]) >= (0x7fffffU 
                                                   & vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))));
    if (__PVT__a_is_larger) {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                           [0xcU][0xaU] 
                                           >> 0x1fU));
        __PVT__large_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        __PVT__small_mant = __VdfgExtracted_hb7d58418__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xcU]
                                             [0xaU] 
                                             >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
    } else {
        vlSelf->__PVT__large_sign = (1U & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                           >> 0x1fU));
        __PVT__large_mant = __VdfgExtracted_hb7d58418__0;
        __PVT__small_mant = vlSelf->__VdfgExtracted_h18a3deab__0;
        vlSelf->__PVT__large_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x17U));
        vlSelf->__PVT__small_exp = (0xffU & (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0xcU]
                                             [0xaU] 
                                             >> 0x17U));
    }
    __PVT__exp_diff = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                - (IData)(vlSelf->__PVT__small_exp)));
    if ((0U == (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (__PVT__small_mant 
                                        << 3U);
        vlSelf->__PVT__sticky_bit = 0U;
    } else if ((0x1bU > (IData)(__PVT__exp_diff))) {
        vlSelf->__PVT__aligned_small = (0x7ffffffU 
                                        & VL_SHIFTR_III(27,27,8, 
                                                        (__PVT__small_mant 
                                                         << 3U), (IData)(__PVT__exp_diff)));
        vlSelf->__PVT__sticky_bit = (0U != ((__PVT__small_mant 
                                             << 3U) 
                                            & (VL_SHIFTL_III(27,27,8, (IData)(1U), (IData)(__PVT__exp_diff)) 
                                               - (IData)(1U))));
    } else {
        vlSelf->__PVT__aligned_small = 0U;
        vlSelf->__PVT__sticky_bit = (0U != __PVT__small_mant);
    }
    vlSelf->__PVT__aligned_small = ((0x7fffffeU & vlSelf->__PVT__aligned_small) 
                                    | (1U & (vlSelf->__PVT__aligned_small 
                                             | (IData)(vlSelf->__PVT__sticky_bit))));
    __PVT__mant_sum = (0xfffffffU & ((1U & ((IData)(vlSelf->__PVT__large_sign) 
                                            ^ ((IData)(__PVT__a_is_larger)
                                                ? (vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                   >> 0x1fU)
                                                : (
                                                   vlSymsp->TOP.npu_core_top__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [0xaU] 
                                                   >> 0x1fU))))
                                      ? ((__PVT__large_mant 
                                          << 3U) - vlSelf->__PVT__aligned_small)
                                      : ((__PVT__large_mant 
                                          << 3U) + vlSelf->__PVT__aligned_small)));
    __PVT__lzc = (((((((((0x8000000U == (0x8000000U 
                                         & __PVT__mant_sum)) 
                         | (0x4000000U == (0xc000000U 
                                           & __PVT__mant_sum))) 
                        | (0x2000000U == (0xe000000U 
                                          & __PVT__mant_sum))) 
                       | (0x1000000U == (0xf000000U 
                                         & __PVT__mant_sum))) 
                      | (0x800000U == (0xf800000U & __PVT__mant_sum))) 
                     | (0x400000U == (0xfc00000U & __PVT__mant_sum))) 
                    | (0x200000U == (0xfe00000U & __PVT__mant_sum))) 
                   | (0x100000U == (0xff00000U & __PVT__mant_sum)))
                   ? ((0x8000000U == (0x8000000U & __PVT__mant_sum))
                       ? 0U : ((0x4000000U == (0xc000000U 
                                               & __PVT__mant_sum))
                                ? 0U : ((0x2000000U 
                                         == (0xe000000U 
                                             & __PVT__mant_sum))
                                         ? 1U : ((0x1000000U 
                                                  == 
                                                  (0xf000000U 
                                                   & __PVT__mant_sum))
                                                  ? 2U
                                                  : 
                                                 ((0x800000U 
                                                   == 
                                                   (0xf800000U 
                                                    & __PVT__mant_sum))
                                                   ? 3U
                                                   : 
                                                  ((0x400000U 
                                                    == 
                                                    (0xfc00000U 
                                                     & __PVT__mant_sum))
                                                    ? 4U
                                                    : 
                                                   ((0x200000U 
                                                     == 
                                                     (0xfe00000U 
                                                      & __PVT__mant_sum))
                                                     ? 5U
                                                     : 6U)))))))
                   : (((((((((0x80000U == (0xff80000U 
                                           & __PVT__mant_sum)) 
                             | (0x40000U == (0xffc0000U 
                                             & __PVT__mant_sum))) 
                            | (0x20000U == (0xffe0000U 
                                            & __PVT__mant_sum))) 
                           | (0x10000U == (0xfff0000U 
                                           & __PVT__mant_sum))) 
                          | (0x8000U == (0xfff8000U 
                                         & __PVT__mant_sum))) 
                         | (0x4000U == (0xfffc000U 
                                        & __PVT__mant_sum))) 
                        | (0x2000U == (0xfffe000U & __PVT__mant_sum))) 
                       | (0x1000U == (0xffff000U & __PVT__mant_sum)))
                       ? ((0x80000U == (0xff80000U 
                                        & __PVT__mant_sum))
                           ? 7U : ((0x40000U == (0xffc0000U 
                                                 & __PVT__mant_sum))
                                    ? 8U : ((0x20000U 
                                             == (0xffe0000U 
                                                 & __PVT__mant_sum))
                                             ? 9U : 
                                            ((0x10000U 
                                              == (0xfff0000U 
                                                  & __PVT__mant_sum))
                                              ? 0xaU
                                              : ((0x8000U 
                                                  == 
                                                  (0xfff8000U 
                                                   & __PVT__mant_sum))
                                                  ? 0xbU
                                                  : 
                                                 ((0x4000U 
                                                   == 
                                                   (0xfffc000U 
                                                    & __PVT__mant_sum))
                                                   ? 0xcU
                                                   : 
                                                  ((0x2000U 
                                                    == 
                                                    (0xfffe000U 
                                                     & __PVT__mant_sum))
                                                    ? 0xdU
                                                    : 0xeU)))))))
                       : (((((((((0x800U == (0xffff800U 
                                             & __PVT__mant_sum)) 
                                 | (0x400U == (0xffffc00U 
                                               & __PVT__mant_sum))) 
                                | (0x200U == (0xffffe00U 
                                              & __PVT__mant_sum))) 
                               | (0x100U == (0xfffff00U 
                                             & __PVT__mant_sum))) 
                              | (0x80U == (0xfffff80U 
                                           & __PVT__mant_sum))) 
                             | (0x40U == (0xfffffc0U 
                                          & __PVT__mant_sum))) 
                            | (0x20U == (0xfffffe0U 
                                         & __PVT__mant_sum))) 
                           | (0x10U == (0xffffff0U 
                                        & __PVT__mant_sum)))
                           ? ((0x800U == (0xffff800U 
                                          & __PVT__mant_sum))
                               ? 0xfU : ((0x400U == 
                                          (0xffffc00U 
                                           & __PVT__mant_sum))
                                          ? 0x10U : 
                                         ((0x200U == 
                                           (0xffffe00U 
                                            & __PVT__mant_sum))
                                           ? 0x11U : 
                                          ((0x100U 
                                            == (0xfffff00U 
                                                & __PVT__mant_sum))
                                            ? 0x12U
                                            : ((0x80U 
                                                == 
                                                (0xfffff80U 
                                                 & __PVT__mant_sum))
                                                ? 0x13U
                                                : (
                                                   (0x40U 
                                                    == 
                                                    (0xfffffc0U 
                                                     & __PVT__mant_sum))
                                                    ? 0x14U
                                                    : 
                                                   ((0x20U 
                                                     == 
                                                     (0xfffffe0U 
                                                      & __PVT__mant_sum))
                                                     ? 0x15U
                                                     : 0x16U)))))))
                           : ((8U == (0xffffff8U & __PVT__mant_sum))
                               ? 0x17U : ((4U == (0xffffffcU 
                                                  & __PVT__mant_sum))
                                           ? 0x18U : 
                                          ((2U == (0xffffffeU 
                                                   & __PVT__mant_sum))
                                            ? 0x19U
                                            : ((1U 
                                                == __PVT__mant_sum)
                                                ? 0x1aU
                                                : 0x1bU)))))));
    if ((0x8000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  >> 1U));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__large_exp)));
    } else if ((0x4000000U & __PVT__mant_sum)) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & __PVT__mant_sum);
        vlSelf->__PVT__norm_exp = (0xffU & (IData)(vlSelf->__PVT__large_exp));
    } else if (((0x1bU > (IData)(__PVT__lzc)) & ((IData)(vlSelf->__PVT__large_exp) 
                                                 > (IData)(__PVT__lzc)))) {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & (__PVT__mant_sum 
                                                  << (IData)(__PVT__lzc)));
        vlSelf->__PVT__norm_exp = (0xffU & ((IData)(vlSelf->__PVT__large_exp) 
                                            - (IData)(__PVT__lzc)));
    } else {
        vlSelf->__PVT__norm_mant = (0x7ffffffU & 0U);
        vlSelf->__PVT__norm_exp = (0xffU & 0U);
    }
    __PVT__mant_rounded = (0x1ffffffU & ((0xffffffU 
                                          & (vlSelf->__PVT__norm_mant 
                                             >> 3U)) 
                                         + (1U & ((vlSelf->__PVT__norm_mant 
                                                   >> 2U) 
                                                  & (IData)(
                                                            (0U 
                                                             != 
                                                             (0xbU 
                                                              & vlSelf->__PVT__norm_mant)))))));
    if ((0x1000000U & __PVT__mant_rounded)) {
        vlSelf->__PVT__final_exp = (0xffU & ((IData)(1U) 
                                             + (IData)(vlSelf->__PVT__norm_exp)));
        vlSelf->__PVT__rounded_mant = (0x7fffffU & 
                                       (__PVT__mant_rounded 
                                        >> 1U));
    } else {
        vlSelf->__PVT__final_exp = vlSelf->__PVT__norm_exp;
        vlSelf->__PVT__rounded_mant = (0x7fffffU & __PVT__mant_rounded);
    }
}
