// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnpu_core_top.h for the primary calling header

#ifndef VERILATED_VNPU_CORE_TOP_MAC_PE_H_
#define VERILATED_VNPU_CORE_TOP_MAC_PE_H_  // guard

#include "verilated.h"


class Vnpu_core_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnpu_core_top_mac_pe final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(weight_load_en,0,0);
    CData/*0:0*/ __PVT__u_add__DOT__a_is_zero;
    CData/*0:0*/ __PVT__u_add__DOT__b_is_zero;
    CData/*0:0*/ __PVT__u_add__DOT__a_is_inf;
    CData/*0:0*/ __PVT__u_add__DOT__b_is_inf;
    CData/*0:0*/ __PVT__u_add__DOT__large_sign;
    CData/*7:0*/ __PVT__u_add__DOT__large_exp;
    CData/*7:0*/ __PVT__u_add__DOT__small_exp;
    CData/*0:0*/ __PVT__u_add__DOT__sticky_bit;
    CData/*7:0*/ __PVT__u_add__DOT__norm_exp;
    CData/*7:0*/ __PVT__u_add__DOT__final_exp;
    VL_IN16(weight_in,15,0);
    VL_IN16(act_in,15,0);
    VL_OUT16(act_out,15,0);
    SData/*15:0*/ __PVT__weight_reg;
    VL_IN(psum_in,31,0);
    VL_OUT(psum_out,31,0);
    IData/*31:0*/ __PVT__fp32_product;
    IData/*26:0*/ __PVT__u_add__DOT__aligned_small;
    IData/*26:0*/ __PVT__u_add__DOT__norm_mant;
    IData/*22:0*/ __PVT__u_add__DOT__rounded_mant;
    IData/*23:0*/ u_add__DOT____VdfgExtracted_h18a3deab__0;

    // INTERNAL VARIABLES
    Vnpu_core_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vnpu_core_top_mac_pe(Vnpu_core_top__Syms* symsp, const char* v__name);
    ~Vnpu_core_top_mac_pe();
    VL_UNCOPYABLE(Vnpu_core_top_mac_pe);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
