// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpu_core_top.h for the primary calling header

#include "Vnpu_core_top__pch.h"
#include "Vnpu_core_top_fp32_adder.h"

VL_ATTR_COLD void Vnpu_core_top_fp32_adder___ctor_var_reset(Vnpu_core_top_fp32_adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vnpu_core_top_fp32_adder___ctor_var_reset\n"); );
    // Body
    vlSelf->fp32_a = VL_RAND_RESET_I(32);
    vlSelf->fp32_b = VL_RAND_RESET_I(32);
    vlSelf->fp32_sum = VL_RAND_RESET_I(32);
    vlSelf->__PVT__a_is_zero = VL_RAND_RESET_I(1);
    vlSelf->__PVT__b_is_zero = VL_RAND_RESET_I(1);
    vlSelf->__PVT__a_is_inf = VL_RAND_RESET_I(1);
    vlSelf->__PVT__b_is_inf = VL_RAND_RESET_I(1);
    vlSelf->__PVT__large_sign = VL_RAND_RESET_I(1);
    vlSelf->__PVT__large_exp = VL_RAND_RESET_I(8);
    vlSelf->__PVT__small_exp = VL_RAND_RESET_I(8);
    vlSelf->__PVT__aligned_small = VL_RAND_RESET_I(27);
    vlSelf->__PVT__sticky_bit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__norm_exp = VL_RAND_RESET_I(8);
    vlSelf->__PVT__norm_mant = VL_RAND_RESET_I(27);
    vlSelf->__PVT__rounded_mant = VL_RAND_RESET_I(23);
    vlSelf->__PVT__final_exp = VL_RAND_RESET_I(8);
    vlSelf->__VdfgExtracted_h18a3deab__0 = VL_RAND_RESET_I(24);
    vlSelf->__VdfgExtracted_hb7d58418__0 = VL_RAND_RESET_I(24);
}
