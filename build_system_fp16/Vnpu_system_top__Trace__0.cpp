// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vnpu_system_top__Syms.h"


void Vnpu_system_top___024root__trace_chg_0_sub_0(Vnpu_system_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);
void Vnpu_system_top___024root__trace_chg_0_sub_1(Vnpu_system_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);
void Vnpu_system_top___024root__trace_chg_0_sub_2(Vnpu_system_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);
void Vnpu_system_top___024root__trace_chg_0_sub_3(Vnpu_system_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);
void Vnpu_system_top___024root__trace_chg_0_sub_4(Vnpu_system_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);
void Vnpu_system_top___024root__trace_chg_0_sub_5(Vnpu_system_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);
void Vnpu_system_top___024root__trace_chg_0_sub_6(Vnpu_system_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);
void Vnpu_system_top___024root__trace_chg_0_sub_7(Vnpu_system_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vnpu_system_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_system_top___024root__trace_chg_0\n"); );
    // Init
    Vnpu_system_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnpu_system_top___024root*>(voidSelf);
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vnpu_system_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
    Vnpu_system_top___024root__trace_chg_0_sub_1((&vlSymsp->TOP), bufp);
    Vnpu_system_top___024root__trace_chg_0_sub_2((&vlSymsp->TOP), bufp);
    Vnpu_system_top___024root__trace_chg_0_sub_3((&vlSymsp->TOP), bufp);
    Vnpu_system_top___024root__trace_chg_0_sub_4((&vlSymsp->TOP), bufp);
    Vnpu_system_top___024root__trace_chg_0_sub_5((&vlSymsp->TOP), bufp);
    Vnpu_system_top___024root__trace_chg_0_sub_6((&vlSymsp->TOP), bufp);
    Vnpu_system_top___024root__trace_chg_0_sub_7((&vlSymsp->TOP), bufp);
}

