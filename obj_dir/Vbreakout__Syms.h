// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VBREAKOUT__SYMS_H_
#define VERILATED_VBREAKOUT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vbreakout.h"

// INCLUDE MODULE CLASSES
#include "Vbreakout___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vbreakout__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vbreakout* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vbreakout___024root            TOP;

    // CONSTRUCTORS
    Vbreakout__Syms(VerilatedContext* contextp, const char* namep, Vbreakout* modelp);
    ~Vbreakout__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
