// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnpu_core_top.h for the primary calling header

#ifndef VERILATED_VNPU_CORE_TOP_FP32_ADDER_H_
#define VERILATED_VNPU_CORE_TOP_FP32_ADDER_H_  // guard

#include "verilated.h"


class Vnpu_core_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnpu_core_top_fp32_adder final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__a_is_zero;
    CData/*0:0*/ __PVT__b_is_zero;
    CData/*0:0*/ __PVT__a_is_inf;
    CData/*0:0*/ __PVT__b_is_inf;
    CData/*0:0*/ __PVT__large_sign;
    CData/*7:0*/ __PVT__large_exp;
    CData/*7:0*/ __PVT__small_exp;
    CData/*0:0*/ __PVT__sticky_bit;
    CData/*7:0*/ __PVT__norm_exp;
    CData/*7:0*/ __PVT__final_exp;
    VL_IN(fp32_a,31,0);
    VL_IN(fp32_b,31,0);
    VL_OUT(fp32_sum,31,0);
    IData/*26:0*/ __PVT__aligned_small;
    IData/*26:0*/ __PVT__norm_mant;
    IData/*22:0*/ __PVT__rounded_mant;
    IData/*23:0*/ __VdfgExtracted_h18a3deab__0;
    IData/*23:0*/ __VdfgExtracted_hb7d58418__0;

    // INTERNAL VARIABLES
    Vnpu_core_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vnpu_core_top_fp32_adder(Vnpu_core_top__Syms* symsp, const char* v__name);
    ~Vnpu_core_top_fp32_adder();
    VL_UNCOPYABLE(Vnpu_core_top_fp32_adder);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