void Vnpu_system_top___024root__trace_chg_0_sub_0(Vnpu_system_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_system_top___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->npu_system_top__DOT__dma_axis_tvalid));
        bufp->chgBit(oldp+1,(vlSelf->npu_system_top__DOT__dma_axis_tlast));
        bufp->chgBit(oldp+2,(vlSelf->npu_system_top__DOT__mxe_wt_tvalid));
        bufp->chgBit(oldp+3,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__core_acc_valid));
        bufp->chgBit(oldp+4,(vlSelf->npu_system_top__DOT__u_dma__DOT__ar_fire));
        bufp->chgBit(oldp+5,(vlSelf->npu_system_top__DOT__u_dma__DOT__r_last_fire));
        bufp->chgSData(oldp+6,((0xffffU & ((IData)(vlSelf->npu_system_top__DOT__u_dma__DOT__req_cnt) 
                                           + (IData)(vlSelf->npu_system_top__DOT__u_dma__DOT__ar_fire)))),16);
        bufp->chgCData(oldp+7,((0xffU & (((IData)(vlSelf->npu_system_top__DOT__u_dma__DOT__outstanding_cnt) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_dma__DOT__ar_fire)) 
                                         - (IData)(vlSelf->npu_system_top__DOT__u_dma__DOT__r_last_fire)))),8);
        bufp->chgSData(oldp+8,(((IData)(vlSelf->npu_system_top__DOT__mxe_wt_tvalid)
                                 ? (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__wt_load_shift)
                                 : 0U)),16);
        bufp->chgWData(oldp+9,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__array_act_right),256);
        bufp->chgWData(oldp+17,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__act_skewed),256);
        bufp->chgBit(oldp+25,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT____Vcellinp__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__weight_load_en));
        bufp->chgSData(oldp+26,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0U][0U]),16);
        bufp->chgIData(oldp+27,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+28,(((((0xffU == (0xffU 
                                              & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                 [0U]
                                                 [0U] 
                                                 >> 0x17U))) 
                                   & (0U != (0x7fffffU 
                                             & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0U][0U]))) 
                                  | (IData)(((0x7f800000U 
                                              == (0x7f800000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                             & (0U 
                                                != 
                                                (0x7fffffU 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                  ? 0x7fc00000U : (
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                    ? 
                                                   (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0U]
                                                      [0U] 
                                                      >> 0x1fU) 
                                                     != 
                                                     (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                      >> 0x1fU))
                                                     ? 0x7fc00000U
                                                     : 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                        [0U]
                                                        [0U])))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                        [0U]
                                                        [0U]))
                                                     : 
                                                    ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                      ? 
                                                     (0x7f800000U 
                                                      | (0x80000000U 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                       & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                       ? 
                                                      (0x80000000U 
                                                       & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                          [0U]
                                                          [0U] 
                                                          & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                        ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                        : 
                                                       ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                         ? 
                                                        vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                        [0U]
                                                        [0U]
                                                         : 
                                                        (((0U 
                                                           == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                          & (0U 
                                                             == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                          ? 0U
                                                          : 
                                                         ((0xffU 
                                                           <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                           ? 
                                                          (0x7f800000U 
                                                           | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                              << 0x1fU))
                                                           : 
                                                          (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                            << 0x1fU) 
                                                           | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                               << 0x17U) 
                                                              | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+29,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                     [0U][0U] >> 0xfU))));
        bufp->chgCData(oldp+30,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][0U] 
                                          >> 0xaU))),5);
        bufp->chgSData(oldp+31,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0U][0U])),10);
        bufp->chgBit(oldp+32,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0U]
                                                [0U] 
                                                >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0U][0U])))));
        bufp->chgBit(oldp+33,(((0x1fU == (0x1fU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0U]
                                                   [0U] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0U][0U])))));
        bufp->chgBit(oldp+34,(((0x1fU == (0x1fU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0U]
                                                   [0U] 
                                                   >> 0xaU))) 
                               & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0U][0U])))));
        bufp->chgBit(oldp+35,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0U]
                                                [0U] 
                                                >> 0xaU))) 
                               & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0U][0U])))));
        bufp->chgBit(oldp+36,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+37,((0x400U | (0x3ffU & 
                                           vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0U][0U]))),11);
        bufp->chgIData(oldp+38,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+39,((0x1ffU & ((IData)(0x61U) 
                                           + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+40,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                  ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                  << 2U))
                                  : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                  << 3U)))),23);
        bufp->chgSData(oldp+41,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+42,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0U][0xaU]),16);
        bufp->chgIData(oldp+43,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+44,(((((0xffU == (0xffU 
                                              & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                 [0U]
                                                 [0xaU] 
                                                 >> 0x17U))) 
                                   & (0U != (0x7fffffU 
                                             & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0U][0xaU]))) 
                                  | (IData)(((0x7f800000U 
                                              == (0x7f800000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                             & (0U 
                                                != 
                                                (0x7fffffU 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                  ? 0x7fc00000U : (
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                    ? 
                                                   (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0U]
                                                      [0xaU] 
                                                      >> 0x1fU) 
                                                     != 
                                                     (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                      >> 0x1fU))
                                                     ? 0x7fc00000U
                                                     : 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                        [0U]
                                                        [0xaU])))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                        [0U]
                                                        [0xaU]))
                                                     : 
                                                    ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                      ? 
                                                     (0x7f800000U 
                                                      | (0x80000000U 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                       & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                       ? 
                                                      (0x80000000U 
                                                       & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                          [0U]
                                                          [0xaU] 
                                                          & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                        ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                        : 
                                                       ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                         ? 
                                                        vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                        [0U]
                                                        [0xaU]
                                                         : 
                                                        (((0U 
                                                           == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                          & (0U 
                                                             == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                          ? 0U
                                                          : 
                                                         ((0xffU 
                                                           <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                           ? 
                                                          (0x7f800000U 
                                                           | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                              << 0x1fU))
                                                           : 
                                                          (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                            << 0x1fU) 
                                                           | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                               << 0x17U) 
                                                              | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+45,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                     [0U][0xaU] >> 0xfU))));
        bufp->chgCData(oldp+46,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][0xaU] 
                                          >> 0xaU))),5);
        bufp->chgSData(oldp+47,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0U][0xaU])),10);
        bufp->chgBit(oldp+48,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0U]
                                                [0xaU] 
                                                >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0U][0xaU])))));
        bufp->chgBit(oldp+49,(((0x1fU == (0x1fU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0U]
                                                   [0xaU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0U][0xaU])))));
        bufp->chgBit(oldp+50,(((0x1fU == (0x1fU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0U]
                                                   [0xaU] 
                                                   >> 0xaU))) 
                               & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0U][0xaU])))));
        bufp->chgBit(oldp+51,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0U]
                                                [0xaU] 
                                                >> 0xaU))) 
                               & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0U][0xaU])))));
        bufp->chgBit(oldp+52,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+53,((0x400U | (0x3ffU & 
                                           vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0U][0xaU]))),11);
        bufp->chgIData(oldp+54,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+55,((0x1ffU & ((IData)(0x61U) 
                                           + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+56,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                  ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                  << 2U))
                                  : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                  << 3U)))),23);
        bufp->chgSData(oldp+57,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+58,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0U][0xbU]),16);
        bufp->chgIData(oldp+59,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+60,(((((0xffU == (0xffU 
                                              & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                 [0U]
                                                 [0xbU] 
                                                 >> 0x17U))) 
                                   & (0U != (0x7fffffU 
                                             & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0U][0xbU]))) 
                                  | (IData)(((0x7f800000U 
                                              == (0x7f800000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                             & (0U 
                                                != 
                                                (0x7fffffU 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                  ? 0x7fc00000U : (
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                    ? 
                                                   (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0U]
                                                      [0xbU] 
                                                      >> 0x1fU) 
                                                     != 
                                                     (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                      >> 0x1fU))
                                                     ? 0x7fc00000U
                                                     : 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                        [0U]
                                                        [0xbU])))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                        [0U]
                                                        [0xbU]))
                                                     : 
                                                    ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                      ? 
                                                     (0x7f800000U 
                                                      | (0x80000000U 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                       & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                       ? 
                                                      (0x80000000U 
                                                       & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                          [0U]
                                                          [0xbU] 
                                                          & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                        ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                        : 
                                                       ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                         ? 
                                                        vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                        [0U]
                                                        [0xbU]
                                                         : 
                                                        (((0U 
                                                           == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                          & (0U 
                                                             == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                          ? 0U
                                                          : 
                                                         ((0xffU 
                                                           <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                           ? 
                                                          (0x7f800000U 
                                                           | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                              << 0x1fU))
                                                           : 
                                                          (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                            << 0x1fU) 
                                                           | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                               << 0x17U) 
                                                              | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+61,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                     [0U][0xbU] >> 0xfU))));
        bufp->chgCData(oldp+62,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][0xbU] 
                                          >> 0xaU))),5);
        bufp->chgSData(oldp+63,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0U][0xbU])),10);
        bufp->chgBit(oldp+64,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0U]
                                                [0xbU] 
                                                >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0U][0xbU])))));
        bufp->chgBit(oldp+65,(((0x1fU == (0x1fU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0U]
                                                   [0xbU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0U][0xbU])))));
        bufp->chgBit(oldp+66,(((0x1fU == (0x1fU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0U]
                                                   [0xbU] 
                                                   >> 0xaU))) 
                               & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0U][0xbU])))));
        bufp->chgBit(oldp+67,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0U]
                                                [0xbU] 
                                                >> 0xaU))) 
                               & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0U][0xbU])))));
        bufp->chgBit(oldp+68,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+69,((0x400U | (0x3ffU & 
                                           vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0U][0xbU]))),11);
        bufp->chgIData(oldp+70,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+71,((0x1ffU & ((IData)(0x61U) 
                                           + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+72,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                  ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                  << 2U))
                                  : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                  << 3U)))),23);
        bufp->chgSData(oldp+73,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+74,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0U][0xcU]),16);
        bufp->chgIData(oldp+75,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+76,(((((0xffU == (0xffU 
                                              & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                 [0U]
                                                 [0xcU] 
                                                 >> 0x17U))) 
                                   & (0U != (0x7fffffU 
                                             & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0U][0xcU]))) 
                                  | (IData)(((0x7f800000U 
                                              == (0x7f800000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                             & (0U 
                                                != 
                                                (0x7fffffU 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                  ? 0x7fc00000U : (
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                    ? 
                                                   (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0U]
                                                      [0xcU] 
                                                      >> 0x1fU) 
                                                     != 
                                                     (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                      >> 0x1fU))
                                                     ? 0x7fc00000U
                                                     : 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                        [0U]
                                                        [0xcU])))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                        [0U]
                                                        [0xcU]))
                                                     : 
                                                    ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                      ? 
                                                     (0x7f800000U 
                                                      | (0x80000000U 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                       & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                       ? 
                                                      (0x80000000U 
                                                       & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                          [0U]
                                                          [0xcU] 
                                                          & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                        ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                        : 
                                                       ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                         ? 
                                                        vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                        [0U]
                                                        [0xcU]
                                                         : 
                                                        (((0U 
                                                           == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                          & (0U 
                                                             == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                          ? 0U
                                                          : 
                                                         ((0xffU 
                                                           <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                           ? 
                                                          (0x7f800000U 
                                                           | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                              << 0x1fU))
                                                           : 
                                                          (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                            << 0x1fU) 
                                                           | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                               << 0x17U) 
                                                              | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+77,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                     [0U][0xcU] >> 0xfU))));
        bufp->chgCData(oldp+78,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][0xcU] 
                                          >> 0xaU))),5);
        bufp->chgSData(oldp+79,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0U][0xcU])),10);
        bufp->chgBit(oldp+80,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0U]
                                                [0xcU] 
                                                >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0U][0xcU])))));
        bufp->chgBit(oldp+81,(((0x1fU == (0x1fU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0U]
                                                   [0xcU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0U][0xcU])))));
        bufp->chgBit(oldp+82,(((0x1fU == (0x1fU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0U]
                                                   [0xcU] 
                                                   >> 0xaU))) 
                               & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0U][0xcU])))));
        bufp->chgBit(oldp+83,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0U]
                                                [0xcU] 
                                                >> 0xaU))) 
                               & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0U][0xcU])))));
        bufp->chgBit(oldp+84,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+85,((0x400U | (0x3ffU & 
                                           vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0U][0xcU]))),11);
        bufp->chgIData(oldp+86,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+87,((0x1ffU & ((IData)(0x61U) 
                                           + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+88,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                  ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                  << 2U))
                                  : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                  << 3U)))),23);
        bufp->chgSData(oldp+89,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+90,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0U][0xdU]),16);
        bufp->chgIData(oldp+91,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+92,(((((0xffU == (0xffU 
                                              & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                 [0U]
                                                 [0xdU] 
                                                 >> 0x17U))) 
                                   & (0U != (0x7fffffU 
                                             & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                             [0U][0xdU]))) 
                                  | (IData)(((0x7f800000U 
                                              == (0x7f800000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                             & (0U 
                                                != 
                                                (0x7fffffU 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                  ? 0x7fc00000U : (
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                    ? 
                                                   (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0U]
                                                      [0xdU] 
                                                      >> 0x1fU) 
                                                     != 
                                                     (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                      >> 0x1fU))
                                                     ? 0x7fc00000U
                                                     : 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                        [0U]
                                                        [0xdU])))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                        [0U]
                                                        [0xdU]))
                                                     : 
                                                    ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                      ? 
                                                     (0x7f800000U 
                                                      | (0x80000000U 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                       & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                       ? 
                                                      (0x80000000U 
                                                       & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                          [0U]
                                                          [0xdU] 
                                                          & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                        ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                        : 
                                                       ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                         ? 
                                                        vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                        [0U]
                                                        [0xdU]
                                                         : 
                                                        (((0U 
                                                           == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                          & (0U 
                                                             == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                          ? 0U
                                                          : 
                                                         ((0xffU 
                                                           <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                           ? 
                                                          (0x7f800000U 
                                                           | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                              << 0x1fU))
                                                           : 
                                                          (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                            << 0x1fU) 
                                                           | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                               << 0x17U) 
                                                              | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+93,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                     [0U][0xdU] >> 0xfU))));
        bufp->chgCData(oldp+94,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][0xdU] 
                                          >> 0xaU))),5);
        bufp->chgSData(oldp+95,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0U][0xdU])),10);
        bufp->chgBit(oldp+96,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0U]
                                                [0xdU] 
                                                >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0U][0xdU])))));
        bufp->chgBit(oldp+97,(((0x1fU == (0x1fU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0U]
                                                   [0xdU] 
                                                   >> 0xaU))) 
                               & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0U][0xdU])))));
        bufp->chgBit(oldp+98,(((0x1fU == (0x1fU & (
                                                   vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                   [0U]
                                                   [0xdU] 
                                                   >> 0xaU))) 
                               & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0U][0xdU])))));
        bufp->chgBit(oldp+99,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                [0U]
                                                [0xdU] 
                                                >> 0xaU))) 
                               & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0U][0xdU])))));
        bufp->chgBit(oldp+100,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+101,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0U][0xdU]))),11);
        bufp->chgIData(oldp+102,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+103,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+104,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+105,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+106,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0U][0xeU]),16);
        bufp->chgIData(oldp+107,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+108,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0U]
                                                  [0xeU] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0U][0xeU]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0U][0xeU] 
                                         >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0U][0xeU])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0U][0xeU]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0U]
                                                      [0xeU] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0U]
                                                    [0xeU]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+109,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0U][0xeU] >> 0xfU))));
        bufp->chgCData(oldp+110,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0U][0xeU] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+111,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0U][0xeU])),10);
        bufp->chgBit(oldp+112,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0U]
                                                 [0xeU] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][0xeU])))));
        bufp->chgBit(oldp+113,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0U][0xeU] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][0xeU])))));
        bufp->chgBit(oldp+114,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0U][0xeU] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][0xeU])))));
        bufp->chgBit(oldp+115,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0U]
                                                 [0xeU] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][0xeU])))));
        bufp->chgBit(oldp+116,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+117,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0U][0xeU]))),11);
        bufp->chgIData(oldp+118,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+119,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+120,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+121,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+122,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0U][0xfU]),16);
        bufp->chgIData(oldp+123,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+124,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0U]
                                                  [0xfU] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0U][0xfU]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0U][0xfU] 
                                         >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0U][0xfU])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0U][0xfU]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0U]
                                                      [0xfU] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0U]
                                                    [0xfU]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+125,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0U][0xfU] >> 0xfU))));
        bufp->chgCData(oldp+126,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0U][0xfU] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+127,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0U][0xfU])),10);
        bufp->chgBit(oldp+128,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0U]
                                                 [0xfU] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][0xfU])))));
        bufp->chgBit(oldp+129,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0U][0xfU] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][0xfU])))));
        bufp->chgBit(oldp+130,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0U][0xfU] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][0xfU])))));
        bufp->chgBit(oldp+131,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0U]
                                                 [0xfU] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][0xfU])))));
        bufp->chgBit(oldp+132,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+133,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0U][0xfU]))),11);
        bufp->chgIData(oldp+134,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+135,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+136,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+137,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+138,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0U][1U]),16);
        bufp->chgIData(oldp+139,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+140,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0U]
                                                  [1U] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0U][1U]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0U][1U] >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0U][1U])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0U][1U]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0U]
                                                      [1U] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0U]
                                                    [1U]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+141,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0U][1U] >> 0xfU))));
        bufp->chgCData(oldp+142,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0U][1U] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+143,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0U][1U])),10);
        bufp->chgBit(oldp+144,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0U]
                                                 [1U] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][1U])))));
        bufp->chgBit(oldp+145,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0U][1U] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][1U])))));
        bufp->chgBit(oldp+146,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0U][1U] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][1U])))));
        bufp->chgBit(oldp+147,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0U]
                                                 [1U] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][1U])))));
        bufp->chgBit(oldp+148,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+149,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0U][1U]))),11);
        bufp->chgIData(oldp+150,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+151,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+152,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+153,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+154,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0U][2U]),16);
        bufp->chgIData(oldp+155,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+156,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0U]
                                                  [2U] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0U][2U]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0U][2U] >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0U][2U])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0U][2U]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0U]
                                                      [2U] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0U]
                                                    [2U]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+157,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0U][2U] >> 0xfU))));
        bufp->chgCData(oldp+158,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0U][2U] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+159,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0U][2U])),10);
        bufp->chgBit(oldp+160,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0U]
                                                 [2U] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][2U])))));
        bufp->chgBit(oldp+161,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0U][2U] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][2U])))));
        bufp->chgBit(oldp+162,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0U][2U] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][2U])))));
        bufp->chgBit(oldp+163,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0U]
                                                 [2U] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][2U])))));
        bufp->chgBit(oldp+164,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+165,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0U][2U]))),11);
        bufp->chgIData(oldp+166,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+167,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+168,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+169,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+170,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0U][3U]),16);
        bufp->chgIData(oldp+171,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+172,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0U]
                                                  [3U] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0U][3U]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0U][3U] >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0U][3U])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0U][3U]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0U]
                                                      [3U] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0U]
                                                    [3U]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+173,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0U][3U] >> 0xfU))));
        bufp->chgCData(oldp+174,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0U][3U] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+175,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0U][3U])),10);
        bufp->chgBit(oldp+176,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0U]
                                                 [3U] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][3U])))));
        bufp->chgBit(oldp+177,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0U][3U] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][3U])))));
        bufp->chgBit(oldp+178,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0U][3U] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][3U])))));
        bufp->chgBit(oldp+179,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0U]
                                                 [3U] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][3U])))));
        bufp->chgBit(oldp+180,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+181,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0U][3U]))),11);
        bufp->chgIData(oldp+182,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+183,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+184,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+185,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+186,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0U][4U]),16);
        bufp->chgIData(oldp+187,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+188,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0U]
                                                  [4U] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0U][4U]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0U][4U] >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0U][4U])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0U][4U]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0U]
                                                      [4U] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0U]
                                                    [4U]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+189,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0U][4U] >> 0xfU))));
        bufp->chgCData(oldp+190,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0U][4U] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+191,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0U][4U])),10);
        bufp->chgBit(oldp+192,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0U]
                                                 [4U] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][4U])))));
        bufp->chgBit(oldp+193,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0U][4U] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][4U])))));
        bufp->chgBit(oldp+194,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0U][4U] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][4U])))));
        bufp->chgBit(oldp+195,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0U]
                                                 [4U] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][4U])))));
        bufp->chgBit(oldp+196,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+197,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0U][4U]))),11);
        bufp->chgIData(oldp+198,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+199,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+200,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+201,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+202,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0U][5U]),16);
        bufp->chgIData(oldp+203,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+204,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0U]
                                                  [5U] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0U][5U]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0U][5U] >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0U][5U])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0U][5U]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0U]
                                                      [5U] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0U]
                                                    [5U]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+205,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0U][5U] >> 0xfU))));
        bufp->chgCData(oldp+206,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0U][5U] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+207,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0U][5U])),10);
        bufp->chgBit(oldp+208,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0U]
                                                 [5U] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][5U])))));
        bufp->chgBit(oldp+209,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0U][5U] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][5U])))));
        bufp->chgBit(oldp+210,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0U][5U] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][5U])))));
        bufp->chgBit(oldp+211,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0U]
                                                 [5U] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][5U])))));
        bufp->chgBit(oldp+212,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+213,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0U][5U]))),11);
        bufp->chgIData(oldp+214,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+215,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+216,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+217,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+218,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0U][6U]),16);
        bufp->chgIData(oldp+219,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+220,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0U]
                                                  [6U] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0U][6U]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0U][6U] >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0U][6U])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0U][6U]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0U]
                                                      [6U] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0U]
                                                    [6U]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+221,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0U][6U] >> 0xfU))));
        bufp->chgCData(oldp+222,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0U][6U] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+223,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0U][6U])),10);
        bufp->chgBit(oldp+224,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0U]
                                                 [6U] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][6U])))));
        bufp->chgBit(oldp+225,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0U][6U] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][6U])))));
        bufp->chgBit(oldp+226,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0U][6U] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][6U])))));
        bufp->chgBit(oldp+227,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0U]
                                                 [6U] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][6U])))));
        bufp->chgBit(oldp+228,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+229,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0U][6U]))),11);
        bufp->chgIData(oldp+230,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+231,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+232,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+233,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+234,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0U][7U]),16);
        bufp->chgIData(oldp+235,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+236,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0U]
                                                  [7U] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0U][7U]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0U][7U] >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0U][7U])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0U][7U]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0U]
                                                      [7U] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0U]
                                                    [7U]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+237,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0U][7U] >> 0xfU))));
        bufp->chgCData(oldp+238,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0U][7U] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+239,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0U][7U])),10);
        bufp->chgBit(oldp+240,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0U]
                                                 [7U] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][7U])))));
        bufp->chgBit(oldp+241,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0U][7U] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][7U])))));
        bufp->chgBit(oldp+242,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0U][7U] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][7U])))));
        bufp->chgBit(oldp+243,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0U]
                                                 [7U] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][7U])))));
        bufp->chgBit(oldp+244,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+245,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0U][7U]))),11);
        bufp->chgIData(oldp+246,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+247,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+248,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+249,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+250,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0U][8U]),16);
        bufp->chgIData(oldp+251,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+252,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0U]
                                                  [8U] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0U][8U]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0U][8U] >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0U][8U])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0U][8U]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0U]
                                                      [8U] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0U]
                                                    [8U]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+253,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0U][8U] >> 0xfU))));
        bufp->chgCData(oldp+254,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0U][8U] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+255,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0U][8U])),10);
        bufp->chgBit(oldp+256,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0U]
                                                 [8U] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][8U])))));
        bufp->chgBit(oldp+257,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0U][8U] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][8U])))));
        bufp->chgBit(oldp+258,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0U][8U] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][8U])))));
        bufp->chgBit(oldp+259,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0U]
                                                 [8U] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][8U])))));
        bufp->chgBit(oldp+260,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+261,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0U][8U]))),11);
        bufp->chgIData(oldp+262,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+263,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+264,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+265,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+266,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0U][9U]),16);
        bufp->chgIData(oldp+267,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+268,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0U]
                                                  [9U] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0U][9U]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0U][9U] >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0U][9U])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0U][9U]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0U]
                                                      [9U] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0U]
                                                    [9U]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+269,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0U][9U] >> 0xfU))));
        bufp->chgCData(oldp+270,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0U][9U] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+271,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0U][9U])),10);
        bufp->chgBit(oldp+272,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0U]
                                                 [9U] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][9U])))));
        bufp->chgBit(oldp+273,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0U][9U] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][9U])))));
        bufp->chgBit(oldp+274,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0U][9U] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][9U])))));
        bufp->chgBit(oldp+275,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0U]
                                                 [9U] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0U][9U])))));
        bufp->chgBit(oldp+276,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+277,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0U][9U]))),11);
        bufp->chgIData(oldp+278,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+279,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+280,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+281,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgBit(oldp+282,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT____Vcellinp__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__weight_load_en));
        bufp->chgSData(oldp+283,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xaU][0U]),16);
        bufp->chgIData(oldp+284,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+285,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xaU]
                                                  [0U] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [0U]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xaU][0U] 
                                         >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [0U])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [0U]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xaU]
                                                      [0U] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xaU]
                                                    [0U]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+286,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0xaU][0U] >> 0xfU))));
        bufp->chgCData(oldp+287,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xaU][0U] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+288,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xaU][0U])),10);
        bufp->chgBit(oldp+289,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [0U] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][0U])))));
        bufp->chgBit(oldp+290,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][0U] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][0U])))));
        bufp->chgBit(oldp+291,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][0U] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][0U])))));
        bufp->chgBit(oldp+292,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [0U] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][0U])))));
        bufp->chgBit(oldp+293,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+294,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][0U]))),11);
        bufp->chgIData(oldp+295,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+296,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+297,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+298,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+299,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xaU][0xaU]),16);
        bufp->chgIData(oldp+300,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+301,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xaU]
                                                  [0xaU] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [0xaU]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xaU][0xaU] 
                                         >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [0xaU])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [0xaU]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xaU]
                                                      [0xaU] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xaU]
                                                    [0xaU]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+302,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0xaU][0xaU] 
                                      >> 0xfU))));
        bufp->chgCData(oldp+303,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xaU][0xaU] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+304,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xaU][0xaU])),10);
        bufp->chgBit(oldp+305,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [0xaU] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][0xaU])))));
        bufp->chgBit(oldp+306,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][0xaU] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][0xaU])))));
        bufp->chgBit(oldp+307,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][0xaU] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][0xaU])))));
        bufp->chgBit(oldp+308,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [0xaU] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][0xaU])))));
        bufp->chgBit(oldp+309,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+310,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][0xaU]))),11);
        bufp->chgIData(oldp+311,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+312,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+313,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+314,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+315,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xaU][0xbU]),16);
        bufp->chgIData(oldp+316,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+317,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xaU]
                                                  [0xbU] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [0xbU]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xaU][0xbU] 
                                         >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [0xbU])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [0xbU]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xaU]
                                                      [0xbU] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xaU]
                                                    [0xbU]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+318,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0xaU][0xbU] 
                                      >> 0xfU))));
        bufp->chgCData(oldp+319,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xaU][0xbU] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+320,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xaU][0xbU])),10);
        bufp->chgBit(oldp+321,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [0xbU] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][0xbU])))));
        bufp->chgBit(oldp+322,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][0xbU] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][0xbU])))));
        bufp->chgBit(oldp+323,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][0xbU] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][0xbU])))));
        bufp->chgBit(oldp+324,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [0xbU] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][0xbU])))));
        bufp->chgBit(oldp+325,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+326,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][0xbU]))),11);
        bufp->chgIData(oldp+327,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+328,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+329,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+330,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+331,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xaU][0xcU]),16);
        bufp->chgIData(oldp+332,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+333,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xaU]
                                                  [0xcU] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [0xcU]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xaU][0xcU] 
                                         >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [0xcU])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [0xcU]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xaU]
                                                      [0xcU] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xaU]
                                                    [0xcU]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+334,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0xaU][0xcU] 
                                      >> 0xfU))));
        bufp->chgCData(oldp+335,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xaU][0xcU] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+336,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xaU][0xcU])),10);
        bufp->chgBit(oldp+337,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [0xcU] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][0xcU])))));
        bufp->chgBit(oldp+338,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][0xcU] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][0xcU])))));
        bufp->chgBit(oldp+339,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][0xcU] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][0xcU])))));
        bufp->chgBit(oldp+340,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [0xcU] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][0xcU])))));
        bufp->chgBit(oldp+341,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+342,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][0xcU]))),11);
        bufp->chgIData(oldp+343,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+344,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+345,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+346,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+347,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xaU][0xdU]),16);
        bufp->chgIData(oldp+348,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+349,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xaU]
                                                  [0xdU] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [0xdU]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xaU][0xdU] 
                                         >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [0xdU])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [0xdU]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xaU]
                                                      [0xdU] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xaU]
                                                    [0xdU]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+350,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0xaU][0xdU] 
                                      >> 0xfU))));
        bufp->chgCData(oldp+351,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xaU][0xdU] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+352,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xaU][0xdU])),10);
        bufp->chgBit(oldp+353,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [0xdU] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][0xdU])))));
        bufp->chgBit(oldp+354,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][0xdU] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][0xdU])))));
        bufp->chgBit(oldp+355,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][0xdU] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][0xdU])))));
        bufp->chgBit(oldp+356,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [0xdU] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][0xdU])))));
        bufp->chgBit(oldp+357,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+358,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][0xdU]))),11);
        bufp->chgIData(oldp+359,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+360,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+361,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+362,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+363,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xaU][0xeU]),16);
        bufp->chgIData(oldp+364,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+365,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xaU]
                                                  [0xeU] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [0xeU]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xaU][0xeU] 
                                         >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [0xeU])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [0xeU]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xaU]
                                                      [0xeU] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xaU]
                                                    [0xeU]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+366,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0xaU][0xeU] 
                                      >> 0xfU))));
        bufp->chgCData(oldp+367,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xaU][0xeU] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+368,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xaU][0xeU])),10);
        bufp->chgBit(oldp+369,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [0xeU] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][0xeU])))));
        bufp->chgBit(oldp+370,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][0xeU] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][0xeU])))));
        bufp->chgBit(oldp+371,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][0xeU] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][0xeU])))));
        bufp->chgBit(oldp+372,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [0xeU] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][0xeU])))));
        bufp->chgBit(oldp+373,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+374,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][0xeU]))),11);
        bufp->chgIData(oldp+375,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+376,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+377,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+378,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+379,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xaU][0xfU]),16);
        bufp->chgIData(oldp+380,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+381,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xaU]
                                                  [0xfU] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [0xfU]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xaU][0xfU] 
                                         >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [0xfU])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [0xfU]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xaU]
                                                      [0xfU] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xaU]
                                                    [0xfU]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+382,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0xaU][0xfU] 
                                      >> 0xfU))));
        bufp->chgCData(oldp+383,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xaU][0xfU] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+384,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xaU][0xfU])),10);
        bufp->chgBit(oldp+385,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [0xfU] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][0xfU])))));
        bufp->chgBit(oldp+386,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][0xfU] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][0xfU])))));
        bufp->chgBit(oldp+387,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][0xfU] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][0xfU])))));
        bufp->chgBit(oldp+388,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [0xfU] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][0xfU])))));
        bufp->chgBit(oldp+389,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+390,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][0xfU]))),11);
        bufp->chgIData(oldp+391,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+392,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+393,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+394,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+395,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xaU][1U]),16);
        bufp->chgIData(oldp+396,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+397,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xaU]
                                                  [1U] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [1U]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xaU][1U] 
                                         >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [1U])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [1U]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xaU]
                                                      [1U] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xaU]
                                                    [1U]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+398,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0xaU][1U] >> 0xfU))));
        bufp->chgCData(oldp+399,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xaU][1U] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+400,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xaU][1U])),10);
        bufp->chgBit(oldp+401,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [1U] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][1U])))));
        bufp->chgBit(oldp+402,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][1U] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][1U])))));
        bufp->chgBit(oldp+403,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][1U] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][1U])))));
        bufp->chgBit(oldp+404,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [1U] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][1U])))));
        bufp->chgBit(oldp+405,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+406,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][1U]))),11);
        bufp->chgIData(oldp+407,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+408,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+409,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+410,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+411,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xaU][2U]),16);
        bufp->chgIData(oldp+412,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+413,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xaU]
                                                  [2U] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [2U]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xaU][2U] 
                                         >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [2U])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [2U]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xaU]
                                                      [2U] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xaU]
                                                    [2U]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+414,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0xaU][2U] >> 0xfU))));
        bufp->chgCData(oldp+415,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xaU][2U] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+416,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xaU][2U])),10);
        bufp->chgBit(oldp+417,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [2U] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][2U])))));
        bufp->chgBit(oldp+418,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][2U] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][2U])))));
        bufp->chgBit(oldp+419,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][2U] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][2U])))));
        bufp->chgBit(oldp+420,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [2U] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][2U])))));
        bufp->chgBit(oldp+421,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+422,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][2U]))),11);
        bufp->chgIData(oldp+423,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+424,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+425,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+426,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+427,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xaU][3U]),16);
        bufp->chgIData(oldp+428,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+429,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xaU]
                                                  [3U] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [3U]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xaU][3U] 
                                         >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [3U])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [3U]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xaU]
                                                      [3U] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xaU]
                                                    [3U]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+430,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0xaU][3U] >> 0xfU))));
        bufp->chgCData(oldp+431,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xaU][3U] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+432,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xaU][3U])),10);
        bufp->chgBit(oldp+433,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [3U] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][3U])))));
        bufp->chgBit(oldp+434,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][3U] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][3U])))));
        bufp->chgBit(oldp+435,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][3U] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][3U])))));
        bufp->chgBit(oldp+436,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [3U] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][3U])))));
        bufp->chgBit(oldp+437,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+438,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][3U]))),11);
        bufp->chgIData(oldp+439,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+440,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+441,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+442,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+443,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xaU][4U]),16);
        bufp->chgIData(oldp+444,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+445,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xaU]
                                                  [4U] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [4U]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xaU][4U] 
                                         >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [4U])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [4U]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xaU]
                                                      [4U] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xaU]
                                                    [4U]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+446,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0xaU][4U] >> 0xfU))));
        bufp->chgCData(oldp+447,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xaU][4U] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+448,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xaU][4U])),10);
        bufp->chgBit(oldp+449,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [4U] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][4U])))));
        bufp->chgBit(oldp+450,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][4U] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][4U])))));
        bufp->chgBit(oldp+451,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][4U] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][4U])))));
        bufp->chgBit(oldp+452,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [4U] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][4U])))));
        bufp->chgBit(oldp+453,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+454,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][4U]))),11);
        bufp->chgIData(oldp+455,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+456,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+457,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+458,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+459,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xaU][5U]),16);
        bufp->chgIData(oldp+460,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+461,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xaU]
                                                  [5U] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [5U]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xaU][5U] 
                                         >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [5U])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [5U]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xaU]
                                                      [5U] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xaU]
                                                    [5U]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+462,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0xaU][5U] >> 0xfU))));
        bufp->chgCData(oldp+463,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xaU][5U] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+464,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xaU][5U])),10);
        bufp->chgBit(oldp+465,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [5U] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][5U])))));
        bufp->chgBit(oldp+466,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][5U] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][5U])))));
        bufp->chgBit(oldp+467,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][5U] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][5U])))));
        bufp->chgBit(oldp+468,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [5U] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][5U])))));
        bufp->chgBit(oldp+469,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+470,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][5U]))),11);
        bufp->chgIData(oldp+471,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+472,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+473,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+474,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+475,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xaU][6U]),16);
        bufp->chgIData(oldp+476,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+477,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xaU]
                                                  [6U] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [6U]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xaU][6U] 
                                         >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [6U])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [6U]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xaU]
                                                      [6U] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xaU]
                                                    [6U]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+478,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0xaU][6U] >> 0xfU))));
        bufp->chgCData(oldp+479,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xaU][6U] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+480,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xaU][6U])),10);
        bufp->chgBit(oldp+481,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [6U] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][6U])))));
        bufp->chgBit(oldp+482,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][6U] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][6U])))));
        bufp->chgBit(oldp+483,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][6U] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][6U])))));
        bufp->chgBit(oldp+484,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [6U] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][6U])))));
        bufp->chgBit(oldp+485,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+486,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][6U]))),11);
        bufp->chgIData(oldp+487,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+488,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+489,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+490,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+491,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xaU][7U]),16);
        bufp->chgIData(oldp+492,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+493,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xaU]
                                                  [7U] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [7U]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xaU][7U] 
                                         >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [7U])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [7U]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xaU]
                                                      [7U] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xaU]
                                                    [7U]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+494,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0xaU][7U] >> 0xfU))));
        bufp->chgCData(oldp+495,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xaU][7U] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+496,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xaU][7U])),10);
        bufp->chgBit(oldp+497,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [7U] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][7U])))));
        bufp->chgBit(oldp+498,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][7U] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][7U])))));
        bufp->chgBit(oldp+499,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][7U] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][7U])))));
        bufp->chgBit(oldp+500,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [7U] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][7U])))));
        bufp->chgBit(oldp+501,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+502,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][7U]))),11);
        bufp->chgIData(oldp+503,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+504,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+505,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+506,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+507,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xaU][8U]),16);
        bufp->chgIData(oldp+508,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+509,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xaU]
                                                  [8U] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [8U]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xaU][8U] 
                                         >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [8U])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [8U]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xaU]
                                                      [8U] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xaU]
                                                    [8U]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+510,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0xaU][8U] >> 0xfU))));
        bufp->chgCData(oldp+511,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xaU][8U] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+512,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xaU][8U])),10);
        bufp->chgBit(oldp+513,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [8U] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][8U])))));
        bufp->chgBit(oldp+514,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][8U] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][8U])))));
        bufp->chgBit(oldp+515,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][8U] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][8U])))));
        bufp->chgBit(oldp+516,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [8U] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][8U])))));
        bufp->chgBit(oldp+517,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+518,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][8U]))),11);
        bufp->chgIData(oldp+519,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+520,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+521,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+522,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+523,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xaU][9U]),16);
        bufp->chgIData(oldp+524,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+525,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xaU]
                                                  [9U] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [9U]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xaU][9U] 
                                         >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [9U])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xaU]
                                              [9U]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xaU]
                                                      [9U] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xaU]
                                                    [9U]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+526,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0xaU][9U] >> 0xfU))));
        bufp->chgCData(oldp+527,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xaU][9U] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+528,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xaU][9U])),10);
        bufp->chgBit(oldp+529,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [9U] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][9U])))));
        bufp->chgBit(oldp+530,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][9U] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][9U])))));
        bufp->chgBit(oldp+531,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][9U] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][9U])))));
        bufp->chgBit(oldp+532,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xaU]
                                                 [9U] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xaU][9U])))));
        bufp->chgBit(oldp+533,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+534,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xaU][9U]))),11);
        bufp->chgIData(oldp+535,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+536,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+537,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+538,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__10__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgBit(oldp+539,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT____Vcellinp__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__weight_load_en));
        bufp->chgSData(oldp+540,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xbU][0U]),16);
        bufp->chgIData(oldp+541,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+542,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xbU]
                                                  [0U] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [0U]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xbU][0U] 
                                         >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [0U])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [0U]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xbU]
                                                      [0U] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xbU]
                                                    [0U]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+543,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0xbU][0U] >> 0xfU))));
        bufp->chgCData(oldp+544,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xbU][0U] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+545,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xbU][0U])),10);
        bufp->chgBit(oldp+546,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [0U] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][0U])))));
        bufp->chgBit(oldp+547,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][0U] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][0U])))));
        bufp->chgBit(oldp+548,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][0U] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][0U])))));
        bufp->chgBit(oldp+549,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [0U] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][0U])))));
        bufp->chgBit(oldp+550,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+551,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][0U]))),11);
        bufp->chgIData(oldp+552,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+553,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+554,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+555,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+556,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xbU][0xaU]),16);
        bufp->chgIData(oldp+557,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+558,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xbU]
                                                  [0xaU] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [0xaU]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xbU][0xaU] 
                                         >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [0xaU])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [0xaU]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xbU]
                                                      [0xaU] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xbU]
                                                    [0xaU]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+559,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0xbU][0xaU] 
                                      >> 0xfU))));
        bufp->chgCData(oldp+560,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xbU][0xaU] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+561,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xbU][0xaU])),10);
        bufp->chgBit(oldp+562,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [0xaU] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][0xaU])))));
        bufp->chgBit(oldp+563,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][0xaU] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][0xaU])))));
        bufp->chgBit(oldp+564,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][0xaU] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][0xaU])))));
        bufp->chgBit(oldp+565,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [0xaU] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][0xaU])))));
        bufp->chgBit(oldp+566,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+567,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][0xaU]))),11);
        bufp->chgIData(oldp+568,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+569,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+570,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+571,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+572,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xbU][0xbU]),16);
        bufp->chgIData(oldp+573,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+574,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xbU]
                                                  [0xbU] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [0xbU]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xbU][0xbU] 
                                         >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [0xbU])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [0xbU]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xbU]
                                                      [0xbU] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xbU]
                                                    [0xbU]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+575,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0xbU][0xbU] 
                                      >> 0xfU))));
        bufp->chgCData(oldp+576,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xbU][0xbU] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+577,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xbU][0xbU])),10);
        bufp->chgBit(oldp+578,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [0xbU] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][0xbU])))));
        bufp->chgBit(oldp+579,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][0xbU] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][0xbU])))));
        bufp->chgBit(oldp+580,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][0xbU] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][0xbU])))));
        bufp->chgBit(oldp+581,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [0xbU] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][0xbU])))));
        bufp->chgBit(oldp+582,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+583,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][0xbU]))),11);
        bufp->chgIData(oldp+584,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+585,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+586,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+587,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+588,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xbU][0xcU]),16);
        bufp->chgIData(oldp+589,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+590,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xbU]
                                                  [0xcU] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [0xcU]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xbU][0xcU] 
                                         >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [0xcU])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [0xcU]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xbU]
                                                      [0xcU] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xbU]
                                                    [0xcU]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+591,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0xbU][0xcU] 
                                      >> 0xfU))));
        bufp->chgCData(oldp+592,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xbU][0xcU] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+593,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xbU][0xcU])),10);
        bufp->chgBit(oldp+594,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [0xcU] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][0xcU])))));
        bufp->chgBit(oldp+595,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][0xcU] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][0xcU])))));
        bufp->chgBit(oldp+596,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][0xcU] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][0xcU])))));
        bufp->chgBit(oldp+597,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [0xcU] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][0xcU])))));
        bufp->chgBit(oldp+598,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+599,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][0xcU]))),11);
        bufp->chgIData(oldp+600,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+601,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+602,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+603,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+604,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xbU][0xdU]),16);
        bufp->chgIData(oldp+605,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+606,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xbU]
                                                  [0xdU] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [0xdU]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xbU][0xdU] 
                                         >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [0xdU])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [0xdU]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xbU]
                                                      [0xdU] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xbU]
                                                    [0xdU]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+607,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0xbU][0xdU] 
                                      >> 0xfU))));
        bufp->chgCData(oldp+608,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xbU][0xdU] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+609,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xbU][0xdU])),10);
        bufp->chgBit(oldp+610,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [0xdU] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][0xdU])))));
        bufp->chgBit(oldp+611,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][0xdU] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][0xdU])))));
        bufp->chgBit(oldp+612,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][0xdU] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][0xdU])))));
        bufp->chgBit(oldp+613,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [0xdU] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][0xdU])))));
        bufp->chgBit(oldp+614,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+615,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][0xdU]))),11);
        bufp->chgIData(oldp+616,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+617,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+618,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+619,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+620,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xbU][0xeU]),16);
        bufp->chgIData(oldp+621,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+622,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xbU]
                                                  [0xeU] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [0xeU]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xbU][0xeU] 
                                         >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [0xeU])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [0xeU]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xbU]
                                                      [0xeU] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xbU]
                                                    [0xeU]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+623,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0xbU][0xeU] 
                                      >> 0xfU))));
        bufp->chgCData(oldp+624,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xbU][0xeU] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+625,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xbU][0xeU])),10);
        bufp->chgBit(oldp+626,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [0xeU] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][0xeU])))));
        bufp->chgBit(oldp+627,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][0xeU] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][0xeU])))));
        bufp->chgBit(oldp+628,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][0xeU] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][0xeU])))));
        bufp->chgBit(oldp+629,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [0xeU] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][0xeU])))));
        bufp->chgBit(oldp+630,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+631,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][0xeU]))),11);
        bufp->chgIData(oldp+632,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+633,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+634,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+635,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+636,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xbU][0xfU]),16);
        bufp->chgIData(oldp+637,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+638,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xbU]
                                                  [0xfU] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [0xfU]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xbU][0xfU] 
                                         >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [0xfU])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [0xfU]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xbU]
                                                      [0xfU] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xbU]
                                                    [0xfU]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+639,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0xbU][0xfU] 
                                      >> 0xfU))));
        bufp->chgCData(oldp+640,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xbU][0xfU] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+641,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xbU][0xfU])),10);
        bufp->chgBit(oldp+642,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [0xfU] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][0xfU])))));
        bufp->chgBit(oldp+643,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][0xfU] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][0xfU])))));
        bufp->chgBit(oldp+644,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][0xfU] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][0xfU])))));
        bufp->chgBit(oldp+645,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [0xfU] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][0xfU])))));
        bufp->chgBit(oldp+646,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+647,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][0xfU]))),11);
        bufp->chgIData(oldp+648,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+649,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+650,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+651,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+652,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xbU][1U]),16);
        bufp->chgIData(oldp+653,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+654,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xbU]
                                                  [1U] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [1U]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xbU][1U] 
                                         >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [1U])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [1U]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xbU]
                                                      [1U] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xbU]
                                                    [1U]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+655,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0xbU][1U] >> 0xfU))));
        bufp->chgCData(oldp+656,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xbU][1U] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+657,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xbU][1U])),10);
        bufp->chgBit(oldp+658,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [1U] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][1U])))));
        bufp->chgBit(oldp+659,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][1U] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][1U])))));
        bufp->chgBit(oldp+660,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][1U] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][1U])))));
        bufp->chgBit(oldp+661,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [1U] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][1U])))));
        bufp->chgBit(oldp+662,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+663,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][1U]))),11);
        bufp->chgIData(oldp+664,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+665,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+666,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+667,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+668,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xbU][2U]),16);
        bufp->chgIData(oldp+669,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+670,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xbU]
                                                  [2U] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [2U]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xbU][2U] 
                                         >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [2U])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [2U]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xbU]
                                                      [2U] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xbU]
                                                    [2U]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+671,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0xbU][2U] >> 0xfU))));
        bufp->chgCData(oldp+672,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xbU][2U] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+673,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xbU][2U])),10);
        bufp->chgBit(oldp+674,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [2U] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][2U])))));
        bufp->chgBit(oldp+675,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][2U] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][2U])))));
        bufp->chgBit(oldp+676,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][2U] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][2U])))));
        bufp->chgBit(oldp+677,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [2U] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][2U])))));
        bufp->chgBit(oldp+678,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+679,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][2U]))),11);
        bufp->chgIData(oldp+680,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+681,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+682,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+683,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+684,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xbU][3U]),16);
        bufp->chgIData(oldp+685,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+686,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xbU]
                                                  [3U] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [3U]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xbU][3U] 
                                         >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [3U])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [3U]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xbU]
                                                      [3U] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xbU]
                                                    [3U]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+687,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0xbU][3U] >> 0xfU))));
        bufp->chgCData(oldp+688,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xbU][3U] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+689,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xbU][3U])),10);
        bufp->chgBit(oldp+690,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [3U] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][3U])))));
        bufp->chgBit(oldp+691,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][3U] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][3U])))));
        bufp->chgBit(oldp+692,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][3U] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][3U])))));
        bufp->chgBit(oldp+693,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [3U] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][3U])))));
        bufp->chgBit(oldp+694,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+695,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][3U]))),11);
        bufp->chgIData(oldp+696,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+697,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+698,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+699,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+700,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xbU][4U]),16);
        bufp->chgIData(oldp+701,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+702,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xbU]
                                                  [4U] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [4U]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xbU][4U] 
                                         >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [4U])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [4U]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xbU]
                                                      [4U] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xbU]
                                                    [4U]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+703,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0xbU][4U] >> 0xfU))));
        bufp->chgCData(oldp+704,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xbU][4U] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+705,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xbU][4U])),10);
        bufp->chgBit(oldp+706,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [4U] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][4U])))));
        bufp->chgBit(oldp+707,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][4U] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][4U])))));
        bufp->chgBit(oldp+708,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][4U] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][4U])))));
        bufp->chgBit(oldp+709,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [4U] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][4U])))));
        bufp->chgBit(oldp+710,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+711,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][4U]))),11);
        bufp->chgIData(oldp+712,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+713,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+714,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+715,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+716,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xbU][5U]),16);
        bufp->chgIData(oldp+717,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+718,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xbU]
                                                  [5U] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [5U]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xbU][5U] 
                                         >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [5U])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [5U]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xbU]
                                                      [5U] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xbU]
                                                    [5U]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+719,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0xbU][5U] >> 0xfU))));
        bufp->chgCData(oldp+720,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xbU][5U] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+721,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xbU][5U])),10);
        bufp->chgBit(oldp+722,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [5U] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][5U])))));
        bufp->chgBit(oldp+723,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][5U] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][5U])))));
        bufp->chgBit(oldp+724,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][5U] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][5U])))));
        bufp->chgBit(oldp+725,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [5U] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][5U])))));
        bufp->chgBit(oldp+726,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+727,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][5U]))),11);
        bufp->chgIData(oldp+728,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+729,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+730,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+731,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+732,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xbU][6U]),16);
        bufp->chgIData(oldp+733,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+734,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xbU]
                                                  [6U] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [6U]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xbU][6U] 
                                         >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [6U])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [6U]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xbU]
                                                      [6U] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xbU]
                                                    [6U]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+735,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0xbU][6U] >> 0xfU))));
        bufp->chgCData(oldp+736,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xbU][6U] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+737,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xbU][6U])),10);
        bufp->chgBit(oldp+738,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [6U] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][6U])))));
        bufp->chgBit(oldp+739,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][6U] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][6U])))));
        bufp->chgBit(oldp+740,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][6U] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][6U])))));
        bufp->chgBit(oldp+741,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [6U] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][6U])))));
        bufp->chgBit(oldp+742,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+743,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][6U]))),11);
        bufp->chgIData(oldp+744,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+745,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+746,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+747,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+748,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xbU][7U]),16);
        bufp->chgIData(oldp+749,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+750,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xbU]
                                                  [7U] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [7U]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xbU][7U] 
                                         >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [7U])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [7U]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xbU]
                                                      [7U] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xbU]
                                                    [7U]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+751,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0xbU][7U] >> 0xfU))));
        bufp->chgCData(oldp+752,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xbU][7U] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+753,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xbU][7U])),10);
        bufp->chgBit(oldp+754,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [7U] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][7U])))));
        bufp->chgBit(oldp+755,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][7U] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][7U])))));
        bufp->chgBit(oldp+756,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][7U] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][7U])))));
        bufp->chgBit(oldp+757,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [7U] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][7U])))));
        bufp->chgBit(oldp+758,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+759,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][7U]))),11);
        bufp->chgIData(oldp+760,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+761,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+762,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+763,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+764,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xbU][8U]),16);
        bufp->chgIData(oldp+765,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+766,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xbU]
                                                  [8U] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [8U]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xbU][8U] 
                                         >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [8U])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [8U]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xbU]
                                                      [8U] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xbU]
                                                    [8U]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+767,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0xbU][8U] >> 0xfU))));
        bufp->chgCData(oldp+768,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xbU][8U] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+769,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xbU][8U])),10);
        bufp->chgBit(oldp+770,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [8U] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][8U])))));
        bufp->chgBit(oldp+771,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][8U] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][8U])))));
        bufp->chgBit(oldp+772,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][8U] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][8U])))));
        bufp->chgBit(oldp+773,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [8U] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][8U])))));
        bufp->chgBit(oldp+774,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+775,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][8U]))),11);
        bufp->chgIData(oldp+776,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+777,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+778,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+779,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+780,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xbU][9U]),16);
        bufp->chgIData(oldp+781,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+782,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xbU]
                                                  [9U] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [9U]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xbU][9U] 
                                         >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [9U])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xbU]
                                              [9U]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xbU]
                                                      [9U] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xbU]
                                                    [9U]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+783,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0xbU][9U] >> 0xfU))));
        bufp->chgCData(oldp+784,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xbU][9U] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+785,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xbU][9U])),10);
        bufp->chgBit(oldp+786,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [9U] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][9U])))));
        bufp->chgBit(oldp+787,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][9U] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][9U])))));
        bufp->chgBit(oldp+788,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][9U] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][9U])))));
        bufp->chgBit(oldp+789,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xbU]
                                                 [9U] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xbU][9U])))));
        bufp->chgBit(oldp+790,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+791,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xbU][9U]))),11);
        bufp->chgIData(oldp+792,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+793,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+794,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+795,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__11__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgBit(oldp+796,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT____Vcellinp__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__weight_load_en));
        bufp->chgSData(oldp+797,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xcU][0U]),16);
        bufp->chgIData(oldp+798,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+799,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xcU]
                                                  [0U] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xcU]
                                              [0U]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xcU][0U] 
                                         >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xcU]
                                              [0U])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xcU]
                                              [0U]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xcU]
                                                      [0U] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xcU]
                                                    [0U]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+800,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0xcU][0U] >> 0xfU))));
        bufp->chgCData(oldp+801,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xcU][0U] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+802,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xcU][0U])),10);
        bufp->chgBit(oldp+803,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [0U] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][0U])))));
        bufp->chgBit(oldp+804,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xcU][0U] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][0U])))));
        bufp->chgBit(oldp+805,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xcU][0U] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][0U])))));
        bufp->chgBit(oldp+806,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [0U] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][0U])))));
        bufp->chgBit(oldp+807,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+808,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xcU][0U]))),11);
        bufp->chgIData(oldp+809,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+810,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+811,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+812,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+813,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xcU][0xaU]),16);
        bufp->chgIData(oldp+814,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+815,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xcU]
                                                  [0xaU] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xcU]
                                              [0xaU]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xcU][0xaU] 
                                         >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xcU]
                                              [0xaU])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xcU]
                                              [0xaU]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xcU]
                                                      [0xaU] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xcU]
                                                    [0xaU]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+816,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0xcU][0xaU] 
                                      >> 0xfU))));
        bufp->chgCData(oldp+817,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xcU][0xaU] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+818,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xcU][0xaU])),10);
        bufp->chgBit(oldp+819,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [0xaU] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][0xaU])))));
        bufp->chgBit(oldp+820,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xcU][0xaU] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][0xaU])))));
        bufp->chgBit(oldp+821,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xcU][0xaU] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][0xaU])))));
        bufp->chgBit(oldp+822,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [0xaU] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][0xaU])))));
        bufp->chgBit(oldp+823,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+824,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xcU][0xaU]))),11);
        bufp->chgIData(oldp+825,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+826,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+827,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+828,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+829,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xcU][0xbU]),16);
        bufp->chgIData(oldp+830,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+831,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xcU]
                                                  [0xbU] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xcU]
                                              [0xbU]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xcU][0xbU] 
                                         >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xcU]
                                              [0xbU])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xcU]
                                              [0xbU]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xcU]
                                                      [0xbU] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xcU]
                                                    [0xbU]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+832,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0xcU][0xbU] 
                                      >> 0xfU))));
        bufp->chgCData(oldp+833,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xcU][0xbU] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+834,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xcU][0xbU])),10);
        bufp->chgBit(oldp+835,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [0xbU] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][0xbU])))));
        bufp->chgBit(oldp+836,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xcU][0xbU] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][0xbU])))));
        bufp->chgBit(oldp+837,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xcU][0xbU] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][0xbU])))));
        bufp->chgBit(oldp+838,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [0xbU] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][0xbU])))));
        bufp->chgBit(oldp+839,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+840,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xcU][0xbU]))),11);
        bufp->chgIData(oldp+841,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+842,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+843,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+844,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+845,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xcU][0xcU]),16);
        bufp->chgIData(oldp+846,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+847,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xcU]
                                                  [0xcU] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xcU]
                                              [0xcU]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xcU][0xcU] 
                                         >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xcU]
                                              [0xcU])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xcU]
                                              [0xcU]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xcU]
                                                      [0xcU] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xcU]
                                                    [0xcU]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+848,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0xcU][0xcU] 
                                      >> 0xfU))));
        bufp->chgCData(oldp+849,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xcU][0xcU] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+850,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xcU][0xcU])),10);
        bufp->chgBit(oldp+851,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [0xcU] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][0xcU])))));
        bufp->chgBit(oldp+852,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xcU][0xcU] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][0xcU])))));
        bufp->chgBit(oldp+853,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xcU][0xcU] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][0xcU])))));
        bufp->chgBit(oldp+854,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [0xcU] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][0xcU])))));
        bufp->chgBit(oldp+855,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+856,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xcU][0xcU]))),11);
        bufp->chgIData(oldp+857,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+858,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+859,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+860,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+861,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xcU][0xdU]),16);
        bufp->chgIData(oldp+862,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+863,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xcU]
                                                  [0xdU] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xcU]
                                              [0xdU]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xcU][0xdU] 
                                         >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xcU]
                                              [0xdU])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xcU]
                                              [0xdU]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xcU]
                                                      [0xdU] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xcU]
                                                    [0xdU]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+864,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0xcU][0xdU] 
                                      >> 0xfU))));
        bufp->chgCData(oldp+865,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xcU][0xdU] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+866,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xcU][0xdU])),10);
        bufp->chgBit(oldp+867,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [0xdU] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][0xdU])))));
        bufp->chgBit(oldp+868,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xcU][0xdU] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][0xdU])))));
        bufp->chgBit(oldp+869,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xcU][0xdU] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][0xdU])))));
        bufp->chgBit(oldp+870,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [0xdU] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][0xdU])))));
        bufp->chgBit(oldp+871,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+872,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xcU][0xdU]))),11);
        bufp->chgIData(oldp+873,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+874,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+875,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+876,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+877,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xcU][0xeU]),16);
        bufp->chgIData(oldp+878,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+879,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xcU]
                                                  [0xeU] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xcU]
                                              [0xeU]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xcU][0xeU] 
                                         >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xcU]
                                              [0xeU])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xcU]
                                              [0xeU]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xcU]
                                                      [0xeU] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xcU]
                                                    [0xeU]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+880,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0xcU][0xeU] 
                                      >> 0xfU))));
        bufp->chgCData(oldp+881,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xcU][0xeU] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+882,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xcU][0xeU])),10);
        bufp->chgBit(oldp+883,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [0xeU] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][0xeU])))));
        bufp->chgBit(oldp+884,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xcU][0xeU] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][0xeU])))));
        bufp->chgBit(oldp+885,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xcU][0xeU] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][0xeU])))));
        bufp->chgBit(oldp+886,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [0xeU] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][0xeU])))));
        bufp->chgBit(oldp+887,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+888,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xcU][0xeU]))),11);
        bufp->chgIData(oldp+889,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+890,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+891,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+892,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+893,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xcU][0xfU]),16);
        bufp->chgIData(oldp+894,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+895,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xcU]
                                                  [0xfU] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xcU]
                                              [0xfU]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xcU][0xfU] 
                                         >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xcU]
                                              [0xfU])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xcU]
                                              [0xfU]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xcU]
                                                      [0xfU] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xcU]
                                                    [0xfU]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+896,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0xcU][0xfU] 
                                      >> 0xfU))));
        bufp->chgCData(oldp+897,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xcU][0xfU] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+898,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xcU][0xfU])),10);
        bufp->chgBit(oldp+899,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [0xfU] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][0xfU])))));
        bufp->chgBit(oldp+900,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xcU][0xfU] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][0xfU])))));
        bufp->chgBit(oldp+901,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xcU][0xfU] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][0xfU])))));
        bufp->chgBit(oldp+902,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [0xfU] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][0xfU])))));
        bufp->chgBit(oldp+903,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+904,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xcU][0xfU]))),11);
        bufp->chgIData(oldp+905,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+906,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+907,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+908,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+909,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xcU][1U]),16);
        bufp->chgIData(oldp+910,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+911,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xcU]
                                                  [1U] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xcU]
                                              [1U]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xcU][1U] 
                                         >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xcU]
                                              [1U])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xcU]
                                              [1U]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xcU]
                                                      [1U] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xcU]
                                                    [1U]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+912,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0xcU][1U] >> 0xfU))));
        bufp->chgCData(oldp+913,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xcU][1U] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+914,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xcU][1U])),10);
        bufp->chgBit(oldp+915,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [1U] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][1U])))));
        bufp->chgBit(oldp+916,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xcU][1U] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][1U])))));
        bufp->chgBit(oldp+917,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xcU][1U] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][1U])))));
        bufp->chgBit(oldp+918,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [1U] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][1U])))));
        bufp->chgBit(oldp+919,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+920,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xcU][1U]))),11);
        bufp->chgIData(oldp+921,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+922,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+923,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+924,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+925,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xcU][2U]),16);
        bufp->chgIData(oldp+926,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+927,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xcU]
                                                  [2U] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xcU]
                                              [2U]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xcU][2U] 
                                         >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xcU]
                                              [2U])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xcU]
                                              [2U]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xcU]
                                                      [2U] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xcU]
                                                    [2U]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+928,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0xcU][2U] >> 0xfU))));
        bufp->chgCData(oldp+929,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xcU][2U] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+930,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xcU][2U])),10);
        bufp->chgBit(oldp+931,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [2U] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][2U])))));
        bufp->chgBit(oldp+932,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xcU][2U] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][2U])))));
        bufp->chgBit(oldp+933,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xcU][2U] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][2U])))));
        bufp->chgBit(oldp+934,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [2U] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][2U])))));
        bufp->chgBit(oldp+935,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+936,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xcU][2U]))),11);
        bufp->chgIData(oldp+937,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+938,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+939,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+940,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+941,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xcU][3U]),16);
        bufp->chgIData(oldp+942,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+943,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xcU]
                                                  [3U] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xcU]
                                              [3U]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xcU][3U] 
                                         >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xcU]
                                              [3U])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xcU]
                                              [3U]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xcU]
                                                      [3U] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xcU]
                                                    [3U]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+944,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0xcU][3U] >> 0xfU))));
        bufp->chgCData(oldp+945,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xcU][3U] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+946,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xcU][3U])),10);
        bufp->chgBit(oldp+947,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [3U] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][3U])))));
        bufp->chgBit(oldp+948,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xcU][3U] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][3U])))));
        bufp->chgBit(oldp+949,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xcU][3U] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][3U])))));
        bufp->chgBit(oldp+950,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [3U] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][3U])))));
        bufp->chgBit(oldp+951,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+952,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xcU][3U]))),11);
        bufp->chgIData(oldp+953,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+954,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+955,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+956,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+957,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xcU][4U]),16);
        bufp->chgIData(oldp+958,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+959,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xcU]
                                                  [4U] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xcU]
                                              [4U]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xcU][4U] 
                                         >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xcU]
                                              [4U])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xcU]
                                              [4U]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xcU]
                                                      [4U] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xcU]
                                                    [4U]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+960,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0xcU][4U] >> 0xfU))));
        bufp->chgCData(oldp+961,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xcU][4U] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+962,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xcU][4U])),10);
        bufp->chgBit(oldp+963,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [4U] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][4U])))));
        bufp->chgBit(oldp+964,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xcU][4U] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][4U])))));
        bufp->chgBit(oldp+965,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xcU][4U] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][4U])))));
        bufp->chgBit(oldp+966,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [4U] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][4U])))));
        bufp->chgBit(oldp+967,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+968,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xcU][4U]))),11);
        bufp->chgIData(oldp+969,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+970,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+971,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+972,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+973,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xcU][5U]),16);
        bufp->chgIData(oldp+974,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+975,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xcU]
                                                  [5U] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xcU]
                                              [5U]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xcU][5U] 
                                         >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xcU]
                                              [5U])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xcU]
                                              [5U]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xcU]
                                                      [5U] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xcU]
                                                    [5U]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+976,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0xcU][5U] >> 0xfU))));
        bufp->chgCData(oldp+977,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xcU][5U] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+978,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xcU][5U])),10);
        bufp->chgBit(oldp+979,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [5U] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][5U])))));
        bufp->chgBit(oldp+980,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xcU][5U] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][5U])))));
        bufp->chgBit(oldp+981,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xcU][5U] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][5U])))));
        bufp->chgBit(oldp+982,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [5U] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][5U])))));
        bufp->chgBit(oldp+983,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+984,((0x400U | (0x3ffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xcU][5U]))),11);
        bufp->chgIData(oldp+985,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+986,((0x1ffU & ((IData)(0x61U) 
                                            + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+987,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                   ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 2U))
                                   : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                   << 3U)))),23);
        bufp->chgSData(oldp+988,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+989,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                 [0xcU][6U]),16);
        bufp->chgIData(oldp+990,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+991,(((((0xffU == (0xffU 
                                               & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xcU]
                                                  [6U] 
                                                  >> 0x17U))) 
                                    & (0U != (0x7fffffU 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xcU]
                                              [6U]))) 
                                   | (IData)(((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                              & (0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                   ? 0x7fc00000U : 
                                  (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                    & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                    ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                         [0xcU][6U] 
                                         >> 0x1fU) 
                                        != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                            >> 0x1fU))
                                        ? 0x7fc00000U
                                        : (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xcU]
                                              [6U])))
                                    : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                        ? (0x7f800000U 
                                           | (0x80000000U 
                                              & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                              [0xcU]
                                              [6U]))
                                        : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                            ? (0x7f800000U 
                                               | (0x80000000U 
                                                  & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                            : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                ? (0x80000000U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                      [0xcU]
                                                      [6U] 
                                                      & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                    ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                     ? 
                                                    vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xcU]
                                                    [6U]
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                      & (0U 
                                                         == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                      ? 0U
                                                      : 
                                                     ((0xffU 
                                                       <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                       ? 
                                                      (0x7f800000U 
                                                       | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                          << 0x1fU))
                                                       : 
                                                      (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                           << 0x17U) 
                                                          | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+992,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                      [0xcU][6U] >> 0xfU))));
        bufp->chgCData(oldp+993,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xcU][6U] 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+994,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xcU][6U])),10);
        bufp->chgBit(oldp+995,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [6U] 
                                                 >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][6U])))));
        bufp->chgBit(oldp+996,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xcU][6U] 
                                            >> 0xaU))) 
                                & (0U == (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][6U])))));
        bufp->chgBit(oldp+997,(((0x1fU == (0x1fU & 
                                           (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xcU][6U] 
                                            >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][6U])))));
        bufp->chgBit(oldp+998,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                 [0xcU]
                                                 [6U] 
                                                 >> 0xaU))) 
                                & (0U != (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xcU][6U])))));
        bufp->chgBit(oldp+999,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+1000,((0x400U | (0x3ffU 
                                             & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                             [0xcU]
                                             [6U]))),11);
        bufp->chgIData(oldp+1001,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+1002,((0x1ffU & ((IData)(0x61U) 
                                             + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+1003,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                    ? (0x7ffffcU & 
                                       (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                        << 2U)) : (0x7ffff8U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                      << 3U)))),23);
        bufp->chgSData(oldp+1004,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+1005,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xcU][7U]),16);
        bufp->chgIData(oldp+1006,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+1007,(((((0xffU == (0xffU 
                                                & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [7U] 
                                                   >> 0x17U))) 
                                     & (0U != (0x7fffffU 
                                               & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                               [0xcU]
                                               [7U]))) 
                                    | (IData)(((0x7f800000U 
                                                == 
                                                (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                               & (0U 
                                                  != 
                                                  (0x7fffffU 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                    ? 0x7fc00000U : 
                                   (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                     & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                     ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xcU][7U] 
                                          >> 0x1fU) 
                                         != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x1fU))
                                         ? 0x7fc00000U
                                         : (0x7f800000U 
                                            | (0x80000000U 
                                               & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                               [0xcU]
                                               [7U])))
                                     : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                         ? (0x7f800000U 
                                            | (0x80000000U 
                                               & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                               [0xcU]
                                               [7U]))
                                         : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                             ? (0x7f800000U 
                                                | (0x80000000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                             : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                 ? 
                                                (0x80000000U 
                                                 & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xcU]
                                                    [7U] 
                                                    & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                 : 
                                                ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xcU]
                                                  [7U]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+1008,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                       [0xcU][7U] >> 0xfU))));
        bufp->chgCData(oldp+1009,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xcU][7U] 
                                            >> 0xaU))),5);
        bufp->chgSData(oldp+1010,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                   [0xcU][7U])),10);
        bufp->chgBit(oldp+1011,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xcU]
                                                  [7U] 
                                                  >> 0xaU))) 
                                 & (0U == (0x3ffU & 
                                           vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xcU][7U])))));
        bufp->chgBit(oldp+1012,(((0x1fU == (0x1fU & 
                                            (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                             [0xcU]
                                             [7U] >> 0xaU))) 
                                 & (0U == (0x3ffU & 
                                           vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xcU][7U])))));
        bufp->chgBit(oldp+1013,(((0x1fU == (0x1fU & 
                                            (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                             [0xcU]
                                             [7U] >> 0xaU))) 
                                 & (0U != (0x3ffU & 
                                           vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xcU][7U])))));
        bufp->chgBit(oldp+1014,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xcU]
                                                  [7U] 
                                                  >> 0xaU))) 
                                 & (0U != (0x3ffU & 
                                           vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xcU][7U])))));
        bufp->chgBit(oldp+1015,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+1016,((0x400U | (0x3ffU 
                                             & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                             [0xcU]
                                             [7U]))),11);
        bufp->chgIData(oldp+1017,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+1018,((0x1ffU & ((IData)(0x61U) 
                                             + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+1019,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                    ? (0x7ffffcU & 
                                       (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                        << 2U)) : (0x7ffff8U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                      << 3U)))),23);
        bufp->chgSData(oldp+1020,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+1021,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xcU][8U]),16);
        bufp->chgIData(oldp+1022,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+1023,(((((0xffU == (0xffU 
                                                & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [8U] 
                                                   >> 0x17U))) 
                                     & (0U != (0x7fffffU 
                                               & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                               [0xcU]
                                               [8U]))) 
                                    | (IData)(((0x7f800000U 
                                                == 
                                                (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                               & (0U 
                                                  != 
                                                  (0x7fffffU 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                    ? 0x7fc00000U : 
                                   (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                     & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                     ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xcU][8U] 
                                          >> 0x1fU) 
                                         != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x1fU))
                                         ? 0x7fc00000U
                                         : (0x7f800000U 
                                            | (0x80000000U 
                                               & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                               [0xcU]
                                               [8U])))
                                     : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                         ? (0x7f800000U 
                                            | (0x80000000U 
                                               & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                               [0xcU]
                                               [8U]))
                                         : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                             ? (0x7f800000U 
                                                | (0x80000000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                             : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                 ? 
                                                (0x80000000U 
                                                 & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xcU]
                                                    [8U] 
                                                    & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                 : 
                                                ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xcU]
                                                  [8U]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+1024,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                       [0xcU][8U] >> 0xfU))));
        bufp->chgCData(oldp+1025,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xcU][8U] 
                                            >> 0xaU))),5);
        bufp->chgSData(oldp+1026,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                   [0xcU][8U])),10);
        bufp->chgBit(oldp+1027,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xcU]
                                                  [8U] 
                                                  >> 0xaU))) 
                                 & (0U == (0x3ffU & 
                                           vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xcU][8U])))));
        bufp->chgBit(oldp+1028,(((0x1fU == (0x1fU & 
                                            (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                             [0xcU]
                                             [8U] >> 0xaU))) 
                                 & (0U == (0x3ffU & 
                                           vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xcU][8U])))));
        bufp->chgBit(oldp+1029,(((0x1fU == (0x1fU & 
                                            (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                             [0xcU]
                                             [8U] >> 0xaU))) 
                                 & (0U != (0x3ffU & 
                                           vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xcU][8U])))));
        bufp->chgBit(oldp+1030,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xcU]
                                                  [8U] 
                                                  >> 0xaU))) 
                                 & (0U != (0x3ffU & 
                                           vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xcU][8U])))));
        bufp->chgBit(oldp+1031,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+1032,((0x400U | (0x3ffU 
                                             & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                             [0xcU]
                                             [8U]))),11);
        bufp->chgIData(oldp+1033,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+1034,((0x1ffU & ((IData)(0x61U) 
                                             + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+1035,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                    ? (0x7ffffcU & 
                                       (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                        << 2U)) : (0x7ffff8U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                      << 3U)))),23);
        bufp->chgSData(oldp+1036,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+1037,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xcU][9U]),16);
        bufp->chgIData(oldp+1038,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+1039,(((((0xffU == (0xffU 
                                                & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xcU]
                                                   [9U] 
                                                   >> 0x17U))) 
                                     & (0U != (0x7fffffU 
                                               & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                               [0xcU]
                                               [9U]))) 
                                    | (IData)(((0x7f800000U 
                                                == 
                                                (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                               & (0U 
                                                  != 
                                                  (0x7fffffU 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                    ? 0x7fc00000U : 
                                   (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                     & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                     ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xcU][9U] 
                                          >> 0x1fU) 
                                         != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x1fU))
                                         ? 0x7fc00000U
                                         : (0x7f800000U 
                                            | (0x80000000U 
                                               & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                               [0xcU]
                                               [9U])))
                                     : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                         ? (0x7f800000U 
                                            | (0x80000000U 
                                               & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                               [0xcU]
                                               [9U]))
                                         : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                             ? (0x7f800000U 
                                                | (0x80000000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                             : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                 ? 
                                                (0x80000000U 
                                                 & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xcU]
                                                    [9U] 
                                                    & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                 : 
                                                ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xcU]
                                                  [9U]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+1040,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                       [0xcU][9U] >> 0xfU))));
        bufp->chgCData(oldp+1041,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xcU][9U] 
                                            >> 0xaU))),5);
        bufp->chgSData(oldp+1042,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                   [0xcU][9U])),10);
        bufp->chgBit(oldp+1043,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xcU]
                                                  [9U] 
                                                  >> 0xaU))) 
                                 & (0U == (0x3ffU & 
                                           vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xcU][9U])))));
        bufp->chgBit(oldp+1044,(((0x1fU == (0x1fU & 
                                            (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                             [0xcU]
                                             [9U] >> 0xaU))) 
                                 & (0U == (0x3ffU & 
                                           vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xcU][9U])))));
        bufp->chgBit(oldp+1045,(((0x1fU == (0x1fU & 
                                            (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                             [0xcU]
                                             [9U] >> 0xaU))) 
                                 & (0U != (0x3ffU & 
                                           vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xcU][9U])))));
        bufp->chgBit(oldp+1046,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xcU]
                                                  [9U] 
                                                  >> 0xaU))) 
                                 & (0U != (0x3ffU & 
                                           vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xcU][9U])))));
        bufp->chgBit(oldp+1047,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+1048,((0x400U | (0x3ffU 
                                             & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                             [0xcU]
                                             [9U]))),11);
        bufp->chgIData(oldp+1049,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+1050,((0x1ffU & ((IData)(0x61U) 
                                             + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+1051,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                    ? (0x7ffffcU & 
                                       (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                        << 2U)) : (0x7ffff8U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                      << 3U)))),23);
        bufp->chgSData(oldp+1052,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__12__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgBit(oldp+1053,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT____Vcellinp__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__weight_load_en));
        bufp->chgSData(oldp+1054,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xdU][0U]),16);
        bufp->chgIData(oldp+1055,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+1056,(((((0xffU == (0xffU 
                                                & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xdU]
                                                   [0U] 
                                                   >> 0x17U))) 
                                     & (0U != (0x7fffffU 
                                               & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                               [0xdU]
                                               [0U]))) 
                                    | (IData)(((0x7f800000U 
                                                == 
                                                (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                               & (0U 
                                                  != 
                                                  (0x7fffffU 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                    ? 0x7fc00000U : 
                                   (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                     & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                     ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xdU][0U] 
                                          >> 0x1fU) 
                                         != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x1fU))
                                         ? 0x7fc00000U
                                         : (0x7f800000U 
                                            | (0x80000000U 
                                               & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                               [0xdU]
                                               [0U])))
                                     : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                         ? (0x7f800000U 
                                            | (0x80000000U 
                                               & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                               [0xdU]
                                               [0U]))
                                         : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                             ? (0x7f800000U 
                                                | (0x80000000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                             : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                 ? 
                                                (0x80000000U 
                                                 & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xdU]
                                                    [0U] 
                                                    & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                 : 
                                                ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xdU]
                                                  [0U]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+1057,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                       [0xdU][0U] >> 0xfU))));
        bufp->chgCData(oldp+1058,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xdU][0U] 
                                            >> 0xaU))),5);
        bufp->chgSData(oldp+1059,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                   [0xdU][0U])),10);
        bufp->chgBit(oldp+1060,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xdU]
                                                  [0U] 
                                                  >> 0xaU))) 
                                 & (0U == (0x3ffU & 
                                           vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xdU][0U])))));
        bufp->chgBit(oldp+1061,(((0x1fU == (0x1fU & 
                                            (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                             [0xdU]
                                             [0U] >> 0xaU))) 
                                 & (0U == (0x3ffU & 
                                           vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xdU][0U])))));
        bufp->chgBit(oldp+1062,(((0x1fU == (0x1fU & 
                                            (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                             [0xdU]
                                             [0U] >> 0xaU))) 
                                 & (0U != (0x3ffU & 
                                           vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xdU][0U])))));
        bufp->chgBit(oldp+1063,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xdU]
                                                  [0U] 
                                                  >> 0xaU))) 
                                 & (0U != (0x3ffU & 
                                           vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xdU][0U])))));
        bufp->chgBit(oldp+1064,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+1065,((0x400U | (0x3ffU 
                                             & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                             [0xdU]
                                             [0U]))),11);
        bufp->chgIData(oldp+1066,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+1067,((0x1ffU & ((IData)(0x61U) 
                                             + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+1068,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                    ? (0x7ffffcU & 
                                       (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                        << 2U)) : (0x7ffff8U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                      << 3U)))),23);
        bufp->chgSData(oldp+1069,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+1070,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xdU][0xaU]),16);
        bufp->chgIData(oldp+1071,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+1072,(((((0xffU == (0xffU 
                                                & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xdU]
                                                   [0xaU] 
                                                   >> 0x17U))) 
                                     & (0U != (0x7fffffU 
                                               & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                               [0xdU]
                                               [0xaU]))) 
                                    | (IData)(((0x7f800000U 
                                                == 
                                                (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                               & (0U 
                                                  != 
                                                  (0x7fffffU 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                    ? 0x7fc00000U : 
                                   (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                     & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                     ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xdU][0xaU] 
                                          >> 0x1fU) 
                                         != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x1fU))
                                         ? 0x7fc00000U
                                         : (0x7f800000U 
                                            | (0x80000000U 
                                               & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                               [0xdU]
                                               [0xaU])))
                                     : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                         ? (0x7f800000U 
                                            | (0x80000000U 
                                               & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                               [0xdU]
                                               [0xaU]))
                                         : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                             ? (0x7f800000U 
                                                | (0x80000000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                             : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                 ? 
                                                (0x80000000U 
                                                 & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xdU]
                                                    [0xaU] 
                                                    & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                 : 
                                                ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xdU]
                                                  [0xaU]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+1073,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                       [0xdU][0xaU] 
                                       >> 0xfU))));
        bufp->chgCData(oldp+1074,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xdU][0xaU] 
                                            >> 0xaU))),5);
        bufp->chgSData(oldp+1075,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                   [0xdU][0xaU])),10);
        bufp->chgBit(oldp+1076,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xdU]
                                                  [0xaU] 
                                                  >> 0xaU))) 
                                 & (0U == (0x3ffU & 
                                           vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xdU][0xaU])))));
        bufp->chgBit(oldp+1077,(((0x1fU == (0x1fU & 
                                            (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                             [0xdU]
                                             [0xaU] 
                                             >> 0xaU))) 
                                 & (0U == (0x3ffU & 
                                           vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xdU][0xaU])))));
        bufp->chgBit(oldp+1078,(((0x1fU == (0x1fU & 
                                            (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                             [0xdU]
                                             [0xaU] 
                                             >> 0xaU))) 
                                 & (0U != (0x3ffU & 
                                           vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xdU][0xaU])))));
        bufp->chgBit(oldp+1079,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xdU]
                                                  [0xaU] 
                                                  >> 0xaU))) 
                                 & (0U != (0x3ffU & 
                                           vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xdU][0xaU])))));
        bufp->chgBit(oldp+1080,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
        bufp->chgSData(oldp+1081,((0x400U | (0x3ffU 
                                             & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                             [0xdU]
                                             [0xaU]))),11);
        bufp->chgIData(oldp+1082,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
        bufp->chgSData(oldp+1083,((0x1ffU & ((IData)(0x61U) 
                                             + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
        bufp->chgIData(oldp+1084,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                    ? (0x7ffffcU & 
                                       (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                        << 2U)) : (0x7ffff8U 
                                                   & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                      << 3U)))),23);
        bufp->chgSData(oldp+1085,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
        bufp->chgSData(oldp+1086,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                  [0xdU][0xbU]),16);
        bufp->chgIData(oldp+1087,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
        bufp->chgIData(oldp+1088,(((((0xffU == (0xffU 
                                                & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                   [0xdU]
                                                   [0xbU] 
                                                   >> 0x17U))) 
                                     & (0U != (0x7fffffU 
                                               & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                               [0xdU]
                                               [0xbU]))) 
                                    | (IData)(((0x7f800000U 
                                                == 
                                                (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                               & (0U 
                                                  != 
                                                  (0x7fffffU 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                    ? 0x7fc00000U : 
                                   (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                     & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                     ? (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                          [0xdU][0xbU] 
                                          >> 0x1fU) 
                                         != (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                             >> 0x1fU))
                                         ? 0x7fc00000U
                                         : (0x7f800000U 
                                            | (0x80000000U 
                                               & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                               [0xdU]
                                               [0xbU])))
                                     : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                         ? (0x7f800000U 
                                            | (0x80000000U 
                                               & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                               [0xdU]
                                               [0xbU]))
                                         : ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                             ? (0x7f800000U 
                                                | (0x80000000U 
                                                   & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                             : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                 & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                 ? 
                                                (0x80000000U 
                                                 & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                    [0xdU]
                                                    [0xbU] 
                                                    & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                 : 
                                                ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                  ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                  : 
                                                 ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                   ? 
                                                  vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                  [0xdU]
                                                  [0xbU]
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                    & (0U 
                                                       == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                    ? 0U
                                                    : 
                                                   ((0xffU 
                                                     <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                     ? 
                                                    (0x7f800000U 
                                                     | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                        << 0x1fU))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                      << 0x1fU) 
                                                     | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                         << 0x17U) 
                                                        | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
        bufp->chgBit(oldp+1089,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                       [0xdU][0xbU] 
                                       >> 0xfU))));
        bufp->chgCData(oldp+1090,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                            [0xdU][0xbU] 
                                            >> 0xaU))),5);
        bufp->chgSData(oldp+1091,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                   [0xdU][0xbU])),10);
        bufp->chgBit(oldp+1092,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xdU]
                                                  [0xbU] 
                                                  >> 0xaU))) 
                                 & (0U == (0x3ffU & 
                                           vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xdU][0xbU])))));
        bufp->chgBit(oldp+1093,(((0x1fU == (0x1fU & 
                                            (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                             [0xdU]
                                             [0xbU] 
                                             >> 0xaU))) 
                                 & (0U == (0x3ffU & 
                                           vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                           [0xdU][0xbU])))));
    }
}
