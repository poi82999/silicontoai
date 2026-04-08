// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnpu_system_top.h for the primary calling header

#ifndef VERILATED_VNPU_SYSTEM_TOP_FP32_ADDER_H_
#define VERILATED_VNPU_SYSTEM_TOP_FP32_ADDER_H_  // guard

#include "verilated.h"


class Vnpu_system_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnpu_system_top_fp32_adder final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__a_is_zero;
    CData/*0:0*/ __PVT__b_is_zero;
    CData/*0:0*/ __PVT__a_is_inf;
    CData/*0:0*/ __PVT__b_is_inf;
    CData/*0:0*/ __PVT__large_sign;
    CData/*7:0*/ __PVT__large_exp;
    CData/*7:0*/ __PVT__small_exp;
    CData/*7:0*/ __PVT__exp_diff;
    CData/*0:0*/ __PVT__a_is_larger;
    CData/*0:0*/ __PVT__sticky_bit;
    CData/*7:0*/ __PVT__norm_exp;
    CData/*4:0*/ __PVT__lzc;
    CData/*7:0*/ __PVT__final_exp;
    VL_IN(fp32_a,31,0);
    VL_IN(fp32_b,31,0);
    VL_OUT(fp32_sum,31,0);
    IData/*23:0*/ __PVT__large_mant;
    IData/*23:0*/ __PVT__small_mant;
    IData/*26:0*/ __PVT__aligned_small;
    IData/*27:0*/ __PVT__mant_sum;
    IData/*26:0*/ __PVT__norm_mant;
    IData/*22:0*/ __PVT__rounded_mant;
    IData/*24:0*/ __PVT__mant_rounded;
    IData/*23:0*/ __VdfgExtracted_h18a3deab__0;

    // INTERNAL VARIABLES
    Vnpu_system_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vnpu_system_top_fp32_adder(Vnpu_system_top__Syms* symsp, const char* v__name);
    ~Vnpu_system_top_fp32_adder();
    VL_UNCOPYABLE(Vnpu_system_top_fp32_adder);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
