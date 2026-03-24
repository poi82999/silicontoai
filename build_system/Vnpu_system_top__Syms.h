// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VNPU_SYSTEM_TOP__SYMS_H_
#define VERILATED_VNPU_SYSTEM_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vnpu_system_top.h"

// INCLUDE MODULE CLASSES
#include "Vnpu_system_top___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vnpu_system_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vnpu_system_top* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vnpu_system_top___024root      TOP;

    // CONSTRUCTORS
    Vnpu_system_top__Syms(VerilatedContext* contextp, const char* namep, Vnpu_system_top* modelp);
    ~Vnpu_system_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
