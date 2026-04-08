// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpu_core_top.h for the primary calling header

#include "Vnpu_core_top__pch.h"
#include "Vnpu_core_top_mac_pe.h"

VL_ATTR_COLD void Vnpu_core_top_mac_pe___ctor_var_reset(Vnpu_core_top_mac_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnpu_core_top_mac_pe___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->weight_load_en = VL_RAND_RESET_I(1);
    vlSelf->weight_in = VL_RAND_RESET_I(16);
    vlSelf->act_in = VL_RAND_RESET_I(16);
    vlSelf->psum_in = VL_RAND_RESET_I(32);
    vlSelf->act_out = VL_RAND_RESET_I(16);
    vlSelf->psum_out = VL_RAND_RESET_I(32);
    vlSelf->__PVT__weight_reg = VL_RAND_RESET_I(16);
    vlSelf->__PVT__fp32_product = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_add__DOT__a_is_zero = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_add__DOT__b_is_zero = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_add__DOT__a_is_inf = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_add__DOT__b_is_inf = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_add__DOT__large_sign = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_add__DOT__large_exp = VL_RAND_RESET_I(8);
    vlSelf->__PVT__u_add__DOT__small_exp = VL_RAND_RESET_I(8);
    vlSelf->__PVT__u_add__DOT__aligned_small = VL_RAND_RESET_I(27);
    vlSelf->__PVT__u_add__DOT__sticky_bit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_add__DOT__norm_exp = VL_RAND_RESET_I(8);
    vlSelf->__PVT__u_add__DOT__norm_mant = VL_RAND_RESET_I(27);
    vlSelf->__PVT__u_add__DOT__rounded_mant = VL_RAND_RESET_I(23);
    vlSelf->__PVT__u_add__DOT__final_exp = VL_RAND_RESET_I(8);
    vlSelf->u_add__DOT____VdfgExtracted_h18a3deab__0 = VL_RAND_RESET_I(24);
}
