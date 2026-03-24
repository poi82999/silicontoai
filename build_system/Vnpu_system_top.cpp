// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vnpu_system_top__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vnpu_system_top::Vnpu_system_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vnpu_system_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , mmio_start_dma{vlSymsp->TOP.mmio_start_dma}
    , mmio_dma_target{vlSymsp->TOP.mmio_dma_target}
    , mmio_burst_len{vlSymsp->TOP.mmio_burst_len}
    , mmio_dma_done{vlSymsp->TOP.mmio_dma_done}
    , mmio_swap_banks{vlSymsp->TOP.mmio_swap_banks}
    , mmio_start_npu{vlSymsp->TOP.mmio_start_npu}
    , mmio_npu_mode{vlSymsp->TOP.mmio_npu_mode}
    , mmio_npu_acc_clear{vlSymsp->TOP.mmio_npu_acc_clear}
    , mmio_test_acc_addr_override_en{vlSymsp->TOP.mmio_test_acc_addr_override_en}
    , mmio_test_one_shot_acc_clear_en{vlSymsp->TOP.mmio_test_one_shot_acc_clear_en}
    , mmio_clear_done{vlSymsp->TOP.mmio_clear_done}
    , mmio_npu_done{vlSymsp->TOP.mmio_npu_done}
    , arid{vlSymsp->TOP.arid}
    , arlen{vlSymsp->TOP.arlen}
    , arsize{vlSymsp->TOP.arsize}
    , arburst{vlSymsp->TOP.arburst}
    , arvalid{vlSymsp->TOP.arvalid}
    , arready{vlSymsp->TOP.arready}
    , rid{vlSymsp->TOP.rid}
    , rresp{vlSymsp->TOP.rresp}
    , rlast{vlSymsp->TOP.rlast}
    , rvalid{vlSymsp->TOP.rvalid}
    , rready{vlSymsp->TOP.rready}
    , drain_re{vlSymsp->TOP.drain_re}
    , mmio_total_bursts{vlSymsp->TOP.mmio_total_bursts}
    , mmio_test_acc_addr_override{vlSymsp->TOP.mmio_test_acc_addr_override}
    , mmio_npu_seq_len{vlSymsp->TOP.mmio_npu_seq_len}
    , drain_addr{vlSymsp->TOP.drain_addr}
    , rdata{vlSymsp->TOP.rdata}
    , psum_drain_out{vlSymsp->TOP.psum_drain_out}
    , mmio_src_addr{vlSymsp->TOP.mmio_src_addr}
    , araddr{vlSymsp->TOP.araddr}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vnpu_system_top::Vnpu_system_top(const char* _vcname__)
    : Vnpu_system_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vnpu_system_top::~Vnpu_system_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vnpu_system_top___024root___eval_debug_assertions(Vnpu_system_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vnpu_system_top___024root___eval_static(Vnpu_system_top___024root* vlSelf);
void Vnpu_system_top___024root___eval_initial(Vnpu_system_top___024root* vlSelf);
void Vnpu_system_top___024root___eval_settle(Vnpu_system_top___024root* vlSelf);
void Vnpu_system_top___024root___eval(Vnpu_system_top___024root* vlSelf);

void Vnpu_system_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vnpu_system_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vnpu_system_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vnpu_system_top___024root___eval_static(&(vlSymsp->TOP));
        Vnpu_system_top___024root___eval_initial(&(vlSymsp->TOP));
        Vnpu_system_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vnpu_system_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vnpu_system_top::eventsPending() { return false; }

uint64_t Vnpu_system_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vnpu_system_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vnpu_system_top___024root___eval_final(Vnpu_system_top___024root* vlSelf);

VL_ATTR_COLD void Vnpu_system_top::final() {
    Vnpu_system_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vnpu_system_top::hierName() const { return vlSymsp->name(); }
const char* Vnpu_system_top::modelName() const { return "Vnpu_system_top"; }
unsigned Vnpu_system_top::threads() const { return 1; }
void Vnpu_system_top::prepareClone() const { contextp()->prepareClone(); }
void Vnpu_system_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vnpu_system_top::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vnpu_system_top___024root__trace_decl_types(VerilatedVcd* tracep);

void Vnpu_system_top___024root__trace_init_top(Vnpu_system_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vnpu_system_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnpu_system_top___024root*>(voidSelf);
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vnpu_system_top___024root__trace_decl_types(tracep);
    Vnpu_system_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vnpu_system_top___024root__trace_register(Vnpu_system_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vnpu_system_top::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vnpu_system_top::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vnpu_system_top___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
