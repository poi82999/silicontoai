// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vnpu_system_top__Syms.h"


VL_ATTR_COLD void Vnpu_system_top___024root__trace_full_0_sub_7(Vnpu_system_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_system_top___024root__trace_full_0_sub_7\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+15513,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xcU][5U] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+15514,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xcU][5U])),23);
    bufp->fullBit(oldp+15515,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+15516,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+15517,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [5U] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xcU][5U])))));
    bufp->fullBit(oldp+15518,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+15519,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+15520,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+15521,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15522,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15523,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+15524,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+15525,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+15526,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xcU][6U]),32);
    bufp->fullSData(oldp+15527,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+15528,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+15529,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+15530,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xcU][6U] >> 0x1fU)));
    bufp->fullCData(oldp+15531,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xcU][6U] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+15532,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xcU][6U])),23);
    bufp->fullBit(oldp+15533,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+15534,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+15535,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [6U] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xcU][6U])))));
    bufp->fullBit(oldp+15536,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+15537,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+15538,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+15539,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15540,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15541,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+15542,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+15543,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+15544,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xcU][7U]),32);
    bufp->fullSData(oldp+15545,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+15546,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+15547,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+15548,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xcU][7U] >> 0x1fU)));
    bufp->fullCData(oldp+15549,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xcU][7U] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+15550,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xcU][7U])),23);
    bufp->fullBit(oldp+15551,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+15552,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+15553,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [7U] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xcU][7U])))));
    bufp->fullBit(oldp+15554,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+15555,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+15556,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+15557,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15558,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15559,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+15560,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+15561,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+15562,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xcU][8U]),32);
    bufp->fullSData(oldp+15563,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+15564,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+15565,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+15566,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xcU][8U] >> 0x1fU)));
    bufp->fullCData(oldp+15567,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xcU][8U] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+15568,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xcU][8U])),23);
    bufp->fullBit(oldp+15569,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+15570,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+15571,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [8U] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xcU][8U])))));
    bufp->fullBit(oldp+15572,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+15573,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+15574,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+15575,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15576,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15577,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+15578,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+15579,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+15580,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xcU][9U]),32);
    bufp->fullSData(oldp+15581,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+15582,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+15583,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+15584,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xcU][9U] >> 0x1fU)));
    bufp->fullCData(oldp+15585,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xcU][9U] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+15586,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xcU][9U])),23);
    bufp->fullBit(oldp+15587,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+15588,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+15589,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [9U] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xcU][9U])))));
    bufp->fullBit(oldp+15590,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+15591,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+15592,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+15593,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15594,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15595,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+15596,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+15597,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+15598,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xcU][0xaU]),32);
    bufp->fullSData(oldp+15599,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+15600,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+15601,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+15602,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xcU][0xaU] >> 0x1fU)));
    bufp->fullCData(oldp+15603,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xcU][0xaU] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+15604,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xcU][0xaU])),23);
    bufp->fullBit(oldp+15605,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+15606,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+15607,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [0xaU] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xcU][0xaU])))));
    bufp->fullBit(oldp+15608,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+15609,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+15610,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+15611,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15612,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15613,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+15614,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+15615,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+15616,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xcU][0xbU]),32);
    bufp->fullSData(oldp+15617,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+15618,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+15619,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+15620,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xcU][0xbU] >> 0x1fU)));
    bufp->fullCData(oldp+15621,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xcU][0xbU] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+15622,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xcU][0xbU])),23);
    bufp->fullBit(oldp+15623,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+15624,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+15625,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [0xbU] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xcU][0xbU])))));
    bufp->fullBit(oldp+15626,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+15627,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+15628,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+15629,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15630,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15631,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+15632,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+15633,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+15634,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xcU][0xcU]),32);
    bufp->fullSData(oldp+15635,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+15636,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+15637,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+15638,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xcU][0xcU] >> 0x1fU)));
    bufp->fullCData(oldp+15639,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xcU][0xcU] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+15640,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xcU][0xcU])),23);
    bufp->fullBit(oldp+15641,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+15642,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+15643,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [0xcU] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xcU][0xcU])))));
    bufp->fullBit(oldp+15644,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+15645,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+15646,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+15647,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15648,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15649,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+15650,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+15651,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+15652,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xcU][0xdU]),32);
    bufp->fullSData(oldp+15653,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+15654,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+15655,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+15656,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xcU][0xdU] >> 0x1fU)));
    bufp->fullCData(oldp+15657,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xcU][0xdU] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+15658,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xcU][0xdU])),23);
    bufp->fullBit(oldp+15659,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+15660,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+15661,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [0xdU] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xcU][0xdU])))));
    bufp->fullBit(oldp+15662,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+15663,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+15664,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+15665,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15666,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15667,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+15668,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+15669,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+15670,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xcU][0xeU]),32);
    bufp->fullSData(oldp+15671,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+15672,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+15673,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+15674,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xcU][0xeU] >> 0x1fU)));
    bufp->fullCData(oldp+15675,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xcU][0xeU] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+15676,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xcU][0xeU])),23);
    bufp->fullBit(oldp+15677,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+15678,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+15679,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [0xeU] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xcU][0xeU])))));
    bufp->fullBit(oldp+15680,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+15681,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+15682,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+15683,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15684,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15685,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+15686,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+15687,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+15688,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xcU][0xfU]),32);
    bufp->fullSData(oldp+15689,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+15690,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+15691,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+15692,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xcU][0xfU] >> 0x1fU)));
    bufp->fullCData(oldp+15693,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xcU][0xfU] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+15694,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xcU][0xfU])),23);
    bufp->fullBit(oldp+15695,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+15696,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+15697,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [0xfU] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xcU][0xfU])))));
    bufp->fullBit(oldp+15698,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+15699,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+15700,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+15701,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15702,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15703,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+15704,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+15705,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+15706,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xdU][0U]),32);
    bufp->fullSData(oldp+15707,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+15708,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+15709,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+15710,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xdU][0U] >> 0x1fU)));
    bufp->fullCData(oldp+15711,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xdU][0U] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+15712,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xdU][0U])),23);
    bufp->fullBit(oldp+15713,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+15714,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+15715,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xdU]
                                                   [0U] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xdU][0U])))));
    bufp->fullBit(oldp+15716,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+15717,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+15718,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+15719,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15720,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15721,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+15722,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+15723,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+15724,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xdU][1U]),32);
    bufp->fullSData(oldp+15725,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+15726,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+15727,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+15728,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xdU][1U] >> 0x1fU)));
    bufp->fullCData(oldp+15729,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xdU][1U] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+15730,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xdU][1U])),23);
    bufp->fullBit(oldp+15731,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+15732,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+15733,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xdU]
                                                   [1U] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xdU][1U])))));
    bufp->fullBit(oldp+15734,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+15735,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+15736,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+15737,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15738,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15739,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+15740,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+15741,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+15742,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xdU][2U]),32);
    bufp->fullSData(oldp+15743,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+15744,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+15745,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+15746,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xdU][2U] >> 0x1fU)));
    bufp->fullCData(oldp+15747,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xdU][2U] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+15748,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xdU][2U])),23);
    bufp->fullBit(oldp+15749,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+15750,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+15751,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xdU]
                                                   [2U] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xdU][2U])))));
    bufp->fullBit(oldp+15752,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+15753,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+15754,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+15755,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15756,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15757,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+15758,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+15759,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+15760,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xdU][3U]),32);
    bufp->fullSData(oldp+15761,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+15762,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+15763,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+15764,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xdU][3U] >> 0x1fU)));
    bufp->fullCData(oldp+15765,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xdU][3U] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+15766,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xdU][3U])),23);
    bufp->fullBit(oldp+15767,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+15768,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+15769,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xdU]
                                                   [3U] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xdU][3U])))));
    bufp->fullBit(oldp+15770,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+15771,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+15772,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+15773,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15774,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15775,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+15776,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+15777,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+15778,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xdU][4U]),32);
    bufp->fullSData(oldp+15779,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+15780,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+15781,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+15782,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xdU][4U] >> 0x1fU)));
    bufp->fullCData(oldp+15783,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xdU][4U] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+15784,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xdU][4U])),23);
    bufp->fullBit(oldp+15785,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+15786,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+15787,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xdU]
                                                   [4U] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xdU][4U])))));
    bufp->fullBit(oldp+15788,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+15789,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+15790,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+15791,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15792,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15793,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+15794,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+15795,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+15796,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xdU][5U]),32);
    bufp->fullSData(oldp+15797,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+15798,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+15799,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+15800,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xdU][5U] >> 0x1fU)));
    bufp->fullCData(oldp+15801,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xdU][5U] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+15802,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xdU][5U])),23);
    bufp->fullBit(oldp+15803,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+15804,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+15805,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xdU]
                                                   [5U] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xdU][5U])))));
    bufp->fullBit(oldp+15806,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+15807,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+15808,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+15809,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15810,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15811,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+15812,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+15813,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+15814,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xdU][6U]),32);
    bufp->fullSData(oldp+15815,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+15816,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+15817,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+15818,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xdU][6U] >> 0x1fU)));
    bufp->fullCData(oldp+15819,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xdU][6U] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+15820,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xdU][6U])),23);
    bufp->fullBit(oldp+15821,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+15822,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+15823,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xdU]
                                                   [6U] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xdU][6U])))));
    bufp->fullBit(oldp+15824,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+15825,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+15826,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+15827,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15828,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15829,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+15830,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+15831,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+15832,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xdU][7U]),32);
    bufp->fullSData(oldp+15833,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+15834,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+15835,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+15836,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xdU][7U] >> 0x1fU)));
    bufp->fullCData(oldp+15837,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xdU][7U] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+15838,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xdU][7U])),23);
    bufp->fullBit(oldp+15839,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+15840,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+15841,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xdU]
                                                   [7U] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xdU][7U])))));
    bufp->fullBit(oldp+15842,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+15843,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+15844,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+15845,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15846,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15847,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+15848,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+15849,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+15850,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xdU][8U]),32);
    bufp->fullSData(oldp+15851,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+15852,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+15853,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+15854,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xdU][8U] >> 0x1fU)));
    bufp->fullCData(oldp+15855,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xdU][8U] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+15856,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xdU][8U])),23);
    bufp->fullBit(oldp+15857,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+15858,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+15859,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xdU]
                                                   [8U] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xdU][8U])))));
    bufp->fullBit(oldp+15860,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+15861,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+15862,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+15863,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15864,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15865,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+15866,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+15867,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+15868,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xdU][9U]),32);
    bufp->fullSData(oldp+15869,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+15870,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+15871,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+15872,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xdU][9U] >> 0x1fU)));
    bufp->fullCData(oldp+15873,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xdU][9U] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+15874,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xdU][9U])),23);
    bufp->fullBit(oldp+15875,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+15876,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+15877,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xdU]
                                                   [9U] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xdU][9U])))));
    bufp->fullBit(oldp+15878,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+15879,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+15880,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+15881,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15882,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15883,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+15884,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+15885,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+15886,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xdU][0xaU]),32);
    bufp->fullSData(oldp+15887,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+15888,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+15889,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+15890,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xdU][0xaU] >> 0x1fU)));
    bufp->fullCData(oldp+15891,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xdU][0xaU] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+15892,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xdU][0xaU])),23);
    bufp->fullBit(oldp+15893,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+15894,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+15895,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xdU]
                                                   [0xaU] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xdU][0xaU])))));
    bufp->fullBit(oldp+15896,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+15897,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+15898,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+15899,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15900,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15901,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+15902,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+15903,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+15904,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xdU][0xbU]),32);
    bufp->fullSData(oldp+15905,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+15906,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+15907,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+15908,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xdU][0xbU] >> 0x1fU)));
    bufp->fullCData(oldp+15909,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xdU][0xbU] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+15910,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xdU][0xbU])),23);
    bufp->fullBit(oldp+15911,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+15912,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+15913,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xdU]
                                                   [0xbU] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xdU][0xbU])))));
    bufp->fullBit(oldp+15914,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+15915,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+15916,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+15917,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15918,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15919,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+15920,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+15921,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+15922,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xdU][0xcU]),32);
    bufp->fullSData(oldp+15923,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+15924,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+15925,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+15926,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xdU][0xcU] >> 0x1fU)));
    bufp->fullCData(oldp+15927,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xdU][0xcU] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+15928,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xdU][0xcU])),23);
    bufp->fullBit(oldp+15929,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+15930,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+15931,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xdU]
                                                   [0xcU] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xdU][0xcU])))));
    bufp->fullBit(oldp+15932,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+15933,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+15934,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+15935,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15936,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15937,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+15938,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+15939,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+15940,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xdU][0xdU]),32);
    bufp->fullSData(oldp+15941,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+15942,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+15943,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+15944,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xdU][0xdU] >> 0x1fU)));
    bufp->fullCData(oldp+15945,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xdU][0xdU] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+15946,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xdU][0xdU])),23);
    bufp->fullBit(oldp+15947,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+15948,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+15949,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xdU]
                                                   [0xdU] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xdU][0xdU])))));
    bufp->fullBit(oldp+15950,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+15951,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+15952,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+15953,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15954,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15955,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+15956,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+15957,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+15958,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xdU][0xeU]),32);
    bufp->fullSData(oldp+15959,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+15960,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+15961,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+15962,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xdU][0xeU] >> 0x1fU)));
    bufp->fullCData(oldp+15963,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xdU][0xeU] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+15964,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xdU][0xeU])),23);
    bufp->fullBit(oldp+15965,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+15966,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+15967,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xdU]
                                                   [0xeU] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xdU][0xeU])))));
    bufp->fullBit(oldp+15968,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+15969,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+15970,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+15971,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15972,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15973,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+15974,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+15975,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+15976,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xdU][0xfU]),32);
    bufp->fullSData(oldp+15977,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+15978,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+15979,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+15980,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xdU][0xfU] >> 0x1fU)));
    bufp->fullCData(oldp+15981,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xdU][0xfU] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+15982,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xdU][0xfU])),23);
    bufp->fullBit(oldp+15983,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+15984,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+15985,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xdU]
                                                   [0xfU] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xdU][0xfU])))));
    bufp->fullBit(oldp+15986,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+15987,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+15988,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+15989,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15990,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+15991,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+15992,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+15993,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+15994,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xeU][0U]),32);
    bufp->fullSData(oldp+15995,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+15996,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+15997,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+15998,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xeU][0U] >> 0x1fU)));
    bufp->fullCData(oldp+15999,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xeU][0U] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+16000,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xeU][0U])),23);
    bufp->fullBit(oldp+16001,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+16002,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+16003,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xeU]
                                                   [0U] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xeU][0U])))));
    bufp->fullBit(oldp+16004,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+16005,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+16006,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+16007,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16008,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16009,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+16010,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+16011,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+16012,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xeU][1U]),32);
    bufp->fullSData(oldp+16013,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+16014,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+16015,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+16016,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xeU][1U] >> 0x1fU)));
    bufp->fullCData(oldp+16017,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xeU][1U] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+16018,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xeU][1U])),23);
    bufp->fullBit(oldp+16019,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+16020,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+16021,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xeU]
                                                   [1U] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xeU][1U])))));
    bufp->fullBit(oldp+16022,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+16023,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+16024,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+16025,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16026,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16027,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+16028,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+16029,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+16030,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xeU][2U]),32);
    bufp->fullSData(oldp+16031,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+16032,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+16033,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+16034,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xeU][2U] >> 0x1fU)));
    bufp->fullCData(oldp+16035,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xeU][2U] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+16036,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xeU][2U])),23);
    bufp->fullBit(oldp+16037,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+16038,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+16039,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xeU]
                                                   [2U] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xeU][2U])))));
    bufp->fullBit(oldp+16040,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+16041,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+16042,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+16043,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16044,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16045,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+16046,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+16047,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+16048,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xeU][3U]),32);
    bufp->fullSData(oldp+16049,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+16050,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+16051,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+16052,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xeU][3U] >> 0x1fU)));
    bufp->fullCData(oldp+16053,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xeU][3U] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+16054,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xeU][3U])),23);
    bufp->fullBit(oldp+16055,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+16056,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+16057,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xeU]
                                                   [3U] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xeU][3U])))));
    bufp->fullBit(oldp+16058,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+16059,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+16060,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+16061,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16062,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16063,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+16064,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+16065,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+16066,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xeU][4U]),32);
    bufp->fullSData(oldp+16067,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+16068,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+16069,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+16070,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xeU][4U] >> 0x1fU)));
    bufp->fullCData(oldp+16071,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xeU][4U] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+16072,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xeU][4U])),23);
    bufp->fullBit(oldp+16073,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+16074,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+16075,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xeU]
                                                   [4U] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xeU][4U])))));
    bufp->fullBit(oldp+16076,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+16077,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+16078,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+16079,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16080,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16081,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+16082,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+16083,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+16084,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xeU][5U]),32);
    bufp->fullSData(oldp+16085,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+16086,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+16087,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+16088,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xeU][5U] >> 0x1fU)));
    bufp->fullCData(oldp+16089,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xeU][5U] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+16090,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xeU][5U])),23);
    bufp->fullBit(oldp+16091,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+16092,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+16093,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xeU]
                                                   [5U] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xeU][5U])))));
    bufp->fullBit(oldp+16094,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+16095,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+16096,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+16097,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16098,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16099,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+16100,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+16101,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+16102,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xeU][6U]),32);
    bufp->fullSData(oldp+16103,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+16104,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+16105,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+16106,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xeU][6U] >> 0x1fU)));
    bufp->fullCData(oldp+16107,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xeU][6U] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+16108,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xeU][6U])),23);
    bufp->fullBit(oldp+16109,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+16110,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+16111,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xeU]
                                                   [6U] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xeU][6U])))));
    bufp->fullBit(oldp+16112,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+16113,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+16114,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+16115,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16116,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16117,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+16118,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+16119,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+16120,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xeU][7U]),32);
    bufp->fullSData(oldp+16121,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+16122,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+16123,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+16124,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xeU][7U] >> 0x1fU)));
    bufp->fullCData(oldp+16125,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xeU][7U] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+16126,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xeU][7U])),23);
    bufp->fullBit(oldp+16127,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+16128,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+16129,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xeU]
                                                   [7U] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xeU][7U])))));
    bufp->fullBit(oldp+16130,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+16131,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+16132,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+16133,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16134,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16135,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+16136,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+16137,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+16138,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xeU][8U]),32);
    bufp->fullSData(oldp+16139,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+16140,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+16141,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+16142,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xeU][8U] >> 0x1fU)));
    bufp->fullCData(oldp+16143,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xeU][8U] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+16144,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xeU][8U])),23);
    bufp->fullBit(oldp+16145,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+16146,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+16147,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xeU]
                                                   [8U] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xeU][8U])))));
    bufp->fullBit(oldp+16148,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+16149,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+16150,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+16151,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16152,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16153,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+16154,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+16155,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+16156,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xeU][9U]),32);
    bufp->fullSData(oldp+16157,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+16158,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+16159,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+16160,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xeU][9U] >> 0x1fU)));
    bufp->fullCData(oldp+16161,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xeU][9U] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+16162,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xeU][9U])),23);
    bufp->fullBit(oldp+16163,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+16164,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+16165,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xeU]
                                                   [9U] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xeU][9U])))));
    bufp->fullBit(oldp+16166,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+16167,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+16168,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+16169,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16170,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16171,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+16172,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+16173,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+16174,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xeU][0xaU]),32);
    bufp->fullSData(oldp+16175,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+16176,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+16177,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+16178,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xeU][0xaU] >> 0x1fU)));
    bufp->fullCData(oldp+16179,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xeU][0xaU] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+16180,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xeU][0xaU])),23);
    bufp->fullBit(oldp+16181,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+16182,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+16183,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xeU]
                                                   [0xaU] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xeU][0xaU])))));
    bufp->fullBit(oldp+16184,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+16185,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+16186,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+16187,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16188,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16189,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+16190,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+16191,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+16192,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xeU][0xbU]),32);
    bufp->fullSData(oldp+16193,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+16194,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+16195,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+16196,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xeU][0xbU] >> 0x1fU)));
    bufp->fullCData(oldp+16197,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xeU][0xbU] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+16198,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xeU][0xbU])),23);
    bufp->fullBit(oldp+16199,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+16200,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+16201,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xeU]
                                                   [0xbU] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xeU][0xbU])))));
    bufp->fullBit(oldp+16202,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+16203,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+16204,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+16205,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16206,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16207,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+16208,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+16209,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+16210,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xeU][0xcU]),32);
    bufp->fullSData(oldp+16211,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+16212,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+16213,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+16214,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xeU][0xcU] >> 0x1fU)));
    bufp->fullCData(oldp+16215,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xeU][0xcU] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+16216,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xeU][0xcU])),23);
    bufp->fullBit(oldp+16217,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+16218,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+16219,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xeU]
                                                   [0xcU] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xeU][0xcU])))));
    bufp->fullBit(oldp+16220,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+16221,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+16222,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+16223,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16224,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16225,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+16226,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+16227,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+16228,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xeU][0xdU]),32);
    bufp->fullSData(oldp+16229,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+16230,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+16231,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+16232,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xeU][0xdU] >> 0x1fU)));
    bufp->fullCData(oldp+16233,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xeU][0xdU] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+16234,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xeU][0xdU])),23);
    bufp->fullBit(oldp+16235,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+16236,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+16237,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xeU]
                                                   [0xdU] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xeU][0xdU])))));
    bufp->fullBit(oldp+16238,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+16239,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+16240,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+16241,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16242,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16243,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+16244,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+16245,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+16246,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xeU][0xeU]),32);
    bufp->fullSData(oldp+16247,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+16248,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+16249,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+16250,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xeU][0xeU] >> 0x1fU)));
    bufp->fullCData(oldp+16251,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xeU][0xeU] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+16252,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xeU][0xeU])),23);
    bufp->fullBit(oldp+16253,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+16254,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+16255,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xeU]
                                                   [0xeU] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xeU][0xeU])))));
    bufp->fullBit(oldp+16256,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+16257,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+16258,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+16259,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16260,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16261,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+16262,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+16263,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+16264,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xeU][0xfU]),32);
    bufp->fullSData(oldp+16265,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+16266,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+16267,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+16268,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xeU][0xfU] >> 0x1fU)));
    bufp->fullCData(oldp+16269,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xeU][0xfU] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+16270,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xeU][0xfU])),23);
    bufp->fullBit(oldp+16271,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+16272,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+16273,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xeU]
                                                   [0xfU] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xeU][0xfU])))));
    bufp->fullBit(oldp+16274,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+16275,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+16276,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+16277,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16278,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16279,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+16280,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+16281,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+16282,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xfU][0U]),32);
    bufp->fullSData(oldp+16283,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+16284,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+16285,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+16286,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xfU][0U] >> 0x1fU)));
    bufp->fullCData(oldp+16287,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xfU][0U] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+16288,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xfU][0U])),23);
    bufp->fullBit(oldp+16289,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+16290,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+16291,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xfU]
                                                   [0U] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xfU][0U])))));
    bufp->fullBit(oldp+16292,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+16293,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+16294,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+16295,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16296,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16297,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+16298,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+16299,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+16300,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xfU][1U]),32);
    bufp->fullSData(oldp+16301,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+16302,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+16303,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+16304,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xfU][1U] >> 0x1fU)));
    bufp->fullCData(oldp+16305,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xfU][1U] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+16306,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xfU][1U])),23);
    bufp->fullBit(oldp+16307,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+16308,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+16309,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xfU]
                                                   [1U] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xfU][1U])))));
    bufp->fullBit(oldp+16310,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+16311,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+16312,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+16313,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16314,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16315,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+16316,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+16317,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+16318,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xfU][2U]),32);
    bufp->fullSData(oldp+16319,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+16320,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+16321,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+16322,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xfU][2U] >> 0x1fU)));
    bufp->fullCData(oldp+16323,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xfU][2U] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+16324,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xfU][2U])),23);
    bufp->fullBit(oldp+16325,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+16326,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+16327,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xfU]
                                                   [2U] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xfU][2U])))));
    bufp->fullBit(oldp+16328,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+16329,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+16330,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+16331,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16332,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16333,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+16334,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+16335,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+16336,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xfU][3U]),32);
    bufp->fullSData(oldp+16337,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+16338,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+16339,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+16340,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xfU][3U] >> 0x1fU)));
    bufp->fullCData(oldp+16341,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xfU][3U] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+16342,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xfU][3U])),23);
    bufp->fullBit(oldp+16343,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+16344,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+16345,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xfU]
                                                   [3U] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xfU][3U])))));
    bufp->fullBit(oldp+16346,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+16347,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+16348,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+16349,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16350,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16351,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+16352,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+16353,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+16354,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xfU][4U]),32);
    bufp->fullSData(oldp+16355,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+16356,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+16357,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+16358,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xfU][4U] >> 0x1fU)));
    bufp->fullCData(oldp+16359,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xfU][4U] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+16360,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xfU][4U])),23);
    bufp->fullBit(oldp+16361,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+16362,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+16363,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xfU]
                                                   [4U] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xfU][4U])))));
    bufp->fullBit(oldp+16364,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+16365,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+16366,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+16367,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16368,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16369,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+16370,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+16371,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+16372,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xfU][5U]),32);
    bufp->fullSData(oldp+16373,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+16374,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+16375,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+16376,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xfU][5U] >> 0x1fU)));
    bufp->fullCData(oldp+16377,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xfU][5U] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+16378,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xfU][5U])),23);
    bufp->fullBit(oldp+16379,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+16380,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+16381,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xfU]
                                                   [5U] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xfU][5U])))));
    bufp->fullBit(oldp+16382,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+16383,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+16384,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+16385,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16386,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16387,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+16388,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+16389,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+16390,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xfU][6U]),32);
    bufp->fullSData(oldp+16391,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+16392,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+16393,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+16394,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xfU][6U] >> 0x1fU)));
    bufp->fullCData(oldp+16395,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xfU][6U] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+16396,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xfU][6U])),23);
    bufp->fullBit(oldp+16397,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+16398,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+16399,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xfU]
                                                   [6U] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xfU][6U])))));
    bufp->fullBit(oldp+16400,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+16401,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+16402,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+16403,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16404,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16405,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+16406,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+16407,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+16408,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xfU][7U]),32);
    bufp->fullSData(oldp+16409,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+16410,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+16411,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+16412,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xfU][7U] >> 0x1fU)));
    bufp->fullCData(oldp+16413,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xfU][7U] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+16414,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xfU][7U])),23);
    bufp->fullBit(oldp+16415,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+16416,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+16417,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xfU]
                                                   [7U] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xfU][7U])))));
    bufp->fullBit(oldp+16418,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+16419,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+16420,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+16421,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16422,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16423,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+16424,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+16425,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+16426,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xfU][8U]),32);
    bufp->fullSData(oldp+16427,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+16428,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+16429,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+16430,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xfU][8U] >> 0x1fU)));
    bufp->fullCData(oldp+16431,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xfU][8U] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+16432,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xfU][8U])),23);
    bufp->fullBit(oldp+16433,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+16434,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+16435,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xfU]
                                                   [8U] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xfU][8U])))));
    bufp->fullBit(oldp+16436,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+16437,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+16438,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+16439,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16440,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16441,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+16442,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+16443,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+16444,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xfU][9U]),32);
    bufp->fullSData(oldp+16445,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+16446,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+16447,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+16448,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xfU][9U] >> 0x1fU)));
    bufp->fullCData(oldp+16449,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xfU][9U] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+16450,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xfU][9U])),23);
    bufp->fullBit(oldp+16451,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+16452,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+16453,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xfU]
                                                   [9U] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xfU][9U])))));
    bufp->fullBit(oldp+16454,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+16455,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+16456,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+16457,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16458,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16459,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+16460,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+16461,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+16462,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xfU][0xaU]),32);
    bufp->fullSData(oldp+16463,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+16464,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+16465,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+16466,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xfU][0xaU] >> 0x1fU)));
    bufp->fullCData(oldp+16467,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xfU][0xaU] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+16468,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xfU][0xaU])),23);
    bufp->fullBit(oldp+16469,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+16470,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+16471,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xfU]
                                                   [0xaU] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xfU][0xaU])))));
    bufp->fullBit(oldp+16472,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+16473,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+16474,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+16475,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16476,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16477,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+16478,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+16479,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+16480,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xfU][0xbU]),32);
    bufp->fullSData(oldp+16481,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+16482,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+16483,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+16484,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xfU][0xbU] >> 0x1fU)));
    bufp->fullCData(oldp+16485,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xfU][0xbU] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+16486,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xfU][0xbU])),23);
    bufp->fullBit(oldp+16487,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+16488,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+16489,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xfU]
                                                   [0xbU] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xfU][0xbU])))));
    bufp->fullBit(oldp+16490,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+16491,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+16492,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+16493,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16494,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16495,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+16496,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+16497,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+16498,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xfU][0xcU]),32);
    bufp->fullSData(oldp+16499,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+16500,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+16501,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+16502,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xfU][0xcU] >> 0x1fU)));
    bufp->fullCData(oldp+16503,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xfU][0xcU] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+16504,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xfU][0xcU])),23);
    bufp->fullBit(oldp+16505,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+16506,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+16507,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xfU]
                                                   [0xcU] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xfU][0xcU])))));
    bufp->fullBit(oldp+16508,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+16509,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+16510,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+16511,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16512,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16513,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+16514,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+16515,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+16516,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xfU][0xdU]),32);
    bufp->fullSData(oldp+16517,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+16518,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+16519,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+16520,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xfU][0xdU] >> 0x1fU)));
    bufp->fullCData(oldp+16521,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xfU][0xdU] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+16522,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xfU][0xdU])),23);
    bufp->fullBit(oldp+16523,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+16524,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+16525,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xfU]
                                                   [0xdU] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xfU][0xdU])))));
    bufp->fullBit(oldp+16526,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+16527,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+16528,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+16529,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16530,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16531,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+16532,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+16533,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+16534,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xfU][0xeU]),32);
    bufp->fullSData(oldp+16535,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+16536,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+16537,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+16538,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xfU][0xeU] >> 0x1fU)));
    bufp->fullCData(oldp+16539,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xfU][0xeU] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+16540,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xfU][0xeU])),23);
    bufp->fullBit(oldp+16541,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+16542,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+16543,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xfU]
                                                   [0xeU] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xfU][0xeU])))));
    bufp->fullBit(oldp+16544,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+16545,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+16546,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+16547,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16548,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16549,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+16550,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+16551,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullIData(oldp+16552,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                [0xfU][0xfU]),32);
    bufp->fullSData(oldp+16553,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.act_out),16);
    bufp->fullIData(oldp+16554,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.psum_out),32);
    bufp->fullSData(oldp+16555,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg),16);
    bufp->fullBit(oldp+16556,((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                               [0xfU][0xfU] >> 0x1fU)));
    bufp->fullCData(oldp+16557,((0xffU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xfU][0xfU] 
                                          >> 0x17U))),8);
    bufp->fullIData(oldp+16558,((0x7fffffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                 [0xfU][0xfU])),23);
    bufp->fullBit(oldp+16559,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_zero));
    bufp->fullBit(oldp+16560,(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__u_add__DOT__a_is_inf));
    bufp->fullBit(oldp+16561,(((0xffU == (0xffU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xfU]
                                                   [0xfU] 
                                                   >> 0x17U))) 
                               & (0U != (0x7fffffU 
                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xfU][0xfU])))));
    bufp->fullBit(oldp+16562,((1U & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                     >> 0xfU))));
    bufp->fullCData(oldp+16563,((0x1fU & ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg) 
                                          >> 0xaU))),5);
    bufp->fullSData(oldp+16564,((0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))),10);
    bufp->fullBit(oldp+16565,((IData)((0U == (0x7fffU 
                                              & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16566,((IData)((0x7c00U == (0x7fffU 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))))));
    bufp->fullBit(oldp+16567,((IData)(((0x7c00U == 
                                        (0x7c00U & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullBit(oldp+16568,((IData)(((0U == (0x7c00U 
                                               & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg))) 
                                       & (0U != (0x3ffU 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))))));
    bufp->fullSData(oldp+16569,((0x400U | (0x3ffU & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe.__PVT__weight_reg)))),11);
    bufp->fullBit(oldp+16570,(vlSelf->clk));
    bufp->fullBit(oldp+16571,(vlSelf->rst_n));
    bufp->fullBit(oldp+16572,(vlSelf->mmio_start_dma));
    bufp->fullBit(oldp+16573,(vlSelf->mmio_dma_target));
    bufp->fullQData(oldp+16574,(vlSelf->mmio_src_addr),64);
    bufp->fullCData(oldp+16576,(vlSelf->mmio_burst_len),8);
    bufp->fullSData(oldp+16577,(vlSelf->mmio_total_bursts),16);
    bufp->fullBit(oldp+16578,(vlSelf->mmio_dma_done));
    bufp->fullBit(oldp+16579,(vlSelf->mmio_swap_banks));
    bufp->fullBit(oldp+16580,(vlSelf->mmio_start_npu));
    bufp->fullBit(oldp+16581,(vlSelf->mmio_npu_mode));
    bufp->fullBit(oldp+16582,(vlSelf->mmio_npu_acc_clear));
    bufp->fullBit(oldp+16583,(vlSelf->mmio_test_acc_addr_override_en));
    bufp->fullSData(oldp+16584,(vlSelf->mmio_test_acc_addr_override),9);
    bufp->fullBit(oldp+16585,(vlSelf->mmio_test_one_shot_acc_clear_en));
    bufp->fullBit(oldp+16586,(vlSelf->mmio_clear_done));
    bufp->fullSData(oldp+16587,(vlSelf->mmio_npu_seq_len),16);
    bufp->fullBit(oldp+16588,(vlSelf->mmio_npu_done));
    bufp->fullCData(oldp+16589,(vlSelf->arid),4);
    bufp->fullQData(oldp+16590,(vlSelf->araddr),64);
    bufp->fullCData(oldp+16592,(vlSelf->arlen),8);
    bufp->fullCData(oldp+16593,(vlSelf->arsize),3);
    bufp->fullCData(oldp+16594,(vlSelf->arburst),2);
    bufp->fullBit(oldp+16595,(vlSelf->arvalid));
    bufp->fullBit(oldp+16596,(vlSelf->arready));
    bufp->fullCData(oldp+16597,(vlSelf->rid),4);
    bufp->fullWData(oldp+16598,(vlSelf->rdata),256);
    bufp->fullCData(oldp+16606,(vlSelf->rresp),2);
    bufp->fullBit(oldp+16607,(vlSelf->rlast));
    bufp->fullBit(oldp+16608,(vlSelf->rvalid));
    bufp->fullBit(oldp+16609,(vlSelf->rready));
    bufp->fullBit(oldp+16610,(vlSelf->mmio_drain_start));
    bufp->fullSData(oldp+16611,(vlSelf->mmio_drain_len),9);
    bufp->fullBit(oldp+16612,(vlSelf->mmio_drain_done));
    bufp->fullBit(oldp+16613,(vlSelf->m_axis_psum_tvalid));
    bufp->fullBit(oldp+16614,(vlSelf->m_axis_psum_tready));
    bufp->fullWData(oldp+16615,(vlSelf->m_axis_psum_tdata),512);
    bufp->fullBit(oldp+16631,(vlSelf->m_axis_psum_tlast));
    bufp->fullBit(oldp+16632,(((IData)(vlSelf->rvalid) 
                               & (IData)(vlSelf->rready))));
    bufp->fullBit(oldp+16633,((((0xffffU & ((IData)(vlSelf->npu_system_top__DOT__u_dma__DOT__req_cnt) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_dma__DOT__ar_fire))) 
                                < (IData)(vlSelf->mmio_total_bursts)) 
                               & (8U > (0xffU & (((IData)(vlSelf->npu_system_top__DOT__u_dma__DOT__outstanding_cnt) 
                                                  + (IData)(vlSelf->npu_system_top__DOT__u_dma__DOT__ar_fire)) 
                                                 - (IData)(vlSelf->npu_system_top__DOT__u_dma__DOT__r_last_fire)))))));
    bufp->fullBit(oldp+16634,(((IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__core_acc_valid) 
                               & ((IData)(vlSelf->mmio_test_acc_addr_override_en)
                                   ? ((IData)(vlSelf->mmio_test_one_shot_acc_clear_en)
                                       ? (0U == (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__acc_addr_ctr))
                                       : (IData)(vlSelf->mmio_npu_acc_clear))
                                   : (IData)(vlSelf->mmio_npu_acc_clear)))));
    bufp->fullSData(oldp+16635,(((IData)(vlSelf->mmio_test_acc_addr_override_en)
                                  ? (IData)(vlSelf->mmio_test_acc_addr_override)
                                  : (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__acc_addr_ctr))),9);
    bufp->fullSData(oldp+16636,((0xffffU & vlSelf->rdata[0U])),16);
    bufp->fullSData(oldp+16637,((vlSelf->rdata[0U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+16638,((0xffffU & vlSelf->rdata[1U])),16);
    bufp->fullSData(oldp+16639,((vlSelf->rdata[1U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+16640,((0xffffU & vlSelf->rdata[2U])),16);
    bufp->fullSData(oldp+16641,((vlSelf->rdata[2U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+16642,((0xffffU & vlSelf->rdata[3U])),16);
    bufp->fullSData(oldp+16643,((vlSelf->rdata[3U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+16644,((0xffffU & vlSelf->rdata[4U])),16);
    bufp->fullSData(oldp+16645,((vlSelf->rdata[4U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+16646,((0xffffU & vlSelf->rdata[5U])),16);
    bufp->fullSData(oldp+16647,((vlSelf->rdata[5U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+16648,((0xffffU & vlSelf->rdata[6U])),16);
    bufp->fullSData(oldp+16649,((vlSelf->rdata[6U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+16650,((0xffffU & vlSelf->rdata[7U])),16);
    bufp->fullSData(oldp+16651,((vlSelf->rdata[7U] 
                                 >> 0x10U)),16);
}
