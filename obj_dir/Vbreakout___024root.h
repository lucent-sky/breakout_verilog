// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbreakout.h for the primary calling header

#ifndef VERILATED_VBREAKOUT___024ROOT_H_
#define VERILATED_VBREAKOUT___024ROOT_H_  // guard

#include "verilated.h"


class Vbreakout__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbreakout___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(left,0,0);
    VL_IN8(right,0,0);
    VL_OUT8(ball_x,5,0);
    VL_OUT8(ball_y,5,0);
    VL_OUT8(paddle_x,5,0);
    CData/*2:0*/ breakout__DOT__vx;
    CData/*0:0*/ breakout__DOT__dy;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vbreakout__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbreakout___024root(Vbreakout__Syms* symsp, const char* v__name);
    ~Vbreakout___024root();
    VL_UNCOPYABLE(Vbreakout___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
