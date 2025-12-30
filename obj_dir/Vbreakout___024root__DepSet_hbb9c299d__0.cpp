// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbreakout.h for the primary calling header

#include "Vbreakout__pch.h"
#include "Vbreakout__Syms.h"
#include "Vbreakout___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbreakout___024root___dump_triggers__act(Vbreakout___024root* vlSelf);
#endif  // VL_DEBUG

void Vbreakout___024root___eval_triggers__act(Vbreakout___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbreakout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbreakout___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((IData)(vlSelf->reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__reset__0)))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbreakout___024root___dump_triggers__act(vlSelf);
    }
#endif
}
