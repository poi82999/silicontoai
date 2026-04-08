// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpu_core_top.h for the primary calling header

#include "Vnpu_core_top__pch.h"
#include "Vnpu_core_top__Syms.h"
#include "Vnpu_core_top___024root.h"

void Vnpu_core_top___024root___ctor_var_reset(Vnpu_core_top___024root* vlSelf);

Vnpu_core_top___024root::Vnpu_core_top___024root(Vnpu_core_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vnpu_core_top___024root___ctor_var_reset(this);
}

void Vnpu_core_top___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vnpu_core_top___024root::~Vnpu_core_top___024root() {
}
