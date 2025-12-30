// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbreakout.h for the primary calling header

#include "Vbreakout__pch.h"
#include "Vbreakout___024root.h"

VL_ATTR_COLD void Vbreakout___024root___eval_static(Vbreakout___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbreakout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbreakout___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vbreakout___024root___eval_initial(Vbreakout___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbreakout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbreakout___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
}

VL_ATTR_COLD void Vbreakout___024root___eval_final(Vbreakout___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbreakout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbreakout___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vbreakout___024root___eval_settle(Vbreakout___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbreakout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbreakout___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbreakout___024root___dump_triggers__act(Vbreakout___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbreakout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbreakout___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or posedge reset)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbreakout___024root___dump_triggers__nba(Vbreakout___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbreakout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbreakout___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or posedge reset)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vbreakout___024root___ctor_var_reset(Vbreakout___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbreakout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbreakout___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->left = VL_RAND_RESET_I(1);
    vlSelf->right = VL_RAND_RESET_I(1);
    vlSelf->ball_x = VL_RAND_RESET_I(6);
    vlSelf->ball_y = VL_RAND_RESET_I(6);
    vlSelf->paddle_x = VL_RAND_RESET_I(6);
    vlSelf->breakout__DOT__vx = VL_RAND_RESET_I(3);
    vlSelf->breakout__DOT__dy = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_RAND_RESET_I(1);
}
