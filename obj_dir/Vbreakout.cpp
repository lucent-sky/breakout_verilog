// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vbreakout__pch.h"

//============================================================
// Constructors

Vbreakout::Vbreakout(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vbreakout__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , left{vlSymsp->TOP.left}
    , right{vlSymsp->TOP.right}
    , ball_x{vlSymsp->TOP.ball_x}
    , ball_y{vlSymsp->TOP.ball_y}
    , paddle_x{vlSymsp->TOP.paddle_x}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vbreakout::Vbreakout(const char* _vcname__)
    : Vbreakout(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vbreakout::~Vbreakout() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vbreakout___024root___eval_debug_assertions(Vbreakout___024root* vlSelf);
#endif  // VL_DEBUG
void Vbreakout___024root___eval_static(Vbreakout___024root* vlSelf);
void Vbreakout___024root___eval_initial(Vbreakout___024root* vlSelf);
void Vbreakout___024root___eval_settle(Vbreakout___024root* vlSelf);
void Vbreakout___024root___eval(Vbreakout___024root* vlSelf);

void Vbreakout::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vbreakout::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vbreakout___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vbreakout___024root___eval_static(&(vlSymsp->TOP));
        Vbreakout___024root___eval_initial(&(vlSymsp->TOP));
        Vbreakout___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vbreakout___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vbreakout::eventsPending() { return false; }

uint64_t Vbreakout::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vbreakout::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vbreakout___024root___eval_final(Vbreakout___024root* vlSelf);

VL_ATTR_COLD void Vbreakout::final() {
    Vbreakout___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vbreakout::hierName() const { return vlSymsp->name(); }
const char* Vbreakout::modelName() const { return "Vbreakout"; }
unsigned Vbreakout::threads() const { return 1; }
void Vbreakout::prepareClone() const { contextp()->prepareClone(); }
void Vbreakout::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vbreakout::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vbreakout::trace()' called on model that was Verilated without --trace option");
}
