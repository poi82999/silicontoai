// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnpu_core_top.h for the primary calling header

#ifndef VERILATED_VNPU_CORE_TOP___024UNIT_H_
#define VERILATED_VNPU_CORE_TOP___024UNIT_H_  // guard

#include "verilated.h"


class Vnpu_core_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnpu_core_top___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vnpu_core_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vnpu_core_top___024unit(Vnpu_core_top__Syms* symsp, const char* v__name);
    ~Vnpu_core_top___024unit();
    VL_UNCOPYABLE(Vnpu_core_top___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
