// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbreakout.h for the primary calling header

#include "Vbreakout__pch.h"
#include "Vbreakout___024root.h"

void Vbreakout___024root___eval_act(Vbreakout___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbreakout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbreakout___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vbreakout___024root___nba_sequent__TOP__0(Vbreakout___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbreakout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbreakout___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*5:0*/ __Vdly__ball_x;
    __Vdly__ball_x = 0;
    CData/*5:0*/ __Vdly__ball_y;
    __Vdly__ball_y = 0;
    CData/*5:0*/ __Vdly__paddle_x;
    __Vdly__paddle_x = 0;
    CData/*2:0*/ __Vdly__breakout__DOT__vx;
    __Vdly__breakout__DOT__vx = 0;
    CData/*0:0*/ __Vdly__breakout__DOT__dy;
    __Vdly__breakout__DOT__dy = 0;
    // Body
    __Vdly__breakout__DOT__dy = vlSelf->breakout__DOT__dy;
    __Vdly__breakout__DOT__vx = vlSelf->breakout__DOT__vx;
    __Vdly__paddle_x = vlSelf->paddle_x;
    __Vdly__ball_y = vlSelf->ball_y;
    __Vdly__ball_x = vlSelf->ball_x;
    if (vlSelf->reset) {
        __Vdly__ball_x = 0x14U;
        __Vdly__ball_y = 0xaU;
        __Vdly__paddle_x = 0x11U;
        __Vdly__breakout__DOT__vx = 1U;
        __Vdly__breakout__DOT__dy = 1U;
    } else {
        __Vdly__ball_x = (0x3fU & ((IData)(vlSelf->ball_x) 
                                   + (IData)(vlSelf->breakout__DOT__vx)));
        __Vdly__ball_y = (0x3fU & ((IData)(vlSelf->breakout__DOT__dy)
                                    ? ((IData)(1U) 
                                       + (IData)(vlSelf->ball_y))
                                    : ((IData)(vlSelf->ball_y) 
                                       - (IData)(1U))));
        if ((1U >= (IData)(vlSelf->ball_x))) {
            __Vdly__breakout__DOT__vx = 2U;
        }
        if ((0x26U <= (IData)(vlSelf->ball_x))) {
            __Vdly__breakout__DOT__vx = 6U;
        }
        if ((0U == (IData)(vlSelf->ball_y))) {
            __Vdly__breakout__DOT__dy = 1U;
        }
        if (((IData)(vlSelf->left) & (0U < (IData)(vlSelf->paddle_x)))) {
            __Vdly__paddle_x = (0x3fU & ((IData)(vlSelf->paddle_x) 
                                         - (IData)(1U)));
        } else if (((IData)(vlSelf->right) & (0x22U 
                                              > (IData)(vlSelf->paddle_x)))) {
            __Vdly__paddle_x = (0x3fU & ((IData)(1U) 
                                         + (IData)(vlSelf->paddle_x)));
        }
        if ((((0x13U == (IData)(vlSelf->ball_y)) & 
              ((IData)(vlSelf->ball_x) >= (IData)(vlSelf->paddle_x))) 
             & ((IData)(vlSelf->ball_x) < ((IData)(6U) 
                                           + (IData)(vlSelf->paddle_x))))) {
            __Vdly__breakout__DOT__vx = ((0U == ((IData)(vlSelf->ball_x) 
                                                 - (IData)(vlSelf->paddle_x)))
                                          ? 6U : ((1U 
                                                   == 
                                                   ((IData)(vlSelf->ball_x) 
                                                    - (IData)(vlSelf->paddle_x)))
                                                   ? 7U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    ((IData)(vlSelf->ball_x) 
                                                     - (IData)(vlSelf->paddle_x)))
                                                    ? 0U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     ((IData)(vlSelf->ball_x) 
                                                      - (IData)(vlSelf->paddle_x)))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      == 
                                                      ((IData)(vlSelf->ball_x) 
                                                       - (IData)(vlSelf->paddle_x)))
                                                      ? 1U
                                                      : 
                                                     ((5U 
                                                       == 
                                                       ((IData)(vlSelf->ball_x) 
                                                        - (IData)(vlSelf->paddle_x)))
                                                       ? 2U
                                                       : (IData)(vlSelf->breakout__DOT__vx)))))));
            __Vdly__breakout__DOT__dy = 0U;
        }
    }
    vlSelf->ball_x = __Vdly__ball_x;
    vlSelf->ball_y = __Vdly__ball_y;
    vlSelf->paddle_x = __Vdly__paddle_x;
    vlSelf->breakout__DOT__vx = __Vdly__breakout__DOT__vx;
    vlSelf->breakout__DOT__dy = __Vdly__breakout__DOT__dy;
}

void Vbreakout___024root___eval_nba(Vbreakout___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbreakout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbreakout___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbreakout___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vbreakout___024root___eval_triggers__act(Vbreakout___024root* vlSelf);

bool Vbreakout___024root___eval_phase__act(Vbreakout___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbreakout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbreakout___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vbreakout___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vbreakout___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vbreakout___024root___eval_phase__nba(Vbreakout___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbreakout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbreakout___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vbreakout___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbreakout___024root___dump_triggers__nba(Vbreakout___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbreakout___024root___dump_triggers__act(Vbreakout___024root* vlSelf);
#endif  // VL_DEBUG

void Vbreakout___024root___eval(Vbreakout___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbreakout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbreakout___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vbreakout___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("src/breakout.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vbreakout___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("src/breakout.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vbreakout___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vbreakout___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vbreakout___024root___eval_debug_assertions(Vbreakout___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbreakout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbreakout___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->left & 0xfeU))) {
        Verilated::overWidthError("left");}
    if (VL_UNLIKELY((vlSelf->right & 0xfeU))) {
        Verilated::overWidthError("right");}
}
#endif  // VL_DEBUG
